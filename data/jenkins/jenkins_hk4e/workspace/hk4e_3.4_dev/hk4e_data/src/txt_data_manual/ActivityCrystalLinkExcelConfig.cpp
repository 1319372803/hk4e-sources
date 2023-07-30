// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp

// Line 19: range 0000000012AEF648-0000000012AEFB1E
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::checkConfig(
        ActivityCrystalLinkExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  char v10[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityCrystalLinkExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  if ( ActivityCrystalLinkExcelConfigMgr::checkLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"checkLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ActivityCrystalLinkExcelConfigMgr::checkBuffConfig(this, txt_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
      "checkConfig",
      28);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])"checkBuffConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ActivityCrystalLinkExcelConfigMgr::checkDifficultyConfig(this, txt_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
      "checkConfig",
      33);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v7,
      (const char (*)[29])"checkDifficultyConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    ret = -1;
  }
  result = ret;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 40: range 0000000012AEFB20-0000000012AF1055
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::checkLevelConfig(
        const ActivityCrystalLinkExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_schedule_id; // rax
  data::NewActivityType ActivityTypeByScheduleId; // edx
  char v8; // al
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *schedule_id; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  char *v32; // rsi
  unsigned int *v33; // rax
  int *v34; // rdx
  int v35; // ecx
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  char *v39; // rsi
  unsigned int *v40; // rax
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int32_t ret; // [rsp+14h] [rbp-3ECh]
  data::ActivityCrystalLinkLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-3E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::reference v55; // [rsp+20h] [rbp-3E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *id; // [rsp+28h] [rbp-3D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *config; // [rsp+30h] [rbp-3D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-3C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-3C0h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+48h] [rbp-3B8h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+50h] [rbp-3B0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+58h] [rbp-3A8h]
  char v63[928]; // [rsp+60h] [rbp-3A0h] BYREF

  v2 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "22 48 4 16 activity_type:44 64 4 13 watcher_id:51 80 4 18 trial_avatar_id:60 96 4 15 cond_buff_i"
                        "d:69 112 4 17 effect_buff_id:77 128 8 14 __for_begin:42 160 8 12 __for_end:42 192 8 14 __for_beg"
                        "in:51 224 8 12 __for_end:51 256 8 14 __for_begin:60 288 8 12 __for_end:60 320 8 14 __for_begin:6"
                        "9 352 8 12 __for_end:69 384 8 14 __for_begin:77 416 8 12 __for_end:77 448 32 9 <unknown> 512 32 "
                        "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCrystalLinkExcelConfigMgr::checkLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  ret = 0;
  __for_range = &this->activity_crystal_link_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false> *)(v2 + 160)) )
  {
    v55 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false> *const)(v2 + 128));
    id = std::get<0ul,unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>(v55);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>(v55);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_schedule_id = &config->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_schedule_id);
    }
    schedule_id = (std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *)config->schedule_id;
    ActivityTypeByScheduleId = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(
                                 p_new_activity_config_mgr,
                                 (uint32_t)schedule_id);
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(schedule_id) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_store4(v2 + 48, schedule_id);
    *(_DWORD *)(v2 + 48) = ActivityTypeByScheduleId;
    if ( *(_DWORD *)(v2 + 48) != 2601 )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkLevelConfig",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              v10,
              (const char (*)[60])"ActivityType is not NEW_ACTIVITY_CRYSTAL_LINK. schedule_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->schedule_id);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" activity_type:");
      v14 = common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
              v13,
              (const data::NewActivityType *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" level_id:");
      schedule_id = id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->watcher_id_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v2 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
        break;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v2 + 64, v16);
      }
      *(_DWORD *)(v2 + 64) = v19;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 64)) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
          "checkLevelConfig",
          55);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v21,
                (const char (*)[35])"[CRYSTAL_LINK] invalid watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &config->trial_avatar_list;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v16);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v16);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v23 = (char *)(v2 + 288);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288)) )
        break;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
      v25 = (int *)v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      v26 = *v25;
      v27 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v23) = v27 != 0;
        __asan_report_store4(v2 + 80, v23);
      }
      *(_DWORD *)(v2 + 80) = v26;
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
              &txt_config_mgr->trial_avatar_config_mgr,
              *(unsigned int *)(v2 + 80)) )
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
          "checkLevelConfig",
          64);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v28,
                (const char (*)[40])"[CRYSTAL_LINK] invalid trial_avatar_id:");
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v2 + 80));
        v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
    }
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &config->cond_buff_id_list;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v23);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 320) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v23);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 352) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v32 = (char *)(v2 + 352);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 320),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 352)) )
        break;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
      v33 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 320));
      v34 = (int *)v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v33);
      }
      v35 = *v34;
      v36 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
      if ( v36 != 0 && v36 <= 3 )
      {
        LOBYTE(v32) = v36 != 0;
        __asan_report_store4(v2 + 96, v32);
      }
      *(_DWORD *)(v2 + 96) = v35;
      if ( !data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkCondBuffExcelConfig(
              this,
              *(unsigned int *)(v2 + 96)) )
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
          "checkLevelConfig",
          73);
        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v37,
                (const char (*)[37])"[CRYSTAL_LINK] invalid conf_buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 320));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    __for_range_3 = &config->effect_buff_id_list;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 384, v32);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 384) = std::vector<unsigned int>::begin(__for_range_3);
    *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 416, v32);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 416) = std::vector<unsigned int>::end(__for_range_3);
    while ( 1 )
    {
      v39 = (char *)(v2 + 416);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 384),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 416)) )
        break;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
      v40 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 384));
      v41 = (int *)v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v40);
      }
      v42 = *v41;
      v43 = *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000);
      if ( v43 != 0 && v43 <= 3 )
      {
        LOBYTE(v39) = v43 != 0;
        __asan_report_store4(v2 + 112, v39);
      }
      *(_DWORD *)(v2 + 112) = v42;
      if ( !data::ActivityCrystalLinkExcelConfigMgrBase::findActivityCrystalLinkEffectBuffExcelConfig(
              this,
              *(unsigned int *)(v2 + 112)) )
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
          "checkLevelConfig",
          81);
        v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v45 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v44,
                (const char (*)[39])"[CRYSTAL_LINK] invalid effect_buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 384));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           config->dungeon_id);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type != DUNGEON_CRYSTAL_LINK )
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 832, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 832),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
          "checkLevelConfig",
          94);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v50 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v49, (const char (*)[68])byte_1AA29800);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, &config->dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkLevelConfig",
        88);
      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v48 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v47, (const char (*)[47])byte_1AA297A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &config->dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false> *const)(v2 + 128));
  }
  if ( v63 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 102: range 0000000012AF1056-0000000012AF1725
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::checkBuffConfig(
        const ActivityCrystalLinkExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-18Ch]
  JsonConfigMgr *json_config_mgr; // [rsp+18h] [rbp-188h]
  data::ActivityCrystalLinkCondBuffExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  data::ActivityCrystalLinkEffectBuffExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false,false>::reference v19; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig> >::type *id_0; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig> >::type *config_0; // [rsp+40h] [rbp-160h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false,false>::reference v22; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig> >::type *id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig> >::type *config; // [rsp+58h] [rbp-148h]
  char v25[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:105 64 8 13 __for_end:105 96 8 15 __for_begin:113 128 8 13 __for_end:113 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCrystalLinkExcelConfigMgr::checkBuffConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->activity_crystal_link_cond_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkCondBuffExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityCrystalLinkCondBuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkCondBuffExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityCrystalLinkCondBuffExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false> *)(v2 + 64)) )
      break;
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>(v22);
    if ( !JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &config->ability_group_name) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkBuffConfig",
        109);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v6,
             (const char (*)[28])"invalid ability_group_name:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &config->ability_group_name);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" cond_buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkCondBuffExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->activity_crystal_link_effect_buff_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkEffectBuffExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityCrystalLinkEffectBuffExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkEffectBuffExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivityCrystalLinkEffectBuffExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false> *)(v2 + 128)) )
  {
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false,false> *const)(v2 + 96));
    id_0 = std::get<0ul,unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>(v19);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>(v19);
    if ( !JsonConfigMgr::findAbilityGroupConfig(json_config_mgr, &config_0->ability_group_name) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkBuffConfig",
        117);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v10,
              (const char (*)[28])"invalid ability_group_name:");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &config_0->ability_group_name);
      v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" effect_buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkEffectBuffExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v25 == (char *)v2 )
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

// Line 125: range 0000000012AF1726-0000000012AF1D5A
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::checkDifficultyConfig(
        const ActivityCrystalLinkExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_schedule_id; // rax
  __int64 schedule_id; // rsi
  data::NewActivityType ActivityTypeByScheduleId; // edx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  data::ActivityCrystalLinkDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false,false>::reference v24; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig> >::type *id; // [rsp+30h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig> >::type *config; // [rsp+38h] [rbp-128h]
  char v27[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 activity_type:129 64 8 15 __for_begin:127 96 8 13 __for_end:127 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCrystalLinkExcelConfigMgr::checkDifficultyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->activity_crystal_link_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkDifficultyExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityCrystalLinkDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCrystalLinkDifficultyExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityCrystalLinkDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false> *)(v2 + 96)) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>(v24);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_schedule_id = &config->schedule_id;
    if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_schedule_id);
    }
    schedule_id = config->schedule_id;
    ActivityTypeByScheduleId = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(
                                 p_new_activity_config_mgr,
                                 schedule_id);
    v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(schedule_id) = v9 != 0;
      __asan_report_store4(v2 + 48, schedule_id);
    }
    *(_DWORD *)(v2 + 48) = ActivityTypeByScheduleId;
    if ( *(_DWORD *)(v2 + 48) != 2601 )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkDifficultyConfig",
        132);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              v10,
              (const char (*)[60])"ActivityType is not NEW_ACTIVITY_CRYSTAL_LINK. schedule_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->schedule_id);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" activity_type:");
      v14 = common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
              v13,
              (const data::NewActivityType *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" difficulty_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->score_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->score_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->score_ratio);
    }
    if ( config->score_ratio <= 0.0 )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
        "checkDifficultyConfig",
        137);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v16,
              (const char (*)[21])"invalid score_ratio:");
      v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, &config->score_ratio);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])" difficulty_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkDifficultyExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 145: range 0000000012AF1D5C-0000000012AF1F3F
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::rewriteConfig(
        ActivityCrystalLinkExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCrystalLinkExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityCrystalLinkExcelConfigMgr::rewriteLevelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityCrystalLinkExcelConfig.cpp",
      "rewriteConfig",
      148);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"rewriteLevelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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
  return result;
};

// Line 155: range 0000000012AF1F40-0000000012AF214A
int32_t __cdecl ActivityCrystalLinkExcelConfigMgr::rewriteLevelConfig(
        ActivityCrystalLinkExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::ActivityCrystalLinkLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:156 64 8 13 __for_end:156";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>::__node_type *)ActivityCrystalLinkExcelConfigMgr::rewriteLevelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_crystal_link_level_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivityCrystalLinkLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>(v8);
    v5 = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->schedule_level_map_, &config->schedule_id);
    std::vector<unsigned int>::push_back(v5, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCrystalLinkLevelExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 164: range 0000000012AF214C-0000000012AF230D
const std::vector<unsigned int> *__fastcall ActivityCrystalLinkExcelConfigMgr::findScheduleLevelIdVec(
        const ActivityCrystalLinkExcelConfigMgr *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_schedule_level_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:163 64 8 8 iter:165 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCrystalLinkExcelConfigMgr::findScheduleLevelIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_schedule_level_map = &this->schedule_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_schedule_level_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->schedule_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDeliveryExcelConfig.cpp

// Line 18: range 0000000012AF230E-0000000012AF2380
int32_t __cdecl ActivityDeliveryExcelConfigMgr::rewriteConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityDeliveryExcelConfigMgr::rewriteDeliveryConfig(this, txt_config_mgr)
    || ActivityDeliveryExcelConfigMgr::rewriteDeliveryDailyConfig(this, txt_config_mgr)
    || ActivityDeliveryExcelConfigMgr::rewriteDeliveryWatchConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 29: range 0000000012AF2382-0000000012AF258D
int32_t __cdecl ActivityDeliveryExcelConfigMgr::checkConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDeliveryExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDeliveryExcelConfigMgr::checkDeliveryConfig(this, txt_config_mgr)
    || ActivityDeliveryExcelConfigMgr::checkDeliveryDailyConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
      "checkConfig",
      33);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v6,
      (const char (*)[32])"checkDeliveryDailyConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 40: range 0000000012AF258E-0000000012AF2CBA
int32_t __cdecl ActivityDeliveryExcelConfigMgr::checkDeliveryConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // edx
  int32_t result; // eax
  data::ActivityDeliveryExcelConfigMap *__for_range; // [rsp+10h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::reference v22; // [rsp+18h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityDeliveryExcelConfig> >::type *schedule_id; // [rsp+20h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryExcelConfig> >::type *data_config; // [rsp+28h] [rbp-188h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-180h]
  char v26[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 18 daily_config_id:49 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:49"
                        " 160 8 12 __for_end:49 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::checkDeliveryConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->activity_delivery_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false> *)(v3 + 96)) )
    {
      v10 = 1;
      goto LABEL_36;
    }
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false> *const)(v3 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityDeliveryExcelConfig>(v22);
    data_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDeliveryExcelConfig>(v22);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v7 = *schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v7) )
      break;
    __for_range_0 = &data_config->daily_config_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v11 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v18 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v11) = v15 != 0;
        __asan_report_store4(v3 + 48, v11);
      }
      *(_DWORD *)(v3 + 48) = v14;
      if ( !data::ActivityDeliveryExcelConfigMgrBase::findActivityDeliveryDailyExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
      "checkDeliveryConfig",
      54);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v16, (const char (*)[43])byte_1AA29DC0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v18 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v10 = 0;
      goto LABEL_36;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
    "checkDeliveryConfig",
    45);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1AA29D60);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v10 = 0;
LABEL_36:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 63: range 0000000012AF2CBC-0000000012AF3B18
int32_t __cdecl ActivityDeliveryExcelConfigMgr::checkDeliveryDailyConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  uint32_t *p_delivery_quest_id; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  uint32_t main_id; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  QuestExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  QuestExcelConfigMgr *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  data::ActivityDeliveryDailyExcelConfigMap *__for_range; // [rsp+18h] [rbp-298h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::reference v30; // [rsp+20h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig> >::type *config; // [rsp+30h] [rbp-280h]
  const std::vector<data::DeliveryQuestConfig> *__for_range_0; // [rsp+38h] [rbp-278h]
  const data::DeliveryQuestConfig *quest_config; // [rsp+40h] [rbp-270h]
  const data::QuestExcelConfig *quest_excel_config; // [rsp+48h] [rbp-268h]
  const data::QuestExcelConfig *start_quest_excel_config; // [rsp+50h] [rbp-260h]
  char v36[592]; // [rsp+60h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 14 __for_begin:64 64 8 12 __for_end:64 96 8 14 __for_begin:66 128 8 12 __for_end:66 160 "
                        "32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::checkDeliveryDailyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->activity_delivery_daily_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false> *)(v3 + 64)) )
    {
      v24 = 1;
      goto LABEL_62;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityDeliveryDailyExcelConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityDeliveryDailyExcelConfig>(v30);
    __for_range_0 = &config->delivery_quest_config;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v3 + 96) = std::vector<data::DeliveryQuestConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v3 + 128) = std::vector<data::DeliveryQuestConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v3 + 128)) )
      {
        v11 = 1;
        goto LABEL_52;
      }
      quest_config = __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v3 + 96));
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      p_delivery_quest_id = &quest_config->delivery_quest_id;
      if ( *(_BYTE *)(((unsigned __int64)p_delivery_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_delivery_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_delivery_quest_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(p_delivery_quest_id);
      }
      quest_excel_config = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                             p_quest_config_mgr,
                             quest_config->delivery_quest_id);
      if ( !quest_excel_config )
      {
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "checkDeliveryDailyConfig",
          71);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v9, (const char (*)[45])byte_1AA29F40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &quest_config->delivery_quest_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
        goto LABEL_52;
      }
      if ( *(_BYTE *)(((unsigned __int64)&quest_excel_config->main_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)quest_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_excel_config->main_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&quest_excel_config->main_id);
      }
      main_id = quest_excel_config->main_id;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config->parent_quest_id);
      }
      if ( main_id != quest_config->parent_quest_id )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "checkDeliveryDailyConfig",
          76);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1AA29FA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &quest_excel_config->main_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
        goto LABEL_52;
      }
      v15 = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config->start_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config->start_quest_id);
      }
      start_quest_excel_config = data::QuestExcelConfigMgrBase::findQuestExcelConfig(v15, quest_config->start_quest_id);
      if ( !start_quest_excel_config )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "checkDeliveryDailyConfig",
          83);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v16, (const char (*)[45])byte_1AA29FE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &quest_config->start_quest_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
        goto LABEL_52;
      }
      if ( *(_BYTE *)(((unsigned __int64)&start_quest_excel_config->main_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)start_quest_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&start_quest_excel_config->main_id >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&start_quest_excel_config->main_id);
      }
      v18 = start_quest_excel_config->main_id;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config->parent_quest_id);
      }
      if ( v18 != quest_config->parent_quest_id )
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "checkDeliveryDailyConfig",
          88);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v19, (const char (*)[32])byte_1AA29FA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &start_quest_excel_config->main_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
        goto LABEL_52;
      }
      v21 = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config->parent_quest_id);
      }
      if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(v21, quest_config->parent_quest_id) )
        break;
      __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
      "checkDeliveryDailyConfig",
      95);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v22, (const char (*)[39])byte_1AA2A040);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &quest_config->parent_quest_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_52:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v24 = 0;
      goto LABEL_62;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->daily_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->daily_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->daily_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->daily_reward_id,
                            ITEM_LIMIT_ACTIVITY_DELIVERY) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 480, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 480),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
    "checkDeliveryDailyConfig",
    102);
  v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v25, (const char (*)[42])byte_1AA2A0A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->daily_reward_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v24 = 0;
LABEL_62:
  if ( v24 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 110: range 0000000012AF3B1A-0000000012AF440E
int32_t __cdecl ActivityDeliveryExcelConfigMgr::rewriteDeliveryConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::vector<unsigned int>::reference v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  char v10; // al
  std::vector<unsigned int>::size_type v11; // r14
  std::vector<unsigned int> *p_daily_config_id_list; // rcx
  std::vector<unsigned int>::size_type v13; // rsi
  std::vector<unsigned int>::reference v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  __int64 v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  std::vector<unsigned int> *v22; // rax
  std::vector<unsigned int> *v23; // rax
  int v24; // edx
  int v25; // eax
  int32_t result; // eax
  data::ActivityDeliveryExcelConfigMap *__for_range; // [rsp+28h] [rbp-1A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-1A0h]
  const unsigned int *schedule_id; // [rsp+38h] [rbp-198h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityDeliveryExcelConfig> >::type *config; // [rsp+40h] [rbp-190h]
  data::ActivityDeliveryDailyExcelConfig *daily_config_ptr; // [rsp+48h] [rbp-188h]
  const std::vector<data::DeliveryQuestConfig> *__for_range_0; // [rsp+50h] [rbp-180h]
  const data::DeliveryQuestConfig *quest_config; // [rsp+58h] [rbp-178h]
  char v34[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 13 day_index:117 48 4 19 daily_config_id:119 64 8 15 __for_begin:111 96 8 13 __for_end:11"
                        "1 128 8 15 __for_begin:127 160 8 13 __for_end:127 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::rewriteDeliveryConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -202116109;
  __for_range = &this->activity_delivery_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityDeliveryExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false> *const)(v3 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityDeliveryExcelConfig>(__in);
    for ( config = std::get<1ul,unsigned int const,data::ActivityDeliveryExcelConfig>(__in);
          ;
          std::vector<unsigned int>::pop_back(&config->daily_config_id_list) )
    {
      if ( std::vector<unsigned int>::empty(&config->daily_config_id_list) )
        goto LABEL_16;
      v7 = std::vector<unsigned int>::back(&config->daily_config_id_list);
      v8 = v7;
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      LOBYTE(v6) = v9 != 0;
      if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
        __asan_report_load4(v7);
      if ( *v8 )
LABEL_16:
        v10 = 0;
      else
        v10 = 1;
      if ( !v10 )
        break;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, v6);
    for ( *(_DWORD *)(v3 + 32) = 0; ; ++*(_DWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v11 = *(unsigned int *)(v3 + 32);
      if ( v11 >= std::vector<unsigned int>::size(&config->daily_config_id_list) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      p_daily_config_id_list = &config->daily_config_id_list;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v13 = *(unsigned int *)(v3 + 32);
      v14 = std::vector<unsigned int>::operator[](p_daily_config_id_list, v13);
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(v3 + 48, v13);
      }
      *(_DWORD *)(v3 + 48) = v16;
      v18 = *(unsigned int *)(v3 + 48);
      daily_config_ptr = data::ActivityDeliveryExcelConfigMgrBase::findActivityDeliveryDailyExcelConfig(this, v18);
      if ( daily_config_ptr )
      {
        __for_range_0 = &daily_config_ptr->delivery_quest_config;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v18);
        *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v3 + 128) = std::vector<data::DeliveryQuestConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v18);
        *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v3 + 160) = std::vector<data::DeliveryQuestConfig>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v3 + 160)) )
        {
          quest_config = __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v3 + 128));
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v3 + 160);
          *(std::pair<unsigned int,unsigned int> *)(v3 + 192) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                  schedule_id,
                                                                  (unsigned int *)(v3 + 32));
          v22 = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::operator[](
                  &this->daily_delivery_quest_map,
                  (std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::key_type *)(v3 + 192));
          std::vector<unsigned int>::push_back(v22, &quest_config->delivery_quest_id);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, &quest_config->delivery_quest_id);
          *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                  schedule_id,
                                                                  (unsigned int *)(v3 + 32));
          v23 = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::operator[](
                  &this->daily_delivery_parent_quest_map,
                  (std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::key_type *)(v3 + 224));
          std::vector<unsigned int>::push_back(v23, &quest_config->parent_quest_id);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v3 + 128));
        }
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v21 = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "rewriteDeliveryConfig",
          123);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v19, (const char (*)[43])byte_1AA2A220);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v21 != 1 )
      {
        v24 = 0;
        goto LABEL_53;
      }
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
    }
    v24 = 1;
LABEL_53:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v24 != 1 )
    {
      v25 = 0;
      goto LABEL_57;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryExcelConfig>,false,false> *const)(v3 + 64));
  }
  v25 = 1;
LABEL_57:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 139: range 0000000012AF4410-0000000012AF4946
int32_t __cdecl ActivityDeliveryExcelConfigMgr::rewriteDeliveryDailyConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::unordered_set<unsigned int> *v12; // rax
  int32_t result; // eax
  data::ActivityDeliveryDailyExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-150h]
  std::vector<data::DeliveryQuestConfig> *__for_range_0; // [rsp+38h] [rbp-138h]
  const data::DeliveryQuestConfig *quest_config; // [rsp+40h] [rbp-130h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-128h]
  char v19[288]; // [rsp+50h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 14 watcher_id:144 64 8 15 __for_begin:140 96 8 13 __for_end:140 128 8 15 __for_begin:142 "
                        "160 8 13 __for_end:142 192 8 15 __for_begin:144 224 8 13 __for_end:144";
  *(_QWORD *)(v2 + 16) = ActivityDeliveryExcelConfigMgr::rewriteDeliveryDailyConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -202116352;
  __for_range = &this->activity_delivery_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityDeliveryDailyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false> *)(v2 + 96)) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::ActivityDeliveryDailyExcelConfig>(v15);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ActivityDeliveryDailyExcelConfig>(v15)->delivery_quest_config;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v2 + 128) = std::vector<data::DeliveryQuestConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::DeliveryQuestConfig>::const_iterator *)(v2 + 160) = std::vector<data::DeliveryQuestConfig>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *)(v2 + 160)) )
        break;
      quest_config = __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v2 + 128));
      __for_range_1 = &quest_config->watcher_id;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 224, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v7 = (char *)(v2 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        v9 = (int *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        v11 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v11 != 0 && v11 <= 3 )
        {
          LOBYTE(v7) = v11 != 0;
          __asan_report_store4(v2 + 48, v7);
        }
        *(_DWORD *)(v2 + 48) = v10;
        v12 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                &this->daily_delivery_watcher_quest_map,
                (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
        std::unordered_set<unsigned int>::insert(v12, &quest_config->delivery_quest_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<data::DeliveryQuestConfig const*,std::vector<data::DeliveryQuestConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DeliveryQuestConfig*,std::vector<data::DeliveryQuestConfig> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryDailyExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v19 == (char *)v2 )
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

// Line 154: range 0000000012AF4948-0000000012AF4CD0
int32_t __cdecl ActivityDeliveryExcelConfigMgr::rewriteDeliveryWatchConfig(
        ActivityDeliveryExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig> >::type *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  data::ActivityDeliveryWatcherDataConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::reference __in; // [rsp+18h] [rbp-E8h]
  uint32_t *id; // [rsp+20h] [rbp-E0h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:155 64 8 13 __for_end:155 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::rewriteDeliveryWatchConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_delivery_watcher_data_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityDeliveryWatcherDataConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v7 = std::get<1ul,unsigned int const,data::ActivityDeliveryWatcherDataConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)id;
      __asan_report_load4(id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *id, v7) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityDeliveryWatcherDataConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
    "rewriteDeliveryWatchConfig",
    159);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         v8,
         (const char (*)[26])"addWatcherConfig failed, ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 167: range 0000000012AF4CD2-0000000012AF4F7F
const std::vector<unsigned int> *__fastcall ActivityDeliveryExcelConfigMgr::findDeliveryQuestIdVecByDayIndex(
        const ActivityDeliveryExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // ecx
  char v7; // al
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>> *p_daily_delivery_quest_map; // rdx
  bool v9; // al
  const std::vector<unsigned int> *result; // rax
  char v12[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 <unknown> 48 4 15 schedule_id:166 64 8 8 iter:168 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::findDeliveryQuestIdVecByDayIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = schedule_id;
  v6 = day_index - 1;
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(schedule_id) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 32, schedule_id);
  *(_DWORD *)(v3 + 32) = v6;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, schedule_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int>(
                                                         (unsigned int *)(v3 + 48),
                                                         (unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 32);
  *(std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::find(&this->daily_delivery_quest_map, (const std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_daily_delivery_quest_map = &this->daily_delivery_quest_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::end(p_daily_delivery_quest_map);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > *const)(v3 + 64))->second;
  if ( v12 == (char *)v3 )
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

// Line 178: range 0000000012AF4F80-0000000012AF522D
const std::vector<unsigned int> *__fastcall ActivityDeliveryExcelConfigMgr::findDeliveryParentQuestIdVecByDayIndex(
        const ActivityDeliveryExcelConfigMgr *const this,
        __int64 schedule_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // ecx
  char v7; // al
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>> *p_daily_delivery_parent_quest_map; // rdx
  bool v9; // al
  const std::vector<unsigned int> *result; // rax
  char v12[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 <unknown> 48 4 15 schedule_id:177 64 8 8 iter:179 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::findDeliveryParentQuestIdVecByDayIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 48) = schedule_id;
  v6 = day_index - 1;
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(schedule_id) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 32, schedule_id);
  *(_DWORD *)(v3 + 32) = v6;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, schedule_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int>(
                                                         (unsigned int *)(v3 + 48),
                                                         (unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 32);
  *(std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::find(&this->daily_delivery_parent_quest_map, (const std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_daily_delivery_parent_quest_map = &this->daily_delivery_parent_quest_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::end(p_daily_delivery_parent_quest_map);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > *const)(v3 + 64))->second;
  if ( v12 == (char *)v3 )
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

// Line 189: range 0000000012AF522E-0000000012AF5959
const data::ActivityDeliveryDailyExcelConfig *__fastcall ActivityDeliveryExcelConfigMgr::findDailyConfig(
        const ActivityDeliveryExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t day_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  const data::ActivityDeliveryDailyExcelConfig *result; // rax
  std::vector<unsigned int>::size_type v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const data::ActivityDeliveryExcelConfig *delivery_config_ptr; // [rsp+10h] [rbp-1A0h]
  const data::ActivityDeliveryDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-198h]
  char v27[400]; // [rsp+20h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 19 daily_config_id:209 64 4 15 schedule_id:188 80 4 13 day_index:188 96 32 9 <unknown> 16"
                        "0 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDeliveryExcelConfigMgr::findDailyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 64) = schedule_id;
  *(_DWORD *)(v3 + 80) = day_index;
  delivery_config_ptr = data::ActivityDeliveryExcelConfigMgrBase::findActivityDeliveryExcelConfig(
                          this,
                          *(unsigned int *)(v3 + 64));
  if ( delivery_config_ptr )
  {
    if ( *(_DWORD *)(v3 + 80) )
    {
      v8 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
      if ( v8 < std::vector<unsigned int>::size(&delivery_config_ptr->daily_config_id_list) )
      {
        v14 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
        v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &delivery_config_ptr->daily_config_id_list,
                                                                                                    v14);
        v16 = (int *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v18 != 0 && v18 <= 3 )
        {
          LOBYTE(v14) = v18 != 0;
          __asan_report_store4(v3 + 48, v14);
        }
        *(_DWORD *)(v3 + 48) = v17;
        daily_config_ptr = data::ActivityDeliveryExcelConfigMgrBase::findActivityDeliveryDailyExcelConfig(
                             this,
                             *(unsigned int *)(v3 + 48));
        if ( daily_config_ptr )
        {
          result = daily_config_ptr;
        }
        else
        {
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
            "findDailyConfig",
            213);
          v19 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[60])"findActivityDeliveryDailyExcelConfig fail, daily_config_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v20,
                  (const char (*)[14])" schedule_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 64));
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" day_index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          result = 0LL;
        }
      }
      else
      {
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
          "findDailyConfig",
          205);
        v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[28])"invalid index, schedule_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" day_index:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 80));
        v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v12,
                (const char (*)[23])" daily_config_id_list:");
        common::milog::MiLogStream::operator<<<unsigned int>(v13, &delivery_config_ptr->daily_config_id_list);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        result = 0LL;
      }
    }
    else
    {
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
        "findDailyConfig",
        199);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v3 + 160),
        (const char (*)[25])"day index cannot be zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityDeliveryExcelConfig.cpp",
      "findDailyConfig",
      193);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[51])"findActivityDeliveryExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0LL;
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

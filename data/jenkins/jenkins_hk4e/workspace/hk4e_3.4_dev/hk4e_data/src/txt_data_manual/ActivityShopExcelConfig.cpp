// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityShopExcelConfig.cpp

// Line 19: range 0000000012E18682-0000000012E189A6
int32_t __cdecl ActivityShopExcelConfigMgr::checkConfig(
        ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityShopExcelConfigMgr::checkOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "checkConfig",
      22);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v5,
      (const char (*)[42])"[ACTIVITY_SHOP] checkOverallConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityShopExcelConfigMgr::checkSheetConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])"[ACTIVITY_SHOP] checkSheetConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 36: range 0000000012E189A8-0000000012E18CCC
int32_t __cdecl ActivityShopExcelConfigMgr::rewriteConfig(
        ActivityShopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityShopExcelConfigMgr::rewriteOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "rewriteConfig",
      39);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"[ACTIVITY_SHOP] rewriteOverallConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityShopExcelConfigMgr::rewriteSheetConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "rewriteConfig",
      45);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v7,
      (const char (*)[42])"[ACTIVITY_SHOP] rewriteSheetConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 53: range 0000000012E18CCE-0000000012E19A93
int32_t __cdecl ActivityShopExcelConfigMgr::checkOverallConfig(
        ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  NewActivityExcelConfigMgr *v17; // rcx
  __int64 v18; // rsi
  data::NewActivityType ActivityTypeByScheduleId; // edx
  char v20; // al
  __int64 v21; // rsi
  data::ShopType v22; // ecx
  char v23; // al
  std::set<unsigned int> *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-29Ch]
  data::ActivityShopOverallExcelConfigMap *__for_range; // [rsp+18h] [rbp-298h]
  std::map<unsigned int,std::set<unsigned int>> *__for_range_1; // [rsp+20h] [rbp-290h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::reference v32; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *shop_type; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *activity_type_set; // [rsp+38h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::reference v35; // [rsp+40h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *schedule_id; // [rsp+48h] [rbp-268h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *excel_config; // [rsp+50h] [rbp-260h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-258h]
  char v39[592]; // [rsp+60h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 4 11 sheet_id:65 48 4 16 activity_type:74 64 4 9 <unknown> 80 8 14 __for_begin:56 112 8 12"
                        " __for_end:56 144 8 14 __for_begin:65 176 8 12 __for_end:65 208 8 14 __for_begin:78 240 8 12 __f"
                        "or_end:78 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 48 30 shop_type_activity_type_map:55";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::checkOverallConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862736] = -202116109;
  ret = 0;
  std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 464));
  __for_range = &this->activity_shop_overall_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false> *)(v2 + 112)) )
      break;
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false> *const)(v2 + 80));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityShopOverallExcelConfig>(v35);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityShopOverallExcelConfig>(v35);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v7 = *schedule_id;
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(p_new_activity_config_mgr, v7) )
    {
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkOverallConfig",
        61);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 272),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1AAAA9A0);
      v7 = (__int64)schedule_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &excel_config->sheet_list;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v7);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v7);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v2 + 176);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v2 + 32, v10);
      }
      *(_DWORD *)(v2 + 32) = v13;
      if ( !data::ActivityShopExcelConfigMgrBase::findActivityShopSheetExcelConfig(this, *(unsigned int *)(v2 + 32)) )
      {
        *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
          "checkOverallConfig",
          69);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v15, (const char (*)[45])byte_1AAAAA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
        *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    v17 = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    v18 = *schedule_id;
    ActivityTypeByScheduleId = NewActivityExcelConfigMgr::getActivityTypeByScheduleId(v17, v18);
    v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(v18) = v20 != 0;
      __asan_report_store4(v2 + 48, v18);
    }
    *(_DWORD *)(v2 + 48) = ActivityTypeByScheduleId;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    v21 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->shop_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->shop_type);
    }
    v22 = excel_config->shop_type;
    v23 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( v23 != 0 && v23 <= 3 )
    {
      LOBYTE(v21) = v23 != 0;
      __asan_report_store4(v2 + 64, v21);
    }
    *(_DWORD *)(v2 + 64) = v22;
    v24 = std::map<unsigned int,std::set<unsigned int>>::operator[](
            (std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 464),
            (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 64));
    std::set<unsigned int>::insert(v24, (const std::set<unsigned int>::value_type *)(v2 + 48));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false> *const)(v2 + 80));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = (std::map<unsigned int,std::set<unsigned int>> *)(v2 + 464);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 208, v5);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 208) = std::map<unsigned int,std::set<unsigned int>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 240, v5);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 240) = std::map<unsigned int,std::set<unsigned int>>::end(__for_range_1);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 208),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 240)) )
  {
    v32 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 208));
    shop_type = std::get<0ul,unsigned int const,std::set<unsigned int>>(v32);
    activity_type_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v32);
    if ( std::set<unsigned int>::size(activity_type_set) != 1 )
    {
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 400, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkOverallConfig",
        82);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v25, (const char (*)[68])byte_1AAAAA60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, shop_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
      *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 208));
  }
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v2 + 464));
  result = ret;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 91: range 0000000012E19A94-0000000012E19FA0
int32_t __cdecl ActivityShopExcelConfigMgr::checkSheetConfig(
        ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // edx
  int v10; // eax
  int32_t result; // eax
  data::ActivityShopSheetExcelConfigMap *__for_range; // [rsp+10h] [rbp-140h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-138h]
  uint32_t *id; // [rsp+20h] [rbp-130h]
  std::vector<data::ActivityShopSheetCond> *__for_range_0; // [rsp+30h] [rbp-120h]
  __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> >::reference sheet_cond; // [rsp+38h] [rbp-118h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:92 64 8 12 __for_end:92 96 8 14 __for_begin:94 128 8 12 __for_end:94 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityShopExcelConfigMgr::checkSheetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  __for_range = &this->activity_shop_sheet_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false> *)(v3 + 64)) )
      break;
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityShopSheetExcelConfig>(v14);
    __for_range_0 = &std::get<1ul,unsigned int const,data::ActivityShopSheetExcelConfig>(v14)->cond;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::ActivityShopSheetCond>::const_iterator *)(v3 + 96) = std::vector<data::ActivityShopSheetCond>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::ActivityShopSheetCond>::const_iterator *)(v3 + 128) = std::vector<data::ActivityShopSheetCond>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>(
              (const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *)(v3 + 128)) )
      {
        v9 = 1;
        goto LABEL_24;
      }
      sheet_cond = __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( ActivityShopExcelConfigMgr::checkShopSheetCond(this, txt_config_mgr, *id, sheet_cond) )
        break;
      __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator++((__gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "checkSheetConfig",
      98);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v7, (const char (*)[52])byte_1AAAABA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v9 = 0;
LABEL_24:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
    {
      v10 = 0;
      goto LABEL_28;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false> *const)(v3 + 32));
  }
  v10 = 1;
LABEL_28:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 108: range 0000000012E19FA2-0000000012E1AB6F
int32_t __cdecl ActivityShopExcelConfigMgr::checkShopSheetCond(
        ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t sheet_id,
        const data::ActivityShopSheetCond *sheet_cond)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::ActivityShopSheetCondType type; // eax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<unsigned int>::size_type v13; // rax
  std::vector<unsigned int>::const_reference v14; // rax
  unsigned int *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const unsigned int *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::vector<unsigned int>::size_type v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::vector<unsigned int>::size_type v30; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v31; // rax
  uint32_t *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  char v39[560]; // [rsp+20h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 3"
                        "2 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityShopExcelConfigMgr::checkShopSheetCond;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&sheet_cond->type);
  }
  type = sheet_cond->type;
  if ( type == ACTIVITY_SHOP_SHEET_COND_SEA_LAMP_PHASE )
  {
    if ( std::vector<unsigned int>::empty(&sheet_cond->param) )
    {
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkShopSheetCond",
        144);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v26,
              (const char (*)[28])"[ACTIVITY_SHOP] cond_type: ");
      v28 = common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
              v27,
              &sheet_cond->type);
      v29 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v28, (const char (*)[22])byte_1AAAAD40);
      v30 = std::vector<unsigned int>::size(&sheet_cond->param);
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        v30 = __asan_report_store8(v4 + 96, byte_1AAAAD40);
      *(_QWORD *)(v4 + 96) = v30;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v29, (const unsigned __int64 *)(v4 + 96));
      *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      result = -1;
    }
    else
    {
      v31 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &sheet_cond->param,
                                                                                                  0LL);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      if ( !ActivityShopExcelConfigMgr::checkSeaLampSection(this, txt_config_mgr, sheet_id, *v32) )
        goto LABEL_46;
      if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkShopSheetCond",
        149);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        v33,
        (const char (*)[42])"[ACTIVITY_SHOP] checkSeaLampSection fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
      result = -1;
    }
  }
  else
  {
    if ( type > ACTIVITY_SHOP_SHEET_COND_SEA_LAMP_PHASE )
    {
LABEL_43:
      if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkShopSheetCond",
        156);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v34,
              (const char (*)[28])"[ACTIVITY_SHOP] cond_type: ");
      v36 = common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
              v35,
              &sheet_cond->type);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v36, (const char (*)[14])byte_1AAAAE20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
      result = -1;
      goto LABEL_47;
    }
    if ( type != ACTIVITY_SHOP_SHEET_COND_TIME_EQUAL_GREATER )
    {
      if ( type == ACTIVITY_SHOP_SHEET_COND_NONE )
      {
        result = 0;
        goto LABEL_47;
      }
      if ( type != ACTIVITY_SHOP_SHEET_COND_QUEST_FINISH )
        goto LABEL_43;
      if ( std::vector<unsigned int>::size(&sheet_cond->param) != 1 )
      {
        if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
          "checkShopSheetCond",
          119);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v4 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v9,
                (const char (*)[28])"[ACTIVITY_SHOP] cond_type: ");
        v11 = common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
                v10,
                &sheet_cond->type);
        v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v11, (const char (*)[22])byte_1AAAAD40);
        v13 = std::vector<unsigned int>::size(&sheet_cond->param);
        if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
          v13 = __asan_report_store8(v4 + 32, byte_1AAAAD40);
        *(_QWORD *)(v4 + 32) = v13;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v4 + 32));
        *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
        result = -1;
        goto LABEL_47;
      }
      v14 = std::vector<unsigned int>::operator[](&sheet_cond->param, 0LL);
      v15 = (unsigned int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(&txt_config_mgr->quest_config_mgr, *v15) )
      {
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
          "checkShopSheetCond",
          126);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v16,
                (const char (*)[28])"[ACTIVITY_SHOP] cond_type: ");
        v18 = common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
                v17,
                &sheet_cond->type);
        v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v18, (const char (*)[27])byte_1AAAAD80);
        v20 = std::vector<unsigned int>::operator[](&sheet_cond->param, 0LL);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, v20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = -1;
        goto LABEL_47;
      }
LABEL_46:
      result = 0;
      goto LABEL_47;
    }
    if ( std::vector<unsigned int>::size(&sheet_cond->param) == 1 )
      goto LABEL_46;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "checkShopSheetCond",
      135);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v21,
            (const char (*)[28])"[ACTIVITY_SHOP] cond_type: ");
    v23 = common::milog::MiLogStream::operator<<<data::ActivityShopSheetCondType,(data::ActivityShopSheetCondType*)0>(
            v22,
            &sheet_cond->type);
    v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v23, (const char (*)[22])byte_1AAAAD40);
    v25 = std::vector<unsigned int>::size(&sheet_cond->param);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      v25 = __asan_report_store8(v4 + 64, byte_1AAAAD40);
    *(_QWORD *)(v4 + 64) = v25;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, (const unsigned __int64 *)(v4 + 64));
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    result = -1;
  }
LABEL_47:
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 165: range 0000000012E1AB70-0000000012E1B712
__int64 __fastcall ActivityShopExcelConfigMgr::checkSeaLampSection(
        ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t sheet_id,
        uint32_t section_id)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,unsigned int> *p_sheet_shop_type_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v15; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v18; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_shop_type_schedule_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v20; // rdx
  char *v21; // rsi
  bool v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  char *v28; // rsi
  unsigned int *v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // eax
  ActivitySeaLampExcelConfigMgr *p_activity_sea_lamp_config_mgr; // rdi
  uint32_t v38; // edx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  __int64 result; // rax
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-260h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+38h] [rbp-258h]
  char v50[592]; // [rsp+40h] [rbp-250h] BYREF

  v5 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(544LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 32 4 13 shop_type:173 48 4 15 schedule_id:182 64 4 12 sheet_id:164 80 4 14 section_id:164 96 "
                        "8 13 shop_iter:167 128 8 9 <unknown> 160 8 17 schedule_iter:174 192 8 9 <unknown> 224 8 15 __for"
                        "_begin:182 256 8 13 __for_end:182 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityShopExcelConfigMgr::checkSeaLampSection;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862730] = -218959118;
  v7[536862732] = -218959118;
  v7[536862734] = -218959118;
  v7[536862736] = -202116109;
  *(_DWORD *)(v5 + 64) = sheet_id;
  *(_DWORD *)(v5 + 80) = section_id;
  p_sheet_shop_type_map = &this->sheet_shop_type_map_;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v5 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            p_sheet_shop_type_map,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v5 + 64));
  v9 = &this->sheet_shop_type_map_;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 64);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v5 + 128) = std::unordered_map<unsigned int,unsigned int>::end(v9);
  v10 = (char *)(v5 + 128);
  v11 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v5 + 128));
  *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 63) & 7) >= *(_BYTE *)(((v5 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "checkSeaLampSection",
      170);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"sheet_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])byte_1AAAB020);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 288));
    v4 = -1;
  }
  else
  {
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = 4;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v5 + 96));
    p_second = &v15->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v15->second;
    v18 = *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v18 != 0;
    if ( v18 != 0 && v18 <= 3 )
      __asan_report_store4(v5 + 32, v10);
    *(_DWORD *)(v5 + 32) = second;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    p_shop_type_schedule_map = &this->shop_type_schedule_map_;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v10);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v5 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                            p_shop_type_schedule_map,
                                                                                            (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v5 + 32));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    v20 = &this->shop_type_schedule_map_;
    if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 192, v5 + 32);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v5 + 192) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v20);
    v21 = (char *)(v5 + 192);
    v22 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v5 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v5 + 192));
    *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v22 )
    {
      *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkSeaLampSection",
        177);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])"sheet_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 64));
      v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" shop_type:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v27, (const char (*)[24])byte_1AAAB0A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
      v4 = -1;
    }
    else
    {
      __for_range = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v5 + 160))->second;
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 224, v21);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 224) = std::vector<unsigned int>::begin(__for_range);
      *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 256, v21);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 256) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v28 = (char *)(v5 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 256)) )
        {
          v36 = 1;
          goto LABEL_46;
        }
        *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
        v29 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 224));
        v30 = (int *)v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        v31 = *v30;
        v32 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
        if ( v32 != 0 && v32 <= 3 )
        {
          LOBYTE(v28) = v32 != 0;
          __asan_report_store4(v5 + 48, v28);
        }
        *(_DWORD *)(v5 + 48) = v31;
        schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                &txt_config_mgr->new_activity_config_mgr,
                                *(unsigned int *)(v5 + 48));
        if ( !schedule_config_ptr )
        {
          *(_DWORD *)(((v5 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 65) & 7) >= *(_BYTE *)(((v5 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
            "checkSeaLampSection",
            187);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])"schedule_id:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v34,
                  (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1AA1C2C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 416));
          v4 = -1;
          v36 = 0;
          goto LABEL_46;
        }
        p_activity_sea_lamp_config_mgr = &txt_config_mgr->activity_sea_lamp_config_mgr;
        v38 = *(_DWORD *)(v5 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->activity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_activity_sea_lamp_config_mgr = (ActivitySeaLampExcelConfigMgr *)&schedule_config_ptr->activity_id;
          __asan_report_load4(&schedule_config_ptr->activity_id);
        }
        if ( !ActivitySeaLampExcelConfigMgr::findSectionConfig(
                p_activity_sea_lamp_config_mgr,
                schedule_config_ptr->activity_id,
                v38) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 224));
      }
      *(_DWORD *)(((v5 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 32 + 31) & 7) >= *(_BYTE *)(((v5 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
        "checkSeaLampSection",
        192);
      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v39, (const char (*)[12])"section_id:");
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v5 + 80));
      v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v41, (const char (*)[19])byte_1AAAB0E0);
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])byte_1AA1C2C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 480));
      v4 = -1;
      v36 = 0;
LABEL_46:
      if ( v36 == 1 )
        v4 = 0;
    }
  }
  result = v4;
  if ( v50 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
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
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 200: range 0000000012E1B714-0000000012E1BE47
int32_t __cdecl ActivityShopExcelConfigMgr::rewriteOverallConfig(
        ActivityShopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_shop_type_schedule_map; // rcx
  data::ShopType *p_shop_type; // rax
  __int64 shop_type; // rsi
  std::vector<unsigned int> *v9; // rdx
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  data::ShopType v21; // r14d
  char *v22; // rsi
  data::ShopType *v23; // rax
  data::ShopType *v24; // rdx
  char v25; // cl
  int v26; // eax
  int32_t result; // eax
  data::ActivityShopOverallExcelConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::reference v29; // [rsp+30h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *schedule_id; // [rsp+38h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-140h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-138h]
  char v33[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 9 <unknown> 48 4 12 sheet_id:204 64 8 15 __for_begin:201 96 8 13 __for_end:201 128 8 15 _"
                        "_for_begin:204 160 8 13 __for_end:204 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityShopExcelConfigMgr::rewriteOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->activity_shop_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityShopOverallExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false> *)(v3 + 96)) )
  {
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false> *const)(v3 + 64));
    schedule_id = std::get<0ul,unsigned int const,data::ActivityShopOverallExcelConfig>(v29);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityShopOverallExcelConfig>(v29);
    p_shop_type_schedule_map = &this->shop_type_schedule_map_;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    p_shop_type = &excel_config->shop_type;
    if ( *(_BYTE *)(((unsigned __int64)p_shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_shop_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_shop_type);
    }
    shop_type = (unsigned int)excel_config->shop_type;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, shop_type);
    *(_DWORD *)(v3 + 32) = shop_type;
    v9 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           p_shop_type_schedule_map,
           (std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
    std::vector<unsigned int>::push_back(v9, schedule_id);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &excel_config->sheet_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v20 = 1;
        goto LABEL_36;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v10) = v14 != 0;
        __asan_report_store4(v3 + 48, v10);
      }
      *(_DWORD *)(v3 + 48) = v13;
      v15 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->sheet_shop_type_map_,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      if ( *v16 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->shop_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->shop_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->shop_type);
      }
      v21 = excel_config->shop_type;
      v22 = (char *)(v3 + 48);
      v23 = (data::ShopType *)std::unordered_map<unsigned int,unsigned int>::operator[](
                                &this->sheet_shop_type_map_,
                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22);
      }
      *v24 = v21;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityShopExcelConfig.cpp",
      "rewriteOverallConfig",
      209);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])"sheet_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v19, (const char (*)[28])byte_1AAAB200);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v26 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopOverallExcelConfig>,false,false> *const)(v3 + 64));
  }
  v26 = 1;
LABEL_40:
  if ( v26 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
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

// Line 220: range 0000000012E1BE48-0000000012E1C2D1
int32_t __cdecl ActivityShopExcelConfigMgr::rewriteSheetConfig(
        ActivityShopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  _DWORD *v6; // rdx
  char v7; // cl
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityShopSheetExcelConfig> >::type *v8; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  int *v10; // rdx
  int v11; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityShopSheetExcelConfig> >::type *v12; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  int32_t result; // eax
  data::ActivityShopSheetExcelConfigMap *__for_range; // [rsp+10h] [rbp-100h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::reference v18; // [rsp+18h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityShopSheetExcelConfig> >::type *id; // [rsp+20h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopSheetExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-E8h]
  const std::vector<data::ActivityShopSheetCond> *__for_range_0; // [rsp+30h] [rbp-E0h]
  const data::ActivityShopSheetCond *sheet_cond; // [rsp+38h] [rbp-D8h]
  char v23[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:221 64 8 13 __for_end:221 96 8 15 __for_begin:225 128 8 13 __for_end:225";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::rewriteSheetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->activity_shop_sheet_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityShopSheetExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false> *)(v2 + 64)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityShopSheetExcelConfig>(v18);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityShopSheetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityShopSheetExcelConfig>(v18);
    v8 = id;
    v5 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->sheet_open_day_map_, id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v7 != 0;
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
      __asan_report_store4(v5, v8);
    *v6 = 1;
    __for_range_0 = &excel_config->cond;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v8);
    *(std::vector<data::ActivityShopSheetCond>::const_iterator *)(v2 + 96) = std::vector<data::ActivityShopSheetCond>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v8);
    *(std::vector<data::ActivityShopSheetCond>::const_iterator *)(v2 + 128) = std::vector<data::ActivityShopSheetCond>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>(
              (const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *)(v2 + 128)) )
    {
      sheet_cond = __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&sheet_cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&sheet_cond->type);
      }
      if ( sheet_cond->type == ACTIVITY_SHOP_SHEET_COND_TIME_EQUAL_GREATER
        && !std::vector<unsigned int>::empty(&sheet_cond->param) )
      {
        v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &sheet_cond->param,
                                                                                                   0LL);
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = id;
        v13 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->sheet_open_day_map_, id);
        v14 = v13;
        v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
        {
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v13, v12);
        }
        *v14 = v11;
      }
      __gnu_cxx::__normal_iterator<data::ActivityShopSheetCond const*,std::vector<data::ActivityShopSheetCond>>::operator++((__gnu_cxx::__normal_iterator<const data::ActivityShopSheetCond*,std::vector<data::ActivityShopSheetCond> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityShopSheetExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v23 == (char *)v2 )
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

// Line 241: range 0000000012E1C2D2-0000000012E1C498
__int64 __fastcall ActivityShopExcelConfigMgr::isActivityShop(
        const ActivityShopExcelConfigMgr *const this,
        __int64 shop_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_shop_type_schedule_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  int v10; // eax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 shop_type:240 64 8 8 iter:242 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::isActivityShop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = shop_type;
  p_shop_type_schedule_map = &this->shop_type_schedule_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, shop_type);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_shop_type_schedule_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->shop_type_schedule_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
    LOBYTE(v10) = std::vector<unsigned int>::empty(&v9->second);
    result = v10 ^ 1u;
  }
  if ( v11 == (char *)v2 )
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

// Line 252: range 0000000012E1C49A-0000000012E1C707
std::vector<unsigned int> *__fastcall ActivityShopExcelConfigMgr::getScheduleIdVecByShopType(
        std::vector<unsigned int> *retstr,
        const ActivityShopExcelConfigMgr *const this,
        uint32_t shop_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_shop_type_schedule_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 shop_type:251 64 8 8 iter:253 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityShopExcelConfigMgr::getScheduleIdVecByShopType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = shop_type;
  p_shop_type_schedule_map = &this->shop_type_schedule_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_shop_type_schedule_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->shop_type_schedule_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::vector(retstr, &v9->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned int>::vector(retstr);
  }
  if ( v12 == (char *)v3 )
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
  return retstr;
};

// Line 263: range 0000000012E1C708-0000000012E1C903
__int64 __fastcall ActivityShopExcelConfigMgr::getActivitySheetOpenDay(
        const ActivityShopExcelConfigMgr *const this,
        __int64 sheet_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_sheet_open_day_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 sheet_id:262 64 8 8 iter:264 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityShopExcelConfigMgr::getActivitySheetOpenDay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = sheet_id;
  p_sheet_open_day_map = &this->sheet_open_day_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, sheet_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_sheet_open_day_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->sheet_open_day_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 1LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 274: range 0000000012E1C904-0000000012E1D181
int32_t __cdecl ActivityShopExcelConfigMgr::findAndOverrideActivityShopGoodsTime(
        const ActivityShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t shop_type,
        uint32_t *begin_timestamp,
        uint32_t *end_timestamp)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  char *v9; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  unsigned int *v11; // rdx
  uint32_t begin_time; // ecx
  char v13; // dl
  uint32_t end_time; // ecx
  char v15; // dl
  int v16; // edx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rsi
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rsi
  uint32_t v23; // ecx
  char v24; // dl
  int v25; // edx
  int32_t result; // eax
  uint32_t now; // [rsp+34h] [rbp-13Ch]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-130h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+48h] [rbp-128h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-120h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr_0; // [rsp+58h] [rbp-118h]
  char v36[272]; // [rsp+60h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 8 15 __for_begin:277 64 8 13 __for_end:277 96 8 15 __for_begin:287 128 8 13 __for_end:287 1"
                        "60 24 19 schedule_id_vec:276";
  *(_QWORD *)(v6 + 16) = ActivityShopExcelConfigMgr::findAndOverrideActivityShopGoodsTime;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -218103808;
  v8[536862726] = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(char *)(((v6 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 183) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 - 96 + 23) & 7) >= *(_BYTE *)(((v6 + 183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 160, 24LL);
  }
  ActivityShopExcelConfigMgr::getScheduleIdVecByShopType((std::vector<unsigned int> *)(v6 + 160), this, shop_type);
  __for_range = (std::vector<unsigned int> *)(v6 + 160);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 32, this);
  *(std::vector<unsigned int>::iterator *)(v6 + 32) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 64, this);
  *(std::vector<unsigned int>::iterator *)(v6 + 64) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v9 = (char *)(v6 + 64);
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 32),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 64)) )
    {
      v16 = 1;
      goto LABEL_28;
    }
    v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 32));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                            &txt_config_mgr->new_activity_config_mgr,
                            *v11);
    if ( schedule_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&schedule_config_ptr->begin_time);
      }
      if ( now >= schedule_config_ptr->begin_time )
      {
        v9 = (char *)((((_BYTE)schedule_config_ptr + 84) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->end_time);
        }
        if ( now < schedule_config_ptr->end_time )
          break;
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 32));
  }
  begin_time = schedule_config_ptr->begin_time;
  v13 = *(_BYTE *)(((unsigned __int64)begin_timestamp >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)(((unsigned __int8)begin_timestamp & 7) + 3) >= v13 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(begin_timestamp, v9);
  }
  *begin_timestamp = begin_time;
  end_time = schedule_config_ptr->end_time;
  v15 = *(_BYTE *)(((unsigned __int64)end_timestamp >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v15 != 0;
  if ( v15 != 0 && (char)(((unsigned __int8)end_timestamp & 7) + 3) >= v15 )
    __asan_report_store4(end_timestamp, v9);
  *end_timestamp = end_time;
  v5 = 0;
  v16 = 0;
LABEL_28:
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
  {
    __for_range_0 = (std::vector<unsigned int> *)(v6 + 160);
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v6 + 96, v9);
    *(std::vector<unsigned int>::iterator *)(v6 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v6 + 128, v9);
    *(std::vector<unsigned int>::iterator *)(v6 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v6 + 128)) )
      {
        v25 = 1;
        goto LABEL_50;
      }
      v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 96));
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      schedule_config_ptr_0 = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                &txt_config_mgr->new_activity_config_mgr,
                                v19);
      if ( schedule_config_ptr_0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr_0->begin_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr_0->begin_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&schedule_config_ptr_0->begin_time);
        }
        if ( schedule_config_ptr_0->begin_time <= now + 3600 )
          break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v6 + 96));
    }
    v20 = schedule_config_ptr_0->begin_time;
    v21 = *(_BYTE *)(((unsigned __int64)begin_timestamp >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)begin_timestamp & 7) + 3) >= v21 )
    {
      LOBYTE(v19) = v21 != 0;
      __asan_report_store4(begin_timestamp, v19);
    }
    *begin_timestamp = v20;
    v22 = (((_BYTE)schedule_config_ptr_0 + 84) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr_0->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr_0 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr_0->end_time >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr_0->end_time);
    }
    v23 = schedule_config_ptr_0->end_time;
    v24 = *(_BYTE *)(((unsigned __int64)end_timestamp >> 3) + 0x7FFF8000);
    if ( v24 != 0 && (char)(((unsigned __int8)end_timestamp & 7) + 3) >= v24 )
    {
      LOBYTE(v22) = v24 != 0;
      __asan_report_store4(end_timestamp, v22);
    }
    *end_timestamp = v23;
    v5 = 0;
    v25 = 0;
LABEL_50:
    *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v25 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)begin_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)begin_timestamp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)begin_timestamp >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_store4(begin_timestamp, ((unsigned __int8)begin_timestamp & 7u) + 3);
      }
      *begin_timestamp = 0;
      if ( *(_BYTE *)(((unsigned __int64)end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)end_timestamp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)end_timestamp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_store4(end_timestamp, ((unsigned __int8)end_timestamp & 7u) + 3);
      }
      *end_timestamp = 0;
      v5 = -1;
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 160));
  result = v5;
  if ( v36 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

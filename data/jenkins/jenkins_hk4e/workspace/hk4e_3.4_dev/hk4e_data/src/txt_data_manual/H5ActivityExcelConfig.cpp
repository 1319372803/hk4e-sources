// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/H5ActivityExcelConfig.cpp

// Line 20: range 00000000144697C8-000000001446A305
int32_t __cdecl H5ActivityExcelConfigMgr::rewriteConfig(
        H5ActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  data::H5ActivityExcelConfigMap *p_h5_activity_excel_config_map; // rdx
  const std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::key_type *p_h5_activity_id; // rcx
  __int64 v16; // rsi
  const std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::key_type *v17; // rsi
  data::H5ActivityExcelConfigMap *v18; // rdx
  bool v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::pointer v24; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-24Ch]
  data::H5ActivityExcelConfigMap *__for_range; // [rsp+18h] [rbp-248h]
  data::H5ActivityWatcherExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-240h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-238h]
  unsigned int *h5_activity_watcher_id; // [rsp+30h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig> >::type *h5_activity_watcher_config; // [rsp+38h] [rbp-228h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::reference __in; // [rsp+48h] [rbp-218h]
  const unsigned int *h5_activity_id; // [rsp+50h] [rbp-210h]
  std::tuple_element<1,std::pair<unsigned int const,data::H5ActivityExcelConfig> >::type *h5_activity_config; // [rsp+58h] [rbp-208h]
  char v37[512]; // [rsp+60h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:22 64 8 12 __for_end:22 96 8 14 __for_begin:31 128 8 12 __for_end:31 160 "
                        "8 7 iter:45 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = H5ActivityExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->h5_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false> *const)(v2 + 32));
    h5_activity_id = std::get<0ul,unsigned int const,data::H5ActivityExcelConfig>(__in);
    h5_activity_config = std::get<1ul,unsigned int const,data::H5ActivityExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::H5ActivityCondConfig,data::H5ActivityCondType data::H5ActivityCondConfig::*>(
      &h5_activity_config->cond_list,
      (data::H5ActivityCondType *)8);
    if ( H5ActivityExcelConfigMgr::rewriteH5ActivityCondConfigVec(this, &h5_activity_config->cond_list) )
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
        "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
        "rewriteConfig",
        27);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             v6,
             (const char (*)[53])"rewriteH5ActivityCondConfigVec fail, h5_activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, h5_activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->h5_activity_watcher_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::H5ActivityWatcherExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::H5ActivityWatcherExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::H5ActivityWatcherExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::H5ActivityWatcherExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false> *)(v2 + 128)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false,false> *const)(v2 + 96));
    h5_activity_watcher_id = std::get<0ul,unsigned int const,data::H5ActivityWatcherExcelConfig>(v31);
    h5_activity_watcher_config = std::get<1ul,unsigned int const,data::H5ActivityWatcherExcelConfig>(v31);
    common::tools::MiscUtils::removeEmptyElement<data::H5ActivityCondConfig,data::H5ActivityCondType data::H5ActivityCondConfig::*>(
      &h5_activity_watcher_config->cond_list,
      (data::H5ActivityCondType *)8);
    if ( H5ActivityExcelConfigMgr::rewriteH5ActivityCondConfigVec(this, &h5_activity_watcher_config->cond_list) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
        "rewriteConfig",
        36);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             v8,
             (const char (*)[61])"rewriteH5ActivityCondConfigVec fail, h5_activity_watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, h5_activity_watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v11 = (data::WatcherConfig *)h5_activity_watcher_config;
    if ( *(_BYTE *)(((unsigned __int64)h5_activity_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)h5_activity_watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)h5_activity_watcher_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)h5_activity_watcher_id;
      __asan_report_load4(h5_activity_watcher_id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *h5_activity_watcher_id, v11) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
        "rewriteConfig",
        41);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              v12,
              (const char (*)[49])"addWatcherConfig failed, h5_activity_watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, h5_activity_watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      p_h5_activity_excel_config_map = &this->h5_activity_excel_config_map;
      p_h5_activity_id = &h5_activity_watcher_config->h5_activity_id;
      v16 = *(unsigned __int8 *)(((v2 + 160) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v16 )
        __asan_report_store8(v2 + 160, v16);
      v17 = p_h5_activity_id;
      *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::find(
                                                                                                p_h5_activity_excel_config_map,
                                                                                                p_h5_activity_id);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v18 = &this->h5_activity_excel_config_map;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v17);
      *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::end(v18);
      v19 = std::__detail::operator==<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 192));
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
          "rewriteConfig",
          48);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v20,
                (const char (*)[29])"can not find h5_activity_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &h5_activity_watcher_config->h5_activity_id);
        v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v22,
                (const char (*)[25])" h5_activity_watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, h5_activity_watcher_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false> *const)(v2 + 160));
        std::vector<unsigned int>::push_back(&v24->second.h5_activity_watcher_id_list, h5_activity_watcher_id);
      }
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityWatcherExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 59: range 000000001446A306-000000001446A33F
int32_t __cdecl H5ActivityExcelConfigMgr::checkConfig(
        H5ActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( H5ActivityExcelConfigMgr::checkH5ActivityExcelConfig(this, txt_config_mgr) )
    return -1;
  else
    return 0;
};

// Line 68: range 000000001446A340-000000001446A9B8
int32_t __cdecl H5ActivityExcelConfigMgr::checkH5ActivityExcelConfig(
        H5ActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::H5ActivityExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-168h]
  const unsigned int *h5_activity_id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,data::H5ActivityExcelConfig> >::type *h5_activity_config; // [rsp+38h] [rbp-158h]
  std::vector<data::H5ActivityCondConfig> *__for_range_0; // [rsp+40h] [rbp-150h]
  data::H5ActivityCondConfig *cond; // [rsp+48h] [rbp-148h]
  char v18[320]; // [rsp+50h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:70 64 8 12 __for_end:70 96 8 14 __for_begin:77 128 8 12 __for_end:77 160 3"
                        "2 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = H5ActivityExcelConfigMgr::checkH5ActivityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->h5_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::H5ActivityExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false> *const)(v2 + 32));
    h5_activity_id = std::get<0ul,unsigned int const,data::H5ActivityExcelConfig>(__in);
    h5_activity_config = std::get<1ul,unsigned int const,data::H5ActivityExcelConfig>(__in);
    v5 = (const unsigned int *)(((unsigned __int8)h5_activity_id & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)h5_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)h5_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)h5_activity_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(h5_activity_id);
    }
    if ( *h5_activity_id > 0x7D0 )
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
        "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
        "checkH5ActivityExcelConfig",
        74);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v6, (const char (*)[62])byte_1AD7D660);
      v5 = h5_activity_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, h5_activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &h5_activity_config->cond_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::H5ActivityCondConfig>::iterator *)(v2 + 96) = std::vector<data::H5ActivityCondConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::H5ActivityCondConfig>::iterator *)(v2 + 128) = std::vector<data::H5ActivityCondConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>(
              (const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *)(v2 + 128)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type == H5_ACTIVITY_COND_DAY_COUNT_GREAT_EQUAL )
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
          "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
          "checkH5ActivityExcelConfig",
          81);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
               v8,
               (const char (*)[93])"H5_ACTIVITY_COND_DAY_COUNT_GREAT_EQUAL can only be used for h5_watcher cond. h5_activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, h5_activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>::operator++((__gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::H5ActivityExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 90: range 000000001446A9BA-000000001446B2E9
int32_t __cdecl H5ActivityExcelConfigMgr::rewriteH5ActivityCondConfigVec(
        const H5ActivityExcelConfigMgr *const this,
        std::vector<data::H5ActivityCondConfig> *cond_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int type; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const char *v14; // rsi
  common::milog::MiLogStream *p_type; // rdi
  data::H5ActivityCondType v16; // ecx
  char v17; // al
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::H5ActivityCondConfig *cond_config; // [rsp+28h] [rbp-1A8h]
  char v21[416]; // [rsp+30h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 9 <unknown> 64 8 14 __for_begin:92 96 8 12 __for_end:92 128 32 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = H5ActivityExcelConfigMgr::rewriteH5ActivityCondConfigVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, cond_vec);
  *(std::vector<data::H5ActivityCondConfig>::iterator *)(v2 + 64) = std::vector<data::H5ActivityCondConfig>::begin(cond_vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, cond_vec);
  *(std::vector<data::H5ActivityCondConfig>::iterator *)(v2 + 96) = std::vector<data::H5ActivityCondConfig>::end(cond_vec);
  while ( __gnu_cxx::operator!=<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>(
            (const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *)(v2 + 96)) )
  {
    cond_config = __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&cond_config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond_config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond_config->type);
    }
    type = cond_config->type;
    if ( type == 3 )
    {
      if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_config->param_str, &cond_config->param, 1) )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
          "rewriteH5ActivityCondConfigVec",
          114);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v11,
                (const char (*)[33])"parse day count fail, param_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &cond_config->param_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      if ( type > 3 )
        goto LABEL_31;
      if ( type == 1 )
      {
        if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_config->param_str, &cond_config->param, 1) )
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
            "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
            "rewriteH5ActivityCondConfigVec",
            99);
          v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 128),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 v6,
                 (const char (*)[36])"parse player level fail, param_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &cond_config->param_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
          *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        if ( type != 2 )
        {
LABEL_31:
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
            "rewriteH5ActivityCondConfigVec",
            119);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = "unknown h5_cond_type:";
          p_type = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                     v13,
                     (const char (*)[22])"unknown h5_cond_type:");
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&cond_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            p_type = (common::milog::MiLogStream *)&cond_config->type;
            __asan_report_load4(&cond_config->type);
          }
          v16 = cond_config->type;
          v17 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v17 != 0 && v17 <= 3 )
          {
            p_type = (common::milog::MiLogStream *)(v2 + 48);
            LOBYTE(v14) = v17 != 0;
            __asan_report_store4(v2 + 48, v14);
          }
          *(_DWORD *)(v2 + 48) = v16;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            p_type,
            (const unsigned int *)(v2 + 48));
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          goto LABEL_38;
        }
        TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&cond_config->param_str);
        if ( *(_BYTE *)(((unsigned __int64)&cond_config->param >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond_config->param >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&cond_config->param, TimeByStr);
        }
        cond_config->param = TimeByStr;
        if ( !cond_config->param )
        {
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/H5ActivityExcelConfig.cpp",
            "rewriteH5ActivityCondConfigVec",
            107);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 192),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v9,
                  (const char (*)[44])"parse register time string fail, param_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &cond_config->param_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
LABEL_38:
    __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig *,std::vector<data::H5ActivityCondConfig>>::operator++((__gnu_cxx::__normal_iterator<data::H5ActivityCondConfig*,std::vector<data::H5ActivityCondConfig> > *const)(v2 + 64));
  }
  result = ret;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

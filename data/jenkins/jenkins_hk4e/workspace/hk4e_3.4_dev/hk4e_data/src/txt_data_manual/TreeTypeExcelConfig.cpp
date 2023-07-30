// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TreeTypeExcelConfig.cpp

// Line 20: range 000000000CB2AED6-000000000CB2B0AA
int32_t __cdecl TreeTypeExcelConfigMgr::checkConfig(
        TreeTypeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreeTypeExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TreeTypeExcelConfigMgr::checkTreeDropExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TreeTypeExcelConfig.cpp",
      "checkConfig",
      23);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[32])"checkTreeDropExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v6 == (char *)v2 )
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

// Line 31: range 000000000CB2B0AC-000000000CB2B7CD
int32_t __cdecl TreeTypeExcelConfigMgr::checkTreeDropExcelConfig(
        TreeTypeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  data::TreeDropExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<const data::TreeType,data::TreeDropExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-168h]
  const data::TreeType *tree_type; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,std::pair<const data::TreeType,data::TreeDropExcelConfig> >::type *config; // [rsp+28h] [rbp-158h]
  char v25[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:32 64 8 12 __for_end:32 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TreeTypeExcelConfigMgr::checkTreeDropExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->tree_drop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<data::TreeType,data::TreeDropExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<data::TreeType,data::TreeDropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::TreeType,data::TreeDropExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<data::TreeType,data::TreeDropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<data::TreeType const,data::TreeDropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::TreeType,data::TreeDropExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::TreeType,data::TreeDropExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_30;
    }
    __in = std::__detail::_Node_iterator<std::pair<data::TreeType const,data::TreeDropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::TreeType,data::TreeDropExcelConfig>,false,false> *const)(v3 + 32));
    tree_type = std::get<0ul,data::TreeType const,data::TreeDropExcelConfig>(__in);
    config = std::get<1ul,data::TreeType const,data::TreeDropExcelConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)tree_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)tree_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tree_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(tree_type);
    }
    if ( !data::isValidTreeType(*tree_type) )
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
        4u,
        "./src/txt_data_manual/TreeTypeExcelConfig.cpp",
        "checkTreeDropExcelConfig",
        36);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])byte_1A128960);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" tree_type:");
      common::milog::MiLogStream::operator<<<data::TreeType,(data::TreeType*)0>(v8, tree_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->drop_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->drop_id,
                            ITEM_LIMIT_HIT_TREE_DROP) != 1 )
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
        4u,
        "./src/txt_data_manual/TreeTypeExcelConfig.cpp",
        "checkTreeDropExcelConfig",
        41);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])byte_1A1289E0);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" tree_type:");
      v13 = common::milog::MiLogStream::operator<<<data::TreeType,(data::TreeType*)0>(v12, tree_type);
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" drop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->drop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->talent_extra_drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->talent_extra_drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->talent_extra_drop_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->talent_extra_drop_id,
                            ITEM_LIMIT_HIT_TREE_DROP) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<data::TreeType const,data::TreeDropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::TreeType,data::TreeDropExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/TreeTypeExcelConfig.cpp",
    "checkTreeDropExcelConfig",
    46);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1A128A60);
  v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" tree_type:");
  v18 = common::milog::MiLogStream::operator<<<data::TreeType,(data::TreeType*)0>(v17, tree_type);
  v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" drop_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->talent_extra_drop_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_30:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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

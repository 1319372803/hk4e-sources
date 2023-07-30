// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp

// Line 20: range 0000000012E4D05E-0000000012E4D344
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityVintageMarketExcelConfigMgr::checkVintageMarketBargainExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketAttrRandomTemplateExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketEventExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketSkillExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketEnvEventExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketNpcEventExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketHelpSkillExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::checkVintageMarketConstValueExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "checkConfig",
      31);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v6,
      (const char (*)[35])"[VintageMarket] checkConfig failed");
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

// Line 38: range 0000000012E4D346-0000000012E4D64D
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketDealExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketBargainExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrUpgradeExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrRandomTemplateExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrFactorExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketEventExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketNpcEventExcelConfig(this, txt_config_mgr)
    || ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketHelpSkillExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "rewriteConfig",
      50);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v6,
      (const char (*)[37])"[VintageMarket] rewriteConfig failed");
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

// Line 58: range 0000000012E4D64E-0000000012E4E004
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketDealExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v18; // r15
  const unsigned int *p_price; // rcx
  const unsigned int *p_num; // rdx
  __int64 v21; // rsi
  const unsigned int *v22; // rcx
  std::pair<unsigned int,unsigned int> *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  data::VintageMarketDealExcelConfigMap *__for_range; // [rsp+20h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false,false>::reference v30; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketDealExcelConfig> >::type *item_id; // [rsp+30h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketDealExcelConfig> >::type *config; // [rsp+38h] [rbp-1C8h]
  const std::vector<data::VintageMarketTraderExcelConfig> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  const data::VintageMarketTraderExcelConfig *single_trader_config; // [rsp+48h] [rbp-1B8h]
  char v35[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:59 64 8 12 __for_end:59 96 8 14 __for_begin:66 128 8 12 __for_end:66 160 8"
                        " 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketDealExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  __for_range = &this->vintage_market_deal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketDealExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketDealExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketDealExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketDealExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_46;
    }
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false,false> *const)(v3 + 32));
    item_id = std::get<0ul,unsigned int const,data::VintageMarketDealExcelConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketDealExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketDealExcelConfig>(v30);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    v7 = *item_id;
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, v7) )
      break;
    __for_range_0 = &config->trader_config;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v7);
    *(std::vector<data::VintageMarketTraderExcelConfig>::const_iterator *)(v3 + 96) = std::vector<data::VintageMarketTraderExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::vector<data::VintageMarketTraderExcelConfig>::const_iterator *)(v3 + 128) = std::vector<data::VintageMarketTraderExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::VintageMarketTraderExcelConfig const*,std::vector<data::VintageMarketTraderExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::VintageMarketTraderExcelConfig*,std::vector<data::VintageMarketTraderExcelConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::VintageMarketTraderExcelConfig*,std::vector<data::VintageMarketTraderExcelConfig> > *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_42;
      }
      single_trader_config = __gnu_cxx::__normal_iterator<data::VintageMarketTraderExcelConfig const*,std::vector<data::VintageMarketTraderExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::VintageMarketTraderExcelConfig*,std::vector<data::VintageMarketTraderExcelConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&single_trader_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&single_trader_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&single_trader_config->id);
      }
      if ( single_trader_config->id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&single_trader_config->num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&single_trader_config->num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&single_trader_config->num);
        }
        if ( !single_trader_config->num )
          goto LABEL_31;
        if ( *(_BYTE *)(((unsigned __int64)&single_trader_config->price >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)single_trader_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&single_trader_config->price >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&single_trader_config->price);
        }
        if ( !single_trader_config->price )
        {
LABEL_31:
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
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "rewriteVintageMarketDealExcelConfig",
            74);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v11,
                  (const char (*)[55])"[VintageMarket] invalid deal material config, item_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, item_id);
          v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", num:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &single_trader_config->num);
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", price:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &single_trader_config->price);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_42;
        }
        v18 = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::operator[](
                &this->trader_item_info_map,
                &single_trader_config->id);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        p_price = &single_trader_config->price;
        p_num = &single_trader_config->num;
        v21 = *(unsigned __int8 *)(((v3 + 160) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v21 )
          __asan_report_store8(v3 + 160, v21);
        *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                p_num,
                                                                p_price);
        v24 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
                v18,
                item_id,
                (std::pair<unsigned int,unsigned int> *)(v3 + 160),
                v22,
                v23);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( !v24.second )
          break;
      }
      __gnu_cxx::__normal_iterator<data::VintageMarketTraderExcelConfig const*,std::vector<data::VintageMarketTraderExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::VintageMarketTraderExcelConfig*,std::vector<data::VintageMarketTraderExcelConfig> > *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "rewriteVintageMarketDealExcelConfig",
      79);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v26 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            v25,
            (const char (*)[57])"[VintageMarket] duplicate deal material failed, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, item_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_42:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v10 = 0;
      goto LABEL_46;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketDealExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "rewriteVintageMarketDealExcelConfig",
    63);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         v8,
         (const char (*)[52])"[VintageMarket] find deal material failed, item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v10 = 0;
LABEL_46:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 88: range 0000000012E4E006-0000000012E4E358
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketBargainExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::VintageMarketBargainExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *bargain_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:89 64 8 12 __for_end:89 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketBargainExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->vintage_market_bargain_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false> *const)(v3 + 32));
    bargain_id = std::get<0ul,unsigned int const,data::VintageMarketBargainExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketBargainExcelConfig>(v13);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->parent_quest_to_bargain_map,
           &config->quest_id,
           bargain_id,
           (const unsigned int *)&this->parent_quest_to_bargain_map,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "rewriteVintageMarketBargainExcelConfig",
    93);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
         v8,
         (const char (*)[72])"[VintageMarket] duplicate parent quest for different bargain, quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 101: range 0000000012E4E35A-0000000012E4EC6A
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketBargainExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  BargainExcelConfigMgr *p_bargain_excel_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::VintageMarketBargainExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::reference v19; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *bargain_id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *config; // [rsp+38h] [rbp-188h]
  char v22[384]; // [rsp+40h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:103 64 8 13 __for_end:103 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketBargainExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->vintage_market_bargain_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::VintageMarketBargainExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false> *)(v2 + 64)) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false> *const)(v2 + 32));
    bargain_id = std::get<0ul,unsigned int const,data::VintageMarketBargainExcelConfig>(v19);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketBargainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketBargainExcelConfig>(v19);
    p_bargain_excel_config_mgr = &txt_config_mgr->bargain_excel_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)bargain_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bargain_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bargain_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(bargain_id);
    }
    if ( data::BargainExcelConfigMgrBase::findBargainExcelConfig(p_bargain_excel_config_mgr, *bargain_id) )
    {
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->quest_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->quest_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->quest_item_id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, config->quest_item_id) )
      {
        p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->quest_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->quest_id);
        }
        if ( data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, config->quest_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->fail_coin_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->fail_coin_num >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->fail_coin_num);
          }
          if ( config->fail_coin_num > 0xF423E || !config->fail_coin_num )
          {
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 288, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 288),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketBargainExcelConfig",
              125);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    v14,
                    (const char (*)[50])"[VintageMarket] bargain fail coin num error, num:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->fail_coin_num);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketBargainExcelConfig",
            119);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  v12,
                  (const char (*)[59])"[VintageMarket] findMainQuestExcelConfig failed, quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->quest_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketBargainExcelConfig",
          113);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                v9,
                (const char (*)[63])"[VintageMarket] findMaterialExcelConfig failed, quest_item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->quest_item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketBargainExcelConfig",
        107);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             v6,
             (const char (*)[59])"[VintageMarket] findBargainExcelConfig failed, bargain_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, bargain_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketBargainExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 134: range 0000000012E4EC6C-0000000012E4FAAD
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::vector<data::VintageMarketAttrExcelConfig>::size_type v12; // rax
  int v13; // r15d
  std::vector<data::VintageMarketAttrExcelConfig>::const_reference v14; // rax
  std::vector<data::VintageMarketAttrExcelConfig>::const_reference v15; // rax
  __int64 slot_count; // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v26; // rax
  ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig::<lambda(auto:26&)> v27; // dl
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  __int64 v32; // rsi
  uint32_t default_coin; // ecx
  char v34; // al
  ActivityVintageMarketStoreConfig *v35; // rdx
  const unsigned int *v36; // rcx
  ActivityVintageMarketStoreConfig *v37; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  _DWORD *v41; // rax
  int v42; // eax
  uint32_t idx; // [rsp+2Ch] [rbp-2F4h]
  data::VintageMarketStoreExcelConfigMap *__for_range; // [rsp+30h] [rbp-2F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false,false>::reference v46; // [rsp+38h] [rbp-2E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketStoreExcelConfig> >::type *id; // [rsp+40h] [rbp-2E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketStoreExcelConfig> >::type *config; // [rsp+48h] [rbp-2D8h]
  char v49[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:135 64 8 13 __for_end:135 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                        "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 160 16 store_config:137";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862739] = -202116109;
  v5[536862740] = -202116109;
  __for_range = &this->vintage_market_store_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketStoreExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketStoreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketStoreExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketStoreExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false> *)(v3 + 64)) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::VintageMarketStoreExcelConfig>(v46);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketStoreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketStoreExcelConfig>(v46);
    v6 = (_DWORD *)(((v3 + 448) >> 3) + 2147450880);
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[4] = 0;
    ActivityVintageMarketStoreConfig::ActivityVintageMarketStoreConfig((ActivityVintageMarketStoreConfig *const)(v3 + 448));
    v7 = ((unsigned __int8)id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v8 = *id;
    v9 = *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 448, v7);
    }
    *(_DWORD *)(v3 + 448) = v8;
    if ( std::vector<data::VintageMarketAttrExcelConfig>::size(&config->attr_list) == 3 )
    {
      for ( idx = 0; idx <= 2; ++idx )
      {
        v14 = std::vector<data::VintageMarketAttrExcelConfig>::operator[](&config->attr_list, idx);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 456), &v14->default_value);
        v15 = std::vector<data::VintageMarketAttrExcelConfig>::operator[](&config->attr_list, idx);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 480), &v15->max_value);
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->slot_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->slot_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->slot_count);
      }
      slot_count = config->slot_count;
      if ( slot_count == std::vector<unsigned int>::size(&config->slot_cost) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->slot_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->slot_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->slot_count);
        }
        if ( config->slot_count )
        {
          M_current = std::vector<unsigned int>::end(&config->slot_cost)._M_current;
          v26._M_current = std::vector<unsigned int>::begin(&config->slot_cost)._M_current;
          if ( std::any_of<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig(TxtConfigMgr &)::{lambda(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>> &)#1}>(
                 v26,
                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                 v27) )
          {
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketStoreExcelConfig",
              163);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    v28,
                    (const char (*)[54])"[Vintage] store slot cost is not correct, slot_count:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->slot_count);
            v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v30,
                    (const char (*)[13])", slot_cost:");
            common::milog::MiLogStream::operator<<<unsigned int>(v31, &config->slot_cost);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
          else
          {
            v32 = (((_BYTE)config + 12) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&config->default_coin >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->default_coin >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->default_coin);
            }
            default_coin = config->default_coin;
            v34 = *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000);
            if ( v34 != 0 && v34 <= 3 )
            {
              LOBYTE(v32) = v34 != 0;
              __asan_report_store4(v3 + 576, v32);
            }
            *(_DWORD *)(v3 + 576) = default_coin;
            std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 584), &config->slot_cost);
            v35 = std::move<ActivityVintageMarketStoreConfig &>((ActivityVintageMarketStoreConfig *)(v3 + 448));
            v38 = std::map<unsigned int,ActivityVintageMarketStoreConfig>::emplace<unsigned int const&,ActivityVintageMarketStoreConfig>(
                    &this->store_config_map,
                    id,
                    v35,
                    v36,
                    v37);
            if ( !v38.second )
            {
              *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 384, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 384),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "rewriteVintageMarketStoreExcelConfig",
                171);
              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v40 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v39,
                      (const char (*)[30])"[Vintage] duplicate store_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
              *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v13 = 0;
            }
            else
            {
              v13 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "rewriteVintageMarketStoreExcelConfig",
            156);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  v21,
                  (const char (*)[53])"[Vintage] store slot num is not correct, slot_count:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->slot_count);
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", slot_cost:");
          common::milog::MiLogStream::operator<<<unsigned int>(v24, &config->slot_cost);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "rewriteVintageMarketStoreExcelConfig",
          151);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                v17,
                (const char (*)[53])"[Vintage] store slot num is not correct, slot_count:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->slot_count);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", slot_cost:");
        common::milog::MiLogStream::operator<<<unsigned int>(v20, &config->slot_cost);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "rewriteVintageMarketStoreExcelConfig",
        141);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              v10,
              (const char (*)[51])"[Vintage] store attr num is not correct, attr_num:");
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v12 = std::vector<data::VintageMarketAttrExcelConfig>::size(&config->attr_list);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_store8(v3 + 96, "[Vintage] store attr num is not correct, attr_num:");
      *(_QWORD *)(v3 + 96) = v12;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    ActivityVintageMarketStoreConfig::~ActivityVintageMarketStoreConfig((ActivityVintageMarketStoreConfig *const)(v3 + 448));
    v41 = (_DWORD *)(((v3 + 448) >> 3) + 2147450880);
    *v41 = -117901064;
    v41[1] = -117901064;
    v41[2] = -117901064;
    v41[3] = -117901064;
    v41[4] = -117901064;
    if ( v13 != 1 )
    {
      v42 = 0;
      goto LABEL_52;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketStoreExcelConfig>,false,false> *const)(v3 + 32));
  }
  v42 = 1;
LABEL_52:
  if ( v42 == 1 )
    v2 = 0;
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 159: range 0000000012EA7F34-0000000012EA7F87
bool __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig::_lambda_auto_26___::operator()_unsigned_int_const_(
        const ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketStoreExcelConfig::<lambda(auto:26&)> *const __closure,
        const unsigned int *p)
{
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p);
  }
  return *p == 0;
};

// Line 179: range 0000000012E4FAAE-0000000012E5126F
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,ActivityVintageMarketStoreConfig> *p_store_config_map; // rsi
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  __int64 v8; // rsi
  unsigned int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<unsigned int>::size_type v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::vector<unsigned int>::size_type v20; // rax
  unsigned int v21; // ecx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::vector<float>::size_type v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::vector<std::map<unsigned int,unsigned int>>::size_type v37; // rax
  const std::map<unsigned int,unsigned int> *M_current; // r14
  std::vector<std::map<unsigned int,unsigned int>>::const_iterator v39; // rax
  ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig::<lambda(auto:27&)> v40; // dl
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-434h]
  std::map<unsigned int,ActivityVintageMarketStoreConfig> *__for_range; // [rsp+20h] [rbp-430h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::reference v46; // [rsp+28h] [rbp-428h]
  std::tuple_element<0,std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *id; // [rsp+30h] [rbp-420h]
  std::tuple_element<1,const std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *config; // [rsp+38h] [rbp-418h]
  const std::map<unsigned int,ActivityVintageMarketStoreRoundConfig> *__for_range_0; // [rsp+40h] [rbp-410h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::reference v50; // [rsp+48h] [rbp-408h]
  std::tuple_element<0,std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::type *round; // [rsp+50h] [rbp-400h]
  std::tuple_element<1,const std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::type *round_config; // [rsp+58h] [rbp-3F8h]
  char v53[1008]; // [rsp+60h] [rbp-3F0h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 4 13 cur_round:208 48 8 15 __for_begin:187 80 8 13 __for_end:187 112 8 9 <unknown> 144 8 9"
                        " <unknown> 176 8 15 __for_begin:209 208 8 13 __for_end:209 240 8 9 <unknown> 272 8 9 <unknown> 3"
                        "04 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unknown> 62"
                        "4 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 48 10 id_set:180";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
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
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862749] = -202116109;
  p_store_config_map = &this->store_config_map;
  if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
  {
    p_store_config_map = (std::map<unsigned int,ActivityVintageMarketStoreConfig> *)48;
    __asan_report_store_n(v2 + 880, 48LL);
  }
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,ActivityVintageMarketStoreConfig>>(
    (std::set<unsigned int> *)(v2 + 880),
    p_store_config_map);
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v2 + 880),
         &ActivityVintageMarketExcelConfigMgr::STORE_ID_SET) )
  {
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "checkVintageMarketStoreExcelConfig",
      183);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 304),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v6,
      (const char (*)[32])"[Vintage] store id config error");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->store_config_map;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 48, &ActivityVintageMarketExcelConfigMgr::STORE_ID_SET);
    *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v2 + 48) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 80, &ActivityVintageMarketExcelConfigMgr::STORE_ID_SET);
    *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v2 + 80) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::end(__for_range);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v2 + 48),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v2 + 80)) )
    {
      v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> > *const)(v2 + 48));
      id = std::get<0ul,unsigned int const,ActivityVintageMarketStoreConfig>(v46);
      config = (std::tuple_element<1,const std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *)std::get<1ul,unsigned int const,ActivityVintageMarketStoreConfig>(v46);
      v8 = ((unsigned __int8)id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v9 = *id;
      v10 = *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v10 != 0;
      if ( v10 != 0 && v10 <= 3 )
        __asan_report_load4(config);
      if ( v9 == config->store_id )
      {
        if ( std::vector<unsigned int>::size(&config->default_attr_vec) == 3 )
        {
          if ( std::vector<unsigned int>::size(&config->max_attr_vec) == 3 )
          {
            *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 32, v8);
            *(_DWORD *)(v2 + 32) = 0;
            __for_range_0 = &config->round_config_map;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 176, v8);
            *(std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::const_iterator *)(v2 + 176) = std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::begin(__for_range_0);
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 208, v8);
            *(std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::const_iterator *)(v2 + 208) = std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::end(__for_range_0);
            while ( std::operator!=(
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::_Self *)(v2 + 176),
                      (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::_Self *)(v2 + 208)) )
            {
              v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> > *const)(v2 + 176));
              round = std::get<0ul,unsigned int const,ActivityVintageMarketStoreRoundConfig>(v50);
              round_config = (std::tuple_element<1,const std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >::type *)std::get<1ul,unsigned int const,ActivityVintageMarketStoreRoundConfig>(v50);
              if ( *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(round);
              }
              v21 = *round;
              if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 32);
              if ( v21 != *(_DWORD *)(v2 + 32) + 1 )
              {
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 560, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 560),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketStoreExcelConfig",
                  213);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 560),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        v22,
                        (const char (*)[49])"[Vintage] round config is not consequent, round:");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        (const unsigned int *)(v2 + 32));
                v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v24,
                        (const char (*)[14])", next_round:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, round);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
                break;
              }
              if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 32);
              ++*(_DWORD *)(v2 + 32);
              if ( std::vector<float>::size(&round_config->attr_low_limit_factor_vec) == 3 )
              {
                if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<unsigned int>>,unsigned int>(
                        &this->random_template_pool_map,
                        &round_config->random_template_id) )
                {
                  *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 688, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 688),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                    "checkVintageMarketStoreExcelConfig",
                    226);
                  v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 688),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v30 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                          v29,
                          (const char (*)[62])"[Vintage] find random_template_id failed, random_template_id:");
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          &round_config->random_template_id);
                  v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v31,
                          (const char (*)[9])", round:");
                  v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, round);
                  v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v33,
                          (const char (*)[12])", store_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
                  *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 624, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 624),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketStoreExcelConfig",
                  220);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 624),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v27 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        v26,
                        (const char (*)[54])"[Vintage] attr_low_limit_factor_vec size error, size:");
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
                v28 = std::vector<float>::size(&round_config->attr_low_limit_factor_vec);
                if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
                  v28 = __asan_report_store8(v2 + 240, "[Vintage] attr_low_limit_factor_vec size error, size:");
                *(_QWORD *)(v2 + 240) = v28;
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v27,
                  (const unsigned __int64 *)(v2 + 240));
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
                *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> > *const)(v2 + 176));
            }
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
            if ( std::vector<std::map<unsigned int,unsigned int>>::size(&config->attr_level_cost_map_vec) == 3 )
            {
              M_current = std::vector<std::map<unsigned int,unsigned int>>::end(&config->attr_level_cost_map_vec)._M_current;
              v39._M_current = std::vector<std::map<unsigned int,unsigned int>>::begin(&config->attr_level_cost_map_vec)._M_current;
              if ( std::any_of<__gnu_cxx::__normal_iterator<std::map<unsigned int,unsigned int> const*,std::vector<std::map<unsigned int,unsigned int>>>,ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<std::map<unsigned int,unsigned int> const*,std::vector<std::map<unsigned int,unsigned int>>> &)#1}>(
                     v39,
                     (__gnu_cxx::__normal_iterator<const std::map<unsigned int,unsigned int>*,std::vector<std::map<unsigned int,unsigned int>> >)M_current,
                     v40) )
              {
                *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 816, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 816),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketStoreExcelConfig",
                  246);
                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 816),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v42 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                        v41,
                        (const char (*)[53])"[Vintage] attr_level_cost_map empty error, store_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
                *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketStoreExcelConfig",
                236);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      v35,
                      (const char (*)[48])"[Vintage] attr_level_cost_vec size error, size:");
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
              v37 = std::vector<std::map<unsigned int,unsigned int>>::size(&config->attr_level_cost_map_vec);
              if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
                v37 = __asan_report_store8(v2 + 272, "[Vintage] attr_level_cost_vec size error, size:");
              *(_QWORD *)(v2 + 272) = v37;
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v36,
                (const unsigned __int64 *)(v2 + 272));
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
              *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 496, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 496),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketStoreExcelConfig",
              203);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v18,
                    (const char (*)[41])"[Vintage] max_attr_vec size error, size:");
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
            v20 = std::vector<unsigned int>::size(&config->max_attr_vec);
            if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
              v20 = __asan_report_store8(v2 + 144, "[Vintage] max_attr_vec size error, size:");
            *(_QWORD *)(v2 + 144) = v20;
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v19,
              (const unsigned __int64 *)(v2 + 144));
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketStoreExcelConfig",
            197);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v15,
                  (const char (*)[45])"[Vintage] default_attr_vec size error, size:");
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
          v17 = std::vector<unsigned int>::size(&config->default_attr_vec);
          if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_store8(v2 + 112, "[Vintage] default_attr_vec size error, size:");
          *(_QWORD *)(v2 + 112) = v17;
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v16,
            (const unsigned __int64 *)(v2 + 112));
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketStoreExcelConfig",
          191);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v11,
                (const char (*)[30])"[Vintage] store id error, id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", store_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->store_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
        *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> > *const)(v2 + 48));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    v7 = ret;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 880));
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v7;
};

// Line 241: range 0000000012EA8060-0000000012EA807D
bool __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig::_lambda_auto_27___::operator()_const_std::map_unsigned_int_unsigned_int___(
        const ActivityVintageMarketExcelConfigMgr::checkVintageMarketStoreExcelConfig::<lambda(auto:27&)> *const __closure,
        const std::map<unsigned int,unsigned int> *p)
{
  return std::map<unsigned int,unsigned int>::empty(p);
};

// Line 256: range 0000000012E5128A-0000000012E52CED
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::VintageMarketRoundExcelConfigMap *p_vintage_market_round_excel_config_map; // rsi
  common::milog::MiLogStream *v7; // rax
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  uint32_t v18; // ecx
  char v19; // al
  std::vector<data::VintageMarketStoreRoundExcelConfig>::size_type v20; // r15
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::vector<data::VintageMarketStoreRoundExcelConfig>::size_type v23; // rax
  int v24; // eax
  std::map<unsigned int,ActivityVintageMarketStoreConfig> *p_store_config_map; // rcx
  __int64 v26; // rsi
  std::map<unsigned int,ActivityVintageMarketStoreConfig> *v27; // rdx
  bool v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  __int64 v31; // rsi
  _BOOL4 v32; // eax
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v33; // rdx
  float *p_reward_factor; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v37; // rax
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v38; // rdx
  float *p_income_factor; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v42; // rax
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v43; // rax
  const float *M_current; // r15
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v45; // rax
  std::vector<float>::const_iterator v46; // rax
  ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig::<lambda(float)> v47; // dl
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v50; // rax
  unsigned __int64 v51; // rax
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v52; // rax
  __int64 v53; // rsi
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v54; // rax
  uint32_t random_template_id; // ecx
  char v56; // al
  __int64 v57; // rsi
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v58; // rax
  uint32_t fixed_income; // ecx
  char v60; // dl
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v61; // rdx
  char v62; // cl
  __int64 v63; // rsi
  float reward_factor; // xmm0_4
  std::vector<data::VintageMarketStoreRoundExcelConfig>::const_reference v65; // rdx
  float *v66; // rax
  float income_factor; // xmm0_4
  std::map<unsigned int,ActivityVintageMarketStoreRoundConfig> *p_round_config_map; // r15
  ActivityVintageMarketStoreRoundConfig *v69; // rdx
  const unsigned int *v70; // rcx
  ActivityVintageMarketStoreRoundConfig *v71; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreRoundConfig> >,bool> v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  int v75; // r15d
  unsigned __int64 v76; // rdx
  uint32_t idx; // [rsp+24h] [rbp-43Ch]
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-438h]
  data::VintageMarketRoundExcelConfigMap *__for_range_0; // [rsp+30h] [rbp-430h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::reference v81; // [rsp+38h] [rbp-428h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketRoundExcelConfig> >::type *id; // [rsp+40h] [rbp-420h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketRoundExcelConfig> >::type *config; // [rsp+48h] [rbp-418h]
  char v84[1040]; // [rsp+50h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v84;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 4 13 cur_round:257 48 4 9 round:265 64 4 9 <unknown> 80 4 9 <unknown> 96 8 15 __for_begin:"
                        "265 128 8 13 __for_end:265 160 8 15 __for_begin:275 192 8 13 __for_end:275 224 8 9 <unknown> 256"
                        " 8 8 iter:284 288 8 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 "
                        "9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 40 2"
                        "2 store_round_config:308 912 48 13 round_set:259";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959360;
  v5[536862748] = 62194;
  v5[536862750] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 0;
  p_vintage_market_round_excel_config_map = &this->vintage_market_round_excel_config_map;
  if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 112 + 47) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
  {
    p_vintage_market_round_excel_config_map = (data::VintageMarketRoundExcelConfigMap *)48;
    __asan_report_store_n(v3 + 912, 48LL);
  }
  common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>>(
    (std::set<unsigned int> *)(v3 + 912),
    p_vintage_market_round_excel_config_map);
  if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 912)) )
  {
    if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "rewriteVintageMarketRoundExcelConfig",
      262);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])"[Vintage] round set empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __for_range = (std::set<unsigned int> *)(v3 + 912);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_vintage_market_round_excel_config_map);
    *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_vintage_market_round_excel_config_map);
    *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v8 = (char *)(v3 + 128);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_32;
      }
      v9 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 96));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v8) = v12 != 0;
        __asan_report_store4(v3 + 48, v8);
      }
      *(_DWORD *)(v3 + 48) = v11;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      if ( *(_DWORD *)(v3 + 32) + 1 != *(_DWORD *)(v3 + 48) )
        break;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      ++*(_DWORD *)(v3 + 32);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 96));
    }
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "rewriteVintageMarketRoundExcelConfig",
      269);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            v13,
            (const char (*)[49])"[Vintage] round config is not consequent, round:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", next_round:");
    v8 = (char *)(v3 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v18 = *(_DWORD *)(v3 + 32);
      v19 = *(_BYTE *)(((unsigned __int64)&this->max_round >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v19 != 0;
      if ( v19 != 0 && v19 <= 3 )
        __asan_report_store4(&this->max_round, v8);
      this->max_round = v18;
      __for_range_0 = &this->vintage_market_round_excel_config_map;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v8);
      *(std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v8);
      *(std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::end(__for_range_0);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false> *)(v3 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false> *)(v3 + 192)) )
        {
          v24 = 1;
          goto LABEL_106;
        }
        v81 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false> *const)(v3 + 160));
        id = std::get<0ul,unsigned int const,data::VintageMarketRoundExcelConfig>(v81);
        config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketRoundExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketRoundExcelConfig>(v81);
        v20 = std::vector<data::VintageMarketStoreRoundExcelConfig>::size(&config->store_list);
        if ( v20 != std::set<unsigned int>::size(&ActivityVintageMarketExcelConfigMgr::STORE_ID_SET) )
          break;
        for ( idx = 0; idx < std::vector<data::VintageMarketStoreRoundExcelConfig>::size(&config->store_list); ++idx )
        {
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          p_store_config_map = &this->store_config_map;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v26 = idx + 1;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64, v26);
          *(_DWORD *)(v3 + 64) = v26;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v26);
          *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v3 + 256) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::find(
                                                                                               p_store_config_map,
                                                                                               (const std::map<unsigned int,ActivityVintageMarketStoreConfig>::key_type *)(v3 + 64));
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          v27 = &this->store_config_map;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v3 + 64);
          *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v3 + 288) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::end(v27);
          v28 = std::operator==(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v3 + 256),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v3 + 288));
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          if ( v28 )
          {
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketRoundExcelConfig",
              287);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v29,
                    (const char (*)[33])"[Vintage] find store failed, id:");
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            v31 = idx + 1;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v31);
            *(_DWORD *)(v3 + 80) = v31;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 80));
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v32 = 0;
          }
          else
          {
            v33 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
            p_reward_factor = &v33->reward_factor;
            if ( *(_BYTE *)(((unsigned __int64)p_reward_factor >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_reward_factor & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_factor >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(p_reward_factor);
            }
            if ( v33->reward_factor >= 0.0 )
            {
              v38 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
              p_income_factor = &v38->income_factor;
              if ( *(_BYTE *)(((unsigned __int64)p_income_factor >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_income_factor & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_income_factor >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(p_income_factor);
              }
              if ( v38->income_factor >= 0.0 )
              {
                v43 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                M_current = std::vector<float>::end(&v43->attr_low_limit_facotr_list)._M_current;
                v45 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                *(std::vector<float>::const_iterator *)&v46._M_current = (std::vector<float>::const_iterator)std::vector<float>::begin(&v45->attr_low_limit_facotr_list)._M_current;
                if ( std::any_of<__gnu_cxx::__normal_iterator<float const*,std::vector<float>>,ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig(TxtConfigMgr &)::{lambda(float)#1}>(
                       v46,
                       (__gnu_cxx::__normal_iterator<float const*,std::vector<float> >)M_current,
                       v47) )
                {
                  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 704, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 704),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                    "rewriteVintageMarketRoundExcelConfig",
                    305);
                  v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 704),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v49 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          v48,
                          (const char (*)[53])"[Vintage] attr low limit factor can not < 0, factor:");
                  v50 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  common::milog::MiLogStream::operator<<<float>(v49, &v50->attr_low_limit_facotr_list);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v32 = 0;
                }
                else
                {
                  v51 = ((v3 + 832) >> 3) + 2147450880;
                  *(_DWORD *)v51 = 0;
                  *(_BYTE *)(v51 + 4) = 0;
                  ActivityVintageMarketStoreRoundConfig::ActivityVintageMarketStoreRoundConfig((ActivityVintageMarketStoreRoundConfig *const)(v3 + 832));
                  v52 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  std::vector<float>::operator=((std::vector<float> *const)(v3 + 832), &v52->attr_low_limit_facotr_list);
                  v53 = idx;
                  v54 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  if ( *(_BYTE *)(((unsigned __int64)&v54->random_template_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v54->random_template_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v54->random_template_id);
                  }
                  random_template_id = v54->random_template_id;
                  v56 = *(_BYTE *)(((v3 + 856) >> 3) + 0x7FFF8000);
                  if ( v56 != 0 && v56 <= 3 )
                  {
                    LOBYTE(v53) = v56 != 0;
                    __asan_report_store4(v3 + 856, v53);
                  }
                  *(_DWORD *)(v3 + 856) = random_template_id;
                  v57 = idx;
                  v58 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  if ( *(_BYTE *)(((unsigned __int64)&v58->fixed_income >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v58->fixed_income >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v58->fixed_income);
                  }
                  fixed_income = v58->fixed_income;
                  v60 = *(_BYTE *)(((v3 + 860) >> 3) + 0x7FFF8000);
                  if ( v60 != 0 && (char)(((v3 - 32 + 124) & 7) + 3) >= v60 )
                  {
                    LOBYTE(v57) = v60 != 0;
                    __asan_report_store4(v3 + 860, v57);
                  }
                  *(_DWORD *)(v3 + 860) = fixed_income;
                  v63 = idx;
                  v61 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  v62 = *(_BYTE *)(((unsigned __int64)&v61->reward_factor >> 3) + 0x7FFF8000);
                  LOBYTE(v63) = v62 != 0;
                  if ( v62 != 0 && (char)((((_BYTE)v61 + 36) & 7) + 3) >= v62 )
                    __asan_report_load4(&v61->reward_factor);
                  reward_factor = v61->reward_factor;
                  if ( *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 864, v63);
                  }
                  *(float *)(v3 + 864) = reward_factor;
                  v65 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                  v66 = &v65->income_factor;
                  if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v66);
                  }
                  income_factor = v65->income_factor;
                  if ( *(_BYTE *)(((v3 + 868) >> 3) + 0x7FFF8000) != 0
                    && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 868) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store4(v3 + 868, (((_BYTE)v3 + 100) & 7u) + 3);
                  }
                  *(float *)(v3 + 868) = income_factor;
                  p_round_config_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> > *const)(v3 + 256))->second.round_config_map;
                  v69 = std::move<ActivityVintageMarketStoreRoundConfig &>((ActivityVintageMarketStoreRoundConfig *)(v3 + 832));
                  v72 = std::map<unsigned int,ActivityVintageMarketStoreRoundConfig>::emplace<unsigned int const&,ActivityVintageMarketStoreRoundConfig>(
                          p_round_config_map,
                          id,
                          v69,
                          v70,
                          v71);
                  if ( !v72.second )
                  {
                    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 768, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 768),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                      "rewriteVintageMarketRoundExcelConfig",
                      316);
                    v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 768),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v74 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            v73,
                            (const char (*)[27])"[Vintage] duplicate round:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
                    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v75 = 0;
                  }
                  else
                  {
                    v75 = 1;
                  }
                  ActivityVintageMarketStoreRoundConfig::~ActivityVintageMarketStoreRoundConfig((ActivityVintageMarketStoreRoundConfig *const)(v3 + 832));
                  v32 = v75 == 1;
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 640, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 640),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "rewriteVintageMarketRoundExcelConfig",
                  297);
                v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 640),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v41 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v40,
                        (const char (*)[45])"[Vintage] income factor can not < 0, factor:");
                v42 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
                common::milog::MiLogStream::operator<<<float,(float *)0>(v41, &v42->income_factor);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v32 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 127) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "rewriteVintageMarketRoundExcelConfig",
                292);
              v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v36 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      v35,
                      (const char (*)[45])"[Vintage] reward factor can not < 0, factor:");
              v37 = std::vector<data::VintageMarketStoreRoundExcelConfig>::operator[](&config->store_list, idx);
              common::milog::MiLogStream::operator<<<float,(float *)0>(v36, &v37->reward_factor);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v32 = 0;
            }
          }
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          v76 = ((v3 + 832) >> 3) + 2147450880;
          *(_DWORD *)v76 = -117901064;
          *(_BYTE *)(v76 + 4) = -8;
          if ( !v32 )
          {
            v24 = 0;
            goto LABEL_106;
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false> *const)(v3 + 160));
      }
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "rewriteVintageMarketRoundExcelConfig",
        279);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              v21,
              (const char (*)[60])"[Vintage] round config store num is not correct, store_num:");
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v23 = std::vector<data::VintageMarketStoreRoundExcelConfig>::size(&config->store_list);
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        v23 = __asan_report_store8(v3 + 224, "[Vintage] round config store num is not correct, store_num:");
      *(_QWORD *)(v3 + 224) = v23;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v22,
        (const unsigned __int64 *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v24 = 0;
LABEL_106:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v24 == 1 )
        v2 = 0;
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 912));
  if ( v84 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v2;
};

// Line 300: range 0000000012E51270-0000000012E51289
bool __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig(TxtConfigMgr &)::{lambda(float)#1}::operator()(
        const ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketRoundExcelConfig::<lambda(float)> *const __closure,
        float f)
{
  return f < 0.0;
};

// Line 326: range 0000000012E52CEE-0000000012E54A67
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrUpgradeExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  _BOOL4 v8; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::size_type v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::size_type v17; // rax
  int v18; // eax
  const std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig> *p_store_config; // rcx
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::const_reference v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig> *v25; // rcx
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::size_type v26; // rsi
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::const_reference v27; // rax
  std::vector<unsigned int>::size_type v28; // rax
  const std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig> *v29; // rcx
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::const_reference v30; // rax
  char v31; // al
  const std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig> *v32; // rcx
  std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::const_reference v33; // rax
  const unsigned int *v34; // rdx
  const unsigned int *v35; // rcx
  const unsigned int *v36; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  const std::map<unsigned int,unsigned int> *v42; // rsi
  unsigned __int64 v43; // rax
  char v44; // al
  std::vector<std::map<unsigned int,unsigned int>>::size_type v45; // rsi
  std::map<unsigned int,unsigned int> *v46; // rcx
  unsigned int *v47; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  int v51; // eax
  unsigned int v52; // ecx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  unsigned int v61; // ecx
  int v62; // edx
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  int v67; // edx
  std::vector<std::map<unsigned int,unsigned int>> *v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  int v71; // eax
  std::map<unsigned int,unsigned int> *v73; // [rsp+8h] [rbp-4F8h]
  std::vector<std::map<unsigned int,unsigned int>>::reference v74; // [rsp+8h] [rbp-4F8h]
  _BOOL4 v75; // [rsp+8h] [rbp-4F8h]
  std::vector<std::map<unsigned int,unsigned int>>::size_type v76; // [rsp+8h] [rbp-4F8h]
  std::vector<std::map<unsigned int,unsigned int>>::size_type v77; // [rsp+8h] [rbp-4F8h]
  common::milog::MiLogStream *v78; // [rsp+8h] [rbp-4F8h]
  int v79; // [rsp+8h] [rbp-4F8h]
  uint32_t idx; // [rsp+2Ch] [rbp-4D4h]
  std::map<unsigned int,ActivityVintageMarketStoreConfig> *__for_range; // [rsp+30h] [rbp-4D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::reference __in; // [rsp+38h] [rbp-4C8h]
  std::tuple_element<0,std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *store_id; // [rsp+40h] [rbp-4C0h]
  std::tuple_element<1,std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *store_config; // [rsp+48h] [rbp-4B8h]
  data::VintageMarketAttrUpgradeExcelConfigMap *__for_range_0; // [rsp+50h] [rbp-4B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false,false>::reference v86; // [rsp+58h] [rbp-4A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig> >::type *level; // [rsp+60h] [rbp-4A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig> >::type *config; // [rsp+68h] [rbp-498h]
  std::vector<std::map<unsigned int,unsigned int>>::reference __for_range_1; // [rsp+70h] [rbp-490h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v90; // [rsp+78h] [rbp-488h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *level_0; // [rsp+80h] [rbp-480h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *single_cost; // [rsp+88h] [rbp-478h]
  char v93[1136]; // [rsp+90h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v93;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 4 7 idx:361 80 4 12 cur_cost:363 96 8 15 __for_begin:327"
                        " 128 8 13 __for_end:327 160 8 15 __for_begin:336 192 8 13 __for_end:336 224 8 9 <unknown> 256 8 "
                        "9 <unknown> 288 8 15 __for_begin:364 320 8 13 __for_end:364 352 24 35 attr_single_level_const_ma"
                        "p_vec:335 416 24 27 attr_level_cost_map_vec:360 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 48 9 <u"
                        "nknown> 1008 48 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrUpgradeExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862753] = -202116109;
  __for_range = &this->store_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v3 + 96) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<unsigned int,ActivityVintageMarketStoreConfig>::iterator *)(v3 + 128) = std::map<unsigned int,ActivityVintageMarketStoreConfig>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)(v3 + 128)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> > *const)(v3 + 96));
    store_id = std::get<0ul,unsigned int const,ActivityVintageMarketStoreConfig>(__in);
    store_config = std::get<1ul,unsigned int const,ActivityVintageMarketStoreConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(store_id);
    }
    if ( *store_id )
    {
      v9 = ((v3 + 352) >> 3) + 2147450880;
      *(_WORD *)v9 = 0;
      *(_BYTE *)(v9 + 2) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::map<unsigned int,unsigned int>>::allocator((std::allocator<std::map<unsigned int,unsigned int> > *const)(v3 + 32));
      v10 = ((v3 + 928) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 928, 48LL);
      }
      *(_QWORD *)(v3 + 928) = 0LL;
      *(_QWORD *)(v3 + 936) = 0LL;
      *(_QWORD *)(v3 + 944) = 0LL;
      *(_QWORD *)(v3 + 952) = 0LL;
      *(_QWORD *)(v3 + 960) = 0LL;
      *(_QWORD *)(v3 + 968) = 0LL;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
      std::vector<std::map<unsigned int,unsigned int>>::vector(
        (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352),
        3uLL,
        (const std::vector<std::map<unsigned int,unsigned int>>::value_type *)(v3 + 928),
        (const std::vector<std::map<unsigned int,unsigned int>>::allocator_type *)(v3 + 32));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
      v11 = ((v3 + 928) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_WORD *)(v11 + 4) = -1800;
      std::allocator<std::map<unsigned int,unsigned int>>::~allocator((std::allocator<std::map<unsigned int,unsigned int> > *const)(v3 + 32));
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      __for_range_0 = &this->vintage_market_attr_upgrade_excel_config_map;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, 3LL);
      *(std::unordered_map<unsigned int,data::VintageMarketAttrUpgradeExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::VintageMarketAttrUpgradeExcelConfig>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, 3LL);
      *(std::unordered_map<unsigned int,data::VintageMarketAttrUpgradeExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::VintageMarketAttrUpgradeExcelConfig>::end(__for_range_0);
LABEL_23:
      if ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false> *)(v3 + 160),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false> *)(v3 + 192)) )
      {
        v86 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false,false> *const)(v3 + 160));
        level = std::get<0ul,unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>(v86);
        config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>(v86);
        v12 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::size(&config->store_config);
        if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(store_id);
        }
        if ( v12 >= *store_id - 1 )
        {
          p_store_config = &config->store_config;
          if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(store_id);
          }
          v20 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::operator[](p_store_config, *store_id - 1);
          v73 = (std::map<unsigned int,unsigned int> *)std::vector<unsigned int>::size(&v20->cost);
          if ( v73 == (std::map<unsigned int,unsigned int> *)std::vector<std::map<unsigned int,unsigned int>>::size((const std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352)) )
          {
            for ( idx = 0; ; ++idx )
            {
              if ( idx >= std::vector<std::map<unsigned int,unsigned int>>::size((const std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352)) )
                goto LABEL_48;
              v29 = &config->store_config;
              if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(store_id);
              }
              v30 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::operator[](v29, *store_id - 1);
              if ( idx >= std::vector<unsigned int>::size(&v30->cost) )
LABEL_48:
                v31 = 0;
              else
                v31 = 1;
              if ( !v31 )
              {
                std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrUpgradeExcelConfig>,false,false> *const)(v3 + 160));
                goto LABEL_23;
              }
              v74 = std::vector<std::map<unsigned int,unsigned int>>::operator[](
                      (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352),
                      idx);
              v32 = &config->store_config;
              if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(store_id);
              }
              v33 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::operator[](v32, *store_id - 1);
              v34 = std::vector<unsigned int>::operator[](&v33->cost, idx);
              v37 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                      v74,
                      level,
                      v34,
                      v35,
                      v36);
              if ( !v37.second )
                break;
            }
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketAttrUpgradeExcelConfig",
              353);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v38,
                    (const char (*)[27])"[Vintage] duplicate level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, level);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v18 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketAttrUpgradeExcelConfig",
              345);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v21,
                    (const char (*)[47])"[Vintage] invalid attr level_config, store_id:");
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, store_id);
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])", attr_size:");
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            v25 = &config->store_config;
            if ( *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)store_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)store_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(store_id);
            }
            v26 = *store_id - 1;
            v27 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::operator[](v25, v26);
            v28 = std::vector<unsigned int>::size(&v27->cost);
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              v28 = __asan_report_store8(v3 + 256, v26);
            *(_QWORD *)(v3 + 256) = v28;
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v24,
              (const unsigned __int64 *)(v3 + 256));
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v18 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "rewriteVintageMarketAttrUpgradeExcelConfig",
            340);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v13,
                  (const char (*)[47])"[Vintage] invalid attr level_config, store_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, store_id);
          v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v15,
                  (const char (*)[21])", store_config_size:");
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          v17 = std::vector<data::VintageMarketStoreAttrUpgradeExcelConfig>::size(&config->store_config);
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            v17 = __asan_report_store8(v3 + 224, ", store_config_size:");
          *(_QWORD *)(v3 + 224) = v17;
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v16,
            (const unsigned __int64 *)(v3 + 224));
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
      }
      else
      {
        v18 = 1;
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v18 == 1 )
      {
        v40 = ((v3 + 416) >> 3) + 2147450880;
        *(_WORD *)v40 = 0;
        *(_BYTE *)(v40 + 2) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::map<unsigned int,unsigned int>>::allocator((std::allocator<std::map<unsigned int,unsigned int> > *const)(v3 + 48));
        v41 = ((v3 + 1008) >> 3) + 2147450880;
        *(_DWORD *)v41 = 0;
        *(_WORD *)(v41 + 4) = 0;
        if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 47) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1008, 48LL);
        }
        *(_QWORD *)(v3 + 1008) = 0LL;
        *(_QWORD *)(v3 + 1016) = 0LL;
        *(_QWORD *)(v3 + 1024) = 0LL;
        *(_QWORD *)(v3 + 1032) = 0LL;
        *(_QWORD *)(v3 + 1040) = 0LL;
        *(_QWORD *)(v3 + 1048) = 0LL;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1008));
        v42 = (const std::map<unsigned int,unsigned int> *)3;
        std::vector<std::map<unsigned int,unsigned int>>::vector(
          (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 416),
          3uLL,
          (const std::vector<std::map<unsigned int,unsigned int>>::value_type *)(v3 + 1008),
          (const std::vector<std::map<unsigned int,unsigned int>>::allocator_type *)(v3 + 48));
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1008));
        v43 = ((v3 + 1008) >> 3) + 2147450880;
        *(_DWORD *)v43 = -117901064;
        *(_WORD *)(v43 + 4) = -1800;
        std::allocator<std::map<unsigned int,unsigned int>>::~allocator((std::allocator<std::map<unsigned int,unsigned int> > *const)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, 3LL);
        for ( *(_DWORD *)(v3 + 64) = 0; ; ++*(_DWORD *)(v3 + 64) )
        {
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v76 = *(unsigned int *)(v3 + 64);
          if ( v76 >= std::vector<std::map<unsigned int,unsigned int>>::size((const std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352)) )
            goto LABEL_73;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v77 = *(unsigned int *)(v3 + 64);
          if ( v77 >= std::vector<std::map<unsigned int,unsigned int>>::size((const std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 416)) )
LABEL_73:
            v44 = 0;
          else
            v44 = 1;
          if ( !v44 )
            break;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80, v42);
          *(_DWORD *)(v3 + 80) = 0;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v45 = *(unsigned int *)(v3 + 64);
          __for_range_1 = std::vector<std::map<unsigned int,unsigned int>>::operator[](
                            (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352),
                            v45);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, v45);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 320, v45);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::map<unsigned int,unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            v42 = (const std::map<unsigned int,unsigned int> *)(v3 + 320);
            if ( !std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 288),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 320)) )
            {
              v51 = 1;
              goto LABEL_108;
            }
            v90 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 288));
            level_0 = std::get<0ul,unsigned int const,unsigned int>(v90);
            single_cost = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v90);
            if ( *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(level_0);
            }
            if ( *level_0 )
            {
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 64);
              v46 = std::vector<std::map<unsigned int,unsigned int>>::operator[](
                      (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 416),
                      *(unsigned int *)(v3 + 64));
              v48 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                      v46,
                      level_0,
                      (unsigned int *)(v3 + 80),
                      (const unsigned int *)v46,
                      v47);
              if ( !v48.second )
              {
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 736, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 736),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "rewriteVintageMarketAttrUpgradeExcelConfig",
                  370);
                v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 736),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v50 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        v49,
                        (const char (*)[27])"[Vintage] duplicate level:");
                v42 = (const std::map<unsigned int,unsigned int> *)level_0;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, level_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v51 = 0;
                goto LABEL_108;
              }
            }
            if ( *(_BYTE *)(((unsigned __int64)single_cost >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)single_cost & 7) + 3) >= *(_BYTE *)(((unsigned __int64)single_cost >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(single_cost);
            }
            v52 = *single_cost;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( v52 + *(_DWORD *)(v3 + 80) < *(_DWORD *)(v3 + 80) )
              break;
            if ( *(_BYTE *)(((unsigned __int64)single_cost >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)single_cost & 7) + 3) >= *(_BYTE *)(((unsigned __int64)single_cost >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(single_cost);
            }
            v61 = *single_cost;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            *(_DWORD *)(v3 + 80) += v61;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 288));
          }
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "rewriteVintageMarketAttrUpgradeExcelConfig",
            376);
          v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v54 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  v53,
                  (const char (*)[36])"[Vintage] cost over flow, cur_cost:");
          v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v54,
                  (const unsigned int *)(v3 + 80));
          v56 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v55,
                  (const char (*)[15])", single_cost:");
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, single_cost);
          v58 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v57, (const char (*)[9])", level:");
          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, level_0);
          v60 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v59, (const char (*)[12])", store_id:");
          v42 = (const std::map<unsigned int,unsigned int> *)store_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, store_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v51 = 0;
LABEL_108:
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v51 == 1 )
          {
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketAttrUpgradeExcelConfig",
              382);
            v63 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)(v3 + 864),
                    (const char (*)[32])"[VintageMarketConfig] store_id:");
            v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, store_id);
            v65 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v64,
                    (const char (*)[12])", attr_idx:");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v3 + 64));
            v78 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v66,
                    (const char (*)[17])", attr_cost_map:");
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v42 = std::vector<std::map<unsigned int,unsigned int>>::operator[](
                    (std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 416),
                    *(unsigned int *)(v3 + 64));
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v78, v42);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v62 = 1;
          }
          else
          {
            v62 = 0;
          }
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v62 != 1 )
          {
            v67 = 0;
            goto LABEL_121;
          }
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
        }
        v67 = 1;
LABEL_121:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v67 == 1 )
        {
          v68 = std::move<std::vector<std::map<unsigned int,unsigned int>> &>((std::vector<std::map<unsigned int,unsigned int>> *)(v3 + 416));
          std::vector<std::map<unsigned int,unsigned int>>::operator=(&store_config->attr_level_cost_map_vec, v68);
          v79 = 1;
        }
        else
        {
          v79 = 0;
        }
        std::vector<std::map<unsigned int,unsigned int>>::~vector((std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 416));
        v75 = v79 == 1;
      }
      else
      {
        v75 = 0;
      }
      std::vector<std::map<unsigned int,unsigned int>>::~vector((std::vector<std::map<unsigned int,unsigned int>> *const)(v3 + 352));
      v8 = v75;
    }
    else
    {
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "rewriteVintageMarketAttrUpgradeExcelConfig",
        331);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v6,
             (const char (*)[28])"[Vintage] invalid store_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, store_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    v69 = ((v3 + 352) >> 3) + 2147450880;
    *(_WORD *)v69 = -1800;
    *(_BYTE *)(v69 + 2) = -8;
    v70 = ((v3 + 416) >> 3) + 2147450880;
    *(_WORD *)v70 = -1800;
    *(_BYTE *)(v70 + 2) = -8;
    if ( !v8 )
    {
      v71 = 0;
      goto LABEL_130;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> > *const)(v3 + 96));
  }
  v71 = 1;
LABEL_130:
  if ( v71 == 1 )
    v2 = 0;
  if ( v93 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v93);
  }
  return v2;
};

// Line 391: range 0000000012E54A68-0000000012E54C74
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrRandomTemplateExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rdx
  int32_t result; // eax
  data::VintageMarketAttrRandomTemplateExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:392 64 8 13 __for_end:392";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>::__node_type *)ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrRandomTemplateExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->vintage_market_attr_random_template_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>(v8);
    v5 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->random_template_pool_map,
           &config->template_id);
    std::vector<unsigned int>::push_back(v5, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 400: range 0000000012E54C76-0000000012E55669
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketAttrRandomTemplateExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::vector<unsigned int>::size_type v9; // rax
  int v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  _BOOL4 v13; // edx
  unsigned __int64 v14; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v16; // rax
  std::set<unsigned int>::size_type v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // r15d
  unsigned __int64 v21; // rax
  int v22; // eax
  int32_t result; // eax
  data::VintageMarketAttrRandomTemplateExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig> >::type *config; // [rsp+38h] [rbp-238h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-230h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v28; // [rsp+48h] [rbp-228h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *template_id; // [rsp+50h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *pool_vec; // [rsp+58h] [rbp-218h]
  char v31[528]; // [rsp+60h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 8 15 __for_begin:401 80 8 13 __for_end:401 112 8 9 <unknown> 144 8 15 __for_begin:409 176 8"
                        " 13 __for_end:409 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 48 12 pool_set:416";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketAttrRandomTemplateExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862734] = -202116109;
  __for_range = &this->vintage_market_attr_random_template_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::VintageMarketAttrRandomTemplateExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false> *)(v3 + 80)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>(v25);
    if ( std::vector<unsigned int>::size(&config->add_attr_list) != 3 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrRandomTemplateExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 208),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "checkVintageMarketAttrRandomTemplateExcelConfig",
    405);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 208),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
         v7,
         (const char (*)[61])"[Vintage] random template attr num is not correct, attr_num:");
  v9 = std::vector<unsigned int>::size(&config->add_attr_list);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8(v3 + 112, "[Vintage] random template attr num is not correct, attr_num:");
  *(_QWORD *)(v3 + 112) = v9;
  v6 = (char *)(v3 + 112);
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v3 + 112));
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    __for_range_0 = &this->random_template_pool_map;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 144) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 176) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 144),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 176)) )
    {
      v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 144));
      template_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v28);
      pool_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v28);
      if ( std::vector<unsigned int>::empty(pool_vec) )
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketAttrRandomTemplateExcelConfig",
          413);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                v11,
                (const char (*)[59])"[Vintage] attr random template pool is empty, template_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, template_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      else
      {
        v14 = ((v3 + 400) >> 3) + 2147450880;
        *(_DWORD *)v14 = 0;
        *(_WORD *)(v14 + 4) = 0;
        M_current = std::vector<unsigned int>::end(pool_vec)._M_current;
        v16._M_current = std::vector<unsigned int>::begin(pool_vec)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v3 + 400),
          v16,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        v17 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 400));
        if ( v17 == std::vector<unsigned int>::size(pool_vec) )
        {
          v20 = 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketAttrRandomTemplateExcelConfig",
            419);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                  v18,
                  (const char (*)[74])"[Vintage] attr random template pool have duplicate config, template_pool:");
          common::milog::MiLogStream::operator<<<unsigned int>(v19, pool_vec);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v20 = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 400));
        v13 = v20 == 1;
      }
      v21 = ((v3 + 400) >> 3) + 2147450880;
      *(_DWORD *)v21 = -117901064;
      *(_WORD *)(v21 + 4) = -1800;
      if ( !v13 )
      {
        v22 = 0;
        goto LABEL_39;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 144));
    }
    v22 = 1;
LABEL_39:
    if ( v22 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 427: range 0000000012E5566A-0000000012E55B5C
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrFactorExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const float *v6; // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,float> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  data::VintageMarketAttrFactorExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v17[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:428 64 8 13 __for_end:428 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketAttrFactorExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->vintage_market_attr_factor_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketAttrFactorExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketAttrFactorExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketAttrFactorExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketAttrFactorExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_22;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::VintageMarketAttrFactorExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketAttrFactorExcelConfig>(v15);
    if ( *(_BYTE *)(((unsigned __int64)&config->factor >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->factor >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->factor);
    }
    if ( config->factor < 0.0 )
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "rewriteVintageMarketAttrFactorExcelConfig",
        432);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v7,
             (const char (*)[38])"[Vintage] factor can not < 0, factor:");
      common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &config->factor);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_22;
    }
    v10 = std::map<unsigned int,float>::emplace<unsigned int const&,float const&>(
            &this->attr_factor_map,
            &config->attr_value,
            &config->factor,
            &config->attr_value,
            v6);
    if ( !v10.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketAttrFactorExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "rewriteVintageMarketAttrFactorExcelConfig",
    437);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v11,
          (const char (*)[32])"[Vintage] duplicate attr value:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->attr_value);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_22:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 445: range 0000000012E55B5E-0000000012E55E0C
float __fastcall ActivityVintageMarketExcelConfigMgr::getAttrFactor(
        const ActivityVintageMarketExcelConfigMgr *const this,
        __int64 attr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,float> *p_attr_factor_map; // rdx
  std::map<unsigned int,float> *v6; // rdx
  bool v7; // al
  std::map<unsigned int,float> *v8; // rdx
  bool v9; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v10; // rdx
  float *p_second; // rax
  float result; // xmm0_4
  char v13[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 8 attr:444 64 8 8 iter:446 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::getAttrFactor;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = attr;
  p_attr_factor_map = &this->attr_factor_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, attr);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 64) = std::map<unsigned int,float>::upper_bound(
                                                                 p_attr_factor_map,
                                                                 (const std::map<unsigned int,float>::key_type *)(v2 + 48));
  v6 = &this->attr_factor_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 96) = std::map<unsigned int,float>::begin(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( !v7 )
    goto LABEL_15;
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 64));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->attr_factor_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v2 + 96);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 128) = std::map<unsigned int,float>::end(v8);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v2 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v10->second;
  }
  else
  {
LABEL_15:
    result = 1.0;
  }
  if ( v13 == (char *)v2 )
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

// Line 459: range 0000000012E55E0E-0000000012E56D0C
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketEventExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::VintageMarketEventTriggerType *p_trigger_type; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  data::VintageMarketEventType event_type; // eax
  std::set<unsigned int> *v12; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::set<unsigned int> *v17; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-334h]
  data::VintageMarketEventExcelConfigMap *__for_range; // [rsp+20h] [rbp-330h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false,false>::reference v30; // [rsp+28h] [rbp-328h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketEventExcelConfig> >::type *id; // [rsp+30h] [rbp-320h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketEventExcelConfig> >::type *config; // [rsp+38h] [rbp-318h]
  char v33[784]; // [rsp+40h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 4 9 round:467 64 8 15 __for_begin:463 96 8 13 __for_end:463 128 8 9 <unknown> 160 32 9 <un"
                        "known> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unk"
                        "nown> 544 56 17 env_event_set:461 640 56 17 npc_event_set:462";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketEventExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862741] = -218103808;
  v4[536862742] = -202116109;
  ret = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 544));
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 640));
  __for_range = &this->vintage_market_event_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketEventExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::VintageMarketEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketEventExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::VintageMarketEventExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false> *)(v2 + 96)) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::VintageMarketEventExcelConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketEventExcelConfig>(v30);
    p_trigger_type = &config->trigger_type;
    if ( *(_BYTE *)(((unsigned __int64)p_trigger_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_trigger_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_trigger_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_trigger_type);
    }
    if ( config->trigger_type == VINTAGE_MARKET_EVENT_TRIGGER_ROUND )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, (((_BYTE)config + 12) & 7u) + 3);
      *(_DWORD *)(v2 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&config->trigger_param, (unsigned int *)(v2 + 48), 1) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "rewriteVintageMarketEventExcelConfig",
          470);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               v6,
               (const char (*)[55])"[Vintage] event trigger param config failed, event_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", trigger_param:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->trigger_param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v10 = *(unsigned __int8 *)(((unsigned __int64)&config->event_type >> 3) + 0x7FFF8000);
        if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
          __asan_report_load4(&config->event_type);
        event_type = config->event_type;
        if ( event_type == VINTAGE_MARKET_EVENT_ENV )
        {
          v12 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->round_env_event_map,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
          v13 = std::set<unsigned int>::insert(v12, &config->event_id);
          if ( !v13.second )
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
              1u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketEventExcelConfig",
              480);
            v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    (common::milog::MiLogStream *const)(v2 + 224),
                    (const char (*)[30])"[Vintage] duplicate event_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->event_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            v15 = std::unordered_set<unsigned int>::insert(
                    (std::unordered_set<unsigned int> *const)(v2 + 544),
                    &config->event_id);
            if ( !v15.second )
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
                1u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "rewriteVintageMarketEventExcelConfig",
                486);
              v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v2 + 288),
                      (const char (*)[30])"[Vintage] duplicate event_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->event_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
              *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
        }
        else if ( event_type == VINTAGE_MARKET_EVENT_NPC )
        {
          v17 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->round_npc_event_map,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
          v18 = std::set<unsigned int>::insert(v17, &config->event_id);
          if ( !v18.second )
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
              1u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "rewriteVintageMarketEventExcelConfig",
              496);
            v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[30])"[Vintage] duplicate event_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->event_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            v20 = std::unordered_set<unsigned int>::insert(
                    (std::unordered_set<unsigned int> *const)(v2 + 640),
                    &config->event_id);
            if ( !v20.second )
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
                1u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "rewriteVintageMarketEventExcelConfig",
                502);
              v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v2 + 416),
                      (const char (*)[30])"[Vintage] duplicate event_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->event_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "rewriteVintageMarketEventExcelConfig",
            510);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  v22,
                  (const char (*)[34])"[Vintage] unsupported event_type:");
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&config->event_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->event_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->event_type);
          }
          v24 = (__int64)data::enumValToStr(config->event_type, (__int64)"[Vintage] unsupported event_type:");
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            v24 = __asan_report_store8(v2 + 128, "[Vintage] unsupported event_type:");
          *(_QWORD *)(v2 + 128) = v24;
          v25 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v23,
                  (const char *const *)(v2 + 128));
          v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])", event_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEventExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 640));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 544));
  result = ret;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 521: range 0000000012E56D0E-0000000012E57B47
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketEventExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __int64 v7; // rsi
  uint32_t v8; // ecx
  char v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int v25; // eax
  char *v26; // rsi
  unsigned int *v27; // rax
  int *v28; // rdx
  int v29; // ecx
  char v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+10h] [rbp-2C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v36; // [rsp+18h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *round; // [rsp+20h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *event_set; // [rsp+28h] [rbp-2A8h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_1; // [rsp+38h] [rbp-298h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v40; // [rsp+40h] [rbp-290h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *round_0; // [rsp+48h] [rbp-288h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *event_set_0; // [rsp+50h] [rbp-280h]
  char v43[624]; // [rsp+60h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 12 event_id:530 48 4 12 event_id:548 64 8 15 __for_begin:522 96 8 13 __for_end:522 128 8"
                        " 15 __for_begin:530 160 8 13 __for_end:530 192 8 15 __for_begin:540 224 8 13 __for_end:540 256 8"
                        " 15 __for_begin:548 288 8 13 __for_end:548 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unkno"
                        "wn> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketEventExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  __for_range = &this->round_env_event_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_38;
    }
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    round = std::get<0ul,unsigned int const,std::set<unsigned int>>(v36);
    event_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v36);
    v7 = ((unsigned __int8)round & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)round & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(round);
    }
    v8 = *round;
    v9 = *(_BYTE *)(((unsigned __int64)&this->max_round >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_load4(&this->max_round);
    if ( v8 > this->max_round )
      break;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::begin(event_set);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::set<unsigned int>::iterator *)(v3 + 160) = std::set<unsigned int>::end(event_set);
    while ( 1 )
    {
      v6 = (char *)(v3 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 160)) )
      {
        v19 = 1;
        goto LABEL_34;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v6) = v16 != 0;
        __asan_report_store4(v3 + 32, v6);
      }
      *(_DWORD *)(v3 + 32) = v15;
      if ( !data::ActivityVintageMarketExcelConfigMgrBase::findVintageMarketEnvEventExcelConfig(
              this,
              *(unsigned int *)(v3 + 32)) )
        break;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "checkVintageMarketEventExcelConfig",
      534);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
            v17,
            (const char (*)[65])"[Vintage] findVintageMarketEnvEventExcelConfig failed, event_id:");
    v6 = (char *)(v3 + 32);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v12 = 0;
      goto LABEL_38;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 320, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 320),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "checkVintageMarketEventExcelConfig",
    526);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v10,
          (const char (*)[47])"[Vintage] event config round too large, round:");
  v6 = (char *)round;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, round);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_38:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
  {
    __for_range_1 = &this->round_npc_event_map;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_1);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 224)) )
      {
        v25 = 1;
        goto LABEL_73;
      }
      v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 192));
      round_0 = std::get<0ul,unsigned int const,std::set<unsigned int>>(v40);
      event_set_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v40);
      v20 = ((unsigned __int8)round_0 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)round_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)round_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)round_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(round_0);
      }
      v21 = *round_0;
      v22 = *(_BYTE *)(((unsigned __int64)&this->max_round >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v22 != 0;
      if ( v22 != 0 && v22 <= 3 )
        __asan_report_load4(&this->max_round);
      if ( v21 > this->max_round )
        break;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v20);
      *(std::set<unsigned int>::iterator *)(v3 + 256) = std::set<unsigned int>::begin(event_set_0);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v20);
      *(std::set<unsigned int>::iterator *)(v3 + 288) = std::set<unsigned int>::end(event_set_0);
      while ( 1 )
      {
        v26 = (char *)(v3 + 288);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 256),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 288)) )
        {
          v33 = 1;
          goto LABEL_69;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v27 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 256));
        v28 = (int *)v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        v29 = *v28;
        v30 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v30 != 0 && v30 <= 3 )
        {
          LOBYTE(v26) = v30 != 0;
          __asan_report_store4(v3 + 48, v26);
        }
        *(_DWORD *)(v3 + 48) = v29;
        if ( !data::ActivityVintageMarketExcelConfigMgrBase::findVintageMarketNpcEventExcelConfig(
                this,
                *(unsigned int *)(v3 + 48)) )
          break;
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 256));
      }
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketEventExcelConfig",
        552);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              v31,
              (const char (*)[65])"[Vintage] findVintageMarketNpcEventExcelConfig failed, event_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v33 = 0;
LABEL_69:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v33 != 1 )
      {
        v25 = 0;
        goto LABEL_73;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 192));
    }
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "checkVintageMarketEventExcelConfig",
      544);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            v23,
            (const char (*)[47])"[Vintage] event config round too large, round:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, round_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    v2 = -1;
    v25 = 0;
LABEL_73:
    if ( v25 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 562: range 0000000012E57B48-0000000012E58055
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketSkillExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::VintageMarketSkillExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketSkillExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketSkillExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v14[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:564 64 8 13 __for_end:564 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->vintage_market_skill_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketSkillExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::VintageMarketSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketSkillExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::VintageMarketSkillExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::VintageMarketSkillExcelConfig>(v11);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketSkillExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      if ( ActivityVintageMarketExcelConfigMgr::checkVintageMarketEffectExcelConfig(
             this,
             txt_config_mgr,
             &config->effect_list) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketSkillExcelConfig",
          574);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
               v6,
               (const char (*)[64])"[Vintage] checkVintageMarketEffectExcelConfig failed, skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketSkillExcelConfig",
        568);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v5,
        (const char (*)[32])"[Vintage] skill_id can not be 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketSkillExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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
  return result;
};

// Line 583: range 0000000012E58056-0000000012E5857D
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketEnvEventExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_duration; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::VintageMarketEnvEventExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v16[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:585 64 8 13 __for_end:585 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketEnvEventExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->vintage_market_env_event_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketEnvEventExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::VintageMarketEnvEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketEnvEventExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::VintageMarketEnvEventExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::VintageMarketEnvEventExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketEnvEventExcelConfig>(v13);
    p_duration = &config->duration;
    if ( *(_BYTE *)(((unsigned __int64)p_duration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_duration >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_duration);
    }
    if ( config->duration )
    {
      if ( ActivityVintageMarketExcelConfigMgr::checkVintageMarketEffectExcelConfig(
             this,
             txt_config_mgr,
             &config->effect_list) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketEnvEventExcelConfig",
          595);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
               v8,
               (const char (*)[62])"[Vintage] checkVintageMarketEffectExcelConfig failed, env_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketEnvEventExcelConfig",
        589);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             v6,
             (const char (*)[46])"[Vintage] env event duration 0 error, env_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketEnvEventExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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
  return result;
};

// Line 604: range 0000000012E5857E-0000000012E58B49
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketNpcEventExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const unsigned int *p_reward_id; // rdx
  std::pair<unsigned int,unsigned int> *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // edx
  int v15; // eax
  int32_t result; // eax
  data::VintageMarketNpcEventExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::reference v18; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig> >::type *id; // [rsp+30h] [rbp-150h]
  std::vector<data::VintageMarketNpcEventBranchExcelConfig> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::VintageMarketNpcEventBranchExcelConfig *npc_branch_config; // [rsp+48h] [rbp-138h]
  char v22[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:605 64 8 13 __for_end:605 96 8 15 __for_begin:607 128 8 13 __for_end:607 1"
                        "60 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketNpcEventExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->vintage_market_npc_event_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false> *)(v3 + 64)) )
      break;
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::VintageMarketNpcEventExcelConfig>(v18);
    __for_range_0 = &std::get<1ul,unsigned int const,data::VintageMarketNpcEventExcelConfig>(v18)->branch_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::VintageMarketNpcEventBranchExcelConfig>::const_iterator *)(v3 + 96) = std::vector<data::VintageMarketNpcEventBranchExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::VintageMarketNpcEventBranchExcelConfig>::const_iterator *)(v3 + 128) = std::vector<data::VintageMarketNpcEventBranchExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *)(v3 + 128)) )
        goto LABEL_26;
      npc_branch_config = __gnu_cxx::__normal_iterator<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&npc_branch_config->talk_id);
      }
      if ( !npc_branch_config->talk_id )
      {
LABEL_26:
        v14 = 1;
        goto LABEL_27;
      }
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      p_reward_id = &npc_branch_config->reward_id;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v3 + 128);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                              id,
                                                              p_reward_id);
      v9 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
             &this->talk_id_to_event_map,
             &npc_branch_config->talk_id,
             (std::pair<unsigned int,unsigned int> *)(v3 + 160),
             &npc_branch_config->talk_id,
             v8);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v9.second )
        break;
      __gnu_cxx::__normal_iterator<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *const)(v3 + 96));
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
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "rewriteVintageMarketNpcEventExcelConfig",
      616);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v10,
            (const char (*)[40])"[Vintage] duplicate npc branch talk_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &npc_branch_config->talk_id);
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v14 = 0;
LABEL_27:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v14 != 1 )
    {
      v15 = 0;
      goto LABEL_31;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false> *const)(v3 + 32));
  }
  v15 = 1;
LABEL_31:
  if ( v15 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 625: range 0000000012E58B4A-0000000012E59B3F
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketNpcEventExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_duration; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  unsigned __int64 v9; // rax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned __int64 v31; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2DCh]
  data::VintageMarketNpcEventExcelConfigMap *__for_range; // [rsp+18h] [rbp-2D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::reference v36; // [rsp+20h] [rbp-2D0h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig> >::type *id; // [rsp+28h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig> >::type *config; // [rsp+30h] [rbp-2C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2B8h]
  const std::vector<data::VintageMarketNpcEventBranchExcelConfig> *__for_range_1; // [rsp+40h] [rbp-2B0h]
  const data::VintageMarketNpcEventBranchExcelConfig *npc_branch_config; // [rsp+48h] [rbp-2A8h]
  char v42[672]; // [rsp+50h] [rbp-2A0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 4 12 skill_id:636 48 8 15 __for_begin:627 80 8 13 __for_end:627 112 8 15 __for_begin:636 1"
                        "44 8 13 __for_end:636 176 8 15 __for_begin:651 208 8 13 __for_end:651 240 32 9 <unknown> 304 32 "
                        "9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 48 13 skill_set:635";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketNpcEventExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
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
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->vintage_market_npc_event_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::VintageMarketNpcEventExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false> *)(v2 + 80)) )
  {
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::VintageMarketNpcEventExcelConfig>(v36);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketNpcEventExcelConfig>(v36);
    p_duration = &config->duration;
    v6 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_duration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_duration >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_duration);
    }
    if ( config->duration )
    {
      v9 = ((v2 + 560) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 560));
      __for_range_0 = &config->reward_skill_list;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 112, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 112) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v10 = (char *)(v2 + 144);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 112),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144)) )
          break;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
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
        if ( data::ActivityVintageMarketExcelConfigMgrBase::findVintageMarketSkillExcelConfig(
               this,
               *(unsigned int *)(v2 + 32)) )
        {
          v19 = std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(v2 + 560),
                  (const std::set<unsigned int>::value_type *)(v2 + 32));
          if ( !v19.second )
          {
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketNpcEventExcelConfig",
              646);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v20,
                    (const char (*)[44])"[Vintage] duplicate unlock skill, skill_id:");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v2 + 32));
            v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v22,
                    (const char (*)[12])", event_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketNpcEventExcelConfig",
            640);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  v15,
                  (const char (*)[62])"[Vintage] findVintageMarketSkillExcelConfig failed, skill_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", event_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
      }
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &config->branch_list;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v10);
      *(std::vector<data::VintageMarketNpcEventBranchExcelConfig>::const_iterator *)(v2 + 176) = std::vector<data::VintageMarketNpcEventBranchExcelConfig>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v10);
      *(std::vector<data::VintageMarketNpcEventBranchExcelConfig>::const_iterator *)(v2 + 208) = std::vector<data::VintageMarketNpcEventBranchExcelConfig>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *)(v2 + 176),
                (const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *)(v2 + 208)) )
      {
        npc_branch_config = __gnu_cxx::__normal_iterator<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *const)(v2 + 176));
        if ( *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&npc_branch_config->talk_id);
        }
        if ( !npc_branch_config->talk_id )
          break;
        p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&npc_branch_config->talk_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&npc_branch_config->talk_id);
        }
        if ( data::QuestExcelConfigMgrBase::findTalkExcelConfig(p_quest_config_mgr, npc_branch_config->talk_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&npc_branch_config->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)npc_branch_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_branch_config->reward_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&npc_branch_config->reward_id);
          }
          if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                  txt_config_mgr,
                                  npc_branch_config->reward_id,
                                  ITEM_LIMIT_ACTIVITY_VINTAGE) != 1 )
          {
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 496, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 496),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketNpcEventExcelConfig",
              667);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                    v29,
                    (const char (*)[59])"[Vintage] reward item limit type config error, reward_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &npc_branch_config->reward_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
            *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketNpcEventExcelConfig",
            660);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  v25,
                  (const char (*)[47])"[Vintage] findTalkExcelConfig failed, talk_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &npc_branch_config->talk_id);
          v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])", event_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
          *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<data::VintageMarketNpcEventBranchExcelConfig const*,std::vector<data::VintageMarketNpcEventBranchExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::VintageMarketNpcEventBranchExcelConfig*,std::vector<data::VintageMarketNpcEventBranchExcelConfig> > *const)(v2 + 176));
      }
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 560));
    }
    else
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketNpcEventExcelConfig",
        631);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             v7,
             (const char (*)[46])"[Vintage] npc event duration 0 error, env_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v31 = ((v2 + 560) >> 3) + 2147450880;
    *(_DWORD *)v31 = -117901064;
    *(_WORD *)(v31 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketNpcEventExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 677: range 0000000012E59B40-0000000012E59CCF
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketHelpSkillExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::VintageMarketHelpSkillExcelConfigMap *p_vintage_market_help_skill_excel_config_map; // rsi
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
  *(_QWORD *)(v2 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::rewriteVintageMarketHelpSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  p_vintage_market_help_skill_excel_config_map = &this->vintage_market_help_skill_excel_config_map;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 55) >> 3) + 0x7FFF8000) )
  {
    p_vintage_market_help_skill_excel_config_map = (data::VintageMarketHelpSkillExcelConfigMap *)24;
    __asan_report_store_n(v2 + 32, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>>(
    (std::vector<unsigned int> *)(v2 + 32),
    p_vintage_market_help_skill_excel_config_map);
  std::vector<unsigned int>::operator=(&this->help_skill_vec, (std::vector<unsigned int> *)(v2 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  result = 0;
  if ( v7 == (char *)v2 )
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

// Line 683: range 0000000012E59CD0-0000000012E5A62C
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketHelpSkillExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 i; // r14
  void (__fastcall **v13)(char *); // rax
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::initializer_list<data::VintageMarketEffectExcelConfig> __l; // [rsp+10h] [rbp-240h]
  int32_t ret; // [rsp+3Ch] [rbp-214h]
  data::VintageMarketHelpSkillExcelConfigMap *__for_range; // [rsp+40h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::reference v20; // [rsp+48h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig> >::type *id; // [rsp+50h] [rbp-200h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig> >::type *config; // [rsp+58h] [rbp-1F8h]
  char v23[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 9 <unknown> 48 8 15 __for_begin:690 80 8 13 __for_end:690 112 24 9 <unknown> 176 32 9 <un"
                        "known> 240 32 9 <unknown> 304 32 9 <unknown> 368 48 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketHelpSkillExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  if ( std::vector<unsigned int>::empty(&this->help_skill_vec) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
      "checkVintageMarketHelpSkillExcelConfig",
      686);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 176),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"[Vintage] have no help skill");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->vintage_market_help_skill_excel_config_map;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 48, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 80, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false> *)(v2 + 48),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false> *)(v2 + 80)) )
    {
      v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false> *const)(v2 + 48));
      id = std::get<0ul,unsigned int const,data::VintageMarketHelpSkillExcelConfig>(v20);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketHelpSkillExcelConfig>(v20);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      if ( *id )
      {
        v8 = ((v2 + 112) >> 3) + 2147450880;
        *(_WORD *)v8 = 0;
        *(_BYTE *)(v8 + 2) = 0;
        v9 = ((v2 + 368) >> 3) + 2147450880;
        *(_DWORD *)v9 = 0;
        *(_WORD *)(v9 + 4) = 0;
        data::VintageMarketEffectExcelConfig::VintageMarketEffectExcelConfig(
          (data::VintageMarketEffectExcelConfig *const)(v2 + 368),
          &config->effect);
        __l._M_array = (std::initializer_list<data::VintageMarketEffectExcelConfig>::iterator)(v2 + 368);
        __l._M_len = 1LL;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<data::VintageMarketEffectExcelConfig>::allocator((std::allocator<data::VintageMarketEffectExcelConfig> *const)(v2 + 32));
        std::vector<data::VintageMarketEffectExcelConfig>::vector(
          (std::vector<data::VintageMarketEffectExcelConfig> *const)(v2 + 112),
          __l,
          (const std::vector<data::VintageMarketEffectExcelConfig>::allocator_type *)(v2 + 32));
        v10 = ActivityVintageMarketExcelConfigMgr::checkVintageMarketEffectExcelConfig(
                this,
                txt_config_mgr,
                (const std::vector<data::VintageMarketEffectExcelConfig> *)(v2 + 112)) != 0;
        std::vector<data::VintageMarketEffectExcelConfig>::~vector((std::vector<data::VintageMarketEffectExcelConfig> *const)(v2 + 112));
        v11 = ((v2 + 112) >> 3) + 2147450880;
        *(_WORD *)v11 = -1800;
        *(_BYTE *)(v11 + 2) = -8;
        std::allocator<data::VintageMarketEffectExcelConfig>::~allocator((std::allocator<data::VintageMarketEffectExcelConfig> *const)(v2 + 32));
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        for ( i = v2 + 416; i != v2 + 368; (*v13)((char *)i) )
        {
          i -= 48LL;
          if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
            __asan_report_load8(i);
          v13 = *(void (__fastcall ***)(char *))i;
          if ( *(_BYTE *)((*(_QWORD *)i >> 3) + 0x7FFF8000LL) )
            __asan_report_load8(*(_QWORD *)i);
        }
        v14 = ((v2 + 368) >> 3) + 2147450880;
        *(_DWORD *)v14 = -117901064;
        *(_WORD *)(v14 + 4) = -1800;
        if ( v10 )
        {
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketHelpSkillExcelConfig",
            700);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  v15,
                  (const char (*)[64])"[Vintage] checkVintageMarketEffectExcelConfig failed, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
          "checkVintageMarketHelpSkillExcelConfig",
          694);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 240),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          v7,
          (const char (*)[37])"[Vintage] help_skill_id can not be 0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false> *const)(v2 + 48));
    }
    result = ret;
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 709: range 0000000012E5A62E-0000000012E5AD17
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketConstValueExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::VintageMarketConstValueExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false,false>::reference v16; // [rsp+20h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig> >::type *id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig> >::type *config; // [rsp+30h] [rbp-160h]
  const data::NewActivityExcelConfig *config_ptr; // [rsp+38h] [rbp-158h]
  char v20[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:710 64 8 13 __for_end:710 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketConstValueExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->vintage_market_const_value_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketConstValueExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::VintageMarketConstValueExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::VintageMarketConstValueExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::VintageMarketConstValueExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_33;
    }
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::VintageMarketConstValueExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig> >::type *)std::get<1ul,unsigned int const,data::VintageMarketConstValueExcelConfig>(v16);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *id);
    if ( !config_ptr )
      goto LABEL_40;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->activity_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->activity_type);
    }
    if ( config_ptr->activity_type != NEW_ACTIVITY_VINTAGE )
    {
LABEL_40:
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketConstValueExcelConfig",
        715);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             v7,
             (const char (*)[52])"[Vintage] const value activity_id config error, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->help_reward_count_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->help_reward_count_limit >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->help_reward_count_limit);
    }
    if ( config->help_reward_count_limit > 0x32 )
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
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketConstValueExcelConfig",
        720);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              v10,
              (const char (*)[70])"[Vintage] help_reward_count_limit too large, help_reward_count_limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->help_reward_count_limit);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->help_display_count_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->help_display_count_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->help_display_count_limit);
    }
    if ( config->help_display_count_limit > 0x32 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::VintageMarketConstValueExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
    "checkVintageMarketConstValueExcelConfig",
    725);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
          v12,
          (const char (*)[72])"[Vintage] help_display_count_limit too large, help_display_count_limit:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->help_display_count_limit);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v9 = 0;
LABEL_33:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
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

// Line 733: range 0000000012E5AD18-0000000012E5E6F1
int32_t __cdecl ActivityVintageMarketExcelConfigMgr::checkVintageMarketEffectExcelConfig(
        ActivityVintageMarketExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<data::VintageMarketEffectExcelConfig> *effect_config_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r15
  __int64 v12; // rax
  int v13; // r15d
  common::milog::MiLogStream *v14; // rax
  const char *v15; // rsi
  common::milog::MiLogStream *v16; // rcx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r15
  __int64 v22; // rax
  std::vector<unsigned int>::reference v23; // rax
  _DWORD *v24; // rdx
  std::vector<unsigned int>::reference v25; // rax
  _DWORD *v26; // rdx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r15
  __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  const char *v34; // rsi
  common::milog::MiLogStream *v35; // rcx
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r15
  __int64 v41; // rax
  const unsigned int *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r15
  __int64 v47; // rax
  std::vector<unsigned int>::reference v48; // rax
  _DWORD *v49; // rdx
  std::vector<unsigned int>::reference v50; // rax
  _DWORD *v51; // rdx
  char v52; // al
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r15
  __int64 v57; // rax
  common::milog::MiLogStream *v58; // rax
  const char *v59; // rsi
  common::milog::MiLogStream *v60; // rcx
  char v61; // al
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // r15
  __int64 v66; // rax
  std::vector<unsigned int>::reference v67; // rax
  unsigned int *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // r15
  __int64 v73; // rax
  common::milog::MiLogStream *v74; // rax
  const char *v75; // rsi
  common::milog::MiLogStream *v76; // rcx
  char v77; // al
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // r15
  __int64 v82; // rax
  std::vector<unsigned int>::reference v83; // rax
  unsigned int *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r15
  __int64 v89; // rax
  std::vector<unsigned int>::reference v90; // rax
  _DWORD *v91; // rdx
  std::vector<unsigned int>::reference v92; // rax
  _DWORD *v93; // rdx
  char v94; // al
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // r15
  __int64 v99; // rax
  common::milog::MiLogStream *v100; // rax
  const char *v101; // rsi
  common::milog::MiLogStream *v102; // rcx
  char v103; // al
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // r15
  __int64 v108; // rax
  common::milog::MiLogStream *v109; // rax
  const char *v110; // rsi
  common::milog::MiLogStream *v111; // rcx
  char v112; // al
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // r15
  __int64 v117; // rax
  common::milog::MiLogStream *v118; // rax
  const char *v119; // rsi
  common::milog::MiLogStream *v120; // rcx
  char v121; // al
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // r15
  __int64 v126; // rax
  std::vector<unsigned int>::reference v127; // rax
  _DWORD *v128; // rdx
  std::vector<unsigned int>::reference v129; // rax
  _DWORD *v130; // rdx
  char v131; // al
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // r15
  __int64 v136; // rax
  std::vector<unsigned int>::reference v137; // rax
  _DWORD *v138; // rdx
  std::vector<unsigned int>::reference v139; // rax
  _DWORD *v140; // rdx
  char v141; // al
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // r15
  __int64 v146; // rax
  common::milog::MiLogStream *v147; // rax
  const char *v148; // rsi
  common::milog::MiLogStream *v149; // rcx
  char v150; // al
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // r15
  __int64 v155; // rax
  std::vector<unsigned int>::reference v156; // rax
  _DWORD *v157; // rdx
  std::vector<unsigned int>::reference v158; // rax
  _DWORD *v159; // rdx
  char v160; // al
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // r15
  __int64 v165; // rax
  unsigned __int64 v166; // rax
  int32_t ret; // [rsp+2Ch] [rbp-8C4h]
  const data::VintageMarketEffectExcelConfig *effect_config; // [rsp+38h] [rbp-8B8h]
  char v171[2224]; // [rsp+40h] [rbp-8B0h] BYREF

  v3 = (unsigned __int64)v171;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "50 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 15 __for_begin:735 224 8 "
                        "13 __for_end:735 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 9 <unknown> 384 8 9"
                        " <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 512 8 9 <unknown> 544 8 9 <unkn"
                        "own> 576 8 9 <unknown> 608 8 9 <unknown> 640 8 9 <unknown> 672 8 9 <unknown> 704 8 9 <unknown> 7"
                        "36 8 9 <unknown> 768 8 9 <unknown> 800 8 9 <unknown> 832 24 11 num_vec:737 896 32 9 <unknown> 96"
                        "0 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown>"
                        " 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unkn"
                        "own> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <"
                        "unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityVintageMarketExcelConfigMgr::checkVintageMarketEffectExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -218959360;
  v5[536862743] = -218959360;
  v5[536862744] = -218959360;
  v5[536862745] = -218959360;
  v5[536862746] = -234881024;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -218959118;
  v5[536862779] = -218959118;
  v5[536862781] = -218959118;
  v5[536862783] = -218959118;
  v5[536862785] = -218959118;
  v5[536862787] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::vector<data::VintageMarketEffectExcelConfig>::const_iterator *)(v3 + 192) = std::vector<data::VintageMarketEffectExcelConfig>::begin(effect_config_vec);
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::vector<data::VintageMarketEffectExcelConfig>::const_iterator *)(v3 + 224) = std::vector<data::VintageMarketEffectExcelConfig>::end(effect_config_vec);
  while ( __gnu_cxx::operator!=<data::VintageMarketEffectExcelConfig const*,std::vector<data::VintageMarketEffectExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::VintageMarketEffectExcelConfig*,std::vector<data::VintageMarketEffectExcelConfig> > *)(v3 + 192),
            (const __gnu_cxx::__normal_iterator<const data::VintageMarketEffectExcelConfig*,std::vector<data::VintageMarketEffectExcelConfig> > *)(v3 + 224)) )
  {
    effect_config = __gnu_cxx::__normal_iterator<data::VintageMarketEffectExcelConfig const*,std::vector<data::VintageMarketEffectExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::VintageMarketEffectExcelConfig*,std::vector<data::VintageMarketEffectExcelConfig> > *const)(v3 + 192));
    v6 = ((v3 + 832) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 832));
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 896),
      ";",
      (const std::allocator<char> *)(v3 + 48));
    v7 = common::tools::StringUtils::splitToList<unsigned int>(
           &effect_config->param,
           (const std::string *)(v3 + 896),
           (std::vector<unsigned int> *)(v3 + 832),
           0) != 0;
    std::string::~string((void *)(v3 + 896));
    *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
    {
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
        "checkVintageMarketEffectExcelConfig",
        740);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 960),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v8,
             (const char (*)[31])"[Vintage] splitToList falied: ");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &effect_config->param);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", effect_type:");
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->type);
      }
      v12 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_store8(v3 + 256, ", effect_type:");
      *(_QWORD *)(v3 + 256) = v12;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v3 + 256));
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      v13 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->type);
      }
      switch ( effect_config->type )
      {
        case VINTAGE_MARKET_EFFECT_NONE:
          break;
        case VINTAGE_MARKET_EFFECT_ATTR_ADD_FIXED:
        case VINTAGE_MARKET_EFFECT_ATTR_SUB_FIXED:
        case VINTAGE_MARKET_EFFECT_ATTR_ADD_PERCENT:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 1 )
          {
            v23 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            if ( !*v24 )
              goto LABEL_37;
            v25 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v26 = v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            if ( *v26 <= 3u )
              v27 = 0;
            else
LABEL_37:
              v27 = 1;
            if ( v27 )
            {
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1088, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1088),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                760);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v28,
                      (const char (*)[44])"[Vintage] effect param config error, param:");
              v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &effect_config->param);
              v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v30,
                      (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v32 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                v32 = __asan_report_store8(v3 + 320, ", effect_type:");
              *(_QWORD *)(v3 + 320) = v32;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v31, (const char *const *)(v3 + 320));
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              754);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = "[Vintage] effect param size error, expect_size:";
            v16 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v14,
                    (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v17 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v17 != 0 && v17 <= 3 )
            {
              LOBYTE(v15) = v17 != 0;
              __asan_report_store4(v3 + 64, v15);
            }
            *(_DWORD *)(v3 + 64) = 2;
            v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v3 + 64));
            v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])", param:");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &effect_config->param);
            v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v20,
                    (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v22 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              v22 = __asan_report_store8(v3 + 288, ", effect_type:");
            *(_QWORD *)(v3 + 288) = v22;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v21, (const char *const *)(v3 + 288));
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_AIM_ATTR_ADD_FIXED:
        case VINTAGE_MARKET_EFFECT_AIM_ATTR_SUB_FIXED:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 2 )
          {
            v42 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                    &ActivityVintageMarketExcelConfigMgr::STORE_ID_SET,
                    v42) )
            {
              *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1216),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                777);
              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1216),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v44 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v43,
                      (const char (*)[44])"[Vintage] effect param config error, param:");
              v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, &effect_config->param);
              v46 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v45,
                      (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v47 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
                v47 = __asan_report_store8(v3 + 384, ", effect_type:");
              *(_QWORD *)(v3 + 384) = v47;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v46, (const char *const *)(v3 + 384));
              *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
              *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v48 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 1uLL);
              v49 = v48;
              if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v48);
              }
              if ( !*v49 )
                goto LABEL_71;
              v50 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 1uLL);
              v51 = v50;
              if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v50);
              }
              if ( *v51 <= 3u )
                v52 = 0;
              else
LABEL_71:
                v52 = 1;
              if ( v52 )
              {
                *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1280, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1280),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketEffectExcelConfig",
                  783);
                v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v54 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v53,
                        (const char (*)[44])"[Vintage] effect param config error, param:");
                v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v54, &effect_config->param);
                v56 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v55,
                        (const char (*)[15])", effect_type:");
                *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&effect_config->type);
                }
                v57 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
                if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                  v57 = __asan_report_store8(v3 + 416, ", effect_type:");
                *(_QWORD *)(v3 + 416) = v57;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v56,
                  (const char *const *)(v3 + 416));
                *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
                *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              771);
            v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1152),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v34 = "[Vintage] effect param size error, expect_size:";
            v35 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v33,
                    (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            v36 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
            if ( v36 != 0 && v36 <= 3 )
            {
              LOBYTE(v34) = v36 != 0;
              __asan_report_store4(v3 + 80, v34);
            }
            *(_DWORD *)(v3 + 80) = 3;
            v37 = common::milog::MiLogStream::operator<<<int,(int *)0>(v35, (const int *)(v3 + 80));
            v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])", param:");
            v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, &effect_config->param);
            v40 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v39,
                    (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v41 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
              v41 = __asan_report_store8(v3 + 352, ", effect_type:");
            *(_QWORD *)(v3 + 352) = v41;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v40, (const char *const *)(v3 + 352));
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
            *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_FIXED_INCOME_WITH_ENV:
        case VINTAGE_MARKET_EFFECT_PERCENT_INCOME_WITH_ENV:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 1 )
          {
            v67 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v68 = v67;
            if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v67);
            }
            if ( !data::ActivityVintageMarketExcelConfigMgrBase::findVintageMarketEnvEventExcelConfig(this, *v68) )
            {
              *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1408, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1408),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                800);
              v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1408),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v70 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      v69,
                      (const char (*)[54])"[Vintage] effect param config env_event error, param:");
              v71 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v70, &effect_config->param);
              v72 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v71,
                      (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v73 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
                v73 = __asan_report_store8(v3 + 480, ", effect_type:");
              *(_QWORD *)(v3 + 480) = v73;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v72, (const char *const *)(v3 + 480));
              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
              *(_DWORD *)(((v3 + 1408) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1344, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1344),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              794);
            v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1344),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v59 = "[Vintage] effect param size error, expect_size:";
            v60 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v58,
                    (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
            v61 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
            if ( v61 != 0 && v61 <= 3 )
            {
              LOBYTE(v59) = v61 != 0;
              __asan_report_store4(v3 + 96, v59);
            }
            *(_DWORD *)(v3 + 96) = 2;
            v62 = common::milog::MiLogStream::operator<<<int,(int *)0>(v60, (const int *)(v3 + 96));
            v63 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v62, (const char (*)[9])", param:");
            v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, &effect_config->param);
            v65 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v64,
                    (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v66 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
              v66 = __asan_report_store8(v3 + 448, ", effect_type:");
            *(_QWORD *)(v3 + 448) = v66;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v65, (const char *const *)(v3 + 448));
            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
            *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_ADD_FIXED_ATTR_WITH_ENV:
        case VINTAGE_MARKET_EFFECT_ADD_PERCENT_ATTR_WITH_ENV:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 2 )
          {
            v83 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v84 = v83;
            if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v83 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v83);
            }
            if ( data::ActivityVintageMarketExcelConfigMgrBase::findVintageMarketEnvEventExcelConfig(this, *v84) )
            {
              v90 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 1uLL);
              v91 = v90;
              if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v90 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v90);
              }
              if ( !*v91 )
                goto LABEL_127;
              v92 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 1uLL);
              v93 = v92;
              if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v92);
              }
              if ( *v93 <= 3u )
                v94 = 0;
              else
LABEL_127:
                v94 = 1;
              if ( v94 )
              {
                *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1600, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1600),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketEffectExcelConfig",
                  823);
                v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1600),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v96 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v95,
                        (const char (*)[44])"[Vintage] effect param config error, param:");
                v97 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v96, &effect_config->param);
                v98 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v97,
                        (const char (*)[15])", effect_type:");
                *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&effect_config->type);
                }
                v99 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
                if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
                  v99 = __asan_report_store8(v3 + 576, ", effect_type:");
                *(_QWORD *)(v3 + 576) = v99;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v98,
                  (const char *const *)(v3 + 576));
                *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
                *(_DWORD *)(((v3 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1536, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1536),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                817);
              v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1536),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v86 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      v85,
                      (const char (*)[54])"[Vintage] effect param config env_event error, param:");
              v87 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, &effect_config->param);
              v88 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v87,
                      (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v89 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
                v89 = __asan_report_store8(v3 + 544, ", effect_type:");
              *(_QWORD *)(v3 + 544) = v89;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v88, (const char *const *)(v3 + 544));
              *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
              *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1472, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1472),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              811);
            v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1472),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v75 = "[Vintage] effect param size error, expect_size:";
            v76 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v74,
                    (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
            v77 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
            if ( v77 != 0 && v77 <= 3 )
            {
              LOBYTE(v75) = v77 != 0;
              __asan_report_store4(v3 + 112, v75);
            }
            *(_DWORD *)(v3 + 112) = 3;
            v78 = common::milog::MiLogStream::operator<<<int,(int *)0>(v76, (const int *)(v3 + 112));
            v79 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v78, (const char (*)[9])", param:");
            v80 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v79, &effect_config->param);
            v81 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v80,
                    (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v82 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
              v82 = __asan_report_store8(v3 + 512, ", effect_type:");
            *(_QWORD *)(v3 + 512) = v82;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v81, (const char *const *)(v3 + 512));
            *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
            *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_REWARD_FACTOR:
          if ( !std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) )
          {
            *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1664, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1664),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              833);
            v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1664),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v101 = "[Vintage] effect param size error, expect_size:";
            v102 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                     v100,
                     (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
            v103 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
            if ( v103 != 0 && v103 <= 3 )
            {
              LOBYTE(v101) = v103 != 0;
              __asan_report_store4(v3 + 128, v101);
            }
            *(_DWORD *)(v3 + 128) = 1;
            v104 = common::milog::MiLogStream::operator<<<int,(int *)0>(v102, (const int *)(v3 + 128));
            v105 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v104, (const char (*)[9])", param:");
            v106 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, &effect_config->param);
            v107 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                     v106,
                     (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v108 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
              v108 = __asan_report_store8(v3 + 608, ", effect_type:");
            *(_QWORD *)(v3 + 608) = v108;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v107, (const char *const *)(v3 + 608));
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
            *(_DWORD *)(((v3 + 1664) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_FIXED_INCOME_BY_TOTAL_INCOME:
        case VINTAGE_MARKET_EFFECT_PERCENT_INCOME_BY_TOTAL_INCOME:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) <= 2 )
          {
            *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1728, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1728),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              844);
            v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1728),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v110 = "[Vintage] effect param size error, expect_size:";
            v111 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                     v109,
                     (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
            v112 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
            if ( v112 != 0 && v112 <= 3 )
            {
              LOBYTE(v110) = v112 != 0;
              __asan_report_store4(v3 + 144, v110);
            }
            *(_DWORD *)(v3 + 144) = 3;
            v113 = common::milog::MiLogStream::operator<<<int,(int *)0>(v111, (const int *)(v3 + 144));
            v114 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v113, (const char (*)[9])", param:");
            v115 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v114, &effect_config->param);
            v116 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                     v115,
                     (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v117 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
              v117 = __asan_report_store8(v3 + 640, ", effect_type:");
            *(_QWORD *)(v3 + 640) = v117;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v116, (const char *const *)(v3 + 640));
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
            *(_DWORD *)(((v3 + 1728) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_PROB_RETURN_COST_WHEN_ATTR_GE_AIM:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 2 )
          {
            v127 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v128 = v127;
            if ( *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v127 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v127 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v127);
            }
            if ( !*v128 )
              goto LABEL_173;
            v129 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v130 = v129;
            if ( *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v129 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v129);
            }
            if ( *v130 <= 3u )
              v131 = 0;
            else
LABEL_173:
              v131 = 1;
            if ( v131 )
            {
              *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1856) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1856, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1856),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                860);
              v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 1856),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v133 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                       v132,
                       (const char (*)[44])"[Vintage] effect param config error, param:");
              v134 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v133, &effect_config->param);
              v135 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                       v134,
                       (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v136 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) )
                v136 = __asan_report_store8(v3 + 704, ", effect_type:");
              *(_QWORD *)(v3 + 704) = v136;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v135, (const char *const *)(v3 + 704));
              *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1856));
              *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v137 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 1uLL);
              v138 = v137;
              if ( *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v137 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v137 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v137);
              }
              if ( *v138 > 0x64u )
                goto LABEL_189;
              v139 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 2uLL);
              v140 = v139;
              if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v139 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v139);
              }
              if ( *v140 <= 0x64u )
                v141 = 0;
              else
LABEL_189:
                v141 = 1;
              if ( v141 )
              {
                *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1920) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1920, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1920),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                  "checkVintageMarketEffectExcelConfig",
                  866);
                v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 1920),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v143 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                         v142,
                         (const char (*)[44])"[Vintage] effect param config error, param:");
                v144 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v143, &effect_config->param);
                v145 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                         v144,
                         (const char (*)[15])", effect_type:");
                *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&effect_config->type);
                }
                v146 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
                if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) )
                  v146 = __asan_report_store8(v3 + 736, ", effect_type:");
                *(_QWORD *)(v3 + 736) = v146;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v145,
                  (const char *const *)(v3 + 736));
                *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1920));
                *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1792, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1792),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              854);
            v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1792),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v119 = "[Vintage] effect param size error, expect_size:";
            v120 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                     v118,
                     (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
            v121 = *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000);
            if ( v121 != 0 && v121 <= 3 )
            {
              LOBYTE(v119) = v121 != 0;
              __asan_report_store4(v3 + 160, v119);
            }
            *(_DWORD *)(v3 + 160) = 3;
            v122 = common::milog::MiLogStream::operator<<<int,(int *)0>(v120, (const int *)(v3 + 160));
            v123 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v122, (const char (*)[9])", param:");
            v124 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v123, &effect_config->param);
            v125 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                     v124,
                     (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v126 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
              v126 = __asan_report_store8(v3 + 672, ", effect_type:");
            *(_QWORD *)(v3 + 672) = v126;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v125, (const char *const *)(v3 + 672));
            *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
            *(_DWORD *)(((v3 + 1792) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        case VINTAGE_MARKET_EFFECT_PERCENT_INCOME_WHEN_ATTR_GE_AIM:
          if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 832)) > 1 )
          {
            v156 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v157 = v156;
            if ( *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v156 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v156 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v156);
            }
            if ( !*v157 )
              goto LABEL_215;
            v158 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 832), 0LL);
            v159 = v158;
            if ( *(_BYTE *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v158 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v158 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v158);
            }
            if ( *v159 <= 3u )
              v160 = 0;
            else
LABEL_215:
              v160 = 1;
            if ( v160 )
            {
              *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2048) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2048, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2048),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
                "checkVintageMarketEffectExcelConfig",
                882);
              v161 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 2048),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v162 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                       v161,
                       (const char (*)[44])"[Vintage] effect param config error, param:");
              v163 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v162, &effect_config->param);
              v164 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                       v163,
                       (const char (*)[15])", effect_type:");
              *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->type);
              }
              v165 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
              if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) )
                v165 = __asan_report_store8(v3 + 800, ", effect_type:");
              *(_QWORD *)(v3 + 800) = v165;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v164, (const char *const *)(v3 + 800));
              *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2048));
              *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1984) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1984, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1984),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
              "checkVintageMarketEffectExcelConfig",
              876);
            v147 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1984),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v148 = "[Vintage] effect param size error, expect_size:";
            v149 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                     v147,
                     (const char (*)[48])"[Vintage] effect param size error, expect_size:");
            *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
            v150 = *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000);
            if ( v150 != 0 && v150 <= 3 )
            {
              LOBYTE(v148) = v150 != 0;
              __asan_report_store4(v3 + 176, v148);
            }
            *(_DWORD *)(v3 + 176) = 2;
            v151 = common::milog::MiLogStream::operator<<<int,(int *)0>(v149, (const int *)(v3 + 176));
            v152 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v151, (const char (*)[9])", param:");
            v153 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v152, &effect_config->param);
            v154 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                     v153,
                     (const char (*)[15])", effect_type:");
            *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->type);
            }
            v155 = (__int64)data::enumValToStr(effect_config->type, (__int64)", effect_type:");
            if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) )
              v155 = __asan_report_store8(v3 + 768, ", effect_type:");
            *(_QWORD *)(v3 + 768) = v155;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v154, (const char *const *)(v3 + 768));
            *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1984));
            *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          break;
        default:
          *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2112) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2112, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2112),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/ActivityVintageMarketExcelConfig.cpp",
            "checkVintageMarketEffectExcelConfig",
            889);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v3 + 2112),
            (const char (*)[36])"[Vintage] Effect type not supported");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2112));
          *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = -117901064;
          break;
      }
      v13 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 832));
    v166 = ((v3 + 832) >> 3) + 2147450880;
    *(_WORD *)v166 = -1800;
    *(_BYTE *)(v166 + 2) = -8;
    if ( v13 != 1 )
      break;
    __gnu_cxx::__normal_iterator<data::VintageMarketEffectExcelConfig const*,std::vector<data::VintageMarketEffectExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::VintageMarketEffectExcelConfig*,std::vector<data::VintageMarketEffectExcelConfig> > *const)(v3 + 192));
  }
  if ( v171 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8108) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2176LL, v171);
  }
  return ret;
};

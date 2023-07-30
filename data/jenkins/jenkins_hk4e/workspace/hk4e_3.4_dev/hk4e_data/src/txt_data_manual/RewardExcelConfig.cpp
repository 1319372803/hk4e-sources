// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RewardExcelConfig.cpp

// Line 23: range 000000000CACDE94-000000000CACFE90
int32_t __cdecl RewardExcelConfigMgr::rewriteConfig(RewardExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 p_daily_output_limit_str; // rsi
  int *p_daily_output_limit; // rdx
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  _BOOL4 v15; // eax
  unsigned __int64 v16; // rax
  __int64 p_total_output_limit_str; // rsi
  int *p_total_output_limit; // rdx
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  __int64 p_activity_output_limit_str; // rsi
  int *p_activity_output_limit; // rdx
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  char *v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  char *v39; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v40; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v41; // rax
  __int64 v42; // rsi
  unsigned __int64 v43; // rax
  __int64 *v44; // rdx
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  const char *v47; // rsi
  uint32_t v48; // ecx
  char v49; // al
  data::RewardItemConfig *M_current; // rcx
  bool v51; // al
  __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >::pointer v52; // rdx
  uint32_t *p_item_count; // rax
  uint32_t item_count; // ecx
  __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >::pointer v55; // rdx
  uint32_t *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  int v62; // edx
  int v63; // edx
  std::vector<data::RewardItemConfig> *p_reward_item_list; // rdx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  int v67; // eax
  data::RewardItemConfig *v69; // [rsp+8h] [rbp-638h]
  std::initializer_list<std::pair<unsigned int const,unsigned int> > __l; // [rsp+10h] [rbp-630h]
  RewardExcelConfigMgr::rewriteConfig::<lambda(const data::RewardItemConfig&)> __pred; // [rsp+20h] [rbp-620h]
  data::RewardItemConfig *__preda; // [rsp+20h] [rbp-620h]
  data::RewardItemConfig *__last; // [rsp+28h] [rbp-618h]
  uint32_t __lasta; // [rsp+28h] [rbp-618h]
  int __lastb; // [rsp+28h] [rbp-618h]
  data::RewardExcelConfigMap *__for_range; // [rsp+48h] [rbp-5F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::reference __in; // [rsp+50h] [rbp-5F0h]
  const unsigned int *reward_id; // [rsp+58h] [rbp-5E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::RewardExcelConfig> >::type *reward_excel_config; // [rsp+60h] [rbp-5E0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+68h] [rbp-5D8h]
  std::vector<data::RewardItemConfig> *__for_range_1; // [rsp+70h] [rbp-5D0h]
  data::RewardItemConfig *reward_item_config; // [rsp+78h] [rbp-5C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+80h] [rbp-5C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+88h] [rbp-5B8h]
  char v85[1456]; // [rsp+90h] [rbp-5B0h] BYREF

  v3 = (unsigned __int64)v85;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1408LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "36 32 1 9 <unknown> 48 1 9 <unknown> 64 4 6 ret:27 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <un"
                        "known> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 10 item_id:75 192 8 14 __for_"
                        "begin:24 224 8 12 __for_end:24 256 8 9 <unknown> 288 8 14 __for_begin:61 320 8 12 __for_end:61 3"
                        "52 8 14 __for_begin:73 384 8 12 __for_end:73 416 8 7 iter:76 448 8 9 <unknown> 480 8 9 <unknown>"
                        " 512 8 9 <unknown> 544 8 9 <unknown> 576 16 9 <unknown> 608 16 9 <unknown> 640 16 9 <unknown> 67"
                        "2 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <unknown> 864 24 26 virtual_reward_item_vec:60 928 "
                        "24 9 config:65 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 12"
                        "48 48 26 virtual_reward_item_map:50 1328 48 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RewardExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
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
  v5[536862738] = -219021312;
  v5[536862739] = -219021312;
  v5[536862740] = -219021312;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862743] = -234881024;
  v5[536862744] = -218959118;
  v5[536862745] = -234881024;
  v5[536862746] = -218959118;
  v5[536862747] = -234881024;
  v5[536862748] = -218959118;
  v5[536862749] = -234881024;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -218959118;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862763] = -202116109;
  __for_range = &this->reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RewardExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::RewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RewardExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::RewardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RewardExcelConfig>,false> *)(v3 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RewardExcelConfig>,false> *)(v3 + 224)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false> *const)(v3 + 192));
    reward_id = std::get<0ul,unsigned int const,data::RewardExcelConfig>(__in);
    reward_excel_config = std::get<1ul,unsigned int const,data::RewardExcelConfig>(__in);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64, v3 + 224);
    *(_DWORD *)(v3 + 64) = 0;
    v6 = ((v3 + 672) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    p_daily_output_limit_str = (__int64)&reward_excel_config->daily_output_limit_str;
    if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 73) & 7) >= *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) )
    {
      p_daily_output_limit_str = 24LL;
      __asan_report_store_n(v3 + 672, 24LL);
    }
    TxtConfigMgr::makeOptionalLimitConfig(
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 672),
      (const std::string *)p_daily_output_limit_str);
    *(_WORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
    p_daily_output_limit = (int *)&reward_excel_config->daily_output_limit;
    if ( *(_WORD *)(((v3 + 576) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    std::tie<int,data::OptionalLimitConfig>(
      (int *)(v3 + 576),
      (data::OptionalLimitConfig *)(v3 + 64),
      p_daily_output_limit,
      (data::OptionalLimitConfig *)(v3 + 64));
    std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
      (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 576),
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 672));
    *(_WORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -1800;
    std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 672));
    v9 = ((v3 + 672) >> 3) + 2147450880;
    *(_WORD *)v9 = -1800;
    *(_BYTE *)(v9 + 2) = -8;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RewardExcelConfig.cpp",
        "rewriteConfig",
        31);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])byte_1A117000);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, reward_id);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])byte_1A117040);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v13,
              &reward_excel_config->daily_output_limit_str);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])byte_1A117080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      v2 = *(_DWORD *)(v3 + 64);
      v15 = 0;
      goto LABEL_128;
    }
    v16 = ((v3 + 736) >> 3) + 2147450880;
    *(_WORD *)v16 = 0;
    *(_BYTE *)(v16 + 2) = 0;
    p_total_output_limit_str = (__int64)&reward_excel_config->total_output_limit_str;
    if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 759) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 759) >> 3) + 0x7FFF8000) )
    {
      p_total_output_limit_str = 24LL;
      __asan_report_store_n(v3 + 736, 24LL);
    }
    TxtConfigMgr::makeOptionalLimitConfig(
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 736),
      (const std::string *)p_total_output_limit_str);
    *(_WORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
    p_total_output_limit = (int *)&reward_excel_config->total_output_limit;
    if ( *(_WORD *)(((v3 + 608) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    std::tie<int,data::OptionalLimitConfig>(
      (int *)(v3 + 608),
      (data::OptionalLimitConfig *)(v3 + 64),
      p_total_output_limit,
      (data::OptionalLimitConfig *)(v3 + 64));
    std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
      (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 608),
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 736));
    *(_WORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -1800;
    std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 736));
    v19 = ((v3 + 736) >> 3) + 2147450880;
    *(_WORD *)v19 = -1800;
    *(_BYTE *)(v19 + 2) = -8;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RewardExcelConfig.cpp",
        "rewriteConfig",
        37);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])byte_1A117000);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, reward_id);
      v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v22, (const char (*)[21])byte_1A1170C0);
      v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v23,
              &reward_excel_config->total_output_limit_str);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])byte_1A117080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      v2 = *(_DWORD *)(v3 + 64);
      v15 = 0;
      goto LABEL_128;
    }
    v25 = ((v3 + 800) >> 3) + 2147450880;
    *(_WORD *)v25 = 0;
    *(_BYTE *)(v25 + 2) = 0;
    p_activity_output_limit_str = (__int64)&reward_excel_config->activity_output_limit_str;
    if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 823) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 823) >> 3) + 0x7FFF8000) )
    {
      p_activity_output_limit_str = 24LL;
      __asan_report_store_n(v3 + 800, 24LL);
    }
    TxtConfigMgr::makeOptionalLimitConfig(
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 800),
      (const std::string *)p_activity_output_limit_str);
    *(_WORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
    p_activity_output_limit = (int *)&reward_excel_config->activity_output_limit;
    if ( *(_WORD *)(((v3 + 640) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    std::tie<int,data::OptionalLimitConfig>(
      (int *)(v3 + 640),
      (data::OptionalLimitConfig *)(v3 + 64),
      p_activity_output_limit,
      (data::OptionalLimitConfig *)(v3 + 64));
    std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
      (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 640),
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 800));
    *(_WORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -1800;
    std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 800));
    v28 = ((v3 + 800) >> 3) + 2147450880;
    *(_WORD *)v28 = -1800;
    *(_BYTE *)(v28 + 2) = -8;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 64);
    if ( *(_DWORD *)(v3 + 64) )
    {
      *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1120, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1120),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RewardExcelConfig.cpp",
        "rewriteConfig",
        43);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1120),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v29, (const char (*)[12])byte_1A117000);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, reward_id);
      v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v31, (const char (*)[21])byte_1A117100);
      v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v32,
              &reward_excel_config->activity_output_limit_str);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])byte_1A117080);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
      *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 64);
      v2 = *(_DWORD *)(v3 + 64);
      v15 = 0;
      goto LABEL_128;
    }
    common::tools::MiscUtils::removeEmptyElement<data::RewardItemConfig,unsigned int data::RewardItemConfig::*>(
      &reward_excel_config->reward_item_list,
      (unsigned int *)8);
    v34 = ((v3 + 1248) >> 3) + 2147450880;
    *(_DWORD *)v34 = 0;
    *(_WORD *)(v34 + 4) = 0;
    v35 = ((v3 + 1328) >> 3) + 2147450880;
    *(_DWORD *)v35 = 0;
    *(_WORD *)(v35 + 4) = 0;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80, 8LL);
    *(_DWORD *)(v3 + 80) = 101;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1328),
      (proto::VirtualItem *)(v3 + 80),
      &reward_excel_config->avatar_exp);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 96, v3 + 80);
    *(_DWORD *)(v3 + 96) = 102;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1336),
      (proto::VirtualItem *)(v3 + 96),
      &reward_excel_config->player_exp);
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 112, v3 + 96);
    *(_DWORD *)(v3 + 112) = 105;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1344),
      (proto::VirtualItem *)(v3 + 112),
      &reward_excel_config->fetter_exp);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 128, v3 + 112);
    *(_DWORD *)(v3 + 128) = 201;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1352),
      (proto::VirtualItem *)(v3 + 128),
      &reward_excel_config->hcoin);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 144, v3 + 128);
    *(_DWORD *)(v3 + 144) = 202;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1360),
      (proto::VirtualItem *)(v3 + 144),
      &reward_excel_config->scoin);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 160, v3 + 144);
    *(_DWORD *)(v3 + 160) = 106;
    std::pair<unsigned int const,unsigned int>::pair<proto::VirtualItem,unsigned int &,true>(
      (std::pair<unsigned int const,unsigned int> *const)(v3 + 1368),
      (proto::VirtualItem *)(v3 + 160),
      &reward_excel_config->resin);
    __l._M_array = (std::initializer_list<std::pair<unsigned int const,unsigned int> >::iterator)(v3 + 1328);
    __l._M_len = 6LL;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<std::pair<unsigned int const,unsigned int>>::allocator((std::allocator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
    v36 = (char *)(v3 + 1328);
    std::map<unsigned int,unsigned int>::map(
      (std::map<unsigned int,unsigned int> *const)(v3 + 1248),
      __l,
      (const std::less<unsigned int> *)(v3 + 32),
      (const std::map<unsigned int,unsigned int>::allocator_type *)(v3 + 48));
    std::allocator<std::pair<unsigned int const,unsigned int>>::~allocator((std::allocator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    v37 = ((v3 + 1328) >> 3) + 2147450880;
    *(_DWORD *)v37 = -117901064;
    *(_WORD *)(v37 + 4) = -1800;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    v38 = ((v3 + 864) >> 3) + 2147450880;
    *(_WORD *)v38 = 0;
    *(_BYTE *)(v38 + 2) = 0;
    std::vector<data::RewardItemConfig>::vector((std::vector<data::RewardItemConfig> *const)(v3 + 864));
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 1248);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v36);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v36);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v39 = (char *)(v3 + 320);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 288),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 320)) )
        break;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      v40 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 288));
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v39);
      if ( ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v40 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v40, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v3 + 256) = *v40;
      item_id = std::get<0ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)(v3 + 256));
      v41 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)(v3 + 256));
      count = v41;
      v42 = ((unsigned __int8)v41 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v41);
      }
      if ( *count )
      {
        v43 = ((v3 + 928) >> 3) + 2147450880;
        *(_WORD *)v43 = 0;
        *(_BYTE *)(v43 + 2) = 0;
        v44 = &`vtable for'data::RewardItemConfig + 2;
        if ( *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 928, v42);
        *(_QWORD *)(v3 + 928) = v44;
        if ( *(_BYTE *)(((v3 + 936) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 936) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 936, v42);
        *(_DWORD *)(v3 + 936) = 0;
        v45 = (((_BYTE)v3 - 84) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 940) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 84) & 7) + 3) >= *(_BYTE *)(((v3 + 940) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 940, v45);
        }
        *(_DWORD *)(v3 + 940) = 0;
        if ( *(_BYTE *)(((v3 + 944) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 944) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 944, v45);
        *(_DWORD *)(v3 + 944) = 0;
        if ( *(_BYTE *)(((v3 + 948) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 76) & 7) + 3) >= *(_BYTE *)(((v3 + 948) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 948, (((_BYTE)v3 - 76) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 948) = 0;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        *(_DWORD *)(v3 + 936) = *item_id;
        *(_DWORD *)(v3 + 940) = *count;
        std::vector<data::RewardItemConfig>::push_back(
          (std::vector<data::RewardItemConfig> *const)(v3 + 864),
          (const std::vector<data::RewardItemConfig>::value_type *)(v3 + 928));
        data::RewardItemConfig::~RewardItemConfig((data::RewardItemConfig *const)(v3 + 928));
        v46 = ((v3 + 928) >> 3) + 2147450880;
        *(_WORD *)v46 = -1800;
        *(_BYTE *)(v46 + 2) = -8;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 288));
    }
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &reward_excel_config->reward_item_list;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v39);
    *(std::vector<data::RewardItemConfig>::iterator *)(v3 + 352) = std::vector<data::RewardItemConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v39);
    *(std::vector<data::RewardItemConfig>::iterator *)(v3 + 384) = std::vector<data::RewardItemConfig>::end(__for_range_1);
    while ( 1 )
    {
      v47 = (const char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>(
              (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 384)) )
        break;
      reward_item_config = __gnu_cxx::__normal_iterator<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 352));
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_item_config->item_id);
      }
      v48 = reward_item_config->item_id;
      v49 = *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000);
      LOBYTE(v47) = v49 != 0;
      if ( v49 != 0 && v49 <= 3 )
        __asan_report_store4(v3 + 176, v47);
      *(_DWORD *)(v3 + 176) = v48;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      __pred.__item_id = *(_DWORD *)(v3 + 176);
      __last = std::vector<data::RewardItemConfig>::end((std::vector<data::RewardItemConfig> *const)(v3 + 864))._M_current;
      M_current = std::vector<data::RewardItemConfig>::begin((std::vector<data::RewardItemConfig> *const)(v3 + 864))._M_current;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, v47);
      *(__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 416) = std::find_if<__gnu_cxx::__normal_iterator<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>,RewardExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::RewardItemConfig const&)#1}>((__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >)M_current, (__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >)__last, __pred);
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 448, __last);
      *(std::vector<data::RewardItemConfig>::iterator *)(v3 + 448) = std::vector<data::RewardItemConfig>::end((std::vector<data::RewardItemConfig> *const)(v3 + 864));
      v47 = (const char *)(v3 + 448);
      v51 = __gnu_cxx::operator!=<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>(
              (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 416),
              (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 448));
      *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
      if ( !v51 )
        goto LABEL_115;
      v52 = __gnu_cxx::__normal_iterator<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>::operator->((const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 416));
      p_item_count = &v52->item_count;
      if ( *(_BYTE *)(((unsigned __int64)p_item_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_item_count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(p_item_count);
      }
      item_count = v52->item_count;
      if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&reward_item_config->item_count);
      }
      reward_item_config->item_count += item_count;
      __lasta = reward_item_config->item_count;
      v55 = __gnu_cxx::__normal_iterator<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>::operator->((const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 416));
      v56 = &v55->item_count;
      if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v56);
      }
      if ( __lasta >= v55->item_count )
      {
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::__normal_iterator<data::RewardItemConfig*>(
          (__gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 480),
          (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 416));
        if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 480);
        v47 = *(const char **)(v3 + 480);
        std::vector<data::RewardItemConfig>::erase(
          (std::vector<data::RewardItemConfig> *const)(v3 + 864),
          (std::vector<data::RewardItemConfig>::const_iterator)v47);
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
LABEL_115:
        v62 = 1;
        goto LABEL_116;
      }
      *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1184, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1184),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RewardExcelConfig.cpp",
        "rewriteConfig",
        82);
      v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1184),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])"reward_id:");
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, reward_id);
      v60 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v59, (const char (*)[10])" item_id:");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v60,
              (const unsigned int *)(v3 + 176));
      v47 = byte_1A1171C0;
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v61, (const char (*)[19])byte_1A1171C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
      *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v62 = 0;
LABEL_116:
      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v62 != 1 )
      {
        v63 = 0;
        goto LABEL_120;
      }
      __gnu_cxx::__normal_iterator<data::RewardItemConfig *,std::vector<data::RewardItemConfig>>::operator++((__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 352));
    }
    v63 = 1;
LABEL_120:
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v63 == 1 )
    {
      v69 = std::vector<data::RewardItemConfig>::end((std::vector<data::RewardItemConfig> *const)(v3 + 864))._M_current;
      __preda = std::vector<data::RewardItemConfig>::begin((std::vector<data::RewardItemConfig> *const)(v3 + 864))._M_current;
      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      p_reward_item_list = &reward_excel_config->reward_item_list;
      if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 512, v47);
      *(std::vector<data::RewardItemConfig>::iterator *)(v3 + 512) = std::vector<data::RewardItemConfig>::begin(p_reward_item_list);
      __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::__normal_iterator<data::RewardItemConfig*>(
        (__gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 544),
        (const __gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 512));
      if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 544);
      std::vector<data::RewardItemConfig>::insert<__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig>>,void>(
        &reward_excel_config->reward_item_list,
        *(std::vector<data::RewardItemConfig>::const_iterator *)(v3 + 544),
        (__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >)__preda,
        (__gnu_cxx::__normal_iterator<data::RewardItemConfig*,std::vector<data::RewardItemConfig> >)v69);
      *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
      __lastb = 1;
    }
    else
    {
      __lastb = 0;
    }
    std::vector<data::RewardItemConfig>::~vector((std::vector<data::RewardItemConfig> *const)(v3 + 864));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1248));
    v15 = __lastb == 1;
LABEL_128:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    v65 = ((v3 + 1248) >> 3) + 2147450880;
    *(_DWORD *)v65 = -117901064;
    *(_WORD *)(v65 + 4) = -1800;
    v66 = ((v3 + 864) >> 3) + 2147450880;
    *(_WORD *)v66 = -1800;
    *(_BYTE *)(v66 + 2) = -8;
    if ( !v15 )
    {
      v67 = 0;
      goto LABEL_132;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false> *const)(v3 + 192));
  }
  v67 = 1;
LABEL_132:
  if ( v67 == 1 )
    v2 = 0;
  if ( v85 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1408LL, v85);
  }
  return v2;
};

// Line 76: range 000000000CACDE04-000000000CACDE92
bool __cdecl RewardExcelConfigMgr::rewriteConfig(TxtConfigMgr &)::{lambda(data::RewardItemConfig const&)#1}::operator()(
        const RewardExcelConfigMgr::rewriteConfig::<lambda(const data::RewardItemConfig&)> *const __closure,
        const data::RewardItemConfig *reward_item_config)
{
  uint32_t item_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_item_config->item_id);
  }
  item_id = reward_item_config->item_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return item_id == __closure->__item_id;
};

// Line 96: range 000000000CACFE92-000000000CACFEB6
int32_t __cdecl RewardExcelConfigMgr::checkConfig(RewardExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  return RewardExcelConfigMgr::checkRewardConfig(this, txt_config_mgr);
};

// Line 101: range 000000000CACFEB8-000000000CAD1441
int32_t __cdecl RewardExcelConfigMgr::checkRewardConfig(
        const RewardExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  unsigned __int64 v12; // rax
  char *v13; // rsi
  uint32_t item_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t item_count; // ecx
  char v18; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  _BOOL4 v25; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // r15d
  int v39; // eax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  const HK4EDesignConfig *Config; // rcx
  uint32_t reward_item_count_limit; // ecx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  unsigned __int64 v55; // rdx
  int v56; // edx
  _BOOL4 v57; // r15d
  unsigned __int64 v58; // rdx
  int v59; // eax
  data::RewardExcelConfigMap *__for_range; // [rsp+28h] [rbp-388h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::reference v63; // [rsp+30h] [rbp-380h]
  std::tuple_element<0,std::pair<unsigned int const,data::RewardExcelConfig> >::type *reward_id; // [rsp+38h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RewardExcelConfig> >::type *reward_excel_config; // [rsp+40h] [rbp-370h]
  const std::vector<data::RewardItemConfig> *__for_range_0; // [rsp+48h] [rbp-368h]
  const data::RewardItemConfig *reward_item_config; // [rsp+50h] [rbp-360h]
  const ItemOutputLimitConfig *limit_config_ptr; // [rsp+58h] [rbp-358h]
  char v69[848]; // [rsp+60h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 11 item_id:121 48 4 9 count:122 64 8 15 __for_begin:102 96 8 13 __for_end:102 128 8 15 _"
                        "_for_begin:119 160 8 13 __for_end:119 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 3"
                        "84 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 40 18 item_param_"
                        "bin:139 720 48 15 item_id_set:118";
  *(_QWORD *)(v3 + 16) = RewardExcelConfigMgr::checkRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862744] = -202116109;
  __for_range = &this->reward_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RewardExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RewardExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RewardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RewardExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RewardExcelConfig>,false> *)(v3 + 96)) )
  {
    v63 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false> *const)(v3 + 64));
    reward_id = std::get<0ul,unsigned int const,data::RewardExcelConfig>(v63);
    reward_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RewardExcelConfig>(v63);
    if ( std::vector<data::RewardItemConfig>::empty(&reward_excel_config->reward_item_list) )
    {
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
        "./src/txt_data_manual/RewardExcelConfig.cpp",
        "checkRewardConfig",
        107);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])byte_1A1173A0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, reward_id);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v8, (const char (*)[26])byte_1A1173E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&reward_excel_config->item_limit_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_excel_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_excel_config->item_limit_type);
      }
      if ( TxtConfigMgr::checkOutputControlConfig(
             txt_config_mgr,
             reward_excel_config,
             reward_excel_config->item_limit_type) )
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
          "./src/txt_data_manual/RewardExcelConfig.cpp",
          "checkRewardConfig",
          114);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v10, (const char (*)[42])byte_1A117420);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, reward_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v12 = ((v3 + 720) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_WORD *)(v12 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 720));
        __for_range_0 = &reward_excel_config->reward_item_list;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, reward_excel_config);
        *(std::vector<data::RewardItemConfig>::const_iterator *)(v3 + 128) = std::vector<data::RewardItemConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, reward_excel_config);
        *(std::vector<data::RewardItemConfig>::const_iterator *)(v3 + 160) = std::vector<data::RewardItemConfig>::end(__for_range_0);
        while ( 1 )
        {
          v13 = (char *)(v3 + 160);
          if ( !__gnu_cxx::operator!=<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v3 + 160)) )
            break;
          reward_item_config = __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 128));
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&reward_item_config->item_id);
          }
          item_id = reward_item_config->item_id;
          v15 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( v15 != 0 && v15 <= 3 )
          {
            LOBYTE(v13) = v15 != 0;
            __asan_report_store4(v3 + 32, v13);
          }
          *(_DWORD *)(v3 + 32) = item_id;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v16 = (((_BYTE)reward_item_config + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&reward_item_config->item_count);
          }
          item_count = reward_item_config->item_count;
          v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v18 != 0 && v18 <= 3 )
          {
            LOBYTE(v16) = v18 != 0;
            __asan_report_store4(v3 + 48, v16);
          }
          *(_DWORD *)(v3 + 48) = item_count;
          v19 = std::set<unsigned int>::insert(
                  (std::set<unsigned int> *const)(v3 + 720),
                  (const std::set<unsigned int>::value_type *)(v3 + 32));
          if ( !v19.second )
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
              "./src/txt_data_manual/RewardExcelConfig.cpp",
              "checkRewardConfig",
              127);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v20,
                    (const char (*)[24])byte_1A1173A0);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, reward_id);
            v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v22,
                    (const char (*)[17])byte_1A117480);
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1A1174C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v25 = 0;
          }
          else
          {
            p_item_config_mgr = &txt_config_mgr->item_config_mgr;
            if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 32);
            if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *(unsigned int *)(v3 + 32)) )
            {
              v32 = ((v3 + 640) >> 3) + 2147450880;
              *(_DWORD *)v32 = 0;
              *(_BYTE *)(v32 + 4) = 0;
              proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v3 + 640));
              if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reward_item_config->item_id);
              }
              proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v3 + 640), reward_item_config->item_id);
              if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&reward_item_config->item_count);
              }
              proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v3 + 640), reward_item_config->item_count);
              if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reward_item_config->level);
              }
              proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v3 + 640), reward_item_config->level);
              if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)reward_item_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&reward_item_config->promote_level);
              }
              proto::ItemParamBin::set_promote_level(
                (proto::ItemParamBin *const)(v3 + 640),
                reward_item_config->promote_level);
              if ( *(_BYTE *)(((unsigned __int64)&reward_excel_config->item_limit_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&reward_excel_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&reward_excel_config->item_limit_type);
              }
              if ( TxtConfigMgr::checkItemParamBin(
                     txt_config_mgr,
                     (const proto::ItemParamBin *)(v3 + 640),
                     reward_excel_config->item_limit_type) )
              {
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
                  "./src/txt_data_manual/RewardExcelConfig.cpp",
                  "checkRewardConfig",
                  147);
                v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v34 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v33,
                        (const char (*)[24])byte_1A1173A0);
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, reward_id);
                v36 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v35,
                        (const char (*)[17])byte_1A117480);
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v37, (const char (*)[20])byte_1A117540);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
                *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v38 = 0;
              }
              else
              {
                v39 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v39 != 0 && (char)v39 <= 3 )
                  __asan_report_load4(v3 + 48);
                if ( *(_DWORD *)(v3 + 48) )
                {
                  Config = TxtConfigMgr::getConfig(txt_config_mgr);
                  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 32);
                  limit_config_ptr = HK4EDesignConfig::findItemOutputLimitConfig(Config, *(unsigned int *)(v3 + 32));
                  if ( !limit_config_ptr )
                    goto LABEL_75;
                  if ( *(_BYTE *)(((unsigned __int64)&limit_config_ptr->reward_item_count_limit >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)limit_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&limit_config_ptr->reward_item_count_limit >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(&limit_config_ptr->reward_item_count_limit);
                  }
                  reward_item_count_limit = limit_config_ptr->reward_item_count_limit;
                  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 48);
                  if ( reward_item_count_limit < *(_DWORD *)(v3 + 48) )
                  {
                    *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 576, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 576),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/RewardExcelConfig.cpp",
                      "checkRewardConfig",
                      161);
                    v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 576),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v48 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                            v47,
                            (const char (*)[24])byte_1A1173A0);
                    v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, reward_id);
                    v50 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            v49,
                            (const char (*)[19])byte_1A1175C0);
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v50,
                            (const unsigned int *)(v3 + 32));
                    v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v51,
                            (const char (*)[11])byte_1A117600);
                    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v52,
                            (const unsigned int *)(v3 + 48));
                    v54 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            v53,
                            (const char (*)[25])byte_1A117640);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v54,
                      &limit_config_ptr->reward_item_count_limit);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                    *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v38 = 0;
                  }
                  else
                  {
LABEL_75:
                    v38 = 1;
                  }
                }
                else
                {
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
                    "./src/txt_data_manual/RewardExcelConfig.cpp",
                    "checkRewardConfig",
                    154);
                  v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 512),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v41 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          v40,
                          (const char (*)[24])byte_1A1173A0);
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, reward_id);
                  v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v42,
                          (const char (*)[17])byte_1A117480);
                  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v43,
                          (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v44,
                    (const char (*)[12])byte_1A117580);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
                  *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v38 = 0;
                }
              }
              proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v3 + 640));
              v25 = v38 == 1;
            }
            else
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
                "./src/txt_data_manual/RewardExcelConfig.cpp",
                "checkRewardConfig",
                134);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v27,
                      (const char (*)[24])byte_1A1173A0);
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, reward_id);
              v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v29,
                      (const char (*)[17])byte_1A117480);
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v30,
                      (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v31, (const char (*)[20])byte_1A117500);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
              *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v25 = 0;
            }
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          v55 = ((v3 + 640) >> 3) + 2147450880;
          *(_DWORD *)v55 = -117901064;
          *(_BYTE *)(v55 + 4) = -8;
          if ( !v25 )
          {
            v56 = 0;
            goto LABEL_81;
          }
          __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v3 + 128));
        }
        v56 = 1;
LABEL_81:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v57 = v56 == 1;
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 720));
        v9 = v57;
      }
    }
    v58 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v58 = -117901064;
    *(_WORD *)(v58 + 4) = -1800;
    if ( !v9 )
    {
      v59 = 0;
      goto LABEL_86;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RewardExcelConfig>,false,false> *const)(v3 + 64));
  }
  v59 = 1;
LABEL_86:
  if ( v59 == 1 )
    v2 = 0;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 172: range 000000000CAD1442-000000000CAD26FD
int32_t __cdecl RewardExcelConfigMgr::getItemParamsByRewardIds(
        const RewardExcelConfigMgr *const this,
        const std::vector<unsigned int> *reward_id_vec,
        std::vector<proto::ItemParamBin> *item_param_bin_vec)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::vector<unsigned int> *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  unsigned int v16; // ecx
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int v22; // edx
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  const data::RewardExcelConfig *reward_config_ptr; // [rsp+28h] [rbp-368h]
  const std::vector<data::RewardItemConfig> *__for_range_0; // [rsp+30h] [rbp-360h]
  const data::RewardItemConfig *reward_item_config; // [rsp+38h] [rbp-358h]
  uint32_t *count; // [rsp+40h] [rbp-350h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-348h]
  google::protobuf::uint32 *item_id; // [rsp+50h] [rbp-340h]
  google::protobuf::uint32 *item_count; // [rsp+58h] [rbp-338h]
  char v39[816]; // [rsp+60h] [rbp-330h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(768LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "15 32 4 13 reward_id:186 48 8 15 __for_begin:186 80 8 13 __for_end:186 112 8 15 __for_begin:195 "
                        "144 8 13 __for_end:195 176 8 9 <unknown> 208 8 15 __for_begin:220 240 8 13 __for_end:220 272 32 "
                        "9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 40 18 item_param_bin:21"
                        "0 608 40 18 item_param_bin:222 688 48 12 item_map:185";
  *(_QWORD *)(v4 + 16) = RewardExcelConfigMgr::getItemParamsByRewardIds;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862724] = -234881024;
  v6[536862725] = 62194;
  v6[536862725] = -234881024;
  v6[536862726] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = 62194;
  v6[536862727] = -234881024;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862733] = -219021312;
  v6[536862734] = 62194;
  v6[536862735] = -219021312;
  v6[536862736] = 62194;
  v6[536862737] = -234881024;
  v6[536862738] = -218959118;
  v6[536862740] = -218959360;
  v6[536862741] = 62194;
  v6[536862743] = -202116109;
  if ( std::vector<unsigned int>::empty(reward_id_vec) )
  {
    if ( *(char *)(((v4 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 47) & 7) >= *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/RewardExcelConfig.cpp",
      "getItemParamsByRewardIds",
      175);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v4 + 272),
      (const char (*)[23])"reward_id_vec is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 272));
    v3 = -1;
    goto LABEL_84;
  }
  if ( !std::vector<proto::ItemParamBin>::empty(item_param_bin_vec) )
  {
    if ( *(char *)(((v4 + 336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 111) & 7) >= *(_BYTE *)(((v4 + 367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 336),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/RewardExcelConfig.cpp",
      "getItemParamsByRewardIds",
      181);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v4 + 336),
      (const char (*)[32])"item_param_bin_vec is not empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 336));
    v3 = -1;
    goto LABEL_84;
  }
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 688));
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 48, reward_id_vec);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 48) = std::vector<unsigned int>::begin(reward_id_vec);
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, reward_id_vec);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 80) = std::vector<unsigned int>::end(reward_id_vec);
LABEL_17:
  v7 = (const std::vector<unsigned int> *)(v4 + 80);
  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 48),
          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 80)) )
  {
    v14 = 1;
    goto LABEL_66;
  }
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
  v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 48));
  v9 = (int *)v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  v10 = *v9;
  v11 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store4(v4 + 32, v7);
  }
  *(_DWORD *)(v4 + 32) = v10;
  v12 = *(unsigned int *)(v4 + 32);
  reward_config_ptr = data::RewardExcelConfigMgrBase::findRewardExcelConfig(this, v12);
  if ( reward_config_ptr )
  {
    __for_range_0 = &reward_config_ptr->reward_item_list;
    *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 112, v12);
    *(std::vector<data::RewardItemConfig>::const_iterator *)(v4 + 112) = std::vector<data::RewardItemConfig>::begin(__for_range_0);
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 144, v12);
    *(std::vector<data::RewardItemConfig>::const_iterator *)(v4 + 144) = std::vector<data::RewardItemConfig>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (const std::vector<unsigned int> *)(v4 + 144);
      if ( !__gnu_cxx::operator!=<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v4 + 112),
              (const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *)(v4 + 144)) )
      {
        v22 = 1;
        goto LABEL_62;
      }
      reward_item_config = __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reward_item_config->level);
      }
      if ( reward_item_config->level )
        goto LABEL_51;
      if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reward_item_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&reward_item_config->promote_level);
      }
      if ( reward_item_config->promote_level )
      {
LABEL_51:
        v24 = ((v4 + 528) >> 3) + 2147450880;
        *(_DWORD *)v24 = 0;
        *(_BYTE *)(v24 + 4) = 0;
        proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v4 + 528));
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_item_config->item_id);
        }
        proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v4 + 528), reward_item_config->item_id);
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_item_config->item_count);
        }
        proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v4 + 528), reward_item_config->item_count);
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_item_config->level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_item_config->level);
        }
        proto::ItemParamBin::set_level((proto::ItemParamBin *const)(v4 + 528), reward_item_config->level);
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_item_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->promote_level >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_item_config->promote_level);
        }
        proto::ItemParamBin::set_promote_level(
          (proto::ItemParamBin *const)(v4 + 528),
          reward_item_config->promote_level);
        std::vector<proto::ItemParamBin>::push_back(
          item_param_bin_vec,
          (const std::vector<proto::ItemParamBin>::value_type *)(v4 + 528));
        proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v4 + 528));
        v25 = ((v4 + 528) >> 3) + 2147450880;
        *(_DWORD *)v25 = -117901064;
        *(_BYTE *)(v25 + 4) = -8;
      }
      else
      {
        v15 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 688),
                &reward_item_config->item_id);
        count = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v16 = *count;
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_item_config->item_count);
        }
        if ( v16 + reward_item_config->item_count < *count )
        {
          *(_DWORD *)(((v4 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 48 + 31) & 7) >= *(_BYTE *)(((v4 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/RewardExcelConfig.cpp",
            "getItemParamsByRewardIds",
            202);
          v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)(v4 + 464),
                  (const char (*)[26])"addition overflow, count:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, count);
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" item_count:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  &reward_item_config->item_count);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v20,
                  (const char (*)[16])" reward_id_vec:");
          v7 = reward_id_vec;
          common::milog::MiLogStream::operator<<<unsigned int>(v21, reward_id_vec);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 464));
          *(_DWORD *)(((v4 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
          v22 = 0;
LABEL_62:
          *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v22 != 1 )
          {
            v14 = 0;
            goto LABEL_66;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 48));
          goto LABEL_17;
        }
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        v23 = *count;
        if ( *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_item_config->item_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_item_config->item_count);
        }
        *count = v23 + reward_item_config->item_count;
      }
      __gnu_cxx::__normal_iterator<data::RewardItemConfig const*,std::vector<data::RewardItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RewardItemConfig*,std::vector<data::RewardItemConfig> > *const)(v4 + 112));
    }
  }
  *(_DWORD *)(((v4 + 400) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v4 + 400) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 431) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 431) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 400, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 400),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/txt_data_manual/RewardExcelConfig.cpp",
    "getItemParamsByRewardIds",
    191);
  v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v4 + 400),
          (const char (*)[41])"findRewardExcelConfig failed, reward_id:");
  v7 = (const std::vector<unsigned int> *)(v4 + 32);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 400));
  *(_DWORD *)(((v4 + 400) >> 3) + 0x7FFF8000) = -117901064;
  v3 = -1;
  v14 = 0;
LABEL_66:
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v14 == 1 )
  {
    __for_range_1 = (std::map<unsigned int,unsigned int> *)(v4 + 688);
    *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 208, v7);
    *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 208) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 240, v7);
    *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 240) = std::map<unsigned int,unsigned int>::end(__for_range_1);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 208),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 240)) )
    {
      *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 208));
      if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 176, v4 + 240);
      if ( ((unsigned __int8)v26 & 7) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v26->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v26 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v26->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v26, 8LL);
      }
      *(std::pair<unsigned int const,unsigned int> *)(v4 + 176) = *v26;
      item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v4 + 176));
      item_count = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v4 + 176));
      v27 = ((v4 + 608) >> 3) + 2147450880;
      *(_DWORD *)v27 = 0;
      *(_BYTE *)(v27 + 4) = 0;
      proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v4 + 608));
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v4 + 608), *item_id);
      if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_count);
      }
      proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v4 + 608), *item_count);
      std::vector<proto::ItemParamBin>::push_back(
        item_param_bin_vec,
        (const std::vector<proto::ItemParamBin>::value_type *)(v4 + 608));
      proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v4 + 608));
      v28 = ((v4 + 608) >> 3) + 2147450880;
      *(_DWORD *)v28 = -117901064;
      *(_BYTE *)(v28 + 4) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 208));
    }
    *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = -8;
    v3 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 688));
LABEL_84:
  if ( v39 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v3;
};

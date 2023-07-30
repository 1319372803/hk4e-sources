// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp

// Line 21: range 0000000012E20C32-0000000012E20E5D
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::rewriteConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeStageConfig(this, txt_config_mgr);
  retb = ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeFloatSignalConfig(this, txt_config_mgr) | reta;
  ret = ActivitySummerTimeExcelConfigMgr::rewriteRaceConfig(this, txt_config_mgr) | retb;
  if ( ret )
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
      "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
      "rewriteConfig",
      28);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v10 == (char *)v2 )
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

// Line 34: range 0000000012E20E5E-0000000012E21089
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::checkConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ActivitySummerTimeExcelConfigMgr::checkSummerTimeStageConfig(this, txt_config_mgr);
  retb = ActivitySummerTimeExcelConfigMgr::checkSummerTimeFloatSignalConfig(this, txt_config_mgr) | reta;
  ret = ActivitySummerTimeExcelConfigMgr::checkRaceConfig(this, txt_config_mgr) | retb;
  if ( ret )
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
      "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
      "checkConfig",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v10 == (char *)v2 )
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

// Line 47: range 0000000012E2108A-0000000012E231EB
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::finalConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_config_id; // rsi
  uint32_t *p_group_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 n; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 activity_cond_id; // rsi
  const char *v16; // rsi
  std::vector<int>::const_reference v17; // rax
  unsigned int *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  char *v30; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  const std::type_info *v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  const std::any *p_param; // rcx
  char v47; // al
  __int64 v48; // rsi
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  uint32_t v56; // ecx
  char v57; // dl
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  unsigned __int64 v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  unsigned __int64 v77; // rax
  bool is_find_open_day; // [rsp+23h] [rbp-55Dh]
  int32_t ret; // [rsp+24h] [rbp-55Ch]
  const LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-558h]
  data::ActivitySummerTimeFloatSignalExcelConfigMap *__for_range; // [rsp+30h] [rbp-550h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::reference v84; // [rsp+38h] [rbp-548h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *siganl_id; // [rsp+40h] [rbp-540h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *signal_config; // [rsp+48h] [rbp-538h]
  const GroupScriptConfig *group_config_ptr; // [rsp+50h] [rbp-530h]
  const GadgetScriptConfig *gadget_config_ptr; // [rsp+58h] [rbp-528h]
  data::ActivitySummerTimeRaceExcelConfigMap *__for_range_0; // [rsp+60h] [rbp-520h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::reference __in; // [rsp+68h] [rbp-518h]
  const unsigned int *config_id; // [rsp+70h] [rbp-510h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *race_config; // [rsp+78h] [rbp-508h]
  data::NewActivityCondExcelConfig *activity_cond_config_ptr; // [rsp+80h] [rbp-500h]
  std::vector<data::NewActivityCond> *__for_range_1; // [rsp+88h] [rbp-4F8h]
  const data::NewActivityCond *cond; // [rsp+90h] [rbp-4F0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+98h] [rbp-4E8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+A0h] [rbp-4E0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+B8h] [rbp-4C8h]
  char v99[1200]; // [rsp+D0h] [rbp-4B0h] BYREF

  v3 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1152LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 48 4 13 watcher_id:99 64 4 9 param:118 80 8 14 __for_begin:50 112 8 12 __for_end:50 144 8 14 "
                        "__for_begin:67 176 8 12 __for_end:67 208 8 14 __for_begin:74 240 8 12 __for_end:74 272 8 14 __fo"
                        "r_begin:99 304 8 12 __for_end:99 336 8 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 "
                        "9 <unknown> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9"
                        " <unknown> 880 32 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 48 20 watcher_group_set:98";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeExcelConfigMgr::finalConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862755] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->activity_summer_time_float_signal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_config_id = (uint32_t *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 112)) )
    {
      v10 = 1;
      goto LABEL_28;
    }
    v84 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 80));
    siganl_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v84);
    signal_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v84);
    p_group_id = &signal_config->group_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_id);
    }
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, signal_config->group_id);
    if ( !group_config_ptr )
    {
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
        "finalConfig",
        55);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 368),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])byte_1AA2C940);
      p_config_id = &signal_config->group_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &signal_config->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_28;
    }
    if ( *(_BYTE *)(((unsigned __int64)&signal_config->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&signal_config->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&signal_config->config_id);
    }
    gadget_config_ptr = GroupScriptConfig::findGadgetConfig(group_config_ptr, signal_config->config_id);
    if ( !gadget_config_ptr )
      break;
    n = (unsigned __int64)std::map<unsigned int,Vector3>::operator[](&this->float_signal_position_map, siganl_id);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 12LL);
    }
    if ( (((unsigned __int8)gadget_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3)
                                                                     + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)gadget_config_ptr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&gadget_config_ptr->pos.z + 3) >> 3)
                                                                     + 0x7FFF8000) )
    {
      n = __asan_report_load_n(&gadget_config_ptr->pos, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&gadget_config_ptr->pos.x;
    *(float *)(n + 8) = gadget_config_ptr->pos.z;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 80));
  }
  if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 432, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 432),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
    "finalConfig",
    61);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])byte_1AA2C980);
  p_config_id = &signal_config->config_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &signal_config->config_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
  *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v10 = 0;
LABEL_28:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v10 == 1 )
  {
    __for_range_0 = &this->activity_summer_time_race_excel_config_map;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, p_config_id);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::iterator *)(v3 + 144) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_config_id);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false> *)(v3 + 144),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false> *)(v3 + 176)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false> *const)(v3 + 144));
      config_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(__in);
      race_config = std::get<1ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(__in);
      p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&race_config->activity_cond_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&race_config->activity_cond_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&race_config->activity_cond_id);
      }
      activity_cond_id = race_config->activity_cond_id;
      activity_cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                                   p_new_activity_config_mgr,
                                   activity_cond_id);
      if ( activity_cond_config_ptr )
      {
        is_find_open_day = 0;
        __for_range_1 = &activity_cond_config_ptr->cond;
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 208, activity_cond_id);
        *(std::vector<data::NewActivityCond>::iterator *)(v3 + 208) = std::vector<data::NewActivityCond>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 240, activity_cond_id);
        *(std::vector<data::NewActivityCond>::iterator *)(v3 + 240) = std::vector<data::NewActivityCond>::end(__for_range_1);
        while ( 1 )
        {
          v16 = (const char *)(v3 + 240);
          if ( !__gnu_cxx::operator!=<data::NewActivityCond *,std::vector<data::NewActivityCond>>(
                  (const __gnu_cxx::__normal_iterator<data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v3 + 208),
                  (const __gnu_cxx::__normal_iterator<data::NewActivityCond*,std::vector<data::NewActivityCond> > *)(v3 + 240)) )
            break;
          cond = __gnu_cxx::__normal_iterator<data::NewActivityCond *,std::vector<data::NewActivityCond>>::operator*((const __gnu_cxx::__normal_iterator<data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v3 + 208));
          if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->type);
          }
          if ( cond->type == NEW_ACTIVITY_COND_DAYS_GREAT_EQUAL && !std::vector<int>::empty(&cond->param) )
          {
            v17 = std::vector<int>::operator[](&cond->param, 0LL);
            v18 = (unsigned int *)v17;
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v17);
            }
            v16 = (const char *)*v18;
            if ( *(_BYTE *)(((unsigned __int64)&race_config->open_day >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&race_config->open_day >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&race_config->open_day, v16);
            }
            race_config->open_day = (unsigned int)v16;
            is_find_open_day = 1;
            break;
          }
          __gnu_cxx::__normal_iterator<data::NewActivityCond *,std::vector<data::NewActivityCond>>::operator++((__gnu_cxx::__normal_iterator<data::NewActivityCond*,std::vector<data::NewActivityCond> > *const)(v3 + 208));
        }
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
        if ( !is_find_open_day )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
            "finalConfig",
            88);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])byte_1AAAC3E0);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
          v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v21, (const char (*)[31])byte_1AAAC420);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  &race_config->activity_cond_id);
          v16 = byte_1AAAC460;
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v23, (const char (*)[26])byte_1AAAC460);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
          "finalConfig",
          94);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])byte_1AAAC3E0);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, config_id);
        v27 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v26, (const char (*)[25])byte_1AAAC4A0);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                &race_config->activity_cond_id);
        v16 = byte_1AAAC4E0;
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v28, (const char (*)[33])byte_1AAAC4E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v29 = ((v3 + 1072) >> 3) + 2147450880;
      *(_DWORD *)v29 = 0;
      *(_WORD *)(v29 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1072));
      __for_range_2 = &race_config->medal_watcher;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, v16);
      *(std::vector<unsigned int>::iterator *)(v3 + 272) = std::vector<unsigned int>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 304, v16);
      *(std::vector<unsigned int>::iterator *)(v3 + 304) = std::vector<unsigned int>::end(__for_range_2);
      while ( 1 )
      {
        v30 = (char *)(v3 + 304);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 272),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 304)) )
          break;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 272));
        v32 = (int *)v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        v33 = *v32;
        v34 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v34 != 0 && v34 <= 3 )
        {
          LOBYTE(v30) = v34 != 0;
          __asan_report_store4(v3 + 48, v30);
        }
        *(_DWORD *)(v3 + 48) = v33;
        watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                               &txt_config_mgr->watcher_config_mgr,
                               *(_DWORD *)(v3 + 48));
        if ( watcher_config_ptr )
        {
          v40 = std::any::type(&watcher_config_ptr->param);
          if ( std::type_info::operator!=(
                 (const std::type_info *const)&`typeinfo for'GroupSummerTimeSprintBoatReachPointsWatcherParam,
                 v40) )
          {
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 688, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 688),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
              "finalConfig",
              111);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 688),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v41,
                    (const char (*)[16])byte_1AAAC3E0);
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, config_id);
            v44 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v43,
                    (const char (*)[13])" watcher_id:");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v45, (const char (*)[18])byte_1AAAC5A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            p_param = &watcher_config_ptr->param;
            v47 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v47 != 0 && v47 <= 3 )
            {
              LOBYTE(v40) = v47 != 0;
              __asan_report_store4(v3 + 64, v40);
            }
            *(GroupSummerTimeSprintBoatReachPointsWatcherParam *)(v3 + 64) = std::any_cast<GroupSummerTimeSprintBoatReachPointsWatcherParam>(p_param);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v48 = *(unsigned int *)(v3 + 64);
            if ( LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, v48) )
            {
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 64);
              v56 = *(_DWORD *)(v3 + 64);
              v57 = *(_BYTE *)(((unsigned __int64)&race_config->group_id >> 3) + 0x7FFF8000);
              if ( v57 != 0 && (char)((((_BYTE)race_config + 52) & 7) + 3) >= v57 )
              {
                LOBYTE(v48) = v57 != 0;
                __asan_report_store4(&race_config->group_id, v48);
              }
              race_config->group_id = v56;
              std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v3 + 1072),
                (const std::set<unsigned int>::value_type *)(v3 + 64));
            }
            else
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
                "finalConfig",
                122);
              v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v49,
                      (const char (*)[16])byte_1AAAC3E0);
              v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, config_id);
              v52 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v51,
                      (const char (*)[13])" watcher_id:");
              v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v52,
                      (const unsigned int *)(v3 + 48));
              v54 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v53,
                      (const char (*)[17])byte_1AAAC5E0);
              v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v54,
                      (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v55, (const char (*)[24])byte_1AAAC620);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 624, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 624),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
            "finalConfig",
            104);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v35, (const char (*)[16])byte_1AAAC3E0);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, config_id);
          v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v37, (const char (*)[13])" watcher_id:");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v39, (const char (*)[34])byte_1AAAC540);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 272));
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 1072)) == 1 )
      {
        v62 = (unsigned __int64)std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::operator[](
                                  &this->group_to_race_config_map,
                                  &race_config->group_id);
        if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
          v62 = __asan_report_store8(v62, &race_config->group_id);
        *(_QWORD *)v62 = race_config;
        if ( *(_BYTE *)(((unsigned __int64)&race_config->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)race_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config->group_id >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&race_config->group_id);
        }
        group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, race_config->group_id);
        if ( group_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&race_config->boat_point_config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)race_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&race_config->boat_point_config_id >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&race_config->boat_point_config_id);
          }
          if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, race_config->boat_point_config_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&race_config->player_point_config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&race_config->player_point_config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&race_config->player_point_config_id);
            }
            if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, race_config->player_point_config_id) )
            {
              *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1008) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 1039) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1008, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1008),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
                "finalConfig",
                158);
              v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1008),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v70,
                      (const char (*)[16])byte_1AAAC3E0);
              v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, config_id);
              v73 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v72, (const char (*)[8])" group:");
              v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &race_config->group_id);
              v75 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v74,
                      (const char (*)[17])byte_1AAAC780);
              v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v75,
                      &race_config->player_point_config_id);
              common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v76, (const char (*)[17])byte_1AAAC740);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1008));
              *(_DWORD *)(((v3 + 1008) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 944, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 944),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
              "finalConfig",
              150);
            v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 944),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v63,
                    (const char (*)[16])byte_1AAAC3E0);
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, config_id);
            v66 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])" group:");
            v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, &race_config->group_id);
            v68 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v67,
                    (const char (*)[17])byte_1AAAC700);
            v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v68,
                    &race_config->boat_point_config_id);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v69, (const char (*)[17])byte_1AAAC740);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
            *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
          "finalConfig",
          138);
        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v58, (const char (*)[16])byte_1AAAC3E0);
        v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, config_id);
        v61 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v60, (const char (*)[51])byte_1AAAC660);
        common::milog::MiLogStream::operator<<<unsigned int>(v61, (const std::set<unsigned int> *)(v3 + 1072));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 880));
        *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1072));
      v77 = ((v3 + 1072) >> 3) + 2147450880;
      *(_DWORD *)v77 = -117901064;
      *(_WORD *)(v77 + 4) = -1800;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false> *const)(v3 + 144));
    }
    v2 = ret;
  }
  if ( v99 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1152LL, v99);
  }
  return v2;
};

// Line 169: range 0000000012E231EC-0000000012E237A7
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeStageConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_stage_id; // rsi
  unsigned __int64 v7; // rax
  char *v8; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  unsigned int *v10; // r8
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  data::ActivitySummerTimeStageExcelConfigMap *__for_range; // [rsp+28h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig> >::type *config; // [rsp+40h] [rbp-140h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-138h]
  char v24[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 watcher_id:173 64 8 15 __for_begin:170 96 8 13 __for_end:170 128 8 15 __for_begin:173 "
                        "160 8 13 __for_end:173 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->activity_summer_time_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySummerTimeStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivitySummerTimeStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig>(__in);
    p_stage_id = &config->stage_id;
    v7 = (unsigned __int64)std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::operator[](
                             &this->summer_time_stage_map,
                             &config->stage_id);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v7, p_stage_id);
    *(_QWORD *)v7 = config;
    __for_range_0 = &config->watcher_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_stage_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_stage_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v8 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v17 = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v11 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(v3 + 48, v8);
      }
      *(_DWORD *)(v3 + 48) = v12;
      v14 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
              &this->watcher_id_stage_id_map,
              (unsigned int *)(v3 + 48),
              &config->stage_id,
              (unsigned int *)&this->watcher_id_stage_id_map,
              v10);
      if ( !v14.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
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
      "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
      "rewriteSummerTimeStageConfig",
      177);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1AAAC8E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_28:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_32;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v18 = 1;
LABEL_32:
  if ( v18 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 186: range 0000000012E237A8-0000000012E23D73
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeFloatSignalConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *p_config_id; // rcx
  const unsigned int *p_group_id; // rdx
  __int64 v8; // rsi
  std::set<unsigned int>::value_type v9; // r14d
  char *v10; // rsi
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::mapped_type *v11; // rax
  std::set<unsigned int>::value_type *v12; // rdx
  char v13; // cl
  uint32_t *p_relative_order; // rsi
  const unsigned int *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  uint32_t vehicle_gadget_id; // ecx
  char v21; // al
  int v22; // eax
  int32_t result; // eax
  data::ActivitySummerTimeFloatSignalExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *siganl_id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *signal_config; // [rsp+38h] [rbp-108h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *singal_point_set; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *order_singal_id_map; // [rsp+48h] [rbp-F8h]
  char v30[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:187 64 8 13 __for_end:187 96 8 14 point_pair:191 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeExcelConfigMgr::rewriteSummerTimeFloatSignalConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->activity_summer_time_float_signal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 64)) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 32));
    siganl_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v25);
    signal_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v25);
    singal_point_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                         &this->mist_zone_signal_point_map,
                         &signal_config->mist_zone_id);
    std::set<unsigned int>::insert(singal_point_set, siganl_id);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_config_id = &signal_config->config_id;
    p_group_id = &signal_config->group_id;
    v8 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_store8(v3 + 96, v8);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_group_id,
                                                           p_config_id);
    if ( *(_BYTE *)(((unsigned __int64)siganl_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)siganl_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)siganl_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(siganl_id);
    }
    v9 = *siganl_id;
    v10 = (char *)(v3 + 96);
    v11 = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::operator[](
            &this->singal_point_2_config_id_map,
            (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v3 + 96));
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10);
    }
    *v12 = v9;
    std::set<unsigned int>::insert(&this->all_float_singal_point_set, siganl_id);
    order_singal_id_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                            &this->mist_zone_signal_order_map,
                            &signal_config->mist_zone_id);
    p_relative_order = &signal_config->relative_order;
    v16 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            order_singal_id_map,
            &signal_config->relative_order,
            siganl_id,
            &signal_config->relative_order,
            v15);
    if ( !v16.second )
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
        "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
        "rewriteSummerTimeFloatSignalConfig",
        198);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v17, (const char (*)[40])byte_1AAAC9E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, siganl_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v19 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&signal_config->vehicle_gadget_id);
      }
      vehicle_gadget_id = signal_config->vehicle_gadget_id;
      v21 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(p_relative_order) = v21 != 0;
        __asan_report_store4(&this->vehicle_gadget_id, p_relative_order);
      }
      this->vehicle_gadget_id = vehicle_gadget_id;
      v19 = 1;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v22 = 0;
      goto LABEL_29;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 32));
  }
  v22 = 1;
LABEL_29:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 207: range 0000000012E23D74-0000000012E24175
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::checkSummerTimeConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  data::ActivitySummerTimeExcelConfigMap *p_activity_summer_time_excel_config_map; // rdx
  data::ActivitySummerTimeExcelConfigMap *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  char v11[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 begin_iter:213 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::checkSummerTimeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::size(&this->activity_summer_time_excel_config_map) == 1 )
  {
    p_activity_summer_time_excel_config_map = &this->activity_summer_time_excel_config_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::begin(p_activity_summer_time_excel_config_map);
    v8 = &this->activity_summer_time_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::end(v8);
    v9 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false> *)(v2 + 32),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false> *)(v2 + 64));
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
        "checkSummerTimeConfig",
        216);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v10, (const char (*)[34])byte_1AAACAE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  else
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
      "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
      "checkSummerTimeConfig",
      210);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v5, (const char (*)[34])byte_1AAACAE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 223: range 0000000012E24176-0000000012E24911
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::checkSummerTimeStageConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  char *v12; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  int32_t result; // eax
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*> *__for_range; // [rsp+10h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *config_ptr; // [rsp+20h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+28h] [rbp-198h]
  char v25[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 14 watcher_id:231 64 8 15 __for_begin:224 96 8 13 __for_end:224 128 8 15 __for_begin:231 "
                        "160 8 13 __for_end:231 192 16 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeExcelConfigMgr::checkSummerTimeStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219021312;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->summer_time_stage_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::iterator *)(v3 + 64) = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::iterator *)(v3 + 96) = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::_Self *)(v3 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::_Self *)(v3 + 96)) )
    {
      v11 = 1;
      goto LABEL_42;
    }
    *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    v7 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig *>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> > *const)(v3 + 64));
    if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    if ( *(_WORD *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load16(v7);
    v8 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v3 + 192) = *(_QWORD *)v7;
    *(_QWORD *)(v3 + 200) = v8;
    std::get<0ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig *>((const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> *)(v3 + 192));
    v9 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeStageExcelConfig *>((const std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> *)(v3 + 192));
    config_ptr = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9);
    if ( !*config_ptr )
      break;
    if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
      __asan_report_load8(config_ptr);
    __for_range_0 = &(*config_ptr)->watcher_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v12 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v19 = 1;
        goto LABEL_38;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v3 + 48, v12);
      }
      *(_DWORD *)(v3 + 48) = v15;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
      "checkSummerTimeStageConfig",
      235);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1AAACC80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_38:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v11 = 0;
      goto LABEL_42;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig *>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> > *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
    "checkSummerTimeStageConfig",
    228);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])"config_ptr is null");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v11 = 0;
LABEL_42:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 244: range 0000000012E24912-0000000012E25561
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::checkSummerTimeFloatSignalConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_group_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t vehicle_gadget_id; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  int v26; // eax
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-228h]
  JsonConfigMgr *json_config_mgr; // [rsp+30h] [rbp-220h]
  data::ActivitySummerTimeFloatSignalExcelConfigMap *__for_range; // [rsp+38h] [rbp-218h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::reference v31; // [rsp+40h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *signal_config; // [rsp+50h] [rbp-200h]
  const GroupScriptConfig *group_config_ptr; // [rsp+58h] [rbp-1F8h]
  char v34[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 15 __for_begin:247 64 8 13 __for_end:247 96 16 21 config_gadget_ptr:270 128 32 9 <unknown"
                        "> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeExcelConfigMgr::checkSummerTimeFloatSignalConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
  __for_range = &this->activity_summer_time_float_signal_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySummerTimeFloatSignalExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false> *)(v3 + 64)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v31);
    signal_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>(v31);
    p_group_id = &signal_config->group_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_id);
    }
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, signal_config->group_id);
    if ( group_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&signal_config->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&signal_config->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&signal_config->config_id);
      }
      if ( GroupScriptConfig::findGadgetConfig(group_config_ptr, signal_config->config_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)signal_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_config_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&signal_config->vehicle_config_id);
        }
        if ( GroupScriptConfig::findPointConfig(group_config_ptr, signal_config->vehicle_config_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->vehicle_gadget_id);
          }
          vehicle_gadget_id = this->vehicle_gadget_id;
          if ( *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&signal_config->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&signal_config->vehicle_gadget_id);
          }
          if ( vehicle_gadget_id == signal_config->vehicle_gadget_id )
          {
            *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->vehicle_gadget_id);
            }
            v21 = this->vehicle_gadget_id;
            if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
              __asan_report_store16();
            JsonConfigMgr::findGadgetConfig(
              (const JsonConfigMgr *const)(v3 + 96),
              (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigGadget>> *)json_config_mgr,
              v21);
            if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v3 + 96)) )
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
                "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
                "checkSummerTimeFloatSignalConfig",
                273);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v22,
                      (const char (*)[14])byte_1AAACE60);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      &this->vehicle_gadget_id);
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v24, (const char (*)[39])byte_1AAACEA0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
              *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v25 = 0;
            }
            else
            {
              v25 = 1;
            }
            std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 96));
            v9 = v25 == 1;
          }
          else
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
              "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
              "checkSummerTimeFloatSignalConfig",
              267);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v17,
                    (const char (*)[33])byte_1AAA7480);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    &signal_config->vehicle_gadget_id);
            v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])" vs ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->vehicle_gadget_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v9 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
            "checkSummerTimeFloatSignalConfig",
            262);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v13, (const char (*)[28])byte_1AAACE20);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  &signal_config->vehicle_config_id);
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])byte_1AA2E0C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v9 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
          "checkSummerTimeFloatSignalConfig",
          257);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1AAACDE0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &signal_config->config_id);
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])byte_1AA2E0C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
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
        "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
        "checkSummerTimeFloatSignalConfig",
        252);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])byte_1AA2C940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &signal_config->group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v26 = 0;
      goto LABEL_50;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeFloatSignalExcelConfig>,false,false> *const)(v3 + 32));
  }
  v26 = 1;
LABEL_50:
  if ( v26 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 281: range 0000000012E25562-0000000012E25744
const data::ActivitySummerTimeStageExcelConfig *__fastcall ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId(
        const ActivitySummerTimeExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*> *p_summer_time_stage_map; // rdx
  std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::ActivitySummerTimeStageExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:280 64 8 8 iter:282 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::findSummerTimeStageConfigByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_summer_time_stage_map = &this->summer_time_stage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::find(
                                                                                                     p_summer_time_stage_map,
                                                                                                     (const std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->summer_time_stage_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ActivitySummerTimeStageExcelConfig *>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeStageExcelConfig*> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 291: range 0000000012E25746-0000000012E2595A
const data::ActivitySummerTimeFloatSignalExcelConfig *__fastcall ActivitySummerTimeExcelConfigMgr::findFloatSignalConfigByGroupPair(
        const ActivitySummerTimeExcelConfigMgr *const this,
        std::pair<unsigned int,unsigned int> group_config_pair)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *p_singal_point_2_config_id_map; // rdx
  std::map<std::pair<unsigned int,unsigned int>,unsigned int> *v6; // rdx
  bool v7; // al
  const data::ActivitySummerTimeFloatSignalExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:292 64 8 9 <unknown> 96 8 21 group_config_pair:290";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::findFloatSignalConfigByGroupPair;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(std::pair<unsigned int,unsigned int> *)(v2 + 96) = group_config_pair;
  p_singal_point_2_config_id_map = &this->singal_point_2_config_id_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, group_config_pair);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v2 + 32) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::find(
                                                                                                p_singal_point_2_config_id_map,
                                                                                                (const std::map<std::pair<unsigned int,unsigned int>,unsigned int>::key_type *)(v2 + 96));
  v6 = &this->singal_point_2_config_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v2 + 96);
  *(std::map<std::pair<unsigned int,unsigned int>,unsigned int>::const_iterator *)(v2 + 64) = std::map<std::pair<unsigned int,unsigned int>,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::_Self *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > *const)(v2 + 32));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::ActivitySummerTimeExcelConfigMgrBase::findActivitySummerTimeFloatSignalExcelConfig(this, v9->second);
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

// Line 301: range 0000000012E2595C-0000000012E25B1D
const std::set<unsigned int> *__fastcall ActivitySummerTimeExcelConfigMgr::findMistZoneFloatSignalSet(
        const ActivitySummerTimeExcelConfigMgr *const this,
        __int64 mist_zone_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_mist_zone_signal_point_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 mist_zone_id:300 64 8 8 iter:302 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::findMistZoneFloatSignalSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = mist_zone_id;
  p_mist_zone_signal_point_map = &this->mist_zone_signal_point_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, mist_zone_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_mist_zone_signal_point_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->mist_zone_signal_point_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 311: range 0000000012E25B1E-0000000012E25E09
__m128i __fastcall ActivitySummerTimeExcelConfigMgr::findSignalPos(
        const ActivitySummerTimeExcelConfigMgr *const this,
        __int64 signal_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,Vector3> *p_float_signal_position_map; // rdx
  std::map<unsigned int,Vector3> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3> >::pointer n; // rax
  __m128i v10; // [rsp+8h] [rbp-D8h] BYREF
  int v11; // [rsp+24h] [rbp-BCh]
  const ActivitySummerTimeExcelConfigMgr *thisa; // [rsp+28h] [rbp-B8h]
  Vector3 second; // [rsp+34h] [rbp-ACh]
  char v14[160]; // [rsp+40h] [rbp-A0h] BYREF

  thisa = this;
  v11 = signal_id;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 signal_id:310 64 8 8 iter:312 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::findSignalPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = v11;
  p_float_signal_position_map = &thisa->float_signal_position_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, signal_id);
  *(std::map<unsigned int,Vector3>::const_iterator *)(v2 + 64) = std::map<unsigned int,Vector3>::find(
                                                                   p_float_signal_position_map,
                                                                   (const std::map<unsigned int,Vector3>::key_type *)(v2 + 48));
  v6 = &thisa->float_signal_position_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,Vector3>::const_iterator *)(v2 + 96) = std::map<unsigned int,Vector3>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    if ( (char)((unsigned __int64)&Vector3::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)&Vector3::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load_n(&Vector3::zero, 12LL);
    }
    second = Vector3::zero;
  }
  else
  {
    n = std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3> > *const)(v2 + 64));
    if ( (((unsigned __int8)n + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->second.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.z + 3) >> 3) + 0x7FFF8000) )
    {
      n = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,Vector3> >::pointer)__asan_report_load_n(
                                                                                           &n->second,
                                                                                           12LL);
    }
    second = n->second;
  }
  v10.m128i_i64[0] = *(_QWORD *)&second.x;
  if ( v14 == (char *)v2 )
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
  return _mm_loadl_epi64(&v10);
};

// Line 321: range 0000000012E25E0A-0000000012E2602F
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::rewriteRaceConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::tuple_element<1,std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *v5; // r14
  unsigned __int64 v6; // rax
  int32_t result; // eax
  data::ActivitySummerTimeRaceExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::reference v9; // [rsp+18h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig> >::type *config_id; // [rsp+20h] [rbp-A0h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:322 64 8 13 __for_end:322";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>::__node_type *)ActivitySummerTimeExcelConfigMgr::rewriteRaceConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_summer_time_race_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator*(v2 + 4);
    config_id = std::get<0ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(v9);
    v5 = std::get<1ul,unsigned int const,data::ActivitySummerTimeRaceExcelConfig>(v9);
    v6 = (unsigned __int64)std::map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::operator[](
                             &this->race_config_map,
                             config_id);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8(v6, config_id);
    *(_QWORD *)v6 = v5;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 330: range 0000000012E26030-0000000012E264C0
int32_t __cdecl ActivitySummerTimeExcelConfigMgr::checkRaceConfig(
        ActivitySummerTimeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::size_type v5; // rdx
  data::ActivitySummerTimeRaceExcelConfigMap *p_activity_summer_time_race_excel_config_map; // rcx
  int v7; // edi
  char v8; // al
  data::ActivitySummerTimeRaceExcelConfigMap *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  char v16[256]; // [rsp+20h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 <unknown> 64 8 5 i:332 96 8 8 iter:334 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::checkRaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  for ( *(_QWORD *)(v2 + 64) = 1LL; ; ++*(_QWORD *)(v2 + 64) )
  {
    v5 = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::size(&this->activity_summer_time_race_excel_config_map);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64);
    if ( v5 < *(_QWORD *)(v2 + 64) )
      break;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_activity_summer_time_race_excel_config_map = &this->activity_summer_time_race_excel_config_map;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    v7 = *(_QWORD *)(v2 + 64);
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(txt_config_mgr) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
    {
      v7 = v2 + 48;
      __asan_report_store4(v2 + 48, txt_config_mgr);
    }
    *(_DWORD *)(v2 + 48) = v7;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::find(p_activity_summer_time_race_excel_config_map, (const std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::key_type *)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->activity_summer_time_race_excel_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 48);
    *(std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig>::end(v9);
    txt_config_mgr = (const TxtConfigMgr *)(v2 + 128);
    v10 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig>,false> *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
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
        "./src/txt_data_manual/ActivitySummerTimeExcelConfig.cpp",
        "checkRaceConfig",
        337);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v11, (const char (*)[63])byte_1AAAD0A0);
      txt_config_mgr = (const TxtConfigMgr *)(v2 + 64);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 64);
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

// Line 346: range 0000000012E264C2-0000000012E266A4
const data::ActivitySummerTimeRaceExcelConfig *__fastcall ActivitySummerTimeExcelConfigMgr::findRaceConfigByGroupId(
        const ActivitySummerTimeExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*> *p_group_to_race_config_map; // rdx
  std::unordered_map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*>,false,false>::pointer v8; // rax
  const data::ActivitySummerTimeRaceExcelConfig *result; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:345 64 8 8 iter:347 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeExcelConfigMgr::findRaceConfigByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_race_config_map = &this->group_to_race_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::find(p_group_to_race_config_map, (const std::unordered_map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->group_to_race_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,const data::ActivitySummerTimeRaceExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySummerTimeRaceExcelConfig const*>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeRaceExcelConfig const*>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,const data::ActivitySummerTimeRaceExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v8->second);
    result = v8->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 356: range 0000000012E266A6-0000000012E26831
const data::ActivitySummerTimeExcelConfig *__cdecl ActivitySummerTimeExcelConfigMgr::findSummerTimePreviewData(
        const ActivitySummerTimeExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySummerTimeExcelConfigMap *p_activity_summer_time_excel_config_map; // rdx
  data::ActivitySummerTimeExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivitySummerTimeExcelConfig *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>::__node_type *)"2 32 8 14 begin_iter:357 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>::__node_type *)ActivitySummerTimeExcelConfigMgr::findSummerTimePreviewData;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_activity_summer_time_excel_config_map = &this->activity_summer_time_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::begin(p_activity_summer_time_excel_config_map)._M_cur;
  v6 = &this->activity_summer_time_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySummerTimeExcelConfig>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false,false>::operator->(v2 + 4)->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySummerTimeExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

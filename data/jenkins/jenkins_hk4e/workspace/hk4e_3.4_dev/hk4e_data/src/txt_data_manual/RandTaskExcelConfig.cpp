// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RandTaskExcelConfig.cpp

// Line 20: range 00000000146312D0-00000000146315FF
int32_t __cdecl RandTaskExcelConfigMgr::rewriteConfig(RandTaskExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RandTaskContentType *p_content_type; // rax
  __int64 content_type; // rsi
  std::vector<unsigned int> *v7; // rdx
  data::RandTaskLevelConfig *M_current; // rbx
  std::vector<data::RandTaskLevelConfig>::iterator v9; // rax
  RandTaskExcelConfigMgr::rewriteConfig::<lambda(const auto:37&, const auto:38&)> v10; // dl
  int32_t result; // eax
  data::RandTaskExcelConfigMap *__for_range; // [rsp+10h] [rbp-C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *rand_task_id; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *task_config; // [rsp+28h] [rbp-A8h]
  char v16[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 7 func:27 48 4 15 content_type:23 64 8 14 __for_begin:21 96 8 12 __for_end:21";
  *(_QWORD *)(v2 + 16) = RandTaskExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  __for_range = &this->rand_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RandTaskExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RandTaskExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RandTaskExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RandTaskExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RandTaskExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskExcelConfig>,false> *)(v2 + 96)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false> *const)(v2 + 64));
    rand_task_id = std::get<0ul,unsigned int const,data::RandTaskExcelConfig>(v13);
    task_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RandTaskExcelConfig>(v13);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    p_content_type = &task_config->content_type;
    if ( *(_BYTE *)(((unsigned __int64)p_content_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)task_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_content_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_content_type);
    }
    content_type = (unsigned int)task_config->content_type;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, content_type);
    *(_DWORD *)(v2 + 48) = content_type;
    v7 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->content_type_2_task_map_,
           (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
    std::vector<unsigned int>::push_back(v7, rand_task_id);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
  M_current = std::vector<data::RandTaskLevelConfig>::end(&this->rand_task_level_config_vec)._M_current;
  v9._M_current = std::vector<data::RandTaskLevelConfig>::begin(&this->rand_task_level_config_vec)._M_current;
  std::sort___gnu_cxx::__normal_iterator_data::RandTaskLevelConfig__std::vector_data::RandTaskLevelConfig____RandTaskExcelConfigMgr::rewriteConfig_TxtConfigMgr__::_lambda_const_auto_37__const_auto_38_____(
    v9,
    (__gnu_cxx::__normal_iterator<data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> >)M_current,
    v10);
  result = 0;
  if ( v16 == (char *)v2 )
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

// Line 27: range 000000001472A930-000000001472A9CF
bool __cdecl RandTaskExcelConfigMgr::rewriteConfig::_lambda_const_auto_37___const_auto_38___::operator()_data::RandTaskLevelConfig_data::RandTaskLevelConfig_(
        const RandTaskExcelConfigMgr::rewriteConfig::<lambda(const auto:37&, const auto:38&)> *const __closure,
        const data::RandTaskLevelConfig *lhs,
        const data::RandTaskLevelConfig *rhs)
{
  uint32_t min_zone_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->min_zone_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->min_zone_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->min_zone_level);
  }
  min_zone_level = lhs->min_zone_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->min_zone_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->min_zone_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->min_zone_level);
  }
  return min_zone_level < rhs->min_zone_level;
};

// Line 37: range 0000000014631600-0000000014631624
int32_t __cdecl RandTaskExcelConfigMgr::checkConfig(
        RandTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return RandTaskExcelConfigMgr::checkRandTaskConfig(this, txt_config_mgr);
};

// Line 42: range 0000000014631626-0000000014632AC4
int32_t __cdecl RandTaskExcelConfigMgr::checkRandTaskConfig(
        const RandTaskExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  char *v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  uint32_t *p_min_zone_level; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  uint32_t min_zone_level; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int32_t ret; // [rsp+10h] [rbp-3B0h]
  uint32_t last_level; // [rsp+14h] [rbp-3ACh]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-3A8h]
  data::RandTaskExcelConfigMap *__for_range; // [rsp+20h] [rbp-3A0h]
  data::RandTaskRewardConfigMap *__for_range_0; // [rsp+28h] [rbp-398h]
  data::RandTaskLevelConfigVec *__for_range_2; // [rsp+30h] [rbp-390h]
  const data::RandTaskLevelConfig *level_config; // [rsp+38h] [rbp-388h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false>::reference v51; // [rsp+40h] [rbp-380h]
  std::tuple_element<0,std::pair<unsigned int const,data::RandTaskRewardConfig> >::type *id; // [rsp+48h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskRewardConfig> >::type *reward_config; // [rsp+50h] [rbp-370h]
  const std::vector<data::RandTaskDropConfig> *__for_range_1; // [rsp+58h] [rbp-368h]
  const data::RandTaskDropConfig *drop_config; // [rsp+60h] [rbp-360h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::reference v56; // [rsp+68h] [rbp-358h]
  std::tuple_element<0,std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *task_id; // [rsp+70h] [rbp-350h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *rand_task_config; // [rsp+78h] [rbp-348h]
  char v59[832]; // [rsp+80h] [rbp-340h] BYREF

  v2 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 8 14 __for_begin:45 64 8 12 __for_end:45 96 8 14 __for_begin:70 128 8 12 __for_end:70 160 "
                        "8 14 __for_begin:72 192 8 12 __for_end:72 224 8 14 __for_begin:88 256 8 12 __for_end:88 288 32 9"
                        " <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 "
                        "<unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RandTaskExcelConfigMgr::checkRandTaskConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->rand_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RandTaskExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RandTaskExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RandTaskExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RandTaskExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RandTaskExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskExcelConfig>,false> *)(v2 + 64)) )
      break;
    v56 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false> *const)(v2 + 32));
    task_id = std::get<0ul,unsigned int const,data::RandTaskExcelConfig>(v56);
    rand_task_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RandTaskExcelConfig>(v56);
    if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(task_id);
    }
    if ( !*task_id )
    {
      ret = -1;
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
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        50);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])byte_1ADC87E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(task_id);
    }
    if ( *task_id > 0x3E8 )
    {
      ret = -1;
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
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        55);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])"rand_task_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, task_id);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])byte_1ADC8860);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        &RandTaskExcelConfigMgr::max_rand_task_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::RandTaskRewardConfig> const,unsigned int>(
            &this->rand_task_reward_config_map,
            &rand_task_config->reward) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        61);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])"rand_task_id: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, task_id);
      v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v13, (const char (*)[17])byte_1ADC88A0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &rand_task_config->reward);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1ADC88E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)task_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)task_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(task_id);
    }
    if ( !LuaConfigMgr::findPatternGroupScriptConfig(lua_config_mgr, *task_id) )
    {
      ret = -1;
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
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        66);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])"rand_task_id: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, task_id);
      v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v18, (const char (*)[33])byte_1ADC8940);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, task_id);
      common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v20, (const char (*)[5])".lua");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->rand_task_reward_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::end(__for_range_0);
  while ( 1 )
  {
    v21 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RandTaskRewardConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v2 + 128)) )
      break;
    v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false> *const)(v2 + 96));
    id = std::get<0ul,unsigned int const,data::RandTaskRewardConfig>(v51);
    reward_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RandTaskRewardConfig> >::type *)std::get<1ul,unsigned int const,data::RandTaskRewardConfig>(v51);
    __for_range_1 = &reward_config->drop_vec;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v21);
    *(std::vector<data::RandTaskDropConfig>::const_iterator *)(v2 + 160) = std::vector<data::RandTaskDropConfig>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v21);
    *(std::vector<data::RandTaskDropConfig>::const_iterator *)(v2 + 192) = std::vector<data::RandTaskDropConfig>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::RandTaskDropConfig const*,std::vector<data::RandTaskDropConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RandTaskDropConfig*,std::vector<data::RandTaskDropConfig> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<const data::RandTaskDropConfig*,std::vector<data::RandTaskDropConfig> > *)(v2 + 192)) )
    {
      drop_config = __gnu_cxx::__normal_iterator<data::RandTaskDropConfig const*,std::vector<data::RandTaskDropConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RandTaskDropConfig*,std::vector<data::RandTaskDropConfig> > *const)(v2 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&drop_config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&drop_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&drop_config->drop_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgr,
                              drop_config->drop_id,
                              ITEM_LIMIT_RAND_TASK_DROP) != 1 )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/RandTaskExcelConfig.cpp",
          "checkRandTaskConfig",
          77);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])"drop_id: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &drop_config->drop_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::RandTaskDropConfig const*,std::vector<data::RandTaskDropConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RandTaskDropConfig*,std::vector<data::RandTaskDropConfig> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<data::RandTaskDropConfig>::empty(&reward_config->drop_vec) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        83);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v25,
              (const char (*)[19])"RandTaskRewardId: ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v27, (const char (*)[19])byte_1ADC37C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  last_level = 0;
  __for_range_2 = &this->rand_task_level_config_vec;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v21);
  *(std::vector<data::RandTaskLevelConfig>::const_iterator *)(v2 + 224) = std::vector<data::RandTaskLevelConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v21);
  *(std::vector<data::RandTaskLevelConfig>::const_iterator *)(v2 + 256) = std::vector<data::RandTaskLevelConfig>::end(__for_range_2);
  while ( __gnu_cxx::operator!=<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *)(v2 + 224),
            (const __gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *)(v2 + 256)) )
  {
    level_config = __gnu_cxx::__normal_iterator<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *const)(v2 + 224));
    p_min_zone_level = &level_config->min_zone_level;
    if ( *(_BYTE *)(((unsigned __int64)p_min_zone_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_min_zone_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_zone_level >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_min_zone_level);
    }
    if ( level_config->min_zone_level != last_level + 1 )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        93);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])"ID: ");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &level_config->id);
      v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" level: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &level_config->min_zone_level);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v33, (const char (*)[19])byte_1ADC8AA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->min_zone_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->min_zone_level >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->min_zone_level);
    }
    min_zone_level = level_config->min_zone_level;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->max_zone_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->max_zone_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->max_zone_level);
    }
    if ( min_zone_level > level_config->max_zone_level )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "checkRandTaskConfig",
        98);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v35, (const char (*)[5])"ID: ");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &level_config->id);
      v38 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v37, (const char (*)[2])" ");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &level_config->min_zone_level);
      v40 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v39, (const char (*)[2])",");
      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &level_config->max_zone_level);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v41, (const char (*)[14])byte_1ADC8AE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&level_config->max_zone_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->max_zone_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->max_zone_level);
    }
    last_level = level_config->max_zone_level;
    __gnu_cxx::__normal_iterator<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *const)(v2 + 224));
  }
  if ( v59 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return ret;
};

// Line 108: range 0000000014632AC6-0000000014633010
__int64 __fastcall RandTaskExcelConfigMgr::genRandTaskIdByContentType(
        const RandTaskExcelConfigMgr *const this,
        __int64 content_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_content_type_2_task_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  std::vector<unsigned int>::const_reference v14; // rax
  unsigned int *v15; // rdx
  std::vector<unsigned int>::const_reference v16; // rax
  unsigned int *v17; // rdx
  uint32_t select; // [rsp+14h] [rbp-12Ch]
  std::vector<unsigned int> *task_id_vec; // [rsp+18h] [rbp-128h]
  char v20[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 16 content_type:107 64 8 8 iter:109 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RandTaskExcelConfigMgr::genRandTaskIdByContentType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 48) = content_type;
  p_content_type_2_task_map = &this->content_type_2_task_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, content_type);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_content_type_2_task_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->content_type_2_task_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      3u,
      "./src/txt_data_manual/RandTaskExcelConfig.cpp",
      "genRandTaskIdByContentType",
      112);
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[20])"find content_type: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    task_id_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
    if ( std::vector<unsigned int>::empty(task_id_vec) )
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
        3u,
        "./src/txt_data_manual/RandTaskExcelConfig.cpp",
        "genRandTaskIdByContentType",
        118);
      v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[15])"content_type: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v12,
        (const char (*)[24])" task_id_vec is empty()");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0LL;
    }
    else
    {
      v13 = std::vector<unsigned int>::size(task_id_vec);
      select = common::tools::RandomUtils::rand<int>(0, v13 - 1);
      if ( select < std::vector<unsigned int>::size(task_id_vec) )
      {
        v16 = std::vector<unsigned int>::operator[](task_id_vec, select);
        v17 = (unsigned int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        result = *v17;
      }
      else
      {
        v14 = std::vector<unsigned int>::operator[](task_id_vec, 0LL);
        v15 = (unsigned int *)v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        result = *v15;
      }
    }
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 130: range 0000000014633012-000000001463340E
__int64 __fastcall RandTaskExcelConfigMgr::findDropId(
        const RandTaskExcelConfigMgr *const this,
        __int64 drop_config_id,
        uint32_t zone_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::RandTaskRewardConfigMap *p_rand_task_reward_config_map; // rdx
  data::RandTaskRewardConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::vector<data::RandTaskDropConfig>::const_reference v12; // rax
  std::vector<data::RandTaskDropConfig>::const_reference v13; // rax
  uint32_t idx; // [rsp+14h] [rbp-ECh]
  std::vector<data::RandTaskDropConfig> *drop_vec; // [rsp+18h] [rbp-E8h]
  char v17[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 18 drop_config_id:129 64 8 13 reward_it:131 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RandTaskExcelConfigMgr::findDropId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = drop_config_id;
  p_rand_task_reward_config_map = &this->rand_task_reward_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, drop_config_id);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::find(
                                                                                                p_rand_task_reward_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::RandTaskRewardConfig>::key_type *)(v3 + 48));
  v7 = &this->rand_task_reward_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::RandTaskRewardConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      3u,
      "./src/txt_data_manual/RandTaskExcelConfig.cpp",
      "findDropId",
      134);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[34])"rand_task_reward_config_map.find ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    drop_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RandTaskRewardConfig>,false,false> *const)(v3 + 64))->second.drop_vec;
    if ( std::vector<data::RandTaskDropConfig>::empty(drop_vec) )
    {
      result = 0LL;
    }
    else
    {
      idx = (zone_level + 4) / 5;
      if ( idx >= std::vector<data::RandTaskDropConfig>::size(drop_vec) )
      {
        v13 = std::vector<data::RandTaskDropConfig>::back(drop_vec);
        if ( *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v13->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v13->drop_id);
        }
        result = v13->drop_id;
      }
      else
      {
        v12 = std::vector<data::RandTaskDropConfig>::operator[](drop_vec, idx);
        if ( *(_BYTE *)(((unsigned __int64)&v12->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v12->drop_id);
        }
        result = v12->drop_id;
      }
    }
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 156: range 0000000014633410-00000000146337AC
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl RandTaskExcelConfigMgr::findGroupReviseLevel(
        const RandTaskExcelConfigMgr *const this,
        uint32_t zone_level)
{
  uint32_t revise_level; // r14d
  __gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<data::RandTaskLevelConfig>::const_reference v6; // rdx
  char v7; // cl
  char v8; // al
  uint32_t *p_min_zone_level; // rax
  int v10; // edx
  std::vector<data::RandTaskLevelConfig>::const_reference v11; // rdx
  uint32_t *p_revise_level; // rax
  uint32_t result; // eax
  uint32_t zone_levela; // [rsp+4h] [rbp-ACh]
  data::RandTaskLevelConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  const data::RandTaskLevelConfig *config; // [rsp+18h] [rbp-98h]
  char v17[144]; // [rsp+20h] [rbp-90h] BYREF

  zone_levela = zone_level;
  v3 = (__gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::RandTaskLevelConfig*,std::vector<data::RandTaskLevelConfig> > *)v4;
  }
  v3->_M_current = (const data::RandTaskLevelConfig *)1102416563;
  v3[1]._M_current = (const data::RandTaskLevelConfig *)"2 32 8 15 __for_begin:161 64 8 13 __for_end:161";
  v3[2]._M_current = (const data::RandTaskLevelConfig *)RandTaskExcelConfigMgr::findGroupReviseLevel;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( std::vector<data::RandTaskLevelConfig>::empty(&this->rand_task_level_config_vec) )
    goto LABEL_8;
  v6 = std::vector<data::RandTaskLevelConfig>::front(&this->rand_task_level_config_vec);
  v7 = *(_BYTE *)(((unsigned __int64)&v6->min_zone_level >> 3) + 0x7FFF8000);
  LOBYTE(zone_level) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)v6 + 12) & 7) + 3) >= v7 )
    __asan_report_load4(&v6->min_zone_level);
  if ( zone_levela < v6->min_zone_level )
LABEL_8:
    v8 = 1;
  else
    v8 = 0;
  if ( v8 )
  {
    revise_level = 0;
  }
  else
  {
    __for_range = &this->rand_task_level_config_vec;
    if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[4], *(_QWORD *)&zone_level);
    v3[4]._M_current = std::vector<data::RandTaskLevelConfig>::begin(__for_range)._M_current;
    if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[8], *(_QWORD *)&zone_level);
    v3[8]._M_current = std::vector<data::RandTaskLevelConfig>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>(
              v3 + 4,
              v3 + 8) )
      {
        v10 = 1;
        goto LABEL_29;
      }
      config = __gnu_cxx::__normal_iterator<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>::operator*(v3 + 4);
      p_min_zone_level = &config->min_zone_level;
      if ( *(_BYTE *)(((unsigned __int64)p_min_zone_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_min_zone_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_zone_level >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(p_min_zone_level);
      }
      if ( zone_levela >= config->min_zone_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->max_zone_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->max_zone_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->max_zone_level);
        }
        if ( zone_levela <= config->max_zone_level )
          break;
      }
      __gnu_cxx::__normal_iterator<data::RandTaskLevelConfig const*,std::vector<data::RandTaskLevelConfig>>::operator++(v3 + 4);
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->revise_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->revise_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->revise_level);
    }
    revise_level = config->revise_level;
    v10 = 0;
LABEL_29:
    *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
    if ( v10 == 1 )
    {
      v11 = std::vector<data::RandTaskLevelConfig>::back(&this->rand_task_level_config_vec);
      p_revise_level = &v11->revise_level;
      if ( *(_BYTE *)(((unsigned __int64)p_revise_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_revise_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_revise_level >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(p_revise_level);
      }
      revise_level = v11->revise_level;
    }
  }
  result = revise_level;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::RandTaskLevelConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TeamResonanceExcelConfig.cpp

// Line 21: range 000000000CB0C3D2-000000000CB0C47F
bool __cdecl TeamResonanceGroupConfig::isDifferentCondWith(
        const TeamResonanceGroupConfig *const this,
        const TeamResonanceGroupConfig *rhs)
{
  data::TeamResonanceCondType cond_type; // ecx

  if ( std::operator!=<data::ElementType,unsigned int,std::less<data::ElementType>,std::allocator<std::pair<data::ElementType const,unsigned int>>>(
         &this->elem_avatar_count_map,
         &rhs->elem_avatar_count_map) )
  {
    return 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cond_type);
  }
  cond_type = this->cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->cond_type);
  }
  return cond_type != rhs->cond_type;
};

// Line 26: range 000000000CB0C480-000000000CB0C663
int32_t __cdecl TeamResonanceExcelConfigMgr::rewriteConfig(
        TeamResonanceExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = TeamResonanceExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TeamResonanceExcelConfigMgr::rewriteTeamResonanceData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
      "rewriteConfig",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteTeamResonanceData fail");
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

// Line 36: range 000000000CB0C664-000000000CB0C847
int32_t __cdecl TeamResonanceExcelConfigMgr::checkConfig(
        TeamResonanceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = TeamResonanceExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TeamResonanceExcelConfigMgr::checkTeamResonanceData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
      "checkConfig",
      39);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v5,
      (const char (*)[28])"checkTeamResonanceData fail");
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

// Line 46: range 000000000CB0C848-000000000CB0DCD6
int32_t __cdecl TeamResonanceExcelConfigMgr::rewriteTeamResonanceData(
        TeamResonanceExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  uint32_t fire_avatar_count; // r14d
  std::map<data::ElementType,unsigned int>::mapped_type *v7; // rax
  uint32_t *v8; // rdx
  char v9; // cl
  char *v10; // rsi
  uint32_t water_avatar_count; // r14d
  char *v12; // rsi
  std::map<data::ElementType,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  char v15; // cl
  uint32_t grass_avatar_count; // r14d
  std::map<data::ElementType,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  char v19; // cl
  char *v20; // rsi
  uint32_t electric_avatar_count; // r14d
  char *v22; // rsi
  std::map<data::ElementType,unsigned int>::mapped_type *v23; // rax
  uint32_t *v24; // rdx
  char v25; // cl
  uint32_t ice_avatar_count; // r14d
  std::map<data::ElementType,unsigned int>::mapped_type *v27; // rax
  uint32_t *v28; // rdx
  char v29; // cl
  char *v30; // rsi
  uint32_t wind_avatar_count; // r14d
  char *v32; // rsi
  std::map<data::ElementType,unsigned int>::mapped_type *v33; // rax
  uint32_t *v34; // rdx
  char v35; // cl
  uint32_t rock_avatar_count; // r14d
  std::map<data::ElementType,unsigned int>::mapped_type *v37; // rax
  uint32_t *v38; // rdx
  char v39; // cl
  std::map<data::ElementType,unsigned int>::iterator v40; // rsi
  bool v41; // al
  TeamResonanceGroupConfig *v42; // r8
  std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::pointer v43; // rdx
  char v44; // cl
  data::TeamResonanceCondType cond; // ecx
  char v46; // al
  std::unordered_map<unsigned int,TeamResonanceGroupConfig> *p_team_resonance_group_cond_map; // rcx
  const unsigned int *p_team_resonance_group_id; // rsi
  std::unordered_map<unsigned int,TeamResonanceGroupConfig> *v49; // rdx
  bool v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::pointer v56; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::pointer v63; // rax
  const unsigned int *v64; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  unsigned __int64 v71; // rax
  int32_t ret; // [rsp+1Ch] [rbp-304h]
  data::TeamResonanceExcelConfigMap *__for_range; // [rsp+20h] [rbp-300h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>::reference v75; // [rsp+28h] [rbp-2F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamResonanceExcelConfig> >::type *config; // [rsp+38h] [rbp-2E8h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool> >::type *iter; // [rsp+40h] [rbp-2E0h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool> >::type *is_inserted; // [rsp+48h] [rbp-2D8h]
  char v79[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 8 14 __for_begin:49 176 8 12 __for_end:49 208 8 7 iter:60 240 8 "
                        "9 <unknown> 272 8 9 <unknown> 304 16 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 "
                        "<unknown> 528 104 30 team_resonance_group_config:52";
  *(_QWORD *)(v2 + 16) = TeamResonanceExcelConfigMgr::rewriteTeamResonanceData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
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
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862739] = -218103808;
  v4[536862740] = -202116109;
  ret = 0;
  __for_range = &this->team_resonance_excel_config_map;
  if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 144, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::iterator *)(v2 + 144) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,data::TeamResonanceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 144),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false> *)(v2 + 176)) )
  {
    v75 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false> *const)(v2 + 144));
    std::get<0ul,unsigned int const,data::TeamResonanceExcelConfig>(v75);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamResonanceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamResonanceExcelConfig>(v75);
    v5 = ((v2 + 528) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_BYTE *)(v5 + 12) = 0;
    TeamResonanceGroupConfig::TeamResonanceGroupConfig((TeamResonanceGroupConfig *const)(v2 + 528));
    if ( *(_BYTE *)(((unsigned __int64)&config->fire_avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->fire_avatar_count >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->fire_avatar_count);
    }
    fire_avatar_count = config->fire_avatar_count;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32, (((_BYTE)config + 100) & 7u) + 3);
    *(_DWORD *)(v2 + 32) = 1;
    v10 = (char *)(v2 + 32);
    v7 = std::map<data::ElementType,unsigned int>::operator[](
           (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
           (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 32));
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v9 != 0;
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
      __asan_report_store4(v7, v10);
    *v8 = fire_avatar_count;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->water_avatar_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->water_avatar_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->water_avatar_count);
    }
    water_avatar_count = config->water_avatar_count;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v10);
    *(_DWORD *)(v2 + 48) = 2;
    v12 = (char *)(v2 + 48);
    v13 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 48));
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12);
    }
    *v14 = water_avatar_count;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->grass_avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->grass_avatar_count >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->grass_avatar_count);
    }
    grass_avatar_count = config->grass_avatar_count;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, (((_BYTE)config + 108) & 7u) + 3);
    *(_DWORD *)(v2 + 64) = 3;
    v20 = (char *)(v2 + 64);
    v17 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 64));
    v18 = v17;
    v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    LOBYTE(v20) = v19 != 0;
    if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      __asan_report_store4(v17, v20);
    *v18 = grass_avatar_count;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->electric_avatar_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->electric_avatar_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->electric_avatar_count);
    }
    electric_avatar_count = config->electric_avatar_count;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 80, v20);
    *(_DWORD *)(v2 + 80) = 4;
    v22 = (char *)(v2 + 80);
    v23 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 80));
    v24 = v23;
    v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
    {
      LOBYTE(v22) = v25 != 0;
      __asan_report_store4(v23, v22);
    }
    *v24 = electric_avatar_count;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->ice_avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->ice_avatar_count >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->ice_avatar_count);
    }
    ice_avatar_count = config->ice_avatar_count;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 96, (((_BYTE)config + 116) & 7u) + 3);
    *(_DWORD *)(v2 + 96) = 5;
    v30 = (char *)(v2 + 96);
    v27 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 96));
    v28 = v27;
    v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
    LOBYTE(v30) = v29 != 0;
    if ( v29 != 0 && (char)(((unsigned __int8)v27 & 7) + 3) >= v29 )
      __asan_report_store4(v27, v30);
    *v28 = ice_avatar_count;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->wind_avatar_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->wind_avatar_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->wind_avatar_count);
    }
    wind_avatar_count = config->wind_avatar_count;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 112, v30);
    *(_DWORD *)(v2 + 112) = 7;
    v32 = (char *)(v2 + 112);
    v33 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 112));
    v34 = v33;
    v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
    if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
    {
      LOBYTE(v32) = v35 != 0;
      __asan_report_store4(v33, v32);
    }
    *v34 = wind_avatar_count;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->rock_avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->rock_avatar_count >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->rock_avatar_count);
    }
    rock_avatar_count = config->rock_avatar_count;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 128, (((_BYTE)config + 124) & 7u) + 3);
    *(_DWORD *)(v2 + 128) = 8;
    v40._M_node = (std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)(v2 + 128);
    v37 = std::map<data::ElementType,unsigned int>::operator[](
            (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
            (std::map<data::ElementType,unsigned int>::key_type *)(v2 + 128));
    v38 = v37;
    v39 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
    LOBYTE(v40._M_node) = v39 != 0;
    if ( v39 != 0 && (char)(((unsigned __int8)v37 & 7) + 3) >= v39 )
      __asan_report_store4(v37, v40._M_node);
    *v38 = rock_avatar_count;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v40._M_node);
    *(std::map<data::ElementType,unsigned int>::iterator *)(v2 + 208) = std::map<data::ElementType,unsigned int>::begin((std::map<data::ElementType,unsigned int> *const)(v2 + 528));
    while ( 1 )
    {
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v40._M_node);
      *(std::map<data::ElementType,unsigned int>::iterator *)(v2 + 240) = std::map<data::ElementType,unsigned int>::end((std::map<data::ElementType,unsigned int> *const)(v2 + 528));
      v40._M_node = (std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)(v2 + 240);
      v41 = std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v2 + 208),
              (const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v2 + 240));
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( !v41 )
        break;
      v43 = std::_Rb_tree_iterator<std::pair<data::ElementType const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v2 + 208));
      v44 = *(_BYTE *)(((unsigned __int64)&v43->second >> 3) + 0x7FFF8000);
      LOBYTE(v40._M_node) = v44 != 0;
      if ( v44 != 0 && (char)((((_BYTE)v43 + 4) & 7) + 3) >= v44 )
        __asan_report_load4(&v43->second);
      if ( v43->second )
      {
        std::_Rb_tree_iterator<std::pair<data::ElementType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v2 + 208));
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 208, v40._M_node);
        v40._M_node = *(std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr *)(v2 + 208);
        *(std::map<data::ElementType,unsigned int>::iterator *)(v2 + 208) = std::map<data::ElementType,unsigned int>::erase[abi:cxx11](
                                                                              (std::map<data::ElementType,unsigned int> *const)(v2 + 528),
                                                                              v40);
      }
    }
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->cond >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->cond >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->cond);
    }
    cond = config->cond;
    v46 = *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000);
    if ( v46 != 0 && v46 <= 3 )
    {
      LOBYTE(v40._M_node) = v46 != 0;
      __asan_report_store4(v2 + 576, v40._M_node);
    }
    *(_DWORD *)(v2 + 576) = cond;
    *(_WORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
    p_team_resonance_group_cond_map = &this->team_resonance_group_cond_map_;
    p_team_resonance_group_id = &config->team_resonance_group_id;
    if ( *(_WORD *)(((v2 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool> *)(v2 + 304) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::emplace<unsigned int const&,TeamResonanceGroupConfig&>(p_team_resonance_group_cond_map, p_team_resonance_group_id, (TeamResonanceGroupConfig *)(v2 + 528), (const unsigned int *)p_team_resonance_group_cond_map, v42);
    iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool> *)(v2 + 304));
    is_inserted = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>,bool> *)(v2 + 304));
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
    v49 = &this->team_resonance_group_cond_map_;
    if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 272, p_team_resonance_group_id);
    *(std::unordered_map<unsigned int,TeamResonanceGroupConfig>::iterator *)(v2 + 272) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::end(v49);
    v50 = std::__detail::operator==<std::pair<unsigned int const,TeamResonanceGroupConfig>,false>(
            iter,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TeamResonanceGroupConfig>,false> *)(v2 + 272));
    *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
    if ( v50 )
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
        "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
        "rewriteTeamResonanceData",
        77);
      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 336),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v52 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v51, (const char (*)[12])byte_1A122C20);
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &config->team_resonance_id);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v53, (const char (*)[13])byte_1A122C60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      v54 = (unsigned __int8)is_inserted & 7;
      v55 = (*(_BYTE *)(((unsigned __int64)is_inserted >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v54 >= *(_BYTE *)(((unsigned __int64)is_inserted >> 3) + 0x7FFF8000));
      if ( (_BYTE)v55 )
        __asan_report_load1(is_inserted, v54, v55);
      if ( !*is_inserted )
      {
        v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator->(iter);
        if ( TeamResonanceGroupConfig::isDifferentCondWith(
               (const TeamResonanceGroupConfig *const)(v2 + 528),
               &v56->second) )
        {
          *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 112 + 31) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
            "rewriteTeamResonanceData",
            83);
          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 400),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v59 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v58, (const char (*)[15])byte_1A122CA0);
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v59,
                  &config->team_resonance_group_id);
          v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v60, (const char (*)[13])byte_1A122CE0);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, &config->team_resonance_id);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v62, (const char (*)[17])byte_1A122D20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
          *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator->(iter);
      v65 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &v63->second.total_promote_level_id_map,
              &config->min_total_promote_level,
              &config->team_resonance_id,
              &config->min_total_promote_level,
              v64);
      if ( !v65.second )
      {
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 79) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
          "rewriteTeamResonanceData",
          90);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v66, (const char (*)[15])byte_1A122CA0);
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                &config->team_resonance_group_id);
        v69 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v68, (const char (*)[13])byte_1A122CE0);
        v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &config->team_resonance_id);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v70, (const char (*)[35])byte_1A122D60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
        *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    TeamResonanceGroupConfig::~TeamResonanceGroupConfig((TeamResonanceGroupConfig *const)(v2 + 528));
    v71 = ((v2 + 528) >> 3) + 2147450880;
    *(_DWORD *)v71 = -117901064;
    *(_DWORD *)(v71 + 4) = -117901064;
    *(_DWORD *)(v71 + 8) = -117901064;
    *(_BYTE *)(v71 + 12) = -8;
    *(_WORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamResonanceExcelConfig>,false,false> *const)(v2 + 144));
  }
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return ret;
};

// Line 99: range 000000000CB0DCD8-000000000CB0E1EF
int32_t __cdecl TeamResonanceExcelConfigMgr::checkTeamResonanceData(
        const TeamResonanceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-148h]
  uint32_t total_avatar_count; // [rsp+1Ch] [rbp-144h]
  std::unordered_map<unsigned int,TeamResonanceGroupConfig> *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::reference v14; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,TeamResonanceGroupConfig> >::type *team_resonance_group_id; // [rsp+30h] [rbp-130h]
  const std::tuple_element<1,std::pair<unsigned int const,TeamResonanceGroupConfig> >::type *__for_range_0; // [rsp+40h] [rbp-120h]
  std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::reference v17; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *avatar_count; // [rsp+58h] [rbp-108h]
  char v19[256]; // [rsp+60h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:101 64 8 13 __for_end:101 96 8 15 __for_begin:104 128 8 13 __for_end:104 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TeamResonanceExcelConfigMgr::checkTeamResonanceData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->team_resonance_group_cond_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,TeamResonanceGroupConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,TeamResonanceGroupConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,TeamResonanceGroupConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TeamResonanceGroupConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TeamResonanceGroupConfig>,false> *)(v2 + 64)) )
      break;
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false> *const)(v2 + 32));
    team_resonance_group_id = std::get<0ul,unsigned int const,TeamResonanceGroupConfig>(v14);
    total_avatar_count = 0;
    __for_range_0 = std::get<1ul,unsigned int const,TeamResonanceGroupConfig>(v14);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::map<data::ElementType,unsigned int>::const_iterator *)(v2 + 96) = std::map<data::ElementType,unsigned int>::begin(&__for_range_0->elem_avatar_count_map);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::map<data::ElementType,unsigned int>::const_iterator *)(v2 + 128) = std::map<data::ElementType,unsigned int>::end(&__for_range_0->elem_avatar_count_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v2 + 128)) )
    {
      v17 = std::_Rb_tree_const_iterator<std::pair<data::ElementType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v2 + 96));
      std::get<0ul,data::ElementType const,unsigned int>(v17);
      v6 = (std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *)std::get<1ul,data::ElementType const,unsigned int>(v17);
      avatar_count = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      total_avatar_count += *avatar_count;
      std::_Rb_tree_const_iterator<std::pair<data::ElementType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( total_avatar_count > 4 )
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
        "./src/txt_data_manual/TeamResonanceExcelConfig.cpp",
        "checkTeamResonanceData",
        110);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])byte_1A122E80);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, team_resonance_group_id);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])byte_1A122EC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v19 == (char *)v2 )
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

// Line 120: range 000000000CB0E1F0-000000000CB0EE55
std::vector<unsigned int> *__fastcall TeamResonanceExcelConfigMgr::getSatisfiedTeamResonances(
        std::vector<unsigned int> *retstr,
        const TeamResonanceExcelConfigMgr *const this,
        const std::vector<data::ElementType> *elem_vec,
        uint32_t total_promote_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rsi
  data::ElementType *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::map<data::ElementType,unsigned int>::mapped_type *v12; // rax
  char *v13; // rsi
  char *v14; // rsi
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *v15; // rax
  const std::map<unsigned int,unsigned int> *p_total_promote_level_id_map; // rdx
  const std::map<unsigned int,unsigned int> *v17; // rdx
  bool v18; // al
  const std::map<unsigned int,unsigned int> *v19; // rdx
  bool v20; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v21; // rax
  bool is_satisfied; // [rsp+2Fh] [rbp-291h]
  uint32_t total_elem_count; // [rsp+30h] [rbp-290h]
  uint32_t avatar_count; // [rsp+34h] [rbp-28Ch]
  std::unordered_map<unsigned int,TeamResonanceGroupConfig> *__for_range_0; // [rsp+40h] [rbp-280h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::reference v30; // [rsp+48h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,TeamResonanceGroupConfig> >::type *team_resonance_group_config; // [rsp+58h] [rbp-268h]
  std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::reference v32; // [rsp+68h] [rbp-258h]
  std::tuple_element<0,std::pair<const data::ElementType,unsigned int> >::type *elem_type; // [rsp+70h] [rbp-250h]
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *min_avatar_count; // [rsp+78h] [rbp-248h]
  std::map<data::ElementType,unsigned int> *__for_range_2; // [rsp+80h] [rbp-240h]
  std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::reference v36; // [rsp+88h] [rbp-238h]
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *avatar_count_0; // [rsp+98h] [rbp-228h]
  char v38[544]; // [rsp+A0h] [rbp-220h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 48 4 13 elem_type:126 64 4 23 total_promote_level:119 80 8 15 __for_begin:126 112 8 13 __for_"
                        "end:126 144 8 15 __for_begin:141 176 8 13 __for_end:141 208 8 15 __for_begin:146 240 8 13 __for_"
                        "end:146 272 8 15 __for_begin:164 304 8 13 __for_end:164 336 8 8 iter:182 368 8 9 <unknown> 400 8"
                        " 9 <unknown> 432 48 25 elem_avatar_count_map:125";
  *(_QWORD *)(v4 + 16) = TeamResonanceExcelConfigMgr::getSatisfiedTeamResonances;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
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
  v6[536862728] = -234881024;
  v6[536862729] = 62194;
  v6[536862729] = -234881024;
  v6[536862730] = 62194;
  v6[536862730] = -234881024;
  v6[536862731] = 62194;
  v6[536862731] = -234881024;
  v6[536862732] = 62194;
  v6[536862732] = -234881024;
  v6[536862733] = 62194;
  v6[536862735] = -202116109;
  *(_DWORD *)(v4 + 64) = total_promote_level;
  total_elem_count = 0;
  std::vector<unsigned int>::vector(retstr);
  std::map<data::ElementType,unsigned int>::map((std::map<data::ElementType,unsigned int> *const)(v4 + 432));
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 80, this);
  *(std::vector<data::ElementType>::const_iterator *)(v4 + 80) = std::vector<data::ElementType>::begin(elem_vec);
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 112, this);
  *(std::vector<data::ElementType>::const_iterator *)(v4 + 112) = std::vector<data::ElementType>::end(elem_vec);
  while ( 1 )
  {
    v7 = (char *)(v4 + 112);
    if ( !__gnu_cxx::operator!=<data::ElementType const*,std::vector<data::ElementType>>(
            (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v4 + 80),
            (const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *)(v4 + 112)) )
      break;
    v8 = (data::ElementType *)__gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v4 + 80));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    v11 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v4 + 48, v7);
    }
    *(_DWORD *)(v4 + 48) = v10;
    if ( *(_DWORD *)(v4 + 48) )
    {
      v12 = std::map<data::ElementType,unsigned int>::operator[](
              (std::map<data::ElementType,unsigned int> *const)(v4 + 432),
              (const std::map<data::ElementType,unsigned int>::key_type *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      ++*v12;
      ++total_elem_count;
    }
    __gnu_cxx::__normal_iterator<data::ElementType const*,std::vector<data::ElementType>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementType*,std::vector<data::ElementType> > *const)(v4 + 80));
  }
  *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( total_elem_count > 3 )
  {
    __for_range_0 = &this->team_resonance_group_cond_map_;
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 144, v7);
    *(std::unordered_map<unsigned int,TeamResonanceGroupConfig>::const_iterator *)(v4 + 144) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::begin(__for_range_0);
    *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 176, v7);
    *(std::unordered_map<unsigned int,TeamResonanceGroupConfig>::const_iterator *)(v4 + 176) = std::unordered_map<unsigned int,TeamResonanceGroupConfig>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v4 + 176);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,TeamResonanceGroupConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TeamResonanceGroupConfig>,false> *)(v4 + 144),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TeamResonanceGroupConfig>,false> *)(v4 + 176)) )
        break;
      v30 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false> *const)(v4 + 144));
      std::get<0ul,unsigned int const,TeamResonanceGroupConfig>(v30);
      team_resonance_group_config = (std::tuple_element<1,const std::pair<unsigned int const,TeamResonanceGroupConfig> >::type *)std::get<1ul,unsigned int const,TeamResonanceGroupConfig>(v30);
      is_satisfied = 1;
      *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 208, v13);
      *(std::map<data::ElementType,unsigned int>::const_iterator *)(v4 + 208) = std::map<data::ElementType,unsigned int>::begin(&team_resonance_group_config->elem_avatar_count_map);
      *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 240, v13);
      *(std::map<data::ElementType,unsigned int>::const_iterator *)(v4 + 240) = std::map<data::ElementType,unsigned int>::end(&team_resonance_group_config->elem_avatar_count_map);
      while ( 1 )
      {
        v14 = (char *)(v4 + 240);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v4 + 208),
                (const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v4 + 240)) )
          break;
        v32 = std::_Rb_tree_const_iterator<std::pair<data::ElementType const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v4 + 208));
        elem_type = std::get<0ul,data::ElementType const,unsigned int>(v32);
        min_avatar_count = (std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *)std::get<1ul,data::ElementType const,unsigned int>(v32);
        avatar_count = common::tools::MiscUtils::findMapWithDefaultValue<std::map<data::ElementType,unsigned int>>(
                         (const std::map<data::ElementType,unsigned int> *)(v4 + 432),
                         elem_type,
                         0);
        v14 = (char *)(((unsigned __int8)min_avatar_count & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)min_avatar_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)min_avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)min_avatar_count >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(min_avatar_count);
        }
        if ( avatar_count < *min_avatar_count )
        {
          is_satisfied = 0;
          break;
        }
        std::_Rb_tree_const_iterator<std::pair<data::ElementType const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v4 + 208));
      }
      *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( is_satisfied )
      {
        if ( *(_BYTE *)(((unsigned __int64)&team_resonance_group_config->cond_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&team_resonance_group_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&team_resonance_group_config->cond_type);
        }
        if ( team_resonance_group_config->cond_type == TEAM_RESONANCE_COND_ALL_DIFFERENT )
        {
          __for_range_2 = (std::map<data::ElementType,unsigned int> *)(v4 + 432);
          *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 272, v14);
          *(std::map<data::ElementType,unsigned int>::iterator *)(v4 + 272) = std::map<data::ElementType,unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 304, v14);
          *(std::map<data::ElementType,unsigned int>::iterator *)(v4 + 304) = std::map<data::ElementType,unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            v14 = (char *)(v4 + 304);
            if ( !std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v4 + 272),
                    (const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> >::_Self *)(v4 + 304)) )
              break;
            v36 = std::_Rb_tree_iterator<std::pair<data::ElementType const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v4 + 272));
            std::get<0ul,data::ElementType const,unsigned int>(v36);
            v15 = (std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *)std::get<1ul,data::ElementType const,unsigned int>(v36);
            avatar_count_0 = v15;
            v14 = (char *)(((unsigned __int8)v15 & 7u) + 3);
            if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v15);
            }
            if ( *avatar_count_0 > 1 )
            {
              is_satisfied = 0;
              break;
            }
            std::_Rb_tree_iterator<std::pair<data::ElementType const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const data::ElementType,unsigned int> > *const)(v4 + 272));
          }
          *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000) = -8;
        }
        if ( is_satisfied )
        {
          *(_BYTE *)(((v4 + 336) >> 3) + 0x7FFF8000) = 0;
          p_total_promote_level_id_map = &team_resonance_group_config->total_promote_level_id_map;
          if ( *(_BYTE *)(((v4 + 336) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 336, v14);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 336) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                                 p_total_promote_level_id_map,
                                                                                 (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
          *(_BYTE *)(((v4 + 368) >> 3) + 0x7FFF8000) = 0;
          v17 = &team_resonance_group_config->total_promote_level_id_map;
          if ( *(_BYTE *)(((v4 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 368, v4 + 64);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 368) = std::map<unsigned int,unsigned int>::begin(v17);
          v18 = std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 336),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 368));
          *(_BYTE *)(((v4 + 368) >> 3) + 0x7FFF8000) = -8;
          if ( v18 )
          {
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 336));
            *(_BYTE *)(((v4 + 400) >> 3) + 0x7FFF8000) = 0;
            v19 = &team_resonance_group_config->total_promote_level_id_map;
            if ( *(_BYTE *)(((v4 + 400) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 400, v4 + 368);
            *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 400) = std::map<unsigned int,unsigned int>::end(v19);
            v20 = std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 336),
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 400));
            *(_BYTE *)(((v4 + 400) >> 3) + 0x7FFF8000) = -8;
            if ( v20 )
            {
              v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 336));
              std::vector<unsigned int>::push_back(retstr, &v21->second);
            }
          }
        }
      }
      *(_BYTE *)(((v4 + 336) >> 3) + 0x7FFF8000) = -8;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,TeamResonanceGroupConfig>,false,false> *const)(v4 + 144));
    }
    *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) = -8;
  }
  std::map<data::ElementType,unsigned int>::~map((std::map<data::ElementType,unsigned int> *const)(v4 + 432));
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
  return retstr;
};

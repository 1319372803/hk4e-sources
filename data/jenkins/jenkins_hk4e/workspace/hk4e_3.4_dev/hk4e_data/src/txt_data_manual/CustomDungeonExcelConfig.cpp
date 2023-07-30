// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CustomDungeonExcelConfig.cpp

// Line 17: range 0000000013A6CC9C-0000000013A6CCAE
int32_t __cdecl CustomDungeonExcelConfigMgr::checkConfig(
        CustomDungeonExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 22: range 0000000013A6CCB0-0000000013A6CED8
int32_t __cdecl CustomDungeonExcelConfigMgr::rewriteConfig(
        CustomDungeonExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( CustomDungeonExcelConfigMgr::rewriteCompnentBrickConfig(this, txt_config_mgr)
    || CustomDungeonExcelConfigMgr::rewriteCompnentLimitConfig(this, txt_config_mgr)
    || CustomDungeonExcelConfigMgr::rewriteGroupConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CustomDungeonExcelConfig.cpp",
      "rewriteConfig",
      27);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v6,
      (const char (*)[36])"rewrite CustomDungeon Config failed");
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

// Line 34: range 0000000013A6CEDA-0000000013A6D4E9
int32_t __cdecl CustomDungeonExcelConfigMgr::rewriteGroupConfig(
        CustomDungeonExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::__enable_if_t_28 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  int32_t result; // eax
  data::CustomLevelGroupConfigMap *__for_range; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false,false>::reference v20; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,data::CustomLevelGroupConfig> >::type *group_id; // [rsp+38h] [rbp-168h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-158h]
  char v23[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 dungeon_id:37 64 8 14 __for_begin:35 96 8 12 __for_end:35 128 8 14 __for_begin:37 160 "
                        "8 12 __for_end:37 192 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CustomDungeonExcelConfigMgr::rewriteGroupConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->custom_level_group_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomLevelGroupConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CustomLevelGroupConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CustomLevelGroupConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CustomLevelGroupConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false> *)(v3 + 96)) )
      break;
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false,false> *const)(v3 + 64));
    group_id = std::get<0ul,unsigned int const,data::CustomLevelGroupConfig>(v20);
    __for_range_0 = &std::get<1ul,unsigned int const,data::CustomLevelGroupConfig>(v20)->dungeon_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v16 = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v7) = v11 != 0;
      if ( v11 != 0 && v11 <= 3 )
        __asan_report_store4(v3 + 48, v7);
      *(_DWORD *)(v3 + 48) = v10;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 192) = std::make_pair<unsigned int &,unsigned int const&>(
                                                              (unsigned int *)(v3 + 48),
                                                              group_id);
      v12 = std::map<unsigned int,unsigned int>::insert<std::pair<unsigned int,unsigned int>>(
              &this->dungeon_group_map,
              (std::pair<unsigned int,unsigned int> *)(v3 + 192));
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( !v12.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      "./src/txt_data_manual/CustomDungeonExcelConfig.cpp",
      "rewriteGroupConfig",
      41);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v13, (const char (*)[24])byte_1AC633C0);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])byte_1AC63400);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_28:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_32;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelGroupConfig>,false,false> *const)(v3 + 64));
  }
  v17 = 1;
LABEL_32:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 51: range 0000000013A6D4EA-0000000013A6D798
int32_t __cdecl CustomDungeonExcelConfigMgr::rewriteCompnentBrickConfig(
        CustomDungeonExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BrickType *p_brick_type; // rax
  int32_t result; // eax
  data::CustomLevelComponentConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::CustomLevelComponentConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CustomLevelComponentConfig> >::type *brick_config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false>::__node_type *)"2 32 8 14 __for_begin:52 64 8 12 __for_end:52";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false>::__node_type *)CustomDungeonExcelConfigMgr::rewriteCompnentBrickConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->custom_level_component_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::CustomLevelComponentConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::CustomLevelComponentConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::CustomLevelComponentConfig>(v8);
    brick_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CustomLevelComponentConfig> >::type *)std::get<1ul,unsigned int const,data::CustomLevelComponentConfig>(v8);
    p_brick_type = &brick_config->brick_type;
    if ( *(_BYTE *)(((unsigned __int64)p_brick_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_brick_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_brick_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_brick_type);
    }
    if ( brick_config->brick_type == BRICK_TYPE_COIN )
    {
      std::set<unsigned int>::insert(&this->coin_brick_set, id);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&brick_config->brick_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)brick_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&brick_config->brick_type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&brick_config->brick_type);
      }
      if ( brick_config->brick_type == BRICK_TYPE_FINISH )
        std::set<unsigned int>::insert(&this->finish_brick_set, id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelComponentConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 68: range 0000000013A6D79A-0000000013A6DA03
int32_t __cdecl CustomDungeonExcelConfigMgr::rewriteCompnentLimitConfig(
        CustomDungeonExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  __gnu_cxx::__normal_iterator<data::CustomLevelComponentLimitConfig*,std::vector<data::CustomLevelComponentLimitConfig> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t max_count; // r14d
  std::map<unsigned int,unsigned int> *v6; // rax
  uint32_t *p_component_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  int32_t result; // eax
  data::CustomLevelComponentLimitConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  const data::CustomLevelComponentLimitConfig *limit_config; // [rsp+18h] [rbp-98h]
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<data::CustomLevelComponentLimitConfig*,std::vector<data::CustomLevelComponentLimitConfig> > *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<data::CustomLevelComponentLimitConfig*,std::vector<data::CustomLevelComponentLimitConfig> > *)v3;
  }
  v2->_M_current = (data::CustomLevelComponentLimitConfig *)1102416563;
  v2[1]._M_current = (data::CustomLevelComponentLimitConfig *)"2 32 8 14 __for_begin:69 64 8 12 __for_end:69";
  v2[2]._M_current = (data::CustomLevelComponentLimitConfig *)CustomDungeonExcelConfigMgr::rewriteCompnentLimitConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->custom_level_component_limit_config_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_current = std::vector<data::CustomLevelComponentLimitConfig>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_current = std::vector<data::CustomLevelComponentLimitConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::CustomLevelComponentLimitConfig *,std::vector<data::CustomLevelComponentLimitConfig>>(
            v2 + 4,
            v2 + 8) )
  {
    limit_config = __gnu_cxx::__normal_iterator<data::CustomLevelComponentLimitConfig *,std::vector<data::CustomLevelComponentLimitConfig>>::operator*(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&limit_config->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&limit_config->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&limit_config->max_count);
    }
    max_count = limit_config->max_count;
    v6 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
           &this->limit_group_map,
           &limit_config->limit_id);
    p_component_id = &limit_config->component_id;
    v8 = std::map<unsigned int,unsigned int>::operator[](v6, &limit_config->component_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(p_component_id) = v10 != 0;
      __asan_report_store4(v8, p_component_id);
    }
    *v9 = max_count;
    __gnu_cxx::__normal_iterator<data::CustomLevelComponentLimitConfig *,std::vector<data::CustomLevelComponentLimitConfig>>::operator++(v2 + 4);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (data::CustomLevelComponentLimitConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 77: range 0000000013A6DA04-0000000013A6DADB
bool __fastcall CustomDungeonExcelConfigMgr::isCoinBrick(
        const CustomDungeonExcelConfigMgr *const this,
        uint32_t brick_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 brick_id:76";
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::isCoinBrick;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = brick_id;
  result = std::set<unsigned int>::count(&this->coin_brick_set, (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 82: range 0000000013A6DADC-0000000013A6DBB3
bool __fastcall CustomDungeonExcelConfigMgr::isFinishBrick(
        const CustomDungeonExcelConfigMgr *const this,
        uint32_t brick_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 brick_id:81";
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::isFinishBrick;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = brick_id;
  result = std::set<unsigned int>::count(&this->finish_brick_set, (const std::set<unsigned int>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 87: range 0000000013A6DBB4-0000000013A6DCAF
bool __fastcall CustomDungeonExcelConfigMgr::isGroupContainsDungeon(
        const CustomDungeonExcelConfigMgr *const this,
        uint32_t group_id,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  const data::CustomLevelGroupConfig *dungeon_group_config_ptr; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 dungeon_id:86";
  *(_QWORD *)(v3 + 16) = CustomDungeonExcelConfigMgr::isGroupContainsDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  dungeon_group_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelGroupConfig(this, group_id);
  if ( dungeon_group_config_ptr )
    result = common::tools::MiscUtils::isContains<unsigned int>(
               &dungeon_group_config_ptr->dungeon_list,
               (const unsigned int *)(v3 + 32));
  else
    result = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 97: range 0000000013A6DCB0-0000000013A6DDAB
bool __fastcall CustomDungeonExcelConfigMgr::isGroupContainsOfficialDungeon(
        const CustomDungeonExcelConfigMgr *const this,
        uint32_t group_id,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool result; // al
  const data::CustomLevelGroupConfig *dungeon_group_config_ptr; // [rsp+18h] [rbp-68h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 dungeon_id:96";
  *(_QWORD *)(v3 + 16) = CustomDungeonExcelConfigMgr::isGroupContainsOfficialDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  dungeon_group_config_ptr = data::CustomLevelExcelConfigMgrBase::findCustomLevelGroupConfig(this, group_id);
  if ( dungeon_group_config_ptr )
    result = common::tools::MiscUtils::isContains<unsigned int>(
               &dungeon_group_config_ptr->activity_dungeon_list,
               (const unsigned int *)(v3 + 32));
  else
    result = 0;
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 107: range 0000000013A6DDAC-0000000013A6DFC9
const std::map<unsigned int,unsigned int> *__fastcall CustomDungeonExcelConfigMgr::getLimitConfig(
        const CustomDungeonExcelConfigMgr *const this,
        const std::map<unsigned int,unsigned int> *limit_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_limit_group_map; // rdx
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 limit_id:106 64 8 8 iter:109 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::getLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)limit_id;
  if ( !(_BYTE)`guard variable for'CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)::empty_map
    && __cxa_guard_acquire(&`guard variable for'CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)::empty_map) )
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)&CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)const::empty_map);
    __cxa_guard_release(&`guard variable for'CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)::empty_map);
    limit_id = &CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)const::empty_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<unsigned int,unsigned int>::~map,
      (void *)&CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)const::empty_map,
      &_dso_handle);
  }
  p_limit_group_map = &this->limit_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, limit_id);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_limit_group_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->limit_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &CustomDungeonExcelConfigMgr::getLimitConfig(unsigned int)const::empty_map;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 64))->second;
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

// Line 118: range 0000000013A6DFCA-0000000013A6E1C5
__int64 __fastcall CustomDungeonExcelConfigMgr::getGroupIdByDungeonId(
        const CustomDungeonExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_dungeon_group_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:117 64 8 8 iter:119 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::getGroupIdByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_group_map = &this->dungeon_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_dungeon_group_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
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

// Line 128: range 0000000013A6E1C6-0000000013A6E36E
_BOOL8 __fastcall CustomDungeonExcelConfigMgr::isValidTag(
        const CustomDungeonExcelConfigMgr *const this,
        __int64 tag_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::CustomLevelTagConfigMap *p_custom_level_tag_config_map; // rdx
  data::CustomLevelTagConfigMap *v6; // rdx
  _BOOL8 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 tag_id:127 64 8 8 iter:129 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CustomDungeonExcelConfigMgr::isValidTag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = tag_id;
  p_custom_level_tag_config_map = &this->custom_level_tag_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, tag_id);
  *(std::unordered_map<unsigned int,data::CustomLevelTagConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::CustomLevelTagConfig>::find(
                                                                                                p_custom_level_tag_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::CustomLevelTagConfig>::key_type *)(v2 + 48));
  v6 = &this->custom_level_tag_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::CustomLevelTagConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CustomLevelTagConfig>::end(v6);
  result = !std::__detail::operator==<std::pair<unsigned int const,data::CustomLevelTagConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelTagConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CustomLevelTagConfig>,false> *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MatchExcelConfig.cpp

// Line 18: range 00000000145E78F0-00000000145E79CC
MatchNewRuleConfig __cdecl MatchNewRuleConfig::fromMatchNewRuleExcelConfig(const data::MatchNewRuleExcelConfig *config)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // [rsp+24h] [rbp-Ch]
  MatchNewRuleConfig result; // 0:rax.9

  if ( *(_BYTE *)(((unsigned __int64)&config->player_level_boundary >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->player_level_boundary >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&config->player_level_boundary);
  }
  LODWORD(v3) = config->player_level_boundary;
  if ( *(_BYTE *)(((unsigned __int64)&config->time_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->time_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->time_boundary);
  }
  HIDWORD(v3) = config->time_boundary;
  v1 = ((_BYTE)config + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&config->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&config->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_load1(&config->is_enable, v1, v2);
  *(_QWORD *)&result.player_level_boundary = v3;
  result.is_enable = config->is_enable;
  return result;
};

// Line 23: range 00000000145E79CE-00000000145E7AAA
MatchNewRuleConfig __cdecl MatchNewRuleConfig::fromMatchNewRuleSpecifiedExcelConfig(
        const data::MatchNewRuleSpecifiedExcelConfig *config)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // [rsp+24h] [rbp-Ch]
  MatchNewRuleConfig result; // 0:rax.9

  if ( *(_BYTE *)(((unsigned __int64)&config->player_level_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->player_level_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->player_level_boundary);
  }
  LODWORD(v3) = config->player_level_boundary;
  if ( *(_BYTE *)(((unsigned __int64)&config->time_boundary >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->time_boundary >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->time_boundary);
  }
  HIDWORD(v3) = config->time_boundary;
  v1 = ((_BYTE)config + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&config->is_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&config->is_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_load1(&config->is_enable, v1, v2);
  *(_QWORD *)&result.player_level_boundary = v3;
  result.is_enable = config->is_enable;
  return result;
};

// Line 28: range 00000000145E7AAC-00000000145E7DA8
int32_t __cdecl MatchExcelConfigMgr::rewriteConfig(MatchExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  char v6[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MatchExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( MatchExcelConfigMgr::rewriteMatchPunishConfig(this) )
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
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "rewriteConfig",
      31);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[35])"rewrite match punish config failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( MatchExcelConfigMgr::rewriteMatchNewRuleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "rewriteConfig",
      36);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[34])"rewrite MatchNewRuleConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 43: range 00000000145E7DAA-00000000145E801E
int32_t __cdecl MatchExcelConfigMgr::rewriteMatchPunishConfig(MatchExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_punish_time; // rax
  uint32_t punish_time; // ecx
  int32_t result; // eax
  data::MatchPunishExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::MatchPunishExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:44 64 8 12 __for_end:44";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>::__node_type *)MatchExcelConfigMgr::rewriteMatchPunishConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->match_punish_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::MatchPunishExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::MatchPunishExcelConfig>(__in);
    p_punish_time = &config->punish_time;
    if ( *(_BYTE *)(((unsigned __int64)p_punish_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_punish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_punish_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_punish_time);
    }
    punish_time = config->punish_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_punish_time);
    }
    if ( punish_time > this->max_punish_time )
      this->max_punish_time = config->punish_time;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 55: range 00000000145E8020-00000000145E885F
int32_t __cdecl MatchExcelConfigMgr::rewriteMatchNewRuleConfig(
        MatchExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MatchExcelConfigMgr *v6; // rcx
  const unsigned int *v7; // rcx
  MatchNewRuleConfig *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,MatchNewRuleConfig>,false,false>,bool> matched; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  uint32_t limit_level; // ecx
  const unsigned int *v14; // rcx
  MatchNewRuleConfig *v15; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,MatchNewRuleConfig>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  data::DungeonExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::reference v21; // [rsp+28h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,data::DungeonExcelConfig> >::type *dungeon_id; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DungeonExcelConfig> >::type *dungeon_config; // [rsp+38h] [rbp-168h]
  const data::MatchNewRuleSpecifiedExcelConfig *specified_config_ptr; // [rsp+40h] [rbp-160h]
  const data::MatchNewRuleExcelConfig *config_ptr; // [rsp+48h] [rbp-158h]
  char v26[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 14 __for_begin:56 64 8 12 __for_end:56 96 12 9 <unknown> 128 12 9 <unknown> 160 32 9 <unk"
                        "nown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MatchExcelConfigMgr::rewriteMatchNewRuleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &txt_config_mgr->dungeon_config_mgr.dungeon_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DungeonExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DungeonExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DungeonExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DungeonExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_38;
    }
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v3 + 32));
    dungeon_id = std::get<0ul,unsigned int const,data::DungeonExcelConfig>(v21);
    dungeon_config = (std::tuple_element<1,const std::pair<unsigned int const,data::DungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DungeonExcelConfig>(v21);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->sub_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config->sub_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config->sub_type);
    }
    if ( dungeon_config->sub_type == DUNGEON_SUB_NONE )
      goto LABEL_36;
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    specified_config_ptr = data::MatchExcelConfigMgrBase::findMatchNewRuleSpecifiedExcelConfig(v6, *dungeon_id);
    if ( !specified_config_ptr )
      break;
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1024;
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 107) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 107) & 7) >= *(_BYTE *)(((v3 + 107) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 12LL);
    }
    *(MatchNewRuleConfig *)(v3 + 96) = MatchNewRuleConfig::fromMatchNewRuleSpecifiedExcelConfig(specified_config_ptr);
    matched = std::unordered_map<unsigned int,MatchNewRuleConfig>::emplace<unsigned int const&,MatchNewRuleConfig>(
                &this->dungeon_id_match_new_rule_config_map_,
                dungeon_id,
                (MatchNewRuleConfig *)(v3 + 96),
                v7,
                v8);
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( !matched.second )
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
        "./src/txt_data_manual/MatchExcelConfig.cpp",
        "rewriteMatchNewRuleConfig",
        69);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v10, (const char (*)[21])byte_1ADBA1A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v12 = 0;
      goto LABEL_38;
    }
LABEL_36:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DungeonExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config->sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config->sub_type);
  }
  config_ptr = MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType(this, dungeon_config->sub_type);
  if ( !config_ptr )
    goto LABEL_36;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config->limit_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config->limit_level >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_config->limit_level);
  }
  limit_level = dungeon_config->limit_level;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->min_level);
  }
  if ( limit_level < config_ptr->min_level )
    goto LABEL_36;
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1024;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 139) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 117) & 7) >= *(_BYTE *)(((v3 + 139) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 12LL);
  }
  *(MatchNewRuleConfig *)(v3 + 128) = MatchNewRuleConfig::fromMatchNewRuleExcelConfig(config_ptr);
  v16 = std::unordered_map<unsigned int,MatchNewRuleConfig>::emplace<unsigned int const&,MatchNewRuleConfig>(
          &this->dungeon_id_match_new_rule_config_map_,
          dungeon_id,
          (MatchNewRuleConfig *)(v3 + 128),
          v14,
          v15);
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
  if ( v16.second )
    goto LABEL_36;
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
    "./src/txt_data_manual/MatchExcelConfig.cpp",
    "rewriteMatchNewRuleConfig",
    83);
  v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v17, (const char (*)[21])byte_1ADBA1A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v12 = 0;
LABEL_38:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 92: range 00000000145E8860-00000000145E8CD5
int32_t __cdecl MatchExcelConfigMgr::checkConfig(MatchExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)MatchExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( MatchExcelConfigMgr::checkMatchLimitConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "checkConfig",
      95);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v5,
      (const char (*)[32])"check match limit config failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( MatchExcelConfigMgr::checkMatchNewRuleExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "checkConfig",
      100);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"check MatchNewRuleExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( MatchExcelConfigMgr::checkMatchNewRuleSpecifiedExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "checkConfig",
      105);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v8,
      (const char (*)[46])"check MatchNewRuleSpecifiedExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 112: range 00000000145E8CD6-00000000145E925C
int32_t __cdecl MatchExcelConfigMgr::checkMatchLimitConfig(
        const MatchExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig> *p_match_limit_config_map; // rdx
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig> *v7; // rdx
  char *v8; // rsi
  bool matched; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false>::pointer v10; // rax
  const WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  int32_t result; // eax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-140h]
  const data::MatchLimitExcelConfig *limit_config; // [rsp+18h] [rbp-128h]
  const std::vector<data::MatchCond> *__for_range; // [rsp+20h] [rbp-120h]
  const data::MatchCond *match_cond; // [rsp+28h] [rbp-118h]
  char v23[272]; // [rsp+30h] [rbp-110h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 8 iter:113 64 8 9 <unknown> 96 8 15 __for_begin:116 128 8 13 __for_end:116 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MatchExcelConfigMgr::checkMatchLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -202116109;
  p_match_limit_config_map = &this->match_limit_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::begin(p_match_limit_config_map);
  while ( 1 )
  {
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->match_limit_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::end(v7);
    v8 = (char *)(v3 + 64);
    matched = std::__detail::operator!=<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false> *)(v3 + 32),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false> *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !matched )
      break;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false> *const)(v3 + 32));
    limit_config = &v10->second;
    __for_range = &v10->second.cond;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v8);
    *(std::vector<data::MatchCond>::const_iterator *)(v3 + 96) = std::vector<data::MatchCond>::begin(__for_range);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v8);
    *(std::vector<data::MatchCond>::const_iterator *)(v3 + 128) = std::vector<data::MatchCond>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::MatchCond const*,std::vector<data::MatchCond>>(
              (const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *)(v3 + 128)) )
      {
        v16 = 1;
        goto LABEL_27;
      }
      match_cond = __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&match_cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&match_cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&match_cond->type);
      }
      if ( match_cond->type == MATCH_LIMIT_TYPE_MAP_UNLOCK )
      {
        p_world_area_config_mgr = &txt_config_mgra->world_area_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&match_cond->param);
        }
        if ( !WorldAreaExcelConfigMgr::isArea1ID(p_world_area_config_mgr, match_cond->param) )
          break;
      }
      __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator++((__gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *const)(v3 + 96));
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
      "./src/txt_data_manual/MatchExcelConfig.cpp",
      "checkMatchLimitConfig",
      124);
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[17])"match_limit_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &limit_config->id);
    v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" area_id:");
    v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, &match_cond->param);
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])byte_1ADBA420);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_27:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_31;
    }
    txt_config_mgr = 0LL;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false>::operator++(
      (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false> *const)(v3 + 32),
      0);
  }
  v17 = 1;
LABEL_31:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 140: range 00000000145E925E-00000000145E9699
int32_t __cdecl MatchExcelConfigMgr::checkMatchNewRuleExcelConfig(
        const MatchExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::_Rb_tree_const_iterator<data::DungeonSubType>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  int32_t result; // eax
  data::MatchNewRuleExcelConfigVec *__for_range; // [rsp+10h] [rbp-140h]
  const data::MatchNewRuleExcelConfig *config; // [rsp+18h] [rbp-138h]
  char v13[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 8 15 __for_begin:142 80 8 13 __for_end:142 112 32 9 <unknown> 176 48 17 check_dup_set:141";
  *(_QWORD *)(v3 + 16) = MatchExcelConfigMgr::checkMatchNewRuleExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  std::set<data::DungeonSubType>::set((std::set<data::DungeonSubType> *const)(v3 + 176));
  __for_range = &this->match_new_rule_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<data::MatchNewRuleExcelConfig>::const_iterator *)(v3 + 48) = std::vector<data::MatchNewRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::MatchNewRuleExcelConfig>::const_iterator *)(v3 + 80) = std::vector<data::MatchNewRuleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *)(v3 + 80)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    config = __gnu_cxx::__normal_iterator<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *const)(v3 + 48));
    v6 = std::set<data::DungeonSubType>::emplace<data::DungeonSubType const&>(
           (std::set<data::DungeonSubType> *const)(v3 + 176),
           &config->dungeon_sub_type,
           &config->dungeon_sub_type);
    if ( !v6.second )
      break;
    __gnu_cxx::__normal_iterator<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *const)(v3 + 48));
  }
  if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 112, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 112),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/MatchExcelConfig.cpp",
    "checkMatchNewRuleExcelConfig",
    146);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 112),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1ADBA500);
  common::milog::MiLogStream::operator<<<data::DungeonSubType,(data::DungeonSubType*)0>(v8, &config->dungeon_sub_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
  *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
    v2 = 0;
  std::set<data::DungeonSubType>::~set((std::set<data::DungeonSubType> *const)(v3 + 176));
  result = v2;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 154: range 00000000145E969A-00000000145E9A23
int32_t __cdecl MatchExcelConfigMgr::checkMatchNewRuleSpecifiedExcelConfig(
        const MatchExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  int32_t result; // eax
  data::MatchNewRuleSpecifiedExcelConfigMap *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false,false>::reference v12; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig> >::type *dungeon_id; // [rsp+28h] [rbp-E8h]
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:155 64 8 13 __for_end:155 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MatchExcelConfigMgr::checkMatchNewRuleSpecifiedExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->match_new_rule_specified_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MatchNewRuleSpecifiedExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::MatchNewRuleSpecifiedExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MatchNewRuleSpecifiedExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MatchNewRuleSpecifiedExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false,false> *const)(v3 + 32));
    dungeon_id = std::get<0ul,unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>(v12);
    std::get<1ul,unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>(v12);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchNewRuleSpecifiedExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/MatchExcelConfig.cpp",
    "checkMatchNewRuleSpecifiedExcelConfig",
    160);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v7, (const char (*)[45])byte_1ADBA600);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_18:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 168: range 00000000145E9A24-00000000145E9BE5
const data::MatchLimitExcelConfig *__fastcall MatchExcelConfigMgr::findMatchLimitConfig(
        const MatchExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig> *p_match_limit_config_map; // rdx
  std::unordered_map<unsigned int,data::MatchLimitExcelConfig> *v6; // rdx
  bool matched; // al
  const data::MatchLimitExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:167 64 8 8 iter:169 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MatchExcelConfigMgr::findMatchLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_match_limit_config_map = &this->match_limit_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::find(
                                                                                                 p_match_limit_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->match_limit_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::end(v6);
  matched = std::__detail::operator==<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( matched )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 178: range 00000000145E9BE6-00000000145E9E2C
__int64 __fastcall MatchExcelConfigMgr::getMatchPunishTime(const MatchExcelConfigMgr *const this, __int64 times)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  data::MatchPunishExcelConfigMap *p_match_punish_excel_config_map; // rdx
  data::MatchPunishExcelConfigMap *v7; // rdx
  bool matched; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false>::pointer v9; // rdx
  uint32_t *p_punish_time; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 times:177 64 8 8 iter:183 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MatchExcelConfigMgr::getMatchPunishTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = times;
  if ( *(_DWORD *)(v2 + 48) )
  {
    p_match_punish_excel_config_map = &this->match_punish_excel_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, times);
    *(std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::find(
                                                                                                    p_match_punish_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::key_type *)(v2 + 48));
    v7 = &this->match_punish_excel_config_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 48);
    *(std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MatchPunishExcelConfig>::end(v7);
    matched = std::__detail::operator==<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false> *)(v2 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( matched )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_punish_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->max_punish_time);
      }
      result = this->max_punish_time;
    }
    else
    {
      v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MatchPunishExcelConfig>,false,false> *const)(v2 + 64));
      p_punish_time = &v9->second.punish_time;
      if ( *(_BYTE *)(((unsigned __int64)p_punish_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_punish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_punish_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(p_punish_time);
      }
      result = v9->second.punish_time;
    }
  }
  else
  {
    result = 0LL;
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

// Line 192: range 00000000145E9E2E-00000000145E9FEF
const MatchNewRuleConfig *__fastcall MatchExcelConfigMgr::findMatchNewRuleConfig(
        const MatchExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,MatchNewRuleConfig> *p_dungeon_id_match_new_rule_config_map; // rdx
  std::unordered_map<unsigned int,MatchNewRuleConfig> *v6; // rdx
  bool matched; // al
  const MatchNewRuleConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:191 64 8 8 iter:193 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MatchExcelConfigMgr::findMatchNewRuleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_match_new_rule_config_map = &this->dungeon_id_match_new_rule_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,MatchNewRuleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,MatchNewRuleConfig>::find(
                                                                                        p_dungeon_id_match_new_rule_config_map,
                                                                                        (const std::unordered_map<unsigned int,MatchNewRuleConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_match_new_rule_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,MatchNewRuleConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,MatchNewRuleConfig>::end(v6);
  matched = std::__detail::operator==<std::pair<unsigned int const,MatchNewRuleConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MatchNewRuleConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MatchNewRuleConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( matched )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,MatchNewRuleConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MatchNewRuleConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 202: range 00000000145EA080-00000000145EA25E
// local variable allocation has failed, the output may be wrong!
const data::MatchNewRuleExcelConfig *__cdecl MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType(
        const MatchExcelConfigMgr *const this,
        data::DungeonSubType sub_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::MatchNewRuleExcelConfig *M_current; // r15
  const data::MatchNewRuleExcelConfig *v6; // rcx
  data::MatchNewRuleExcelConfigVec *p_match_new_rule_excel_config_vec; // rdx
  bool matched; // al
  const data::MatchNewRuleExcelConfig *result; // rax
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:203 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  M_current = std::vector<data::MatchNewRuleExcelConfig>::end(&this->match_new_rule_excel_config_vec)._M_current;
  v6 = std::vector<data::MatchNewRuleExcelConfig>::begin(&this->match_new_rule_excel_config_vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, *(_QWORD *)&sub_type);
  *(__gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *)(v2 + 32) = std::find_if<__gnu_cxx::__normal_iterator<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>,MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType(data::DungeonSubType)::{lambda(data::MatchNewRuleExcelConfig const&)#1}>((__gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> >)v6, (__gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> >)M_current, (MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType::<lambda(const data::MatchNewRuleExcelConfig&)>)sub_type);
  p_match_new_rule_excel_config_vec = &this->match_new_rule_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, M_current);
  *(std::vector<data::MatchNewRuleExcelConfig>::const_iterator *)(v2 + 64) = std::vector<data::MatchNewRuleExcelConfig>::end(p_match_new_rule_excel_config_vec);
  matched = __gnu_cxx::operator==<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *)(v2 + 32),
              (const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( matched )
    result = 0LL;
  else
    result = __gnu_cxx::__normal_iterator<data::MatchNewRuleExcelConfig const*,std::vector<data::MatchNewRuleExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MatchNewRuleExcelConfig*,std::vector<data::MatchNewRuleExcelConfig> > *const)(v2 + 32));
  if ( v10 == (char *)v2 )
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

// Line 204: range 00000000145E9FF0-00000000145EA07E
bool __cdecl MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType(data::DungeonSubType)const::{lambda(data::MatchNewRuleExcelConfig const&)#1}::operator()(
        const MatchExcelConfigMgr::findMatchNewRuleExcelConfigBySubType::<lambda(const data::MatchNewRuleExcelConfig&)> *const __closure,
        const data::MatchNewRuleExcelConfig *config)
{
  data::DungeonSubType dungeon_sub_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_sub_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->dungeon_sub_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->dungeon_sub_type);
  }
  dungeon_sub_type = config->dungeon_sub_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return dungeon_sub_type == __closure->__sub_type;
};

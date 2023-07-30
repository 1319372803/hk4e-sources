// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/StrengthenExcelConfig.cpp

// Line 20: range 000000000CB0B28E-000000000CB0B499
int32_t __cdecl StrengthenExcelConfigMgr::rewriteConfig(
        StrengthenExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = StrengthenExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( StrengthenExcelConfigMgr::rewriteStrengthenBasePointConfig(this, txt_config_mgr)
    || StrengthenExcelConfigMgr::rewriteStrengthenPointConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/StrengthenExcelConfig.cpp",
      "rewriteConfig",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v6,
      (const char (*)[35])"rewrite StrengthenExcelConfig fail");
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

// Line 31: range 000000000CB0B49A-000000000CB0B6A5
int32_t __cdecl StrengthenExcelConfigMgr::checkConfig(
        StrengthenExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = StrengthenExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( StrengthenExcelConfigMgr::checkStrengthenBasePointConfig(this, txt_config_mgr)
    || StrengthenExcelConfigMgr::checkStrengthenPointConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/StrengthenExcelConfig.cpp",
      "checkConfig",
      35);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v6,
      (const char (*)[33])"check StrengthenExcelConfig fail");
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

// Line 43: range 000000000CB0B6A6-000000000CB0B8BC
uint32_t __cdecl StrengthenExcelConfigMgr::getStrengthenPoint(
        const StrengthenExcelConfigMgr *const this,
        data::StrengthenPointType type,
        uint32_t rank_level,
        uint32_t level)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<StrengthenPointIndex,unsigned int> *p_strengthen_point_map; // rdx
  std::unordered_map<StrengthenPointIndex,unsigned int> *v8; // rdx
  bool v9; // al
  uint32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const StrengthenPointIndex,unsigned int>,false,false>::pointer v11; // rdx
  unsigned int *p_second; // rax
  char v15[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 7 iter:45 64 8 9 <unknown> 96 12 13 index_data:44";
  *(_QWORD *)(v4 + 16) = StrengthenExcelConfigMgr::getStrengthenPoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202177536;
  StrengthenPointIndex::StrengthenPointIndex((StrengthenPointIndex *const)(v4 + 96), type, rank_level, level);
  p_strengthen_point_map = &this->strengthen_point_map_;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, (unsigned int)type);
  *(std::unordered_map<StrengthenPointIndex,unsigned int>::const_iterator *)(v4 + 32) = std::unordered_map<StrengthenPointIndex,unsigned int>::find(
                                                                                          p_strengthen_point_map,
                                                                                          (const std::unordered_map<StrengthenPointIndex,unsigned int>::key_type *)(v4 + 96));
  v8 = &this->strengthen_point_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, v4 + 96);
  *(std::unordered_map<StrengthenPointIndex,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<StrengthenPointIndex,unsigned int>::end(v8);
  v9 = std::__detail::operator==<std::pair<StrengthenPointIndex const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const StrengthenPointIndex,unsigned int>,false> *)(v4 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const StrengthenPointIndex,unsigned int>,false> *)(v4 + 64));
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<StrengthenPointIndex const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const StrengthenPointIndex,unsigned int>,false,false> *const)(v4 + 32));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v11->second;
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 55: range 000000000CB0B8BE-000000000CB0BAA1
int32_t __cdecl StrengthenExcelConfigMgr::rewriteStrengthenBasePointConfig(
        StrengthenExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::StrengthenBasePointExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::StrengthenBasePointExcelConfig> >::type *base_point_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:56 64 8 12 __for_end:56";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>::__node_type *)StrengthenExcelConfigMgr::rewriteStrengthenBasePointConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->strengthen_base_point_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::StrengthenBasePointExcelConfig>(__in);
    base_point_config = std::get<1ul,unsigned int const,data::StrengthenBasePointExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::StrengthBaseScoreConfig,data::StrengthenPointType data::StrengthBaseScoreConfig::*>(
      &base_point_config->base_scores,
      (data::StrengthenPointType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 64: range 000000000CB0BAA2-000000000CB0BE39
int32_t __cdecl StrengthenExcelConfigMgr::checkStrengthenBasePointConfig(
        const StrengthenExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::StrengthenBasePointExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::StrengthenBasePointExcelConfig> >::type *dungeon_id; // [rsp+30h] [rbp-D0h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 __for_begin:66 64 8 12 __for_end:66 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StrengthenExcelConfigMgr::checkStrengthenBasePointConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->strengthen_base_point_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::StrengthenBasePointExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false> *const)(v2 + 32));
    dungeon_id = std::get<0ul,unsigned int const,data::StrengthenBasePointExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::StrengthenBasePointExcelConfig>(v11);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id) )
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
        "./src/txt_data_manual/StrengthenExcelConfig.cpp",
        "checkStrengthenBasePointConfig",
        70);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             v6,
             (const char (*)[41])"findDungeonExcelConfig fail, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::StrengthenBasePointExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
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

// Line 79: range 000000000CB0BE3A-000000000CB0C3BD
int32_t __cdecl StrengthenExcelConfigMgr::rewriteStrengthenPointConfig(
        StrengthenExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t level; // ecx
  uint32_t rank_level; // edx
  const unsigned int *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const StrengthenPointIndex,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::StrengthenPointExcelConfigVec *__for_range; // [rsp+20h] [rbp-120h]
  const data::StrengthenPointExcelConfig *config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:81 64 8 12 __for_end:81 96 8 9 <unknown> 128 12 13 index_data:83 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StrengthenExcelConfigMgr::rewriteStrengthenPointConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->strengthen_point_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::StrengthenPointExcelConfig>::iterator *)(v2 + 32) = std::vector<data::StrengthenPointExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::StrengthenPointExcelConfig>::iterator *)(v2 + 64) = std::vector<data::StrengthenPointExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::StrengthenPointExcelConfig *,std::vector<data::StrengthenPointExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig*,std::vector<data::StrengthenPointExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig*,std::vector<data::StrengthenPointExcelConfig> > *)(v2 + 64)) )
  {
    config = __gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig *,std::vector<data::StrengthenPointExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig*,std::vector<data::StrengthenPointExcelConfig> > *const)(v2 + 32));
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1024;
    if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level);
    }
    level = config->level;
    if ( *(_BYTE *)(((unsigned __int64)&config->rank_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->rank_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->rank_level);
    }
    rank_level = config->rank_level;
    if ( *(_BYTE *)(((unsigned __int64)&config->strengthen_point_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->strengthen_point_type);
    }
    StrengthenPointIndex::StrengthenPointIndex(
      (StrengthenPointIndex *const)(v2 + 128),
      config->strengthen_point_type,
      rank_level,
      level);
    v8 = std::unordered_map<StrengthenPointIndex,unsigned int>::emplace<StrengthenPointIndex&,unsigned int const&>(
           &this->strengthen_point_map_,
           (StrengthenPointIndex *)(v2 + 128),
           &config->score,
           (StrengthenPointIndex *)&this->strengthen_point_map_,
           v7);
    if ( !v8.second )
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
        "./src/txt_data_manual/StrengthenExcelConfig.cpp",
        "rewriteStrengthenPointConfig",
        86);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v9, (const char (*)[43])byte_1A1228C0);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->strengthen_point_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->strengthen_point_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->strengthen_point_type);
      }
      v11 = (__int64)data::enumValToStr(config->strengthen_point_type, (__int64)byte_1A1228C0);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8(v2 + 96, byte_1A1228C0);
      *(_QWORD *)(v2 + 96) = v11;
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v2 + 96));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])byte_1A122920);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->rank_level);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1A122960);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->level);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -1800;
    __gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig *,std::vector<data::StrengthenPointExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::StrengthenPointExcelConfig*,std::vector<data::StrengthenPointExcelConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
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

// Line 94: range 000000000CB0C3BE-000000000CB0C3D0
int32_t __cdecl StrengthenExcelConfigMgr::checkStrengthenPointConfig(
        const StrengthenExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

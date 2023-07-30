// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/NpcExcelConfig.cpp

// Line 20: range 000000001461E194-000000001461E4EF
int32_t __cdecl NpcExcelConfigMgr::checkConfig(NpcExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  char v9[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = NpcExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  ret = 0;
  if ( NpcExcelConfigMgr::checkAllFirstMetSubQuestIdList(this, txt_config_mgr) )
  {
    ret = -1;
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
      "./src/txt_data_manual/NpcExcelConfig.cpp",
      "checkConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v5,
      (const char (*)[37])"checkAllFirstMetSubQuestIdList fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( NpcExcelConfigMgr::checkAllFirstMetId(this, txt_config_mgr) )
  {
    ret = -1;
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
      "./src/txt_data_manual/NpcExcelConfig.cpp",
      "checkConfig",
      30);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])"checkAllFirstMetId fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
  }
  result = ret;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 36: range 000000001461E4F0-000000001461E711
int32_t __cdecl NpcExcelConfigMgr::checkAllFirstMetSubQuestIdList(
        const NpcExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<unsigned int> *p_sub_quest_id_list; // rdx
  int v7; // eax
  int32_t result; // eax
  data::NpcFirstMetExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-A8h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:37 64 8 12 __for_end:37";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>::__node_type *)NpcExcelConfigMgr::checkAllFirstMetSubQuestIdList;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->npc_first_met_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], txt_config_mgr);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], txt_config_mgr);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::NpcFirstMetExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>(v3 + 4, v3 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false>::operator*(v3 + 4);
    std::get<0ul,unsigned int const,data::NpcFirstMetExcelConfig>(v10);
    p_sub_quest_id_list = &std::get<1ul,unsigned int const,data::NpcFirstMetExcelConfig>(v10)->sub_quest_id_list;
    if ( NpcExcelConfigMgr::checkFirstMetSubQuestIdList(this, txt_config_mgr, p_sub_quest_id_list) )
    {
      v2 = -1;
      v7 = 0;
      goto LABEL_14;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false,false>::operator++(v3 + 4);
  }
  v7 = 1;
LABEL_14:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcFirstMetExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 48: range 000000001461E712-000000001461EAAB
int32_t __cdecl NpcExcelConfigMgr::checkFirstMetSubQuestIdList(
        const NpcExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<unsigned int> *sub_quest_id_list)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  int32_t result; // eax
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 quest_id:49 64 8 14 __for_begin:49 96 8 12 __for_end:49 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = NpcExcelConfigMgr::checkFirstMetSubQuestIdList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -202116109;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 64) = std::vector<unsigned int>::begin(sub_quest_id_list);
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v4 + 96) = std::vector<unsigned int>::end(sub_quest_id_list);
  while ( 1 )
  {
    v7 = (char *)(v4 + 96);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 96)) )
    {
      v14 = 1;
      goto LABEL_20;
    }
    v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 64));
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
    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
            &txt_config_mgr->quest_config_mgr,
            *(unsigned int *)(v4 + 48)) )
      break;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 64));
  }
  if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 128, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/NpcExcelConfig.cpp",
    "checkFirstMetSubQuestIdList",
    53);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v4 + 128),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          v12,
          (const char (*)[49])"checkAllFirstMetSubQuestIdList fails. quest_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
  v3 = -1;
  v14 = 0;
LABEL_20:
  if ( v14 == 1 )
    v3 = 0;
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 61: range 000000001461EAAC-000000001461EE74
int32_t __cdecl NpcExcelConfigMgr::checkAllFirstMetId(
        const NpcExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::NpcExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::NpcExcelConfig> >::type *npc_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::NpcExcelConfig> >::type *npc_config; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:62 64 8 12 __for_end:62 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = NpcExcelConfigMgr::checkAllFirstMetId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->npc_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NpcExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::NpcExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::NpcExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::NpcExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::NpcExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NpcExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_22;
    }
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcExcelConfig>,false,false> *const)(v3 + 32));
    npc_id = std::get<0ul,unsigned int const,data::NpcExcelConfig>(v14);
    npc_config = (std::tuple_element<1,const std::pair<unsigned int const,data::NpcExcelConfig> >::type *)std::get<1ul,unsigned int const,data::NpcExcelConfig>(v14);
    if ( *(_BYTE *)(((unsigned __int64)&npc_config->first_met_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)npc_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_config->first_met_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&npc_config->first_met_id);
    }
    if ( npc_config->first_met_id
      && !data::NpcExcelConfigMgrBase::findNpcFirstMetExcelConfig(this, npc_config->first_met_id) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::NpcExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/NpcExcelConfig.cpp",
    "checkAllFirstMetId",
    66);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         v7,
         (const char (*)[35])"checkAllFirstMetId fails. npc_id: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, npc_id);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" first_met_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &npc_config->first_met_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_22:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
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

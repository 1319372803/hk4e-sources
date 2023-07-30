// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CompoundExcelConfig.cpp

// Line 21: range 0000000013A56E26-0000000013A57079
int32_t __cdecl CompoundExcelConfigMgr::rewriteConfig(CompoundExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rax
  int32_t result; // eax
  data::CompoundExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_config; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:23 64 8 12 __for_end:23";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false>::__node_type *)CompoundExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::clear(&this->compound_group_ids_map);
  __for_range = &this->compound_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::CompoundExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CompoundExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::CompoundExcelConfig>(__in);
    compound_config = std::get<1ul,unsigned int const,data::CompoundExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &compound_config->input_vec,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &compound_config->output_vec,
      (unsigned int *)8);
    v5 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->compound_group_ids_map,
           &compound_config->group_id);
    std::vector<unsigned int>::push_back(v5, &compound_config->id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 33: range 0000000013A5707A-0000000013A5739E
int32_t __cdecl CompoundExcelConfigMgr::checkConfig(
        CompoundExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CompoundExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( CompoundExcelConfigMgr::checkCompoundConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CompoundExcelConfig.cpp",
      "checkConfig",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v5,
      (const char (*)[27])"checkCompoundConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( CompoundExcelConfigMgr::checkCompoundBoostConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CompoundExcelConfig.cpp",
      "checkConfig",
      41);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v7,
      (const char (*)[32])"checkCompoundBoostConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 48: range 0000000013A573A0-0000000013A58DFA
int32_t __cdecl CompoundExcelConfigMgr::checkCompoundConfig(
        const CompoundExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *v7; // rsi
  uint32_t *p_count; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  uint32_t *v21; // rax
  MaterialExcelConfigMgr *v22; // rcx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  int v38; // eax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_compound_group_ids_map; // rdx
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *p_group_id; // rcx
  __int64 v46; // rsi
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *v47; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v48; // rdx
  bool v49; // al
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v55; // rax
  __int64 v56; // rax
  common::milog::MiLogStream *v57; // r14
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  data::CompoundExcelConfigMap *__for_range; // [rsp+10h] [rbp-640h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::reference v64; // [rsp+18h] [rbp-638h]
  std::tuple_element<0,std::pair<unsigned int const,data::CompoundExcelConfig> >::type *id; // [rsp+20h] [rbp-630h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *compound_config; // [rsp+28h] [rbp-628h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+30h] [rbp-620h]
  const data::IdCountConfig *input_config; // [rsp+38h] [rbp-618h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+40h] [rbp-610h]
  const data::IdCountConfig *output_config; // [rsp+48h] [rbp-608h]
  std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-600h]
  const unsigned int *id_0; // [rsp+58h] [rbp-5F8h]
  char v73[1520]; // [rsp+60h] [rbp-5F0h] BYREF

  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1472LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 48 8 14 __for_begin:49 80 8 12 __for_end:49 112 8 14 __for_begin:51 144 8 12 __for_end:51 176"
                        " 8 14 __for_begin:65 208 8 12 __for_end:65 240 8 7 iter:90 272 8 9 <unknown> 304 8 15 __for_begi"
                        "n:100 336 8 13 __for_end:100 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <"
                        "unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 32 9 <u"
                        "nknown> 944 32 9 <unknown> 1008 392 5 ss:98";
  *(_QWORD *)(v3 + 16) = CompoundExcelConfigMgr::checkCompoundConfig;
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
  v5[536862763] = -218103808;
  v5[536862764] = -202116109;
  v5[536862765] = -202116109;
  __for_range = &this->compound_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::CompoundExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CompoundExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::CompoundExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CompoundExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundExcelConfig>,false> *)(v3 + 80)) )
    {
      v17 = 1;
      goto LABEL_115;
    }
    v64 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false> *const)(v3 + 48));
    id = std::get<0ul,unsigned int const,data::CompoundExcelConfig>(v64);
    compound_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CompoundExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CompoundExcelConfig>(v64);
    __for_range_0 = &compound_config->input_vec;
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 112, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 112) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 144) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (const char *)(v3 + 144);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 144)) )
      {
        v16 = 1;
        goto LABEL_30;
      }
      input_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
      p_count = &input_config->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_count);
      }
      if ( !input_config->count )
        goto LABEL_22;
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&input_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&input_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&input_config->id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, input_config->id) )
        v10 = 0;
      else
LABEL_22:
        v10 = 1;
      if ( v10 )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
    }
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/CompoundExcelConfig.cpp",
      "checkCompoundConfig",
      55);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])"Compound id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
    v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v13, (const char (*)[21])byte_1AC5E060);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &input_config->id);
    v7 = byte_1AC5E0A0;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AC5E0A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
    *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_115;
    }
    if ( std::vector<data::IdCountConfig>::empty(&compound_config->input_vec) )
    {
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CompoundExcelConfig.cpp",
        "checkCompoundConfig",
        61);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])"Compound id: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v20, (const char (*)[28])byte_1AC5E0E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      v17 = 0;
      goto LABEL_115;
    }
    __for_range_1 = &compound_config->output_vec;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v7);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 176) = std::vector<data::IdCountConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, v7);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 208) = std::vector<data::IdCountConfig>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 176),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 208)) )
      {
        v29 = 1;
        goto LABEL_62;
      }
      output_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 176));
      v21 = &output_config->count;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      if ( !output_config->count )
        goto LABEL_48;
      v22 = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&output_config->id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v22, output_config->id) )
        v23 = 0;
      else
LABEL_48:
        v23 = 1;
      if ( v23 )
      {
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CompoundExcelConfig.cpp",
          "checkCompoundConfig",
          69);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])"Compound id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
        v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v26, (const char (*)[21])byte_1AC5E060);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &output_config->id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AC5E0A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
        goto LABEL_62;
      }
      if ( *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&output_config->id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, output_config->id, ITEM_LIMIT_COMPOUND) )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 176));
    }
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
      "./src/txt_data_manual/CompoundExcelConfig.cpp",
      "checkCompoundConfig",
      74);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 560),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v30, (const char (*)[13])"Compound id:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
    v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v32, (const char (*)[21])byte_1AC5E160);
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &output_config->id);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])byte_1AC5E1A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
    *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v17 = 0;
      goto LABEL_115;
    }
    if ( *(_BYTE *)(((unsigned __int64)&compound_config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&compound_config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&compound_config->type);
    }
    if ( compound_config->type != COMPOUND_RANDOM_COOK )
      break;
    if ( !std::vector<data::IdCountConfig>::empty(&compound_config->output_vec) )
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
        "./src/txt_data_manual/CompoundExcelConfig.cpp",
        "checkCompoundConfig",
        82);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 624),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])"Compound id: ");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, id);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v37, (const char (*)[46])byte_1AC5E1E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
      *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v38 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&compound_config->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&compound_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&compound_config->drop_id);
      }
      if ( !compound_config->drop_id
        || (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgr,
                              compound_config->drop_id,
                              ITEM_LIMIT_COMPOUND) )
      {
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 688, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 688),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CompoundExcelConfig.cpp",
          "checkCompoundConfig",
          87);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 688),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v40, (const char (*)[14])"Compound id: ");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
        v43 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v42, (const char (*)[49])byte_1AC5E240);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &compound_config->drop_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v38 = 0;
      }
      else
      {
        *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        p_compound_group_ids_map = &this->compound_group_ids_map;
        p_group_id = &compound_config->group_id;
        v46 = *(unsigned __int8 *)(((v3 + 240) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v46 )
          __asan_report_store8(v3 + 240, v46);
        v47 = p_group_id;
        *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 240) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(p_compound_group_ids_map, p_group_id);
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        v48 = &this->compound_group_ids_map;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 272, v47);
        *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 272) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v48);
        v49 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 240),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 272));
        *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
        if ( v49 )
        {
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 752, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 752),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CompoundExcelConfig.cpp",
            "checkCompoundConfig",
            93);
          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 752),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v51 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  v50,
                  (const char (*)[43])"compound group ids map error, can't find: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &compound_config->group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
          *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v38 = 0;
        }
        else
        {
          v52 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 240));
          if ( std::vector<unsigned int>::size(&v52->second) == 1 )
          {
            v38 = 1;
          }
          else
          {
            __asan_unpoison_stack_memory(v3 + 1008, 392LL);
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 1008);
            v53 = std::operator<<<std::char_traits<char>>(v3 + 1024, "Compound id: ");
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            v54 = std::ostream::operator<<(v53, *id);
            std::operator<<<std::char_traits<char>>(v54, &unk_1AC5E300);
            __for_range_2 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 240))->second;
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 304, &unk_1AC5E300);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 304) = std::vector<unsigned int>::begin(__for_range_2);
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 336, &unk_1AC5E300);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 336) = std::vector<unsigned int>::end(__for_range_2);
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 304),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 336)) )
            {
              v55 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 304));
              id_0 = v55;
              if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v55);
              }
              v56 = std::ostream::operator<<(v3 + 1024, *id_0);
              std::operator<<<std::char_traits<char>>(v56, " ");
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 304));
            }
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 816, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 816),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CompoundExcelConfig.cpp",
              "checkCompoundConfig",
              104);
            v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 816),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 880) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 911) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 880, 32LL);
            }
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(v3 + 880, v3 + 1008);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, (const std::string *)(v3 + 880));
            std::string::~string((void *)(v3 + 880));
            *(_DWORD *)(((v3 + 880) >> 3) + 0x7FFF8000) = -117901064;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
            *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 1008);
            __asan_poison_stack_memory(v3 + 1008, 392LL);
            v38 = 0;
          }
        }
      }
    }
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v38 != 1 )
    {
      v17 = 0;
      goto LABEL_115;
    }
LABEL_113:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundExcelConfig>,false,false> *const)(v3 + 48));
  }
  if ( !std::vector<data::IdCountConfig>::empty(&compound_config->output_vec) )
    goto LABEL_113;
  *(_DWORD *)(((v3 + 944) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 944) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 975) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 944, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 944),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/CompoundExcelConfig.cpp",
    "checkCompoundConfig",
    110);
  v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 944),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v59 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v58, (const char (*)[14])"Compound id: ");
  v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
  common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v60, (const char (*)[22])byte_1AC5E360);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 944));
  v2 = -1;
  v17 = 0;
LABEL_115:
  if ( v17 == 1 )
    v2 = 0;
  if ( v73 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 184) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1472LL, v73);
  }
  return v2;
};

// Line 118: range 0000000013A58DFC-0000000013A59370
int32_t __cdecl CompoundExcelConfigMgr::checkCompoundBoostConfig(
        const CompoundExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  data::CompoundBoostExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false,false>::reference v18; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CompoundBoostExcelConfig> >::type *compound_boost_config; // [rsp+28h] [rbp-118h]
  char v20[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:119 64 8 13 __for_end:119 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CompoundExcelConfigMgr::checkCompoundBoostConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->compound_boost_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CompoundBoostExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CompoundBoostExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CompoundBoostExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CompoundBoostExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_25;
    }
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::CompoundBoostExcelConfig>(v18);
    compound_boost_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CompoundBoostExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CompoundBoostExcelConfig>(v18);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&compound_boost_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&compound_boost_config->id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, compound_boost_config->id) )
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
        "./src/txt_data_manual/CompoundExcelConfig.cpp",
        "checkCompoundBoostConfig",
        123);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v7,
             (const char (*)[20])"Compound boost id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &compound_boost_config->id);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AC5E480);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(((unsigned __int64)&compound_boost_config->boost_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)compound_boost_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&compound_boost_config->boost_time >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&compound_boost_config->boost_time);
    }
    if ( !compound_boost_config->boost_time || compound_boost_config->boost_time > 0x258 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CompoundBoostExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/CompoundExcelConfig.cpp",
    "checkCompoundBoostConfig",
    129);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v11, (const char (*)[20])"Compound boost id: ");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &compound_boost_config->id);
  v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" time: ");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &compound_boost_config->boost_time);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1AC5E480);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_25:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
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

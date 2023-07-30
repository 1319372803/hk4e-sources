// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ForgeExcelConfig.cpp

// Line 22: range 00000000143FEE48-00000000143FEEA3
int32_t __cdecl ForgeExcelConfigMgr::rewriteConfig(ForgeExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  if ( ForgeExcelConfigMgr::rewriteForgeData(this, txt_config_mgr)
    || ForgeExcelConfigMgr::rewriteForgeUpdateData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 32: range 00000000143FEEA4-00000000143FEEFF
int32_t __cdecl ForgeExcelConfigMgr::checkConfig(ForgeExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  if ( ForgeExcelConfigMgr::checkForgeData(this, txt_config_mgr)
    || ForgeExcelConfigMgr::checkForgeUpdateData(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 43: range 00000000143FEF00-00000000143FFBBB
int32_t __cdecl ForgeExcelConfigMgr::rewriteForgeData(ForgeExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  std::vector<data::IdCountConfig>::size_type v12; // r15
  std::vector<unsigned int> *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::vector<std::string>::size_type v19; // rax
  int v20; // eax
  const std::string *v21; // rax
  const std::string *v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  std::vector<unsigned int> *v26; // rdx
  std::vector<unsigned int> *v27; // rdx
  std::pair<unsigned int,unsigned int> *v28; // rax
  int v29; // r15d
  unsigned __int64 v30; // rax
  int v31; // eax
  int32_t result; // eax
  data::ForgeExcelConfigMap *__for_range; // [rsp+28h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-230h]
  const std::vector<unsigned int>::value_type *forge_id; // [rsp+38h] [rbp-228h]
  std::tuple_element<1,std::pair<unsigned int const,data::ForgeExcelConfig> >::type *config; // [rsp+40h] [rbp-220h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-218h]
  char v38[528]; // [rsp+50h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 17 material_index:50 64 4 17 start_quest_id:68 80 4 15 end_quest_id:69 96 8 14 __for_beg"
                        "in:44 128 8 12 __for_end:44 160 8 14 __for_begin:50 192 8 12 __for_end:50 224 8 9 <unknown> 256 "
                        "8 9 <unknown> 288 24 12 index_vec:49 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ForgeExcelConfigMgr::rewriteForgeData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ForgeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v3 + 96));
    forge_id = std::get<0ul,unsigned int const,data::ForgeExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ForgeExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::RandomItemConfig,unsigned int data::RandomItemConfig::*>(
      &config->random_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &config->material_items,
      (unsigned int *)8);
    v6 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288));
    __for_range_0 = &config->talent_return_able_index_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, 8LL);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, 8LL);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( *(_DWORD *)(v3 + 48) )
      {
        v12 = *(unsigned int *)(v3 + 48);
        if ( v12 <= std::vector<data::IdCountConfig>::size(&config->material_items) )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v3 + 288),
            (const std::vector<unsigned int>::value_type *)(v3 + 48));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    std::vector<unsigned int>::swap(&config->talent_return_able_index_list, (std::vector<unsigned int> *)(v3 + 288));
    v14 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->unlock_forge_map_,
            &config->player_level);
    std::vector<unsigned int>::push_back(v14, forge_id);
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->unlock_config.unlock_method);
    }
    if ( config->unlock_config.unlock_method != FORGE_UNLOCK_QUEST )
      goto LABEL_53;
    if ( std::vector<std::string>::size(&config->unlock_config.unlock_param) == 2 )
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, forge_id);
      *(_DWORD *)(v3 + 64) = 0;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80, forge_id);
      *(_DWORD *)(v3 + 80) = 0;
      v21 = std::vector<std::string>::operator[](&config->unlock_config.unlock_param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v21, (unsigned int *)(v3 + 64), 1)
        || (v22 = std::vector<std::string>::operator[](&config->unlock_config.unlock_param, 1uLL),
            common::tools::StringUtils::strToNum<unsigned int>(v22, (unsigned int *)(v3 + 80), 1)) )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "rewriteForgeData",
          73);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v24, (const char (*)[58])byte_1AD69360);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, forge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
      }
      else
      {
        v26 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->quest_unlock_forge_map_,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
        std::vector<unsigned int>::emplace_back<unsigned int const&>(v26, forge_id, (const unsigned int *)v26);
        v27 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->quest_lock_forge_map_,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 80));
        std::vector<unsigned int>::emplace_back<unsigned int const&>(v27, forge_id, (const unsigned int *)v27);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, forge_id);
        *(std::pair<unsigned int,unsigned int> *)(v3 + 256) = std::make_pair<unsigned int &,unsigned int &>(
                                                                (unsigned int *)(v3 + 64),
                                                                (unsigned int *)(v3 + 80));
        v28 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                &this->forge_to_quest_map_,
                forge_id);
        std::pair<unsigned int,unsigned int>::operator=(
          v28,
          (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 256));
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        v20 = 1;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "rewriteForgeData",
        65);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v15, (const char (*)[58])byte_1AD69360);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, forge_id);
      v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v17, (const char (*)[24])byte_1AD693C0);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v19 = std::vector<std::string>::size(&config->unlock_config.unlock_param);
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        v19 = __asan_report_store8(v3 + 224, byte_1AD693C0);
      *(_QWORD *)(v3 + 224) = v19;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v18,
        (const unsigned __int64 *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
LABEL_53:
      v29 = 1;
    else
      v29 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
    v30 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v30 = -1800;
    *(_BYTE *)(v30 + 2) = -8;
    if ( v29 != 1 )
    {
      v31 = 0;
      goto LABEL_58;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v3 + 96));
  }
  v31 = 1;
LABEL_58:
  if ( v31 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
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

// Line 85: range 00000000143FFBBC-0000000014401BE0
int32_t __cdecl ForgeExcelConfigMgr::checkForgeData(
        ForgeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_result_item_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  const TxtConfigMgr *v27; // rsi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::vector<std::string>::size_type v36; // rax
  int v37; // eax
  const std::string *v38; // rax
  const std::string *v39; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  uint32_t *p_id; // rsi
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int v49; // eax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  char *v52; // rsi
  unsigned int *v53; // rax
  int *v54; // rdx
  int v55; // ecx
  char v56; // al
  std::vector<unsigned int>::const_iterator v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  std::vector<data::IdCountConfig>::size_type v64; // rax
  const unsigned int *__lasta; // [rsp+8h] [rbp-578h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lastb; // [rsp+8h] [rbp-578h]
  common::milog::MiLogStream *__last; // [rsp+8h] [rbp-578h]
  int32_t ret; // [rsp+2Ch] [rbp-554h]
  data::ForgeExcelConfigMap *__for_range; // [rsp+30h] [rbp-550h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::reference v72; // [rsp+38h] [rbp-548h]
  std::tuple_element<0,std::pair<unsigned int const,data::ForgeExcelConfig> >::type *forge_id; // [rsp+40h] [rbp-540h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ForgeExcelConfig> >::type *config; // [rsp+48h] [rbp-538h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+50h] [rbp-530h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-528h]
  const data::ItemConfig *item_config_ptr; // [rsp+60h] [rbp-520h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-518h]
  char v79[1296]; // [rsp+70h] [rbp-510h] BYREF

  v3 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1248LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 4 18 start_quest_id:149 64 4 16 end_quest_id:150 80 4 18 material_index:174 96 8 14 __for_"
                        "begin:87 128 8 12 __for_end:87 160 8 9 <unknown> 192 8 15 __for_begin:159 224 8 13 __for_end:159"
                        " 256 8 15 __for_begin:174 288 8 13 __for_end:174 320 8 9 <unknown> 352 32 9 <unknown> 416 32 9 <"
                        "unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <u"
                        "nknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <u"
                        "nknown> 1120 32 9 <unknown> 1184 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ForgeExcelConfigMgr::checkForgeData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -202116109;
  ret = 0;
  __for_range = &this->forge_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ForgeExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ForgeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ForgeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)(v3 + 128)) )
    {
      v10 = 1;
      goto LABEL_143;
    }
    v72 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v3 + 96));
    forge_id = std::get<0ul,unsigned int const,data::ForgeExcelConfig>(v72);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ForgeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ForgeExcelConfig>(v72);
    p_result_item_id = &config->result_item_id;
    if ( *(_BYTE *)(((unsigned __int64)p_result_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_result_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_result_item_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_result_item_id);
    }
    if ( !config->result_item_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->main_random_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->main_random_drop_id >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->main_random_drop_id);
      }
      if ( !config->main_random_drop_id )
      {
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          91);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 352),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])byte_1AD69660);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, forge_id);
        common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v9, (const char (*)[54])byte_1AD696A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
        v10 = 0;
        goto LABEL_143;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->result_item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->result_item_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->result_item_id);
    }
    if ( config->result_item_id )
    {
      if ( !ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, config->result_item_id) )
        goto LABEL_26;
      if ( *(_BYTE *)(((unsigned __int64)&config->result_item_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->result_item_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->result_item_count);
      }
      if ( config->result_item_count )
        v11 = 0;
      else
LABEL_26:
        v11 = 1;
      if ( v11 )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          99);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])byte_1AD69700);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, forge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        v2 = -1;
        v10 = 0;
        goto LABEL_143;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config->result_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->result_item_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->result_item_id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, config->result_item_id, ITEM_LIMIT_FORGE) )
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
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          104);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])byte_1AD69760);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &config->result_item_id);
        v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v16, (const char (*)[22])byte_1AD697A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, forge_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        v2 = -1;
        v10 = 0;
        goto LABEL_143;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->main_random_drop_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->main_random_drop_id >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->main_random_drop_id);
    }
    if ( config->main_random_drop_id
      && (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->main_random_drop_id,
                            ITEM_LIMIT_FORGE_DROP) != 1 )
    {
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "checkForgeData",
        112);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])byte_1AD69660);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, forge_id);
      v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" drop_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->main_random_drop_id);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        v22,
        (const char (*)[41])" isValidDropIdAndMatchItemLimitType fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      v2 = -1;
      v10 = 0;
      goto LABEL_143;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->forge_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->forge_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->forge_time);
    }
    if ( !config->forge_time )
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
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "checkForgeData",
        119);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v23, (const char (*)[41])byte_1AD69840);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, forge_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      v2 = -1;
      v10 = 0;
      goto LABEL_143;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->queue_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->queue_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->queue_num);
    }
    if ( !config->queue_num )
    {
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "checkForgeData",
        125);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v25, (const char (*)[47])byte_1AD698A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, forge_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      v2 = -1;
      v10 = 0;
      goto LABEL_143;
    }
    v27 = txt_config_mgr;
    if ( !ForgeExcelConfigMgr::isRandomItemConfigVecValid(this, txt_config_mgr, &config->random_items) )
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
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "checkForgeData",
        131);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v28, (const char (*)[43])byte_1AD69900);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, forge_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      v2 = -1;
      v10 = 0;
      goto LABEL_143;
    }
    if ( std::vector<data::IdCountConfig>::empty(&config->material_items) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->unlock_config.unlock_method);
    }
    if ( config->unlock_config.unlock_method == FORGE_UNLOCK_QUEST )
    {
      if ( std::vector<std::string>::size(&config->unlock_config.unlock_param) == 2 )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, txt_config_mgr);
        *(_DWORD *)(v3 + 48) = 0;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, txt_config_mgr);
        *(_DWORD *)(v3 + 64) = 0;
        v38 = std::vector<std::string>::operator[](&config->unlock_config.unlock_param, 0LL);
        v27 = (const TxtConfigMgr *)(v3 + 48);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v38, (unsigned int *)(v3 + 48), 1)
          || (v39 = std::vector<std::string>::operator[](&config->unlock_config.unlock_param, 1uLL),
              v27 = (const TxtConfigMgr *)(v3 + 64),
              common::tools::StringUtils::strToNum<unsigned int>(v39, (unsigned int *)(v3 + 64), 1)) )
        {
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ForgeExcelConfig.cpp",
            "checkForgeData",
            154);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v41, (const char (*)[58])byte_1AD69360);
          v27 = (const TxtConfigMgr *)forge_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, forge_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
          *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v37 = 0;
        }
        else
        {
          v37 = 1;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          146);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v32, (const char (*)[58])byte_1AD69360);
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, forge_id);
        v35 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v34, (const char (*)[24])byte_1AD693C0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v36 = std::vector<std::string>::size(&config->unlock_config.unlock_param);
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          v36 = __asan_report_store8(v3 + 160, byte_1AD693C0);
        *(_QWORD *)(v3 + 160) = v36;
        v27 = (const TxtConfigMgr *)(v3 + 160);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v35,
          (const unsigned __int64 *)(v3 + 160));
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v37 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v37 != 1 )
      {
        v10 = 0;
        goto LABEL_143;
      }
    }
    __for_range_0 = &config->material_items;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v27);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 192) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v27);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 224) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      p_id = (uint32_t *)(v3 + 224);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 224)) )
      {
        v49 = 1;
        goto LABEL_112;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 192));
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id);
      if ( !item_config_ptr )
        goto LABEL_101;
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_config_ptr->id);
      }
      if ( item_config_ptr->id == 202 )
      {
LABEL_101:
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 992, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 992),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          164);
        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v46 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v45, (const char (*)[31])byte_1AD699C0);
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, forge_id);
        v48 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v47, (const char (*)[13])byte_1AD69A00);
        p_id = &id_count_config->id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &id_count_config->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v49 = 0;
        goto LABEL_112;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 192));
    }
    *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1056, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1056),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ForgeExcelConfig.cpp",
      "checkForgeData",
      169);
    v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1056),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v51 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v50, (const char (*)[41])byte_1AD69A40);
    p_id = forge_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, forge_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
    *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v49 = 0;
LABEL_112:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v49 != 1 )
    {
      v10 = 0;
      goto LABEL_143;
    }
    __for_range_1 = &config->talent_return_able_index_list;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, p_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v52 = (char *)(v3 + 288);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v53 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
      v54 = (int *)v53;
      if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v53);
      }
      v55 = *v54;
      v56 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v56 != 0 && v56 <= 3 )
      {
        LOBYTE(v52) = v56 != 0;
        __asan_report_store4(v3 + 80, v52);
      }
      *(_DWORD *)(v3 + 80) = v55;
      __lasta = std::vector<unsigned int>::end(&config->talent_return_able_index_list)._M_current;
      v57._M_current = std::vector<unsigned int>::begin(&config->talent_return_able_index_list)._M_current;
      if ( std::count<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
             v57,
             (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__lasta,
             (const unsigned int *)(v3 + 80)) != 1 )
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
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          178);
        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v59 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v58, (const char (*)[27])byte_1AD69AA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
        *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 80);
      if ( !*(_DWORD *)(v3 + 80)
        || (__lastb._M_current = (const unsigned int *)*(unsigned int *)(v3 + 80),
            (unsigned __int64)__lastb._M_current > std::vector<data::IdCountConfig>::size(&config->material_items)) )
      {
        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ForgeExcelConfig.cpp",
          "checkForgeData",
          183);
        v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v62 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v61, (const char (*)[30])byte_1AD69AE0);
        v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v62,
                (const unsigned int *)(v3 + 80));
        __last = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v63, (const char (*)[17])byte_1AD69B20);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        v64 = std::vector<data::IdCountConfig>::size(&config->material_items);
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          v64 = __asan_report_store8(v3 + 320, byte_1AD69B20);
        *(_QWORD *)(v3 + 320) = v64;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          __last,
          (const unsigned __int64 *)(v3 + 320));
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 256));
    }
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)(v3 + 96));
  }
  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 800, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 800),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ForgeExcelConfig.cpp",
    "checkForgeData",
    137);
  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 800),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v31 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v30, (const char (*)[37])byte_1AD69960);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, forge_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
  v2 = -1;
  v10 = 0;
LABEL_143:
  if ( v10 == 1 )
    v2 = ret;
  if ( v79 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8098) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1248LL, v79);
  }
  return v2;
};

// Line 193: range 0000000014401BE2-0000000014401BF4
int32_t __cdecl ForgeExcelConfigMgr::rewriteForgeUpdateData(
        ForgeExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 198: range 0000000014401BF6-0000000014401C08
int32_t __cdecl ForgeExcelConfigMgr::checkForgeUpdateData(
        ForgeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 204: range 0000000014401C0A-00000000144022D8
bool __cdecl ForgeExcelConfigMgr::isRandomItemConfigVecValid(
        const ForgeExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<data::RandomItemConfig> *random_config_vec)
{
  bool v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool result; // al
  const data::RandomItemConfig *random_item_config; // [rsp+30h] [rbp-160h]
  char v18[336]; // [rsp+40h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 8 15 __for_begin:205 64 8 13 __for_end:205 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ForgeExcelConfigMgr::isRandomItemConfigVecValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -202116109;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, txt_config_mgr);
  *(std::vector<data::RandomItemConfig>::const_iterator *)(v4 + 32) = std::vector<data::RandomItemConfig>::begin(random_config_vec);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::vector<data::RandomItemConfig>::const_iterator *)(v4 + 64) = std::vector<data::RandomItemConfig>::end(random_config_vec);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)(v4 + 32),
            (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)(v4 + 64)) )
    {
      v10 = 1;
      goto LABEL_33;
    }
    random_item_config = __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)(v4 + 32));
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_item_config->item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, random_item_config->item_id) )
      goto LABEL_40;
    if ( *(_BYTE *)(((unsigned __int64)&random_item_config->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)random_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&random_item_config->count >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&random_item_config->count);
    }
    if ( !random_item_config->count )
    {
LABEL_40:
      if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "isRandomItemConfigVecValid",
        210);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v4 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1AD69C20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &random_item_config->item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
      v3 = 0;
      v10 = 0;
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_item_config->item_id);
    }
    if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, random_item_config->item_id, ITEM_LIMIT_FORGE) )
    {
      if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 65) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ForgeExcelConfig.cpp",
        "isRandomItemConfigVecValid",
        215);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v11, (const char (*)[34])byte_1AD69C80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &random_item_config->item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
      v3 = 0;
      v10 = 0;
      goto LABEL_33;
    }
    if ( *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_item_config->weight);
    }
    if ( random_item_config->weight > 0x2710 )
      break;
    __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)(v4 + 32));
  }
  if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ForgeExcelConfig.cpp",
    "isRandomItemConfigVecValid",
    220);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v4 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v13, (const char (*)[43])byte_1AD69CE0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &random_item_config->item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
  v3 = 0;
  v10 = 0;
LABEL_33:
  if ( v10 == 1 )
    v3 = 1;
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

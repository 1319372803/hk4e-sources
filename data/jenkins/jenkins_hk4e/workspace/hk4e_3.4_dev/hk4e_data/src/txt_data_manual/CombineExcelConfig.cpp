// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CombineExcelConfig.cpp

// Line 20: range 0000000013A50D44-0000000013A525C9
int32_t __cdecl CombineExcelConfigMgr::rewriteConfig(CombineExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_result_item_id; // rax
  __int64 v7; // rsi
  uint32_t result_item_id; // ecx
  char v9; // al
  uint32_t result_item_count; // ecx
  char v11; // dl
  std::vector<unsigned int> *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::vector<std::string>::size_type v17; // rax
  int v18; // eax
  const std::string *v19; // rax
  const std::string *v20; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  std::vector<unsigned int> *v24; // rdx
  std::vector<unsigned int> *v25; // rdx
  std::pair<unsigned int,unsigned int> *v26; // rax
  int v27; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int v30; // eax
  const std::string *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  std::vector<unsigned int> *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  int v37; // eax
  const std::string *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  std::vector<unsigned int> *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  int v44; // eax
  const std::string *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  int v48; // eax
  const std::string *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  std::vector<unsigned int> *v52; // rdx
  data::CombineExcelConfigMap *__for_range; // [rsp+28h] [rbp-3B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-3B0h]
  const std::vector<unsigned int>::value_type *combine_id; // [rsp+38h] [rbp-3A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_config; // [rsp+40h] [rbp-3A0h]
  char v58[912]; // [rsp+50h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 4 17 start_quest_id:39 48 4 15 end_quest_id:40 64 4 18 finish_quest_id:58 80 4 18 finish_q"
                        "uest_id:73 96 4 14 activity_id:88 112 4 10 cond_id:94 128 8 14 __for_begin:21 160 8 12 __for_end"
                        ":21 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> "
                        "416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 7"
                        "36 32 9 <unknown> 800 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CombineExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -202116109;
  __for_range = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CombineExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 160)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 128));
    combine_id = std::get<0ul,unsigned int const,data::CombineExcelConfig>(__in);
    combine_config = std::get<1ul,unsigned int const,data::CombineExcelConfig>(__in);
    p_result_item_id = &combine_config->result_item_id;
    v7 = (((_BYTE)combine_config + 68) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_result_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_result_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_result_item_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(p_result_item_id);
    }
    result_item_id = combine_config->result_item_id;
    v9 = *(_BYTE *)(((unsigned __int64)&combine_config->result_item.id >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(&combine_config->result_item.id, v7);
    }
    combine_config->result_item.id = result_item_id;
    if ( *(_BYTE *)(((unsigned __int64)&combine_config->result_item_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&combine_config->result_item_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&combine_config->result_item_count);
    }
    result_item_count = combine_config->result_item_count;
    v11 = *(_BYTE *)(((unsigned __int64)&combine_config->result_item.count >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)combine_config + 92) & 7) + 3) >= v11 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(&combine_config->result_item.count, v7);
    }
    combine_config->result_item.count = result_item_count;
    common::tools::MiscUtils::removeEmptyElement<data::RandomItemConfig,unsigned int data::RandomItemConfig::*>(
      &combine_config->random_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &combine_config->material_items,
      (unsigned int *)8);
    v12 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->unlock_combine_map_,
            &combine_config->player_level);
    std::vector<unsigned int>::push_back(v12, combine_id);
    if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&combine_config->unlock_config.unlock_method);
    }
    if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_QUEST )
    {
      if ( std::vector<std::string>::size(&combine_config->unlock_config.unlock_param) == 2 )
      {
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 32, combine_id);
        *(_DWORD *)(v3 + 32) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 48, combine_id);
        *(_DWORD *)(v3 + 48) = 0;
        v19 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v3 + 32), 1)
          || (v20 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 1uLL),
              common::tools::StringUtils::strToNum<unsigned int>(v20, (unsigned int *)(v3 + 48), 1)) )
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
            "./src/txt_data_manual/CombineExcelConfig.cpp",
            "rewriteConfig",
            44);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v22, (const char (*)[58])byte_1AC5CBE0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, combine_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        else
        {
          v24 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->quest_unlock_combine_map_,
                  (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
          std::vector<unsigned int>::emplace_back<unsigned int const&>(v24, combine_id, (const unsigned int *)v24);
          v25 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->quest_lock_combine_map_,
                  (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
          std::vector<unsigned int>::emplace_back<unsigned int const&>(v25, combine_id, (const unsigned int *)v25);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, combine_id);
          *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = std::make_pair<unsigned int &,unsigned int &>(
                                                                  (unsigned int *)(v3 + 32),
                                                                  (unsigned int *)(v3 + 48));
          v26 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                  &this->combine_to_quest_map_,
                  combine_id);
          std::pair<unsigned int,unsigned int>::operator=(
            v26,
            (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 224));
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          v18 = 1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/CombineExcelConfig.cpp",
          "rewriteConfig",
          36);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v13, (const char (*)[58])byte_1AC5CBE0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, combine_id);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])byte_1AC5CC40);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v17 = std::vector<std::string>::size(&combine_config->unlock_config.unlock_param);
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          v17 = __asan_report_store8(v3 + 192, byte_1AC5CC40);
        *(_QWORD *)(v3 + 192) = v17;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v16,
          (const unsigned __int64 *)(v3 + 192));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v18 != 1 )
      {
        v27 = 0;
        goto LABEL_102;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&combine_config->unlock_config.unlock_method);
      }
      if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_SEA_LAMP_QUEST )
      {
        if ( std::vector<std::string>::empty(&combine_config->unlock_config.unlock_param) )
        {
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CombineExcelConfig.cpp",
            "rewriteConfig",
            55);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v28, (const char (*)[56])byte_1AC5CC80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, combine_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v30 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64, combine_id);
          *(_DWORD *)(v3 + 64) = 0;
          v31 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v31, (unsigned int *)(v3 + 64), 1) )
          {
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "rewriteConfig",
              61);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v32,
                    (const char (*)[56])byte_1AC5CC80);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, combine_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v30 = 0;
          }
          else
          {
            v34 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                    &this->finished_quest_possible_unlock_map_,
                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
            std::vector<unsigned int>::push_back(v34, combine_id);
            v30 = 1;
          }
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v30 != 1 )
        {
          v27 = 0;
          goto LABEL_102;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&combine_config->unlock_config.unlock_method);
        }
        if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_SEA_LAMP_QUEST )
        {
          if ( std::vector<std::string>::empty(&combine_config->unlock_config.unlock_param) )
          {
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "rewriteConfig",
              70);
            v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v36 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v35,
                    (const char (*)[56])byte_1AC5CC80);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, combine_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v37 = 0;
          }
          else
          {
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, combine_id);
            *(_DWORD *)(v3 + 80) = 0;
            v38 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v38, (unsigned int *)(v3 + 80), 1) )
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
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "rewriteConfig",
                76);
              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v40 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      v39,
                      (const char (*)[56])byte_1AC5CC80);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, combine_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v37 = 0;
            }
            else
            {
              v41 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                      &this->finished_quest_possible_unlock_map_,
                      (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 80));
              std::vector<unsigned int>::push_back(v41, combine_id);
              v37 = 1;
            }
          }
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v37 != 1 )
          {
            v27 = 0;
            goto LABEL_102;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&combine_config->unlock_config.unlock_method);
          }
          if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_ACTIVITY_COND_MEET )
          {
            if ( std::vector<std::string>::size(&combine_config->unlock_config.unlock_param) > 1 )
            {
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 96, combine_id);
              *(_DWORD *)(v3 + 96) = 0;
              v45 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v45, (unsigned int *)(v3 + 96), 1) )
              {
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 736, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 736),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CombineExcelConfig.cpp",
                  "rewriteConfig",
                  91);
                v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 736),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v47 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        v46,
                        (const char (*)[49])byte_1AC5CD40);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, combine_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v44 = 0;
              }
              else
              {
                *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                v48 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v48 != 0 && (char)v48 <= 3 )
                  __asan_report_store4(v3 + 112, v3 + 96);
                *(_DWORD *)(v3 + 112) = 0;
                v49 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 1uLL);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v49, (unsigned int *)(v3 + 112), 1) )
                {
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 800, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 800),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/CombineExcelConfig.cpp",
                    "rewriteConfig",
                    97);
                  v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 800),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v51 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          v50,
                          (const char (*)[47])byte_1AC5CCE0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, combine_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v44 = 0;
                }
                else
                {
                  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 256, v3 + 112);
                  *(std::pair<unsigned int,unsigned int> *)(v3 + 256) = std::make_pair<unsigned int &,unsigned int &>(
                                                                          (unsigned int *)(v3 + 96),
                                                                          (unsigned int *)(v3 + 112));
                  v52 = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::operator[](
                          &this->activity_cond_possible_unlock_map_,
                          (std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::key_type *)(v3 + 256));
                  std::vector<unsigned int>::push_back(v52, combine_id);
                  *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                  v44 = 1;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 672, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 672),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "rewriteConfig",
                85);
              v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v43 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      v42,
                      (const char (*)[47])byte_1AC5CCE0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, combine_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v44 = 0;
            }
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( v44 != 1 )
            {
              v27 = 0;
              goto LABEL_102;
            }
          }
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 128));
  }
  v27 = 1;
LABEL_102:
  if ( v27 == 1 )
    v2 = 0;
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 110: range 0000000013A525CA-0000000013A55686
int32_t __cdecl CombineExcelConfigMgr::checkConfig(
        CombineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_count; // rax
  uint32_t count; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  _BOOL4 v10; // eax
  int v11; // eax
  __int64 id; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::vector<std::string>::size_type v21; // rax
  int v22; // eax
  const std::string *v23; // rax
  const std::string *v24; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::vector<std::string>::size_type v32; // rax
  int v33; // eax
  const std::string *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  int v38; // eax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::vector<std::string>::size_type v46; // rax
  int v47; // eax
  const std::string *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  int v52; // eax
  __int64 v53; // rsi
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  const std::string *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  NewActivityExcelConfigMgr *v60; // rcx
  int v61; // eax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  unsigned __int64 v64; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::CombineExcelConfig> >::type *p_item_id; // rsi
  uint32_t *v66; // rax
  uint32_t v67; // ecx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  int v70; // eax
  int v71; // eax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  _BOOL4 v85; // r15d
  unsigned __int64 v86; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::CombineExcelConfig> >::type *p_id; // rsi
  uint32_t *v88; // rax
  uint32_t v89; // ecx
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  int v92; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rdx
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  _BOOL4 v98; // r15d
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rdx
  char *v101; // rsi
  unsigned int *v102; // rax
  int *v103; // rdx
  int v104; // ecx
  char v105; // al
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rdx
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  int v110; // edx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rdx
  int v113; // edx
  common::milog::MiLogStream *v114; // rax
  data::CombineExcelConfigMap *__for_range; // [rsp+28h] [rbp-838h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::reference v118; // [rsp+30h] [rbp-830h]
  std::tuple_element<0,std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_id; // [rsp+38h] [rbp-828h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_config; // [rsp+40h] [rbp-820h]
  const std::vector<data::RandomItemConfig> *__for_range_0; // [rsp+48h] [rbp-818h]
  const data::RandomItemConfig *random_item_config; // [rsp+50h] [rbp-810h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+58h] [rbp-808h]
  const data::IdCountConfig *id_count_config; // [rsp+60h] [rbp-800h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-7F8h]
  char v126[2032]; // [rsp+70h] [rbp-7F0h] BYREF

  v3 = (unsigned __int64)v126;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1984LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "40 32 4 18 start_quest_id:133 48 4 16 end_quest_id:134 64 4 12 quest_id:149 80 4 15 activity_id:"
                        "168 96 4 11 cond_id:179 112 4 11 item_id:244 128 8 15 __for_begin:111 160 8 13 __for_end:111 192"
                        " 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 15 __for_begin:194 320 8 13 __for_end:1"
                        "94 352 8 15 __for_begin:222 384 8 13 __for_end:222 416 8 15 __for_begin:244 448 8 13 __for_end:2"
                        "44 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown"
                        "> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown"
                        "> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unk"
                        "nown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 "
                        "<unknown> 1760 32 9 <unknown> 1824 48 22 random_item_id_set:193 1904 48 24 material_item_id_set:221";
  *(_QWORD *)(v3 + 16) = CombineExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
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
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -219021312;
  v5[536862779] = 62194;
  v5[536862781] = -202116109;
  __for_range = &this->combine_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CombineExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombineExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombineExcelConfig>,false> *)(v3 + 160)) )
  {
    v118 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 128));
    combine_id = std::get<0ul,unsigned int const,data::CombineExcelConfig>(v118);
    combine_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CombineExcelConfig>(v118);
    p_count = &combine_config->result_item.count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    count = combine_config->result_item.count;
    if ( *(_BYTE *)(((unsigned __int64)&combine_config->result_item.id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&combine_config->result_item.id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&combine_config->result_item.id);
    }
    if ( CombineExcelConfigMgr::checkItemConfig(this, txt_config_mgr, combine_config->result_item.id, count) )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CombineExcelConfig.cpp",
        "checkConfig",
        116);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v8, (const char (*)[37])byte_1AC5D120);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, combine_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = *(unsigned __int8 *)(((unsigned __int64)&combine_config->result_item.id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_load4(&combine_config->result_item.id);
      id = combine_config->result_item.id;
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, id, ITEM_LIMIT_COMBINE) )
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CombineExcelConfig.cpp",
          "checkConfig",
          121);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v13, (const char (*)[46])byte_1AC5D180);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, combine_id);
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" ItemID:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &combine_config->result_item.id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&combine_config->unlock_config.unlock_method);
        }
        if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_QUEST )
        {
          if ( std::vector<std::string>::size(&combine_config->unlock_config.unlock_param) == 2 )
          {
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 32, id);
            *(_DWORD *)(v3 + 32) = 0;
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 48, id);
            *(_DWORD *)(v3 + 48) = 0;
            v23 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
            id = v3 + 32;
            if ( common::tools::StringUtils::strToNum<unsigned int>(v23, (unsigned int *)(v3 + 32), 1)
              || (v24 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 1uLL),
                  id = v3 + 48,
                  common::tools::StringUtils::strToNum<unsigned int>(v24, (unsigned int *)(v3 + 48), 1)) )
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
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkConfig",
                138);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                      v26,
                      (const char (*)[58])byte_1AC5CBE0);
              id = (__int64)combine_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, combine_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v22 = 0;
            }
            else
            {
              v22 = 1;
            }
          }
          else
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
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "checkConfig",
              130);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    v17,
                    (const char (*)[58])byte_1AC5CBE0);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, combine_id);
            v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v19,
                    (const char (*)[24])byte_1AC5CC40);
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            v21 = std::vector<std::string>::size(&combine_config->unlock_config.unlock_param);
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              v21 = __asan_report_store8(v3 + 192, byte_1AC5CC40);
            *(_QWORD *)(v3 + 192) = v21;
            id = v3 + 192;
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v20,
              (const unsigned __int64 *)(v3 + 192));
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v22 = 0;
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v22 != 1 )
          {
            v10 = 0;
            goto LABEL_187;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&combine_config->unlock_config.unlock_method);
          }
          if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_SEA_LAMP_QUEST )
          {
            if ( std::vector<std::string>::empty(&combine_config->unlock_config.unlock_param) )
            {
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 736, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 736),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkConfig",
                146);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                      v28,
                      (const char (*)[58])byte_1AC5CBE0);
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, combine_id);
              v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v30,
                      (const char (*)[24])byte_1AC5CC40);
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
              v32 = std::vector<std::string>::size(&combine_config->unlock_config.unlock_param);
              if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
                v32 = __asan_report_store8(v3 + 224, byte_1AC5CC40);
              *(_QWORD *)(v3 + 224) = v32;
              id = v3 + 224;
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v31,
                (const unsigned __int64 *)(v3 + 224));
              *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v33 = 0;
            }
            else
            {
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 64, id);
              *(_DWORD *)(v3 + 64) = 0;
              v34 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v34, (unsigned int *)(v3 + 64), 1) )
              {
                *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 800, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 800),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CombineExcelConfig.cpp",
                  "checkConfig",
                  152);
                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v36 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                        v35,
                        (const char (*)[58])byte_1AC5D220);
                id = (__int64)combine_id;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, combine_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v33 = 0;
              }
              else
              {
                p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
                v38 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v38 != 0 && (char)v38 <= 3 )
                  __asan_report_load4(v3 + 64);
                id = *(unsigned int *)(v3 + 64);
                if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, id) )
                {
                  v33 = 1;
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
                    "./src/txt_data_manual/CombineExcelConfig.cpp",
                    "checkConfig",
                    157);
                  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 864),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v40 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                          v39,
                          (const char (*)[54])byte_1AC5D280);
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v40,
                          (const unsigned int *)(v3 + 64));
                  id = (__int64)byte_1AC59EA0;
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])byte_1AC59EA0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                  *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v33 = 0;
                }
              }
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            if ( v33 != 1 )
            {
              v10 = 0;
              goto LABEL_187;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&combine_config->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&combine_config->unlock_config.unlock_method);
            }
            if ( combine_config->unlock_config.unlock_method == COMBINE_UNLOCK_ACTIVITY_COND_MEET )
            {
              if ( std::vector<std::string>::size(&combine_config->unlock_config.unlock_param) > 1 )
              {
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 80, id);
                *(_DWORD *)(v3 + 80) = 0;
                v48 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 0LL);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v48, (unsigned int *)(v3 + 80), 1) )
                {
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 992, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 992),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/CombineExcelConfig.cpp",
                    "checkConfig",
                    171);
                  v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 992),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v50 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          v49,
                          (const char (*)[49])byte_1AC5CD40);
                  id = (__int64)combine_id;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, combine_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v47 = 0;
                }
                else
                {
                  p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
                  v52 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
                  if ( (_BYTE)v52 != 0 && (char)v52 <= 3 )
                    __asan_report_load4(v3 + 80);
                  v53 = *(unsigned int *)(v3 + 80);
                  if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, v53) )
                  {
                    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 96, v53);
                    }
                    *(_DWORD *)(v3 + 96) = 0;
                    v57 = std::vector<std::string>::operator[](&combine_config->unlock_config.unlock_param, 1uLL);
                    if ( common::tools::StringUtils::strToNum<unsigned int>(v57, (unsigned int *)(v3 + 96), 1) )
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
                        "./src/txt_data_manual/CombineExcelConfig.cpp",
                        "checkConfig",
                        182);
                      v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1120),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v59 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                              v58,
                              (const char (*)[47])byte_1AC5CCE0);
                      id = (__int64)combine_id;
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, combine_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
                      *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v47 = 0;
                    }
                    else
                    {
                      v60 = &txt_config_mgr->new_activity_config_mgr;
                      v61 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v61 != 0 && (char)v61 <= 3 )
                        __asan_report_load4(v3 + 96);
                      id = *(unsigned int *)(v3 + 96);
                      if ( data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(v60, id) )
                      {
                        v47 = 1;
                      }
                      else
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
                          "./src/txt_data_manual/CombineExcelConfig.cpp",
                          "checkConfig",
                          187);
                        v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1184),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v63 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                v62,
                                (const char (*)[45])byte_1AC5D340);
                        id = v3 + 96;
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v63,
                          (const unsigned int *)(v3 + 96));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
                        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v47 = 0;
                      }
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1056, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1056),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/CombineExcelConfig.cpp",
                      "checkConfig",
                      176);
                    v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1056),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v55 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                            v54,
                            (const char (*)[54])byte_1AC5D2E0);
                    v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v55,
                            (const unsigned int *)(v3 + 80));
                    id = (__int64)byte_1AC59EA0;
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v56, (const char (*)[7])byte_1AC59EA0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                    *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v47 = 0;
                  }
                }
              }
              else
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
                  "./src/txt_data_manual/CombineExcelConfig.cpp",
                  "checkConfig",
                  165);
                v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 928),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v43 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        v42,
                        (const char (*)[49])byte_1AC5CD40);
                v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, combine_id);
                v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v44,
                        (const char (*)[24])byte_1AC5CC40);
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
                v46 = std::vector<std::string>::size(&combine_config->unlock_config.unlock_param);
                if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
                  v46 = __asan_report_store8(v3 + 256, byte_1AC5CC40);
                *(_QWORD *)(v3 + 256) = v46;
                id = v3 + 256;
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v45,
                  (const unsigned __int64 *)(v3 + 256));
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v47 = 0;
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              if ( v47 != 1 )
              {
                v10 = 0;
                goto LABEL_187;
              }
            }
          }
        }
        v64 = ((v3 + 1824) >> 3) + 2147450880;
        *(_DWORD *)v64 = 0;
        *(_WORD *)(v64 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1824));
        __for_range_0 = &combine_config->random_items;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, id);
        *(std::vector<data::RandomItemConfig>::const_iterator *)(v3 + 288) = std::vector<data::RandomItemConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, id);
        *(std::vector<data::RandomItemConfig>::const_iterator *)(v3 + 320) = std::vector<data::RandomItemConfig>::end(__for_range_0);
        while ( 1 )
        {
          p_item_id = (std::tuple_element<0,std::pair<unsigned int const,data::CombineExcelConfig> >::type *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)(v3 + 320)) )
          {
            v70 = 1;
            goto LABEL_140;
          }
          random_item_config = __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)(v3 + 288));
          v66 = &random_item_config->count;
          if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v66);
          }
          v67 = random_item_config->count;
          if ( *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&random_item_config->item_id);
          }
          if ( CombineExcelConfigMgr::checkItemConfig(this, txt_config_mgr, random_item_config->item_id, v67) )
          {
            *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1248, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1248),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "checkConfig",
              198);
            v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1248),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v69 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    v68,
                    (const char (*)[37])byte_1AC5D3A0);
            p_item_id = combine_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, combine_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
            *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v70 = 0;
            goto LABEL_140;
          }
          v71 = *(unsigned __int8 *)(((unsigned __int64)&random_item_config->item_id >> 3) + 0x7FFF8000);
          if ( (_BYTE)v71 != 0 && (char)v71 <= 3 )
            __asan_report_load4(&random_item_config->item_id);
          if ( !TxtConfigMgr::isItemAllowedByOutputControl(
                  txt_config_mgr,
                  random_item_config->item_id,
                  ITEM_LIMIT_COMBINE) )
          {
            *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1312, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1312),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "checkConfig",
              203);
            v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1312),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v73 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    v72,
                    (const char (*)[46])byte_1AC5D400);
            v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, combine_id);
            v75 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v74, (const char (*)[9])" ItemID:");
            p_item_id = &random_item_config->item_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &random_item_config->item_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
            *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v70 = 0;
            goto LABEL_140;
          }
          if ( *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&random_item_config->weight);
          }
          if ( random_item_config->weight > 0x2710 )
          {
            *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1376, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1376),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/CombineExcelConfig.cpp",
              "checkConfig",
              209);
            v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1376),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v77 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v76,
                    (const char (*)[43])byte_1AC5D460);
            v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, combine_id);
            v79 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v78,
                    (const char (*)[11])byte_1AC5D4C0);
            p_item_id = &random_item_config->item_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &random_item_config->item_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
            *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v70 = 0;
            goto LABEL_140;
          }
          v80 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 1824), &random_item_config->item_id);
          if ( !v80.second )
            break;
          __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)(v3 + 288));
        }
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1440, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1440),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CombineExcelConfig.cpp",
          "checkConfig",
          215);
        v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1440),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v82 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v81, (const char (*)[42])byte_1AC5D500);
        v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, combine_id);
        v84 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v83, (const char (*)[11])byte_1AC5D4C0);
        p_item_id = &random_item_config->item_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &random_item_config->item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v70 = 0;
LABEL_140:
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v70 == 1 )
        {
          v86 = ((v3 + 1904) >> 3) + 2147450880;
          *(_DWORD *)v86 = 0;
          *(_WORD *)(v86 + 4) = 0;
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1904));
          __for_range_1 = &combine_config->material_items;
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 352, p_item_id);
          *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 352) = std::vector<data::IdCountConfig>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 384, p_item_id);
          *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 384) = std::vector<data::IdCountConfig>::end(__for_range_1);
          while ( 1 )
          {
            p_id = (std::tuple_element<0,std::pair<unsigned int const,data::CombineExcelConfig> >::type *)(v3 + 384);
            if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 352),
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 384)) )
            {
              v92 = 1;
              goto LABEL_162;
            }
            id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 352));
            v88 = &id_count_config->count;
            if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v88);
            }
            v89 = id_count_config->count;
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&id_count_config->id);
            }
            if ( CombineExcelConfigMgr::checkItemConfig(this, txt_config_mgr, id_count_config->id, v89) )
            {
              *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1504, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1504),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkConfig",
                226);
              v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1504),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v91 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v90,
                      (const char (*)[31])byte_1AC5D560);
              p_id = combine_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, combine_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
              *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v92 = 0;
              goto LABEL_162;
            }
            v93 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 1904), &id_count_config->id);
            if ( !v93.second )
              break;
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 352));
          }
          *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1568, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1568),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/CombineExcelConfig.cpp",
            "checkConfig",
            232);
          v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1568),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v95 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v94, (const char (*)[36])byte_1AC5D5A0);
          v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, combine_id);
          v97 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v96, (const char (*)[11])byte_1AC5D4C0);
          p_id = &id_count_config->id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, &id_count_config->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
          *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v92 = 0;
LABEL_162:
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
          if ( v92 == 1 )
          {
            if ( std::vector<data::IdCountConfig>::empty(&combine_config->material_items) )
            {
              *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1632) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1632, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1632),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkConfig",
                239);
              v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1632),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v100 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                       v99,
                       (const char (*)[31])byte_1AC5D600);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, combine_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
              *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v98 = 0;
            }
            else
            {
              __for_range_2 = &combine_config->special_output_items;
              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 416, p_id);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_2);
              *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 448, p_id);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_2);
              while ( 1 )
              {
                v101 = (char *)(v3 + 448);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 448)) )
                {
                  v110 = 1;
                  goto LABEL_184;
                }
                *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                v102 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
                v103 = (int *)v102;
                if ( *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v102 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v102);
                }
                v104 = *v103;
                v105 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
                if ( v105 != 0 && v105 <= 3 )
                {
                  LOBYTE(v101) = v105 != 0;
                  __asan_report_store4(v3 + 112, v101);
                }
                *(_DWORD *)(v3 + 112) = v104;
                if ( !TxtConfigMgr::isItemAllowedByOutputControl(
                        txt_config_mgr,
                        *(_DWORD *)(v3 + 112),
                        ITEM_LIMIT_COMBINE) )
                  break;
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
              }
              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1696) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1696, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1696),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkConfig",
                248);
              v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 1696),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v107 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                       v106,
                       (const char (*)[46])byte_1AC5D640);
              v108 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v107, combine_id);
              v109 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v108, (const char (*)[9])" ItemID:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v109,
                (const unsigned int *)(v3 + 112));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v110 = 0;
LABEL_184:
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
              v98 = v110 == 1;
            }
          }
          else
          {
            v98 = 0;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1904));
          v85 = v98;
        }
        else
        {
          v85 = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1824));
        v10 = v85;
      }
    }
LABEL_187:
    v111 = ((v3 + 1824) >> 3) + 2147450880;
    *(_DWORD *)v111 = -117901064;
    *(_WORD *)(v111 + 4) = -1800;
    v112 = ((v3 + 1904) >> 3) + 2147450880;
    *(_DWORD *)v112 = -117901064;
    *(_WORD *)(v112 + 4) = -1800;
    if ( !v10 )
    {
      v113 = 0;
      goto LABEL_191;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false> *const)(v3 + 128));
  }
  v113 = 1;
LABEL_191:
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v113 == 1 )
  {
    if ( CombineExcelConfigMgr::checkReliquaryDecomposeConfig(this, txt_config_mgr) )
    {
      *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1760, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1760),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CombineExcelConfig.cpp",
        "checkConfig",
        256);
      v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 1760),
               (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v114,
        (const char (*)[26])"check combine config fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  if ( v126 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 220) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80F0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1984LL, v126);
  }
  return v2;
};

// Line 265: range 0000000013A55688-0000000013A55B80
__int64 __fastcall CombineExcelConfigMgr::checkItemConfig(
        const CombineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t item_id,
        uint32_t count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-128h]
  char v17[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 11 item_id:264 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = CombineExcelConfigMgr::checkItemConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 48) = item_id;
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, *(_DWORD *)(v4 + 48));
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( item_config_ptr->item_type != ITEM_VIRTUAL || *(_DWORD *)(v4 + 48) == 106 )
    {
      if ( count )
      {
        result = 0LL;
      }
      else
      {
        if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CombineExcelConfig.cpp",
          "checkItemConfig",
          281);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v12, (const char (*)[28])byte_1AC5D840);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
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
        "./src/txt_data_manual/CombineExcelConfig.cpp",
        "checkItemConfig",
        275);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v10, (const char (*)[66])byte_1AC5D7C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/CombineExcelConfig.cpp",
      "checkItemConfig",
      269);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1AC5D780);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 0000000013A55B82-0000000013A56ABF
int32_t __cdecl CombineExcelConfigMgr::checkReliquaryDecomposeConfig(
        const CombineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_drop_id; // rax
  __int64 drop_id; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  const std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::key_type *v13; // rdx
  const std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::key_type *v14; // rsi
  char *v15; // rsi
  bool v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  uint32_t count; // ecx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int32_t ret; // [rsp+14h] [rbp-2BCh]
  std::unordered_map<unsigned int,std::vector<data::IdCountConfig>> *max_drop_item_map; // [rsp+18h] [rbp-2B8h]
  data::ReliquaryDecomposeExcelConfigMap *__for_range; // [rsp+20h] [rbp-2B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>::reference v47; // [rsp+28h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig> >::type *config_id; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig> >::type *config; // [rsp+38h] [rbp-298h]
  std::vector<data::IdCountConfig> *__for_range_0; // [rsp+40h] [rbp-290h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-288h]
  char v52[640]; // [rsp+50h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 8 15 __for_begin:293 64 8 13 __for_end:293 96 8 8 iter:307 128 8 9 <unknown> 160 8 15 __fo"
                        "r_begin:314 192 8 13 __for_end:314 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 "
                        "32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CombineExcelConfigMgr::checkReliquaryDecomposeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  max_drop_item_map = &txt_config_mgr->drop_config_mgr.max_drop_item_map;
  ret = 0;
  __for_range = &this->reliquary_decompose_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReliquaryDecomposeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false> *)(v2 + 64)) )
  {
    v47 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ReliquaryDecomposeExcelConfig>(v47);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryDecomposeExcelConfig>(v47);
    p_drop_id = &config->drop_id;
    if ( *(_BYTE *)(((unsigned __int64)p_drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_drop_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_drop_id);
    }
    drop_id = config->drop_id;
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            drop_id,
                            ITEM_LIMIT_RELIQUARY_DECOMPOSE) != 1 )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CombineExcelConfig.cpp",
        "checkReliquaryDecomposeConfig",
        297);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             v7,
             (const char (*)[50])"isValidDropIdAndMatchItemLimitType fail, drop_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->drop_id);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->need_reliquary_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->need_reliquary_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->need_reliquary_count);
      }
      if ( config->need_reliquary_count )
      {
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        v13 = &config->drop_id;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 96, drop_id);
        v14 = v13;
        *(std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::find(max_drop_item_map, v13);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v14);
        *(std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<data::IdCountConfig>>::end(max_drop_item_map);
        v15 = (char *)(v2 + 128);
        v16 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::IdCountConfig>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::IdCountConfig> >,false> *)(v2 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::IdCountConfig> >,false> *)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v16 )
        {
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
            "./src/txt_data_manual/CombineExcelConfig.cpp",
            "checkReliquaryDecomposeConfig",
            310);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v17,
                  (const char (*)[37])"max_drop_item_map not found drop_id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->drop_id);
          v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          __for_range_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::IdCountConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::IdCountConfig> >,false,false> *const)(v2 + 96))->second;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 160, v15);
          *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 160) = std::vector<data::IdCountConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 192, v15);
          *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 192) = std::vector<data::IdCountConfig>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 160),
                    (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 192)) )
          {
            id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 160));
            p_reliquary_config_mgr = &txt_config_mgr->reliquary_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&id_count_config->id);
            }
            if ( data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                   p_reliquary_config_mgr,
                   id_count_config->id) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&id_count_config->count);
              }
              count = id_count_config->count;
              if ( *(_BYTE *)(((unsigned __int64)&config->need_reliquary_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->need_reliquary_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->need_reliquary_count);
              }
              if ( count < config->need_reliquary_count )
              {
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
                  1u,
                  "./src/txt_data_manual/CombineExcelConfig.cpp",
                  "checkReliquaryDecomposeConfig",
                  328);
                v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        (common::milog::MiLogStream *const)(v2 + 544),
                        (const char (*)[11])"config_id:");
                v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, config_id);
                v39 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v38,
                        (const char (*)[10])" item_id:");
                v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &id_count_config->id);
                v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" count:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &id_count_config->count);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
                *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
              }
              else
              {
                *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 480, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 480),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/CombineExcelConfig.cpp",
                  "checkReliquaryDecomposeConfig",
                  324);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 480),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v29,
                        (const char (*)[42])"output more reliquary than cost! item_id:");
                v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &id_count_config->id);
                v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" count:");
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v32,
                        &id_count_config->count);
                v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v33,
                        (const char (*)[10])" drop_id:");
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->drop_id);
                v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v35,
                        (const char (*)[12])" config_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
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
                "./src/txt_data_manual/CombineExcelConfig.cpp",
                "checkReliquaryDecomposeConfig",
                318);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v23 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      v22,
                      (const char (*)[40])"findReliquaryExcelConfig fail, item_id:");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &id_count_config->id);
              v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v24,
                      (const char (*)[10])" drop_id:");
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->drop_id);
              v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v26,
                      (const char (*)[12])" config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 160));
          }
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else
      {
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
          "./src/txt_data_manual/CombineExcelConfig.cpp",
          "checkReliquaryDecomposeConfig",
          303);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v11,
                (const char (*)[38])"need_reliquary_count is 0, config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryDecomposeExcelConfig>,false,false> *const)(v2 + 32));
  }
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return ret;
};

// Line 336: range 0000000013A56AC0-0000000013A56C81
const std::vector<unsigned int> *__fastcall CombineExcelConfigMgr::findPossibleCombineVecByFinishQuest(
        const CombineExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_finished_quest_possible_unlock_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:335 64 8 8 iter:337 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CombineExcelConfigMgr::findPossibleCombineVecByFinishQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_finished_quest_possible_unlock_map = &this->finished_quest_possible_unlock_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_finished_quest_possible_unlock_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->finished_quest_possible_unlock_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 346: range 0000000013A56C82-0000000013A56E24
const std::vector<unsigned int> *__cdecl CombineExcelConfigMgr::findPossibleCombineVecByCondMeet(
        const CombineExcelConfigMgr *const this,
        const std::pair<unsigned int,unsigned int> *activity_cond_pair)
{
  std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>> *p_activity_cond_possible_unlock_map; // rdx
  std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Base_ptr)"2 32 8 8 iter:347 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Base_ptr)CombineExcelConfigMgr::findPossibleCombineVecByCondMeet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_activity_cond_possible_unlock_map = &this->activity_cond_possible_unlock_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], activity_cond_pair);
  v2[4]._M_node = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::find(
                    p_activity_cond_possible_unlock_map,
                    activity_cond_pair)._M_node;
  v6 = &this->activity_cond_possible_unlock_map_;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], activity_cond_pair);
  v2[8]._M_node = std::map<std::pair<unsigned int,unsigned int>,std::vector<unsigned int>>::end(v6)._M_node;
  v7 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::vector<unsigned int>>>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::vector<unsigned int> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

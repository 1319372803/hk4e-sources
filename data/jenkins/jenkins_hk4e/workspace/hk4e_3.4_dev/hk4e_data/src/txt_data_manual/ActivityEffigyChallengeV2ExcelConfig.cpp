// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp

// Line 21: range 0000000012B02A00-0000000012B02BE3
int32_t __cdecl ActivityEffigyChallengeV2ExcelConfigMgr::checkConfig(
        ActivityEffigyChallengeV2ExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityEffigyChallengeV2ExcelConfigMgr::checkEffigyChallengeV2Config(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      v5,
      (const char (*)[56])"[EffigyChallengeV2] checkEffigyChallengeV2Config failed");
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

// Line 32: range 0000000012B02BE4-0000000012B037F1
int32_t __cdecl ActivityEffigyChallengeV2ExcelConfigMgr::rewriteConfig(
        ActivityEffigyChallengeV2ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::EffigyChallengeV2OverallExcelConfigMap *p_effigy_challenge_v2_overall_excel_config_map; // rcx
  char v7; // al
  data::EffigyChallengeV2OverallExcelConfigMap *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false>::pointer v11; // rax
  uint32_t highest_difficulty; // ecx
  char v13; // al
  std::string *p_t_skill_global_value; // rsi
  unsigned int *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v16; // rax
  unsigned int *v17; // r8
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned int *v26; // rax
  unsigned int *v27; // rcx
  unsigned int *v28; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  const unsigned int *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  std::vector<unsigned int>::reference v36; // [rsp+8h] [rbp-278h]
  uint32_t i; // [rsp+24h] [rbp-25Ch]
  const data::EffigyChallengeV2OverallExcelConfig *overall_config; // [rsp+28h] [rbp-258h]
  data::EffigyChallengeV2ExcelConfigMap *__for_range; // [rsp+30h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-248h]
  std::tuple_element<1,std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *level_config; // [rsp+48h] [rbp-238h]
  char v42[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 9 <unknown> 64 8 22 overall_config_iter:33 96 8 9 <unknown> 128 8 14 __for_begin:42 160 "
                        "8 12 __for_end:42 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 44"
                        "8 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  p_effigy_challenge_v2_overall_excel_config_map = &this->effigy_challenge_v2_overall_excel_config_map;
  v7 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(txt_config_mgr) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 1;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::find(p_effigy_challenge_v2_overall_excel_config_map, (const std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::key_type *)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->effigy_challenge_v2_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::end(v8);
  v9 = (char *)(v3 + 96);
  v10 = std::__detail::operator==<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false> *)(v3 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      3u,
      "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
      "rewriteConfig",
      36);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v3 + 192),
      (const char (*)[51])"[EFFIGY CHALLENGE V2] overall config cant find one");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  else
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false> *const)(v3 + 64));
    overall_config = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)&v11->second.highest_difficulty >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->second.highest_difficulty >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v11->second.highest_difficulty);
    }
    highest_difficulty = overall_config->highest_difficulty;
    v13 = *(_BYTE *)(((unsigned __int64)&this->highest_difficulty_ >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v9) = v13 != 0;
      __asan_report_store4(&this->highest_difficulty_, v9);
    }
    this->highest_difficulty_ = highest_difficulty;
    p_t_skill_global_value = &overall_config->t_skill_global_value;
    std::string::operator=(&this->t_skill_global_value_, &overall_config->t_skill_global_value);
    __for_range = &this->effigy_challenge_v2_excel_config_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_t_skill_global_value);
    *(std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_t_skill_global_value);
    *(std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::end(__for_range);
LABEL_23:
    if ( std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false> *)(v3 + 128),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false> *)(v3 + 160)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false> *const)(v3 + 128));
      std::get<0ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(__in);
      level_config = std::get<1ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(__in);
      v16 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
              &this->dungeon_id_2_level_id_map_,
              &level_config->normal_dungeon_id,
              &level_config->id,
              &level_config->normal_dungeon_id,
              v15);
      if ( !v16.second )
      {
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
          "rewriteConfig",
          46);
        v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[19])"normal dungeon id ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &level_config->normal_dungeon_id);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" is duplicate");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        v2 = -1;
        v20 = 0;
      }
      else
      {
        v21 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                &this->dungeon_id_2_level_id_map_,
                &level_config->challenge_dungeon_id,
                &level_config->id,
                &level_config->challenge_dungeon_id,
                v17);
        if ( !v21.second )
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
            3u,
            "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
            "rewriteConfig",
            51);
          v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[22])"challenge dungeon id ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  &level_config->challenge_dungeon_id);
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" is duplicate");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          v2 = -1;
          v20 = 0;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= std::vector<unsigned int>::size(&level_config->normal_gallery_id_list) )
            {
              std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false> *const)(v3 + 128));
              goto LABEL_23;
            }
            if ( i >= std::vector<unsigned int>::size(&level_config->normal_skill_id_list) )
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
                3u,
                "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                "rewriteConfig",
                58);
              v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                      (common::milog::MiLogStream *const)(v3 + 384),
                      (const char (*)[7])"level ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &level_config->id);
              common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v25,
                (const char (*)[58])" normal gallery id list and skill list has different size");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
              v2 = -1;
              v20 = 0;
              goto LABEL_45;
            }
            v36 = std::vector<unsigned int>::operator[](&level_config->normal_skill_id_list, i);
            v26 = std::vector<unsigned int>::operator[](&level_config->normal_gallery_id_list, i);
            v29 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                    &this->normal_gallery_skill_map_,
                    v26,
                    v36,
                    v27,
                    v28);
            if ( !v29.second )
              break;
          }
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
            "rewriteConfig",
            63);
          v30 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[7])"level ");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &level_config->id);
          v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])" gallery id ");
          v33 = std::vector<unsigned int>::operator[](&level_config->normal_gallery_id_list, i);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, v33);
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v34, (const char (*)[14])" is duplicate");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          v2 = -1;
          v20 = 0;
        }
      }
    }
    else
    {
      v20 = 1;
    }
LABEL_45:
    if ( v20 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 72: range 0000000012B037F2-0000000012B06E73
int32_t __cdecl ActivityEffigyChallengeV2ExcelConfigMgr::checkEffigyChallengeV2Config(
        ActivityEffigyChallengeV2ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::EffigyChallengeV2OverallExcelConfigMap *p_effigy_challenge_v2_overall_excel_config_map; // rcx
  char v7; // al
  data::EffigyChallengeV2OverallExcelConfigMap *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false>::pointer v12; // rax
  uint32_t highest_difficulty; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  const char *v18; // rsi
  uint32_t normal_dungeon_id; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  char *v32; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  unsigned int *v39; // rax
  int *v40; // rdx
  int v41; // ecx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int v48; // eax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  unsigned int *v60; // rax
  int *v61; // rdx
  int v62; // ecx
  char v63; // al
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  int v69; // edx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  uint32_t challenge_dungeon_id; // ecx
  char v77; // al
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  char *v88; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  unsigned int *v95; // rax
  int *v96; // rdx
  int v97; // ecx
  char v98; // al
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rdx
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  int v104; // eax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rdx
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  unsigned int *v110; // rax
  int *v111; // rdx
  int v112; // ecx
  char v113; // al
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rdx
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  int v119; // edx
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rdx
  common::milog::MiLogStream *v122; // rax
  int v123; // edx
  const char *v124; // rsi
  common::milog::MiLogStream *v125; // rax
  int v126; // edx
  std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::size_type v127; // rcx
  char v128; // al
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  unsigned int v131; // ecx
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rdx
  common::milog::MiLogStream *v134; // rax
  int v135; // edx
  std::vector<unsigned int>::size_type v137; // [rsp+8h] [rbp-978h]
  const TxtConfigMgr *txt_config_mgra; // [rsp+10h] [rbp-970h]
  const data::EffigyChallengeV2OverallExcelConfig *overall_config; // [rsp+28h] [rbp-958h]
  data::EffigyChallengeV2ExcelConfigMap *__for_range; // [rsp+30h] [rbp-950h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::reference v141; // [rsp+38h] [rbp-948h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *id; // [rsp+40h] [rbp-940h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-938h]
  const data::DungeonExcelConfig *normal_dungeon_config_ptr; // [rsp+50h] [rbp-930h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-928h]
  const data::GalleryExcelConfig *normal_gallery_config_ptr; // [rsp+60h] [rbp-920h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-918h]
  const data::DungeonExcelConfig *challenge_dungeon_config_ptr; // [rsp+70h] [rbp-910h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+78h] [rbp-908h]
  const data::GalleryExcelConfig *challenge_gallery_config_ptr; // [rsp+80h] [rbp-900h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+88h] [rbp-8F8h]
  data::EffigyChallengeV2SkillExcelConfigMap *__for_range_4; // [rsp+90h] [rbp-8F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false,false>::reference v153; // [rsp+98h] [rbp-8E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig> >::type *excel_config_0; // [rsp+A8h] [rbp-8D8h]
  data::EffigyChallengeV2DifficultyExcelConfigMap *__for_range_5; // [rsp+B0h] [rbp-8D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false>::reference v156; // [rsp+B8h] [rbp-8C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig> >::type *difficulty_id; // [rsp+C0h] [rbp-8C0h]
  char v158[2224]; // [rsp+D0h] [rbp-8B0h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v158;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "47 32 4 9 <unknown> 48 4 21 highest_difficulty:81 64 4 20 normal_dungeon_id:94 80 4 14 gallery_i"
                        "d:112 96 4 12 skill_id:132 112 4 24 challenge_dungeon_id:152 128 4 14 gallery_id:170 144 4 12 sk"
                        "ill_id:185 160 8 22 overall_config_iter:74 192 8 9 <unknown> 224 8 14 __for_begin:91 256 8 12 __"
                        "for_end:91 288 8 15 __for_begin:112 320 8 13 __for_end:112 352 8 15 __for_begin:132 384 8 13 __f"
                        "or_end:132 416 8 15 __for_begin:170 448 8 13 __for_end:170 480 8 15 __for_begin:185 512 8 13 __f"
                        "or_end:185 544 8 15 __for_begin:200 576 8 13 __for_end:200 608 8 15 __for_begin:214 640 8 13 __f"
                        "or_end:214 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 "
                        "<unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32"
                        " 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 156"
                        "8 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown>"
                        " 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 48 17 dungeon_id_set:88 2096 48 24 normal_gallery_id_set:90";
  *(_QWORD *)(v3 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::checkEffigyChallengeV2Config;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
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
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
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
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -219021312;
  v5[536862785] = 62194;
  v5[536862787] = -202116109;
  p_effigy_challenge_v2_overall_excel_config_map = &this->effigy_challenge_v2_overall_excel_config_map;
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(txt_config_mgr) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 1;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::find(p_effigy_challenge_v2_overall_excel_config_map, (const std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::key_type *)(v3 + 32));
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->effigy_challenge_v2_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v3 + 32);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::EffigyChallengeV2OverallExcelConfig>::end(v8);
  v9 = (char *)(v3 + 192);
  v10 = std::__detail::operator==<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false> *)(v3 + 160),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false> *)(v3 + 192));
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
      "checkEffigyChallengeV2Config",
      77);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 672),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      v11,
      (const char (*)[51])"[EFFIGY CHALLENGE V2] overall config cant find one");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
    v2 = -1;
  }
  else
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2OverallExcelConfig>,false,false> *const)(v3 + 160));
    overall_config = &v12->second;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&v12->second.highest_difficulty >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->second.highest_difficulty >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v12->second.highest_difficulty);
    }
    highest_difficulty = overall_config->highest_difficulty;
    v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v14 != 0;
    if ( v14 != 0 && v14 <= 3 )
      __asan_report_store4(v3 + 48, v9);
    *(_DWORD *)(v3 + 48) = highest_difficulty;
    if ( (unsigned __int8)std::string::empty() )
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
        "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
        "checkEffigyChallengeV2Config",
        84);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
        v15,
        (const char (*)[67])"[EFFIGY CHALLENGE V2] overall config t_skill_global_value is empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      v2 = -1;
    }
    else
    {
      v16 = ((v3 + 2016) >> 3) + 2147450880;
      *(_DWORD *)v16 = 0;
      *(_WORD *)(v16 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2016));
      v17 = ((v3 + 2096) >> 3) + 2147450880;
      *(_DWORD *)v17 = 0;
      *(_WORD *)(v17 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2096));
      __for_range = &this->effigy_challenge_v2_excel_config_map;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v9);
      *(std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::begin(__for_range);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v9);
      *(std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::EffigyChallengeV2ExcelConfig>::end(__for_range);
      while ( 1 )
      {
        v18 = (const char *)(v3 + 256);
        if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false> *)(v3 + 224),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false> *)(v3 + 256)) )
          break;
        v141 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false> *const)(v3 + 224));
        id = std::get<0ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(v141);
        excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyChallengeV2ExcelConfig>(v141);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->normal_dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&excel_config->normal_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&excel_config->normal_dungeon_id);
        }
        normal_dungeon_id = excel_config->normal_dungeon_id;
        v20 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v20 != 0 && v20 <= 3 )
        {
          LOBYTE(v18) = v20 != 0;
          __asan_report_store4(v3 + 64, v18);
        }
        *(_DWORD *)(v3 + 64) = normal_dungeon_id;
        normal_dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                      &txt_config_mgra->dungeon_config_mgr,
                                      *(unsigned int *)(v3 + 64));
        if ( normal_dungeon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&normal_dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)normal_dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&normal_dungeon_config_ptr->type >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&normal_dungeon_config_ptr->type);
          }
          if ( normal_dungeon_config_ptr->type == DUNGEON_EFFIGY_CHALLENGE_V2 )
          {
            v32 = (char *)(v3 + 64);
            v33 = std::set<unsigned int>::emplace<unsigned int const&>(
                    (std::set<unsigned int> *const)(v3 + 2016),
                    (const unsigned int *)(v3 + 64),
                    (const unsigned int *)(v3 + 64));
            if ( !v33.second )
            {
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                "checkEffigyChallengeV2Config",
                108);
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 928),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v35 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      v34,
                      (const char (*)[37])byte_1AA2DF80);
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
              v37 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v36,
                      (const char (*)[27])byte_1AA2E020);
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v37,
                      (const unsigned int *)(v3 + 64));
              v18 = byte_1AA1BDC0;
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])byte_1AA1BDC0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v26 = 0;
            }
            else
            {
              __for_range_0 = &excel_config->normal_gallery_id_list;
              *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 288, v32);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 320, v32);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_0);
              while ( 1 )
              {
                v18 = (const char *)(v3 + 320);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
                {
                  v48 = 1;
                  goto LABEL_72;
                }
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                v39 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
                v40 = (int *)v39;
                if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v39);
                }
                v41 = *v40;
                v42 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                if ( v42 != 0 && v42 <= 3 )
                {
                  LOBYTE(v18) = v42 != 0;
                  __asan_report_store4(v3 + 80, v18);
                }
                *(_DWORD *)(v3 + 80) = v41;
                normal_gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                              &txt_config_mgra->gallery_config_mgr,
                                              *(unsigned int *)(v3 + 80));
                if ( !normal_gallery_config_ptr )
                {
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 992, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 992),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                    "checkEffigyChallengeV2Config",
                    117);
                  v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 992),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v44 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          v43,
                          (const char (*)[37])byte_1AA2DF80);
                  v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
                  v46 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          v45,
                          (const char (*)[36])byte_1AA2E060);
                  v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v46,
                          (const unsigned int *)(v3 + 80));
                  v18 = byte_1AA2E0C0;
                  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v47,
                    (const char (*)[11])byte_1AA2E0C0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v48 = 0;
                  goto LABEL_72;
                }
                if ( *(_BYTE *)(((unsigned __int64)&normal_gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)normal_gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&normal_gallery_config_ptr->type >> 3)
                                                                                           + 0x7FFF8000) )
                {
                  __asan_report_load4(&normal_gallery_config_ptr->type);
                }
                if ( normal_gallery_config_ptr->type != GALLERY_TYPE_EFFIGY_CHALLENGE_V2 )
                {
                  *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1056, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1056),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                    "checkEffigyChallengeV2Config",
                    122);
                  v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1056),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v50 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          v49,
                          (const char (*)[37])byte_1AA2DF80);
                  v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, id);
                  v52 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          v51,
                          (const char (*)[36])byte_1AA2E060);
                  v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v52,
                          (const unsigned int *)(v3 + 80));
                  v18 = byte_1AA2E100;
                  common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v53,
                    (const char (*)[30])byte_1AA2E100);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                  *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v48 = 0;
                  goto LABEL_72;
                }
                v54 = std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v3 + 2096),
                        (const std::set<unsigned int>::value_type *)(v3 + 80));
                if ( !v54.second )
                  break;
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
              }
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
                "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                "checkEffigyChallengeV2Config",
                127);
              v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v56 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      v55,
                      (const char (*)[37])byte_1AA2DF80);
              v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, id);
              v58 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v57,
                      (const char (*)[36])byte_1AA2E060);
              v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v58,
                      (const unsigned int *)(v3 + 80));
              v18 = byte_1AA2E140;
              common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v59, (const char (*)[14])byte_1AA2E140);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
              *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v48 = 0;
LABEL_72:
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
              if ( v48 == 1 )
              {
                __for_range_1 = &excel_config->normal_skill_id_list;
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 352, v18);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_1);
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 384, v18);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_1);
                while ( 1 )
                {
                  v18 = (const char *)(v3 + 384);
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
                  {
                    v69 = 1;
                    goto LABEL_90;
                  }
                  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                  v60 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
                  v61 = (int *)v60;
                  if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v60);
                  }
                  v62 = *v61;
                  v63 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
                  if ( v63 != 0 && v63 <= 3 )
                  {
                    LOBYTE(v18) = v63 != 0;
                    __asan_report_store4(v3 + 96, v18);
                  }
                  *(_DWORD *)(v3 + 96) = v62;
                  if ( !data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2SkillExcelConfig(
                          this,
                          *(unsigned int *)(v3 + 96)) )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
                }
                *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1184, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1184),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                  "checkEffigyChallengeV2Config",
                  136);
                v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1184),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v65 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        v64,
                        (const char (*)[37])byte_1AA2DF80);
                v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, id);
                v67 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        v66,
                        (const char (*)[34])byte_1AA2E180);
                v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v67,
                        (const unsigned int *)(v3 + 96));
                v18 = byte_1AA2E0C0;
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])byte_1AA2E0C0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
                *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v69 = 0;
LABEL_90:
                *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                if ( v69 == 1 )
                {
                  v137 = std::vector<unsigned int>::size(&excel_config->normal_gallery_id_list);
                  if ( v137 == std::vector<unsigned int>::size(&excel_config->normal_skill_id_list) )
                  {
                    if ( std::vector<unsigned int>::size(&excel_config->normal_gallery_id_list) )
                    {
                      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((unsigned __int64)&excel_config->challenge_dungeon_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&excel_config->challenge_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&excel_config->challenge_dungeon_id);
                      }
                      challenge_dungeon_id = excel_config->challenge_dungeon_id;
                      v77 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
                      if ( v77 != 0 && v77 <= 3 )
                      {
                        LOBYTE(v18) = v77 != 0;
                        __asan_report_store4(v3 + 112, v18);
                      }
                      *(_DWORD *)(v3 + 112) = challenge_dungeon_id;
                      challenge_dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                                       &txt_config_mgra->dungeon_config_mgr,
                                                       *(unsigned int *)(v3 + 112));
                      if ( challenge_dungeon_config_ptr )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&challenge_dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)challenge_dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_dungeon_config_ptr->type >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load4(&challenge_dungeon_config_ptr->type);
                        }
                        if ( challenge_dungeon_config_ptr->type == DUNGEON_EFFIGY_CHALLENGE_V2 )
                        {
                          v88 = (char *)(v3 + 112);
                          v89 = std::set<unsigned int>::emplace<unsigned int const&>(
                                  (std::set<unsigned int> *const)(v3 + 2016),
                                  (const unsigned int *)(v3 + 112),
                                  (const unsigned int *)(v3 + 112));
                          if ( !v89.second )
                          {
                            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 1504, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 1504),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                              "checkEffigyChallengeV2Config",
                              166);
                            v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v3 + 1504),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v91 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                    v90,
                                    (const char (*)[37])byte_1AA2DF80);
                            v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, id);
                            v93 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                    v92,
                                    (const char (*)[27])byte_1AA2E2A0);
                            v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v93,
                                    (const unsigned int *)(v3 + 112));
                            v18 = byte_1AA1BDC0;
                            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v94,
                              (const char (*)[8])byte_1AA1BDC0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
                            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v26 = 0;
                          }
                          else
                          {
                            __for_range_2 = &excel_config->challenge_gallery_id_list;
                            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                              __asan_report_store8(v3 + 416, v88);
                            *(std::vector<unsigned int>::const_iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_2);
                            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
                            if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
                              __asan_report_store8(v3 + 448, v88);
                            *(std::vector<unsigned int>::const_iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_2);
                            while ( 1 )
                            {
                              v18 = (const char *)(v3 + 448);
                              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 416),
                                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 448)) )
                              {
                                v104 = 1;
                                goto LABEL_140;
                              }
                              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
                              v95 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
                              v96 = (int *)v95;
                              if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
                                && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3)
                                                                                      + 0x7FFF8000) )
                              {
                                __asan_report_load4(v95);
                              }
                              v97 = *v96;
                              v98 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
                              if ( v98 != 0 && v98 <= 3 )
                              {
                                LOBYTE(v18) = v98 != 0;
                                __asan_report_store4(v3 + 128, v18);
                              }
                              *(_DWORD *)(v3 + 128) = v97;
                              challenge_gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                                               &txt_config_mgra->gallery_config_mgr,
                                                               *(unsigned int *)(v3 + 128));
                              if ( !challenge_gallery_config_ptr )
                              {
                                *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 1568, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 1568),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                                  "checkEffigyChallengeV2Config",
                                  175);
                                v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v3 + 1568),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                v100 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                         v99,
                                         (const char (*)[37])byte_1AA2DF80);
                                v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, id);
                                v102 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                         v101,
                                         (const char (*)[36])byte_1AA2E2E0);
                                v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v102,
                                         (const unsigned int *)(v3 + 128));
                                v18 = byte_1AA2E0C0;
                                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v103,
                                  (const char (*)[11])byte_1AA2E0C0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
                                *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                                v2 = -1;
                                v104 = 0;
                                goto LABEL_140;
                              }
                              if ( *(_BYTE *)(((unsigned __int64)&challenge_gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                                && (char)((((_BYTE)challenge_gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_gallery_config_ptr->type >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load4(&challenge_gallery_config_ptr->type);
                              }
                              if ( challenge_gallery_config_ptr->type != GALLERY_TYPE_EFFIGY_CHALLENGE_V2 )
                                break;
                              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 416));
                            }
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
                              "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                              "checkEffigyChallengeV2Config",
                              180);
                            v105 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 1632),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v106 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                     v105,
                                     (const char (*)[37])byte_1AA2DF80);
                            v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v106, id);
                            v108 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                     v107,
                                     (const char (*)[36])byte_1AA2E2E0);
                            v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v108,
                                     (const unsigned int *)(v3 + 128));
                            v18 = byte_1AA2E100;
                            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                              v109,
                              (const char (*)[30])byte_1AA2E100);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
                            *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v104 = 0;
LABEL_140:
                            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                            if ( v104 == 1 )
                            {
                              __for_range_3 = &excel_config->challenge_skill_id_list;
                              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
                              if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
                                __asan_report_store8(v3 + 480, v18);
                              *(std::vector<unsigned int>::const_iterator *)(v3 + 480) = std::vector<unsigned int>::begin(__for_range_3);
                              *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
                              if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
                                __asan_report_store8(v3 + 512, v18);
                              *(std::vector<unsigned int>::const_iterator *)(v3 + 512) = std::vector<unsigned int>::end(__for_range_3);
                              while ( 1 )
                              {
                                v18 = (const char *)(v3 + 512);
                                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 480),
                                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 512)) )
                                {
                                  v119 = 1;
                                  goto LABEL_158;
                                }
                                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
                                v110 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
                                v111 = (int *)v110;
                                if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
                                  && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3)
                                                                                         + 0x7FFF8000) )
                                {
                                  __asan_report_load4(v110);
                                }
                                v112 = *v111;
                                v113 = *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000);
                                if ( v113 != 0 && v113 <= 3 )
                                {
                                  LOBYTE(v18) = v113 != 0;
                                  __asan_report_store4(v3 + 144, v18);
                                }
                                *(_DWORD *)(v3 + 144) = v112;
                                if ( !data::ActivityEffigyChallengeV2ExcelConfigMgrBase::findEffigyChallengeV2SkillExcelConfig(
                                        this,
                                        *(unsigned int *)(v3 + 144)) )
                                  break;
                                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 480));
                              }
                              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v3 + 1696) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 1696, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 1696),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                                "checkEffigyChallengeV2Config",
                                189);
                              v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 1696),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v115 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                       v114,
                                       (const char (*)[37])byte_1AA2DF80);
                              v116 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, id);
                              v117 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                       v116,
                                       (const char (*)[34])byte_1AA2E340);
                              v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v117,
                                       (const unsigned int *)(v3 + 144));
                              v18 = byte_1AA2E0C0;
                              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v118,
                                (const char (*)[11])byte_1AA2E0C0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
                              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v119 = 0;
LABEL_158:
                              *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
                              *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
                              if ( v119 == 1 )
                              {
                                if ( std::vector<unsigned int>::size(&excel_config->challenge_skill_id_list) )
                                {
                                  v26 = 1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v3 + 1760, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v3 + 1760),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                                    "checkEffigyChallengeV2Config",
                                    195);
                                  v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v3 + 1760),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  v121 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                           v120,
                                           (const char (*)[37])byte_1AA2DF80);
                                  v122 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                           v121,
                                           id);
                                  v18 = byte_1AA2E3A0;
                                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                    v122,
                                    (const char (*)[44])byte_1AA2E3A0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
                                  *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                                  v2 = -1;
                                  v26 = 0;
                                }
                              }
                              else
                              {
                                v26 = 0;
                              }
                            }
                            else
                            {
                              v26 = 0;
                            }
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 1440, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 1440),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                            "checkEffigyChallengeV2Config",
                            161);
                          v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 1440),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v84 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                  v83,
                                  (const char (*)[37])byte_1AA2DF80);
                          v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, id);
                          v86 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                  v85,
                                  (const char (*)[21])byte_1AA2CE60);
                          v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v86,
                                  (const unsigned int *)(v3 + 112));
                          v18 = byte_1AA2DFE0;
                          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                            v87,
                            (const char (*)[20])byte_1AA2DFE0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
                          *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v26 = 0;
                        }
                      }
                      else
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
                          "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                          "checkEffigyChallengeV2Config",
                          156);
                        v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1376),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v79 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                v78,
                                (const char (*)[37])byte_1AA2DF80);
                        v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, id);
                        v81 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                v80,
                                (const char (*)[21])byte_1AA2CE60);
                        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v81,
                                (const unsigned int *)(v3 + 112));
                        v18 = byte_1AA281C0;
                        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v82,
                          (const char (*)[11])byte_1AA281C0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
                        *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v26 = 0;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1312, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1312),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                        "checkEffigyChallengeV2Config",
                        148);
                      v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1312),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v74 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              v73,
                              (const char (*)[37])byte_1AA2DF80);
                      v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, id);
                      v18 = byte_1AA2E240;
                      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        v75,
                        (const char (*)[56])byte_1AA2E240);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
                      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v26 = 0;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1248, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1248),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
                      "checkEffigyChallengeV2Config",
                      143);
                    v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1248),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v71 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                            v70,
                            (const char (*)[37])byte_1AA2DF80);
                    v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, id);
                    v18 = byte_1AA2E1E0;
                    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      v72,
                      (const char (*)[60])byte_1AA2E1E0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
                    *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v26 = 0;
                  }
                }
                else
                {
                  v26 = 0;
                }
              }
              else
              {
                v26 = 0;
              }
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
              "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
              "checkEffigyChallengeV2Config",
              103);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 864),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    v27,
                    (const char (*)[37])byte_1AA2DF80);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
            v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v29,
                    (const char (*)[21])byte_1AA2CE60);
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v3 + 64));
            v18 = byte_1AA2DFE0;
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v31, (const char (*)[20])byte_1AA2DFE0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v26 = 0;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
            "checkEffigyChallengeV2Config",
            98);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v21, (const char (*)[37])byte_1AA2DF80);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
          v24 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v23, (const char (*)[21])byte_1AA2CE60);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 64));
          v18 = byte_1AA281C0;
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])byte_1AA281C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v26 = 0;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        if ( v26 != 1 )
        {
          v123 = 0;
          goto LABEL_169;
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2ExcelConfig>,false,false> *const)(v3 + 224));
      }
      v123 = 1;
LABEL_169:
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v123 == 1 )
      {
        __for_range_4 = &this->effigy_challenge_v2_skill_excel_config_map;
        *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 544, v18);
        *(std::unordered_map<unsigned int,data::EffigyChallengeV2SkillExcelConfig>::iterator *)(v3 + 544) = std::unordered_map<unsigned int,data::EffigyChallengeV2SkillExcelConfig>::begin(__for_range_4);
        *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 576, v18);
        *(std::unordered_map<unsigned int,data::EffigyChallengeV2SkillExcelConfig>::iterator *)(v3 + 576) = std::unordered_map<unsigned int,data::EffigyChallengeV2SkillExcelConfig>::end(__for_range_4);
        while ( 1 )
        {
          v124 = (const char *)(v3 + 576);
          if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false> *)(v3 + 544),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false> *)(v3 + 576)) )
          {
            v126 = 1;
            goto LABEL_184;
          }
          v153 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false,false> *const)(v3 + 544));
          std::get<0ul,unsigned int const,data::EffigyChallengeV2SkillExcelConfig>(v153);
          excel_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EffigyChallengeV2SkillExcelConfig>(v153);
          if ( *(_BYTE *)(((unsigned __int64)&excel_config_0->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&excel_config_0->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&excel_config_0->id);
          }
          if ( !excel_config_0->id )
            break;
          std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2SkillExcelConfig>,false,false> *const)(v3 + 544));
        }
        *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1824) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1824, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1824),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
          "checkEffigyChallengeV2Config",
          204);
        v125 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1824),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v124 = "[EFFIGY CHALLENGE V2] skill no should not be 0";
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v125,
          (const char (*)[47])"[EFFIGY CHALLENGE V2] skill no should not be 0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
        *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v126 = 0;
LABEL_184:
        *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
        if ( v126 == 1 )
        {
          v127 = std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::size(&this->effigy_challenge_v2_difficulty_excel_config_map);
          v128 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v124) = v128 != 0;
          if ( v128 != 0 && v128 <= 3 )
            __asan_report_load4(v3 + 48);
          if ( v127 == *(_DWORD *)(v3 + 48) + 1 )
          {
            __for_range_5 = &this->effigy_challenge_v2_difficulty_excel_config_map;
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 608, v124);
            *(std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::iterator *)(v3 + 608) = std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::begin(__for_range_5);
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 640, v124);
            *(std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::iterator *)(v3 + 640) = std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::end(__for_range_5);
            while ( 1 )
            {
              if ( !std::__detail::operator!=<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false>(
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false> *)(v3 + 608),
                      (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false> *)(v3 + 640)) )
              {
                v135 = 1;
                goto LABEL_207;
              }
              v156 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false> *const)(v3 + 608));
              difficulty_id = std::get<0ul,unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>(v156);
              std::get<1ul,unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>(v156);
              if ( *(_BYTE *)(((unsigned __int64)difficulty_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)difficulty_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_id >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(difficulty_id);
              }
              v131 = *difficulty_id;
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 48);
              if ( v131 > *(_DWORD *)(v3 + 48) )
                break;
              std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false> *const)(v3 + 608));
            }
            *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1952) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1952, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1952),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
              "checkEffigyChallengeV2Config",
              218);
            v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1952),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v133 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                     v132,
                     (const char (*)[35])"[EFFIGY CHALLENGE V2] difficulty: ");
            v134 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v133, difficulty_id);
            common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v134, (const char (*)[12])" is invalid");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
            *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v135 = 0;
LABEL_207:
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
            if ( v135 == 1 )
              v2 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1888, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1888),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityEffigyChallengeV2ExcelConfig.cpp",
              "checkEffigyChallengeV2Config",
              211);
            v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1888),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v130 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                     v129,
                     (const char (*)[46])"[EFFIGY CHALLENGE V2] difficulty size is not ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v130,
              (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
            *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
          }
        }
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2096));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2016));
    }
  }
  if ( v158 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80F4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862746) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450976 - (((_DWORD)v5 + 2147450984) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8100) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF810C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2176LL, v158);
  }
  return v2;
};

// Line 227: range 0000000012B06E74-0000000012B0722E
std::pair<bool,unsigned int> __fastcall ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId(
        const ActivityEffigyChallengeV2ExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int> *p_dungeon_id_2_level_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  char *v7; // rsi
  bool v8; // al
  unsigned int *p_second; // rcx
  char v10; // al
  char v11[256]; // [rsp+10h] [rbp-100h] BYREF
  std::pair<bool,unsigned int> result; // 0:al.1,4:rax^4.4

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 14 dungeon_id:226 96 8 8 iter:228 128 "
                        "8 9 <unknown> 160 8 9 <unknown> 192 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::getLevelIdAccordingToDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  *(_DWORD *)(v2 + 80) = dungeon_id;
  p_dungeon_id_2_level_id_map = &this->dungeon_id_2_level_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, dungeon_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                        p_dungeon_id_2_level_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 80));
  v6 = &this->dungeon_id_2_level_id_map_;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v2 + 80);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = (char *)(v2 + 128);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v7);
    *(_DWORD *)(v2 + 64) = 0;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 32, v7, v2 + 32);
    *(_BYTE *)(v2 + 32) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v7);
    *(std::pair<bool,int> *)(v2 + 160) = std::make_pair<bool,int>((bool *)(v2 + 32), (int *)(v2 + 64));
    std::pair<bool,unsigned int>::pair<bool,int,true>(
      (std::pair<bool,unsigned int> *const)(v2 + 192),
      (std::pair<bool,int> *)(v2 + 160));
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 192);
    result = *(std::pair<bool,unsigned int> *)(v2 + 192);
  }
  else
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96))->second;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v10 < 0 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store1(v2 + 48, v7, v2 + 48);
    }
    *(_BYTE *)(v2 + 48) = 1;
    result = std::make_pair<bool,unsigned int const&>((bool *)(v2 + 48), p_second);
  }
  if ( v11 == (char *)v2 )
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

// Line 237: range 0000000012B07230-0000000012B0742B
__int64 __fastcall ActivityEffigyChallengeV2ExcelConfigMgr::getNormalSkillNo(
        const ActivityEffigyChallengeV2ExcelConfigMgr *const this,
        __int64 normal_gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_normal_gallery_skill_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 21 normal_gallery_id:236 64 8 8 iter:238 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::getNormalSkillNo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = normal_gallery_id;
  p_normal_gallery_skill_map = &this->normal_gallery_skill_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, normal_gallery_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_normal_gallery_skill_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->normal_gallery_skill_map_;
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

// Line 247: range 0000000012B0742C-0000000012B07621
__int64 __fastcall ActivityEffigyChallengeV2ExcelConfigMgr::getChllangeModeDungeonLevelByDifficulty(
        const ActivityEffigyChallengeV2ExcelConfigMgr *const this,
        __int64 challenge_mode_difficulty)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::EffigyChallengeV2DifficultyExcelConfigMap *p_effigy_challenge_v2_difficulty_excel_config_map; // rdx
  data::EffigyChallengeV2DifficultyExcelConfigMap *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false>::pointer v9; // rdx
  uint32_t *p_revise_level; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 29 challenge_mode_difficulty:246 64 8 8 iter:248 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityEffigyChallengeV2ExcelConfigMgr::getChllangeModeDungeonLevelByDifficulty;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = challenge_mode_difficulty;
  p_effigy_challenge_v2_difficulty_excel_config_map = &this->effigy_challenge_v2_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, challenge_mode_difficulty);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::find(p_effigy_challenge_v2_difficulty_excel_config_map, (const std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->effigy_challenge_v2_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::EffigyChallengeV2DifficultyExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EffigyChallengeV2DifficultyExcelConfig>,false,false> *const)(v2 + 64));
    p_revise_level = &v9->second.revise_level;
    if ( *(_BYTE *)(((unsigned __int64)p_revise_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_revise_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_revise_level >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_revise_level);
    }
    result = v9->second.revise_level;
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

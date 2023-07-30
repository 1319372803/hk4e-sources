// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityTeamChainExcelConfig.cpp

// Line 21: range 0000000012E3174E-0000000012E317F0
int32_t __cdecl ActivityTeamChainExcelConfigMgr::checkConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( ActivityTeamChainExcelConfigMgr::checkTeamChainStageConfig(this, txt_config_mgr) )
    return -1;
  if ( ActivityTeamChainExcelConfigMgr::checkTeamChainBuffConfig(this, txt_config_mgr) )
    return -1;
  if ( ActivityTeamChainExcelConfigMgr::checkTeamChainDifficultyConfig(this, txt_config_mgr) )
    return -1;
  if ( ActivityTeamChainExcelConfigMgr::checkTeamChainOverallConfig(this, txt_config_mgr) )
    return -1;
  return 0;
};

// Line 42: range 0000000012E317F2-0000000012E3259D
int32_t __cdecl ActivityTeamChainExcelConfigMgr::rewriteConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  const std::vector<unsigned int> *v18; // rsi
  char *v19; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  int v29; // r15d
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v31; // rax
  unsigned int *v32; // r15
  unsigned int *v33; // rcx
  unsigned int *v34; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const unsigned int *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // edx
  unsigned __int64 v41; // rax
  int32_t result; // eax
  uint32_t idx; // [rsp+2Ch] [rbp-2B4h]
  data::TeamChainExcelConfigMap *__for_range; // [rsp+30h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::reference v45; // [rsp+38h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-298h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *new_idx_set; // [rsp+50h] [rbp-290h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::mapped_type *new_pre_idx_map; // [rsp+58h] [rbp-288h]
  const std::vector<std::vector<unsigned int>> *__for_range_0; // [rsp+60h] [rbp-280h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-278h]
  char v52[624]; // [rsp+70h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 6 pos:64 64 8 14 __for_begin:43 96 8 12 __for_end:43 128 8 14 __for_begin:61 160 8 12 __"
                        "for_end:61 192 8 14 __for_begin:64 224 8 12 __for_end:64 256 24 20 tmp_chain_pos_vec:61 320 32 9"
                        " <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTeamChainExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  __for_range = &this->team_chain_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainExcelConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_58;
    }
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::TeamChainExcelConfig>(v45);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamChainExcelConfig>(v45);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->gallery_id_2_stage_id_map_,
           &stage_config->gallery_id,
           stage_id,
           (const unsigned int *)&this->gallery_id_2_stage_id_map_,
           v6);
    if ( !v7.second )
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
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "rewriteConfig",
        48);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])"gallery id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &stage_config->gallery_id);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" is duplicate");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v12 = 0;
      goto LABEL_58;
    }
    v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->dungeon_id_2_stage_id_map_,
            &stage_config->dungeon_id,
            stage_id,
            (const unsigned int *)&this->dungeon_id_2_stage_id_map_,
            v8);
    if ( !v13.second )
      break;
    new_idx_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                    &this->stage_chain_idx_set_map_,
                    stage_id);
    new_pre_idx_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                        &this->stage_chain_pre_idx_map_,
                        stage_id);
    __for_range_0 = &stage_config->chain_config;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, stage_id);
    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::vector<std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, stage_id);
    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::vector<std::vector<unsigned int>>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 160)) )
    {
      v17 = ((v3 + 256) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      v18 = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 128));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 256), v18);
      __for_range_1 = (std::vector<unsigned int> *)(v3 + 256);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v18);
      *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v18);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v19 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224)) )
        {
          v28 = 1;
          goto LABEL_40;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
        v21 = (int *)v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        v22 = *v21;
        v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v23 != 0 && v23 <= 3 )
        {
          LOBYTE(v19) = v23 != 0;
          __asan_report_store4(v3 + 48, v19);
        }
        *(_DWORD *)(v3 + 48) = v22;
        v24 = std::unordered_set<unsigned int>::insert(
                new_idx_set,
                (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
        if ( !v24.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
      }
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "rewriteConfig",
        68);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])"pos: ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])" is duplicate");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v28 = 0;
LABEL_40:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v28 == 1 )
      {
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 256))._M_current;
        v31._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 256))._M_current;
        std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          v31,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        for ( idx = 1; ; ++idx )
        {
          if ( idx >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 256)) )
          {
            v29 = 1;
            goto LABEL_50;
          }
          v32 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), idx - 1);
          v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), idx);
          v35 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                  new_pre_idx_map,
                  v33,
                  v32,
                  v33,
                  v34);
          if ( !v35.second )
            break;
        }
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
          "rewriteConfig",
          78);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v36, (const char (*)[6])"pos: ");
        v38 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 256), idx);
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, v38);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v39, (const char (*)[14])" is duplicate");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
      }
      else
      {
        v29 = 0;
      }
LABEL_50:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 256));
      if ( v29 != 1 )
      {
        v40 = 0;
        goto LABEL_54;
      }
      __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 128));
    }
    v40 = 1;
LABEL_54:
    v41 = ((v3 + 256) >> 3) + 2147450880;
    *(_WORD *)v41 = -1800;
    *(_BYTE *)(v41 + 2) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v40 != 1 )
    {
      v12 = 0;
      goto LABEL_58;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    4u,
    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
    "rewriteConfig",
    54);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 384),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])"dungeon id: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &stage_config->dungeon_id);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" is duplicate");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
  v2 = -1;
  v12 = 0;
LABEL_58:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 88: range 0000000012E3259E-0000000012E34B70
int32_t __cdecl ActivityTeamChainExcelConfigMgr::checkTeamChainStageConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t *p_gallery_id; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  const char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  unsigned __int64 v47; // rax
  const char *v48; // rsi
  unsigned __int64 v49; // rax
  unsigned int *v50; // rax
  int *v51; // rdx
  int v52; // ecx
  char v53; // al
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // eax
  unsigned int v60; // ecx
  char v61; // al
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rdx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rdx
  common::milog::MiLogStream *v76; // rax
  unsigned __int64 v77; // rax
  int v78; // edx
  char *v79; // rsi
  unsigned int *v80; // rax
  int *v81; // rdx
  int v82; // ecx
  char v83; // al
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  int v87; // edx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rdx
  int v90; // edx
  _BOOL4 v92; // [rsp+Ch] [rbp-764h]
  int v93; // [rsp+Ch] [rbp-764h]
  _BOOL4 v94; // [rsp+Ch] [rbp-764h]
  data::TeamChainExcelConfigMap *__for_range; // [rsp+28h] [rbp-748h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::reference v97; // [rsp+30h] [rbp-740h]
  std::tuple_element<0,std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-738h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *stage_config; // [rsp+40h] [rbp-730h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+48h] [rbp-728h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+50h] [rbp-720h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-718h]
  const std::vector<std::vector<unsigned int>> *__for_range_1; // [rsp+60h] [rbp-710h]
  __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> >::reference one_chain_pos_vec; // [rsp+68h] [rbp-708h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+78h] [rbp-6F8h]
  char v106[1776]; // [rsp+80h] [rbp-6F0h] BYREF

  v3 = (unsigned __int64)v106;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1728LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "33 32 4 19 trial_avatar_id:140 48 4 7 pos:158 64 4 9 <unknown> 80 4 11 buff_id:184 96 8 14 __for"
                        "_begin:96 128 8 12 __for_end:96 160 8 15 __for_begin:140 192 8 13 __for_end:140 224 8 15 __for_b"
                        "egin:155 256 8 13 __for_end:155 288 8 15 __for_begin:158 320 8 13 __for_end:158 352 8 15 __for_b"
                        "egin:184 384 8 13 __for_end:184 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 "
                        "9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9"
                        " <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 3"
                        "2 9 <unknown> 1312 48 17 dungeon_id_set:94 1392 48 17 gallery_id_set:95 1472 48 23 trial_avatar_"
                        "id_set:139 1552 48 11 pos_set:154 1632 56 13 level_set:157";
  *(_QWORD *)(v3 + 16) = ActivityTeamChainExcelConfigMgr::checkTeamChainStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
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
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -219021312;
  v5[536862763] = 62194;
  v5[536862765] = -218959118;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862770] = -218959118;
  v5[536862772] = -218103808;
  v5[536862773] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1312));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1392));
  __for_range = &this->team_chain_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TeamChainExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainExcelConfig>,false> *)(v3 + 128)) )
  {
    v97 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false> *const)(v3 + 96));
    stage_id = std::get<0ul,unsigned int const,data::TeamChainExcelConfig>(v97);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamChainExcelConfig>(v97);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(stage_id);
    }
    if ( *stage_id )
    {
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&stage_config->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config->dungeon_id);
      }
      dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                             p_dungeon_config_mgr,
                             stage_config->dungeon_id);
      if ( dungeon_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type == DUNGEON_TEAM_CHAIN )
        {
          v17 = std::set<unsigned int>::emplace<unsigned int const&>(
                  (std::set<unsigned int> *const)(v3 + 1312),
                  &stage_config->dungeon_id,
                  &stage_config->dungeon_id);
          if ( !v17.second )
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
              "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
              "checkTeamChainStageConfig",
              118);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v18,
                    (const char (*)[13])"dungeon id: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &stage_config->dungeon_id);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" is duplicate");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v9 = 0;
          }
          else
          {
            p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&stage_config->gallery_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)stage_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&stage_config->gallery_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(&stage_config->gallery_id);
            }
            gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                   p_gallery_config_mgr,
                                   stage_config->gallery_id);
            if ( gallery_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&gallery_config_ptr->type);
              }
              if ( gallery_config_ptr->type == GALLERY_TYPE_TEAM_CHAIN )
              {
                p_gallery_id = &stage_config->gallery_id;
                v29 = std::set<unsigned int>::emplace<unsigned int const&>(
                        (std::set<unsigned int> *const)(v3 + 1392),
                        &stage_config->gallery_id,
                        &stage_config->gallery_id);
                if ( !v29.second )
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
                    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                    "checkTeamChainStageConfig",
                    135);
                  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 800),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v31 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v30,
                          (const char (*)[13])"gallery id: ");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          &stage_config->gallery_id);
                  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v32,
                    (const char (*)[14])" is duplicate");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v9 = 0;
                }
                else
                {
                  v33 = ((v3 + 1472) >> 3) + 2147450880;
                  *(_DWORD *)v33 = 0;
                  *(_WORD *)(v33 + 4) = 0;
                  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1472));
                  __for_range_0 = &stage_config->trial_avatar_id_list;
                  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 160, p_gallery_id);
                  *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 192, p_gallery_id);
                  *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
                  while ( 1 )
                  {
                    v34 = (const char *)(v3 + 192);
                    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
                    {
                      v42 = 1;
                      goto LABEL_68;
                    }
                    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
                    v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
                    v36 = (int *)v35;
                    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v35);
                    }
                    v37 = *v36;
                    v38 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
                    if ( v38 != 0 && v38 <= 3 )
                    {
                      LOBYTE(v34) = v38 != 0;
                      __asan_report_store4(v3 + 32, v34);
                    }
                    *(_DWORD *)(v3 + 32) = v37;
                    if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                            &txt_config_mgr->trial_avatar_config_mgr,
                            *(unsigned int *)(v3 + 32)) )
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
                        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                        "checkTeamChainStageConfig",
                        144);
                      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 864),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v40 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                              v39,
                              (const char (*)[18])"trial_avatar_id: ");
                      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v40,
                              (const unsigned int *)(v3 + 32));
                      v34 = " is invalid";
                      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v41,
                        (const char (*)[12])" is invalid");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                      *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v42 = 0;
                      goto LABEL_68;
                    }
                    v43 = std::set<unsigned int>::emplace<unsigned int &>(
                            (std::set<unsigned int> *const)(v3 + 1472),
                            (unsigned int *)(v3 + 32),
                            (unsigned int *)(v3 + 32));
                    if ( !v43.second )
                      break;
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
                  }
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
                    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                    "checkTeamChainStageConfig",
                    149);
                  v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 928),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v45 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v44,
                          (const char (*)[18])"trial_avatar_id: ");
                  v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v45,
                          (const unsigned int *)(v3 + 32));
                  v34 = " is duplicate";
                  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v46,
                    (const char (*)[14])" is duplicate");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                  *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v42 = 0;
LABEL_68:
                  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                  if ( v42 == 1 )
                  {
                    v47 = ((v3 + 1552) >> 3) + 2147450880;
                    *(_DWORD *)v47 = 0;
                    *(_WORD *)(v47 + 4) = 0;
                    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1552));
                    __for_range_1 = &stage_config->chain_config;
                    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 224, v34);
                    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 224) = std::vector<std::vector<unsigned int>>::begin(__for_range_1);
                    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 256, v34);
                    *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 256) = std::vector<std::vector<unsigned int>>::end(__for_range_1);
                    while ( 1 )
                    {
                      v48 = (const char *)(v3 + 256);
                      if ( !__gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
                              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 224),
                              (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 256)) )
                        break;
                      one_chain_pos_vec = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 224));
                      v49 = ((v3 + 1632) >> 3) + 2147450880;
                      *(_DWORD *)v49 = 0;
                      *(_WORD *)(v49 + 4) = 0;
                      *(_BYTE *)(v49 + 6) = 0;
                      std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1632));
                      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 288, v48);
                      *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(one_chain_pos_vec);
                      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 320, v48);
                      *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(one_chain_pos_vec);
                      while ( 1 )
                      {
                        v48 = (const char *)(v3 + 320);
                        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
                        {
                          v59 = 1;
                          goto LABEL_104;
                        }
                        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                        v50 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
                        v51 = (int *)v50;
                        if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v50);
                        }
                        v52 = *v51;
                        v53 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
                        if ( v53 != 0 && v53 <= 3 )
                        {
                          LOBYTE(v48) = v53 != 0;
                          __asan_report_store4(v3 + 48, v48);
                        }
                        *(_DWORD *)(v3 + 48) = v52;
                        if ( !*(_DWORD *)(v3 + 48) )
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
                            "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                            "checkTeamChainStageConfig",
                            162);
                          v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 992),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v54,
                                  (const char (*)[11])"stage_id: ");
                          v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, stage_id);
                          v57 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                  v56,
                                  (const char (*)[8])", pos: ");
                          v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v57,
                                  (const unsigned int *)(v3 + 48));
                          v48 = " is invalid";
                          common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v58,
                            (const char (*)[12])" is invalid");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                          *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v59 = 0;
                          goto LABEL_104;
                        }
                        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v3 + 48);
                        }
                        v60 = (unsigned int)(*(_DWORD *)(v3 + 48) - 1) >> 2;
                        v61 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
                        if ( v61 != 0 && v61 <= 3 )
                        {
                          LOBYTE(v48) = v61 != 0;
                          __asan_report_store4(v3 + 64, v48);
                        }
                        *(_DWORD *)(v3 + 64) = v60;
                        v62 = std::unordered_set<unsigned int>::emplace<unsigned int>(
                                (std::unordered_set<unsigned int> *const)(v3 + 1632),
                                (unsigned int *)(v3 + 64),
                                (unsigned int *)(v3 + 64));
                        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                        if ( !v62.second )
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
                            "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                            "checkTeamChainStageConfig",
                            167);
                          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 1056),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v64 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v63,
                                  (const char (*)[11])"stage_id: ");
                          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, stage_id);
                          v66 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                  v65,
                                  (const char (*)[8])", pos: ");
                          v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v66,
                                  (const unsigned int *)(v3 + 48));
                          v48 = " is in same level";
                          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                            v67,
                            (const char (*)[18])" is in same level");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                          *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v59 = 0;
                          goto LABEL_104;
                        }
                        v68 = std::set<unsigned int>::insert(
                                (std::set<unsigned int> *const)(v3 + 1552),
                                (const std::set<unsigned int>::value_type *)(v3 + 48));
                        if ( !v68.second )
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
                        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                        "checkTeamChainStageConfig",
                        172);
                      v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1120),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v70 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v69,
                              (const char (*)[11])"stage_id: ");
                      v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, stage_id);
                      v72 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v71,
                              (const char (*)[8])", pos: ");
                      v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v72,
                              (const unsigned int *)(v3 + 48));
                      v48 = " is duplicate";
                      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v73,
                        (const char (*)[14])" is duplicate");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
                      *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v59 = 0;
LABEL_104:
                      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
                      if ( v59 == 1 )
                      {
                        if ( std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v3 + 1632)) == 1 )
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
                            "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                            "checkTeamChainStageConfig",
                            179);
                          v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 1184),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v75 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                  v74,
                                  (const char (*)[11])"stage_id: ");
                          v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, stage_id);
                          v48 = ", chain config num is 1";
                          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                            v76,
                            (const char (*)[24])", chain config num is 1");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
                          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v93 = 0;
                        }
                        else
                        {
                          v93 = 1;
                        }
                      }
                      else
                      {
                        v93 = 0;
                      }
                      std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 1632));
                      v77 = ((v3 + 1632) >> 3) + 2147450880;
                      *(_DWORD *)v77 = -117901064;
                      *(_WORD *)(v77 + 4) = -1800;
                      *(_BYTE *)(v77 + 6) = -8;
                      if ( v93 != 1 )
                      {
                        v78 = 0;
                        goto LABEL_115;
                      }
                      __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 224));
                    }
                    v78 = 1;
LABEL_115:
                    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                    if ( v78 == 1 )
                    {
                      __for_range_3 = &stage_config->normal_buff_id_list;
                      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 352, v48);
                      *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_3);
                      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 384, v48);
                      *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_3);
                      while ( 1 )
                      {
                        v79 = (char *)(v3 + 384);
                        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
                        {
                          v87 = 1;
                          goto LABEL_133;
                        }
                        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                        v80 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
                        v81 = (int *)v80;
                        if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v80 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v80);
                        }
                        v82 = *v81;
                        v83 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                        if ( v83 != 0 && v83 <= 3 )
                        {
                          LOBYTE(v79) = v83 != 0;
                          __asan_report_store4(v3 + 80, v79);
                        }
                        *(_DWORD *)(v3 + 80) = v82;
                        if ( !data::ActivityTeamChainExcelConfigMgrBase::findTeamChainBuffExcelConfig(
                                this,
                                *(unsigned int *)(v3 + 80)) )
                          break;
                        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
                      }
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
                        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                        "checkTeamChainStageConfig",
                        188);
                      v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1248),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v85 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v84,
                              (const char (*)[10])"buff id: ");
                      v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v85,
                              (const unsigned int *)(v3 + 80));
                      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v86,
                        (const char (*)[12])" is invalid");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
                      *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v87 = 0;
LABEL_133:
                      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                      v94 = v87 == 1;
                    }
                    else
                    {
                      v94 = 0;
                    }
                    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1552));
                    v92 = v94;
                  }
                  else
                  {
                    v92 = 0;
                  }
                  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1472));
                  v9 = v92;
                }
              }
              else
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
                  "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                  "checkTeamChainStageConfig",
                  130);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 736),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v25,
                        (const char (*)[13])"gallery id: ");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        &stage_config->gallery_id);
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v27,
                  (const char (*)[27])" is not team chain gallery");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
            }
            else
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
                "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
                "checkTeamChainStageConfig",
                125);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v22,
                      (const char (*)[13])"gallery id: ");
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      &stage_config->gallery_id);
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" is invalid");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v9 = 0;
            }
          }
        }
        else
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
            "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
            "checkTeamChainStageConfig",
            113);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])"dungeon id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &stage_config->dungeon_id);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v16,
            (const char (*)[27])" is not team chain dungeon");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v9 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
          "checkTeamChainStageConfig",
          108);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])"dungeon id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &stage_config->dungeon_id);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" is invalid");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainStageConfig",
        101);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])"stage_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, stage_id);
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    v88 = ((v3 + 1472) >> 3) + 2147450880;
    *(_DWORD *)v88 = -117901064;
    *(_WORD *)(v88 + 4) = -1800;
    v89 = ((v3 + 1552) >> 3) + 2147450880;
    *(_DWORD *)v89 = -117901064;
    *(_WORD *)(v89 + 4) = -1800;
    if ( !v9 )
    {
      v90 = 0;
      goto LABEL_140;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainExcelConfig>,false,false> *const)(v3 + 96));
  }
  v90 = 1;
LABEL_140:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v90 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1392));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1312));
  if ( v106 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 164) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80BC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D4) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1728LL, v106);
  }
  return v2;
};

// Line 197: range 0000000012E34B72-0000000012E34EB2
int32_t __cdecl ActivityTeamChainExcelConfigMgr::checkTeamChainBuffConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  int32_t result; // eax
  data::TeamChainBuffExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false,false>::reference v12; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::TeamChainBuffExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:198 64 8 13 __for_end:198 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTeamChainExcelConfigMgr::checkTeamChainBuffConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->team_chain_buff_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainBuffExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::TeamChainBuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainBuffExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TeamChainBuffExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::TeamChainBuffExcelConfig>(v12);
    std::get<1ul,unsigned int const,data::TeamChainBuffExcelConfig>(v12);
    if ( (unsigned __int8)std::string::empty() )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainBuffExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
    "checkTeamChainBuffConfig",
    203);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])"buff id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    v8,
    (const char (*)[29])" ability group name is empty");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v9 = 0;
LABEL_16:
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

// Line 211: range 0000000012E34EB4-0000000012E35380
int32_t __cdecl ActivityTeamChainExcelConfigMgr::checkTeamChainDifficultyConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  data::TeamChainDifficultyExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig> >::type *difficulty_config; // [rsp+28h] [rbp-118h]
  char v13[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:212 64 8 13 __for_end:212 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTeamChainExcelConfigMgr::checkTeamChainDifficultyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->team_chain_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainDifficultyExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::TeamChainDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainDifficultyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TeamChainDifficultyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false> *)(v3 + 64)) )
    {
      v7 = 1;
      goto LABEL_24;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::TeamChainDifficultyExcelConfig>(v11);
    difficulty_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamChainDifficultyExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config->difficulty_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&difficulty_config->difficulty_level);
    }
    if ( !difficulty_config->difficulty_level )
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
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainDifficultyConfig",
        217);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v6,
        (const char (*)[25])"difficulty_level is zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v7 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config->score_magnification >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)difficulty_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config->score_magnification >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&difficulty_config->score_magnification);
    }
    if ( !difficulty_config->score_magnification )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainDifficultyExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
    "checkTeamChainDifficultyConfig",
    223);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v8, (const char (*)[28])"score_magnification is zero");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v7 = 0;
LABEL_24:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 231: range 0000000012E35382-0000000012E36433
int32_t __cdecl ActivityTeamChainExcelConfigMgr::checkTeamChainOverallConfig(
        ActivityTeamChainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  RewardExcelConfigMgr *p_reward_config_mgr; // rcx
  __int64 costume_reward_id; // rsi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  unsigned int *v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // edx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  data::TeamChainOverallExcelConfigMap *__for_range; // [rsp+18h] [rbp-318h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false,false>::reference v36; // [rsp+20h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainOverallExcelConfig> >::type *overall_config; // [rsp+30h] [rbp-300h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2F8h]
  char v39[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 14 watcher_id:253 64 8 15 __for_begin:232 96 8 13 __for_end:232 128 8 15 __for_begin:253"
                        " 160 8 13 __for_end:253 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkno"
                        "wn> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityTeamChainExcelConfigMgr::checkTeamChainOverallConfig;
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
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -202116109;
  __for_range = &this->team_chain_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TeamChainOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TeamChainOverallExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TeamChainOverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false> *)(v3 + 96)) )
    {
      v10 = 1;
      goto LABEL_70;
    }
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::TeamChainOverallExcelConfig>(v36);
    overall_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TeamChainOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TeamChainOverallExcelConfig>(v36);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->schedule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->schedule_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
            p_new_activity_config_mgr,
            overall_config->schedule_id) )
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
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        237);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])"schedule_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &overall_config->schedule_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->costume_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->costume_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config->costume_id);
    }
    if ( !data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
            p_avatar_fashion_config_mgr,
            overall_config->costume_id) )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        243);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])"costume id: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &overall_config->costume_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    p_reward_config_mgr = &txt_config_mgr->reward_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->costume_reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->costume_reward_id);
    }
    costume_reward_id = overall_config->costume_reward_id;
    if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(p_reward_config_mgr, costume_reward_id) )
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
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        249);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v17,
              (const char (*)[20])"costume_reward_id: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &overall_config->costume_reward_id);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" is invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    __for_range_0 = &overall_config->costume_target_watcher_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, costume_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, costume_reward_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v20 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v28 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v22 = (int *)v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      v23 = *v22;
      v24 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v24 != 0 && v24 <= 3 )
      {
        LOBYTE(v20) = v24 != 0;
        __asan_report_store4(v3 + 48, v20);
      }
      *(_DWORD *)(v3 + 48) = v23;
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              &txt_config_mgr->new_activity_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
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
      4u,
      "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
      "checkTeamChainOverallConfig",
      257);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])"watcher_id: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])" is invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v28 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v28 != 1 )
    {
      v10 = 0;
      goto LABEL_70;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->gallery_score_duration >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->gallery_score_duration >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config->gallery_score_duration);
    }
    if ( !overall_config->gallery_score_duration )
    {
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
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        264);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        v29,
        (const char (*)[41])"gallery_score_duration is less than zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->room_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overall_config->room_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overall_config->room_num);
    }
    if ( !overall_config->room_num )
    {
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        270);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v30,
        (const char (*)[27])"room_num is less than zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    if ( *(_BYTE *)(((unsigned __int64)&overall_config->room_skill_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)overall_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overall_config->room_skill_num >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&overall_config->room_skill_num);
    }
    if ( !overall_config->room_skill_num )
    {
      *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
        "checkTeamChainOverallConfig",
        276);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v31,
        (const char (*)[33])"room_skill_num is less than zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      v2 = -1;
      v10 = 0;
      goto LABEL_70;
    }
    if ( (unsigned __int8)std::string::empty() )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TeamChainOverallExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 640, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 640),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityTeamChainExcelConfig.cpp",
    "checkTeamChainOverallConfig",
    282);
  v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 640),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
    v32,
    (const char (*)[41])"chain_avatar_ability_group_name is empty");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
  v2 = -1;
  v10 = 0;
LABEL_70:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
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
  }
  return result;
};

// Line 290: range 0000000012E36434-0000000012E3662F
__int64 __fastcall ActivityTeamChainExcelConfigMgr::getStageIdByGalleryId(
        const ActivityTeamChainExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_gallery_id_2_stage_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:289 64 8 8 iter:291 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTeamChainExcelConfigMgr::getStageIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_stage_id_map = &this->gallery_id_2_stage_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_gallery_id_2_stage_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_2_stage_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 300: range 0000000012E36630-0000000012E3682B
__int64 __fastcall ActivityTeamChainExcelConfigMgr::getStageIdByDungeonId(
        const ActivityTeamChainExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_id_2_stage_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:299 64 8 8 iter:301 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTeamChainExcelConfigMgr::getStageIdByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_2_stage_id_map = &this->dungeon_id_2_stage_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_id_2_stage_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_2_stage_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 310: range 0000000012E3682C-0000000012E36A49
const std::unordered_map<unsigned int,unsigned int> *__fastcall ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(
        const ActivityTeamChainExcelConfigMgr *const this,
        std::unordered_map<unsigned int,unsigned int> *stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *p_stage_chain_pre_idx_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_map<unsigned int,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:309 64 8 8 iter:312 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityTeamChainExcelConfigMgr::getChainPreIdxMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)stage_id;
  if ( !(_BYTE)`guard variable for'ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)::invalid_map
    && __cxa_guard_acquire(&`guard variable for'ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)::invalid_map) )
  {
    std::unordered_map<unsigned int,unsigned int>::unordered_map(&ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)const::invalid_map);
    __cxa_guard_release(&`guard variable for'ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)::invalid_map);
    stage_id = &ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)const::invalid_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<unsigned int,unsigned int>::~unordered_map,
      &ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)const::invalid_map,
      &_dso_handle);
  }
  p_stage_chain_pre_idx_map = &this->stage_chain_pre_idx_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(p_stage_chain_pre_idx_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->stage_chain_pre_idx_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &ActivityTeamChainExcelConfigMgr::getChainPreIdxMap(unsigned int)const::invalid_map;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 321: range 0000000012E36A4A-0000000012E36C98
_BOOL8 __fastcall ActivityTeamChainExcelConfigMgr::isStageRoomIdxInChain(
        const ActivityTeamChainExcelConfigMgr *const this,
        __int64 stage_id,
        uint32_t room_idx,
        uint32_t team_idx)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *p_stage_chain_pre_idx_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  _BOOL8 result; // rax
  uint32_t v12; // ecx
  char v13; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false>::pointer v14; // rax
  char v17[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 9 <unknown> 48 4 12 stage_id:320 64 8 22 chain_idx_set_iter:322 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityTeamChainExcelConfigMgr::isStageRoomIdxInChain;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = stage_id;
  p_stage_chain_pre_idx_map = &this->stage_chain_pre_idx_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, stage_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(p_stage_chain_pre_idx_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
  v8 = &this->stage_chain_pre_idx_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
    v12 = 4 * room_idx + team_idx + 1;
    v13 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v9) = v13 != 0;
      __asan_report_store4(v4 + 32, v9);
    }
    *(_DWORD *)(v4 + 32) = v12;
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)(v4 + 64));
    result = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
               &v14->second,
               (const unsigned int *)(v4 + 32));
  }
  if ( v17 == (char *)v4 )
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp

// Line 20: range 0000000012ADDF16-0000000012ADE23A
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::rewriteConfig(
        ActivityCharAmusementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityCharAmusementExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
      "rewriteConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementOverallConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
      "rewriteConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"rewrite overall config failed");
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

// Line 35: range 0000000012ADE23C-0000000012ADE5B2
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementLevelConfig(
        ActivityCharAmusementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ActivityCharAmusementLevelExcelConfig *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  int32_t result; // eax
  data::ActivityCharAmusementLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig> >::type *id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:36 64 8 12 __for_end:36 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->activity_char_amusement_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_16;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityCharAmusementLevelExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementLevelExcelConfig>(v15);
    v7 = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::emplace<unsigned int const&,data::ActivityCharAmusementLevelExcelConfig const&>(
           &this->gallery_id_level_config_map_,
           &config->gallery_id,
           config,
           (const unsigned int *)&this->gallery_id_level_config_map_,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
    "rewriteCharAmusementLevelConfig",
    40);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1AA25B00);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->gallery_id);
  v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])" id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v12 = 0;
LABEL_16:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 48: range 0000000012ADE5B4-0000000012ADEEC7
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementOverallConfig(
        ActivityCharAmusementExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_schedule_id; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  ActivityCharAmusementExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  __int64 v12; // rsi
  uint32_t gallery_id; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int> *v17; // rdx
  data::GalleryType type; // r15d
  const unsigned int *v19; // rsi
  std::unordered_map<unsigned int,data::GalleryType>::mapped_type *v20; // rax
  data::GalleryType *v21; // rdx
  char v22; // cl
  uint32_t weight; // r15d
  const unsigned int *v24; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v25; // rax
  uint32_t *v26; // rdx
  char v27; // cl
  int v28; // edx
  int v29; // eax
  int32_t result; // eax
  data::ActivityCharAmusementOverallExcelConfigMap *__for_range; // [rsp+28h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::reference v33; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig> >::type *config; // [rsp+40h] [rbp-1A0h]
  ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig *random_config; // [rsp+48h] [rbp-198h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-190h]
  const unsigned int *level_id; // [rsp+58h] [rbp-188h]
  data::ActivityCharAmusementLevelExcelConfig *level_config_ptr; // [rsp+60h] [rbp-180h]
  data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-178h]
  char v40[368]; // [rsp+70h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 13 gallery_id:61 64 8 14 __for_begin:50 96 8 12 __for_end:50 128 8 14 __for_begin:53 160 "
                        "8 12 __for_end:53 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::rewriteCharAmusementOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->activity_char_amusement_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false> *)(v3 + 96)) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivityCharAmusementOverallExcelConfig>(v33);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementOverallExcelConfig>(v33);
    p_schedule_id = &config->schedule_id;
    random_config = std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::operator[](
                      &this->schedule_random_config_map_,
                      &config->schedule_id);
    __for_range_0 = &config->level_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_schedule_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      level_id = v7;
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      level_config_ptr = data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementLevelExcelConfig(
                           v8,
                           *level_id);
      if ( level_config_ptr )
      {
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v12 = (((_BYTE)level_config_ptr + 20) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->gallery_id);
        }
        gallery_id = level_config_ptr->gallery_id;
        v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v12) = v14 != 0;
          __asan_report_store4(v3 + 48, v12);
        }
        *(_DWORD *)(v3 + 48) = gallery_id;
        gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                               &txt_config_mgr->gallery_config_mgr,
                               *(unsigned int *)(v3 + 48));
        if ( gallery_config_ptr )
        {
          v17 = std::unordered_map<data::GalleryType,std::vector<unsigned int>>::operator[](
                  &random_config->gallery_type_level_id_vec_map_,
                  &gallery_config_ptr->type);
          std::vector<unsigned int>::emplace_back<unsigned int const&>(v17, level_id, (const unsigned int *)v17);
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&gallery_config_ptr->type);
          }
          type = gallery_config_ptr->type;
          v19 = level_id;
          v20 = std::unordered_map<unsigned int,data::GalleryType>::operator[](
                  &random_config->level_id_gallery_type_map_,
                  level_id);
          v21 = v20;
          v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
          if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
          {
            LOBYTE(v19) = v22 != 0;
            __asan_report_store4(v20, v19);
          }
          *v21 = type;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->weight >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->weight >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr->weight);
          }
          weight = level_config_ptr->weight;
          v24 = level_id;
          v25 = std::map<unsigned int,unsigned int>::operator[](&random_config->level_weight_map_, level_id);
          v26 = v25;
          v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
          if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
          {
            LOBYTE(v24) = v27 != 0;
            __asan_report_store4(v25, v24);
          }
          *v26 = weight;
          v11 = 1;
        }
        else
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
            4u,
            "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
            "rewriteCharAmusementOverallConfig",
            65);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v15, (const char (*)[20])byte_1AA25CA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
          "rewriteCharAmusementOverallConfig",
          58);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])byte_1AA25C60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v11 != 1 )
      {
        v28 = 0;
        goto LABEL_43;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    v28 = 1;
LABEL_43:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v28 != 1 )
    {
      v29 = 0;
      goto LABEL_47;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false> *const)(v3 + 64));
  }
  v29 = 1;
LABEL_47:
  if ( v29 == 1 )
    v2 = 0;
  result = v2;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 77: range 0000000012ADEEC8-0000000012ADF0F0
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::checkConfig(
        ActivityCharAmusementExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityCharAmusementExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityCharAmusementExcelConfigMgr::checkCharAmusementOverallConfig(this, txt_config_mgr)
    || ActivityCharAmusementExcelConfigMgr::checkCharAmusementStageConfig(this, txt_config_mgr)
    || ActivityCharAmusementExcelConfigMgr::checkCharAmusementLevelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
      "checkConfig",
      82);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 89: range 0000000012ADF0F2-0000000012ADFF73
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::checkCharAmusementOverallConfig(
        const ActivityCharAmusementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // edx
  unsigned __int64 v10; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v12; // rax
  const unsigned int *v13; // rsi
  std::set<unsigned int>::size_type v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // edx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  int32_t result; // eax
  data::ActivityCharAmusementOverallExcelConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::reference v39; // [rsp+28h] [rbp-298h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig> >::type *config; // [rsp+38h] [rbp-288h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-280h]
  char v42[624]; // [rsp+50h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 12 level_id:103 48 8 14 __for_begin:90 80 8 12 __for_end:90 112 8 15 __for_begin:103 144"
                        " 8 13 __for_end:103 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> "
                        "432 32 9 <unknown> 496 48 15 level_id_set:97";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::checkCharAmusementOverallConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862737] = -202116109;
  __for_range = &this->activity_char_amusement_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ActivityCharAmusementOverallExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false> *)(v3 + 80)) )
  {
    v39 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::ActivityCharAmusementOverallExcelConfig>(v39);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementOverallExcelConfig>(v39);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->schedule_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
           p_new_activity_config_mgr,
           config->schedule_id) )
    {
      v10 = ((v3 + 496) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_WORD *)(v10 + 4) = 0;
      M_current = std::vector<unsigned int>::begin(&config->level_list)._M_current;
      v12._M_current = std::vector<unsigned int>::end(&config->level_list)._M_current;
      v13 = M_current;
      std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        (std::set<unsigned int> *const)(v3 + 496),
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        v12);
      v14 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 496));
      if ( v14 == std::vector<unsigned int>::size(&config->level_list) )
      {
        __for_range_0 = &config->level_list;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 112, v13);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, v13);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v19 = (char *)(v3 + 144);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
          {
            v27 = 1;
            goto LABEL_36;
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
          v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
          v21 = (int *)v20;
          if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v20);
          }
          v22 = *v21;
          v23 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
          if ( v23 != 0 && v23 <= 3 )
          {
            LOBYTE(v19) = v23 != 0;
            __asan_report_store4(v3 + 32, v19);
          }
          *(_DWORD *)(v3 + 32) = v22;
          if ( !data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementLevelExcelConfig(
                  this,
                  *(unsigned int *)(v3 + 32)) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
        }
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
          "checkCharAmusementOverallConfig",
          107);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v24,
                (const char (*)[28])"[CHAR_AMUSEMENT] level_id: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])byte_1AA207E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v27 = 0;
LABEL_36:
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        if ( v27 == 1 )
        {
          p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->dungeon_id);
          }
          if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, config->dungeon_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->random_level_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->random_level_count >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->random_level_count);
            }
            if ( config->random_level_count )
            {
              v18 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 432, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 432),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
                "checkCharAmusementOverallConfig",
                120);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 432),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      v31,
                      (const char (*)[38])"[CHAR_AMUSEMENT] random_level_count: ");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      &config->random_level_count);
              common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])byte_1AA25F60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
              *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
          }
          else
          {
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
              "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
              "checkCharAmusementOverallConfig",
              114);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v29,
                    (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->dungeon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v18 = 0;
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
          "checkCharAmusementOverallConfig",
          100);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v15,
                (const char (*)[30])"[CHAR_AMUSEMENT] level_list: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int>(v16, &config->level_list);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])byte_1AA1BDC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 496));
      v9 = v18 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
        "checkCharAmusementOverallConfig",
        94);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1AA25E20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    v34 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v34 = -117901064;
    *(_WORD *)(v34 + 4) = -1800;
    if ( !v9 )
    {
      v35 = 0;
      goto LABEL_56;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementOverallExcelConfig>,false,false> *const)(v3 + 48));
  }
  v35 = 1;
LABEL_56:
  if ( v35 == 1 )
    v2 = 0;
  result = v2;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 128: range 0000000012ADFF74-0000000012AE084F
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::checkCharAmusementStageConfig(
        const ActivityCharAmusementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v8; // rax
  const unsigned int *v9; // rsi
  std::set<unsigned int>::size_type v10; // r15
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  _BOOL4 v14; // r15d
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  unsigned __int64 v24; // rax
  int v25; // eax
  int32_t result; // eax
  data::ActivityCharAmusementStageExcelConfigMap *__for_range; // [rsp+28h] [rbp-1D8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::reference v28; // [rsp+30h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *config; // [rsp+40h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1B8h]
  char v31[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 12 level_id:137 48 8 15 __for_begin:129 80 8 13 __for_end:129 112 8 15 __for_begin:137 14"
                        "4 8 13 __for_end:137 176 32 9 <unknown> 240 32 9 <unknown> 304 48 16 level_id_set:131";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::checkCharAmusementStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  __for_range = &this->activity_char_amusement_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ActivityCharAmusementStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false> *)(v3 + 80)) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v28);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementStageExcelConfig>(v28);
    v6 = ((v3 + 304) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    M_current = std::vector<unsigned int>::begin(&config->level_list)._M_current;
    v8._M_current = std::vector<unsigned int>::end(&config->level_list)._M_current;
    v9 = M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 304),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      v8);
    v10 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 304));
    if ( v10 == std::vector<unsigned int>::size(&config->level_list) )
    {
      __for_range_0 = &config->level_list;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 112, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 112) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 144, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v15 = (char *)(v3 + 144);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 112),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 144)) )
        {
          v23 = 1;
          goto LABEL_30;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = *v17;
        v19 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
        {
          LOBYTE(v15) = v19 != 0;
          __asan_report_store4(v3 + 32, v15);
        }
        *(_DWORD *)(v3 + 32) = v18;
        if ( !data::ActivityCharAmusementExcelConfigMgrBase::findActivityCharAmusementLevelExcelConfig(
                this,
                *(unsigned int *)(v3 + 32)) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 112));
      }
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
        "checkCharAmusementStageConfig",
        141);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 240),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              v20,
              (const char (*)[28])"[CHAR_AMUSEMENT] level_id: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])byte_1AA207E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v23 = 0;
LABEL_30:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
      v14 = v23 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
        "checkCharAmusementStageConfig",
        134);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 176),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v11,
              (const char (*)[30])"[CHAR_AMUSEMENT] level_list: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, &config->level_list);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1AA1BDC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 304));
    v24 = ((v3 + 304) >> 3) + 2147450880;
    *(_DWORD *)v24 = -117901064;
    *(_WORD *)(v24 + 4) = -1800;
    if ( !v14 )
    {
      v25 = 0;
      goto LABEL_35;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementStageExcelConfig>,false,false> *const)(v3 + 48));
  }
  v25 = 1;
LABEL_35:
  if ( v25 == 1 )
    v2 = 0;
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 150: range 0000000012AE0850-0000000012AE0F39
int32_t __cdecl ActivityCharAmusementExcelConfigMgr::checkCharAmusementLevelConfig(
        const ActivityCharAmusementExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  uint32_t *p_gallery_id; // rax
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int v18; // edx
  int32_t result; // eax
  data::ActivityCharAmusementLevelExcelConfigMap *__for_range; // [rsp+10h] [rbp-180h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::reference v22; // [rsp+18h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig> >::type *config; // [rsp+28h] [rbp-168h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-160h]
  const unsigned int *trial_avatar_id; // [rsp+38h] [rbp-158h]
  char v26[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:151 64 8 13 __for_end:151 96 8 15 __for_begin:160 128 8 13 __for_end:160 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::checkCharAmusementLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->activity_char_amusement_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_34;
    }
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityCharAmusementLevelExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityCharAmusementLevelExcelConfig>(v22);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    p_gallery_id = &config->gallery_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gallery_id);
    }
    gallery_id = config->gallery_id;
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, gallery_id) )
      break;
    __for_range_0 = &config->trial_avatar_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, gallery_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
      {
        v18 = 1;
        goto LABEL_30;
      }
      v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      trial_avatar_id = v13;
      p_trial_avatar_config_mgr = &txt_config_mgr->trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(p_trial_avatar_config_mgr, *trial_avatar_id) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
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
      "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
      "checkCharAmusementLevelConfig",
      164);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            v15,
            (const char (*)[35])"[CHAR_AMUSEMENT] trial_avatar_id: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, trial_avatar_id);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])byte_1AA207E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v18 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v12 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityCharAmusementExcelConfig.cpp",
    "checkCharAmusementLevelConfig",
    156);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          v9,
          (const char (*)[30])"[CHAR_AMUSEMENT] gallery_id: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->gallery_id);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AA207E0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v12 = 0;
LABEL_34:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 173: range 0000000012AE0F3A-0000000012AE10FB
const data::ActivityCharAmusementLevelExcelConfig *__fastcall ActivityCharAmusementExcelConfigMgr::findLevelConfigByGalleryId(
        const ActivityCharAmusementExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig> *p_gallery_id_level_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityCharAmusementLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:172 64 8 8 iter:174 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCharAmusementExcelConfigMgr::findLevelConfigByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_level_config_map = &this->gallery_id_level_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::find(p_gallery_id_level_config_map, (const std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_level_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityCharAmusementLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityCharAmusementLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 183: range 0000000012AE10FC-0000000012AE162A
const std::vector<unsigned int> *__fastcall ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(
        const ActivityCharAmusementExcelConfigMgr *const this,
        std::vector<unsigned int> *schedule_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> *p_schedule_random_config_map; // rdx
  std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> *v7; // rdx
  bool v8; // al
  const std::vector<unsigned int> *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> >::pointer v10; // rax
  char *v11; // rsi
  bool v12; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GalleryType>,false,false>::pointer v13; // rdx
  data::GalleryType *p_second; // rax
  data::GalleryType second; // ecx
  char v16; // al
  bool v17; // al
  const std::unordered_map<unsigned int,data::GalleryType> *level_id_gallery_type_map; // [rsp+20h] [rbp-150h]
  const std::unordered_map<data::GalleryType,std::vector<unsigned int>> *gallery_type_level_id_vec_map; // [rsp+28h] [rbp-148h]
  char v21[320]; // [rsp+30h] [rbp-140h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 16 gallery_type:198 64 4 15 schedule_id:182 80 4 12 level_id:182 96 8 22 random_config_it"
                        "er:185 128 8 9 <unknown> 160 8 21 gallery_type_iter:193 192 8 9 <unknown> 224 8 21 level_id_vec_"
                        "iter:199 256 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -202116352;
  *(_DWORD *)(v3 + 64) = (_DWORD)schedule_id;
  *(_DWORD *)(v3 + 80) = level_id;
  if ( !(_BYTE)`guard variable for'ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)::empty_vec
    && __cxa_guard_acquire(&`guard variable for'ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)::empty_vec) )
  {
    std::vector<unsigned int>::vector(&ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec);
    __cxa_guard_release(&`guard variable for'ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)::empty_vec);
    schedule_id = &ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec,
      &_dso_handle);
  }
  p_schedule_random_config_map = &this->schedule_random_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, schedule_id);
  *(std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::const_iterator *)(v3 + 96) = std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::find(p_schedule_random_config_map, (const std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::key_type *)(v3 + 64));
  v7 = &this->schedule_random_config_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 64);
  *(std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> >::_Self *)(v3 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = &ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> > *const)(v3 + 96));
    level_id_gallery_type_map = &v10->second.level_id_gallery_type_map_;
    gallery_type_level_id_vec_map = &v10->second.gallery_type_level_id_vec_map_;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 128);
    *(std::unordered_map<unsigned int,data::GalleryType>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::GalleryType>::find(
                                                                                          level_id_gallery_type_map,
                                                                                          (const std::unordered_map<unsigned int,data::GalleryType>::key_type *)(v3 + 80));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v3 + 80);
    *(std::unordered_map<unsigned int,data::GalleryType>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::GalleryType>::end(level_id_gallery_type_map);
    v11 = (char *)(v3 + 192);
    v12 = std::__detail::operator==<std::pair<unsigned int const,data::GalleryType>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryType>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GalleryType>,false> *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = &ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GalleryType>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GalleryType>,false,false> *const)(v3 + 160));
      p_second = &v13->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v13->second;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v16 != 0;
      if ( v16 != 0 && v16 <= 3 )
        __asan_report_store4(v3 + 48, v11);
      *(_DWORD *)(v3 + 48) = second;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v11);
      *(std::unordered_map<data::GalleryType,std::vector<unsigned int>>::const_iterator *)(v3 + 224) = std::unordered_map<data::GalleryType,std::vector<unsigned int>>::find(gallery_type_level_id_vec_map, (const std::unordered_map<data::GalleryType,std::vector<unsigned int>>::key_type *)(v3 + 48));
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v3 + 48);
      *(std::unordered_map<data::GalleryType,std::vector<unsigned int>>::const_iterator *)(v3 + 256) = std::unordered_map<data::GalleryType,std::vector<unsigned int>>::end(gallery_type_level_id_vec_map);
      v17 = std::__detail::operator==<std::pair<data::GalleryType const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::GalleryType,std::vector<unsigned int> >,false> *)(v3 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<const data::GalleryType,std::vector<unsigned int> >,false> *)(v3 + 256));
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
        result = &ActivityCharAmusementExcelConfigMgr::getSameTypeLevelIdVec(unsigned int,unsigned int)const::empty_vec;
      else
        result = &std::__detail::_Node_const_iterator<std::pair<data::GalleryType const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::GalleryType,std::vector<unsigned int> >,false,false> *const)(v3 + 224))->second;
    }
  }
  if ( v21 == (char *)v3 )
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

// Line 208: range 0000000012AE162C-0000000012AE1849
const std::map<unsigned int,unsigned int> *__fastcall ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(
        const ActivityCharAmusementExcelConfigMgr *const this,
        std::map<unsigned int,unsigned int> *schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> *p_schedule_random_config_map; // rdx
  std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:207 64 8 8 iter:210 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityCharAmusementExcelConfigMgr::getLevelWeightMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)schedule_id;
  if ( !(_BYTE)`guard variable for'ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)::empty_map
    && __cxa_guard_acquire(&`guard variable for'ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)::empty_map) )
  {
    std::map<unsigned int,unsigned int>::map(&ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)const::empty_map);
    __cxa_guard_release(&`guard variable for'ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)::empty_map);
    schedule_id = &ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)const::empty_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<unsigned int,unsigned int>::~map,
      &ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)const::empty_map,
      &_dso_handle);
  }
  p_schedule_random_config_map = &this->schedule_random_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::find(p_schedule_random_config_map, (const std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::key_type *)(v2 + 48));
  v6 = &this->schedule_random_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &ActivityCharAmusementExcelConfigMgr::getLevelWeightMap(unsigned int)const::empty_map;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityCharAmusementExcelConfigMgr::ScheduleRandomConfig> > *const)(v2 + 64))->second.level_weight_map_;
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

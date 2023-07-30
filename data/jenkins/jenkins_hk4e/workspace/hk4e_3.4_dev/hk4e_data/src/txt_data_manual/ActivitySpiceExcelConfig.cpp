// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySpiceExcelConfig.cpp

// Line 18: range 0000000012E1D182-0000000012E1D4A6
int32_t __cdecl ActivitySpiceExcelConfigMgr::rewriteConfig(
        ActivitySpiceExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivitySpiceExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivitySpiceExcelConfigMgr::rewriteSpiceConfigData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"rewriteSpiceConfigData failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivitySpiceExcelConfigMgr::rewriteSpiceStageData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "rewriteConfig",
      27);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v7,
      (const char (*)[30])"rewriteSpiceStageData failed.");
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

// Line 34: range 0000000012E1D4A8-0000000012E1D87C
int32_t __cdecl ActivitySpiceExcelConfigMgr::rewriteSpiceConfigData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::ActivitySpiceExcelConfig **v6; // r8
  std::map<unsigned int,const data::ActivitySpiceExcelConfig*> *p_activity_spice_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,const data::ActivitySpiceExcelConfig*> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::ActivitySpiceExcelConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceExcelConfig> >::type *spice_config; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:35 64 8 12 __for_end:35 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::rewriteSpiceConfigData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivitySpiceExcelConfig>(v14);
    spice_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceExcelConfig>(v14);
    p_activity_spice_config_map = &this->activity_spice_config_map_;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(_QWORD *)(v3 + 96) = spice_config;
    v8 = std::map<unsigned int,data::ActivitySpiceExcelConfig const*>::emplace<unsigned int const&,data::ActivitySpiceExcelConfig const*>(
           p_activity_spice_config_map,
           &spice_config->activity_id,
           (const data::ActivitySpiceExcelConfig **)(v3 + 96),
           (const unsigned int *)p_activity_spice_config_map,
           v6);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 128, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
    "rewriteSpiceConfigData",
    39);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
          v9,
          (const char (*)[45])"[SPICE] dumplicate activity_id, activity_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &spice_config->activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v11 = 0;
LABEL_18:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 47: range 0000000012E1D87E-0000000012E1E0C6
int32_t __cdecl ActivitySpiceExcelConfigMgr::rewriteSpiceStageData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int>::size_type v6; // r15
  common::milog::MiLogStream *v7; // rax
  _BOOL4 v8; // edx
  unsigned __int64 v9; // rax
  std::map<unsigned int,unsigned int> *v10; // r8
  const unsigned int *v11; // r15
  const unsigned int *v12; // rax
  const unsigned int *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const unsigned int *v17; // rax
  int v18; // r15d
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  unsigned __int64 v22; // rax
  int v23; // eax
  int32_t result; // eax
  uint32_t i; // [rsp+2Ch] [rbp-1D4h]
  data::ActivitySpiceStageDataExcelConfigMap *__for_range; // [rsp+30h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::reference v27; // [rsp+38h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *id; // [rsp+40h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-1B8h]
  char v30[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 8 14 __for_begin:48 80 8 12 __for_end:48 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <un"
                        "known> 304 48 21 material_count_map:56";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::rewriteSpiceStageData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  __for_range = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v3 + 80)) )
  {
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v3 + 48));
    id = std::get<0ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v27);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v27);
    v6 = std::vector<unsigned int>::size(&stage_config->material_id_list);
    if ( v6 == std::vector<unsigned int>::size(&stage_config->material_num_list) )
    {
      v9 = ((v3 + 304) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
      for ( i = 0; i < std::vector<unsigned int>::size(&stage_config->material_id_list); ++i )
      {
        v11 = std::vector<unsigned int>::operator[](&stage_config->material_num_list, i);
        v12 = std::vector<unsigned int>::operator[](&stage_config->material_id_list, i);
        v14 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                (std::map<unsigned int,unsigned int> *const)(v3 + 304),
                v12,
                v11,
                v12,
                v13);
        if ( !v14.second )
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
            "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
            "rewriteSpiceStageData",
            61);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 176),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  v15,
                  (const char (*)[55])"[SPICE] material_count_map emplace false, material_id:");
          v17 = std::vector<unsigned int>::operator[](&stage_config->material_id_list, i);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, v17);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
          *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
          goto LABEL_26;
        }
      }
      v19 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::emplace<unsigned int const&,std::map<unsigned int,unsigned int>&>(
              &this->stage_material_data_map_,
              id,
              (std::map<unsigned int,unsigned int> *)(v3 + 304),
              (const unsigned int *)&this->stage_material_data_map_,
              v10);
      if ( !v19.second )
      {
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
          "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
          "rewriteSpiceStageData",
          68);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v20,
                (const char (*)[58])"[SPICE] stage_material_data_map_ emplace false, stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        v18 = 1;
      }
LABEL_26:
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
      v8 = v18 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
        "rewriteSpiceStageData",
        52);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        v7,
        (const char (*)[62])"[SPICE] material_id_list and material_num_list size not same.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
    }
    v22 = ((v3 + 304) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_WORD *)(v22 + 4) = -1800;
    if ( !v8 )
    {
      v23 = 0;
      goto LABEL_31;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v3 + 48));
  }
  v23 = 1;
LABEL_31:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
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

// Line 77: range 0000000012E1E0C8-0000000012E1E672
int32_t __cdecl ActivitySpiceExcelConfigMgr::checkConfig(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivitySpiceExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivitySpiceExcelConfigMgr::checkSpiceConfigData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "checkConfig",
      80);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"checkSpiceConfigData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivitySpiceExcelConfigMgr::checkSpiceStageData(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "checkConfig",
      86);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      v7,
      (const char (*)[28])"checkSpiceStageData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivitySpiceExcelConfigMgr::checkSpiceFoodData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "checkConfig",
      92);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v8,
      (const char (*)[27])"checkSpiceFoodData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivitySpiceExcelConfigMgr::checkSpiceGivingData(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
      "checkConfig",
      98);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v9,
      (const char (*)[29])"checkSpiceGivingData failed.");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 106: range 0000000012E1E674-0000000012E1F34E
int32_t __cdecl ActivitySpiceExcelConfigMgr::checkSpiceConfigData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *p_activity_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // eax
  NewActivityExcelConfigMgr *v11; // rcx
  __int64 activity_id; // rsi
  data::NewActivityType ActivitiyTypeByActivityId; // edx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  NewActivityExcelConfigMgr *v17; // rcx
  uint32_t ActivityIdByScheduleId; // ecx
  common::milog::MiLogStream *v19; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  __int64 spice_id; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v24; // rax
  NewActivityExcelConfigMgr *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int v28; // edx
  int v29; // eax
  int32_t result; // eax
  data::ActivitySpiceExcelConfigMap *__for_range; // [rsp+18h] [rbp-268h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::reference v33; // [rsp+20h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceExcelConfig> >::type *spice_excel_config; // [rsp+30h] [rbp-250h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-240h]
  const unsigned int *watcher_id; // [rsp+48h] [rbp-238h]
  char v37[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 17 activity_type:118 64 8 15 __for_begin:107 96 8 13 __for_end:107 128 8 15 __for_begin:"
                        "139 160 8 13 __for_end:139 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <un"
                        "known> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::checkSpiceConfigData;
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
  __for_range = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v3 + 96)) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ActivitySpiceExcelConfig>(v33);
    spice_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceExcelConfig>(v33);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    p_activity_id = &spice_excel_config->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_activity_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_activity_id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
           p_new_activity_config_mgr,
           spice_excel_config->activity_id) )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&spice_excel_config->activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)spice_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_excel_config->activity_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&spice_excel_config->activity_id);
      }
      activity_id = spice_excel_config->activity_id;
      ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v11, activity_id);
      v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(activity_id) = v14 != 0;
        __asan_report_store4(v3 + 48, activity_id);
      }
      *(_DWORD *)(v3 + 48) = ActivitiyTypeByActivityId;
      if ( *(_DWORD *)(v3 + 48) == 2602 )
      {
        v17 = &txt_config_mgr->new_activity_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&spice_excel_config->schedule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&spice_excel_config->schedule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&spice_excel_config->schedule_id);
        }
        ActivityIdByScheduleId = NewActivityExcelConfigMgr::getActivityIdByScheduleId(
                                   v17,
                                   spice_excel_config->schedule_id);
        if ( *(_BYTE *)(((unsigned __int64)&spice_excel_config->activity_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)spice_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_excel_config->activity_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&spice_excel_config->activity_id);
        }
        if ( ActivityIdByScheduleId == spice_excel_config->activity_id )
        {
          p_material_config_mgr = &txt_config_mgr->material_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&spice_excel_config->spice_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)spice_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&spice_excel_config->spice_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&spice_excel_config->spice_id);
          }
          spice_id = spice_excel_config->spice_id;
          if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, spice_id) )
          {
            __for_range_0 = &spice_excel_config->watcher_id_list;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 128, spice_id);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, spice_id);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
              {
                v28 = 1;
                goto LABEL_52;
              }
              v24 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
              watcher_id = v24;
              v25 = &txt_config_mgr->new_activity_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v24);
              }
              if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(v25, *watcher_id) )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
              4u,
              "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
              "checkSpiceConfigData",
              143);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v26,
                    (const char (*)[35])byte_1AAABB40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, watcher_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v28 = 0;
LABEL_52:
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            v10 = v28 == 1;
          }
          else
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
              4u,
              "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
              "checkSpiceConfigData",
              135);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    v22,
                    (const char (*)[49])"[SPICE] findMaterialExcelConfig fails, spice_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &spice_excel_config->spice_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
          }
        }
        else
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
            "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
            "checkSpiceConfigData",
            128);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            v19,
            (const char (*)[47])"[SPICE] schedule_id and activity_id not match.");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v10 = 0;
        }
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
          "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
          "checkSpiceConfigData",
          121);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v15,
                (const char (*)[44])"[SPICE] activity_type error, activity_type:");
        common::milog::MiLogStream::operator<<<data::NewActivityType,(data::NewActivityType*)0>(
          v16,
          (const data::NewActivityType *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
        "checkSpiceConfigData",
        113);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v8,
             (const char (*)[29])"[SPICE] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &spice_excel_config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
    {
      v29 = 0;
      goto LABEL_57;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v3 + 64));
  }
  v29 = 1;
LABEL_57:
  if ( v29 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 152: range 0000000012E1F350-0000000012E1FE13
int32_t __cdecl ActivitySpiceExcelConfigMgr::checkSpiceStageData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // edx
  int v12; // eax
  std::vector<unsigned int>::size_type v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v17; // rax
  std::__iterator_traits<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >,void>::difference_type v18; // r15
  std::vector<unsigned int>::const_reference v19; // rax
  _DWORD *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  std::vector<unsigned int>::const_reference v23; // rax
  _DWORD *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int32_t result; // eax
  unsigned int *__value; // [rsp+8h] [rbp-228h]
  uint32_t total_material_num; // [rsp+28h] [rbp-208h]
  uint32_t i; // [rsp+2Ch] [rbp-204h]
  data::ActivitySpiceStageDataExcelConfigMap *__for_range; // [rsp+30h] [rbp-200h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::reference v33; // [rsp+38h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *id; // [rsp+40h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *stage_config; // [rsp+48h] [rbp-1E8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-1E0h]
  const unsigned int *material_id; // [rsp+58h] [rbp-1D8h]
  char v38[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 15 __for_begin:153 64 8 13 __for_end:153 96 8 15 __for_begin:155 128 8 13 __for_end:155 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::checkSpiceStageData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::end(__for_range);
  while ( 2 )
  {
    v6 = (char *)(v3 + 64);
    if ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v3 + 32),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v3 + 64)) )
    {
      v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v3 + 32));
      id = std::get<0ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v33);
      stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceStageDataExcelConfig>(v33);
      __for_range_0 = &stage_config->material_id_list;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v6);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
        {
          v11 = 1;
          goto LABEL_24;
        }
        v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        material_id = v7;
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *material_id) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
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
        "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
        "checkSpiceStageData",
        159);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v9,
              (const char (*)[52])"[SPICE] findMaterialExcelConfig fails, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
LABEL_24:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v11 == 1 )
      {
        v13 = std::vector<unsigned int>::size(&stage_config->material_id_list);
        if ( v13 == std::vector<unsigned int>::size(&stage_config->material_num_list) )
        {
          total_material_num = 0;
          for ( i = 0; i < std::vector<unsigned int>::size(&stage_config->material_id_list); ++i )
          {
            __value = (unsigned int *)std::vector<unsigned int>::operator[](&stage_config->material_id_list, i);
            M_current = std::vector<unsigned int>::end(&stage_config->material_order_list)._M_current;
            v17._M_current = std::vector<unsigned int>::begin(&stage_config->material_order_list)._M_current;
            v18 = std::count<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                    v17,
                    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                    __value);
            v19 = std::vector<unsigned int>::operator[](&stage_config->material_num_list, i);
            v20 = v19;
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v19);
            }
            if ( v18 != *v20 )
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
                "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
                "checkSpiceStageData",
                178);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      v21,
                      (const char (*)[54])byte_1AAABD80);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
              v2 = -1;
              v12 = 0;
              goto LABEL_47;
            }
            v23 = std::vector<unsigned int>::operator[](&stage_config->material_num_list, i);
            v24 = v23;
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v23);
            }
            total_material_num += *v24;
          }
          if ( std::vector<unsigned int>::size(&stage_config->material_order_list) == total_material_num )
          {
            std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v3 + 32));
            continue;
          }
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
            "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
            "checkSpiceStageData",
            188);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v25, (const char (*)[54])byte_1AAABDE0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          v2 = -1;
          v12 = 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
            "checkSpiceStageData",
            166);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                  v14,
                  (const char (*)[72])"[SPICE] material_id_list and material_num_list size not same. stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          v2 = -1;
          v12 = 0;
        }
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      v12 = 1;
    }
    break;
  }
LABEL_47:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 197: range 0000000012E1FE14-0000000012E2034F
int32_t __cdecl ActivitySpiceExcelConfigMgr::checkSpiceFoodData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  MaterialExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  data::ActivitySpiceFoodExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig> >::type *normal_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig> >::type *food_config; // [rsp+28h] [rbp-118h]
  char v18[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:198 64 8 13 __for_end:198 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::checkSpiceFoodData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->activity_spice_food_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false> *const)(v3 + 32));
    normal_id = std::get<0ul,unsigned int const,data::ActivitySpiceFoodExcelConfig>(v15);
    food_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceFoodExcelConfig>(v15);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)normal_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)normal_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)normal_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(normal_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *normal_id) )
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
        "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
        "checkSpiceFoodData",
        202);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             v7,
             (const char (*)[55])"[SPICE] findMaterialExcelConfig fails, normal_food_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, normal_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_24;
    }
    v10 = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&food_config->special_food_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)food_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&food_config->special_food_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&food_config->special_food_id);
    }
    if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v10, food_config->special_food_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
    "checkSpiceFoodData",
    207);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
          v11,
          (const char (*)[56])"[SPICE] findMaterialExcelConfig fails, special_food_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &food_config->special_food_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_24:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 216: range 0000000012E20350-0000000012E2088A
int32_t __cdecl ActivitySpiceExcelConfigMgr::checkSpiceGivingData(
        ActivitySpiceExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GivingExcelConfigMgr *p_giving_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  data::ActivitySpiceGivingExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig> >::type *giving_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig> >::type *giving_config; // [rsp+28h] [rbp-118h]
  char v18[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:217 64 8 13 __for_end:217 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySpiceExcelConfigMgr::checkSpiceGivingData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->activity_spice_giving_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false> *const)(v3 + 32));
    giving_id = std::get<0ul,unsigned int const,data::ActivitySpiceGivingExcelConfig>(v15);
    giving_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySpiceGivingExcelConfig>(v15);
    p_giving_config_mgr = &txt_config_mgr->giving_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)giving_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)giving_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)giving_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(giving_id);
    }
    if ( !data::GivingExcelConfigMgrBase::findGivingExcelConfig(p_giving_config_mgr, *giving_id) )
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
        "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
        "checkSpiceGivingData",
        221);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             v7,
             (const char (*)[48])"[SPICE] findGivingExcelConfig fails, giving_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_24;
    }
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&giving_config->character_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)giving_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&giving_config->character_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&giving_config->character_id);
    }
    if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, giving_config->character_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivitySpiceExcelConfig.cpp",
    "checkSpiceGivingData",
    226);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v11,
          (const char (*)[51])"[SPICE] findAvatarExcelConfig fails, character_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &giving_config->character_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_24:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 234: range 0000000012E2088C-0000000012E20A4D
const std::map<unsigned int,unsigned int> *__fastcall ActivitySpiceExcelConfigMgr::findMaterialCntMapByStageId(
        const ActivitySpiceExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *p_stage_material_data_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:233 64 8 8 iter:235 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySpiceExcelConfigMgr::findMaterialCntMapByStageId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_stage_material_data_map = &this->stage_material_data_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               p_stage_material_data_map,
                                                                                               (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->stage_material_data_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
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

// Line 245: range 0000000012E20A4E-0000000012E20C30
const data::ActivitySpiceExcelConfig *__fastcall ActivitySpiceExcelConfigMgr::findActivitySpiceExcelConfigByActivityId(
        const ActivitySpiceExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,const data::ActivitySpiceExcelConfig*> *p_activity_spice_config_map; // rdx
  std::map<unsigned int,const data::ActivitySpiceExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::ActivitySpiceExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivitySpiceExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:244 64 8 8 iter:246 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySpiceExcelConfigMgr::findActivitySpiceExcelConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_spice_config_map = &this->activity_spice_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::map<unsigned int,const data::ActivitySpiceExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivitySpiceExcelConfig const*>::find(
                                                                                                 p_activity_spice_config_map,
                                                                                                 (const std::map<unsigned int,const data::ActivitySpiceExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,const data::ActivitySpiceExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ActivitySpiceExcelConfig const*>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivitySpiceExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivitySpiceExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig const*>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,const data::ActivitySpiceExcelConfig*> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
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

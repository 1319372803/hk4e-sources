// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp

// Line 18: range 0000000012AF67A2-0000000012AF6C17
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::checkConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityDragonSpineExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityDragonSpineExcelConfigMgr::checkDragonSpineStageConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "checkConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"checkDragonSpineStageConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityDragonSpineExcelConfigMgr::checkDragonSpineEnhanceConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "checkConfig",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v7,
      (const char (*)[37])"checkDragonSpineEnhanceConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityDragonSpineExcelConfigMgr::checkDragonSpineMissionConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "checkConfig",
      31);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v8,
      (const char (*)[37])"checkDragonSpineMissionConfig failed");
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

// Line 38: range 0000000012AF6C18-0000000012AF6E40
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::rewriteConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineStageConfig(this, txt_config_mgr)
    || ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineMissionConfig(this, txt_config_mgr)
    || ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineEnhanceConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "rewriteConfig",
      43);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 50: range 0000000012AF6E42-0000000012AF78EA
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineStageConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  const unsigned int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t *p_chapter_id; // rsi
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  int32_t result; // eax
  data::DragonSpineStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-230h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::reference v26; // [rsp+18h] [rbp-228h]
  std::tuple_element<0,std::pair<unsigned int const,data::DragonSpineStageExcelConfig> >::type *id; // [rsp+20h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineStageExcelConfig> >::type *config; // [rsp+28h] [rbp-218h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *mission_set; // [rsp+30h] [rbp-210h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *watcher_set; // [rsp+38h] [rbp-208h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-200h]
  data::DragonSpineMissionExcelConfig *mission_config_ptr; // [rsp+48h] [rbp-1F8h]
  char v33[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 mission_id:72 64 8 14 __for_begin:51 96 8 12 __for_end:51 128 8 14 __for_begin:72 160 "
                        "8 12 __for_end:72 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineStageConfig;
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
  v5[536862733] = -202116109;
  __for_range = &this->dragon_spine_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false> *)(v3 + 96)) )
    {
      v8 = 1;
      goto LABEL_44;
    }
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::DragonSpineStageExcelConfig>(v26);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DragonSpineStageExcelConfig>(v26);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>>,unsigned int>(
           &this->chapter_mission_map_,
           &config->chapter_id) )
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
        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
        "rewriteDragonSpineStageConfig",
        55);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             v6,
             (const char (*)[50])"[DRAGON_SPINE] chapter_id duplicated chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v8 = 0;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->chapter_id);
    }
    if ( !data::isValidDragonSpinePhase(config->chapter_id) )
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
        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
        "rewriteDragonSpineStageConfig",
        60);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              v10,
              (const char (*)[48])"[DRAGON_SPINE] chapter_id invalid, chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v8 = 0;
      goto LABEL_44;
    }
    v12 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->chapter_id_2_config_id_map_,
            &config->chapter_id,
            id,
            (const unsigned int *)&this->chapter_id_2_config_id_map_,
            v9);
    if ( !v12.second )
      break;
    mission_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->chapter_mission_map_,
                    &config->chapter_id);
    p_chapter_id = &config->chapter_id;
    watcher_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->chapter_watcher_map_,
                    &config->chapter_id);
    __for_range_0 = &config->mission_id_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_chapter_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v23 = 1;
        goto LABEL_40;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v3 + 48, v16);
      }
      *(_DWORD *)(v3 + 48) = v19;
      std::set<unsigned int>::insert(mission_set, (const std::set<unsigned int>::value_type *)(v3 + 48));
      mission_config_ptr = data::ActivityDragonSpineExcelConfigMgrBase::findDragonSpineMissionExcelConfig(
                             this,
                             *(unsigned int *)(v3 + 48));
      if ( !mission_config_ptr )
        break;
      std::set<unsigned int>::insert(watcher_set, &mission_config_ptr->watcher_id);
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
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "rewriteDragonSpineStageConfig",
      78);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v21, (const char (*)[41])byte_1AA2AE00);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
    *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v23 = 0;
LABEL_40:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v23 != 1 )
    {
      v8 = 0;
      goto LABEL_44;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
    "rewriteDragonSpineStageConfig",
    66);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 320),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v13,
          (const char (*)[51])"[DRAGON_SPINE] chapter_id duplicated, chapter_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->chapter_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
  v2 = -1;
  v8 = 0;
LABEL_44:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 88: range 0000000012AF78EC-0000000012AF7ED1
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineEnhanceConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::DragonSpineEnhanceExcelConfig **v6; // r8
  std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*> *p_enhance_level_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // edx
  uint32_t process; // ecx
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  data::DragonSpineEnhanceExcelConfigMap *__for_range; // [rsp+10h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig> >::type *config; // [rsp+28h] [rbp-138h]
  char v18[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:89 64 8 12 __for_end:89 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineEnhanceConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->dragon_spine_enhance_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::DragonSpineEnhanceExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::DragonSpineEnhanceExcelConfig>(__in);
    p_enhance_level_config_map = &this->enhance_level_config_map_;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(_QWORD *)(v3 + 96) = config;
    v8 = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::emplace<unsigned int &,data::DragonSpineEnhanceExcelConfig *>(
           p_enhance_level_config_map,
           &config->process,
           (data::DragonSpineEnhanceExcelConfig **)(v3 + 96),
           (unsigned int *)p_enhance_level_config_map,
           v6);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8.second )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->process >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->process >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->process);
    }
    process = config->process;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_enhance_weapon_chapter_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_enhance_weapon_chapter_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_enhance_weapon_chapter_id_);
    }
    if ( process > this->max_enhance_weapon_chapter_id_ )
      this->max_enhance_weapon_chapter_id_ = config->process;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
    "rewriteDragonSpineEnhanceConfig",
    93);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
          v9,
          (const char (*)[56])"enhance_level_config_map_ duplicated process, process: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->process);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_24:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
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
      1u,
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "rewriteDragonSpineEnhanceConfig",
      101);
    v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[47])"[DRAGON_SPINE] max_enhance_weapon_chapter_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->max_enhance_weapon_chapter_id_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = 0;
  }
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 106: range 0000000012AF7ED2-0000000012AF8884
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::checkDragonSpineStageConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // edx
  char *v9; // rsi
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  const data::QuestExcelConfigMgrBase *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // eax
  int32_t result; // eax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-1F0h]
  data::DragonSpineStageExcelConfigMap *__for_range; // [rsp+18h] [rbp-1D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::reference v25; // [rsp+20h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineStageExcelConfig> >::type *config; // [rsp+30h] [rbp-1C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  char v28[432]; // [rsp+40h] [rbp-1B0h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 14 chapter_id:113 48 4 14 mission_id:124 64 8 15 __for_begin:122 96 8 13 __for_end:122 12"
                        "8 8 15 __for_begin:124 160 8 13 __for_end:124 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::checkDragonSpineStageConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  for ( *(_DWORD *)(v3 + 32) = 1; ; ++*(_DWORD *)(v3 + 32) )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    if ( *(_DWORD *)(v3 + 32) > 4u )
    {
      v8 = 1;
      goto LABEL_18;
    }
    txt_config_mgr = (const TxtConfigMgr *)(v3 + 32);
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            &this->chapter_id_2_config_id_map_,
            (const unsigned int *)(v3 + 32)) )
      break;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
  }
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
    "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
    "checkDragonSpineStageConfig",
    117);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1AA2B100);
  txt_config_mgr = (const TxtConfigMgr *)(v3 + 32);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
  {
    __for_range = &this->dragon_spine_stage_excel_config_map;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DragonSpineStageExcelConfig>::end(__for_range);
    while ( 1 )
    {
      v9 = (char *)(v3 + 96);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false> *)(v3 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false> *)(v3 + 96)) )
        break;
      v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false> *const)(v3 + 64));
      std::get<0ul,unsigned int const,data::DragonSpineStageExcelConfig>(v25);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DragonSpineStageExcelConfig>(v25);
      __for_range_0 = &config->mission_id_list;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v9);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v10 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v17 = 1;
          goto LABEL_47;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v3 + 48, v10);
        }
        *(_DWORD *)(v3 + 48) = v13;
        if ( !data::ActivityDragonSpineExcelConfigMgrBase::findDragonSpineMissionExcelConfig(
                this,
                *(unsigned int *)(v3 + 48)) )
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
            "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
            "checkDragonSpineStageConfig",
            128);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v15, (const char (*)[50])byte_1AA2B160);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_47;
        }
        p_quest_config_mgr = &txt_config_mgra->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->pre_quest_id);
        }
        if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, config->pre_quest_id) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      }
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
        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
        "checkDragonSpineStageConfig",
        134);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v19, (const char (*)[55])byte_1AA2B1C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->pre_quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
LABEL_47:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v17 != 1 )
      {
        v21 = 0;
        goto LABEL_51;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineStageExcelConfig>,false,false> *const)(v3 + 64));
    }
    v21 = 1;
LABEL_51:
    if ( v21 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v28 == (char *)v3 )
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

// Line 143: range 0000000012AF8886-0000000012AF8DB7
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::checkDragonSpineEnhanceConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  data::DragonSpineEnhanceExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig> >::type *config; // [rsp+28h] [rbp-118h]
  char v15[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:144 64 8 13 __for_end:144 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::checkDragonSpineEnhanceConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->dragon_spine_enhance_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DragonSpineEnhanceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_25;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::DragonSpineEnhanceExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DragonSpineEnhanceExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&config->process >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->process >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->process);
    }
    if ( config->process > 3 )
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
        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
        "checkDragonSpineEnhanceConfig",
        148);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v6, (const char (*)[53])byte_1AA2B2C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->process);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v8 = 0;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->activity_ability_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->activity_ability_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->activity_ability_group_id);
    }
    if ( config->activity_ability_group_id
      && !ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
            &txt_config_mgr->activity_ability_group_config_mgr,
            config->activity_ability_group_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
    "checkDragonSpineEnhanceConfig",
    156);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v9, (const char (*)[71])byte_1AA2B320);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_ability_group_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v8 = 0;
LABEL_25:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 165: range 0000000012AF8DB8-0000000012AF94AA
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::checkDragonSpineMissionConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_chapter_id; // rax
  __int64 v7; // rsi
  uint32_t chapter_id; // ecx
  char v9; // al
  std::map<unsigned int,std::set<unsigned int>> *p_chapter_mission_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v11; // rdx
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  std::set<unsigned int> *p_second; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // eax
  int32_t result; // eax
  data::DragonSpineMissionExcelConfigMap *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::reference v24; // [rsp+18h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *id; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *config; // [rsp+28h] [rbp-178h]
  char v27[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 14 chapter_id:168 64 8 15 __for_begin:166 96 8 13 __for_end:166 128 8 16 chapter_iter:169"
                        " 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::checkDragonSpineMissionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->dragon_spine_mission_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false> *)(v3 + 96)) )
  {
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::DragonSpineMissionExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DragonSpineMissionExcelConfig>(v24);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_chapter_id = &config->chapter_id;
    v7 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_chapter_id);
    }
    chapter_id = config->chapter_id;
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_store4(v3 + 48, v7);
    *(_DWORD *)(v3 + 48) = chapter_id;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_chapter_mission_map = &this->chapter_mission_map_;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v7);
    *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 128) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                               p_chapter_mission_map,
                                                                               (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &this->chapter_mission_map_;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 160) = std::map<unsigned int,std::set<unsigned int>>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
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
        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
        "checkDragonSpineMissionConfig",
        172);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v13, (const char (*)[41])byte_1AA2B480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->chapter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v15 = 0;
    }
    else
    {
      p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128))->second;
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(p_second, id) )
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
          "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
          "checkDragonSpineMissionConfig",
          177);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v17, (const char (*)[57])byte_1AA2B4E0);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->chapter_id);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" mission_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v21 = 0;
      goto LABEL_31;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false> *const)(v3 + 64));
  }
  v21 = 1;
LABEL_31:
  if ( v21 == 1 )
    v2 = 0;
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 185: range 0000000012AF94AC-0000000012AF96BD
const data::DragonSpineStageExcelConfig *__fastcall ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterConfigByChapterId(
        const ActivityDragonSpineExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_chapter_id_2_config_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::DragonSpineStageExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:184 64 8 8 iter:186 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterConfigByChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_id_2_config_id_map = &this->chapter_id_2_config_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_chapter_id_2_config_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->chapter_id_2_config_id_map_;
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
    result = data::ActivityDragonSpineExcelConfigMgrBase::findDragonSpineStageExcelConfig(this, v9->second);
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

// Line 195: range 0000000012AF96BE-0000000012AFB2D4
int32_t __cdecl ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineMissionConfig(
        ActivityDragonSpineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_watcher_id; // rsi
  const unsigned int *v7; // r8
  data::DragonSpineMissionFinishExecType type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  _BOOL4 v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  const std::string *v15; // rax
  char *v16; // rsi
  bool v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::string *v20; // rax
  _BOOL4 v21; // r15d
  unsigned __int64 v22; // rax
  common::milog::MiLogStream *v23; // rax
  _BOOL4 v24; // edx
  unsigned __int64 v25; // rax
  char *v26; // rsi
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  _BOOL4 v30; // r15d
  unsigned __int64 v31; // rax
  const char *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  int v35; // eax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rdi
  int v37; // eax
  unsigned int *v38; // r8
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  int v41; // edx
  int v42; // r15d
  std::set<std::pair<unsigned int,unsigned int>> *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  int v46; // edx
  int v47; // r15d
  std::vector<std::set<std::pair<unsigned int,unsigned int>>> *v48; // rdx
  const unsigned int *v49; // rcx
  std::vector<std::set<std::pair<unsigned int,unsigned int>>> *v50; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<std::set<std::pair<unsigned int,unsigned int>>> > >,bool> v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  int v56; // eax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // eax
  data::DragonSpineMissionExcelConfigMap *__for_range; // [rsp+20h] [rbp-630h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::reference v64; // [rsp+28h] [rbp-628h]
  std::tuple_element<0,std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *id; // [rsp+30h] [rbp-620h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *config; // [rsp+38h] [rbp-618h]
  const std::vector<data::DragonSpineMissionFinishConfig> *__for_range_0; // [rsp+40h] [rbp-610h]
  const data::DragonSpineMissionFinishConfig *mission_exec_config; // [rsp+48h] [rbp-608h]
  std::vector<std::string> *__for_range_1; // [rsp+50h] [rbp-600h]
  const std::string *drop_raw_str; // [rsp+58h] [rbp-5F8h]
  std::map<std::string,std::string> *__for_range_2; // [rsp+60h] [rbp-5F0h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::reference v72; // [rsp+68h] [rbp-5E8h]
  std::tuple_element<0,std::pair<const std::string,std::string > >::type *raw_drop_type; // [rsp+70h] [rbp-5E0h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *raw_drop_subject; // [rsp+78h] [rbp-5D8h]
  char v75[1488]; // [rsp+80h] [rbp-5D0h] BYREF

  v3 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1440LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "29 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 15 subject_key:242 112 4 13 drop_type"
                        ":243 128 8 15 __for_begin:196 160 8 13 __for_end:196 192 8 15 __for_begin:199 224 8 13 __for_end"
                        ":199 256 8 15 __for_begin:226 288 8 13 __for_end:226 320 8 15 __for_begin:240 352 8 13 __for_end"
                        ":240 384 24 24 ban_drop_raw_str_vec:219 448 24 20 ban_drop_set_vec:225 512 32 9 <unknown> 576 32"
                        " 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 "
                        "9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 "
                        "32 9 <unknown> 1280 48 31 ban_drop_subject_kv_raw_map:233 1360 48 16 ban_drop_set:239";
  *(_QWORD *)(v3 + 16) = ActivityDragonSpineExcelConfigMgr::rewriteDragonSpineMissionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -234881024;
  v5[536862733] = -218959118;
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862764] = -202116109;
  __for_range = &this->dragon_spine_mission_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::DragonSpineMissionExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false> *)(v3 + 160)) )
  {
    v64 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false> *const)(v3 + 128));
    id = std::get<0ul,unsigned int const,data::DragonSpineMissionExcelConfig>(v64);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DragonSpineMissionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DragonSpineMissionExcelConfig>(v64);
    p_watcher_id = &config->watcher_id;
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      &this->watcher_mission_map_,
      &config->watcher_id,
      id,
      (const unsigned int *)&this->watcher_mission_map_,
      v7);
    __for_range_0 = &config->finish_exec;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, p_watcher_id);
    *(std::vector<data::DragonSpineMissionFinishConfig>::const_iterator *)(v3 + 192) = std::vector<data::DragonSpineMissionFinishConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_watcher_id);
    *(std::vector<data::DragonSpineMissionFinishConfig>::const_iterator *)(v3 + 224) = std::vector<data::DragonSpineMissionFinishConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::DragonSpineMissionFinishConfig*,std::vector<data::DragonSpineMissionFinishConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::DragonSpineMissionFinishConfig*,std::vector<data::DragonSpineMissionFinishConfig> > *)(v3 + 224)) )
      {
        v56 = 1;
        goto LABEL_98;
      }
      mission_exec_config = __gnu_cxx::__normal_iterator<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::DragonSpineMissionFinishConfig*,std::vector<data::DragonSpineMissionFinishConfig> > *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&mission_exec_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mission_exec_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mission_exec_config->type);
      }
      if ( mission_exec_config->type )
        break;
LABEL_96:
      __gnu_cxx::__normal_iterator<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::DragonSpineMissionFinishConfig*,std::vector<data::DragonSpineMissionFinishConfig> > *const)(v3 + 192));
    }
    if ( *(_BYTE *)(((unsigned __int64)&mission_exec_config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mission_exec_config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mission_exec_config->type);
    }
    type = mission_exec_config->type;
    if ( type == DRAGON_SPINE_EXEC_TYPE_BAN_DROP )
    {
      if ( std::vector<std::string>::size(&mission_exec_config->param) )
      {
        std::vector<std::string>::operator[](&mission_exec_config->param, 0LL);
        if ( (unsigned __int8)std::string::empty() )
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
            "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
            "rewriteDragonSpineMissionConfig",
            216);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v12, (const char (*)[56])byte_1AA2B900);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v11 = 0;
        }
        else
        {
          v14 = ((v3 + 384) >> 3) + 2147450880;
          *(_WORD *)v14 = 0;
          *(_BYTE *)(v14 + 2) = 0;
          std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 384));
          *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 640),
            ";",
            (const std::allocator<char> *)(v3 + 48));
          v15 = std::vector<std::string>::operator[](&mission_exec_config->param, 0LL);
          v16 = (char *)(v3 + 640);
          v17 = common::tools::StringUtils::splitToList(
                  v15,
                  (const std::string *)(v3 + 640),
                  (std::vector<std::string> *)(v3 + 384),
                  0) != 0;
          std::string::~string((void *)(v3 + 640));
          *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 48);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v17 )
          {
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
              "rewriteDragonSpineMissionConfig",
              222);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v18,
                    (const char (*)[35])"[DRAGON_SPINE] splitToList failed ");
            v20 = std::vector<std::string>::operator[](&mission_exec_config->param, 0LL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v21 = 0;
          }
          else
          {
            v22 = ((v3 + 448) >> 3) + 2147450880;
            *(_WORD *)v22 = 0;
            *(_BYTE *)(v22 + 2) = 0;
            std::vector<std::set<std::pair<unsigned int,unsigned int>>>::vector((std::vector<std::set<std::pair<unsigned int,unsigned int>>> *const)(v3 + 448));
            __for_range_1 = (std::vector<std::string> *)(v3 + 384);
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 256, v16);
            *(std::vector<std::string>::iterator *)(v3 + 256) = std::vector<std::string>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v16);
            *(std::vector<std::string>::iterator *)(v3 + 288) = std::vector<std::string>::end(__for_range_1);
            while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 256),
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 288)) )
            {
              drop_raw_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 256));
              if ( (unsigned __int8)std::string::empty() )
              {
                *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 768, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 768),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
                  "rewriteDragonSpineMissionConfig",
                  230);
                v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 768),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v23, (const char (*)[44])byte_1AA2BA00);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
                *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v24 = 0;
              }
              else
              {
                v25 = ((v3 + 1280) >> 3) + 2147450880;
                *(_DWORD *)v25 = 0;
                *(_WORD *)(v25 + 4) = 0;
                std::map<std::string,std::string>::map((std::map<std::string,std::string> *const)(v3 + 1280));
                *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 80);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 896),
                  ":",
                  (const std::allocator<char> *)(v3 + 80));
                *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 64);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 832),
                  ",",
                  (const std::allocator<char> *)(v3 + 64));
                v26 = (char *)(v3 + 832);
                v27 = common::tools::StringUtils::splitToStringMap(
                        drop_raw_str,
                        (const std::string *)(v3 + 832),
                        (const std::string *)(v3 + 896),
                        (std::map<std::string,std::string> *)(v3 + 1280),
                        0) != 0;
                std::string::~string((void *)(v3 + 832));
                *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 64);
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                std::string::~string((void *)(v3 + 896));
                *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 80);
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                if ( v27 )
                {
                  *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 960, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 960),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
                    "rewriteDragonSpineMissionConfig",
                    236);
                  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 960),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          v28,
                          (const char (*)[35])"[DRAGON_SPINE] splitToMap failed, ");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, drop_raw_str);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
                  *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v30 = 0;
                }
                else
                {
                  v31 = ((v3 + 1360) >> 3) + 2147450880;
                  *(_DWORD *)v31 = 0;
                  *(_WORD *)(v31 + 4) = 0;
                  std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1360));
                  __for_range_2 = (std::map<std::string,std::string> *)(v3 + 1280);
                  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 320, v26);
                  *(std::map<std::string,std::string>::iterator *)(v3 + 320) = std::map<std::string,std::string>::begin(__for_range_2);
                  *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 352, v26);
                  *(std::map<std::string,std::string>::iterator *)(v3 + 352) = std::map<std::string,std::string>::end(__for_range_2);
                  while ( std::operator!=(
                            (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 320),
                            (const std::_Rb_tree_iterator<std::pair<const std::string,std::string > >::_Self *)(v3 + 352)) )
                  {
                    v72 = std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 320));
                    raw_drop_type = std::get<0ul,std::string const,std::string>(v72);
                    raw_drop_subject = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v72);
                    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 96, v3 + 352);
                    }
                    *(_DWORD *)(v3 + 96) = 0;
                    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                    v32 = (const char *)std::string::c_str(raw_drop_type);
                    if ( (unsigned int)data::enumStrToVal(v32, v3 + 112) )
                    {
                      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1024, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1024),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
                        "rewriteDragonSpineMissionConfig",
                        246);
                      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1024),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v34 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                              v33,
                              (const char (*)[42])"[DRAGON_SPINE] enumStrToVal failed, str: ");
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, raw_drop_type);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
                      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v35 = 0;
                    }
                    else
                    {
                      p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
                      v37 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v37 != 0 && (char)v37 <= 3 )
                      {
                        p_new_activity_config_mgr = (NewActivityExcelConfigMgr *)(v3 + 112);
                        __asan_report_load4(v3 + 112);
                      }
                      if ( NewActivityExcelConfigMgr::getSubjectKeyByType(
                             p_new_activity_config_mgr,
                             *(_DWORD *)(v3 + 112),
                             raw_drop_subject,
                             (uint32_t *)(v3 + 96)) )
                      {
                        *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1088, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1088),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
                          "rewriteDragonSpineMissionConfig",
                          251);
                        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1088),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v40 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                v39,
                                (const char (*)[49])"[DRAGON_SPINE] getSubjectKeyByType failed, str: ");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, raw_drop_subject);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
                        *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v35 = 0;
                      }
                      else
                      {
                        std::set<std::pair<unsigned int,unsigned int>>::emplace<data::NewActivityDropType &,unsigned int &>(
                          (std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1360),
                          (data::NewActivityDropType *)(v3 + 112),
                          (unsigned int *)(v3 + 96),
                          (data::NewActivityDropType *)(v3 + 112),
                          v38);
                        v35 = 1;
                      }
                    }
                    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                    if ( v35 != 1 )
                    {
                      v41 = 0;
                      goto LABEL_73;
                    }
                    std::_Rb_tree_iterator<std::pair<std::string const,std::string>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,std::string > > *const)(v3 + 320));
                  }
                  v41 = 1;
LABEL_73:
                  *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                  if ( v41 == 1 )
                  {
                    v43 = std::move<std::set<std::pair<unsigned int,unsigned int>> &>((std::set<std::pair<unsigned int,unsigned int>> *)(v3 + 1360));
                    std::vector<std::set<std::pair<unsigned int,unsigned int>>>::emplace_back<std::set<std::pair<unsigned int,unsigned int>>>(
                      (std::vector<std::set<std::pair<unsigned int,unsigned int>>> *const)(v3 + 448),
                      v43,
                      v43);
                    v42 = 1;
                  }
                  else
                  {
                    v42 = 0;
                  }
                  std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1360));
                  v30 = v42 == 1;
                }
                std::map<std::string,std::string>::~map((std::map<std::string,std::string> *const)(v3 + 1280));
                v24 = v30;
              }
              v44 = ((v3 + 1280) >> 3) + 2147450880;
              *(_DWORD *)v44 = -117901064;
              *(_WORD *)(v44 + 4) = -1800;
              v45 = ((v3 + 1360) >> 3) + 2147450880;
              *(_DWORD *)v45 = -117901064;
              *(_WORD *)(v45 + 4) = -1800;
              if ( !v24 )
              {
                v46 = 0;
                goto LABEL_82;
              }
              __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 256));
            }
            v46 = 1;
LABEL_82:
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            if ( v46 == 1 )
            {
              v48 = std::move<std::vector<std::set<std::pair<unsigned int,unsigned int>>> &>((std::vector<std::set<std::pair<unsigned int,unsigned int>>> *)(v3 + 448));
              v51 = std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::emplace<unsigned int const&,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>(
                      &this->mission_ban_drop_config_map_,
                      id,
                      v48,
                      v49,
                      v50);
              if ( !v51.second )
              {
                *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
                  "rewriteDragonSpineMissionConfig",
                  260);
                v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1152),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v53 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v52,
                        (const char (*)[44])"[DRAGON_SPINE] duplicated ban drop config: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
                *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v47 = 0;
              }
              else
              {
                v47 = 1;
              }
            }
            else
            {
              v47 = 0;
            }
            std::vector<std::set<std::pair<unsigned int,unsigned int>>>::~vector((std::vector<std::set<std::pair<unsigned int,unsigned int>>> *const)(v3 + 448));
            v21 = v47 != 0;
          }
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 384));
          v11 = v21;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
          "rewriteDragonSpineMissionConfig",
          211);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 512),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v9, (const char (*)[64])byte_1AA2B8A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      v54 = ((v3 + 384) >> 3) + 2147450880;
      *(_WORD *)v54 = -1800;
      *(_BYTE *)(v54 + 2) = -8;
      v55 = ((v3 + 448) >> 3) + 2147450880;
      *(_WORD *)v55 = -1800;
      *(_BYTE *)(v55 + 2) = -8;
      if ( !v11 )
      {
        v56 = 0;
        goto LABEL_98;
      }
      goto LABEL_96;
    }
    if ( type == DRAGON_SPINE_EXEC_TYPE_CLEAR_ITEM )
      goto LABEL_96;
    *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1216, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1216),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityDragonSpineExcelConfig.cpp",
      "rewriteDragonSpineMissionConfig",
      268);
    v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1216),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v58 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v57, (const char (*)[48])byte_1AA2BC60);
    common::milog::MiLogStream::operator<<<data::DragonSpineMissionFinishExecType,(data::DragonSpineMissionFinishExecType*)0>(
      v58,
      &mission_exec_config->type);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
    *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v56 = 0;
LABEL_98:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v56 != 1 )
    {
      v59 = 0;
      goto LABEL_102;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DragonSpineMissionExcelConfig>,false,false> *const)(v3 + 128));
  }
  v59 = 1;
LABEL_102:
  if ( v59 == 1 )
    v2 = 0;
  if ( v75 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1440LL, v75);
  }
  return v2;
};

// Line 277: range 0000000012AFB2D6-0000000012AFB497
const std::set<unsigned int> *__fastcall ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionSet(
        const ActivityDragonSpineExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_chapter_mission_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:276 64 8 16 chapter_iter:278 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_mission_map = &this->chapter_mission_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_chapter_mission_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_mission_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 288: range 0000000012AFB498-0000000012AFB659
const std::set<unsigned int> *__fastcall ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterWatcherSet(
        const ActivityDragonSpineExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::set<unsigned int>> *p_chapter_watcher_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:287 64 8 16 chapter_iter:289 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterWatcherSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_chapter_watcher_map = &this->chapter_watcher_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_chapter_watcher_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->chapter_watcher_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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

// Line 299: range 0000000012AFB65A-0000000012AFB86B
const data::DragonSpineMissionExcelConfig *__fastcall ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionConfigByWatcherId(
        const ActivityDragonSpineExcelConfigMgr *const this,
        __int64 watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_watcher_mission_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::DragonSpineMissionExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 watcher_id:298 64 8 8 iter:300 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionConfigByWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = watcher_id;
  p_watcher_mission_map = &this->watcher_mission_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, watcher_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_watcher_mission_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->watcher_mission_map_;
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
    result = data::ActivityDragonSpineExcelConfigMgrBase::findDragonSpineMissionExcelConfig(this, v9->second);
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

// Line 310: range 0000000012AFB86C-0000000012AFBA4E
const data::DragonSpineEnhanceExcelConfig *__fastcall ActivityDragonSpineExcelConfigMgr::findDragonSpineEnhanceConfigByChapterId(
        const ActivityDragonSpineExcelConfigMgr *const this,
        __int64 chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*> *p_enhance_level_config_map; // rdx
  std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::DragonSpineEnhanceExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:309 64 8 8 iter:311 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDragonSpineExcelConfigMgr::findDragonSpineEnhanceConfigByChapterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  p_enhance_level_config_map = &this->enhance_level_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, chapter_id);
  *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::find(
                                                                                                p_enhance_level_config_map,
                                                                                                (const std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->enhance_level_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 64));
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

// Line 320: range 0000000012AFBA50-0000000012AFBBFC
const data::DragonSpinePreviewExcelConfig *__cdecl ActivityDragonSpineExcelConfigMgr::findDragonSpinePreviewConfig(
        const ActivityDragonSpineExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::DragonSpinePreviewExcelConfig *result; // rax
  data::DragonSpinePreviewExcelConfigMap *p_dragon_spine_preview_excel_config_map; // rdx
  data::DragonSpinePreviewExcelConfigMap *v7; // rdx
  bool v8; // al
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false>::__node_type *)"2 32 8 14 begin_iter:326 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false>::__node_type *)ActivityDragonSpineExcelConfigMgr::findDragonSpinePreviewConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( std::unordered_map<unsigned int,data::DragonSpinePreviewExcelConfig>::empty(&this->dragon_spine_preview_excel_config_map) )
  {
    result = 0LL;
  }
  else
  {
    p_dragon_spine_preview_excel_config_map = &this->dragon_spine_preview_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[4], v1);
    v2[4]._M_cur = std::unordered_map<unsigned int,data::DragonSpinePreviewExcelConfig>::begin(p_dragon_spine_preview_excel_config_map)._M_cur;
    v7 = &this->dragon_spine_preview_excel_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v2[8], v1);
    v2[8]._M_cur = std::unordered_map<unsigned int,data::DragonSpinePreviewExcelConfig>::end(v7)._M_cur;
    v8 = std::__detail::operator==<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false>(
           v2 + 4,
           v2 + 8);
    *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false,false>::operator->(v2 + 4)->second;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DragonSpinePreviewExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

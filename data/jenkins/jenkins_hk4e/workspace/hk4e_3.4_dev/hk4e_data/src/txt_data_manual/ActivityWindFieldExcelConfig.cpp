// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityWindFieldExcelConfig.cpp

// Line 20: range 0000000012E5E6F2-0000000012E5E8D5
int32_t __cdecl ActivityWindFieldExcelConfigMgr::checkConfig(
        ActivityWindFieldExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityWindFieldExcelConfigMgr::checkStageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v5,
      (const char (*)[42])"[WIND_FIELD] checkStageExcelConfig failed");
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

// Line 30: range 0000000012E5E8D6-0000000012E5EAB9
int32_t __cdecl ActivityWindFieldExcelConfigMgr::rewriteConfig(
        ActivityWindFieldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityWindFieldExcelConfigMgr::rewriteStageExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
      "rewriteConfig",
      33);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"[WIND_FIELD] rewriteStageExcelConfig failed");
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

// Line 40: range 0000000012E5EABA-0000000012E60519
int32_t __cdecl ActivityWindFieldExcelConfigMgr::checkStageExcelConfig(
        ActivityWindFieldExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *p_gallery_id; // rsi
  const unsigned int *v7; // r8
  unsigned __int64 v8; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  _BOOL4 v14; // r15d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 v22; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int *v27; // rax
  int *v28; // rdx
  int v29; // ecx
  char v30; // al
  __int64 v31; // rsi
  uint32_t ActivityIdByWatcherId; // edx
  char v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // eax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  uint32_t v45; // edx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  unsigned __int64 v55; // rax
  int v56; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  int v60; // edx
  uint32_t last_day_index; // [rsp+24h] [rbp-49Ch]
  NewActivityExcelConfigMgr *new_activity_mgr; // [rsp+28h] [rbp-498h]
  data::WindFieldStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-490h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::reference v66; // [rsp+38h] [rbp-488h]
  std::tuple_element<0,std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-480h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-478h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+50h] [rbp-470h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+58h] [rbp-468h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-460h]
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+68h] [rbp-458h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+70h] [rbp-450h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v74; // [rsp+78h] [rbp-448h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+80h] [rbp-440h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *day_index; // [rsp+88h] [rbp-438h]
  char v77[1072]; // [rsp+90h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 4 14 activity_id:42 48 4 13 watcher_id:74 64 8 14 __for_begin:44 96 8 12 __for_end:44 128 "
                        "8 14 __for_begin:74 160 8 12 __for_end:74 192 8 9 <unknown> 224 8 15 __for_begin:107 256 8 13 __"
                        "for_end:107 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9"
                        " <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 48 18"
                        " stage_2_day_map:41 944 48 17 watcher_id_set:47";
  *(_QWORD *)(v3 + 16) = ActivityWindFieldExcelConfigMgr::checkStageExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
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
  v5[536862746] = -218959118;
  v5[536862748] = -219021312;
  v5[536862749] = 62194;
  v5[536862751] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 864));
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 0;
  new_activity_mgr = &txt_config_mgr->new_activity_config_mgr;
  __for_range = &this->wind_field_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_gallery_id = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false> *)(v3 + 96)) )
      break;
    v66 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::WindFieldStageExcelConfig>(v66);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WindFieldStageExcelConfig>(v66);
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      (std::map<unsigned int,unsigned int> *const)(v3 + 864),
      stage_id,
      &excel_config->day_index,
      stage_id,
      v7);
    v8 = ((v3 + 944) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_WORD *)(v8 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 944));
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           excel_config->dungeon_id);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type == DUNGEON_WIND_FIELD )
      {
        p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&excel_config->gallery_id);
        }
        gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                               p_gallery_config_mgr,
                               excel_config->gallery_id);
        if ( gallery_config_ptr )
        {
          v22 = (((_BYTE)gallery_config_ptr + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&gallery_config_ptr->type);
          }
          if ( gallery_config_ptr->type == GALLERY_TYPE_WIND_FIELD )
          {
            __for_range_0 = &excel_config->watcher_list;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 128, v22);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 160, v22);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              p_gallery_id = (char *)(v3 + 160);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
              {
                v38 = 1;
                goto LABEL_79;
              }
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v27 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
              v28 = (int *)v27;
              if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v27);
              }
              v29 = *v28;
              v30 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( v30 != 0 && v30 <= 3 )
              {
                LOBYTE(p_gallery_id) = v30 != 0;
                __asan_report_store4(v3 + 48, p_gallery_id);
              }
              *(_DWORD *)(v3 + 48) = v29;
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              if ( !*(_DWORD *)(v3 + 32) )
              {
                v31 = *(unsigned int *)(v3 + 48);
                ActivityIdByWatcherId = NewActivityExcelConfigMgr::findActivityIdByWatcherId(new_activity_mgr, v31);
                v33 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
                if ( v33 != 0 && v33 <= 3 )
                {
                  LOBYTE(v31) = v33 != 0;
                  __asan_report_store4(v3 + 32, v31);
                }
                *(_DWORD *)(v3 + 32) = ActivityIdByWatcherId;
                activity_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                                        new_activity_mgr,
                                        *(unsigned int *)(v3 + 32));
                if ( !activity_config_ptr )
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
                    "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
                    "checkStageExcelConfig",
                    83);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 544),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v35 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
                          v34,
                          (const char (*)[83])byte_1AAB8D40);
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v35,
                          (const unsigned int *)(v3 + 48));
                  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v36,
                          (const char (*)[16])", activity_id: ");
                  p_gallery_id = (char *)(v3 + 32);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
                  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v38 = 0;
                  goto LABEL_79;
                }
                if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4(&activity_config_ptr->activity_type);
                }
                if ( activity_config_ptr->activity_type != NEW_ACTIVITY_WIND_FIELD )
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
                    "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
                    "checkStageExcelConfig",
                    88);
                  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 608),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v40 = common::milog::MiLogStream::operator<<<char [104],(char *[104])0>(
                          v39,
                          (const char (*)[104])byte_1AAB8DC0);
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v40,
                          (const unsigned int *)(v3 + 48));
                  v42 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v41,
                          (const char (*)[18])", activity_type: ");
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
                  v43 = (((_BYTE)activity_config_ptr + 12) & 7u) + 3;
                  if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                                       + 0x7FFF8000) )
                  {
                    __asan_report_load4(&activity_config_ptr->activity_type);
                  }
                  v44 = (__int64)data::enumValToStr(activity_config_ptr->activity_type, v43);
                  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                    v44 = __asan_report_store8(v3 + 192, v43);
                  *(_QWORD *)(v3 + 192) = v44;
                  p_gallery_id = (char *)(v3 + 192);
                  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v42,
                    (const char *const *)(v3 + 192));
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
                  *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v38 = 0;
                  goto LABEL_79;
                }
              }
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 48);
              v45 = *(_DWORD *)(v3 + 48);
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              if ( !NewActivityExcelConfigMgr::isActivityContainsWatcher(new_activity_mgr, *(_DWORD *)(v3 + 32), v45) )
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
                  "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
                  "checkStageExcelConfig",
                  95);
                v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 672),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v47 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                        v46,
                        (const char (*)[89])byte_1AAB8EA0);
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v3 + 48));
                v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v48,
                        (const char (*)[16])", activity_id: ");
                p_gallery_id = (char *)(v3 + 32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
                *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v38 = 0;
                goto LABEL_79;
              }
              v50 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v3 + 944),
                      (const std::set<unsigned int>::value_type *)(v3 + 48));
              if ( !v50.second )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
            }
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
              "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
              "checkStageExcelConfig",
              101);
            v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v52 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    v51,
                    (const char (*)[50])byte_1AAB8F20);
            v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v52,
                    (const unsigned int *)(v3 + 48));
            v54 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v53,
                    (const char (*)[13])", stage_id: ");
            p_gallery_id = (char *)stage_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v38 = 0;
LABEL_79:
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            v14 = v38 == 1;
          }
          else
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
              "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
              "checkStageExcelConfig",
              70);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    v23,
                    (const char (*)[67])byte_1AAB8CC0);
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, stage_id);
            v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v25,
                    (const char (*)[15])", gallery id: ");
            p_gallery_id = (char *)&excel_config->gallery_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &excel_config->gallery_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
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
            "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
            "checkStageExcelConfig",
            64);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 416),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v18, (const char (*)[51])byte_1AAB8C60);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, stage_id);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v20,
                  (const char (*)[15])", gallery id: ");
          p_gallery_id = (char *)&excel_config->gallery_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &excel_config->gallery_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
          *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
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
          "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
          "checkStageExcelConfig",
          58);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v15, (const char (*)[69])byte_1AAB8BE0);
        p_gallery_id = (char *)&excel_config->dungeon_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &excel_config->dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
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
        "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
        "checkStageExcelConfig",
        52);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v10, (const char (*)[63])byte_1AAB8B80);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->dungeon_id);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"stage id: ");
      p_gallery_id = (char *)stage_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 944));
    v55 = ((v3 + 944) >> 3) + 2147450880;
    *(_DWORD *)v55 = -117901064;
    *(_WORD *)(v55 + 4) = -1800;
    if ( !v14 )
    {
      v56 = 0;
      goto LABEL_84;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v56 = 1;
LABEL_84:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v56 == 1 )
  {
    last_day_index = 0;
    __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 864);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_gallery_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_gallery_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 224),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256)) )
      {
        v60 = 1;
        goto LABEL_101;
      }
      v74 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 224));
      stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v74);
      v57 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v74);
      day_index = v57;
      if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v57);
      }
      if ( last_day_index > *day_index )
        break;
      if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(day_index);
      }
      last_day_index = *day_index;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 224));
    }
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
      "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
      "checkStageExcelConfig",
      111);
    v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 800),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v59 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v58, (const char (*)[58])byte_1AAB8F80);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, stage_id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
    *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v60 = 0;
LABEL_101:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v60 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 864));
  if ( v77 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 120: range 0000000012E6051A-0000000012E60A35
int32_t __cdecl ActivityWindFieldExcelConfigMgr::rewriteStageExcelConfig(
        ActivityWindFieldExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::WindFieldStageExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >,bool> v7; // rax
  const data::WindFieldStageExcelConfig *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  data::WindFieldStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::reference v21; // [rsp+18h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *stage_id; // [rsp+20h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-118h]
  char v24[272]; // [rsp+30h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:121 64 8 13 __for_end:121 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityWindFieldExcelConfigMgr::rewriteStageExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->wind_field_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WindFieldStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false> *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_20;
    }
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false> *const)(v3 + 32));
    stage_id = std::get<0ul,unsigned int const,data::WindFieldStageExcelConfig>(v21);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WindFieldStageExcelConfig>(v21);
    v7 = std::map<unsigned int,data::WindFieldStageExcelConfig>::emplace<unsigned int const&,data::WindFieldStageExcelConfig const&>(
           &this->dungeon_id_2_stage_excel_config_map,
           &excel_config->dungeon_id,
           excel_config,
           (const unsigned int *)&this->dungeon_id_2_stage_excel_config_map,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
        "rewriteStageExcelConfig",
        125);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v9, (const char (*)[82])byte_1AAB9020);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &excel_config->dungeon_id);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v13 = 0;
      goto LABEL_20;
    }
    v14 = std::map<unsigned int,data::WindFieldStageExcelConfig>::emplace<unsigned int const&,data::WindFieldStageExcelConfig const&>(
            &this->gallery_id_2_stage_excel_config_map,
            &excel_config->gallery_id,
            excel_config,
            (const unsigned int *)&this->gallery_id_2_stage_excel_config_map,
            v8);
    if ( !v14.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityWindFieldExcelConfig.cpp",
    "rewriteStageExcelConfig",
    131);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v16 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v15, (const char (*)[83])byte_1AAB90A0);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &excel_config->gallery_id);
  v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])"stage_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, stage_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v13 = 0;
LABEL_20:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 140: range 0000000012E60A36-0000000012E60BF1
const data::WindFieldStageExcelConfig *__fastcall ActivityWindFieldExcelConfigMgr::findStageConfigByDungeonId(
        const ActivityWindFieldExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::WindFieldStageExcelConfig> *p_dungeon_id_2_stage_excel_config_map; // rdx
  std::map<unsigned int,data::WindFieldStageExcelConfig> *v6; // rdx
  bool v7; // al
  const data::WindFieldStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:139 64 8 8 iter:141 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::findStageConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_2_stage_excel_config_map = &this->dungeon_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::WindFieldStageExcelConfig>::find(
                                                                                           p_dungeon_id_2_stage_excel_config_map,
                                                                                           (const std::map<unsigned int,data::WindFieldStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::WindFieldStageExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> > *const)(v2 + 64))->second;
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

// Line 149: range 0000000012E60BF2-0000000012E60DB3
const data::WindFieldStageExcelConfig *__fastcall ActivityWindFieldExcelConfigMgr::findStageConfigByGalleryId(
        const ActivityWindFieldExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::WindFieldStageExcelConfig> *p_gallery_id_2_stage_excel_config_map; // rdx
  std::map<unsigned int,data::WindFieldStageExcelConfig> *v6; // rdx
  bool v7; // al
  const data::WindFieldStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:148 64 8 8 iter:150 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::findStageConfigByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_stage_excel_config_map = &this->gallery_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::WindFieldStageExcelConfig>::find(
                                                                                           p_gallery_id_2_stage_excel_config_map,
                                                                                           (const std::map<unsigned int,data::WindFieldStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::WindFieldStageExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> > *const)(v2 + 64))->second;
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

// Line 159: range 0000000012E60DB4-0000000012E60F46
bool __fastcall ActivityWindFieldExcelConfigMgr::isWindFieldDungeon(
        const ActivityWindFieldExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::WindFieldStageExcelConfig> *p_dungeon_id_2_stage_excel_config_map; // rdx
  std::map<unsigned int,data::WindFieldStageExcelConfig> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:158 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::isWindFieldDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_2_stage_excel_config_map = &this->dungeon_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, dungeon_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::WindFieldStageExcelConfig>::end(p_dungeon_id_2_stage_excel_config_map);
  v6 = &this->dungeon_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::WindFieldStageExcelConfig>::find(
                                                                                           v6,
                                                                                           (const std::map<unsigned int,data::WindFieldStageExcelConfig>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 163: range 0000000012E60F48-0000000012E610E0
bool __fastcall ActivityWindFieldExcelConfigMgr::isWindFieldGallery(
        const ActivityWindFieldExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::WindFieldStageExcelConfig> *p_gallery_id_2_stage_excel_config_map; // rdx
  std::map<unsigned int,data::WindFieldStageExcelConfig> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:162 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityWindFieldExcelConfigMgr::isWindFieldGallery;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_stage_excel_config_map = &this->gallery_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, gallery_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::WindFieldStageExcelConfig>::end(p_gallery_id_2_stage_excel_config_map);
  v6 = &this->gallery_id_2_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,data::WindFieldStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::WindFieldStageExcelConfig>::find(
                                                                                           v6,
                                                                                           (const std::map<unsigned int,data::WindFieldStageExcelConfig>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::WindFieldStageExcelConfig> >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

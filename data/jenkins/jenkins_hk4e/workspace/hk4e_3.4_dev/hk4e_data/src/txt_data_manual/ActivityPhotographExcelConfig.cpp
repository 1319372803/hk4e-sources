// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityPhotographExcelConfig.cpp

// Line 20: range 0000000012C97B38-0000000012C97D43
int32_t __cdecl ActivityPhotographExcelConfigMgr::checkConfig(
        ActivityPhotographExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityPhotographExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityPhotographExcelConfigMgr::checkPhotoConfig(this, txt_config_mgr)
    || ActivityPhotographExcelConfigMgr::checkPhotoPosConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
      "checkConfig",
      24);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])"checkLevelConfig failed");
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

// Line 31: range 0000000012C97D44-0000000012C9853A
int32_t __cdecl ActivityPhotographExcelConfigMgr::checkPhotoConfig(
        const ActivityPhotographExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v7; // rsi
  std::set<unsigned int>::size_type v8; // r14
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  const ActivityPhotographExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1E4h]
  data::ActivityPhotographExcelConfigMap *__for_range; // [rsp+20h] [rbp-1E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::reference v18; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographExcelConfig> >::type *config; // [rsp+38h] [rbp-1C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1C0h]
  const unsigned int *pos_id; // [rsp+48h] [rbp-1B8h]
  char v22[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 8 14 __for_begin:33 80 8 12 __for_end:33 112 8 14 __for_begin:43 144 8 12 __for_end:43 176 "
                        "32 9 <unknown> 240 32 9 <unknown> 304 48 13 pos_id_set:35";
  *(_QWORD *)(v2 + 16) = ActivityPhotographExcelConfigMgr::checkPhotoConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 80)) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v2 + 48));
    std::get<0ul,unsigned int const,data::ActivityPhotographExcelConfig>(v18);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPhotographExcelConfig>(v18);
    v5 = ((v2 + 304) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_WORD *)(v5 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 304));
    M_current = std::vector<unsigned int>::end(&config->photo_pos_id_list)._M_current;
    v7 = std::vector<unsigned int>::begin(&config->photo_pos_id_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v2 + 304),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v7,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v8 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v2 + 304));
    if ( v8 != std::vector<unsigned int>::size(&config->photo_pos_id_list) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
        "checkPhotoConfig",
        39);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = (const unsigned int *)byte_1AA6FCA0;
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AA6FCA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->photo_pos_id_list;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v7);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 112) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v7);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144)) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
      pos_id = v10;
      v11 = this;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( !data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(v11, *pos_id) )
      {
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
          "checkPhotoConfig",
          47);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v12, (const char (*)[41])byte_1AA6FCE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, pos_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 304));
    v14 = ((v2 + 304) >> 3) + 2147450880;
    *(_DWORD *)v14 = -117901064;
    *(_WORD *)(v14 + 4) = -1800;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 56: range 0000000012C9853C-0000000012C98DFB
int32_t __cdecl ActivityPhotographExcelConfigMgr::checkPhotoPosConfig(
        const ActivityPhotographExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  uint32_t *p_group_link_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  __int64 hint_group; // rsi
  int SceneIdByGroupId; // edx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-194h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-190h]
  data::ActivityPhotographPosExcelConfigMap *__for_range; // [rsp+28h] [rbp-188h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::reference v32; // [rsp+30h] [rbp-180h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig> >::type *id; // [rsp+38h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig> >::type *config; // [rsp+40h] [rbp-170h]
  const data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+48h] [rbp-168h]
  char v36[352]; // [rsp+50h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 11 scene_id:69 64 8 14 __for_begin:59 96 8 12 __for_end:59 128 32 9 <unknown> 192 32 9 <u"
                        "nknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityPhotographExcelConfigMgr::checkPhotoPosConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->activity_photograph_pos_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 96)) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityPhotographPosExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPhotographPosExcelConfig>(v32);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    p_group_link_id = &config->group_link_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_link_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_link_id);
    }
    bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                          p_activity_group_links_config_mgr,
                          config->group_link_id);
    if ( bundle_config_ptr )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&bundle_config_ptr->hint_group);
      }
      hint_group = bundle_config_ptr->hint_group;
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, hint_group);
      v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(hint_group) = v12 != 0;
        __asan_report_store4(v2 + 48, hint_group);
      }
      *(_DWORD *)(v2 + 48) = SceneIdByGroupId;
      if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->scene_id);
      }
      if ( config->scene_id != *(_DWORD *)(v2 + 48) )
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
          "checkPhotoPosConfig",
          72);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v13,
                (const char (*)[16])"[PHOTO] pos_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" bundle_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->group_link_id);
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" hint_group:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &bundle_config_ptr->hint_group);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" is in scene:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v21,
                (const char (*)[21])" but pos's scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->scene_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->watcher_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->watcher_id);
      }
      if ( !data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
              p_new_activity_config_mgr,
              config->watcher_id) )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
          "checkPhotoPosConfig",
          79);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v24,
                (const char (*)[19])"[PHOTO] WatcherId:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->watcher_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1AA1C2C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v9 = 1;
    }
    else
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
        "checkPhotoPosConfig",
        65);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v7, (const char (*)[41])byte_1AA6FE00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_link_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      v9 = 0;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 87: range 0000000012C98DFC-0000000012C9980B
int32_t __cdecl ActivityPhotographExcelConfigMgr::rewriteConfig(
        ActivityPhotographExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const data::ActivityPhotographExcelConfig *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  uint32_t *p_group_link_id; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  const Vector3 *v15; // r8
  common::milog::MiLogStream *v16; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,Vector3>,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-22Ch]
  data::ActivityPhotographExcelConfigMap *__for_range; // [rsp+18h] [rbp-228h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-220h]
  data::ActivityPhotographPosExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-218h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::reference v26; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig> >::type *config_0; // [rsp+40h] [rbp-200h]
  data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+48h] [rbp-1F8h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+50h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::reference v30; // [rsp+58h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographExcelConfig> >::type *config; // [rsp+68h] [rbp-1D8h]
  char v32[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 8 14 __for_begin:89 64 8 12 __for_end:89 96 8 14 __for_begin:99 128 8 12 __for_end:99 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityPhotographExcelConfigMgr::rewriteConfig;
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
  ret = 0;
  __for_range = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v3 + 64)) )
      break;
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ActivityPhotographExcelConfig>(v30);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPhotographExcelConfig>(v30);
    v8 = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::emplace<unsigned int const&,data::ActivityPhotographExcelConfig const&>(
           &this->activity_id_2_config_map,
           &config->activity_id,
           config,
           (const unsigned int *)&this->activity_id_2_config_map,
           v7);
    if ( !v8.second )
    {
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
        "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
        "rewriteConfig",
        93);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1AA700A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range_0 = &this->activity_photograph_pos_excel_config_map;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v6);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v3 + 128)) )
    {
      v14 = 1;
      goto LABEL_39;
    }
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::ActivityPhotographPosExcelConfig>(v26);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityPhotographPosExcelConfig>(v26);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    p_group_link_id = &config_0->group_link_id;
    if ( *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_group_link_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_group_link_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_group_link_id);
    }
    bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                          p_activity_group_links_config_mgr,
                          config_0->group_link_id);
    if ( !bundle_config_ptr )
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
        "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
        "rewriteConfig",
        104);
      v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config_0->group_link_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v14 = 0;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->hint_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&bundle_config_ptr->hint_group);
    }
    group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, bundle_config_ptr->hint_group);
    if ( !group_info_config_ptr )
      break;
    v17 = std::unordered_map<unsigned int,Vector3>::emplace<unsigned int const&,Vector3 const&>(
            &this->pos_id_2_center_map,
            &config_0->id,
            &group_info_config_ptr->pos,
            &config_0->id,
            v15);
    if ( !v17.second )
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
        "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
        "rewriteConfig",
        115);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v18, (const char (*)[30])byte_1AA70160);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config_0->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v3 + 96));
  }
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
    "./src/txt_data_manual/ActivityPhotographExcelConfig.cpp",
    "rewriteConfig",
    110);
  v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          (common::milog::MiLogStream *const)(v3 + 288),
          (const char (*)[51])"[GroupLink]findGroupScriptConfig fail. group_id : ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &bundle_config_ptr->hint_group);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  v2 = -1;
  v14 = 0;
LABEL_39:
  if ( v14 == 1 )
    v2 = ret;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 123: range 0000000012C9980C-0000000012C999C7
const data::ActivityPhotographExcelConfig *__fastcall ActivityPhotographExcelConfigMgr::findPhotographConfigByActivityId(
        const ActivityPhotographExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPhotographExcelConfigMap *p_activity_id_2_config_map; // rdx
  data::ActivityPhotographExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityPhotographExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:122 64 8 8 iter:124 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityPhotographExcelConfigMgr::findPhotographConfigByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_id_2_config_map = &this->activity_id_2_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::find(p_activity_id_2_config_map, (const std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_id_2_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 136: range 0000000012C999C8-0000000012C99CB3
__m128i __fastcall ActivityPhotographExcelConfigMgr::findCenterByPosId(
        const ActivityPhotographExcelConfigMgr *const this,
        __int64 pos_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,Vector3> *p_pos_id_2_center_map; // rdx
  std::unordered_map<unsigned int,Vector3> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false>::pointer n; // rax
  __m128i v10; // [rsp+8h] [rbp-D8h] BYREF
  int v11; // [rsp+24h] [rbp-BCh]
  const ActivityPhotographExcelConfigMgr *thisa; // [rsp+28h] [rbp-B8h]
  Vector3 second; // [rsp+34h] [rbp-ACh]
  char v14[160]; // [rsp+40h] [rbp-A0h] BYREF

  thisa = this;
  v11 = pos_id;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 pos_id:135 64 8 8 iter:137 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityPhotographExcelConfigMgr::findCenterByPosId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = v11;
  p_pos_id_2_center_map = &thisa->pos_id_2_center_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, pos_id);
  *(std::unordered_map<unsigned int,Vector3>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,Vector3>::find(
                                                                             p_pos_id_2_center_map,
                                                                             (const std::unordered_map<unsigned int,Vector3>::key_type *)(v2 + 48));
  v6 = &thisa->pos_id_2_center_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,Vector3>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,Vector3>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,Vector3>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Vector3>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Vector3>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    if ( (char)((unsigned __int64)&Vector3::zero & 7) >= *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&Vector3::zero >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)&Vector3::zero.z + 3) & 7) >= *(_BYTE *)((((unsigned __int64)&Vector3::zero.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load_n(&Vector3::zero, 12LL);
    }
    second = Vector3::zero;
  }
  else
  {
    n = std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false> *const)(v2 + 64));
    if ( (((unsigned __int8)n + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&n->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->second.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.z + 3) >> 3) + 0x7FFF8000) )
    {
      n = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false>::pointer)__asan_report_load_n(&n->second, 12LL);
    }
    second = n->second;
  }
  v10.m128i_i64[0] = *(_QWORD *)&second.x;
  if ( v14 == (char *)v2 )
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
  return _mm_loadl_epi64(&v10);
};

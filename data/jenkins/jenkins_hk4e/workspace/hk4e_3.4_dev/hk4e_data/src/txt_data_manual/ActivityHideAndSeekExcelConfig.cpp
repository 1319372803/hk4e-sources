// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp

// Line 19: range 0000000012C4BEA6-0000000012C4C0CE
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::checkConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekSkillExcelConfig(this, txt_config_mgr)
    || ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekMatchExcelConfig(this, txt_config_mgr)
    || ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkConfig",
      24);
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

// Line 31: range 0000000012C4C0D0-0000000012C4C2F8
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::rewriteConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekSkillExcelConfig(this, txt_config_mgr)
    || ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekMatchExcelConfig(this, txt_config_mgr)
    || ActivityHideAndSeekExcelConfigMgr::rewriteActivityHideAndSeekBasicConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "rewriteConfig",
      36);
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

// Line 43: range 0000000012C4C2FA-0000000012C4DBB5
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::rewriteActivityHideAndSeekBasicConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  const unsigned int *v12; // r15
  std::vector<unsigned int>::const_iterator v13; // rax
  char *v14; // rsi
  unsigned __int64 v15; // rax
  uint32_t *p_activity_id; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  unsigned int *v21; // r8
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false,false>,bool> v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // r15d
  std::remove_reference<Vector3&>::type *v40; // rsi
  unsigned __int64 v41; // rax
  bool v42; // r15
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  int v45; // r15d
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  std::vector<float>::reference v48; // rax
  int *v49; // rdx
  char v50; // cl
  _BOOL8 v51; // rsi
  int v52; // xmm0_4
  std::vector<float>::reference v53; // rax
  int *v54; // rdx
  int v55; // xmm0_4
  std::vector<float>::reference v56; // rax
  int *v57; // rdx
  char v58; // cl
  __int64 v59; // rsi
  int v60; // xmm0_4
  unsigned __int64 v61; // rax
  int v62; // edx
  bool is_punish_disappear; // cl
  char v64; // al
  __int64 v65; // rsi
  uint32_t first_punish_disappear_time; // ecx
  char v67; // dl
  uint32_t repeat_punish_disappear_time; // ecx
  char v69; // al
  HideAndSeekDetailConfig *v70; // rax
  const unsigned int *v71; // rcx
  HideAndSeekDetailConfig *v72; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>,bool> v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  unsigned __int64 v76; // rax
  int v77; // eax
  data::ActivityHideAndSeekBasicConfigMap *__for_range; // [rsp+20h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false,false>::reference v80; // [rsp+28h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig> >::type *id; // [rsp+30h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig> >::type *config; // [rsp+38h] [rbp-558h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-550h]
  data::HideAndSeekSkillExcelConfig *skill_config_ptr; // [rsp+48h] [rbp-548h]
  const std::vector<std::string> *__for_range_1; // [rsp+50h] [rbp-540h]
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference pos_str; // [rsp+58h] [rbp-538h]
  char v87[1328]; // [rsp+60h] [rbp-530h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 1 9 <unknown> 48 4 11 skill_id:49 64 8 14 __for_begin:44 96 8 12 __for_end:44 128 8 14 __f"
                        "or_begin:49 160 8 12 __for_end:49 192 8 14 __for_begin:77 224 8 12 __for_end:77 256 12 6 pos:79 "
                        "288 24 10 pos_vec:80 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>"
                        " 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 48 9 <unknown> 880 48 9 <unknown> "
                        "960 248 16 detail_config:46";
  *(_QWORD *)(v3 + 16) = ActivityHideAndSeekExcelConfigMgr::rewriteActivityHideAndSeekBasicConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -219020288;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862749] = -218959118;
  v5[536862757] = -218103808;
  v5[536862758] = -202116109;
  v5[536862759] = -202116109;
  __for_range = &this->activity_hide_and_seek_basic_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHideAndSeekBasicConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityHideAndSeekBasicConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityHideAndSeekBasicConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityHideAndSeekBasicConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false> *)(v3 + 96)) )
  {
    v80 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityHideAndSeekBasicConfig>(v80);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityHideAndSeekBasicConfig>(v80);
    v6 = ((v3 + 960) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 24) = 0;
    *(_WORD *)(v6 + 28) = 0;
    *(_BYTE *)(v6 + 30) = 0;
    HideAndSeekDetailConfig::HideAndSeekDetailConfig((HideAndSeekDetailConfig *const)(v3 + 960));
    v7 = ((v3 + 800) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    M_current = std::vector<unsigned int>::end(&config->map_list)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(&config->map_list)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 800),
      v9,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v3 + 960), (std::set<unsigned int> *)(v3 + 800));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 800));
    v10 = ((v3 + 800) >> 3) + 2147450880;
    *(_DWORD *)v10 = -117901064;
    *(_WORD *)(v10 + 4) = -1800;
    v11 = ((v3 + 880) >> 3) + 2147450880;
    *(_DWORD *)v11 = 0;
    *(_WORD *)(v11 + 4) = 0;
    v12 = std::vector<unsigned int>::end(&config->skill_list)._M_current;
    v13._M_current = std::vector<unsigned int>::begin(&config->skill_list)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 880),
      v13,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v12);
    v14 = (char *)(v3 + 880);
    std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v3 + 1008), (std::set<unsigned int> *)(v3 + 880));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 880));
    v15 = ((v3 + 880) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    __for_range_0 = (std::set<unsigned int> *)(v3 + 1008);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v14);
    *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v14);
    *(std::set<unsigned int>::iterator *)(v3 + 160) = std::set<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      p_activity_id = (uint32_t *)(v3 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 160)) )
      {
        v26 = 1;
        goto LABEL_43;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
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
        LOBYTE(p_activity_id) = v20 != 0;
        __asan_report_store4(v3 + 48, p_activity_id);
      }
      *(_DWORD *)(v3 + 48) = v19;
      skill_config_ptr = data::ActivityHideAndSeekConfigMgrBase::findHideAndSeekSkillExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
      if ( !skill_config_ptr )
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "rewriteActivityHideAndSeekBasicConfig",
          54);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v22,
                (const char (*)[37])"skill config is not found, skill_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v24, (const char (*)[15])", activity_id:");
        p_activity_id = &config->activity_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_43;
      }
      v27 = ((_BYTE)skill_config_ptr + 28) & 7;
      v28 = (*(_BYTE *)(((unsigned __int64)&skill_config_ptr->is_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->is_default >> 3) + 0x7FFF8000));
      if ( (_BYTE)v28 )
        __asan_report_load1(&skill_config_ptr->is_default, v27, v28);
      if ( !skill_config_ptr->is_default )
        goto LABEL_41;
      if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&skill_config_ptr->skill_category);
      }
      if ( skill_config_ptr->skill_category != HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER )
        break;
      v29 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::emplace<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const&,unsigned int &>(
              (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 1112),
              &skill_config_ptr->skill_sub_category,
              (unsigned int *)(v3 + 48),
              (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v3 + 1112),
              v21);
      if ( !v29.second )
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "rewriteActivityHideAndSeekBasicConfig",
          63);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v30, (const char (*)[84])byte_1AA5FBC0);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v3 + 48));
        v33 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v32, (const char (*)[15])", activity_id:");
        p_activity_id = &config->activity_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &config->activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
        goto LABEL_43;
      }
LABEL_41:
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 128));
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->skill_category >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&skill_config_ptr->skill_category);
    }
    if ( skill_config_ptr->skill_category != HIDE_AND_SEEK_SKILL_CATEGORY_PREY )
      goto LABEL_41;
    v34 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::emplace<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const&,unsigned int &>(
            (std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *const)(v3 + 1056),
            &skill_config_ptr->skill_sub_category,
            (unsigned int *)(v3 + 48),
            (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v3 + 1056),
            v21);
    if ( v34.second )
      goto LABEL_41;
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "rewriteActivityHideAndSeekBasicConfig",
      71);
    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v36 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v35, (const char (*)[84])byte_1AA5FBC0);
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 48));
    v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v37, (const char (*)[15])", activity_id:");
    p_activity_id = &config->activity_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &config->activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_43:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v26 == 1 )
    {
      __for_range_1 = &config->transfer_list;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, p_activity_id);
      *(std::vector<std::string>::const_iterator *)(v3 + 192) = std::vector<std::string>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, p_activity_id);
      *(std::vector<std::string>::const_iterator *)(v3 + 224) = std::vector<std::string>::end(__for_range_1);
      while ( 1 )
      {
        v40 = (std::remove_reference<Vector3&>::type *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 224)) )
          break;
        pos_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 192));
        *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 1024;
        Vector3::Vector3((Vector3 *const)(v3 + 256), 0.0, 0.0, 0.0);
        v41 = ((v3 + 288) >> 3) + 2147450880;
        *(_WORD *)v41 = 0;
        *(_BYTE *)(v41 + 2) = 0;
        std::vector<float>::vector((std::vector<float> *const)(v3 + 288));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 544),
          ",",
          (const std::allocator<char> *)(v3 + 32));
        v42 = common::tools::StringUtils::splitToList<float>(
                pos_str,
                (const std::string *)(v3 + 544),
                (std::vector<float> *)(v3 + 288),
                1) != 0;
        std::string::~string((void *)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        if ( v42 )
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
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "rewriteActivityHideAndSeekBasicConfig",
            83);
          v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v44 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v43,
                  (const char (*)[24])"splitToList failed, id:");
          v40 = (std::remove_reference<Vector3&>::type *)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v45 = 0;
        }
        else if ( std::vector<float>::size((const std::vector<float> *const)(v3 + 288)) > 2 )
        {
          v48 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 288), 0LL);
          v49 = (int *)v48;
          v50 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
          v51 = v50 != 0;
          if ( v50 != 0 && (char)(((unsigned __int8)v48 & 7) + 3) >= v50 )
            __asan_report_load4(v48);
          v52 = *v49;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 256, v51);
          *(_DWORD *)(v3 + 256) = v52;
          v53 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 288), 1uLL);
          v54 = (int *)v53;
          if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v53);
          }
          v55 = *v54;
          if ( *(_BYTE *)(((v3 + 260) >> 3) + 0x7FFF8000) != 0
            && (char)(((v3 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 260) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v3 + 260, (((_BYTE)v3 + 4) & 7u) + 3);
          }
          *(_DWORD *)(v3 + 260) = v55;
          v59 = 2LL;
          v56 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 288), 2uLL);
          v57 = (int *)v56;
          v58 = *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000);
          LOBYTE(v59) = v58 != 0;
          if ( v58 != 0 && (char)(((unsigned __int8)v56 & 7) + 3) >= v58 )
            __asan_report_load4(v56);
          v60 = *v57;
          if ( *(_BYTE *)(((v3 + 264) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 264) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 264, v59);
          *(_DWORD *)(v3 + 264) = v60;
          v40 = std::move<Vector3 &>((Vector3 *)(v3 + 256));
          std::vector<Vector3>::push_back((std::vector<Vector3> *const)(v3 + 1168), v40);
          v45 = 1;
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
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "rewriteActivityHideAndSeekBasicConfig",
            88);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v46,
                  (const char (*)[23])"pos config failed, id:");
          v40 = (std::remove_reference<Vector3&>::type *)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
          *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v45 = 0;
        }
        std::vector<float>::~vector((std::vector<float> *const)(v3 + 288));
        *(_WORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -1800;
        v61 = ((v3 + 288) >> 3) + 2147450880;
        *(_WORD *)v61 = -1800;
        *(_BYTE *)(v61 + 2) = -8;
        if ( v45 != 1 )
        {
          v62 = 0;
          goto LABEL_76;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 192));
      }
      v62 = 1;
LABEL_76:
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v62 == 1 )
      {
        if ( *(char *)(((unsigned __int64)&config->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&config->is_punish_disappear, v40, &config->is_punish_disappear);
        is_punish_disappear = config->is_punish_disappear;
        v64 = *(_BYTE *)(((v3 + 1192) >> 3) + 0x7FFF8000);
        if ( v64 < 0 )
        {
          LOBYTE(v40) = v64 != 0;
          __asan_report_store1(v3 + 1192, v40, v3 + 1192);
        }
        *(_BYTE *)(v3 + 1192) = is_punish_disappear;
        v65 = (((_BYTE)config + 116) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->first_punish_disappear_time >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&config->first_punish_disappear_time);
        }
        first_punish_disappear_time = config->first_punish_disappear_time;
        v67 = *(_BYTE *)(((v3 + 1196) >> 3) + 0x7FFF8000);
        if ( v67 != 0 && (char)(((v3 - 84) & 7) + 3) >= v67 )
        {
          LOBYTE(v65) = v67 != 0;
          __asan_report_store4(v3 + 1196, v65);
        }
        *(_DWORD *)(v3 + 1196) = first_punish_disappear_time;
        if ( *(_BYTE *)(((unsigned __int64)&config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->repeat_punish_disappear_time);
        }
        repeat_punish_disappear_time = config->repeat_punish_disappear_time;
        v69 = *(_BYTE *)(((v3 + 1200) >> 3) + 0x7FFF8000);
        if ( v69 != 0 && v69 <= 3 )
        {
          LOBYTE(v65) = v69 != 0;
          __asan_report_store4(v3 + 1200, v65);
        }
        *(_DWORD *)(v3 + 1200) = repeat_punish_disappear_time;
        v70 = std::move<HideAndSeekDetailConfig &>((HideAndSeekDetailConfig *)(v3 + 960));
        v73 = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::emplace<unsigned int const&,HideAndSeekDetailConfig>(
                &this->activity_detail_config_map,
                &config->activity_id,
                v70,
                v71,
                v72);
        if ( !v73.second )
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
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "rewriteActivityHideAndSeekBasicConfig",
            101);
          v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v75 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                  v74,
                  (const char (*)[71])"duplicated activity_id in ActivityHideAndSeekBasicConfig, activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &config->activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
          *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v39 = 0;
        }
        else
        {
          v39 = 1;
        }
      }
      else
      {
        v39 = 0;
      }
    }
    else
    {
      v39 = 0;
    }
    HideAndSeekDetailConfig::~HideAndSeekDetailConfig((HideAndSeekDetailConfig *const)(v3 + 960));
    v76 = ((v3 + 960) >> 3) + 2147450880;
    *(_DWORD *)v76 = -117901064;
    *(_DWORD *)(v76 + 4) = -117901064;
    *(_DWORD *)(v76 + 8) = -117901064;
    *(_DWORD *)(v76 + 12) = -117901064;
    *(_DWORD *)(v76 + 16) = -117901064;
    *(_DWORD *)(v76 + 20) = -117901064;
    *(_DWORD *)(v76 + 24) = -117901064;
    *(_WORD *)(v76 + 28) = -1800;
    *(_BYTE *)(v76 + 30) = -8;
    if ( v39 != 1 )
    {
      v77 = 0;
      goto LABEL_99;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityHideAndSeekBasicConfig>,false,false> *const)(v3 + 64));
  }
  v77 = 1;
LABEL_99:
  if ( v77 == 1 )
    v2 = 0;
  if ( v87 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v87);
  }
  return v2;
};

// Line 109: range 0000000012C4DBB6-0000000012C4FEFC
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  const NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // eax
  const data::GalleryExcelConfigMgrBase *p_gallery_config_mgr; // rcx
  __int64 gallery_id; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned int *v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  std::unordered_map<unsigned int,unsigned int> *p_skill_to_ability_group_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v33; // rdx
  bool v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  int v39; // eax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  int v50; // edx
  char *v51; // rsi
  __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY*,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> >::reference v52; // rax
  int *v53; // rdx
  int v54; // ecx
  char v55; // al
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  __int64 v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  int v62; // eax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  __int64 v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  const HK4EDesignConfig *Config; // rax
  common::milog::MiLogStream *v72; // rax
  char *v73; // rsi
  const Vector3 *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  int v77; // edx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rdx
  uint32_t first_punish_disappear_time; // ecx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rdx
  std::initializer_list<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> __l; // [rsp+10h] [rbp-600h]
  std::vector<std::string>::size_type __la; // [rsp+10h] [rbp-600h]
  const TxtConfigMgr *txt_config_mgra; // [rsp+20h] [rbp-5F0h]
  std::unordered_map<unsigned int,HideAndSeekDetailConfig> *__for_range; // [rsp+38h] [rbp-5D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::reference v92; // [rsp+40h] [rbp-5D0h]
  std::tuple_element<0,std::pair<unsigned int const,HideAndSeekDetailConfig> >::type *activity_id; // [rsp+48h] [rbp-5C8h]
  std::tuple_element<1,const std::pair<unsigned int const,HideAndSeekDetailConfig> >::type *detail_config; // [rsp+50h] [rbp-5C0h]
  data::HideAndSeekMatchExcelConfig *map_config_ptr; // [rsp+60h] [rbp-5B0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-5A8h]
  const std::set<unsigned int> *__for_range_1; // [rsp+70h] [rbp-5A0h]
  unsigned int *ability_group_index; // [rsp+78h] [rbp-598h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+88h] [rbp-588h]
  const std::vector<Vector3> *__for_range_3; // [rsp+90h] [rbp-580h]
  char v101[1392]; // [rsp+A0h] [rbp-570h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1344LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "31 32 1 9 <unknown> 48 4 10 map_id:122 64 4 12 skill_id:136 80 4 8 slot:153 96 8 15 __for_begin:"
                        "115 128 8 13 __for_end:115 160 8 15 __for_begin:122 192 8 13 __for_end:122 224 8 15 __for_begin:"
                        "136 256 8 13 __for_end:136 288 8 8 iter:138 320 8 9 <unknown> 352 8 15 __for_begin:153 384 8 13 "
                        "__for_end:153 416 8 9 <unknown> 448 8 9 <unknown> 480 8 15 __for_begin:178 512 8 13 __for_end:17"
                        "8 544 12 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>"
                        " 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown"
                        "> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
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
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -219020288;
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
  v5[536862761] = -202116109;
  if ( !(_BYTE)`guard variable for'ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec
    && __cxa_guard_acquire(&`guard variable for'ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec) )
  {
    if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 544, txt_config_mgr);
    *(_DWORD *)(v3 + 544) = 1;
    v6 = (((_BYTE)v3 + 36) & 7u) + 3;
    if ( *(_BYTE *)(((v3 + 548) >> 3) + 0x7FFF8000) != 0
      && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 548) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3 + 548, v6);
    }
    *(_DWORD *)(v3 + 548) = 2;
    if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 552, v6);
    *(_DWORD *)(v3 + 552) = 3;
    __l._M_array = (std::initializer_list<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::iterator)(v3 + 544);
    __l._M_len = 3LL;
    std::allocator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::allocator((std::allocator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> *const)(v3 + 32));
    std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::vector(
      &ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec,
      __l,
      (const std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::allocator_type *)(v3 + 32));
    __cxa_guard_release(&`guard variable for'ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec);
    txt_config_mgr = (const TxtConfigMgr *)&ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::~vector,
      &ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec,
      &_dso_handle);
    std::allocator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::~allocator((std::allocator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> *const)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_WORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -1800;
  }
  __for_range = &this->activity_detail_config_map;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::begin(__for_range);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HideAndSeekDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v3 + 128)) )
    {
      v11 = 1;
      goto LABEL_154;
    }
    v92 = std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v3 + 96));
    activity_id = std::get<0ul,unsigned int const,HideAndSeekDetailConfig>(v92);
    detail_config = (std::tuple_element<1,const std::pair<unsigned int const,HideAndSeekDetailConfig> >::type *)std::get<1ul,unsigned int const,HideAndSeekDetailConfig>(v92);
    p_new_activity_config_mgr = &txt_config_mgra->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    v8 = *activity_id;
    if ( NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, v8) != NEW_ACTIVITY_HIDEANDSEEK )
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "checkActivityHideAndSeekBasicConfig",
        119);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 576),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              v9,
              (const char (*)[49])"activity type is not hide_and_seek, activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      v2 = -1;
      v11 = 0;
      goto LABEL_154;
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::set<unsigned int>::iterator *)(v3 + 160) = std::set<unsigned int>::begin(&detail_config->map_set);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v8);
    *(std::set<unsigned int>::iterator *)(v3 + 192) = std::set<unsigned int>::end(&detail_config->map_set);
    while ( 1 )
    {
      v12 = (char *)(v3 + 192);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 160),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 192)) )
      {
        v21 = 1;
        goto LABEL_78;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 160));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v3 + 48, v12);
      }
      *(_DWORD *)(v3 + 48) = v15;
      map_config_ptr = data::ActivityHideAndSeekConfigMgrBase::findHideAndSeekMatchExcelConfig(
                         this,
                         *(unsigned int *)(v3 + 48));
      if ( !map_config_ptr )
      {
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkActivityHideAndSeekBasicConfig",
          127);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v17,
                (const char (*)[33])"map config is not found, map_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])", activity_id:");
        v12 = (char *)activity_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v21 = 0;
        goto LABEL_78;
      }
      p_gallery_config_mgr = &txt_config_mgra->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&map_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&map_config_ptr->gallery_id);
      }
      gallery_id = map_config_ptr->gallery_id;
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, gallery_id);
      if ( !gallery_config_ptr )
        break;
      __for_range_1 = &detail_config->skill_set;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, gallery_id);
      *(std::set<unsigned int>::iterator *)(v3 + 224) = std::set<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, gallery_id);
      *(std::set<unsigned int>::iterator *)(v3 + 256) = std::set<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v12 = (char *)(v3 + 256);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 224),
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 256)) )
          break;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v28 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 224));
        v29 = (int *)v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        v30 = *v29;
        v31 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v31 != 0;
        if ( v31 != 0 && v31 <= 3 )
          __asan_report_store4(v3 + 64, v12);
        *(_DWORD *)(v3 + 64) = v30;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        p_skill_to_ability_group_map = &this->skill_to_ability_group_map;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v12);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                   p_skill_to_ability_group_map,
                                                                                   (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        v33 = &this->skill_to_ability_group_map;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v3 + 64);
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,unsigned int>::end(v33);
        v34 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 288),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 320));
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v34 )
        {
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "checkActivityHideAndSeekBasicConfig",
            141);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v35,
                  (const char (*)[37])"skill config is not found, skill_id:");
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v3 + 64));
          v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v37,
                  (const char (*)[15])", activity_id:");
          v12 = (char *)activity_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, activity_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v39 = 0;
        }
        else
        {
          ability_group_index = &std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 288))->second;
          v12 = (char *)(((unsigned __int8)ability_group_index & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)ability_group_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ability_group_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ability_group_index >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(ability_group_index);
          }
          __la = *ability_group_index;
          if ( __la < std::vector<std::string>::size(&gallery_config_ptr->selectable_ability_groups) )
          {
            v39 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
              "checkActivityHideAndSeekBasicConfig",
              147);
            v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v41 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                    v40,
                    (const char (*)[81])byte_1AA60180);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, ability_group_index);
            v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v42,
                    (const char (*)[14])byte_1AA60200);
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    (const unsigned int *)(v3 + 64));
            v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v44,
                    (const char (*)[14])", gallery_id:");
            v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v45,
                    &map_config_ptr->gallery_id);
            v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v46,
                    (const char (*)[14])byte_1AA60280);
            v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v47,
                    (const unsigned int *)(v3 + 48));
            v49 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v48,
                    (const char (*)[15])", activity_id:");
            v12 = (char *)activity_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, activity_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
            *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v39 = 0;
          }
        }
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v39 != 1 )
        {
          v50 = 0;
          goto LABEL_74;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 224));
      }
      v50 = 1;
LABEL_74:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v50 != 1 )
      {
        v21 = 0;
        goto LABEL_78;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkActivityHideAndSeekBasicConfig",
      133);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 704),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v24, (const char (*)[53])byte_1AA600E0);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &map_config_ptr->gallery_id);
    v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])", map_id:");
    v12 = (char *)(v3 + 48);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
    *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_78:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v11 = 0;
      goto LABEL_154;
    }
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, v12);
    *(std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::iterator *)(v3 + 352) = std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::begin(&ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, v12);
    *(std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::iterator *)(v3 + 384) = std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>::end(&ActivityHideAndSeekExcelConfigMgr::checkActivityHideAndSeekBasicConfig(TxtConfigMgr const&)::slot_vec);
    while ( 1 )
    {
      v51 = (char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>>(
              (const __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY*,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY*,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> > *)(v3 + 384)) )
      {
        v62 = 1;
        goto LABEL_108;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v52 = __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>>::operator*((const __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY*,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> > *const)(v3 + 352));
      v53 = (int *)v52;
      if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v52);
      }
      v54 = *v53;
      v55 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v55 != 0 && v55 <= 3 )
      {
        LOBYTE(v51) = v55 != 0;
        __asan_report_store4(v3 + 80, v51);
      }
      *(_DWORD *)(v3 + 80) = v54;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
              &detail_config->hider_default_skill_map,
              (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v3 + 80)) )
      {
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkActivityHideAndSeekBasicConfig",
          157);
        v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v57 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v56, (const char (*)[19])byte_1AA602C0);
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 80);
        v58 = (__int64)data::enumValToStr(
                         (data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY)*(_DWORD *)(v3 + 80),
                         (__int64)byte_1AA602C0);
        if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
          v58 = __asan_report_store8(v3 + 416, byte_1AA602C0);
        *(_QWORD *)(v3 + 416) = v58;
        v59 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v57, (const char *const *)(v3 + 416));
        v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v59, (const char (*)[16])byte_1AA60300);
        v61 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v60, (const char (*)[15])", activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, activity_id);
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v62 = 0;
        goto LABEL_108;
      }
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
              &detail_config->hunter_default_skill_map,
              (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v3 + 80)) )
        break;
      __gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>>::operator++((__gnu_cxx::__normal_iterator<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY*,std::vector<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY> > *const)(v3 + 352));
    }
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 960, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 960),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkActivityHideAndSeekBasicConfig",
      162);
    v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 960),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v64 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v63, (const char (*)[19])byte_1AA60340);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 80);
    v65 = (__int64)data::enumValToStr(
                     (data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY)*(_DWORD *)(v3 + 80),
                     (__int64)byte_1AA60340);
    if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
      v65 = __asan_report_store8(v3 + 448, byte_1AA60340);
    *(_QWORD *)(v3 + 448) = v65;
    v66 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v64, (const char *const *)(v3 + 448));
    v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v66, (const char (*)[16])byte_1AA60300);
    v68 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v67, (const char (*)[15])", activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, activity_id);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v62 = 0;
LABEL_108:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v62 != 1 )
    {
      v11 = 0;
      goto LABEL_154;
    }
    if ( std::vector<Vector3>::size(&detail_config->transfer_pos_vec) <= 3 )
    {
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "checkActivityHideAndSeekBasicConfig",
        168);
      v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v70 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v69, (const char (*)[64])byte_1AA60380);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
      v2 = -1;
      v11 = 0;
      goto LABEL_154;
    }
    Config = TxtConfigMgr::getConfig(txt_config_mgra);
    scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(&Config->lua_config_mgr, 3LL);
    if ( !scene_config_ptr )
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "checkActivityHideAndSeekBasicConfig",
        175);
      v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v72,
        (const char (*)[29])"findSceneScriptConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
      v2 = -1;
      v11 = 0;
      goto LABEL_154;
    }
    __for_range_3 = &detail_config->transfer_pos_vec;
    *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 480, 3LL);
    *(std::vector<Vector3>::const_iterator *)(v3 + 480) = std::vector<Vector3>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 512, 3LL);
    *(std::vector<Vector3>::const_iterator *)(v3 + 512) = std::vector<Vector3>::end(__for_range_3);
    while ( 1 )
    {
      v73 = (char *)(v3 + 512);
      if ( !__gnu_cxx::operator!=<Vector3 const*,std::vector<Vector3>>(
              (const __gnu_cxx::__normal_iterator<const Vector3*,std::vector<Vector3> > *)(v3 + 480),
              (const __gnu_cxx::__normal_iterator<const Vector3*,std::vector<Vector3> > *)(v3 + 512)) )
      {
        v77 = 1;
        goto LABEL_130;
      }
      v74 = __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator*((const __gnu_cxx::__normal_iterator<const Vector3*,std::vector<Vector3> > *const)(v3 + 480));
      if ( !SceneScriptConfig::isPosValid(scene_config_ptr, v74) )
        break;
      __gnu_cxx::__normal_iterator<Vector3 const*,std::vector<Vector3>>::operator++((__gnu_cxx::__normal_iterator<const Vector3*,std::vector<Vector3> > *const)(v3 + 480));
    }
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkActivityHideAndSeekBasicConfig",
      182);
    v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1152),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v76 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v75, (const char (*)[61])byte_1AA60420);
    v73 = (char *)activity_id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
    *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v77 = 0;
LABEL_130:
    *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
    if ( v77 != 1 )
    {
      v11 = 0;
      goto LABEL_154;
    }
    if ( *(char *)(((unsigned __int64)&detail_config->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&detail_config->is_punish_disappear, v73, &detail_config->is_punish_disappear);
    if ( detail_config->is_punish_disappear )
    {
      if ( *(_BYTE *)(((unsigned __int64)&detail_config->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)detail_config - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&detail_config->first_punish_disappear_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&detail_config->first_punish_disappear_time);
      }
      if ( !detail_config->first_punish_disappear_time )
        goto LABEL_141;
      if ( *(_BYTE *)(((unsigned __int64)&detail_config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&detail_config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&detail_config->repeat_punish_disappear_time);
      }
      if ( !detail_config->repeat_punish_disappear_time )
      {
LABEL_141:
        *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1216, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1216),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkActivityHideAndSeekBasicConfig",
          190);
        v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1216),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v79 = common::milog::MiLogStream::operator<<<char [87],(char *[87])0>(v78, (const char (*)[87])byte_1AA60480);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, activity_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
        v2 = -1;
        v11 = 0;
        goto LABEL_154;
      }
      if ( *(_BYTE *)(((unsigned __int64)&detail_config->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)detail_config - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&detail_config->first_punish_disappear_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&detail_config->first_punish_disappear_time);
      }
      first_punish_disappear_time = detail_config->first_punish_disappear_time;
      if ( *(_BYTE *)(((unsigned __int64)&detail_config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&detail_config->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&detail_config->repeat_punish_disappear_time);
      }
      if ( first_punish_disappear_time < detail_config->repeat_punish_disappear_time )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v3 + 96));
  }
  *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1280, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1280),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
    "checkActivityHideAndSeekBasicConfig",
    195);
  v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1280),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v82 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v81, (const char (*)[35])byte_1AA60500);
  v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v82,
          &detail_config->first_punish_disappear_time);
  v84 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v83, (const char (*)[39])byte_1AA60560);
  v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v84,
          &detail_config->repeat_punish_disappear_time);
  v86 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v85, (const char (*)[15])", activity_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, activity_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
  v2 = -1;
  v11 = 0;
LABEL_154:
  if ( v11 == 1 )
    v2 = 0;
  if ( v101 == (char *)v3 )
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF807C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8094) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF809C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A4) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1344LL, v101);
  }
  return v2;
};

// Line 205: range 0000000012C4FEFE-0000000012C50BCB
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekSkillExcelConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  std::unordered_set<unsigned int> *v13; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::unordered_set<unsigned int> *v17; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  __int64 v25; // rsi
  uint32_t v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rax
  int32_t result; // eax
  data::HideAndSeekSkillExcelConfigMap *__for_range; // [rsp+10h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false,false>::reference v34; // [rsp+18h] [rbp-248h]
  std::tuple_element<0,std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig> >::type *id; // [rsp+20h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig> >::type *config; // [rsp+28h] [rbp-238h]
  char v37[560]; // [rsp+30h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:206 64 8 13 __for_end:206 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <un"
                        "known> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekSkillExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  __for_range = &this->hide_and_seek_skill_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HideAndSeekSkillExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::HideAndSeekSkillExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HideAndSeekSkillExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HideAndSeekSkillExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_57;
    }
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::HideAndSeekSkillExcelConfig>(v34);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HideAndSeekSkillExcelConfig>(v34);
    if ( *(_BYTE *)(((unsigned __int64)&config->skill_sub_category >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->skill_sub_category >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->skill_sub_category);
    }
    if ( config->skill_sub_category == HIDE_AND_SEEK_SKILL_SUB_CATEGORY_NONE )
    {
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "rewriteHideAndSeekSkillExcelConfig",
        210);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v7, (const char (*)[49])byte_1AA606E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v9 = 0;
      goto LABEL_57;
    }
    v10 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->skill_to_ability_group_map,
            id,
            &config->gallery_ability_group_index,
            (const unsigned int *)&this->skill_to_ability_group_map,
            v6);
    if ( !v10.second )
    {
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "rewriteHideAndSeekSkillExcelConfig",
        215);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v11, (const char (*)[58])byte_1AA60740);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
      v9 = 0;
      goto LABEL_57;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->skill_category);
    }
    if ( config->skill_category == HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER )
    {
      v13 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::operator[](
              &this->hunter_skill_map,
              &config->skill_sub_category);
      v14 = std::unordered_set<unsigned int>::insert(v13, id);
      if ( !v14.second )
      {
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "rewriteHideAndSeekSkillExcelConfig",
          222);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v15, (const char (*)[45])byte_1AA607A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        v2 = -1;
        v9 = 0;
        goto LABEL_57;
      }
      goto LABEL_55;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->skill_category);
    }
    if ( config->skill_category == HIDE_AND_SEEK_SKILL_CATEGORY_PREY )
    {
      v17 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::operator[](
              &this->hider_skill_map,
              &config->skill_sub_category);
      v18 = std::unordered_set<unsigned int>::insert(v17, id);
      if ( !v18.second )
      {
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "rewriteHideAndSeekSkillExcelConfig",
          230);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v19, (const char (*)[45])byte_1AA607A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        v2 = -1;
        v9 = 0;
        goto LABEL_57;
      }
      goto LABEL_55;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->skill_category);
    }
    if ( config->skill_category != HIDE_AND_SEEK_SKILL_CATEGORY_GHOST )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&this->ghost_skill_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->ghost_skill_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->ghost_skill_id);
    }
    if ( this->ghost_skill_id )
    {
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "rewriteHideAndSeekSkillExcelConfig",
        238);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v21, (const char (*)[67])byte_1AA60800);
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->ghost_skill_id);
      v24 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v23, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v9 = 0;
      goto LABEL_57;
    }
    v25 = ((unsigned __int8)id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v26 = *id;
    v27 = *(_BYTE *)(((unsigned __int64)&this->ghost_skill_id >> 3) + 0x7FFF8000);
    if ( v27 != 0 && v27 <= 3 )
    {
      LOBYTE(v25) = v27 != 0;
      __asan_report_store4(&this->ghost_skill_id, v25);
    }
    this->ghost_skill_id = v26;
LABEL_55:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekSkillExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
    "rewriteHideAndSeekSkillExcelConfig",
    245);
  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 448),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v29 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v28,
          (const char (*)[28])"unsupported skill_category:");
  v30 = (((_BYTE)config + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->skill_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->skill_category);
  }
  v31 = (__int64)data::enumValToStr(config->skill_category, v30);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v31 = __asan_report_store8(v3 + 96, v30);
  *(_QWORD *)(v3 + 96) = v31;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v29, (const char *const *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
  v2 = -1;
  v9 = 0;
LABEL_57:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 253: range 0000000012C50BCC-0000000012C50DD6
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekSkillExcelConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekSkillExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->ghost_skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ghost_skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ghost_skill_id);
  }
  if ( this->ghost_skill_id )
  {
    result = 0;
  }
  else
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkHideAndSeekSkillExcelConfig",
      256);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v5, (const char (*)[31])byte_1AA60920);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
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

// Line 263: range 0000000012C50DD8-0000000012C515CE
__int64 __fastcall ActivityHideAndSeekExcelConfigMgr::getDefaultSkillConfigId(
        const ActivityHideAndSeekExcelConfigMgr *const this,
        __int64 camp,
        data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY slot,
        uint32_t activity_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,HideAndSeekDetailConfig> *p_activity_detail_config_map; // rdx
  std::unordered_map<unsigned int,HideAndSeekDetailConfig> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::pointer v16; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::pointer v17; // rax
  const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::mapped_type *v18; // rax
  unsigned int *v19; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::pointer v20; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::pointer v21; // rax
  const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::mapped_type *v22; // rax
  unsigned int *v23; // rdx
  common::milog::MiLogStream *v24; // r14
  __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  __int64 v28; // rax
  char v31[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 8 slot:262 48 4 15 activity_id:262 64 8 8 iter:264 96 8 9 <unknown> 128 8 9 <unknown> 16"
                        "0 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityHideAndSeekExcelConfigMgr::getDefaultSkillConfigId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 32) = slot;
  *(_DWORD *)(v4 + 48) = activity_id;
  p_activity_detail_config_map = &this->activity_detail_config_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, camp);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::find(
                                                                                             p_activity_detail_config_map,
                                                                                             (const std::unordered_map<unsigned int,HideAndSeekDetailConfig>::key_type *)(v4 + 48));
  v8 = &this->activity_detail_config_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekDetailConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "getDefaultSkillConfigId",
      267);
    v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v4 + 256),
            (const char (*)[43])"getDefaultSkillConfigId failed camp, camp:");
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    v11 = (__int64)data::enumValToStr(
                     (data::HIDE_AND_SEEK_SKILL_CATEGORY)camp,
                     (__int64)"getDefaultSkillConfigId failed camp, camp:");
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      v11 = __asan_report_store8(v4 + 128, "getDefaultSkillConfigId failed camp, camp:");
    *(_QWORD *)(v4 + 128) = v11;
    v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v4 + 128));
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])", slot:");
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v14 = (__int64)data::enumValToStr((data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY)*(_DWORD *)(v4 + 32), (__int64)", slot:");
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      v14 = __asan_report_store8(v4 + 160, ", slot:");
    *(_QWORD *)(v4 + 160) = v14;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
    result = 0LL;
    goto LABEL_34;
  }
  if ( (_DWORD)camp != 1 )
  {
    if ( (_DWORD)camp == 2 )
    {
      v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v4 + 64));
      if ( common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
             &v20->second.hider_default_skill_map,
             (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v4 + 32)) )
      {
        v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v4 + 64));
        v22 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::at(
                &v21->second.hider_default_skill_map,
                (const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::key_type *)(v4 + 32));
        v23 = (unsigned int *)v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        result = *v23;
        goto LABEL_34;
      }
    }
    goto LABEL_27;
  }
  v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v4 + 64));
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
          &v16->second.hunter_default_skill_map,
          (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v4 + 32)) )
  {
LABEL_27:
    *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "getDefaultSkillConfigId",
      291);
    v24 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v4 + 320),
            (const char (*)[43])"getDefaultSkillConfigId failed camp, camp:");
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    v25 = (__int64)data::enumValToStr(
                     (data::HIDE_AND_SEEK_SKILL_CATEGORY)camp,
                     (__int64)"getDefaultSkillConfigId failed camp, camp:");
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      v25 = __asan_report_store8(v4 + 192, "getDefaultSkillConfigId failed camp, camp:");
    *(_QWORD *)(v4 + 192) = v25;
    v26 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v24, (const char *const *)(v4 + 192));
    v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])", slot:");
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    v28 = (__int64)data::enumValToStr((data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY)*(_DWORD *)(v4 + 32), (__int64)", slot:");
    if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      v28 = __asan_report_store8(v4 + 224, ", slot:");
    *(_QWORD *)(v4 + 224) = v28;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v27, (const char *const *)(v4 + 224));
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
    result = 0LL;
    goto LABEL_34;
  }
  v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v4 + 64));
  v18 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::at(
          &v17->second.hunter_default_skill_map,
          (const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::key_type *)(v4 + 32));
  v19 = (unsigned int *)v18;
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v18);
  }
  result = *v19;
LABEL_34:
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 296: range 0000000012C515D0-0000000012C517CA
_BOOL8 __fastcall ActivityHideAndSeekExcelConfigMgr::isValidSkillConfigId(
        const ActivityHideAndSeekExcelConfigMgr *const this,
        data::HIDE_AND_SEEK_SKILL_CATEGORY camp,
        data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY slot,
        uint32_t config_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  _BOOL8 result; // rax
  const std::unordered_set<unsigned int> *v8; // rax
  const std::unordered_set<unsigned int> *v9; // rax
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 8 slot:295 64 4 13 config_id:295";
  *(_QWORD *)(v4 + 16) = ActivityHideAndSeekExcelConfigMgr::isValidSkillConfigId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = slot;
  *(_DWORD *)(v4 + 64) = config_id;
  if ( camp == HIDE_AND_SEEK_SKILL_CATEGORY_HUNTER )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
            &this->hunter_skill_map,
            (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v4 + 48)) )
    {
      result = 0LL;
    }
    else
    {
      v8 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::at(
             &this->hunter_skill_map,
             (const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::key_type *)(v4 + 48));
      result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 v8,
                 (const unsigned int *)(v4 + 64));
    }
  }
  else if ( camp == HIDE_AND_SEEK_SKILL_CATEGORY_PREY )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
            &this->hider_skill_map,
            (const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *)(v4 + 48)) )
    {
      result = 0LL;
    }
    else
    {
      v9 = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::at(
             &this->hider_skill_map,
             (const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::key_type *)(v4 + 48));
      result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 v9,
                 (const unsigned int *)(v4 + 64));
    }
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 330: range 0000000012C517CC-0000000012C5280E
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekMatchExcelConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  _DWORD *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // r15d
  std::tuple_element<0,std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig> >::type *v11; // rsi
  data::MatchLimitType type; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_area_to_map_set_map; // rcx
  int32_t v14; // edi
  char v15; // al
  std::set<unsigned int> *v16; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_quest_to_map_set_map; // rcx
  int32_t param; // edi
  char v23; // al
  std::set<unsigned int> *v24; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  uint32_t scene_id; // ecx
  char v29; // al
  __int64 v30; // rsi
  uint32_t group_id; // ecx
  char v32; // dl
  std::vector<unsigned int> *p_duration_list; // rsi
  uint32_t gallery_id; // ecx
  char v35; // al
  HideAndSeekMapConfig *v36; // rdx
  const unsigned int *v37; // rcx
  HideAndSeekMapConfig *v38; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>,bool> v39; // rax
  const data::HideAndSeekMatchExcelConfig *v40; // r8
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MatchLimitExcelConfig>,false,false>,bool> matched; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  _DWORD *v46; // rax
  int v47; // eax
  data::HideAndSeekMatchExcelConfigMap *__for_range; // [rsp+20h] [rbp-2C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false,false>::reference v52; // [rsp+28h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig> >::type *id; // [rsp+30h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig> >::type *config; // [rsp+38h] [rbp-2A8h]
  const std::vector<data::MatchCond> *__for_range_0; // [rsp+40h] [rbp-2A0h]
  const data::MatchCond *match_cond; // [rsp+48h] [rbp-298h]
  char v57[656]; // [rsp+50h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 4 9 <unknown> 48 4 9 <unknown> 64 8 15 __for_begin:331 96 8 13 __for_end:331 128 8 15 __fo"
                        "r_begin:339 160 8 13 __for_end:339 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 "
                        "32 9 <unknown> 448 32 9 <unknown> 512 64 14 map_config:333";
  *(_QWORD *)(v3 + 16) = ActivityHideAndSeekExcelConfigMgr::rewriteHideAndSeekMatchExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->hide_and_seek_match_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HideAndSeekMatchExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::HideAndSeekMatchExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::HideAndSeekMatchExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::HideAndSeekMatchExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false> *)(v3 + 96)) )
      break;
    v52 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::HideAndSeekMatchExcelConfig>(v52);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig> >::type *)std::get<1ul,unsigned int const,data::HideAndSeekMatchExcelConfig>(v52);
    v7 = (_DWORD *)(((v3 + 512) >> 3) + 2147450880);
    *v7 = 0;
    v7[1] = 0;
    HideAndSeekMapConfig::HideAndSeekMapConfig((HideAndSeekMapConfig *const)(v3 + 512));
    if ( !std::vector<data::MatchCond>::size(&config->cond) )
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
        "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
        "rewriteHideAndSeekMatchExcelConfig",
        336);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AA60CA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_66;
    }
    __for_range_0 = &config->cond;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::MatchCond>::const_iterator *)(v3 + 128) = std::vector<data::MatchCond>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::MatchCond>::const_iterator *)(v3 + 160) = std::vector<data::MatchCond>::end(__for_range_0);
    while ( 1 )
    {
      v11 = (std::tuple_element<0,std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig> >::type *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<data::MatchCond const*,std::vector<data::MatchCond>>(
              (const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *)(v3 + 160)) )
      {
        v20 = 1;
        goto LABEL_43;
      }
      match_cond = __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&match_cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&match_cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&match_cond->type);
      }
      type = match_cond->type;
      if ( type == MATCH_LIMIT_TYPE_MAP_UNLOCK )
        break;
      if ( type == MATCH_LIMIT_TYPE_QUEST_FINISH )
      {
        p_quest_to_map_set_map = &this->quest_to_map_set_map;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&match_cond->param);
        }
        param = match_cond->param;
        v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v23 != 0 && v23 <= 3 )
        {
          param = v3 + 48;
          LOBYTE(v11) = v23 != 0;
          __asan_report_store4(v3 + 48, v11);
        }
        *(_DWORD *)(v3 + 48) = param;
        v24 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                p_quest_to_map_set_map,
                (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
        v25 = std::set<unsigned int>::insert(v24, id);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( !v25.second )
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
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "rewriteHideAndSeekMatchExcelConfig",
            356);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v26, (const char (*)[37])byte_1AA60D00);
          v11 = id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v20 = 0;
          goto LABEL_43;
        }
      }
LABEL_41:
      __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator++((__gnu_cxx::__normal_iterator<const data::MatchCond*,std::vector<data::MatchCond> > *const)(v3 + 128));
    }
    p_area_to_map_set_map = &this->area_to_map_set_map;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_cond->param >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&match_cond->param);
    }
    v14 = match_cond->param;
    v15 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      v14 = v3 + 32;
      LOBYTE(v11) = v15 != 0;
      __asan_report_store4(v3 + 32, v11);
    }
    *(_DWORD *)(v3 + 32) = v14;
    v16 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            p_area_to_map_set_map,
            (std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
    v17 = std::set<unsigned int>::insert(v16, id);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v17.second )
      goto LABEL_41;
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
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "rewriteHideAndSeekMatchExcelConfig",
      347);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v18, (const char (*)[37])byte_1AA60D00);
    v11 = id;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_43:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->scene_id);
      }
      scene_id = config->scene_id;
      v29 = *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000);
      if ( v29 != 0 && v29 <= 3 )
      {
        LOBYTE(v11) = v29 != 0;
        __asan_report_store4(v3 + 512, v11);
      }
      *(_DWORD *)(v3 + 512) = scene_id;
      v30 = (((_BYTE)config + 44) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->group_id);
      }
      group_id = config->group_id;
      v32 = *(_BYTE *)(((v3 + 516) >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)(((v3 + 4) & 7) + 3) >= v32 )
      {
        LOBYTE(v30) = v32 != 0;
        __asan_report_store4(v3 + 516, v30);
      }
      *(_DWORD *)(v3 + 516) = group_id;
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 520), &config->transport_point_list);
      p_duration_list = &config->duration_list;
      std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 544), &config->duration_list);
      if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->gallery_id);
      }
      gallery_id = config->gallery_id;
      v35 = *(_BYTE *)(((v3 + 568) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(p_duration_list) = v35 != 0;
        __asan_report_store4(v3 + 568, p_duration_list);
      }
      *(_DWORD *)(v3 + 568) = gallery_id;
      v36 = std::move<HideAndSeekMapConfig &>((HideAndSeekMapConfig *)(v3 + 512));
      v39 = std::unordered_map<unsigned int,HideAndSeekMapConfig>::emplace<unsigned int const&,HideAndSeekMapConfig>(
              &this->map_config_map,
              id,
              v36,
              v37,
              v38);
      if ( !v39.second )
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
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "rewriteHideAndSeekMatchExcelConfig",
          372);
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v42 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v41, (const char (*)[37])byte_1AA60D00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
      else
      {
        matched = std::unordered_map<unsigned int,data::MatchLimitExcelConfig>::emplace<unsigned int const&,data::HideAndSeekMatchExcelConfig const&>(
                    &txt_config_mgr->match_config_mgr.match_limit_config_map,
                    id,
                    config,
                    (const unsigned int *)&txt_config_mgr->match_config_mgr.match_limit_config_map,
                    v40);
        if ( !matched.second )
        {
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
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "rewriteHideAndSeekMatchExcelConfig",
            377);
          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v45 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v44, (const char (*)[32])byte_1AA60D60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v10 = 0;
        }
        else
        {
          std::vector<unsigned int>::push_back(&this->map_vec, id);
          v10 = 1;
        }
      }
    }
    else
    {
      v10 = 0;
    }
LABEL_66:
    HideAndSeekMapConfig::~HideAndSeekMapConfig((HideAndSeekMapConfig *const)(v3 + 512));
    v46 = (_DWORD *)(((v3 + 512) >> 3) + 2147450880);
    *v46 = -117901064;
    v46[1] = -117901064;
    if ( v10 != 1 )
    {
      v47 = 0;
      goto LABEL_70;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::HideAndSeekMatchExcelConfig>,false,false> *const)(v3 + 64));
  }
  v47 = 1;
LABEL_70:
  if ( v47 == 1 )
    v2 = 0;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return v2;
};

// Line 386: range 0000000012C52810-0000000012C5429C
int32_t __cdecl ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekMatchExcelConfig(
        ActivityHideAndSeekExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int v6; // eax
  char *v7; // rsi
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  __int64 group_id; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  char *v28; // rsi
  unsigned int *v29; // rax
  int *v30; // rdx
  int v31; // ecx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  char *v48; // rsi
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  int32_t v54; // ebx
  int32_t ret; // [rsp+1Ch] [rbp-4F4h]
  std::unordered_map<unsigned int,HideAndSeekMapConfig> *__for_range; // [rsp+20h] [rbp-4F0h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_1; // [rsp+28h] [rbp-4E8h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_2; // [rsp+30h] [rbp-4E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v61; // [rsp+38h] [rbp-4D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *quest_id; // [rsp+40h] [rbp-4D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v63; // [rsp+50h] [rbp-4C0h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *area_id; // [rsp+58h] [rbp-4B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::reference v65; // [rsp+68h] [rbp-4A8h]
  std::tuple_element<0,std::pair<unsigned int const,HideAndSeekMapConfig> >::type *id; // [rsp+70h] [rbp-4A0h]
  std::tuple_element<1,const std::pair<unsigned int const,HideAndSeekMapConfig> >::type *config; // [rsp+78h] [rbp-498h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+80h] [rbp-490h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+88h] [rbp-488h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+90h] [rbp-480h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+98h] [rbp-478h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+A0h] [rbp-470h]
  char v73[1120]; // [rsp+B0h] [rbp-460h] BYREF

  v2 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1088LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 4 12 point_id:429 64 8 15 __for_begin:393 96 8 13 __for_end:393 128 8 15 __for_begin:429 1"
                        "60 8 13 __for_end:429 192 8 15 __for_begin:462 224 8 13 __for_end:462 256 8 15 __for_begin:471 2"
                        "88 8 13 __for_end:471 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown"
                        "> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown>"
                        " 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::checkHideAndSeekMatchExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -202116109;
  if ( std::unordered_map<unsigned int,HideAndSeekMapConfig>::empty(&this->map_config_map) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
      "checkHideAndSeekMatchExcelConfig",
      389);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v5, (const char (*)[50])byte_1AA60FC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v6 = -1;
  }
  else
  {
    ret = 0;
    __for_range = &this->map_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, txt_config_mgr);
    *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::end(__for_range);
    while ( 1 )
    {
      v7 = (char *)(v2 + 96);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,HideAndSeekMapConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v2 + 64),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v2 + 96)) )
        break;
      v65 = std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false> *const)(v2 + 64));
      id = std::get<0ul,unsigned int const,HideAndSeekMapConfig>(v65);
      config = (std::tuple_element<1,const std::pair<unsigned int const,HideAndSeekMapConfig> >::type *)std::get<1ul,unsigned int const,HideAndSeekMapConfig>(v65);
      p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, config->scene_id);
      if ( scene_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->group_id);
        }
        group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, config->group_id);
        if ( group_info_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->group_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&config->group_id);
          }
          group_id = config->group_id;
          group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_config_ptr, group_id);
          if ( group_script_config_ptr )
          {
            if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(
                &group_info_config_ptr->is_dynamic_load,
                group_id,
                &group_info_config_ptr->is_dynamic_load);
            if ( !group_info_config_ptr->is_dynamic_load )
            {
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                "checkHideAndSeekMatchExcelConfig",
                419);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v23 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      v22,
                      (const char (*)[60])byte_1AA610E0);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->group_id);
              v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v24,
                      (const char (*)[10])", map_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
              *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else if ( std::vector<unsigned int>::size(&config->transport_point_vec) > 3 )
            {
              __for_range_0 = &config->transport_point_vec;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 128, group_id);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 160, group_id);
              *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
              while ( 1 )
              {
                v28 = (char *)(v2 + 160);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
                  break;
                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                v29 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
                v30 = (int *)v29;
                if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v29);
                }
                v31 = *v30;
                v32 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                if ( v32 != 0 && v32 <= 3 )
                {
                  LOBYTE(v28) = v32 != 0;
                  __asan_report_store4(v2 + 48, v28);
                }
                *(_DWORD *)(v2 + 48) = v31;
                if ( !GroupScriptConfig::findPointConfig(group_script_config_ptr, *(unsigned int *)(v2 + 48)) )
                {
                  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 704, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 704),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                    "checkHideAndSeekMatchExcelConfig",
                    434);
                  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 704),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v34 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          v33,
                          (const char (*)[45])byte_1AA611A0);
                  v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
                  v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v35,
                          (const char (*)[12])", point_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v2 + 48));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
                  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
              }
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( std::vector<unsigned int>::size(&config->stage_duration_vec) > 4 )
              {
                p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->gallery_id);
                }
                gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                       p_gallery_config_mgr,
                                       config->gallery_id);
                if ( gallery_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gallery_config_ptr->type);
                  }
                  if ( gallery_config_ptr->type != GALLERY_TYPE_HIDE_AND_SEEK )
                  {
                    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 896, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 896),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                      "checkHideAndSeekMatchExcelConfig",
                      456);
                    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 896),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v45 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                            v44,
                            (const char (*)[65])byte_1AA61280);
                    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v45,
                            &config->gallery_id);
                    v47 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v46,
                            (const char (*)[10])", map_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
                    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 832, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 832),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                    "checkHideAndSeekMatchExcelConfig",
                    450);
                  v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 832),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v41 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          v40,
                          (const char (*)[53])byte_1AA600E0);
                  v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &config->gallery_id);
                  v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          v42,
                          (const char (*)[10])", map_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
                  *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
              {
                *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 768, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 768),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                  "checkHideAndSeekMatchExcelConfig",
                  441);
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 768),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v38 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                        v37,
                        (const char (*)[74])byte_1AA61200);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
                *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 640, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 640),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
                "checkHideAndSeekMatchExcelConfig",
                425);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 640),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      v26,
                      (const char (*)[54])byte_1AA61140);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
              *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
              "checkHideAndSeekMatchExcelConfig",
              413);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v18,
                    (const char (*)[41])byte_1AA61080);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->group_id);
            v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])", map_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
            "checkHideAndSeekMatchExcelConfig",
            406);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v13, (const char (*)[41])byte_1AA61080);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->group_id);
          v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])", map_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkHideAndSeekMatchExcelConfig",
          399);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1AA61020);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->scene_id);
        v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])", map_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false> *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &this->area_to_map_set_map;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v7);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v7);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_1);
    while ( 1 )
    {
      v48 = (char *)(v2 + 224);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 224)) )
        break;
      v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 192));
      area_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v63);
      std::get<1ul,unsigned int const,std::set<unsigned int>>(v63);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WorldAreaConfig *> const,unsigned int>(
              &txt_config_mgr->world_area_config_mgr.first_level_area_config_map,
              area_id) )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkHideAndSeekMatchExcelConfig",
          466);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v50 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v49, (const char (*)[74])byte_1AA61300);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, area_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    __for_range_2 = &this->quest_to_map_set_map;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v48);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v48);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_2);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 288)) )
    {
      v61 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 256));
      quest_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v61);
      std::get<1ul,unsigned int const,std::set<unsigned int>>(v61);
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(quest_id);
      }
      if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *quest_id) )
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1024, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1024),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityHideAndSeekExcelConfig.cpp",
          "checkHideAndSeekMatchExcelConfig",
          475);
        v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v53 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v52, (const char (*)[70])byte_1AA61380);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, quest_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 256));
    }
    v6 = ret;
  }
  v54 = v6;
  if ( v73 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862733) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450924 - (((_DWORD)v4 + 2147450932) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1088LL, v73);
  }
  return v54;
};

// Line 484: range 0000000012C5429E-0000000012C543D5
__int64 __fastcall ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex(
        const ActivityHideAndSeekExcelConfigMgr *const this,
        uint32_t skill_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  __int64 result; // rax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 skill_config_id:483";
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::getSkillGalleryIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = skill_config_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &this->skill_to_ability_group_map,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,unsigned int>::at(
           &this->skill_to_ability_group_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = (unsigned int *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    result = *v6;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 493: range 0000000012C543D6-0000000012C54597
const HideAndSeekDetailConfig *__fastcall ActivityHideAndSeekExcelConfigMgr::getActivityDetailConfig(
        const ActivityHideAndSeekExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,HideAndSeekDetailConfig> *p_activity_detail_config_map; // rdx
  std::unordered_map<unsigned int,HideAndSeekDetailConfig> *v6; // rdx
  bool v7; // al
  const HideAndSeekDetailConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:492 64 8 8 iter:494 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::getActivityDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_detail_config_map = &this->activity_detail_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::find(
                                                                                             p_activity_detail_config_map,
                                                                                             (const std::unordered_map<unsigned int,HideAndSeekDetailConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_detail_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,HideAndSeekDetailConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,HideAndSeekDetailConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekDetailConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekDetailConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekDetailConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 503: range 0000000012C54598-0000000012C54759
const HideAndSeekMapConfig *__fastcall ActivityHideAndSeekExcelConfigMgr::getMapConfig(
        const ActivityHideAndSeekExcelConfigMgr *const this,
        __int64 map_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,HideAndSeekMapConfig> *p_map_config_map; // rdx
  std::unordered_map<unsigned int,HideAndSeekMapConfig> *v6; // rdx
  bool v7; // al
  const HideAndSeekMapConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 map_id:502 64 8 8 iter:504 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityHideAndSeekExcelConfigMgr::getMapConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = map_id;
  p_map_config_map = &this->map_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, map_id);
  *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::find(
                                                                                          p_map_config_map,
                                                                                          (const std::unordered_map<unsigned int,HideAndSeekMapConfig>::key_type *)(v2 + 48));
  v6 = &this->map_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,HideAndSeekMapConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,HideAndSeekMapConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,HideAndSeekMapConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HideAndSeekMapConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,HideAndSeekMapConfig>,false,false> *const)(v2 + 64))->second;
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

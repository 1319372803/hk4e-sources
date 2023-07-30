// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TrialAvatarExcelConfig.cpp

// Line 21: range 000000000CB2E49E-000000000CB2E6A9
int32_t __cdecl TrialAvatarExcelConfigMgr::rewriteConfig(
        TrialAvatarExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = TrialAvatarExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TrialAvatarExcelConfigMgr::rewriteTrialAvatarExcelConfig(this, txt_config_mgr)
    || TrialAvatarExcelConfigMgr::rewriteTrialAvatarTemplateExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "rewriteConfig",
      25);
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

// Line 33: range 000000000CB2E6AA-000000000CB2E8B5
int32_t __cdecl TrialAvatarExcelConfigMgr::checkConfig(
        TrialAvatarExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = TrialAvatarExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TrialAvatarExcelConfigMgr::checkTrialAvatarExcelConfig(this, txt_config_mgr)
    || TrialAvatarExcelConfigMgr::checkTrialAvatarTemplateExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "checkConfig",
      37);
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

// Line 46: range 000000000CB2E8B6-000000000CB2EB2B
const data::TrialAvatarTemplateExcelConfig *__fastcall TrialAvatarExcelConfigMgr::findTrialAvatarTemplateConfig(
        const TrialAvatarExcelConfigMgr *const this,
        __int64 trial_avatar_level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *p_trial_avatar_template_config_map; // rdx
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *v6; // rdx
  bool v7; // al
  const data::TrialAvatarTemplateExcelConfig *result; // rax
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *v9; // rdx
  bool v10; // al
  char v11[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 21 trial_avatar_level:45 64 8 7 iter:47 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TrialAvatarExcelConfigMgr::findTrialAvatarTemplateConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = trial_avatar_level;
  p_trial_avatar_template_config_map = &this->trial_avatar_template_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, trial_avatar_level);
  *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::upper_bound(
                                                                                                p_trial_avatar_template_config_map,
                                                                                                (const std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->trial_avatar_template_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::begin(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->trial_avatar_template_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 64))->second;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 61: range 000000000CB2EB2C-000000000CB30497
int32_t __cdecl TrialAvatarExcelConfigMgr::rewriteTrialAvatarExcelConfig(
        TrialAvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  __int64 v12; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // al
  __int64 v17; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rdi
  uint32_t level; // edx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  __int64 v30; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v31; // rax
  uint32_t *v32; // rdx
  uint32_t v33; // ecx
  char v34; // al
  __int64 v35; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v36; // rax
  uint32_t *v37; // rdx
  uint32_t v38; // ecx
  char v39; // dl
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rdi
  uint32_t v41; // edx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  bool v46; // r15
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  bool v49; // r15
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  bool v52; // r15
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-454h]
  const std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >> *template_placeholder_name_map; // [rsp+30h] [rbp-450h]
  std::pair<std::string,std::string > *template_placeholder_str; // [rsp+38h] [rbp-448h]
  data::TrialAvatarExcelConfigMap *__for_range; // [rsp+40h] [rbp-440h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::reference __in; // [rsp+48h] [rbp-438h]
  const unsigned int *trial_avatar_id; // [rsp+50h] [rbp-430h]
  std::tuple_element<1,std::pair<unsigned int const,data::TrialAvatarExcelConfig> >::type *trial_avatar_config; // [rsp+58h] [rbp-428h]
  const std::vector<unsigned int> *avatar_param_vec; // [rsp+60h] [rbp-420h]
  const std::vector<unsigned int> *weapon_param_vec; // [rsp+68h] [rbp-418h]
  char v68[1040]; // [rsp+70h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 7 iter:63 128 8 9 <unknown> 160 8 14 "
                        "__for_begin:72 192 8 12 __for_end:72 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 41"
                        "6 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736"
                        " 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TrialAvatarExcelConfigMgr::rewriteTrialAvatarExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -202116109;
  template_placeholder_name_map = data::getTrialAvatarTemplatePlaceholderTypeEnumMap[abi:cxx11]();
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 96) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::begin(template_placeholder_name_map);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 128) = std::map<data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string>>::end(template_placeholder_name_map);
  v6 = (char *)(v3 + 128);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v3 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
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
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "rewriteTrialAvatarExcelConfig",
      66);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v8,
      (const char (*)[39])"template_placeholder_name_map is empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
  }
  else
  {
    template_placeholder_str = &std::_Rb_tree_const_iterator<std::pair<data::TrialAvatarTemplatePlaceholderType const,std::pair<std::string,std::string>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::TrialAvatarTemplatePlaceholderType,std::pair<std::string,std::string > > > *const)(v3 + 96))->second;
    ret = 0;
    __for_range = &this->trial_avatar_excel_config_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::begin(__for_range);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::end(__for_range);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v3 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v3 + 192)) )
      {
        v11 = 1;
        goto LABEL_90;
      }
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v3 + 160));
      trial_avatar_id = std::get<0ul,unsigned int const,data::TrialAvatarExcelConfig>(__in);
      trial_avatar_config = std::get<1ul,unsigned int const,data::TrialAvatarExcelConfig>(__in);
      avatar_param_vec = &trial_avatar_config->trial_avatar_param_list;
      if ( std::vector<unsigned int>::size(&trial_avatar_config->trial_avatar_param_list) <= 1 )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "rewriteTrialAvatarExcelConfig",
          77);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v9,
                (const char (*)[50])"trial_avatar_param not valid, trial_avatar_param:");
        common::milog::MiLogStream::operator<<<unsigned int>(v10, avatar_param_vec);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
        v11 = 0;
        goto LABEL_90;
      }
      v12 = 0LL;
      v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  avatar_param_vec,
                                                                                                  0LL);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(&trial_avatar_config->avatar.avatar_id, v12);
      }
      trial_avatar_config->avatar.avatar_id = v15;
      v17 = 1LL;
      v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  avatar_param_vec,
                                                                                                  1uLL);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.level >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)trial_avatar_config + 60) & 7) + 3) >= v21 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(&trial_avatar_config->avatar.level, v17);
      }
      trial_avatar_config->avatar.level = v20;
      p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
      level = trial_avatar_config->avatar.level;
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_avatar_config_mgr = (AvatarExcelConfigMgr *)&trial_avatar_config->avatar.avatar_id;
        __asan_report_load4(&trial_avatar_config->avatar.avatar_id);
      }
      if ( (unsigned int)AvatarExcelConfigMgr::findPromoteLevelByAvatarIdAndLevel(
                           p_avatar_config_mgr,
                           trial_avatar_config->avatar.avatar_id,
                           level,
                           (unsigned __int64)&trial_avatar_config->avatar.promote_level) )
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
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "rewriteTrialAvatarExcelConfig",
          85);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v24,
                (const char (*)[22])"invalid avatar level:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                &trial_avatar_config->avatar.level);
        v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v26,
                (const char (*)[18])" trial_avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
        v11 = 0;
        goto LABEL_90;
      }
      weapon_param_vec = &trial_avatar_config->trial_weapon_param_list;
      if ( std::vector<unsigned int>::size(&trial_avatar_config->trial_weapon_param_list) <= 1 )
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
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "rewriteTrialAvatarExcelConfig",
          92);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v28,
                (const char (*)[50])"trial_weapon_param not valid, trial_weapon_param:");
        common::milog::MiLogStream::operator<<<unsigned int>(v29, weapon_param_vec);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        v2 = -1;
        v11 = 0;
        goto LABEL_90;
      }
      v30 = 0LL;
      v31 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  weapon_param_vec,
                                                                                                  0LL);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      v33 = *v32;
      v34 = *(_BYTE *)(((unsigned __int64)&trial_avatar_config->weapon.weapon_id >> 3) + 0x7FFF8000);
      if ( v34 != 0 && v34 <= 3 )
      {
        LOBYTE(v30) = v34 != 0;
        __asan_report_store4(&trial_avatar_config->weapon.weapon_id, v30);
      }
      trial_avatar_config->weapon.weapon_id = v33;
      v35 = 1LL;
      v36 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  weapon_param_vec,
                                                                                                  1uLL);
      v37 = v36;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      v38 = *v37;
      v39 = *(_BYTE *)(((unsigned __int64)&trial_avatar_config->weapon.level >> 3) + 0x7FFF8000);
      if ( v39 != 0 && (char)((((_BYTE)trial_avatar_config + 84) & 7) + 3) >= v39 )
      {
        LOBYTE(v35) = v39 != 0;
        __asan_report_store4(&trial_avatar_config->weapon.level, v35);
      }
      trial_avatar_config->weapon.level = v38;
      p_weapon_config_mgr = &txt_config_mgr->weapon_config_mgr;
      v41 = trial_avatar_config->weapon.level;
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->weapon.weapon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config->weapon.weapon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_weapon_config_mgr = (WeaponExcelConfigMgr *)&trial_avatar_config->weapon.weapon_id;
        __asan_report_load4(&trial_avatar_config->weapon.weapon_id);
      }
      if ( WeaponExcelConfigMgr::findPromoteLevelByWeaponIdAndLevel(
             p_weapon_config_mgr,
             trial_avatar_config->weapon.weapon_id,
             v41,
             &trial_avatar_config->weapon.promote_level) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)trial_avatar_config - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_core_proud_skill_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_store4(
          &trial_avatar_config->trial_core_proud_skill_level,
          (((_BYTE)trial_avatar_config - 4) & 7u) + 3);
      }
      trial_avatar_config->trial_core_proud_skill_level = 0;
      if ( std::operator==<char>(&trial_avatar_config->trial_reliquary_list_str, &template_placeholder_str->first) )
      {
        if ( *(char *)(((unsigned __int64)&trial_avatar_config->is_trial_reliquary_list_use_template >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(
            &trial_avatar_config->is_trial_reliquary_list_use_template,
            template_placeholder_str,
            &trial_avatar_config->is_trial_reliquary_list_use_template);
        trial_avatar_config->is_trial_reliquary_list_use_template = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 544),
          ";",
          (const std::allocator<char> *)(v3 + 48));
        v46 = common::tools::StringUtils::splitToList<unsigned int>(
                &trial_avatar_config->trial_reliquary_list_str,
                (const std::string *)(v3 + 544),
                &trial_avatar_config->trial_reliquary_list,
                0) != 0;
        std::string::~string((void *)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v46 )
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
            "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
            "rewriteTrialAvatarExcelConfig",
            114);
          v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v48 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v47, (const char (*)[52])byte_1A1297E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, trial_avatar_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      if ( std::operator==<char>(&trial_avatar_config->trial_talent_list_str, &template_placeholder_str->first) )
      {
        if ( *(char *)(((unsigned __int64)&trial_avatar_config->is_trial_talent_list_use_template >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(
            &trial_avatar_config->is_trial_talent_list_use_template,
            template_placeholder_str,
            &trial_avatar_config->is_trial_talent_list_use_template);
        trial_avatar_config->is_trial_talent_list_use_template = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 672),
          ";",
          (const std::allocator<char> *)(v3 + 64));
        v49 = common::tools::StringUtils::splitToList<unsigned int>(
                &trial_avatar_config->trial_talent_list_str,
                (const std::string *)(v3 + 672),
                &trial_avatar_config->trial_talent_list,
                0) != 0;
        std::string::~string((void *)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 64);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v49 )
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
            "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
            "rewriteTrialAvatarExcelConfig",
            125);
          v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v51 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v50, (const char (*)[58])byte_1A129840);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, trial_avatar_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
          *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      if ( std::operator==<char>(
             &trial_avatar_config->trial_inherent_proud_skill_list_str,
             &template_placeholder_str->first) )
      {
        if ( *(char *)(((unsigned __int64)&trial_avatar_config->is_trial_inherent_proud_skill_list_use_template >> 3)
                     + 0x7FFF8000) < 0 )
          __asan_report_store1(
            &trial_avatar_config->is_trial_inherent_proud_skill_list_use_template,
            template_placeholder_str,
            &trial_avatar_config->is_trial_inherent_proud_skill_list_use_template);
        trial_avatar_config->is_trial_inherent_proud_skill_list_use_template = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 800),
          ";",
          (const std::allocator<char> *)(v3 + 80));
        v52 = common::tools::StringUtils::splitToList<unsigned int>(
                &trial_avatar_config->trial_inherent_proud_skill_list_str,
                (const std::string *)(v3 + 800),
                &trial_avatar_config->trial_inherent_proud_skill_list,
                0) != 0;
        std::string::~string((void *)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 80);
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v52 )
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
            "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
            "rewriteTrialAvatarExcelConfig",
            136);
          v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v54 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v53, (const char (*)[67])byte_1A1298A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, trial_avatar_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      if ( std::operator==<char>(&trial_avatar_config->trial_avatar_skill_level_str, &template_placeholder_str->first) )
      {
        if ( *(char *)(((unsigned __int64)&trial_avatar_config->is_trial_avatar_skill_level_use_template >> 3)
                     + 0x7FFF8000) < 0 )
          __asan_report_store1(
            &trial_avatar_config->is_trial_avatar_skill_level_use_template,
            template_placeholder_str,
            &trial_avatar_config->is_trial_avatar_skill_level_use_template);
        trial_avatar_config->is_trial_avatar_skill_level_use_template = 1;
      }
      else if ( common::tools::StringUtils::strToNum<unsigned int>(
                  &trial_avatar_config->trial_avatar_skill_level_str,
                  &trial_avatar_config->trial_avatar_skill_level,
                  1) )
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
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "rewriteTrialAvatarExcelConfig",
          147);
        v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 928),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v56 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v55, (const char (*)[64])byte_1A129920);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
        *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "rewriteTrialAvatarExcelConfig",
      100);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v43 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v42,
            (const char (*)[22])"invalid weapon level:");
    v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v43,
            &trial_avatar_config->weapon.level);
    v45 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v44, (const char (*)[18])" trial_avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, trial_avatar_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    v2 = -1;
    v11 = 0;
LABEL_90:
    if ( v11 == 1 )
      v2 = ret;
  }
  result = v2;
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 157: range 000000000CB30498-000000000CB31E81
int32_t __cdecl TrialAvatarExcelConfigMgr::checkTrialAvatarExcelConfig(
        TrialAvatarExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  __int64 avatar_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  char *v13; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int v21; // edx
  __int64 v22; // rsi
  uint32_t skill_depot_id; // ecx
  char v24; // al
  uint32_t trial_skill_depot_id; // ecx
  char v26; // al
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  const std::vector<unsigned int> *p_cand_skill_depot_ids; // rcx
  std::vector<unsigned int>::size_type v32; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v33; // rax
  uint32_t *v34; // rdx
  uint32_t v35; // ecx
  char v36; // dl
  uint32_t v37; // ecx
  char v38; // al
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  const unsigned int *v45; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v46; // rax
  int *v47; // rdx
  int v48; // ecx
  char v49; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  int v55; // edx
  char *v56; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v57; // rax
  int *v58; // rdx
  int v59; // ecx
  char v60; // al
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  int v66; // edx
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rdx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  int v74; // eax
  std::vector<unsigned int>::size_type v76; // [rsp+8h] [rbp-408h]
  std::vector<unsigned int>::size_type v77; // [rsp+8h] [rbp-408h]
  std::vector<data::ProudSkillOpenConfig>::size_type v78; // [rsp+8h] [rbp-408h]
  bool is_follow_player_default_avatar; // [rsp+2Bh] [rbp-3E5h]
  data::TrialAvatarExcelConfigMap *__for_range; // [rsp+30h] [rbp-3E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-3D8h]
  const unsigned int *trial_avatar_id; // [rsp+40h] [rbp-3D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::TrialAvatarExcelConfig> >::type *trial_avatar_config; // [rsp+48h] [rbp-3C8h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+50h] [rbp-3C0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-3B8h]
  const data::AvatarSkillDepotExcelConfig *depot_config_ptr; // [rsp+60h] [rbp-3B0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-3A8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-3A0h]
  char v90[912]; // [rsp+80h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 32 4 22 trial_reliquary_id:169 48 4 18 skill_depot_id:178 64 4 16 talent_index:206 80 4 21 pr"
                        "oud_skill_index:217 96 8 15 __for_begin:158 128 8 13 __for_end:158 160 8 15 __for_begin:169 192 "
                        "8 13 __for_end:169 224 8 15 __for_begin:206 256 8 13 __for_end:206 288 8 15 __for_begin:217 320 "
                        "8 13 __for_end:217 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 6"
                        "08 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TrialAvatarExcelConfigMgr::checkTrialAvatarExcelConfig;
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
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -202116109;
  __for_range = &this->trial_avatar_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TrialAvatarExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false> *)(v3 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v3 + 96));
    trial_avatar_id = std::get<0ul,unsigned int const,data::TrialAvatarExcelConfig>(__in);
    trial_avatar_config = std::get<1ul,unsigned int const,data::TrialAvatarExcelConfig>(__in);
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config->avatar.avatar_id);
    }
    avatar_id = trial_avatar_config->avatar.avatar_id;
    avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, avatar_id);
    if ( !avatar_config_ptr )
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
        "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
        "checkTrialAvatarExcelConfig",
        163);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v8,
             (const char (*)[29])"avatar not found, avatar_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              &trial_avatar_config->avatar.avatar_id);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" trial_avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, trial_avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_132;
    }
    __for_range_0 = &trial_avatar_config->trial_reliquary_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, avatar_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, avatar_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v21 = 1;
        goto LABEL_32;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(v3 + 32, v13);
      }
      *(_DWORD *)(v3 + 32) = v16;
      if ( !data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig(this, *(unsigned int *)(v3 + 32)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "checkTrialAvatarExcelConfig",
      173);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])byte_1A129BE0);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v20, (const char (*)[22])byte_1A129C20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v21 = 0;
LABEL_32:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v12 = 0;
      goto LABEL_132;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v22 = (((_BYTE)avatar_config_ptr + 60) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->skill_depot_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&avatar_config_ptr->skill_depot_id);
    }
    skill_depot_id = avatar_config_ptr->skill_depot_id;
    v24 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      LOBYTE(v22) = v24 != 0;
      __asan_report_store4(v3 + 48, v22);
    }
    *(_DWORD *)(v3 + 48) = skill_depot_id;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->avatar_identity_type);
    }
    if ( avatar_config_ptr->avatar_identity_type )
      goto LABEL_47;
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)trial_avatar_config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&trial_avatar_config->trial_skill_depot_id);
    }
    trial_skill_depot_id = trial_avatar_config->trial_skill_depot_id;
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&trial_avatar_config->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&trial_avatar_config->avatar.avatar_id);
    }
    if ( trial_skill_depot_id != trial_avatar_config->avatar.avatar_id )
LABEL_47:
      v26 = 0;
    else
      v26 = 1;
    is_follow_player_default_avatar = v26;
    if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)trial_avatar_config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&trial_avatar_config->trial_skill_depot_id);
    }
    if ( trial_avatar_config->trial_skill_depot_id && !is_follow_player_default_avatar )
    {
      v76 = --trial_avatar_config->trial_skill_depot_id;
      if ( v76 >= std::vector<unsigned int>::size(&avatar_config_ptr->cand_skill_depot_ids) )
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
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "checkTrialAvatarExcelConfig",
          188);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v27, (const char (*)[45])byte_1A129C60);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &trial_avatar_config->trial_skill_depot_id);
        v30 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v29,
                (const char (*)[18])" trial_avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_132;
      }
      p_cand_skill_depot_ids = &avatar_config_ptr->cand_skill_depot_ids;
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)trial_avatar_config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&trial_avatar_config->trial_skill_depot_id);
      }
      v32 = trial_avatar_config->trial_skill_depot_id;
      v33 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  p_cand_skill_depot_ids,
                                                                                                  v32);
      v34 = v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v33);
      }
      v35 = *v34;
      v36 = *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_skill_depot_id >> 3) + 0x7FFF8000);
      if ( v36 != 0 && (char)((((_BYTE)trial_avatar_config + 124) & 7) + 3) >= v36 )
      {
        LOBYTE(v32) = v36 != 0;
        __asan_report_store4(&trial_avatar_config->trial_skill_depot_id, v32);
      }
      trial_avatar_config->trial_skill_depot_id = v35;
      v37 = trial_avatar_config->trial_skill_depot_id;
      v38 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
      {
        LOBYTE(v32) = v38 != 0;
        __asan_report_store4(v3 + 48, v32);
      }
      *(_DWORD *)(v3 + 48) = v37;
    }
    p_avatar_skill_config_mgr = &txt_config_mgr->avatar_skill_config_mgr;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v40 = *(unsigned int *)(v3 + 48);
    depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                         p_avatar_skill_config_mgr,
                         v40);
    if ( depot_config_ptr )
    {
      __for_range_1 = &trial_avatar_config->trial_talent_list;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v40);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v40);
      *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v45 = (const unsigned int *)(v3 + 256);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
        {
          v55 = 1;
          goto LABEL_91;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v46 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
        v47 = (int *)v46;
        if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v46);
        }
        v48 = *v47;
        v49 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v49 != 0 && v49 <= 3 )
        {
          LOBYTE(v45) = v49 != 0;
          __asan_report_store4(v3 + 64, v45);
        }
        *(_DWORD *)(v3 + 64) = v48;
        if ( !*(_DWORD *)(v3 + 64) )
          break;
        v77 = (unsigned int)(*(_DWORD *)(v3 + 64) - 1);
        if ( v77 >= std::vector<unsigned int>::size(&depot_config_ptr->talents) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      }
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
        "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
        "checkTrialAvatarExcelConfig",
        210);
      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v52 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v51,
              (const char (*)[38])"talent index not valid, talent_index:");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v3 + 64));
      v54 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v53,
              (const char (*)[18])" trial_avatar_id:");
      v45 = trial_avatar_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, trial_avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v55 = 0;
LABEL_91:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v55 == 1 )
      {
        __for_range_2 = &trial_avatar_config->trial_inherent_proud_skill_list;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v45);
        *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v45);
        *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          v56 = (char *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
          {
            v66 = 1;
            goto LABEL_113;
          }
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v57 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
          v58 = (int *)v57;
          if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v57);
          }
          v59 = *v58;
          v60 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v60 != 0 && v60 <= 3 )
          {
            LOBYTE(v56) = v60 != 0;
            __asan_report_store4(v3 + 80, v56);
          }
          *(_DWORD *)(v3 + 80) = v59;
          if ( !*(_DWORD *)(v3 + 80) )
            break;
          v78 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
          if ( v78 >= std::vector<data::ProudSkillOpenConfig>::size(&depot_config_ptr->inherent_proud_skill_opens) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
        }
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
          "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
          "checkTrialAvatarExcelConfig",
          221);
        v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v63 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                v62,
                (const char (*)[57])"inherent_proud_skill_index not valid, proud_skill_index:");
        v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v63,
                (const unsigned int *)(v3 + 80));
        v65 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v64,
                (const char (*)[18])" trial_avatar_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, trial_avatar_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v66 = 0;
LABEL_113:
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        if ( v66 == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_core_proud_skill_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)trial_avatar_config - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->trial_core_proud_skill_level >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&trial_avatar_config->trial_core_proud_skill_level);
          }
          if ( !trial_avatar_config->trial_core_proud_skill_level )
            goto LABEL_124;
          if ( *(_BYTE *)(((unsigned __int64)&depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&depot_config_ptr->core_proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&depot_config_ptr->core_proud_skill_group_id);
          }
          if ( AvatarTalentExcelConfigMgr::findProudSkillConfig(
                 &txt_config_mgr->avatar_talent_config_mgr,
                 depot_config_ptr->core_proud_skill_group_id,
                 trial_avatar_config->trial_core_proud_skill_level) )
          {
LABEL_124:
            if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config->specified_costume_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)trial_avatar_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trial_avatar_config->specified_costume_id >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&trial_avatar_config->specified_costume_id);
            }
            if ( !trial_avatar_config->specified_costume_id
              || data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
                   &txt_config_mgr->avatar_fashion_config_mgr,
                   trial_avatar_config->specified_costume_id) )
            {
              v12 = 1;
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
                "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
                "checkTrialAvatarExcelConfig",
                248);
              v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 800),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v73 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      v72,
                      (const char (*)[48])"findAvatarCostumeExcelConfig fails, costume_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v73,
                &trial_avatar_config->specified_costume_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
              *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v12 = 0;
            }
          }
          else
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
              "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
              "checkTrialAvatarExcelConfig",
              234);
            v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v68 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v67,
                    (const char (*)[40])"trial_core_proud_skill_level not valid,");
            v69 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v68,
                    (const char (*)[20])" proud_skill_level:");
            v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v69,
                    &trial_avatar_config->trial_core_proud_skill_level);
            v71 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v70,
                    (const char (*)[18])" trial_avatar_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, trial_avatar_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
        "checkTrialAvatarExcelConfig",
        200);
      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v42 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              v41,
              (const char (*)[39])"skill_depot not found, skill_depot_id:");
      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v3 + 48));
      v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v43,
              (const char (*)[18])" trial_avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, trial_avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
LABEL_132:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v74 = 0;
      goto LABEL_136;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TrialAvatarExcelConfig>,false,false> *const)(v3 + 96));
  }
  v74 = 1;
LABEL_136:
  if ( v74 == 1 )
    v2 = 0;
  if ( v90 == (char *)v3 )
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

// Line 258: range 000000000CB31E82-000000000CB321BF
int32_t __cdecl TrialAvatarExcelConfigMgr::rewriteTrialAvatarTemplateExcelConfig(
        TrialAvatarExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const data::TrialAvatarTemplateExcelConfig *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  data::TrialAvatarTemplateExcelConfigVec *__for_range; // [rsp+20h] [rbp-D0h]
  const data::TrialAvatarTemplateExcelConfig *config; // [rsp+28h] [rbp-C8h]
  char v13[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:260 64 8 13 __for_end:260 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TrialAvatarExcelConfigMgr::rewriteTrialAvatarTemplateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->trial_avatar_template_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 32) = std::vector<data::TrialAvatarTemplateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 64) = std::vector<data::TrialAvatarTemplateExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::TrialAvatarTemplateExcelConfig *,std::vector<data::TrialAvatarTemplateExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig*,std::vector<data::TrialAvatarTemplateExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig*,std::vector<data::TrialAvatarTemplateExcelConfig> > *)(v2 + 64)) )
  {
    config = __gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig *,std::vector<data::TrialAvatarTemplateExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig*,std::vector<data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 32));
    v6 = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::emplace<unsigned int const&,data::TrialAvatarTemplateExcelConfig const&>(
           &this->trial_avatar_template_config_map,
           &config->trial_avatar_level,
           config,
           (const unsigned int *)&this->trial_avatar_template_config_map,
           v5);
    if ( !v6.second )
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
        "rewriteTrialAvatarTemplateExcelConfig",
        264);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v7, (const char (*)[37])byte_1A129FA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->trial_avatar_level);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig *,std::vector<data::TrialAvatarTemplateExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::TrialAvatarTemplateExcelConfig*,std::vector<data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 272: range 000000000CB321C0-000000000CB32AE4
int32_t __cdecl TrialAvatarExcelConfigMgr::checkTrialAvatarTemplateExcelConfig(
        TrialAvatarExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *p_trial_avatar_template_config_map; // rdx
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *v6; // rdx
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::pointer v11; // rax
  char v12; // dl
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t ret; // [rsp+14h] [rbp-20Ch]
  std::map<unsigned int,data::TrialAvatarTemplateExcelConfig> *__for_range; // [rsp+18h] [rbp-208h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::reference v25; // [rsp+20h] [rbp-200h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1E8h]
  char v27[480]; // [rsp+40h] [rbp-1E0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 22 trial_reliquary_id:287 64 8 8 iter:273 96 8 9 <unknown> 128 8 15 __for_begin:285 160 "
                        "8 13 __for_end:285 192 8 15 __for_begin:287 224 8 13 __for_end:287 256 32 9 <unknown> 320 32 9 <"
                        "unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TrialAvatarExcelConfigMgr::checkTrialAvatarTemplateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  p_trial_avatar_template_config_map = &this->trial_avatar_template_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 64) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::begin(p_trial_avatar_template_config_map);
  v6 = &this->trial_avatar_template_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 96) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::end(v6);
  v7 = (char *)(v2 + 96);
  v8 = std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
      "checkTrialAvatarTemplateExcelConfig",
      276);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v9, (const char (*)[31])byte_1A12A140);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = -1;
  }
  else
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 64));
    v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v12 != 0;
    if ( v12 != 0 && v12 <= 3 )
      __asan_report_load4(v11);
    if ( v11->first == 1 )
    {
      ret = 0;
      __for_range = &this->trial_avatar_template_config_map;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v7);
      *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 128) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::begin(__for_range);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v7);
      *(std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::iterator *)(v2 + 160) = std::map<unsigned int,data::TrialAvatarTemplateExcelConfig>::end(__for_range);
      while ( 1 )
      {
        v14 = (char *)(v2 + 160);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 128),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> >::_Self *)(v2 + 160)) )
          break;
        v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 128));
        std::get<0ul,unsigned int const,data::TrialAvatarTemplateExcelConfig>(v25);
        __for_range_0 = &std::get<1ul,unsigned int const,data::TrialAvatarTemplateExcelConfig>(v25)->trial_reliquary_list;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v14);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v14);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v15 = (char *)(v2 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
          v17 = (int *)v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          v18 = *v17;
          v19 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v19 != 0 && v19 <= 3 )
          {
            LOBYTE(v15) = v19 != 0;
            __asan_report_store4(v2 + 48, v15);
          }
          *(_DWORD *)(v2 + 48) = v18;
          if ( !data::TrialAvatarExcelConfigMgrBase::findTrialReliquaryExcelConfig(this, *(unsigned int *)(v2 + 48)) )
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
              "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
              "checkTrialAvatarTemplateExcelConfig",
              291);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v20,
                    (const char (*)[19])byte_1A129BE0);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v22, (const char (*)[22])byte_1A129C20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::TrialAvatarTemplateExcelConfig> > *const)(v2 + 128));
      }
      result = ret;
    }
    else
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/TrialAvatarExcelConfig.cpp",
        "checkTrialAvatarTemplateExcelConfig",
        281);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v13, (const char (*)[44])byte_1A12A180);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = -1;
    }
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

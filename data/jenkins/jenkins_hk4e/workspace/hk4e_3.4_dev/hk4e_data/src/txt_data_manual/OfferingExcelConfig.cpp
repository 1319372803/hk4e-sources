// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OfferingExcelConfig.cpp

// Line 19: range 000000001461EE76-000000001461F082
int32_t __cdecl OfferingExcelConfigMgr::rewriteConfig(OfferingExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = OfferingExcelConfigMgr::rewriteLevelUpConfig(this, txt_config_mgr);
  ret = OfferingExcelConfigMgr::rewriteVersionConfig(this, txt_config_mgr) | reta;
  if ( ret )
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
      "./src/txt_data_manual/OfferingExcelConfig.cpp",
      "rewriteConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig error!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v9 == (char *)v2 )
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

// Line 31: range 000000001461F084-000000001461F2AF
int32_t __cdecl OfferingExcelConfigMgr::checkConfig(
        OfferingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = OfferingExcelConfigMgr::checkLevelUpConfig(this, txt_config_mgr);
  retb = OfferingExcelConfigMgr::checkOpenStateConfig(this, txt_config_mgr) | reta;
  ret = OfferingExcelConfigMgr::checkVersionConfig(this, txt_config_mgr) | retb;
  if ( ret )
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
      "./src/txt_data_manual/OfferingExcelConfig.cpp",
      "checkConfig",
      38);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig error!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v10 == (char *)v2 )
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

// Line 44: range 000000001461F2B0-000000001461F7ED
int32_t __cdecl OfferingExcelConfigMgr::rewriteLevelUpConfig(
        OfferingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<data::OfferingLevelUpExcelConfig> *v6; // rdx
  data::OfferingLevelUpExcelConfig *M_current; // r14
  std::vector<data::OfferingLevelUpExcelConfig>::iterator v8; // rax
  OfferingExcelConfigMgr::rewriteLevelUpConfig::<lambda(const auto:35&, const auto:36&)> v9; // dl
  int32_t result; // eax
  data::OfferingLevelUpExcelConfigVec *__for_range; // [rsp+10h] [rbp-170h]
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *__for_range_0; // [rsp+18h] [rbp-168h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::reference __in; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *levelup_config_vec; // [rsp+30h] [rbp-150h]
  data::OfferingLevelUpExcelConfig *levelup_config_0; // [rsp+40h] [rbp-140h]
  const data::OfferingLevelUpExcelConfig *levelup_config; // [rsp+48h] [rbp-138h]
  char v17[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 11 cmp_func:49 64 8 14 __for_begin:45 96 8 12 __for_end:45 128 8 14 __for_begin:53 160 8 "
                        "12 __for_end:53 192 8 14 __for_begin:57 224 8 12 __for_end:57";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::rewriteLevelUpConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -202116352;
  __for_range = &this->offering_level_up_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::OfferingLevelUpExcelConfig>::iterator *)(v2 + 64) = std::vector<data::OfferingLevelUpExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::OfferingLevelUpExcelConfig>::iterator *)(v2 + 96) = std::vector<data::OfferingLevelUpExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !__gnu_cxx::operator!=<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 96)) )
      break;
    levelup_config = __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 64));
    v6 = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::operator[](
           &this->offering_levelup_config_map,
           &levelup_config->offering_id);
    std::vector<data::OfferingLevelUpExcelConfig>::push_back(v6, levelup_config);
    __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  __for_range_0 = &this->offering_levelup_config_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v2 + 128) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v2 + 160) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 160)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v2 + 128));
    std::get<0ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(__in);
    levelup_config_vec = std::get<1ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(__in);
    M_current = std::vector<data::OfferingLevelUpExcelConfig>::end(levelup_config_vec)._M_current;
    v8._M_current = std::vector<data::OfferingLevelUpExcelConfig>::begin(levelup_config_vec)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::OfferingLevelUpExcelConfig__std::vector_data::OfferingLevelUpExcelConfig____OfferingExcelConfigMgr::rewriteLevelUpConfig_TxtConfigMgr__::_lambda_const_auto_35__const_auto_36_____(
      v8,
      (__gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> >)M_current,
      v9);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, M_current);
    *(std::vector<data::OfferingLevelUpExcelConfig>::iterator *)(v2 + 192) = std::vector<data::OfferingLevelUpExcelConfig>::begin(levelup_config_vec);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, M_current);
    *(std::vector<data::OfferingLevelUpExcelConfig>::iterator *)(v2 + 224) = std::vector<data::OfferingLevelUpExcelConfig>::end(levelup_config_vec);
    while ( __gnu_cxx::operator!=<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 224)) )
    {
      levelup_config_0 = __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 192));
      common::tools::MiscUtils::removeEmptyElement<data::OfferingActionContent,data::OfferingActionType data::OfferingActionContent::*>(
        &levelup_config_0->action_vec,
        (data::OfferingActionType *)8);
      common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
        &levelup_config_0->consume_item_config_vec,
        (unsigned int *)8);
      __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig *,std::vector<data::OfferingLevelUpExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    std::vector<data::OfferingLevelUpExcelConfig>::empty(levelup_config_vec);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v2 + 128));
  }
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  std::vector<data::OfferingLevelUpExcelConfig>::clear(&this->offering_level_up_excel_config_vec);
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 49: range 0000000014729B78-0000000014729C17
bool __cdecl OfferingExcelConfigMgr::rewriteLevelUpConfig::_lambda_const_auto_35___const_auto_36___::operator()_data::OfferingLevelUpExcelConfig_data::OfferingLevelUpExcelConfig_(
        const OfferingExcelConfigMgr::rewriteLevelUpConfig::<lambda(const auto:35&, const auto:36&)> *const __closure,
        const data::OfferingLevelUpExcelConfig *lhs,
        const data::OfferingLevelUpExcelConfig *rhs)
{
  uint32_t level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->level);
  }
  level = lhs->level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->level);
  }
  return level < rhs->level;
};

// Line 73: range 000000001461F7EE-000000001461FF97
int32_t __cdecl OfferingExcelConfigMgr::rewriteVersionConfig(
        OfferingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // r14d
  uint32_t *p_offering_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  std::map<unsigned int,unsigned int> *p_offering_max_level_config_map; // rdx
  std::map<unsigned int,unsigned int> *v16; // rdx
  bool v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // edx
  uint32_t *p_level; // rax
  uint32_t level; // r14d
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *v23; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  uint32_t *v25; // rdx
  char v26; // cl
  int v27; // eax
  int32_t result; // eax
  data::OfferingVersionExcelConfigMap *__for_range; // [rsp+28h] [rbp-198h]
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *__for_range_0; // [rsp+30h] [rbp-190h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::reference v31; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *offering_id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *config_vec; // [rsp+48h] [rbp-178h]
  const data::OfferingLevelUpExcelConfig *last_config; // [rsp+50h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false,false>::reference v35; // [rsp+58h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OfferingVersionExcelConfig> >::type *config; // [rsp+68h] [rbp-158h]
  char v37[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 14 __for_begin:74 64 8 12 __for_end:74 96 8 14 __for_begin:78 128 8 12 __for_end:78 160 8"
                        " 7 iter:80 192 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OfferingExcelConfigMgr::rewriteVersionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->offering_version_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OfferingVersionExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::OfferingVersionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OfferingVersionExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::OfferingVersionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false> *)(v3 + 64)) )
      break;
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::OfferingVersionExcelConfig>(v35);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OfferingVersionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OfferingVersionExcelConfig>(v35);
    v7 = std::map<unsigned int,unsigned int>::operator[](&this->offering_max_level_config_map, &config->offering_id);
    v8 = (unsigned int *)std::max<unsigned int>(v7, &config->level_limit);
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    p_offering_id = &config->offering_id;
    v12 = std::map<unsigned int,unsigned int>::operator[](&this->offering_max_level_config_map, &config->offering_id);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(p_offering_id) = v14 != 0;
      __asan_report_store4(v12, p_offering_id);
    }
    *v13 = v10;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OfferingVersionExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->offering_levelup_config_map;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v6);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v3 + 128) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v3 + 128)) )
  {
    v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v3 + 96));
    offering_id = std::get<0ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v31);
    config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v31);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_offering_max_level_config_map = &this->offering_max_level_config_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 128);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::find(
                                                                     p_offering_max_level_config_map,
                                                                     offering_id);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    v16 = &this->offering_max_level_config_map;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, offering_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 192) = std::map<unsigned int,unsigned int>::end(v16);
    v17 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( !v17 )
      goto LABEL_35;
    if ( !std::vector<data::OfferingLevelUpExcelConfig>::empty(config_vec) )
    {
      last_config = std::vector<data::OfferingLevelUpExcelConfig>::back(config_vec);
      p_level = &last_config->level;
      if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_level);
      }
      level = last_config->level;
      v23 = offering_id;
      v24 = std::map<unsigned int,unsigned int>::operator[](&this->offering_max_level_config_map, offering_id);
      v25 = v24;
      v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
      if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
      {
        LOBYTE(v23) = v26 != 0;
        __asan_report_store4(v24, v23);
      }
      *v25 = level;
LABEL_35:
      v20 = 1;
      goto LABEL_36;
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
      "./src/txt_data_manual/OfferingExcelConfig.cpp",
      "rewriteVersionConfig",
      85);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            v18,
            (const char (*)[43])"offering config vec is empty, offering_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, offering_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v20 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v27 = 0;
      goto LABEL_40;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v3 + 96));
  }
  v27 = 1;
LABEL_40:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
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

// Line 96: range 000000001461FF98-00000000146216F8
int32_t __cdecl OfferingExcelConfigMgr::checkLevelUpConfig(
        OfferingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  uint32_t level; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 reward_id; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t *p_count; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  const data::OfferingActionContent *v45; // rcx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  data::OfferingOpenStateConfigMap *p_offering_open_state_config_map; // rdx
  data::OfferingOpenStateConfigMap *v50; // rdx
  bool v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  bool is_init_level; // [rsp+1Bh] [rbp-435h]
  int32_t ret; // [rsp+1Ch] [rbp-434h]
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *__for_range; // [rsp+20h] [rbp-430h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::reference v60; // [rsp+28h] [rbp-428h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *offering_id; // [rsp+30h] [rbp-420h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *levelup_config_vec; // [rsp+38h] [rbp-418h]
  const data::OfferingLevelUpExcelConfig *levelup_config; // [rsp+48h] [rbp-408h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+50h] [rbp-400h]
  const data::IdCountConfig *consume_item_config; // [rsp+58h] [rbp-3F8h]
  const std::vector<data::OfferingActionContent> *__for_range_2; // [rsp+60h] [rbp-3F0h]
  char v67[992]; // [rsp+70h] [rbp-3E0h] BYREF

  v2 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 48 4 14 last_level:100 64 8 14 __for_begin:98 96 8 12 __for_end:98 128 8 15 __for_begin:102 1"
                        "60 8 13 __for_end:102 192 8 15 __for_begin:130 224 8 13 __for_end:130 256 8 15 __for_begin:163 2"
                        "88 8 13 __for_end:163 320 8 9 <unknown> 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> "
                        "512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 8"
                        "32 32 9 <unknown> 896 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::checkLevelUpConfig;
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
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -202116109;
  ret = 0;
  __for_range = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(__for_range);
LABEL_9:
  v5 = (char *)(v2 + 96);
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 96)) )
  {
    v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v2 + 64));
    offering_id = std::get<0ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v60);
    levelup_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>(v60);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v5);
    *(_DWORD *)(v2 + 48) = 0;
    is_init_level = 1;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::OfferingLevelUpExcelConfig>::const_iterator *)(v2 + 128) = std::vector<data::OfferingLevelUpExcelConfig>::begin(levelup_config_vec);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::OfferingLevelUpExcelConfig>::const_iterator *)(v2 + 160) = std::vector<data::OfferingLevelUpExcelConfig>::end(levelup_config_vec);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<data::OfferingLevelUpExcelConfig const*,std::vector<data::OfferingLevelUpExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<const data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *)(v2 + 160)) )
      {
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        p_offering_open_state_config_map = &this->offering_open_state_config_map;
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 352, v6);
        *(std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::end(p_offering_open_state_config_map);
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        v50 = &this->offering_open_state_config_map;
        if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 320, v6);
        *(std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::find(
                                                                                                    v50,
                                                                                                    offering_id);
        v51 = std::__detail::operator==<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false> *)(v2 + 320),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false> *)(v2 + 352));
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( v51 )
        {
          ret = -1;
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
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            179);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 896),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v52, (const char (*)[13])"offering_id:");
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, offering_id);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v54, (const char (*)[23])byte_1ADC5220);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v2 + 64));
        goto LABEL_9;
      }
      levelup_config = __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig const*,std::vector<data::OfferingLevelUpExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 128));
      if ( !is_init_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)levelup_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&levelup_config->level);
        }
        level = levelup_config->level;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( level != *(_DWORD *)(v2 + 48) + 1 )
        {
          ret = -1;
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
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            108);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 384),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"offering_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, offering_id);
          v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])"level:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &levelup_config->level);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])byte_1ADC4F80);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_86;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)levelup_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->level >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&levelup_config->level);
      }
      reward_id = levelup_config->level;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, reward_id);
      *(_DWORD *)(v2 + 48) = reward_id;
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->reward_id);
      }
      if ( levelup_config->reward_id )
      {
        reward_id = levelup_config->reward_id;
        if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(&txt_config_mgr->reward_config_mgr, reward_id) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            117);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])"offering_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, offering_id);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v17, (const char (*)[25])byte_1ADC4FC0);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &levelup_config->reward_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_86;
        }
      }
      if ( !is_init_level )
      {
        if ( std::vector<data::IdCountConfig>::empty(&levelup_config->consume_item_config_vec) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            126);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])"offering_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, offering_id);
          v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])byte_1ADC5000);
          v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v24, (const char (*)[26])byte_1ADC5040);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_86;
        }
        __for_range_1 = &levelup_config->consume_item_config_vec;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, reward_id);
        *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 192) = std::vector<data::IdCountConfig>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, reward_id);
        *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 224) = std::vector<data::IdCountConfig>::end(__for_range_1);
        while ( 1 )
        {
          reward_id = v2 + 224;
          if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 224)) )
            break;
          consume_item_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 192));
          p_count = &consume_item_config->count;
          if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_count);
          }
          if ( consume_item_config->count )
          {
            p_material_config_mgr = &txt_config_mgr->material_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&consume_item_config->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&consume_item_config->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&consume_item_config->id);
            }
            if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                    p_material_config_mgr,
                    consume_item_config->id) )
            {
              ret = -1;
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
                "./src/txt_data_manual/OfferingExcelConfig.cpp",
                "checkLevelUpConfig",
                141);
              v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 640),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v32,
                      (const char (*)[13])"offering_id:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, offering_id);
              v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v34,
                      (const char (*)[11])byte_1ADC5000);
              v36 = common::milog::MiLogStream::operator<<<int,(int *)0>(v35, (const int *)(v2 + 48));
              v37 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v36,
                      (const char (*)[26])byte_1ADC50C0);
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v37,
                      &consume_item_config->id);
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])byte_1ADC5100);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
              *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
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
              "./src/txt_data_manual/OfferingExcelConfig.cpp",
              "checkLevelUpConfig",
              135);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])"offering_id:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, offering_id);
            v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v28,
                    (const char (*)[11])byte_1ADC5000);
            v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, (const int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v30, (const char (*)[30])byte_1ADC5080);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
            *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        if ( !std::vector<data::IdCountConfig>::empty(&levelup_config->consume_item_config_vec) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            152);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v39, (const char (*)[13])"offering_id:");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, offering_id);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v41, (const char (*)[37])byte_1ADC5140);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_86;
        }
        if ( !std::vector<data::OfferingActionContent>::empty(&levelup_config->action_vec) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            158);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v42, (const char (*)[13])"offering_id:");
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, offering_id);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v44, (const char (*)[31])byte_1ADC51A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_86;
        }
      }
      __for_range_2 = &levelup_config->action_vec;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, reward_id);
      *(std::vector<data::OfferingActionContent>::const_iterator *)(v2 + 256) = std::vector<data::OfferingActionContent>::begin(__for_range_2);
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 288, reward_id);
      *(std::vector<data::OfferingActionContent>::const_iterator *)(v2 + 288) = std::vector<data::OfferingActionContent>::end(__for_range_2);
      while ( __gnu_cxx::operator!=<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>(
                (const __gnu_cxx::__normal_iterator<const data::OfferingActionContent*,std::vector<data::OfferingActionContent> > *)(v2 + 256),
                (const __gnu_cxx::__normal_iterator<const data::OfferingActionContent*,std::vector<data::OfferingActionContent> > *)(v2 + 288)) )
      {
        v45 = __gnu_cxx::__normal_iterator<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>::operator*((const __gnu_cxx::__normal_iterator<const data::OfferingActionContent*,std::vector<data::OfferingActionContent> > *const)(v2 + 256));
        if ( OfferingExcelConfigMgr::checkAction(this, txt_config_mgr, levelup_config, v45) )
        {
          ret = -1;
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
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkLevelUpConfig",
            168);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v46, (const char (*)[13])"offering_id:");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, offering_id);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v48, (const char (*)[18])byte_1ADC51E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          break;
        }
        __gnu_cxx::__normal_iterator<data::OfferingActionContent const*,std::vector<data::OfferingActionContent>>::operator++((__gnu_cxx::__normal_iterator<const data::OfferingActionContent*,std::vector<data::OfferingActionContent> > *const)(v2 + 256));
      }
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      is_init_level = 0;
LABEL_86:
      __gnu_cxx::__normal_iterator<data::OfferingLevelUpExcelConfig const*,std::vector<data::OfferingLevelUpExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::OfferingLevelUpExcelConfig*,std::vector<data::OfferingLevelUpExcelConfig> > *const)(v2 + 128));
    }
  }
  if ( v67 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 187: range 00000000146216FA-0000000014622031
int32_t __cdecl OfferingExcelConfigMgr::checkOpenStateConfig(
        const OfferingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::OfferingOpenStateConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false,false>::reference v21; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::OfferingOpenStateConfig> >::type *offering_id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OfferingOpenStateConfig> >::type *offering_config; // [rsp+38h] [rbp-188h]
  char v24[384]; // [rsp+40h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:189 64 8 13 __for_end:189 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::checkOpenStateConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->offering_open_state_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OfferingOpenStateConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false> *)(v2 + 64)) )
  {
    v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false,false> *const)(v2 + 32));
    offering_id = std::get<0ul,unsigned int const,data::OfferingOpenStateConfig>(v21);
    offering_config = (std::tuple_element<1,const std::pair<unsigned int const,data::OfferingOpenStateConfig> >::type *)std::get<1ul,unsigned int const,data::OfferingOpenStateConfig>(v21);
    if ( *(_BYTE *)(((unsigned __int64)&offering_config->item_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&offering_config->item_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&offering_config->item_limit);
    }
    if ( offering_config->item_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&offering_config->max_level_limit_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&offering_config->max_level_limit_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&offering_config->max_level_limit_type);
      }
      if ( offering_config->max_level_limit_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&offering_config->max_level_limit_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&offering_config->max_level_limit_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&offering_config->max_level_limit_type);
        }
        if ( offering_config->max_level_limit_type == OFFERING_MAX_LEVEL_LIMIT_MICHIAE )
        {
          if ( *(_BYTE *)(((unsigned __int64)&offering_config->activity_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)offering_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offering_config->activity_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&offering_config->activity_id);
          }
          if ( offering_config->activity_id )
          {
            p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&offering_config->activity_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)offering_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&offering_config->activity_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4(&offering_config->activity_id);
            }
            if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                    p_new_activity_config_mgr,
                    offering_config->activity_id) )
            {
              ret = -1;
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
                "./src/txt_data_manual/OfferingExcelConfig.cpp",
                "checkOpenStateConfig",
                217);
              v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v15,
                      (const char (*)[13])"activity_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, offering_id);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1ADC5480);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
              *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
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
              "./src/txt_data_manual/OfferingExcelConfig.cpp",
              "checkOpenStateConfig",
              210);
            v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 224),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v11,
                    (const char (*)[22])"max_level_limit_type:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, offering_id);
            common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v13, (const char (*)[50])byte_1ADC53E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OfferingExcelConfig.cpp",
          "checkOpenStateConfig",
          200);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               v8,
               (const char (*)[22])"max_level_limit_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, offering_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])byte_1ADC53A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/OfferingExcelConfig.cpp",
        "checkOpenStateConfig",
        194);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])"offering_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, offering_id);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1ADC5320);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OfferingOpenStateConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 226: range 0000000014622032-00000000146223F1
int32_t __cdecl OfferingExcelConfigMgr::checkVersionConfig(
        const OfferingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  uint32_t v7; // esi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+10h] [rbp-F0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v13; // [rsp+18h] [rbp-E8h]
  uint32_t *offering_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *max_level; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:227 64 8 13 __for_end:227 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OfferingExcelConfigMgr::checkVersionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->offering_max_level_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 32) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_20;
    }
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 32));
    offering_id = std::get<0ul,unsigned int const,unsigned int>(v13);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
    max_level = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = *max_level;
    if ( *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)offering_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)offering_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(offering_id);
    }
    if ( !OfferingExcelConfigMgr::findLevelUpConfig(this, *offering_id, v7) )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 32));
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
    "./src/txt_data_manual/OfferingExcelConfig.cpp",
    "checkVersionConfig",
    231);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v8, (const char (*)[36])byte_1ADC5560);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, offering_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_20:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 239: range 00000000146223F2-00000000146235B5
int32_t __cdecl OfferingExcelConfigMgr::checkAction(
        OfferingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::OfferingLevelUpExcelConfig *levelup_config,
        const data::OfferingActionContent *action)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  data::OfferingActionType action_type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  const char *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  uint32_t *p_level; // rdx
  uint32_t *p_offering_id; // rcx
  __int64 v17; // rsi
  std::map<unsigned int,std::tuple<unsigned int,unsigned int>> *p_routine_close_config_map; // rcx
  __int64 v19; // rsi
  std::tuple<unsigned int,unsigned int> *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  bool v29; // r15
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  common::milog::MiLogStream *v33; // rax
  std::vector<unsigned int>::reference v34; // rax
  unsigned int *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const unsigned int *v38; // rax
  std::vector<unsigned int>::reference v39; // rax
  uint32_t *v40; // rdx
  uint32_t v41; // ecx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const unsigned int *v44; // rax
  int32_t result; // eax
  const data::GadgetChainExcelConfig *gadget_chain_config_ptr; // [rsp+38h] [rbp-338h]
  char v49[816]; // [rsp+40h] [rbp-330h] BYREF

  v5 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(768LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 32 1 9 <unknown> 48 4 16 routine_type:250 64 4 9 <unknown> 80 4 12 group_id:264 96 8 9 <unkno"
                        "wn> 128 24 13 param_vec:279 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <u"
                        "nknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = OfferingExcelConfigMgr::checkAction;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862727] = -218959118;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -218959118;
  v7[536862739] = -218959118;
  v7[536862741] = -218959118;
  v7[536862743] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&action->action_type);
  }
  action_type = action->action_type;
  if ( action_type == OFFERING_ACTION_SET_GADGET_CHAIN_LEVEL )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 128));
    std::allocator<char>::allocator(v5 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v5 + 448),
      ",",
      (const std::allocator<char> *)(v5 + 32));
    v29 = common::tools::StringUtils::splitToList<unsigned int>(
            &action->param,
            (const std::string *)(v5 + 448),
            (std::vector<unsigned int> *)(v5 + 128),
            0) != 0;
    std::string::~string((void *)(v5 + 448));
    *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v5 + 32);
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v29 )
    {
      *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/OfferingExcelConfig.cpp",
        "checkAction",
        282);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v30,
              (const char (*)[20])"splitToList fails, ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &action->param);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 512));
      *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v32 = 0;
    }
    else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 128)) > 1 )
    {
      v34 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 128), 0LL);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      gadget_chain_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(
                                  &txt_config_mgr->gadget_config_mgr,
                                  *v35);
      if ( gadget_chain_config_ptr )
      {
        v39 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 128), 1uLL);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v41 = *v40;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_chain_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_chain_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gadget_chain_config_ptr->max_level);
        }
        if ( v41 <= gadget_chain_config_ptr->max_level )
        {
          v32 = 1;
        }
        else
        {
          *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkAction",
            298);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v42, (const char (*)[70])byte_1ADC58E0);
          v44 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 128), 0LL);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, v44);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 704));
          *(_DWORD *)(((v5 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v4 = -1;
          v32 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OfferingExcelConfig.cpp",
          "checkAction",
          293);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v36, (const char (*)[37])byte_1ADC5880);
        v38 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 128), 0LL);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, v38);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 640));
        *(_DWORD *)(((v5 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v4 = -1;
        v32 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 576) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 576, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 576),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/OfferingExcelConfig.cpp",
        "checkAction",
        287);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v33, (const char (*)[18])"param less than 2");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 576));
      *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = -117901064;
      v4 = -1;
      v32 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 128));
    if ( v32 )
      goto LABEL_74;
  }
  else
  {
    if ( action_type > OFFERING_ACTION_SET_GADGET_CHAIN_LEVEL )
    {
LABEL_74:
      v4 = 0;
      goto LABEL_75;
    }
    if ( action_type > OFFERING_ACTION_CLOSE_ROUTINE )
    {
      if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 80, txt_config_mgr);
      *(_DWORD *)(v5 + 80) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&action->param, (unsigned int *)(v5 + 80), 1) )
      {
        if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OfferingExcelConfig.cpp",
          "checkAction",
          267);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v5 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v21,
                (const char (*)[30])"OFFERING_ACTION_NOTIFY_GROUP ");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &action->param);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
        v4 = -1;
        v24 = 0;
      }
      else
      {
        p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
        if ( *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v5 + 80);
        if ( LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v5 + 80)) )
        {
          v24 = 1;
        }
        else
        {
          if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 384, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 384),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkAction",
            272);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v5 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v26, (const char (*)[10])"group_id:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v5 + 80));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
          v4 = -1;
          v24 = 0;
        }
      }
      if ( v24 )
        goto LABEL_74;
    }
    else
    {
      if ( action_type <= OFFERING_ACTION_NONE )
        goto LABEL_74;
      if ( !data::isValidGeneralRoutineTypeName(&action->param) )
      {
        if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OfferingExcelConfig.cpp",
          "checkAction",
          247);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v5 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &action->param);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1ADC5740);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
        v4 = -1;
        v11 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v5 + 48, txt_config_mgr);
        *(_DWORD *)(v5 + 48) = 0;
        v12 = (const char *)std::string::c_str(&action->param);
        if ( (unsigned int)data::enumNameToVal(v12, v5 + 48) )
        {
          if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/OfferingExcelConfig.cpp",
            "checkAction",
            253);
          v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)(v5 + 256),
                  (const char (*)[24])"Not GeneralRoutineType:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &action->param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
          v4 = -1;
          v11 = 0;
        }
        else
        {
          v14 = *(unsigned __int8 *)(((unsigned __int64)&action->action_type >> 3) + 0x7FFF8000);
          if ( (_BYTE)v14 != 0 && (char)v14 <= 3 )
            __asan_report_load4(&action->action_type);
          if ( action->action_type == OFFERING_ACTION_CLOSE_ROUTINE )
          {
            p_level = &levelup_config->level;
            p_offering_id = &levelup_config->offering_id;
            v17 = *(unsigned __int8 *)(((v5 + 96) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v17 )
              __asan_report_store8(v5 + 96, v17);
            std::make_tuple<unsigned int const&,unsigned int const&>(
              (const unsigned int *)(v5 + 96),
              p_offering_id,
              p_level,
              p_offering_id);
            p_routine_close_config_map = &this->routine_close_config_map;
            if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v5 + 48);
            v19 = *(unsigned int *)(v5 + 48);
            if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v5 + 64, v19);
            *(_DWORD *)(v5 + 64) = v19;
            v20 = std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::operator[](
                    p_routine_close_config_map,
                    (std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::key_type *)(v5 + 64));
            std::tuple<unsigned int,unsigned int>::operator=(
              v20,
              (std::conditional<true,std::tuple<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v5 + 96));
          }
          v11 = 1;
        }
      }
      if ( v11 )
        goto LABEL_74;
    }
  }
LABEL_75:
  result = v4;
  if ( v49 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 310: range 00000000146235B6-000000001462374E
bool __fastcall OfferingExcelConfigMgr::isOfferingIdValid(
        const OfferingExcelConfigMgr *const this,
        __int64 offering_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *p_offering_levelup_config_map; // rdx
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 15 offering_id:309 64 8 8 iter:311 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::isOfferingIdValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = offering_id;
  p_offering_levelup_config_map = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, offering_id);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::find(p_offering_levelup_config_map, (const std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(v6);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 96));
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

// Line 316: range 0000000014623750-00000000146239FB
std::vector<data::OfferingLevelUpExcelConfig>::const_reference __fastcall OfferingExcelConfigMgr::findLevelUpConfig(
        const OfferingExcelConfigMgr *const this,
        __int64 offering_id,
        uint32_t level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *p_offering_levelup_config_map; // rdx
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *v7; // rdx
  bool v8; // al
  std::vector<data::OfferingLevelUpExcelConfig>::const_reference result; // rax
  std::vector<data::OfferingLevelUpExcelConfig>::const_reference v10; // rdx
  uint32_t *p_level; // rax
  uint32_t init_level; // [rsp+10h] [rbp-B0h]
  std::vector<data::OfferingLevelUpExcelConfig> *levelup_config_vec; // [rsp+18h] [rbp-A8h]
  char v15[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 offering_id:315 64 8 8 iter:317 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OfferingExcelConfigMgr::findLevelUpConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = offering_id;
  p_offering_levelup_config_map = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, offering_id);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::find(p_offering_levelup_config_map, (const std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::key_type *)(v3 + 48));
  v7 = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    levelup_config_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v3 + 64))->second;
    if ( std::vector<data::OfferingLevelUpExcelConfig>::empty(levelup_config_vec) )
    {
      result = 0LL;
    }
    else
    {
      v10 = std::vector<data::OfferingLevelUpExcelConfig>::operator[](levelup_config_vec, 0LL);
      p_level = &v10->level;
      if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_level);
      }
      init_level = v10->level;
      if ( level >= init_level )
      {
        if ( level - init_level < std::vector<data::OfferingLevelUpExcelConfig>::size(levelup_config_vec) )
          result = std::vector<data::OfferingLevelUpExcelConfig>::operator[](levelup_config_vec, level - init_level);
        else
          result = 0LL;
      }
      else
      {
        result = 0LL;
      }
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 341: range 00000000146239FC-0000000014623E01
const OfferingExcelConfigMgr *__fastcall OfferingExcelConfigMgr::findRoutineCloseConfig(
        const OfferingExcelConfigMgr *const this,
        __int64 routine_type,
        int a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::map<unsigned int,std::tuple<unsigned int,unsigned int>> *v6; // rdx
  const std::map<unsigned int,std::tuple<unsigned int,unsigned int>> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int> > >::pointer v10; // rdx
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 9 <unknown> 64 4 9 <unknown> 80 4 16 routine_type:340 96 8 8 iter:342 128 8 9 <unknown> 1"
                        "60 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OfferingExcelConfigMgr::findRoutineCloseConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 80) = a3;
  v6 = (const std::map<unsigned int,std::tuple<unsigned int,unsigned int>> *)(routine_type + 416);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, routine_type);
  *(std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::find(
                                                                                                 v6,
                                                                                                 (const std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::key_type *)(v3 + 80));
  v7 = (const std::map<unsigned int,std::tuple<unsigned int,unsigned int>> *)(routine_type + 416);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 80);
  *(std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::map<unsigned int,std::tuple<unsigned int,unsigned int>>::end(v7);
  v8 = (char *)(v3 + 128);
  v9 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int> > >::_Self *)(v3 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int> > >::_Self *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::tuple<unsigned int,unsigned int> > > *const)(v3 + 96));
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->_vptr_OfferingExcelConfigMgrBase + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_OfferingExcelConfigMgrBase + 7) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 8LL);
    }
    if ( (((unsigned __int8)v10 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second._M_head_impl + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second._M_head_impl + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load_n(&v10->second, 8LL);
    }
    this->_vptr_OfferingExcelConfigMgrBase = (int (**)(...))v10->second;
  }
  else
  {
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64, v8);
    *(_DWORD *)(v3 + 64) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v8);
    *(_DWORD *)(v3 + 48) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    std::make_tuple<int,int>((int *)(v3 + 160), (int *)(v3 + 48), (int *)(v3 + 64), (int *)(v3 + 48));
    std::tuple<unsigned int,unsigned int>::tuple<int,int,true>(
      (std::tuple<unsigned int,unsigned int> *const)this,
      (std::tuple<int,int> *)(v3 + 160));
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 351: range 0000000014623E02-0000000014623FFD
__int64 __fastcall OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion(
        const OfferingExcelConfigMgr *const this,
        __int64 offering_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_offering_max_level_config_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 offering_id:350 64 8 8 iter:352 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::findOfferingMaxLevelInCurVersion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = offering_id;
  p_offering_max_level_config_map = &this->offering_max_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, offering_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_offering_max_level_config_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->offering_max_level_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
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

// Line 361: range 0000000014623FFE-0000000014624235
__int64 __fastcall OfferingExcelConfigMgr::findOfferingInitLevel(
        const OfferingExcelConfigMgr *const this,
        __int64 offering_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *p_offering_levelup_config_map; // rdx
  std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::vector<data::OfferingLevelUpExcelConfig>::const_reference v9; // rdx
  uint32_t *p_level; // rax
  std::vector<data::OfferingLevelUpExcelConfig> *levelup_config_vec; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 offering_id:360 64 8 8 iter:362 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OfferingExcelConfigMgr::findOfferingInitLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = offering_id;
  p_offering_levelup_config_map = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, offering_id);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::find(p_offering_levelup_config_map, (const std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->offering_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::OfferingLevelUpExcelConfig>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    levelup_config_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::OfferingLevelUpExcelConfig> > > *const)(v2 + 64))->second;
    if ( std::vector<data::OfferingLevelUpExcelConfig>::empty(levelup_config_vec) )
    {
      result = 0LL;
    }
    else
    {
      v9 = std::vector<data::OfferingLevelUpExcelConfig>::operator[](levelup_config_vec, 0LL);
      p_level = &v9->level;
      if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_level);
      }
      result = v9->level;
    }
  }
  if ( v12 == (char *)v2 )
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

// Line 376: range 0000000014624236-0000000014624440
bool __fastcall OfferingExcelConfigMgr::isOfferingLevelExceedLimit(
        const OfferingExcelConfigMgr *const this,
        __int64 offering_id,
        uint32_t level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,unsigned int> *p_offering_max_level_config_map; // rdx
  std::map<unsigned int,unsigned int> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 offering_id:375 64 8 8 iter:377 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OfferingExcelConfigMgr::isOfferingLevelExceedLimit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = offering_id;
  p_offering_max_level_config_map = &this->offering_max_level_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, offering_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_offering_max_level_config_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  v7 = &this->offering_max_level_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = level > v10->second;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RepuationExcelConfig.cpp

// Line 18: range 0000000014647490-0000000014647718
int32_t __cdecl ReputationExcelConfigMgr::rewriteConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ReputationExcelConfigMgr::rewriteLevelConfig(this, txt_config_mgr);
  retb = ReputationExcelConfigMgr::rewriteParentQuestConfig(this, txt_config_mgr) | reta;
  retc = ReputationExcelConfigMgr::rewriteRequestConfig(this, txt_config_mgr) | retb;
  retd = ReputationExcelConfigMgr::rewriteEntranceConfig(this, txt_config_mgr) | retc;
  rete = ReputationExcelConfigMgr::rewriteExploreConfig(this, txt_config_mgr) | retd;
  ret = ReputationExcelConfigMgr::rewriteCityConfig(this, txt_config_mgr) | rete;
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
      "./src/txt_data_manual/RepuationExcelConfig.cpp",
      "rewriteConfig",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 35: range 000000001464771A-00000000146479A2
int32_t __cdecl ReputationExcelConfigMgr::checkConfig(
        ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ReputationExcelConfigMgr::checkLevelConfig(this, txt_config_mgr);
  retb = ReputationExcelConfigMgr::checkParentQuestConfig(this, txt_config_mgr) | reta;
  retc = ReputationExcelConfigMgr::checkRequestConfig(this, txt_config_mgr) | retb;
  retd = ReputationExcelConfigMgr::checkEntranceConfig(this, txt_config_mgr) | retc;
  rete = ReputationExcelConfigMgr::checkExploreConfig(this, txt_config_mgr) | retd;
  ret = ReputationExcelConfigMgr::checkCityConfig(this, txt_config_mgr) | rete;
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
      "./src/txt_data_manual/RepuationExcelConfig.cpp",
      "checkConfig",
      46);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 52: range 00000000146479A4-0000000014648230
int32_t __cdecl ReputationExcelConfigMgr::rewriteLevelConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  data::ReputationLevelExcelConfig *M_current; // r14
  std::vector<data::ReputationLevelExcelConfig>::iterator v8; // rax
  ReputationExcelConfigMgr::rewriteLevelConfig::<lambda(const auto:39&, const auto:40&)> v9; // dl
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type v12; // r14d
  uint32_t *p_request_group_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *v15; // rdx
  char v16; // cl
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // edx
  int v27; // eax
  int32_t result; // eax
  data::ReputationLevelExcelConfigVec *__for_range; // [rsp+28h] [rbp-1B8h]
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *__for_range_0; // [rsp+30h] [rbp-1B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::reference __in; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *city_id; // [rsp+40h] [rbp-1A0h]
  std::vector<data::ReputationLevelExcelConfig> *level_config_vec; // [rsp+48h] [rbp-198h]
  const data::ReputationLevelExcelConfig *level_config_0; // [rsp+58h] [rbp-188h]
  data::ReputationLevelExcelConfig *level_config; // [rsp+60h] [rbp-180h]
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::mapped_type *city_level_vec; // [rsp+68h] [rbp-178h]
  char v37[368]; // [rsp+70h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 11 cmp_func:60 64 8 14 __for_begin:53 96 8 12 __for_end:53 128 8 14 __for_begin:64 160 8 "
                        "12 __for_end:64 192 8 14 __for_begin:68 224 8 12 __for_end:68 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::rewriteLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -202116109;
  __for_range = &this->reputation_level_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::ReputationLevelExcelConfig>::iterator *)(v3 + 64) = std::vector<data::ReputationLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::ReputationLevelExcelConfig>::iterator *)(v3 + 96) = std::vector<data::ReputationLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *)(v3 + 96)) )
      break;
    level_config = __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *const)(v3 + 64));
    city_level_vec = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::operator[](
                       &this->city_level_config_map,
                       &level_config->city_id);
    std::vector<data::ReputationLevelExcelConfig>::emplace_back<data::ReputationLevelExcelConfig&>(
      city_level_vec,
      level_config,
      level_config);
    __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
  __for_range_0 = &this->city_level_config_map;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v6);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::iterator *)(v3 + 128) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::iterator *)(v3 + 160) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::end(__for_range_0);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v3 + 128),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v3 + 160)) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v3 + 128));
    city_id = std::get<0ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(__in);
    level_config_vec = std::get<1ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(__in);
    M_current = std::vector<data::ReputationLevelExcelConfig>::end(level_config_vec)._M_current;
    v8._M_current = std::vector<data::ReputationLevelExcelConfig>::begin(level_config_vec)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::ReputationLevelExcelConfig__std::vector_data::ReputationLevelExcelConfig____ReputationExcelConfigMgr::rewriteLevelConfig_TxtConfigMgr__::_lambda_const_auto_39__const_auto_40_____(
      v8,
      (__gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> >)M_current,
      v9);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, M_current);
    *(std::vector<data::ReputationLevelExcelConfig>::iterator *)(v3 + 192) = std::vector<data::ReputationLevelExcelConfig>::begin(level_config_vec);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, M_current);
    *(std::vector<data::ReputationLevelExcelConfig>::iterator *)(v3 + 224) = std::vector<data::ReputationLevelExcelConfig>::end(level_config_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *)(v3 + 224)) )
      {
        v26 = 1;
        goto LABEL_41;
      }
      level_config_0 = __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *const)(v3 + 192));
      v10 = std::map<unsigned int,unsigned int>::operator[](&this->group_2_city_map, &level_config_0->request_group_id);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( !*v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(city_id);
        }
        v12 = *city_id;
        p_request_group_id = &level_config_0->request_group_id;
        v14 = std::map<unsigned int,unsigned int>::operator[](
                &this->group_2_city_map,
                &level_config_0->request_group_id);
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(p_request_group_id) = v16 != 0;
          __asan_report_store4(v14, p_request_group_id);
        }
        *v15 = v12;
        goto LABEL_39;
      }
      v17 = std::map<unsigned int,unsigned int>::operator[](&this->group_2_city_map, &level_config_0->request_group_id);
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      if ( v19 != *city_id )
        break;
LABEL_39:
      __gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig *,std::vector<data::ReputationLevelExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationLevelExcelConfig*,std::vector<data::ReputationLevelExcelConfig> > *const)(v3 + 192));
    }
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
      "./src/txt_data_manual/RepuationExcelConfig.cpp",
      "rewriteLevelConfig",
      77);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v20, (const char (*)[5])byte_1ADCCF80);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &level_config_0->request_group_id);
    v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])byte_1ADCCFC0);
    v24 = std::map<unsigned int,unsigned int>::operator[](&this->group_2_city_map, &level_config_0->request_group_id);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, v24);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])byte_1ADCD000);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v26 = 0;
LABEL_41:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v26 != 1 )
    {
      v27 = 0;
      goto LABEL_45;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v3 + 128));
  }
  v27 = 1;
LABEL_45:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
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

// Line 60: range 000000001472B69C-000000001472B73B
bool __cdecl ReputationExcelConfigMgr::rewriteLevelConfig::_lambda_const_auto_39___const_auto_40___::operator()_data::ReputationLevelExcelConfig_data::ReputationLevelExcelConfig_(
        const ReputationExcelConfigMgr::rewriteLevelConfig::<lambda(const auto:39&, const auto:40&)> *const __closure,
        const data::ReputationLevelExcelConfig *lhs,
        const data::ReputationLevelExcelConfig *rhs)
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

// Line 86: range 0000000014648232-0000000014648A1F
int32_t __cdecl ReputationExcelConfigMgr::checkLevelConfig(
        const ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  uint32_t *p_level; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-180h]
  uint32_t idx; // [rsp+14h] [rbp-17Ch]
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *__for_range; // [rsp+18h] [rbp-178h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::reference v24; // [rsp+20h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *city_id; // [rsp+28h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *level_config_vec; // [rsp+30h] [rbp-160h]
  const data::ReputationLevelExcelConfig *level_config; // [rsp+38h] [rbp-158h]
  char v28[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:88 64 8 12 __for_end:88 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->city_level_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v2 + 64)) )
  {
    v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v2 + 32));
    city_id = std::get<0ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(v24);
    level_config_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(v24);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, *city_id) )
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkLevelConfig",
        93);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])byte_1ADC6EC0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, city_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    for ( idx = 0; idx < std::vector<data::ReputationLevelExcelConfig>::size(level_config_vec); ++idx )
    {
      level_config = std::vector<data::ReputationLevelExcelConfig>::operator[](level_config_vec, idx);
      p_level = &level_config->level;
      if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_level);
      }
      if ( level_config->level != idx + 1 )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkLevelConfig",
          102);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])byte_1ADC6EC0);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, city_id);
        v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])byte_1ADCD0C0);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->level);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])byte_1ADCD100);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              level_config->reward_id,
                              ITEM_LIMIT_CITY_REPUTATION_LEVEL) != 1 )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkLevelConfig",
          107);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1ADC6EC0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, city_id);
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])"reward_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &level_config->reward_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v2 + 32));
  }
  result = ret;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 128: range 0000000014648A20-0000000014648D91
int32_t __cdecl ReputationExcelConfigMgr::rewriteParentQuestConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ReputationQuestExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  int32_t result; // eax
  data::ReputationQuestExcelConfigVec *__for_range; // [rsp+18h] [rbp-E8h]
  data::ReputationQuestExcelConfig *parent_quest_config; // [rsp+20h] [rbp-E0h]
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::mapped_type *config_map; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:130 64 8 13 __for_end:130 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::rewriteParentQuestConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->reputation_quest_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::ReputationQuestExcelConfig>::iterator *)(v3 + 32) = std::vector<data::ReputationQuestExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::ReputationQuestExcelConfig>::iterator *)(v3 + 64) = std::vector<data::ReputationQuestExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::ReputationQuestExcelConfig *,std::vector<data::ReputationQuestExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig*,std::vector<data::ReputationQuestExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig*,std::vector<data::ReputationQuestExcelConfig> > *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_16;
    }
    parent_quest_config = __gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig *,std::vector<data::ReputationQuestExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig*,std::vector<data::ReputationQuestExcelConfig> > *const)(v3 + 32));
    config_map = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::operator[](
                   &this->city_parent_quest_config_map,
                   &parent_quest_config->city_id);
    v7 = std::map<unsigned int,data::ReputationQuestExcelConfig>::emplace<unsigned int &,data::ReputationQuestExcelConfig&>(
           config_map,
           &parent_quest_config->parent_quest_id,
           parent_quest_config,
           &parent_quest_config->parent_quest_id,
           v6);
    if ( !v7.second )
      break;
    __gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig *,std::vector<data::ReputationQuestExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationQuestExcelConfig*,std::vector<data::ReputationQuestExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/RepuationExcelConfig.cpp",
    "rewriteParentQuestConfig",
    135);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])"city_id:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &parent_quest_config->city_id);
  v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v10, (const char (*)[29])byte_1ADCD220);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &parent_quest_config->parent_quest_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v12 = 0;
LABEL_16:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
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

// Line 144: range 0000000014648D92-00000000146496D2
int32_t __cdecl ReputationExcelConfigMgr::checkParentQuestConfig(
        const ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>> *__for_range; // [rsp+20h] [rbp-1C0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::reference v27; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::type *city_id; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::type *quest_config_map; // [rsp+38h] [rbp-1A8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::reference v30; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *parent_quest_id; // [rsp+50h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *parent_quest_config; // [rsp+58h] [rbp-188h]
  char v33[384]; // [rsp+60h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:146 64 8 13 __for_end:146 96 8 15 __for_begin:153 128 8 13 __for_end:153 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkParentQuestConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->city_parent_quest_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v2 + 64)) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > > *const)(v2 + 32));
    city_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>(v27);
    quest_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>(v27);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    v6 = (const char *)*city_id;
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, (uint32_t)v6) )
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkParentQuestConfig",
        151);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1ADC6EC0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
      v6 = byte_1AD7AF20;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v6);
    *(std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ReputationQuestExcelConfig>::begin(quest_config_map);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v6);
    *(std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::ReputationQuestExcelConfig>::end(quest_config_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)(v2 + 128)) )
    {
      v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> > *const)(v2 + 96));
      parent_quest_id = std::get<0ul,unsigned int const,data::ReputationQuestExcelConfig>(v30);
      parent_quest_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationQuestExcelConfig>(v30);
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)parent_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(parent_quest_id);
      }
      if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, *parent_quest_id) )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkParentQuestConfig",
          158);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1ADC6EC0);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, city_id);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v13,
                (const char (*)[18])" parent_quest_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, parent_quest_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&parent_quest_config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parent_quest_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&parent_quest_config->reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              parent_quest_config->reward_id,
                              ITEM_LIMIT_CITY_REPUTATION_QUEST) != 1 )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkParentQuestConfig",
          163);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])byte_1ADC6EC0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, city_id);
        v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v18,
                (const char (*)[18])" parent_quest_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, parent_quest_id);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])"reward_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &parent_quest_config->reward_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > > *const)(v2 + 32));
  }
  result = ret;
  if ( v33 == (char *)v2 )
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

// Line 171: range 00000000146496D4-000000001464A800
int32_t __cdecl ReputationExcelConfigMgr::rewriteRequestConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  uint32_t *p_weight; // rax
  std::map<unsigned int,std::vector<unsigned int>> *v8; // rax
  std::vector<unsigned int> *v9; // rdx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  std::map<unsigned int,unsigned int> *v15; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::value_type v23; // r15d
  std::map<unsigned int,unsigned int> *v24; // rax
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  std::vector<unsigned int>::value_type *v27; // rdx
  char v28; // cl
  uint32_t *p_group_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  int *v31; // rdx
  int v32; // ecx
  char v33; // al
  uint32_t *p_quest_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  int v39; // ecx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // edx
  int v47; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v48; // rax
  _DWORD *v49; // rdx
  char v50; // cl
  int v51; // edx
  char *v52; // rsi
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v54; // rax
  unsigned int *v55; // r14
  std::vector<unsigned int>::iterator v56; // rax
  int32_t result; // eax
  data::ReputationRequestExcelConfigMap *__for_range; // [rsp+28h] [rbp-2B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::reference v60; // [rsp+30h] [rbp-2B0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *request_id; // [rsp+38h] [rbp-2A8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *request_config; // [rsp+40h] [rbp-2A0h]
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+48h] [rbp-298h]
  std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *__for_range_0; // [rsp+50h] [rbp-290h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::reference __in; // [rsp+58h] [rbp-288h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::type *__for_range_1; // [rsp+70h] [rbp-270h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v67; // [rsp+78h] [rbp-268h]
  std::vector<unsigned int> *request_vec; // [rsp+88h] [rbp-258h]
  char v69[592]; // [rsp+90h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 11 city_id:195 64 4 15 old_city_id:199 80 8 15 __for_begin:173 112 8 13 __for_end:173 14"
                        "4 8 15 __for_begin:211 176 8 13 __for_end:211 208 8 15 __for_begin:213 240 8 13 __for_end:213 27"
                        "2 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 48 36 group_parent_quest_2_request_map:172";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::rewriteRequestConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862736] = -202116109;
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::map((std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 464));
  __for_range = &this->reputation_request_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false> *)(v3 + 112)) )
      break;
    v60 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false> *const)(v3 + 80));
    request_id = std::get<0ul,unsigned int const,data::ReputationRequestExcelConfig>(v60);
    request_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationRequestExcelConfig>(v60);
    p_weight = &request_config->weight;
    if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_weight);
    }
    if ( request_config->weight )
    {
      v8 = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::operator[](
             &this->group_npc_request_map,
             &request_config->group_id);
      v9 = std::map<unsigned int,std::vector<unsigned int>>::operator[](v8, &request_config->npc_id);
      std::vector<unsigned int>::push_back(v9, request_id);
      p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&request_config->quest_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)request_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config->quest_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&request_config->quest_id);
      }
      parent_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(
                                  p_quest_config_mgr,
                                  request_config->quest_id);
      if ( parent_quest_config_ptr )
      {
        v15 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                (std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 464),
                &request_config->group_id);
        v16 = std::map<unsigned int,unsigned int>::operator[](v15, &parent_quest_config_ptr->id);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        if ( *v17 )
        {
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/RepuationExcelConfig.cpp",
            "rewriteRequestConfig",
            189);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])"request_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, request_id);
          v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" quest_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &request_config->quest_id);
          v6 = byte_1ADCD5C0;
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v22, (const char (*)[20])byte_1ADCD5C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)request_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(request_id);
          }
          v23 = *request_id;
          v24 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                  (std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 464),
                  &request_config->group_id);
          p_id = &parent_quest_config_ptr->id;
          v26 = std::map<unsigned int,unsigned int>::operator[](v24, &parent_quest_config_ptr->id);
          v27 = v26;
          v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
          if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
          {
            LOBYTE(p_id) = v28 != 0;
            __asan_report_store4(v26, p_id);
          }
          *v27 = v23;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          p_group_id = &request_config->group_id;
          v30 = std::map<unsigned int,unsigned int>::operator[](&this->group_2_city_map, &request_config->group_id);
          v31 = (int *)v30;
          if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v30);
          }
          v32 = *v31;
          v33 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v33 != 0 && v33 <= 3 )
          {
            LOBYTE(p_group_id) = v33 != 0;
            __asan_report_store4(v3 + 48, p_group_id);
          }
          *(_DWORD *)(v3 + 48) = v32;
          if ( !*(_DWORD *)(v3 + 48) )
            goto LABEL_52;
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          p_quest_id = &request_config->quest_id;
          v35 = std::map<unsigned int,unsigned int>::operator[](
                  &this->request_quest_2_city_map,
                  &request_config->quest_id);
          v36 = (int *)v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v35);
          }
          v37 = *v36;
          v38 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v38 != 0 && v38 <= 3 )
          {
            LOBYTE(p_quest_id) = v38 != 0;
            __asan_report_store4(v3 + 64, p_quest_id);
          }
          *(_DWORD *)(v3 + 64) = v37;
          if ( !*(_DWORD *)(v3 + 64) )
            goto LABEL_78;
          v39 = *(_DWORD *)(v3 + 64);
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( v39 == *(_DWORD *)(v3 + 48) )
          {
LABEL_78:
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v47 = *(_DWORD *)(v3 + 48);
            v6 = (const char *)&request_config->quest_id;
            v48 = std::map<unsigned int,unsigned int>::operator[](
                    &this->request_quest_2_city_map,
                    &request_config->quest_id);
            v49 = v48;
            v50 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
            LOBYTE(v6) = v50 != 0;
            if ( v50 != 0 && (char)(((unsigned __int8)v48 & 7) + 3) >= v50 )
              __asan_report_store4(v48, v6);
            *v49 = v47;
            v46 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 400),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/RepuationExcelConfig.cpp",
              "rewriteRequestConfig",
              202);
            v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])"quest_id:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &request_config->quest_id);
            v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v42,
                    (const char (*)[27])byte_1ADCD640);
            v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v43,
                    (const unsigned int *)(v3 + 48));
            v45 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v44, (const char (*)[2])",");
            v6 = (const char *)(v3 + 64);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v46 = 0;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          if ( v46 == 1 )
          {
LABEL_52:
            v6 = (const char *)&parent_quest_config_ptr->id;
            std::vector<unsigned int>::push_back(&this->request_parent_quest_vec, &parent_quest_config_ptr->id);
            v14 = 1;
          }
          else
          {
            v14 = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "rewriteRequestConfig",
          183);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v11,
                (const char (*)[32])"findParentQuestConfigByChildId ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &request_config->quest_id);
        v6 = byte_1AD38BC0;
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AD38BC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
        v51 = 0;
        goto LABEL_57;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false> *const)(v3 + 80));
  }
  v51 = 1;
LABEL_57:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v51 == 1 )
  {
    __for_range_0 = &this->group_npc_request_map;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::iterator *)(v3 + 144) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::iterator *)(v3 + 176) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::end(__for_range_0);
    while ( 1 )
    {
      v52 = (char *)(v3 + 176);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v3 + 144),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v3 + 176)) )
        break;
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 144));
      std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>(__in);
      __for_range_1 = std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>(__in);
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 208, v52);
      *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 208) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, v52);
      *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 240) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_1);
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 208),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 240)) )
      {
        v67 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 208));
        std::get<0ul,unsigned int const,std::vector<unsigned int>>(v67);
        request_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v67);
        M_current = std::vector<unsigned int>::end(request_vec)._M_current;
        v54._M_current = std::vector<unsigned int>::begin(request_vec)._M_current;
        std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          v54,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 208));
      }
      *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 144));
    }
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    v55 = std::vector<unsigned int>::end(&this->request_parent_quest_vec)._M_current;
    v56._M_current = std::vector<unsigned int>::begin(&this->request_parent_quest_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v56,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v55);
    v2 = 0;
  }
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::~map((std::map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 464));
  result = v2;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 224: range 000000001464A802-000000001464B32C
int32_t __cdecl ReputationExcelConfigMgr::checkRequestConfig(
        const ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  NpcExcelConfigMgr *p_npc_config_mgr; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1ECh]
  data::ReputationRequestExcelConfigMap *__for_range; // [rsp+18h] [rbp-1E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::reference v31; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *request_id; // [rsp+28h] [rbp-1D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *request_config; // [rsp+30h] [rbp-1D0h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+38h] [rbp-1C8h]
  char v35[448]; // [rsp+40h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:226 64 8 13 __for_end:226 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkRequestConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->reputation_request_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReputationRequestExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false> *)(v2 + 64)) )
  {
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false> *const)(v2 + 32));
    request_id = std::get<0ul,unsigned int const,data::ReputationRequestExcelConfig>(v31);
    request_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationRequestExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationRequestExcelConfig>(v31);
    if ( *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)request_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)request_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(request_id);
    }
    if ( !*request_id )
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkRequestConfig",
        231);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])byte_1ADCD760);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&request_config->quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)request_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config->quest_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&request_config->quest_id);
    }
    quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, request_config->quest_id);
    if ( quest_config_ptr )
    {
      if ( !ReputationExcelConfigMgr::isQuestAcceptedByRequest(this, txt_config_mgr, quest_config_ptr) )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkRequestConfig",
          243);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])"request_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, request_id);
        v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1ADCD7A0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &request_config->quest_id);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])byte_1ADCD7E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkRequestConfig",
        238);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])"request_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, request_id);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1ADCD7A0);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &request_config->quest_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&request_config->reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)request_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&request_config->reward_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&request_config->reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            request_config->reward_id,
                            ITEM_LIMIT_CITY_REPUTATION_REQUEST) != 1 )
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkRequestConfig",
        249);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])"request_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, request_id);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1ADCD820);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &request_config->reward_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_npc_config_mgr = &txt_config_mgr->npc_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&request_config->npc_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&request_config->npc_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&request_config->npc_id);
    }
    if ( !data::NpcExcelConfigMgrBase::findNpcExcelConfig(p_npc_config_mgr, request_config->npc_id) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkRequestConfig",
        254);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])"request_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, request_id);
      v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v25, (const char (*)[14])byte_1ADCD860);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &request_config->npc_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReputationRequestExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 261: range 000000001464B32E-000000001464B52E
bool __cdecl ReputationExcelConfigMgr::isQuestAcceptedByRequest(
        const ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::QuestExcelConfig *quest_config)
{
  __gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool result; // al
  bool is_found; // [rsp+2Fh] [rbp-91h]
  std::vector<data::QuestCond> *__for_range; // [rsp+30h] [rbp-90h]
  const data::QuestCond *cond; // [rsp+38h] [rbp-88h]
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::QuestCond*,std::vector<data::QuestCond> > *)v4;
  }
  v3->_M_current = (const data::QuestCond *)1102416563;
  v3[1]._M_current = (const data::QuestCond *)"2 32 8 15 __for_begin:264 64 8 13 __for_end:264";
  v3[2]._M_current = (const data::QuestCond *)ReputationExcelConfigMgr::isQuestAcceptedByRequest;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  is_found = 0;
  __for_range = &quest_config->accept_cond;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], txt_config_mgr);
  v3[4]._M_current = std::vector<data::QuestCond>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], txt_config_mgr);
  v3[8]._M_current = std::vector<data::QuestCond>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::QuestCond const*,std::vector<data::QuestCond>>(v3 + 4, v3 + 8) )
  {
    cond = __gnu_cxx::__normal_iterator<data::QuestCond const*,std::vector<data::QuestCond>>::operator*(v3 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->type);
    }
    if ( cond->type == QUEST_COND_CITY_REPUTATION_REQUEST )
    {
      is_found = 1;
      break;
    }
    __gnu_cxx::__normal_iterator<data::QuestCond const*,std::vector<data::QuestCond>>::operator++(v3 + 4);
  }
  result = is_found;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::QuestCond *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 276: range 000000001464B530-000000001464BD7D
int32_t __cdecl ReputationExcelConfigMgr::checkEntranceConfig(
        ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const data::ReputationEntranceCond *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>> *__for_range; // [rsp+20h] [rbp-1D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::reference __in; // [rsp+28h] [rbp-1C8h]
  const unsigned int *city_id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::type *__for_range_0; // [rsp+40h] [rbp-1B0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::reference v23; // [rsp+48h] [rbp-1A8h]
  const unsigned int *entrance_id; // [rsp+50h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::type *entrance_config; // [rsp+58h] [rbp-198h]
  std::vector<data::ReputationEntranceCond> *__for_range_1; // [rsp+60h] [rbp-190h]
  char v27[384]; // [rsp+70h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:278 64 8 13 __for_end:278 96 8 15 __for_begin:280 128 8 13 __for_end:280 1"
                        "60 8 15 __for_begin:288 192 8 13 __for_end:288 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkEntranceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->city_entrance_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::_Self *)(v2 + 64)) )
      break;
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > > *const)(v2 + 32));
    city_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig>>(__in);
    __for_range_0 = std::get<1ul,unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig>>(__in);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::map<unsigned int,data::ReputationEntranceExcelConfig>::iterator *)(v2 + 96) = std::map<unsigned int,data::ReputationEntranceExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::map<unsigned int,data::ReputationEntranceExcelConfig>::iterator *)(v2 + 128) = std::map<unsigned int,data::ReputationEntranceExcelConfig>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::_Self *)(v2 + 128)) )
    {
      v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> > *const)(v2 + 96));
      entrance_id = std::get<0ul,unsigned int const,data::ReputationEntranceExcelConfig>(v23);
      entrance_config = std::get<1ul,unsigned int const,data::ReputationEntranceExcelConfig>(v23);
      p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, *city_id) )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkEntranceConfig",
          285);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1ADC6EC0);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      common::tools::MiscUtils::removeEmptyElement<data::ReputationEntranceCond,data::ReputationEntranceCondType data::ReputationEntranceCond::*>(
        &entrance_config->cond_vec,
        (data::ReputationEntranceCondType *)8);
      __for_range_1 = &entrance_config->cond_vec;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, 8LL);
      *(std::vector<data::ReputationEntranceCond>::iterator *)(v2 + 160) = std::vector<data::ReputationEntranceCond>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, 8LL);
      *(std::vector<data::ReputationEntranceCond>::iterator *)(v2 + 192) = std::vector<data::ReputationEntranceCond>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<data::ReputationEntranceCond *,std::vector<data::ReputationEntranceCond>>(
                (const __gnu_cxx::__normal_iterator<data::ReputationEntranceCond*,std::vector<data::ReputationEntranceCond> > *)(v2 + 160),
                (const __gnu_cxx::__normal_iterator<data::ReputationEntranceCond*,std::vector<data::ReputationEntranceCond> > *)(v2 + 192)) )
      {
        v10 = __gnu_cxx::__normal_iterator<data::ReputationEntranceCond *,std::vector<data::ReputationEntranceCond>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationEntranceCond*,std::vector<data::ReputationEntranceCond> > *const)(v2 + 160));
        if ( ReputationExcelConfigMgr::checkEntranceCond(this, v10, txt_config_mgr) )
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
            "./src/txt_data_manual/RepuationExcelConfig.cpp",
            "checkEntranceConfig",
            293);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1ADC6EC0);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, city_id);
          v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])byte_1ADCD9E0);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, entrance_id);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])byte_1ADCDA20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<data::ReputationEntranceCond *,std::vector<data::ReputationEntranceCond>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationEntranceCond*,std::vector<data::ReputationEntranceCond> > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > > *const)(v2 + 32));
  }
  result = ret;
  if ( v27 == (char *)v2 )
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

// Line 302: range 000000001464BD7E-000000001464C04C
int32_t __cdecl ReputationExcelConfigMgr::checkEntranceCond(
        const ReputationExcelConfigMgr *const this,
        const data::ReputationEntranceCond *cond,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  data::ReputationEntranceCondType type; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::checkEntranceCond;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type != REPUTATION_ENTRANCE_COND_QUEST )
  {
    if ( type > REPUTATION_ENTRANCE_COND_QUEST
      || type != REPUTATION_ENTRANCE_COND_REPUTATION_LEVEL && type != REPUTATION_ENTRANCE_COND_PLAYER_LEVEL )
    {
      result = 0;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&cond->param1);
  }
  if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, cond->param1) )
  {
LABEL_18:
    result = 0;
    goto LABEL_19;
  }
  if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 32, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 32),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/RepuationExcelConfig.cpp",
    "checkEntranceCond",
    320);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 32),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"cond.param1:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &cond->param1);
  common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1ADCDAE0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
  result = -1;
LABEL_19:
  if ( v13 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 332: range 000000001464C04E-000000001464C2E4
int32_t __cdecl ReputationExcelConfigMgr::rewriteEntranceConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t *p_city_id; // rsi
  std::map<unsigned int,data::ReputationEntranceExcelConfig> *p_entrance_id; // rdi
  data::ReputationEntranceType entrance_id; // ecx
  char v8; // al
  data::ReputationEntranceExcelConfig *v9; // rdx
  int32_t result; // eax
  data::ReputationEntranceExcelConfigVec *__for_range; // [rsp+10h] [rbp-B0h]
  data::ReputationEntranceExcelConfig *entrance_config; // [rsp+18h] [rbp-A8h]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 15 __for_begin:333 96 8 13 __for_end:333";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::rewriteEntranceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  __for_range = &this->reputation_entrance_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::ReputationEntranceExcelConfig>::iterator *)(v2 + 64) = std::vector<data::ReputationEntranceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::ReputationEntranceExcelConfig>::iterator *)(v2 + 96) = std::vector<data::ReputationEntranceExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ReputationEntranceExcelConfig *,std::vector<data::ReputationEntranceExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig*,std::vector<data::ReputationEntranceExcelConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig*,std::vector<data::ReputationEntranceExcelConfig> > *)(v2 + 96)) )
  {
    entrance_config = __gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig *,std::vector<data::ReputationEntranceExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig*,std::vector<data::ReputationEntranceExcelConfig> > *const)(v2 + 64));
    p_city_id = &entrance_config->city_id;
    p_entrance_id = std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::operator[](
                      &this->city_entrance_config_map,
                      &entrance_config->city_id);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&entrance_config->entrance_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entrance_config->entrance_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_entrance_id = (std::map<unsigned int,data::ReputationEntranceExcelConfig> *)&entrance_config->entrance_id;
      __asan_report_load4(&entrance_config->entrance_id);
    }
    entrance_id = entrance_config->entrance_id;
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      p_entrance_id = (std::map<unsigned int,data::ReputationEntranceExcelConfig> *)(v2 + 48);
      LOBYTE(p_city_id) = v8 != 0;
      __asan_report_store4(v2 + 48, p_city_id);
    }
    *(_DWORD *)(v2 + 48) = entrance_id;
    v9 = std::map<unsigned int,data::ReputationEntranceExcelConfig>::operator[](
           p_entrance_id,
           (std::map<unsigned int,data::ReputationEntranceExcelConfig>::key_type *)(v2 + 48));
    data::ReputationEntranceExcelConfig::operator=(v9, entrance_config);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig *,std::vector<data::ReputationEntranceExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationEntranceExcelConfig*,std::vector<data::ReputationEntranceExcelConfig> > *const)(v2 + 64));
  }
  result = 0;
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
  return result;
};

// Line 342: range 000000001464C2E6-000000001464CC1B
int32_t __cdecl ReputationExcelConfigMgr::checkExploreConfig(
        const ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>> *__for_range; // [rsp+20h] [rbp-1C0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::reference v27; // [rsp+28h] [rbp-1B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::type *city_id; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::type *explore_config_map; // [rsp+38h] [rbp-1A8h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::reference v30; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *explore_id; // [rsp+50h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *explore_config; // [rsp+58h] [rbp-188h]
  char v33[384]; // [rsp+60h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:344 64 8 13 __for_end:344 96 8 15 __for_begin:351 128 8 13 __for_end:351 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkExploreConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->city_explore_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v2 + 32),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v2 + 64)) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > > *const)(v2 + 32));
    city_id = std::get<0ul,unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>(v27);
    explore_config_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>(v27);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    v6 = (const char *)*city_id;
    if ( !WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, (uint32_t)v6) )
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkExploreConfig",
        349);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1ADC6EC0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
      v6 = byte_1AD7AF20;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v6);
    *(std::map<unsigned int,data::ReputationExploreExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::ReputationExploreExcelConfig>::begin(explore_config_map);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v6);
    *(std::map<unsigned int,data::ReputationExploreExcelConfig>::const_iterator *)(v2 + 128) = std::map<unsigned int,data::ReputationExploreExcelConfig>::end(explore_config_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)(v2 + 128)) )
    {
      v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> > *const)(v2 + 96));
      explore_id = std::get<0ul,unsigned int const,data::ReputationExploreExcelConfig>(v30);
      explore_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationExploreExcelConfig>(v30);
      p_reward_id = &explore_config->reward_id;
      if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_reward_id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              explore_config->reward_id,
                              ITEM_LIMIT_CITY_REPUTATION_EXPLORE) != 1 )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkExploreConfig",
          356);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1ADC6EC0);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, city_id);
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])byte_1ADCDC40);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, explore_id);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"reward_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &explore_config->reward_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&explore_config->explore_progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&explore_config->explore_progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&explore_config->explore_progress);
      }
      if ( !explore_config->explore_progress || explore_config->explore_progress > 0x64 )
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkExploreConfig",
          361);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1ADC6EC0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, city_id);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1ADCDC40);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, explore_id);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v22, (const char (*)[28])byte_1ADCDC80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > > *const)(v2 + 32));
  }
  result = ret;
  if ( v33 == (char *)v2 )
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

// Line 369: range 000000001464CC1C-000000001464CF84
int32_t __cdecl ReputationExcelConfigMgr::rewriteExploreConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,data::ReputationExploreExcelConfig> *v6; // rdi
  data::ReputationExploreExcelConfig *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  int32_t result; // eax
  data::ReputationExploreExcelConfigVec *__for_range; // [rsp+10h] [rbp-E0h]
  data::ReputationExploreExcelConfig *explore_config; // [rsp+18h] [rbp-D8h]
  char v18[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:370 64 8 13 __for_end:370 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::rewriteExploreConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->reputation_explore_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::ReputationExploreExcelConfig>::iterator *)(v3 + 32) = std::vector<data::ReputationExploreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::ReputationExploreExcelConfig>::iterator *)(v3 + 64) = std::vector<data::ReputationExploreExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::ReputationExploreExcelConfig *,std::vector<data::ReputationExploreExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig*,std::vector<data::ReputationExploreExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig*,std::vector<data::ReputationExploreExcelConfig> > *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_16;
    }
    explore_config = __gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig *,std::vector<data::ReputationExploreExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig*,std::vector<data::ReputationExploreExcelConfig> > *const)(v3 + 32));
    v6 = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::operator[](
           &this->city_explore_config_map,
           &explore_config->city_id);
    v8 = std::map<unsigned int,data::ReputationExploreExcelConfig>::emplace<unsigned int &,data::ReputationExploreExcelConfig&>(
           v6,
           &explore_config->explore_id,
           explore_config,
           &explore_config->explore_id,
           v7);
    if ( !v8.second )
      break;
    __gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig *,std::vector<data::ReputationExploreExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ReputationExploreExcelConfig*,std::vector<data::ReputationExploreExcelConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/RepuationExcelConfig.cpp",
    "rewriteExploreConfig",
    374);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])"CityId:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &explore_config->city_id);
  v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v11, (const char (*)[25])byte_1ADCDDA0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &explore_config->explore_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v13 = 0;
LABEL_16:
  if ( v13 == 1 )
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

// Line 383: range 000000001464CF86-000000001464D5D5
int32_t __cdecl ReputationExcelConfigMgr::rewriteCityConfig(
        ReputationExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  bool v17; // cl
  char v18; // al
  int v19; // eax
  int32_t result; // eax
  bool is_first; // [rsp+1Fh] [rbp-161h]
  data::ReputationCityExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int const,data::ReputationCityExcelConfig> >::type *city_config; // [rsp+38h] [rbp-148h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-140h]
  data::ExploreAreaTotalExpExcelConfig *explore_area_total_exp_config_ptr; // [rsp+48h] [rbp-138h]
  char v28[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 11 area_id:392 64 8 15 __for_begin:384 96 8 13 __for_end:384 128 8 15 __for_begin:392 160"
                        " 8 13 __for_end:392 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::rewriteCityConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->reputation_city_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::ReputationCityExcelConfig>(__in);
    city_config = std::get<1ul,unsigned int const,data::ReputationCityExcelConfig>(__in);
    if ( !std::vector<unsigned int>::empty(&city_config->explore_area_vec) )
    {
      is_first = 1;
      __for_range_0 = &city_config->explore_area_vec;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v6);
      *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v6);
      *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v7 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v16 = 1;
          goto LABEL_33;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
        v9 = (int *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v11 != 0 && v11 <= 3 )
        {
          LOBYTE(v7) = v11 != 0;
          __asan_report_store4(v3 + 48, v7);
        }
        *(_DWORD *)(v3 + 48) = v10;
        v12 = *(unsigned int *)(v3 + 48);
        explore_area_total_exp_config_ptr = data::ExploreExcelConfigMgrBase::findExploreAreaTotalExpExcelConfig(
                                              &txt_config_mgr->explore_config_mgr,
                                              v12);
        if ( !explore_area_total_exp_config_ptr )
          break;
        if ( is_first )
        {
          if ( *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&explore_area_total_exp_config_ptr->reputation_ratio);
          }
          v17 = explore_area_total_exp_config_ptr->reputation_ratio != 0.0;
          v18 = *(_BYTE *)(((unsigned __int64)&city_config->is_sectional_releasing >> 3) + 0x7FFF8000);
          if ( v18 < 0 )
          {
            LOBYTE(v12) = v18 != 0;
            __asan_report_store1(&city_config->is_sectional_releasing, v12, &city_config->is_sectional_releasing);
          }
          city_config->is_sectional_releasing = v17;
        }
        is_first = 0;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      }
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "rewriteCityConfig",
        397);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v13,
              (const char (*)[44])"ExploreAreaTotalExpExcelConfig cannot find:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
LABEL_33:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v19 = 0;
        goto LABEL_37;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false> *const)(v3 + 64));
  }
  v19 = 1;
LABEL_37:
  if ( v19 == 1 )
    v2 = 0;
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 411: range 000000001464D5D6-000000001464E7B2
int32_t __cdecl ReputationExcelConfigMgr::checkCityConfig(
        ReputationExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // rcx
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  char *v10; // rsi
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // ecx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  ExploreExcelConfigMgr *p_explore_config_mgr; // rcx
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v34; // rax
  _DWORD *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  unsigned int v41; // r14d
  uint32_t *p_virtual_item_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v43; // rax
  unsigned int *v44; // rdx
  char v45; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2ECh]
  data::ReputationCityExcelConfigMap *__for_range; // [rsp+18h] [rbp-2E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::reference v50; // [rsp+20h] [rbp-2E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReputationCityExcelConfig> >::type *city_id; // [rsp+28h] [rbp-2D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReputationCityExcelConfig> >::type *city_config; // [rsp+30h] [rbp-2D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-2C8h]
  const data::MaterialExcelConfig *virtual_item_config_ptr; // [rsp+40h] [rbp-2C0h]
  const data::ExploreAreaTotalExpExcelConfig *explore_area_total_exp_config_ptr; // [rsp+48h] [rbp-2B8h]
  char v56[688]; // [rsp+50h] [rbp-2B0h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 4 11 area_id:421 64 8 15 __for_begin:413 96 8 13 __for_end:413 128 8 15 __for_begin:421 16"
                        "0 8 13 __for_end:421 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>"
                        " 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::checkCityConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->reputation_city_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ReputationCityExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false> *)(v2 + 96)) )
  {
    v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false> *const)(v2 + 64));
    city_id = std::get<0ul,unsigned int const,data::ReputationCityExcelConfig>(v50);
    city_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ReputationCityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReputationCityExcelConfig>(v50);
    p_world_area_config_mgr = &txt_config_mgr->world_area_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    v6 = *city_id;
    if ( WorldAreaExcelConfigMgr::findCityConfig(p_world_area_config_mgr, v6) )
    {
      __for_range_0 = &city_config->explore_area_vec;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v6);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v10 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v12 = (int *)v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v13 = *v12;
        v14 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v2 + 48, v10);
        }
        *(_DWORD *)(v2 + 48) = v13;
        if ( !WorldAreaExcelConfigMgr::findFirstLevelWorldAreaConfig(
                &txt_config_mgr->world_area_config_mgr,
                *(_DWORD *)(v2 + 48)) )
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
            "./src/txt_data_manual/RepuationExcelConfig.cpp",
            "checkCityConfig",
            425);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])"area_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        p_explore_config_mgr = &txt_config_mgr->explore_config_mgr;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        v19 = *(unsigned int *)(v2 + 48);
        explore_area_total_exp_config_ptr = data::ExploreExcelConfigMgrBase::findExploreAreaTotalExpExcelConfig(
                                              p_explore_config_mgr,
                                              v19);
        if ( explore_area_total_exp_config_ptr )
        {
          if ( *(char *)(((unsigned __int64)&city_config->is_sectional_releasing >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&city_config->is_sectional_releasing, v19, &city_config->is_sectional_releasing);
          if ( city_config->is_sectional_releasing )
          {
            if ( *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&explore_area_total_exp_config_ptr->reputation_ratio);
            }
            if ( explore_area_total_exp_config_ptr->reputation_ratio >= 0.0
              && explore_area_total_exp_config_ptr->reputation_ratio <= 1.0 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&explore_area_total_exp_config_ptr->reputation_ratio >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&explore_area_total_exp_config_ptr->reputation_ratio);
              }
              if ( explore_area_total_exp_config_ptr->reputation_ratio == 0.0 )
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
                  "./src/txt_data_manual/RepuationExcelConfig.cpp",
                  "checkCityConfig",
                  445);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v27 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                        v26,
                        (const char (*)[76])byte_1ADCE100);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 48));
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
                "./src/txt_data_manual/RepuationExcelConfig.cpp",
                "checkCityConfig",
                439);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v24 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      v23,
                      (const char (*)[34])byte_1ADCE0A0);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])byte_1AD7AF20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
              *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
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
            "./src/txt_data_manual/RepuationExcelConfig.cpp",
            "checkCityConfig",
            431);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v20,
                  (const char (*)[44])"ExploreAreaTotalExpExcelConfig cannot find:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      p_material_config_mgr = &txt_config_mgr->material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&city_config->virtual_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&city_config->virtual_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&city_config->virtual_item_id);
      }
      virtual_item_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                  p_material_config_mgr,
                                  city_config->virtual_item_id);
      if ( !virtual_item_config_ptr )
        goto LABEL_59;
      if ( *(_BYTE *)(((unsigned __int64)&virtual_item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)virtual_item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&virtual_item_config_ptr->item_type >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&virtual_item_config_ptr->item_type);
      }
      if ( virtual_item_config_ptr->item_type == ITEM_VIRTUAL )
      {
        v34 = std::map<unsigned int,unsigned int>::operator[](
                &this->virtual_item_2_city_map,
                &city_config->virtual_item_id);
        v35 = v34;
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v34);
        }
        if ( *v35 )
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
            "./src/txt_data_manual/RepuationExcelConfig.cpp",
            "checkCityConfig",
            459);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v37 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v36, (const char (*)[8])byte_1ADC6EC0);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, city_id);
          v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v38, (const char (*)[29])byte_1ADCE200);
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v39,
                  &city_config->virtual_item_id);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v40, (const char (*)[28])byte_1ADCE240);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(city_id);
          }
          v41 = *city_id;
          p_virtual_item_id = &city_config->virtual_item_id;
          v43 = std::map<unsigned int,unsigned int>::operator[](
                  &this->virtual_item_2_city_map,
                  &city_config->virtual_item_id);
          v44 = v43;
          v45 = *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000);
          if ( v45 != 0 && (char)(((unsigned __int8)v43 & 7) + 3) >= v45 )
          {
            LOBYTE(p_virtual_item_id) = v45 != 0;
            __asan_report_store4(v43, p_virtual_item_id);
          }
          *v44 = v41;
        }
      }
      else
      {
LABEL_59:
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
          "./src/txt_data_manual/RepuationExcelConfig.cpp",
          "checkCityConfig",
          453);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])byte_1ADC6EC0);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, city_id);
        v32 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v31, (const char (*)[29])byte_1ADCE180);
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &city_config->virtual_item_id);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v33, (const char (*)[19])byte_1ADCE1C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/RepuationExcelConfig.cpp",
        "checkCityConfig",
        418);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])byte_1ADC6EC0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, city_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ReputationCityExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 469: range 000000001464E7B4-000000001464EAE6
std::vector<data::ReputationLevelExcelConfig>::const_reference __fastcall ReputationExcelConfigMgr::findReputationLevelConfig(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<data::ReputationLevelExcelConfig>::const_reference result; // rax
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *p_city_level_config_map; // rdx
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *v8; // rdx
  bool v9; // al
  std::vector<data::ReputationLevelExcelConfig> *config_vec; // [rsp+18h] [rbp-E8h]
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 city_id:468 64 8 8 iter:476 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::findReputationLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = city_id;
  if ( level )
  {
    p_city_level_config_map = &this->city_level_config_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, city_id);
    *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::find(p_city_level_config_map, (const std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::key_type *)(v3 + 48));
    v8 = &this->city_level_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      result = 0LL;
    }
    else
    {
      config_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v3 + 64))->second;
      if ( level - 1 >= std::vector<data::ReputationLevelExcelConfig>::size(config_vec) )
        result = 0LL;
      else
        result = std::vector<data::ReputationLevelExcelConfig>::operator[](config_vec, level - 1);
    }
  }
  else
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
      "./src/txt_data_manual/RepuationExcelConfig.cpp",
      "findReputationLevelConfig",
      473);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v3 + 128),
      (const char (*)[20])"Not Support level:0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
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

// Line 490: range 000000001464EAE8-000000001464ED17
__int64 __fastcall ReputationExcelConfigMgr::getCityReputationMaxLevel(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *p_city_level_config_map; // rdx
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::vector<data::ReputationLevelExcelConfig>::const_reference v9; // rdx
  uint32_t *p_level; // rax
  std::vector<data::ReputationLevelExcelConfig> *config_vec; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 city_id:489 64 8 8 iter:491 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::getCityReputationMaxLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  p_city_level_config_map = &this->city_level_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, city_id);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::find(p_city_level_config_map, (const std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->city_level_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    config_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > > *const)(v2 + 64))->second;
    if ( std::vector<data::ReputationLevelExcelConfig>::empty(config_vec) )
    {
      result = 0LL;
    }
    else
    {
      v9 = std::vector<data::ReputationLevelExcelConfig>::back(config_vec);
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

// Line 505: range 000000001464ED18-000000001464F00A
const data::ReputationQuestExcelConfig *__fastcall ReputationExcelConfigMgr::findParentQuestConfig(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t parent_quest)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>> *p_city_parent_quest_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::ReputationQuestExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::ReputationQuestExcelConfig> *config_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 city_id:504 48 4 16 parent_quest:504 64 8 8 iter:506 96 8 9 <unknown> 128 8 14 quest_i"
                        "ter:512 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::findParentQuestConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = city_id;
  *(_DWORD *)(v3 + 48) = parent_quest;
  p_city_parent_quest_config_map = &this->city_parent_quest_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::find(p_city_parent_quest_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->city_parent_quest_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ReputationQuestExcelConfig>::find(
                                                                                               config_map,
                                                                                               (const std::map<unsigned int,data::ReputationQuestExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::ReputationQuestExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ReputationQuestExcelConfig>::end(config_map);
    v10 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationQuestExcelConfig> > *const)(v3 + 128))->second;
    else
      result = 0LL;
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
  return result;
};

// Line 521: range 000000001464F00C-000000001464F2FE
const data::ReputationEntranceExcelConfig *__fastcall ReputationExcelConfigMgr::findEntranceConfig(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t entrance_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>> *p_city_entrance_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::ReputationEntranceExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::ReputationEntranceExcelConfig> *entrance_config_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 city_id:520 48 4 15 entrance_id:520 64 8 8 iter:522 96 8 9 <unknown> 128 8 17 entrance"
                        "_iter:528 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::findEntranceConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = city_id;
  *(_DWORD *)(v3 + 48) = entrance_id;
  p_city_entrance_config_map = &this->city_entrance_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::find(p_city_entrance_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->city_entrance_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReputationEntranceExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    entrance_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationEntranceExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::ReputationEntranceExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ReputationEntranceExcelConfig>::find(
                                                                                                  entrance_config_map,
                                                                                                  (const std::map<unsigned int,data::ReputationEntranceExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::ReputationEntranceExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ReputationEntranceExcelConfig>::end(entrance_config_map);
    v10 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationEntranceExcelConfig> > *const)(v3 + 128))->second;
    else
      result = 0LL;
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
  return result;
};

// Line 538: range 000000001464F300-000000001464F3FD
bool __fastcall ReputationExcelConfigMgr::isParentQuestBelongRequest(
        const ReputationExcelConfigMgr *const this,
        uint32_t parent_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v6; // rax
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 parent_quest_id:537";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::isParentQuestBelongRequest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = parent_quest_id;
  M_current = std::vector<unsigned int>::end(&this->request_parent_quest_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->request_parent_quest_vec)._M_current;
  result = std::binary_search<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
             v6,
             (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
             (const unsigned int *)(v2 + 32));
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

// Line 543: range 000000001464F3FE-000000001464F5BF
const std::map<unsigned int,data::ReputationQuestExcelConfig> *__fastcall ReputationExcelConfigMgr::findCityParentQuestVec(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>> *p_city_parent_quest_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,data::ReputationQuestExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 city_id:542 64 8 8 iter:544 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::findCityParentQuestVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  p_city_parent_quest_config_map = &this->city_parent_quest_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, city_id);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::find(p_city_parent_quest_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->city_parent_quest_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReputationQuestExcelConfig>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationQuestExcelConfig> > > *const)(v2 + 64))->second;
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

// Line 553: range 000000001464F5C0-000000001464F8B2
const data::ReputationExploreExcelConfig *__fastcall ReputationExcelConfigMgr::findExploreConfig(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id,
        uint32_t explore_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>> *p_city_explore_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::ReputationExploreExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::ReputationExploreExcelConfig> *explore_config_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 city_id:552 48 4 14 explore_id:552 64 8 8 iter:554 96 8 9 <unknown> 128 8 16 explore_i"
                        "ter:560 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ReputationExcelConfigMgr::findExploreConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = city_id;
  *(_DWORD *)(v3 + 48) = explore_id;
  p_city_explore_config_map = &this->city_explore_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, city_id);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::find(p_city_explore_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->city_explore_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    explore_config_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::ReputationExploreExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::ReputationExploreExcelConfig>::find(
                                                                                                 explore_config_map,
                                                                                                 (const std::map<unsigned int,data::ReputationExploreExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::ReputationExploreExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::ReputationExploreExcelConfig>::end(explore_config_map);
    v10 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ReputationExploreExcelConfig> > *const)(v3 + 128))->second;
    else
      result = 0LL;
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
  return result;
};

// Line 569: range 000000001464F8B4-000000001464FA75
const std::map<unsigned int,data::ReputationExploreExcelConfig> *__fastcall ReputationExcelConfigMgr::findCityExploreConfigVec(
        const ReputationExcelConfigMgr *const this,
        __int64 city_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>> *p_city_explore_config_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::map<unsigned int,data::ReputationExploreExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 city_id:568 64 8 8 iter:570 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::findCityExploreConfigVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  p_city_explore_config_map = &this->city_explore_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, city_id);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::find(p_city_explore_config_map, (const std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->city_explore_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,data::ReputationExploreExcelConfig>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::ReputationExploreExcelConfig> > > *const)(v2 + 64))->second;
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

// Line 580: range 000000001464FA76-000000001464FC71
__int64 __fastcall ReputationExcelConfigMgr::findCityIdByVirtualItem(
        const ReputationExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_virtual_item_2_city_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 item_id:579 64 8 8 iter:581 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::findCityIdByVirtualItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_virtual_item_2_city_map = &this->virtual_item_2_city_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_virtual_item_2_city_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->virtual_item_2_city_map;
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

// Line 591: range 000000001464FC72-000000001464FE6D
__int64 __fastcall ReputationExcelConfigMgr::findCityIdByRequestQuestId(
        const ReputationExcelConfigMgr *const this,
        __int64 quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_request_quest_2_city_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 quest_id:590 64 8 8 iter:592 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ReputationExcelConfigMgr::findCityIdByRequestQuestId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quest_id;
  p_request_quest_2_city_map = &this->request_quest_2_city_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quest_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_request_quest_2_city_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->request_quest_2_city_map;
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

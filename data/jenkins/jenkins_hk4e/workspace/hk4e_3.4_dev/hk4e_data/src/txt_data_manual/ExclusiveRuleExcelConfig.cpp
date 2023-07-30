// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExclusiveRuleExcelConfig.cpp

// Line 20: range 0000000013AA898A-0000000013AA8B6D
int32_t __cdecl ExclusiveRuleExcelConfigMgr::rewriteConfig(
        ExclusiveRuleExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ExclusiveRuleExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ExclusiveRuleExcelConfigMgr::rewriteExclusiveRuleExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
      "rewriteConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      v5,
      (const char (*)[49])"ExclusiveRuleExcelConfigMgr rewriteConfig failed");
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

// Line 30: range 0000000013AA8B6E-0000000013AA8D51
int32_t __cdecl ExclusiveRuleExcelConfigMgr::checkConfig(
        ExclusiveRuleExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ExclusiveRuleExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ExclusiveRuleExcelConfigMgr::checkExclusiveRuleExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
      "checkConfig",
      33);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v5,
      (const char (*)[47])"ExclusiveRuleExcelConfigMgr checkConfig failed");
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

// Line 40: range 0000000013AA8D52-0000000013AA94B2
int32_t __cdecl ExclusiveRuleExcelConfigMgr::rewriteExclusiveRuleExcelConfig(
        ExclusiveRuleExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ExclusivePlatformType *p_platform_type; // rax
  __int64 v7; // rsi
  data::ExclusivePlatformType platform_type; // ecx
  char v9; // al
  data::ExclusiveRuleType rule_type; // ecx
  char v11; // al
  char *v12; // rsi
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  data::ExclusivePlatformType *v18; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusivePlatformType>,false,false>,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int v23; // eax
  int32_t result; // eax
  data::ExclusiveRuleExcelConfigMap *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false,false>::reference v26; // [rsp+18h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExclusiveRuleExcelConfig> >::type *exclusive_config; // [rsp+28h] [rbp-178h]
  std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> *rule_map; // [rsp+30h] [rbp-170h]
  std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::mapped_type *object_id_vec; // [rsp+38h] [rbp-168h]
  std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::mapped_type *object_map; // [rsp+40h] [rbp-160h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-158h]
  char v32[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 16 platform_type:43 64 4 12 rule_type:44 80 4 12 object_id:50 96 8 14 __for_begin:41 128 "
                        "8 12 __for_end:41 160 8 14 __for_begin:50 192 8 12 __for_end:50 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExclusiveRuleExcelConfigMgr::rewriteExclusiveRuleExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->exclusive_rule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExclusiveRuleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ExclusiveRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExclusiveRuleExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ExclusiveRuleExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false> *)(v3 + 128)) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::ExclusiveRuleExcelConfig>(v26);
    exclusive_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExclusiveRuleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExclusiveRuleExcelConfig>(v26);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_platform_type = &exclusive_config->platform_type;
    v7 = (((_BYTE)exclusive_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_platform_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)exclusive_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_platform_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_platform_type);
    }
    platform_type = exclusive_config->platform_type;
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 48, v7);
    }
    *(_DWORD *)(v3 + 48) = platform_type;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&exclusive_config->rule_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&exclusive_config->rule_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&exclusive_config->rule_type);
    }
    rule_type = exclusive_config->rule_type;
    v11 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(v3 + 64, v7);
    }
    *(_DWORD *)(v3 + 64) = rule_type;
    rule_map = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::operator[](
                 &this->exclusive_platform_map_,
                 (const std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::key_type *)(v3 + 48));
    object_id_vec = std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::operator[](
                      rule_map,
                      (const std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::key_type *)(v3 + 64));
    v12 = (char *)(v3 + 64);
    object_map = std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::operator[](
                   &this->exclusive_rule_map_,
                   (const std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::key_type *)(v3 + 64));
    __for_range_0 = &exclusive_config->object_ids;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v22 = 1;
        goto LABEL_34;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(v3 + 80, v13);
      }
      *(_DWORD *)(v3 + 80) = v16;
      std::vector<unsigned int>::emplace_back<unsigned int &>(
        object_id_vec,
        (unsigned int *)(v3 + 80),
        (unsigned int *)(v3 + 80));
      v19 = std::unordered_map<unsigned int,data::ExclusivePlatformType>::emplace<unsigned int &,data::ExclusivePlatformType&>(
              object_map,
              (unsigned int *)(v3 + 80),
              (data::ExclusivePlatformType *)(v3 + 48),
              (unsigned int *)(v3 + 80),
              v18);
      if ( !v19.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
      "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
      "rewriteExclusiveRuleExcelConfig",
      56);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v20, (const char (*)[57])byte_1AC73040);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v22 = 0;
LABEL_34:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v22 != 1 )
    {
      v23 = 0;
      goto LABEL_38;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExclusiveRuleExcelConfig>,false,false> *const)(v3 + 96));
  }
  v23 = 1;
LABEL_38:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
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

// Line 65: range 0000000013AA94B4-0000000013AA9F49
int32_t __cdecl ExclusiveRuleExcelConfigMgr::checkExclusiveRuleExcelConfig(
        ExclusiveRuleExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int v22; // edx
  int v23; // eax
  int32_t result; // eax
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>> *__for_range; // [rsp+18h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false>::reference v27; // [rsp+20h] [rbp-230h]
  const std::tuple_element<1,std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> > >::type *__for_range_0; // [rsp+38h] [rbp-218h]
  std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false>::reference v29; // [rsp+40h] [rbp-210h]
  std::tuple_element<0,std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> > >::type *rule_type; // [rsp+48h] [rbp-208h]
  const std::tuple_element<1,std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> > >::type *__for_range_1; // [rsp+58h] [rbp-1F8h]
  char v32[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 12 object_id:70 64 8 14 __for_begin:66 96 8 12 __for_end:66 128 8 14 __for_begin:68 160 "
                        "8 12 __for_end:68 192 8 14 __for_begin:70 224 8 12 __for_end:70 256 32 9 <unknown> 320 32 9 <unk"
                        "nown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExclusiveRuleExcelConfigMgr::checkExclusiveRuleExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->exclusive_platform_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::iterator *)(v3 + 64) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::iterator *)(v3 + 96) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v3 + 96)) )
      break;
    v27 = std::__detail::_Node_iterator<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false> *const)(v3 + 64));
    std::get<0ul,data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>(v27);
    __for_range_0 = std::get<1ul,data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>(v27);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !std::__detail::operator!=<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false> *)(v3 + 160)) )
        break;
      v29 = std::__detail::_Node_const_iterator<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
      rule_type = std::get<0ul,data::ExclusiveRuleType const,std::vector<unsigned int>>(v29);
      __for_range_1 = std::get<1ul,data::ExclusiveRuleType const,std::vector<unsigned int>>(v29);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v7);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v8 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
        {
          v16 = 1;
          goto LABEL_48;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v8) = v12 != 0;
          __asan_report_store4(v3 + 48, v8);
        }
        *(_DWORD *)(v3 + 48) = v11;
        if ( *(_BYTE *)(((unsigned __int64)rule_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)rule_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rule_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(rule_type);
        }
        if ( *rule_type == EXCLUSIVE_RULE_WEAPON_AFFIX )
          break;
        if ( *rule_type != EXCLUSIVE_RULE_FLYCLOAK )
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
            "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
            "checkExclusiveRuleExcelConfig",
            95);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v20, (const char (*)[29])byte_1AC73240);
          common::milog::MiLogStream::operator<<<data::ExclusiveRuleType,(data::ExclusiveRuleType*)0>(v21, rule_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
          goto LABEL_48;
        }
        p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( !data::AvatarFashionExcelConfigMgrBase::findAvatarFlycloakExcelConfig(
                p_avatar_fashion_config_mgr,
                *(unsigned int *)(v3 + 48)) )
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
            "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
            "checkExclusiveRuleExcelConfig",
            87);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v18, (const char (*)[32])byte_1AC73200);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
          goto LABEL_48;
        }
LABEL_46:
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
      }
      p_weapon_config_mgr = &txt_config_mgr->weapon_config_mgr;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, *(unsigned int *)(v3 + 48)) )
        goto LABEL_46;
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
        "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
        "checkExclusiveRuleExcelConfig",
        78);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v14, (const char (*)[27])byte_1AC731C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
LABEL_48:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v16 != 1 )
      {
        v22 = 0;
        goto LABEL_52;
      }
      std::__detail::_Node_const_iterator<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
    }
    v22 = 1;
LABEL_52:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v22 != 1 )
    {
      v23 = 0;
      goto LABEL_56;
    }
    std::__detail::_Node_iterator<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false> *const)(v3 + 64));
  }
  v23 = 1;
LABEL_56:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 107: range 0000000013AA9F4A-0000000013AAA148
// local variable allocation has failed, the output may be wrong!
const ExclusiveRuleInfoMap *__cdecl ExclusiveRuleExcelConfigMgr::findExclusiveInfoByPlatFormType(
        const ExclusiveRuleExcelConfigMgr *const this,
        uint32_t platform_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ExclusivePlatformType ExclusivePlatformTypeFromPlatformType; // edx
  char v6; // al
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>> *p_exclusive_platform_map; // rdx
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>> *v8; // rdx
  bool v9; // al
  const ExclusiveRuleInfoMap *result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 27 exclusive_platform_type:108 64 8 8 iter:109 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExclusiveRuleExcelConfigMgr::findExclusiveInfoByPlatFormType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_QWORD *)&platform_type = platform_type;
  ExclusivePlatformTypeFromPlatformType = ExclusiveRuleExcelConfigMgr::getExclusivePlatformTypeFromPlatformType(
                                            this,
                                            platform_type);
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(platform_type) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 48, *(_QWORD *)&platform_type);
  *(_DWORD *)(v2 + 48) = ExclusivePlatformTypeFromPlatformType;
  p_exclusive_platform_map = &this->exclusive_platform_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, *(_QWORD *)&platform_type);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::find(p_exclusive_platform_map, (const std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::key_type *)(v2 + 48));
  v8 = &this->exclusive_platform_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::end(v8);
  v9 = std::__detail::operator==<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false> *const)(v2 + 64))->second;
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

// Line 119: range 0000000013AAA14A-0000000013AAA5D3
_BOOL8 __fastcall ExclusiveRuleExcelConfigMgr::isExclusiveObjectCanUse(
        const ExclusiveRuleExcelConfigMgr *const this,
        __int64 login_platform_type,
        data::ExclusiveRuleType rule_type,
        uint32_t object_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>> *p_exclusive_rule_map; // rdx
  std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  _BOOL8 result; // rax
  bool v12; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExclusivePlatformType>,false,false>::pointer v13; // rdx
  data::ExclusivePlatformType *p_second; // rax
  bool v15; // al
  std::unordered_map<unsigned int,data::ExclusivePlatformType> *object_map; // [rsp+28h] [rbp-128h]
  char v19[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 13 rule_type:118 48 4 13 object_id:118 64 8 13 rule_iter:120 96 8 9 <unknown> 128 8 15 ob"
                        "ject_iter:128 160 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ExclusiveRuleExcelConfigMgr::isExclusiveObjectCanUse;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 32) = rule_type;
  *(_DWORD *)(v4 + 48) = object_id;
  p_exclusive_rule_map = &this->exclusive_rule_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, login_platform_type);
  *(std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::const_iterator *)(v4 + 64) = std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::find(p_exclusive_rule_map, (const std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::key_type *)(v4 + 32));
  v8 = &this->exclusive_rule_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 32);
  *(std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::const_iterator *)(v4 + 96) = std::unordered_map<data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType>>::end(v8);
  v9 = std::__detail::operator==<std::pair<data::ExclusiveRuleType const,std::unordered_map<unsigned int,data::ExclusivePlatformType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ExclusiveRuleExcelConfig.cpp",
      "isExclusiveObjectCanUse",
      123);
    v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v4 + 192),
            (const char (*)[44])"no exclusive rule_type in config rule_type:");
    common::milog::MiLogStream::operator<<<data::ExclusiveRuleType,(data::ExclusiveRuleType*)0>(
      v10,
      (const data::ExclusiveRuleType *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    result = 1LL;
  }
  else
  {
    object_map = &std::__detail::_Node_const_iterator<std::pair<data::ExclusiveRuleType const,std::unordered_map<unsigned int,data::ExclusivePlatformType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::unordered_map<unsigned int,data::ExclusivePlatformType> >,false,false> *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v4 + 96);
    *(std::unordered_map<unsigned int,data::ExclusivePlatformType>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,data::ExclusivePlatformType>::find(
                                                                                                    object_map,
                                                                                                    (const std::unordered_map<unsigned int,data::ExclusivePlatformType>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 48);
    *(std::unordered_map<unsigned int,data::ExclusivePlatformType>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,data::ExclusivePlatformType>::end(object_map);
    v12 = std::__detail::operator==<std::pair<unsigned int const,data::ExclusivePlatformType>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExclusivePlatformType>,false> *)(v4 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExclusivePlatformType>,false> *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 1LL;
    }
    else
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExclusivePlatformType>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExclusivePlatformType>,false,false> *const)(v4 + 128));
      p_second = &v13->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      v15 = v13->second == EXCLUSIVE_PSN && TxtConfigMgr::isPsnPlatform(login_platform_type);
      result = v15;
    }
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 145: range 0000000013AAA5D4-0000000013AAAB88
void __cdecl ExclusiveRuleExcelConfigMgr::fillExclusvieNotifyByPlatformType(
        const ExclusiveRuleExcelConfigMgr *const this,
        uint32_t platform_type,
        proto::ExclusiveRuleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  unsigned int *v8; // rax
  google::protobuf::uint32 *v9; // rdx
  data::ExclusivePlatformType exclusive_platform_type; // [rsp+28h] [rbp-158h]
  std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>> *__for_range; // [rsp+30h] [rbp-150h]
  std::__detail::_Node_const_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false>::reference v13; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> > >::type *type; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> > >::type *info_map; // [rsp+48h] [rbp-138h]
  std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false>::reference v16; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> > >::type *rule_type; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> > >::type *object_id_vec; // [rsp+68h] [rbp-118h]
  proto::ExclusiveRuleInfo *rule_info; // [rsp+70h] [rbp-110h]
  char v20[256]; // [rsp+80h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:147 64 8 13 __for_end:147 96 8 15 __for_begin:155 128 8 13 __for_end:155 1"
                        "60 8 15 __for_begin:159 192 8 13 __for_end:159";
  *(_QWORD *)(v3 + 16) = ExclusiveRuleExcelConfigMgr::fillExclusvieNotifyByPlatformType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -202116352;
  exclusive_platform_type = ExclusiveRuleExcelConfigMgr::getExclusivePlatformTypeFromPlatformType(this, platform_type);
  __for_range = &this->exclusive_platform_map_;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, platform_type);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::const_iterator *)(v3 + 32) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, platform_type);
  *(std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false> *)(v3 + 64)) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false> *const)(v3 + 32));
    type = std::get<0ul,data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>(v13);
    info_map = (std::tuple_element<1,const std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> > >::type *)std::get<1ul,data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>(v13);
    v6 = ((unsigned __int8)type & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    if ( exclusive_platform_type != *type )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::begin(info_map);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v6);
      *(std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>::end(info_map);
      while ( std::__detail::operator!=<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false> *)(v3 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false> *)(v3 + 128)) )
      {
        v16 = std::__detail::_Node_const_iterator<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false> *const)(v3 + 96));
        rule_type = std::get<0ul,data::ExclusiveRuleType const,std::vector<unsigned int>>(v16);
        object_id_vec = (std::tuple_element<1,const std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> > >::type *)std::get<1ul,data::ExclusiveRuleType const,std::vector<unsigned int>>(v16);
        rule_info = proto::ExclusiveRuleNotify::add_rule_info_list(notify);
        if ( *(_BYTE *)(((unsigned __int64)rule_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)rule_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rule_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(rule_type);
        }
        v7 = *(unsigned int *)rule_type;
        proto::ExclusiveRuleInfo::set_rule_type(rule_info, v7);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v7);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(object_id_vec);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v7);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(object_id_vec);
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        {
          v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          proto::ExclusiveRuleInfo::add_object_id_list(rule_info, *v9);
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        }
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_const_iterator<std::pair<data::ExclusiveRuleType const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ExclusiveRuleType,std::vector<unsigned int> >,false,false> *const)(v3 + 96));
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_const_iterator<std::pair<data::ExclusivePlatformType const,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ExclusivePlatformType,std::unordered_map<data::ExclusiveRuleType,std::vector<unsigned int>> >,false,false> *const)(v3 + 32));
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 168: range 0000000013AAAB8A-0000000013AAABB4
data::ExclusivePlatformType __cdecl ExclusiveRuleExcelConfigMgr::getExclusivePlatformTypeFromPlatformType(
        const ExclusiveRuleExcelConfigMgr *const this,
        uint32_t platform_type)
{
  return TxtConfigMgr::isPsnPlatform(platform_type);
};

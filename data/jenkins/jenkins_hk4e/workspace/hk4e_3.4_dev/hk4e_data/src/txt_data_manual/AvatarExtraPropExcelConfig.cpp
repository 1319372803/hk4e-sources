// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarExtraPropExcelConfig.cpp

// Line 21: range 0000000012E73DAE-0000000012E73F91
int32_t __cdecl AvatarExtraPropExcelConfigMgr::rewriteConfig(
        AvatarExtraPropExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = AvatarExtraPropExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AvatarExtraPropExcelConfigMgr::rewriteExtraPropExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AvatarExtraPropExcelConfig.cpp",
      "rewriteConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"rewriteExtraPropExcelConfig failed");
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

// Line 32: range 0000000012E73F92-0000000012E74175
int32_t __cdecl AvatarExtraPropExcelConfigMgr::checkConfig(
        AvatarExtraPropExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = AvatarExtraPropExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AvatarExtraPropExcelConfig.cpp",
      "checkConfig",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig failed");
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

// Line 43: range 0000000012E74176-0000000012E74359
int32_t __cdecl AvatarExtraPropExcelConfigMgr::rewriteExtraPropExcelConfig(
        AvatarExtraPropExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::AvatarExtraPropExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *avatar_extra_prop_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:44 64 8 12 __for_end:44";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>::__node_type *)AvatarExtraPropExcelConfigMgr::rewriteExtraPropExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->avatar_extra_prop_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::AvatarExtraPropExcelConfig>(__in);
    avatar_extra_prop_config = std::get<1ul,unsigned int const,data::AvatarExtraPropExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::ExtraPropConfig,data::FightPropType data::ExtraPropConfig::*>(
      &avatar_extra_prop_config->extra_props,
      (data::FightPropType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 52: range 0000000012E7435A-0000000012E74F1A
int32_t __cdecl AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(
        AvatarExtraPropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  const char *v12; // rsi
  common::milog::MiLogStream *p_prop_type; // rdi
  data::FightPropType prop_type; // ecx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-224h]
  data::AvatarExtraPropExcelConfigMap *__for_range; // [rsp+30h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::reference v23; // [rsp+38h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *id; // [rsp+40h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *avatar_extra_prop_config; // [rsp+48h] [rbp-208h]
  const std::vector<data::ExtraPropConfig> *__for_range_0; // [rsp+50h] [rbp-200h]
  const data::ExtraPropConfig *extra_prop; // [rsp+58h] [rbp-1F8h]
  char v28[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 8 14 __for_begin:54 128 8 12 __for_end:"
                        "54 160 8 14 __for_begin:62 192 8 12 __for_end:62 224 12 9 <unknown> 256 32 9 <unknown> 320 32 9 "
                        "<unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -219020288;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->avatar_extra_prop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::AvatarExtraPropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (std::tuple_element<0,std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false> *)(v2 + 128)) )
      break;
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false> *const)(v2 + 96));
    id = std::get<0ul,unsigned int const,data::AvatarExtraPropExcelConfig>(v23);
    avatar_extra_prop_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarExtraPropExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarExtraPropExcelConfig>(v23);
    if ( *(_BYTE *)(((unsigned __int64)&avatar_extra_prop_config->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_extra_prop_config->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_extra_prop_config->max_count);
    }
    if ( !avatar_extra_prop_config->max_count )
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
        "./src/txt_data_manual/AvatarExtraPropExcelConfig.cpp",
        "checkExtraPropExcelConfig",
        59);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v6, (const char (*)[36])byte_1AABC2C0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v7,
             &avatar_extra_prop_config->max_count);
      v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])" id:");
      v5 = id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &avatar_extra_prop_config->extra_props;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<data::ExtraPropConfig>::const_iterator *)(v2 + 160) = std::vector<data::ExtraPropConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v5);
    *(std::vector<data::ExtraPropConfig>::const_iterator *)(v2 + 192) = std::vector<data::ExtraPropConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::ExtraPropConfig*,std::vector<data::ExtraPropConfig> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<const data::ExtraPropConfig*,std::vector<data::ExtraPropConfig> > *)(v2 + 192)) )
    {
      extra_prop = __gnu_cxx::__normal_iterator<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExtraPropConfig*,std::vector<data::ExtraPropConfig> > *const)(v2 + 160));
      if ( !(_BYTE)`guard variable for'AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET
        && __cxa_guard_acquire(&`guard variable for'AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET) )
      {
        *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1024;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 224, v2 + 192);
        *(_DWORD *)(v2 + 224) = 1;
        v10 = (((_BYTE)v2 - 64 + 36) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 - 64 + 36) & 7) + 3) >= *(_BYTE *)(((v2 + 228) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 228, v10);
        }
        *(_DWORD *)(v2 + 228) = 4;
        if ( *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 232) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 232, v10);
        *(_DWORD *)(v2 + 232) = 7;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<data::FightPropType>::allocator((std::allocator<data::FightPropType> *const)(v2 + 64));
        std::set<data::FightPropType>::set(
          (std::set<data::FightPropType> *const)&AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET,
          (std::initializer_list<data::FightPropType>)__PAIR128__(3LL, v2 + 224),
          (const std::less<data::FightPropType> *)(v2 + 48),
          (const std::set<data::FightPropType>::allocator_type *)(v2 + 64));
        __cxa_guard_release(&`guard variable for'AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET);
        __cxa_atexit(
          (void (__fastcall *)(void *))std::set<data::FightPropType>::~set,
          (void *)&AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET,
          &_dso_handle);
        std::allocator<data::FightPropType>::~allocator((std::allocator<data::FightPropType> *const)(v2 + 64));
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -1800;
      }
      if ( !common::tools::MiscUtils::isContains<std::set<data::FightPropType> const,data::FightPropType>(
              &AvatarExtraPropExcelConfigMgr::checkExtraPropExcelConfig(TxtConfigMgr const&)::VALID_FIGHT_PROP_TYPE_SET,
              &extra_prop->prop_type) )
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
          "./src/txt_data_manual/AvatarExtraPropExcelConfig.cpp",
          "checkExtraPropExcelConfig",
          68);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = byte_1AABC320;
        p_prop_type = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        v11,
                        (const char (*)[28])byte_1AABC320);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&extra_prop->prop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&extra_prop->prop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          p_prop_type = (common::milog::MiLogStream *)&extra_prop->prop_type;
          __asan_report_load4(&extra_prop->prop_type);
        }
        prop_type = extra_prop->prop_type;
        v15 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
        if ( v15 != 0 && v15 <= 3 )
        {
          p_prop_type = (common::milog::MiLogStream *)(v2 + 80);
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v2 + 80, v12);
        }
        *(_DWORD *)(v2 + 80) = prop_type;
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                p_prop_type,
                (const unsigned int *)(v2 + 80));
        v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])" id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop->prop_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)extra_prop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->prop_value >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&extra_prop->prop_value);
      }
      if ( !extra_prop->prop_value )
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
          "./src/txt_data_manual/AvatarExtraPropExcelConfig.cpp",
          "checkExtraPropExcelConfig",
          74);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])byte_1AABC360);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::ExtraPropConfig*,std::vector<data::ExtraPropConfig> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarExtraPropExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GrowCurveExcelConfig.cpp

// Line 19: range 00000000144684FA-000000001446875C
int32_t __cdecl GrowCurveExcelConfigMgr::rewriteConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GrowCurveExcelConfigMgr::rewriteAvatarCurveExcelConfig(this, txt_config_mgr)
    || GrowCurveExcelConfigMgr::rewriteMonsterCurveExcelConfig(this, txt_config_mgr)
    || GrowCurveExcelConfigMgr::rewritePartnerCurveExcelConfig(this, txt_config_mgr)
    || GrowCurveExcelConfigMgr::rewriteGadgetCurveExcelConfig(this, txt_config_mgr)
    || GrowCurveExcelConfigMgr::rewriteWeaponCurveExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteConfig",
      26);
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

// Line 33: range 000000001446875E-0000000014468770
int32_t __cdecl GrowCurveExcelConfigMgr::checkConfig(
        GrowCurveExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 38: range 00000000147160F3-00000000147166F3
int32_t __cdecl rewriteCurveExcelConfig<data::AvatarCurveExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::unordered_map<unsigned int,data::AvatarCurveExcelConfig> *curve_excel_config_map,
        GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        uint32_t *max_curve_level)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  char *v11; // rsi
  const data::GrowCurveInfo *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false,false>::reference p; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::mapped_type *curve_map; // [rsp+38h] [rbp-148h]
  const std::vector<data::GrowCurveInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::GrowCurveInfo *curve_info; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 8 level:43 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:48 160 8 12 _"
                        "_for_end:48 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = rewriteCurveExcelConfig<data::AvatarCurveExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::AvatarCurveExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::AvatarCurveExcelConfig>::begin(curve_excel_config_map);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::AvatarCurveExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::AvatarCurveExcelConfig>::end(curve_excel_config_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false> *)(v5 + 96)) )
      break;
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false,false> *const)(v5 + 64));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v10 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v5 + 48, v8);
    }
    *(_DWORD *)(v5 + 48) = first;
    if ( *(_BYTE *)(((unsigned __int64)max_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_curve_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(max_curve_level);
    }
    if ( *max_curve_level < *(_DWORD *)(v5 + 48) )
      *max_curve_level = *(_DWORD *)(v5 + 48);
    v11 = (char *)(v5 + 48);
    curve_map = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::operator[](
                  curve_level_map,
                  (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v5 + 48));
    __for_range_0 = &p->second.curve_infos;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 128) = std::vector<data::GrowCurveInfo>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 160) = std::vector<data::GrowCurveInfo>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
      }
      curve_info = __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
      v13 = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::emplace<data::GrowCurveType const&,data::GrowCurveInfo const&>(
              curve_map,
              &curve_info->type,
              curve_info,
              &curve_info->type,
              v12);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
    }
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteCurveExcelConfig",
      52);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"duplicate type:");
    v15 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(v14, &curve_info->type);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AvatarCurveExcelConfig>,false,false> *const)(v5 + 64));
  }
  v18 = 1;
LABEL_34:
  if ( v18 == 1 )
    v4 = 0;
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 00000000147172F6-00000000147178F6
int32_t __cdecl rewriteCurveExcelConfig<data::GadgetCurveExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::unordered_map<unsigned int,data::GadgetCurveExcelConfig> *curve_excel_config_map,
        GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        uint32_t *max_curve_level)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  char *v11; // rsi
  const data::GrowCurveInfo *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false,false>::reference p; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::mapped_type *curve_map; // [rsp+38h] [rbp-148h]
  const std::vector<data::GrowCurveInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::GrowCurveInfo *curve_info; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 8 level:43 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:48 160 8 12 _"
                        "_for_end:48 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = rewriteCurveExcelConfig<data::GadgetCurveExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::GadgetCurveExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::GadgetCurveExcelConfig>::begin(curve_excel_config_map);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::GadgetCurveExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::GadgetCurveExcelConfig>::end(curve_excel_config_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false> *)(v5 + 96)) )
      break;
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false,false> *const)(v5 + 64));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v10 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v5 + 48, v8);
    }
    *(_DWORD *)(v5 + 48) = first;
    if ( *(_BYTE *)(((unsigned __int64)max_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_curve_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(max_curve_level);
    }
    if ( *max_curve_level < *(_DWORD *)(v5 + 48) )
      *max_curve_level = *(_DWORD *)(v5 + 48);
    v11 = (char *)(v5 + 48);
    curve_map = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::operator[](
                  curve_level_map,
                  (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v5 + 48));
    __for_range_0 = &p->second.curve_infos;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 128) = std::vector<data::GrowCurveInfo>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 160) = std::vector<data::GrowCurveInfo>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
      }
      curve_info = __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
      v13 = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::emplace<data::GrowCurveType const&,data::GrowCurveInfo const&>(
              curve_map,
              &curve_info->type,
              curve_info,
              &curve_info->type,
              v12);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
    }
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteCurveExcelConfig",
      52);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"duplicate type:");
    v15 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(v14, &curve_info->type);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetCurveExcelConfig>,false,false> *const)(v5 + 64));
  }
  v18 = 1;
LABEL_34:
  if ( v18 == 1 )
    v4 = 0;
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 00000000147166F4-0000000014716CF4
int32_t __cdecl rewriteCurveExcelConfig<data::MonsterCurveExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::unordered_map<unsigned int,data::MonsterCurveExcelConfig> *curve_excel_config_map,
        GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        uint32_t *max_curve_level)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  char *v11; // rsi
  const data::GrowCurveInfo *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false,false>::reference p; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::mapped_type *curve_map; // [rsp+38h] [rbp-148h]
  const std::vector<data::GrowCurveInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::GrowCurveInfo *curve_info; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 8 level:43 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:48 160 8 12 _"
                        "_for_end:48 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = rewriteCurveExcelConfig<data::MonsterCurveExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::MonsterCurveExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::MonsterCurveExcelConfig>::begin(curve_excel_config_map);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::MonsterCurveExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::MonsterCurveExcelConfig>::end(curve_excel_config_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false> *)(v5 + 96)) )
      break;
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false,false> *const)(v5 + 64));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v10 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v5 + 48, v8);
    }
    *(_DWORD *)(v5 + 48) = first;
    if ( *(_BYTE *)(((unsigned __int64)max_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_curve_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(max_curve_level);
    }
    if ( *max_curve_level < *(_DWORD *)(v5 + 48) )
      *max_curve_level = *(_DWORD *)(v5 + 48);
    v11 = (char *)(v5 + 48);
    curve_map = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::operator[](
                  curve_level_map,
                  (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v5 + 48));
    __for_range_0 = &p->second.curve_infos;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 128) = std::vector<data::GrowCurveInfo>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 160) = std::vector<data::GrowCurveInfo>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
      }
      curve_info = __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
      v13 = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::emplace<data::GrowCurveType const&,data::GrowCurveInfo const&>(
              curve_map,
              &curve_info->type,
              curve_info,
              &curve_info->type,
              v12);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
    }
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteCurveExcelConfig",
      52);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"duplicate type:");
    v15 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(v14, &curve_info->type);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MonsterCurveExcelConfig>,false,false> *const)(v5 + 64));
  }
  v18 = 1;
LABEL_34:
  if ( v18 == 1 )
    v4 = 0;
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 0000000014716CF5-00000000147172F5
int32_t __cdecl rewriteCurveExcelConfig<data::PartnerCurveExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::unordered_map<unsigned int,data::PartnerCurveExcelConfig> *curve_excel_config_map,
        GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        uint32_t *max_curve_level)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  char *v11; // rsi
  const data::GrowCurveInfo *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false,false>::reference p; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::mapped_type *curve_map; // [rsp+38h] [rbp-148h]
  const std::vector<data::GrowCurveInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::GrowCurveInfo *curve_info; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 8 level:43 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:48 160 8 12 _"
                        "_for_end:48 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = rewriteCurveExcelConfig<data::PartnerCurveExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::PartnerCurveExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::PartnerCurveExcelConfig>::begin(curve_excel_config_map);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::PartnerCurveExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::PartnerCurveExcelConfig>::end(curve_excel_config_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false> *)(v5 + 96)) )
      break;
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false,false> *const)(v5 + 64));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v10 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v5 + 48, v8);
    }
    *(_DWORD *)(v5 + 48) = first;
    if ( *(_BYTE *)(((unsigned __int64)max_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_curve_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(max_curve_level);
    }
    if ( *max_curve_level < *(_DWORD *)(v5 + 48) )
      *max_curve_level = *(_DWORD *)(v5 + 48);
    v11 = (char *)(v5 + 48);
    curve_map = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::operator[](
                  curve_level_map,
                  (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v5 + 48));
    __for_range_0 = &p->second.curve_infos;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 128) = std::vector<data::GrowCurveInfo>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 160) = std::vector<data::GrowCurveInfo>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
      }
      curve_info = __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
      v13 = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::emplace<data::GrowCurveType const&,data::GrowCurveInfo const&>(
              curve_map,
              &curve_info->type,
              curve_info,
              &curve_info->type,
              v12);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
    }
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteCurveExcelConfig",
      52);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"duplicate type:");
    v15 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(v14, &curve_info->type);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PartnerCurveExcelConfig>,false,false> *const)(v5 + 64));
  }
  v18 = 1;
LABEL_34:
  if ( v18 == 1 )
    v4 = 0;
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 38: range 00000000147178F7-0000000014717EF7
int32_t __cdecl rewriteCurveExcelConfig<data::WeaponCurveExcelConfig>(
        TxtConfigMgr *txt_config_mgr,
        const std::unordered_map<unsigned int,data::WeaponCurveExcelConfig> *curve_excel_config_map,
        GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        uint32_t *max_curve_level)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  char *v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  char *v11; // rsi
  const data::GrowCurveInfo *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false,false>::reference p; // [rsp+28h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::mapped_type *curve_map; // [rsp+38h] [rbp-148h]
  const std::vector<data::GrowCurveInfo> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::GrowCurveInfo *curve_info; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 8 level:43 64 8 14 __for_begin:41 96 8 12 __for_end:41 128 8 14 __for_begin:48 160 8 12 _"
                        "_for_end:48 192 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = rewriteCurveExcelConfig<data::WeaponCurveExcelConfig>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -202116109;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::WeaponCurveExcelConfig>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,data::WeaponCurveExcelConfig>::begin(curve_excel_config_map);
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, curve_excel_config_map);
  *(std::unordered_map<unsigned int,data::WeaponCurveExcelConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::WeaponCurveExcelConfig>::end(curve_excel_config_map);
  while ( 1 )
  {
    v8 = (char *)(v5 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false> *)(v5 + 96)) )
      break;
    p = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false,false> *const)(v5 + 64));
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p);
    }
    first = p->first;
    v10 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v8) = v10 != 0;
      __asan_report_store4(v5 + 48, v8);
    }
    *(_DWORD *)(v5 + 48) = first;
    if ( *(_BYTE *)(((unsigned __int64)max_curve_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)max_curve_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_curve_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(max_curve_level);
    }
    if ( *max_curve_level < *(_DWORD *)(v5 + 48) )
      *max_curve_level = *(_DWORD *)(v5 + 48);
    v11 = (char *)(v5 + 48);
    curve_map = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::operator[](
                  curve_level_map,
                  (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v5 + 48));
    __for_range_0 = &p->second.curve_infos;
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 128) = std::vector<data::GrowCurveInfo>::begin(__for_range_0);
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v11);
    *(std::vector<data::GrowCurveInfo>::const_iterator *)(v5 + 160) = std::vector<data::GrowCurveInfo>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>(
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *)(v5 + 160)) )
      {
        v17 = 1;
        goto LABEL_30;
      }
      curve_info = __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator*((const __gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
      v13 = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::emplace<data::GrowCurveType const&,data::GrowCurveInfo const&>(
              curve_map,
              &curve_info->type,
              curve_info,
              &curve_info->type,
              v12);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<data::GrowCurveInfo const*,std::vector<data::GrowCurveInfo>>::operator++((__gnu_cxx::__normal_iterator<const data::GrowCurveInfo*,std::vector<data::GrowCurveInfo> > *const)(v5 + 128));
    }
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteCurveExcelConfig",
      52);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[16])"duplicate type:");
    v15 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(v14, &curve_info->type);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v4 = -1;
    v17 = 0;
LABEL_30:
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_34;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCurveExcelConfig>,false,false> *const)(v5 + 64));
  }
  v18 = 1;
LABEL_34:
  if ( v18 == 1 )
    v4 = 0;
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 62: range 0000000014468772-0000000014468972
int32_t __cdecl GrowCurveExcelConfigMgr::rewriteAvatarCurveExcelConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewriteAvatarCurveExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( rewriteCurveExcelConfig<data::AvatarCurveExcelConfig>(
         txt_config_mgr,
         &this->avatar_curve_excel_config_map,
         &this->avatar_curve_level_map,
         &this->max_player_curve_level) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteAvatarCurveExcelConfig",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCurveExcelConfig fails");
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

// Line 73: range 0000000014468974-0000000014468B74
int32_t __cdecl GrowCurveExcelConfigMgr::rewriteMonsterCurveExcelConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewriteMonsterCurveExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( rewriteCurveExcelConfig<data::MonsterCurveExcelConfig>(
         txt_config_mgr,
         &this->monster_curve_excel_config_map,
         &this->monster_curve_level_map,
         &this->max_monster_curve_level) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteMonsterCurveExcelConfig",
      76);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCurveExcelConfig fails");
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

// Line 84: range 0000000014468B76-0000000014468D76
int32_t __cdecl GrowCurveExcelConfigMgr::rewritePartnerCurveExcelConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewritePartnerCurveExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( rewriteCurveExcelConfig<data::PartnerCurveExcelConfig>(
         txt_config_mgr,
         &this->partner_curve_excel_config_map,
         &this->partner_curve_level_map,
         &this->max_partner_curve_level) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewritePartnerCurveExcelConfig",
      87);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCurveExcelConfig fails");
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

// Line 95: range 0000000014468D78-0000000014468F7B
int32_t __cdecl GrowCurveExcelConfigMgr::rewriteGadgetCurveExcelConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewriteGadgetCurveExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( rewriteCurveExcelConfig<data::GadgetCurveExcelConfig>(
         txt_config_mgr,
         &this->gadget_curve_excel_config_map,
         &this->gadget_curve_level_map,
         &this->max_gadget_curve_level) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteGadgetCurveExcelConfig",
      98);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCurveExcelConfig fails");
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

// Line 106: range 0000000014468F7C-000000001446917F
int32_t __cdecl GrowCurveExcelConfigMgr::rewriteWeaponCurveExcelConfig(
        GrowCurveExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = GrowCurveExcelConfigMgr::rewriteWeaponCurveExcelConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( rewriteCurveExcelConfig<data::WeaponCurveExcelConfig>(
         txt_config_mgr,
         &this->weapon_curve_excel_config_map,
         &this->weapon_curve_level_map,
         &this->max_weapon_curve_level) )
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
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "rewriteWeaponCurveExcelConfig",
      109);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"rewriteCurveExcelConfig fails");
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

// Line 116: range 0000000014469180-00000000144696D6
const data::GrowCurveInfo *__fastcall findCurveInfo(
        const GrowCurveExcelConfigMgr::CurveLevelMap *curve_level_map,
        __int64 level,
        data::GrowCurveType type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  common::milog::MiLogStream *v7; // rax
  const data::GrowCurveInfo *result; // rax
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  std::unordered_map<data::GrowCurveType,data::GrowCurveInfo> *curve_map; // [rsp+18h] [rbp-168h]
  char v13[352]; // [rsp+20h] [rbp-160h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 9 level:115 48 4 8 type:115 64 8 12 it_level:117 96 8 9 <unknown> 128 8 11 it_type:124 16"
                        "0 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = findCurveInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = level;
  *(_DWORD *)(v3 + 48) = type;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, level);
  *(std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::find(curve_level_map, (const std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::key_type *)(v3 + 32));
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>::end(curve_level_map);
  v6 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
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
      3u,
      "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
      "findCurveInfo",
      120);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[18])"can't find level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  else
  {
    curve_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::GrowCurveType,data::GrowCurveInfo> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::const_iterator *)(v3 + 128) = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::find(
                                                                                                   curve_map,
                                                                                                   (const std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::const_iterator *)(v3 + 160) = std::unordered_map<data::GrowCurveType,data::GrowCurveInfo>::end(curve_map);
    v9 = std::__detail::operator==<std::pair<data::GrowCurveType const,data::GrowCurveInfo>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false> *)(v3 + 128),
           (const std::__detail::_Node_iterator_base<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        3u,
        "./src/txt_data_manual/GrowCurveExcelConfig.cpp",
        "findCurveInfo",
        127);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[17])"can't find type:");
      common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
        v10,
        (const data::GrowCurveType *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      result = 0LL;
    }
    else
    {
      result = &std::__detail::_Node_const_iterator<std::pair<data::GrowCurveType const,data::GrowCurveInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::GrowCurveType,data::GrowCurveInfo>,false,false> *const)(v3 + 128))->second;
    }
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 135: range 00000000144696D8-0000000014469706
const data::GrowCurveInfo *__cdecl GrowCurveExcelConfigMgr::findAvatarCurveInfo(
        const GrowCurveExcelConfigMgr *const this,
        uint32_t level,
        data::GrowCurveType type)
{
  return findCurveInfo(&this->avatar_curve_level_map, level, type);
};

// Line 141: range 0000000014469708-0000000014469736
const data::GrowCurveInfo *__cdecl GrowCurveExcelConfigMgr::findMonsterCurveInfo(
        const GrowCurveExcelConfigMgr *const this,
        uint32_t level,
        data::GrowCurveType type)
{
  return findCurveInfo(&this->monster_curve_level_map, level, type);
};

// Line 147: range 0000000014469738-0000000014469766
const data::GrowCurveInfo *__cdecl GrowCurveExcelConfigMgr::findPartnerCurveInfo(
        const GrowCurveExcelConfigMgr *const this,
        uint32_t level,
        data::GrowCurveType type)
{
  return findCurveInfo(&this->partner_curve_level_map, level, type);
};

// Line 153: range 0000000014469768-0000000014469796
const data::GrowCurveInfo *__cdecl GrowCurveExcelConfigMgr::findGadgetCurveInfo(
        const GrowCurveExcelConfigMgr *const this,
        uint32_t level,
        data::GrowCurveType type)
{
  return findCurveInfo(&this->gadget_curve_level_map, level, type);
};

// Line 159: range 0000000014469798-00000000144697C6
const data::GrowCurveInfo *__cdecl GrowCurveExcelConfigMgr::findWeaponCurveInfo(
        const GrowCurveExcelConfigMgr *const this,
        uint32_t level,
        data::GrowCurveType type)
{
  return findCurveInfo(&this->weapon_curve_level_map, level, type);
};

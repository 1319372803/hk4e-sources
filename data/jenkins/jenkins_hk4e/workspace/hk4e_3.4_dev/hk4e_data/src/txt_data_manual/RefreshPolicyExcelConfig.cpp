// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RefreshPolicyExcelConfig.cpp

// Line 19: range 00000000146337AE-00000000146337D2
int32_t __cdecl RefreshPolicyExcelConfigMgr::checkConfig(
        RefreshPolicyExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return RefreshPolicyExcelConfigMgr::checkRefreshPolicyConfig(this, txt_config_mgr);
};

// Line 24: range 00000000146337D4-000000001463493D
int32_t __cdecl RefreshPolicyExcelConfigMgr::checkRefreshPolicyConfig(
        const RefreshPolicyExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::vector<unsigned int>::const_reference v11; // rax
  _DWORD *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  __int64 v15; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // edx
  __int64 v21; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v22; // rax
  _DWORD *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int v26; // edx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  std::vector<unsigned int>::const_reference v29; // rax
  _DWORD *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int32_t result; // eax
  data::RefreshPolicyExcelConfigMap *__for_range; // [rsp+18h] [rbp-308h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::reference v35; // [rsp+20h] [rbp-300h]
  uint32_t *id; // [rsp+28h] [rbp-2F8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RefreshPolicyExcelConfig> >::type *refreshPolicyConfig; // [rsp+30h] [rbp-2F0h]
  const std::vector<unsigned int> *time_points_list; // [rsp+38h] [rbp-2E8h]
  char v39[720]; // [rsp+50h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 8 14 __for_begin:25 64 8 12 __for_end:25 96 8 14 __for_begin:52 128 8 12 __for_end:52 160 "
                        "8 14 __for_begin:63 192 8 12 __for_end:63 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknow"
                        "n> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RefreshPolicyExcelConfigMgr::checkRefreshPolicyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
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
  v5[536862740] = -202116109;
  __for_range = &this->refresh_policy_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_85;
    }
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::RefreshPolicyExcelConfig>(v35);
    refreshPolicyConfig = (std::tuple_element<1,const std::pair<unsigned int const,data::RefreshPolicyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RefreshPolicyExcelConfig>(v35);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    time_points_list = RefreshPolicyExcelConfigMgr::getTimePointsById(this, *id);
    if ( *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refreshPolicyConfig + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refreshPolicyConfig->type);
    }
    if ( refreshPolicyConfig->type == REFRESH_NONE )
    {
      if ( !std::vector<unsigned int>::empty(time_points_list) )
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
          "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
          "checkRefreshPolicyConfig",
          32);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               v6,
               (const char (*)[43])"REFRESH_NONE time list should be empty,id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v8 = 0;
        goto LABEL_85;
      }
      goto LABEL_83;
    }
    if ( *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refreshPolicyConfig + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refreshPolicyConfig->type);
    }
    if ( refreshPolicyConfig->type == REFRESH_INTERVAL )
    {
      if ( std::vector<unsigned int>::size(time_points_list) != 1 )
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
          "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
          "checkRefreshPolicyConfig",
          40);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 288),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                v9,
                (const char (*)[46])"REFRESH_INTERVAL time list size must be 1,id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
        v8 = 0;
        goto LABEL_85;
      }
      v11 = std::vector<unsigned int>::operator[](time_points_list, 0LL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( !*v12 )
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
          "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
          "checkRefreshPolicyConfig",
          46);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                v13,
                (const char (*)[42])"REFRESH_INTERVAL time can not be zero,id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        v2 = -1;
        v8 = 0;
        goto LABEL_85;
      }
      goto LABEL_83;
    }
    v15 = (((_BYTE)refreshPolicyConfig + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refreshPolicyConfig + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refreshPolicyConfig->type);
    }
    if ( refreshPolicyConfig->type == REFRESH_DAILY )
    {
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v15);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(time_points_list);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v15);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(time_points_list);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
        {
          v20 = 1;
          goto LABEL_49;
        }
        v16 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        if ( *v17 > 0x1517Fu )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      }
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
        "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
        "checkRefreshPolicyConfig",
        56);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v18,
              (const char (*)[43])"REFRESH_DAILY time is zero or too big ,id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
LABEL_49:
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v20 != 1 )
      {
        v8 = 0;
        goto LABEL_85;
      }
      goto LABEL_83;
    }
    v21 = (((_BYTE)refreshPolicyConfig + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refreshPolicyConfig + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refreshPolicyConfig->type);
    }
    if ( refreshPolicyConfig->type == REFRESH_WEEKlY )
    {
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v21);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(time_points_list);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v21);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(time_points_list);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        {
          v26 = 1;
          goto LABEL_68;
        }
        v22 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        if ( *v23 > 0x93A7Fu )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      }
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
        "checkRefreshPolicyConfig",
        67);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v24,
              (const char (*)[44])"REFRESH_WEEKlY time is zero or too big ,id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v26 = 0;
LABEL_68:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v26 != 1 )
      {
        v8 = 0;
        goto LABEL_85;
      }
      goto LABEL_83;
    }
    if ( *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)refreshPolicyConfig + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&refreshPolicyConfig->type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&refreshPolicyConfig->type);
    }
    if ( refreshPolicyConfig->type == REFRESH_DAYBEGIN_INTERVAL )
    {
      if ( std::vector<unsigned int>::size(time_points_list) != 1 )
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
          "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
          "checkRefreshPolicyConfig",
          76);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                v27,
                (const char (*)[55])"REFRESH_DAYBEGIN_INTERVAL time list size must be 1,id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        v2 = -1;
        v8 = 0;
        goto LABEL_85;
      }
      v29 = std::vector<unsigned int>::operator[](time_points_list, 0LL);
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      if ( !*v30 )
        break;
    }
LABEL_83:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
    "checkRefreshPolicyConfig",
    82);
  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 608),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v32 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v31,
          (const char (*)[51])"REFRESH_DAYBEGIN_INTERVAL time can not be zero,id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
  v2 = -1;
  v8 = 0;
LABEL_85:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 92: range 000000001463493E-000000001463545F
int32_t __cdecl RefreshPolicyExcelConfigMgr::rewriteConfig(
        RefreshPolicyExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v11; // rax
  uint32_t *p_refresh_id; // rax
  __int64 v13; // rsi
  uint32_t refresh_id; // ecx
  char v15; // al
  int v16; // eax
  RefreshPolicyExcelConfigMgr *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const data::GatherSaveType *p_save_type; // rcx
  const data::RefreshType *p_type; // rdx
  __int64 v22; // rsi
  const unsigned int *v23; // rcx
  std::pair<data::RefreshType,data::GatherSaveType> *v24; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType> >,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int v28; // eax
  int32_t result; // eax
  data::RefreshPolicyExcelConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-258h]
  const std::map<unsigned int,std::vector<unsigned int>>::key_type *id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,data::RefreshPolicyExcelConfig> >::type *refreshPolicyConfig; // [rsp+38h] [rbp-248h]
  std::map<unsigned int,std::vector<unsigned int>>::mapped_type *vector; // [rsp+40h] [rbp-240h]
  data::GatherExcelConfigMap *__for_range_0; // [rsp+48h] [rbp-238h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::reference v37; // [rsp+50h] [rbp-230h]
  std::tuple_element<0,std::pair<unsigned int const,data::GatherExcelConfig> >::type *gather_id; // [rsp+58h] [rbp-228h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GatherExcelConfig> >::type *gather_config; // [rsp+60h] [rbp-220h]
  data::RefreshPolicyExcelConfig *refresh_config_ptr; // [rsp+68h] [rbp-218h]
  char v41[528]; // [rsp+70h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 9 <unknown> 48 4 14 refresh_id:108 64 8 14 __for_begin:94 96 8 12 __for_end:94 128 8 15 "
                        "__for_begin:106 160 8 13 __for_end:106 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 3"
                        "52 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RefreshPolicyExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->refresh_policy_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RefreshPolicyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::RefreshPolicyExcelConfig>(__in);
    refreshPolicyConfig = std::get<1ul,unsigned int const,data::RefreshPolicyExcelConfig>(__in);
    vector = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->time_points_map, id);
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 224),
      ";",
      (const std::allocator<char> *)(v3 + 32));
    v7 = common::tools::StringUtils::splitToList<unsigned int>(
           &refreshPolicyConfig->time,
           (const std::string *)(v3 + 224),
           vector,
           1) != 0;
    std::string::~string((void *)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 32);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
      break;
    M_current = std::vector<unsigned int>::end(vector)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(vector)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v11,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RefreshPolicyExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
    "rewriteConfig",
    99);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 288),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v6 = byte_1ADC9320;
  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v8, (const char (*)[33])byte_1ADC9320);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
  *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    __for_range_0 = &txt_config_mgr->gather_config_mgr.gather_excel_config_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::GatherExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::GatherExcelConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::GatherExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 160)) )
    {
      v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 128));
      gather_id = std::get<0ul,unsigned int const,data::GatherExcelConfig>(v37);
      gather_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GatherExcelConfig>(v37);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      p_refresh_id = &gather_config->refresh_id;
      v13 = (((_BYTE)gather_config + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)p_refresh_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gather_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_refresh_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_refresh_id);
      }
      refresh_id = gather_config->refresh_id;
      v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store4(v3 + 48, v13);
      }
      *(_DWORD *)(v3 + 48) = refresh_id;
      if ( *(_DWORD *)(v3 + 48) )
      {
        v17 = this;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        refresh_config_ptr = data::RefreshPolicyExcelConfigMgrBase::findRefreshPolicyExcelConfig(
                               v17,
                               *(unsigned int *)(v3 + 48));
        if ( refresh_config_ptr )
        {
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          p_save_type = &gather_config->save_type;
          p_type = &refresh_config_ptr->type;
          v22 = *(unsigned __int8 *)(((v3 + 192) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v22 )
            __asan_report_store8(v3 + 192, v22);
          *(std::pair<data::RefreshType,data::GatherSaveType> *)(v3 + 192) = std::make_pair<data::RefreshType const&,data::GatherSaveType const&>(
                                                                               p_type,
                                                                               p_save_type);
          v25 = std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::emplace<unsigned int const&,std::pair<data::RefreshType,data::GatherSaveType>>(
                  &this->gather_refresh_map,
                  gather_id,
                  (std::pair<data::RefreshType,data::GatherSaveType> *)(v3 + 192),
                  v23,
                  v24);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( !v25.second )
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
              "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
              "rewriteConfig",
              121);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v26,
                    (const char (*)[20])"repeated gather_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, gather_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 1;
          }
          else
          {
            v16 = 2;
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
            "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
            "rewriteConfig",
            116);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v18,
                  (const char (*)[33])"can not find refresh config,id :");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 1;
        }
      }
      else
      {
        v16 = 0;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v16 && v16 != 2 )
      {
        v28 = 0;
        goto LABEL_47;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 128));
    }
    v28 = 1;
LABEL_47:
    if ( v28 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 129: range 0000000014635460-0000000014635677
const std::vector<unsigned int> *__fastcall RefreshPolicyExcelConfigMgr::getTimePointsById(
        const RefreshPolicyExcelConfigMgr *const this,
        std::vector<unsigned int> *refresh_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::vector<unsigned int>> *p_time_points_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 refresh_id:128 64 8 6 it:131 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RefreshPolicyExcelConfigMgr::getTimePointsById;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)refresh_id;
  if ( !(_BYTE)`guard variable for'RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)::dummy_vector
    && __cxa_guard_acquire(&`guard variable for'RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)::dummy_vector) )
  {
    std::vector<unsigned int>::vector(&RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)const::dummy_vector);
    __cxa_guard_release(&`guard variable for'RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)::dummy_vector);
    refresh_id = &RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)const::dummy_vector;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)const::dummy_vector,
      &_dso_handle);
  }
  p_time_points_map = &this->time_points_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, refresh_id);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     p_time_points_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->time_points_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  else
    result = &RefreshPolicyExcelConfigMgr::getTimePointsById(unsigned int)const::dummy_vector;
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

// Line 141: range 0000000014635678-0000000014636DEC
std::pair<unsigned int,unsigned int> __cdecl RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
        const RefreshPolicyExcelConfigMgr *const this,
        const std::vector<unsigned int> *time_points_vec,
        data::RefreshType type,
        uint32_t last_refresh_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const unsigned int *v7; // r14
  __int64 v8; // rsi
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  uint32_t v11; // ecx
  char v12; // al
  std::pair<unsigned int,unsigned int> v13; // rax
  uint32_t v14; // ecx
  char v15; // al
  const unsigned int *v16; // r14
  const unsigned int *v17; // rcx
  char *v18; // rsi
  bool v19; // al
  unsigned int *v20; // rax
  int *v21; // rdx
  char v22; // cl
  int v23; // r14d
  const std::vector<unsigned int> *v24; // rsi
  std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > >::reference v25; // rax
  _DWORD *v26; // rdx
  int v27; // ecx
  char v28; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v29; // rax
  _DWORD *v30; // rdx
  int v31; // ecx
  char v32; // al
  char *v33; // rsi
  bool v34; // al
  unsigned int *v35; // rax
  int *v36; // rdx
  char v37; // cl
  int v38; // r14d
  const std::vector<unsigned int> *v39; // rsi
  std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > >::reference v40; // rax
  _DWORD *v41; // rdx
  int v42; // ecx
  char v43; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v44; // rax
  _DWORD *v45; // rdx
  uint32_t v46; // ecx
  char v47; // al
  unsigned int *v48; // rax
  int *v49; // rdx
  char v50; // cl
  int v51; // r14d
  __int64 v52; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v53; // rax
  _DWORD *v54; // rdx
  int v55; // ecx
  char v56; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v57; // rax
  _DWORD *v58; // rdx
  uint32_t v59; // ecx
  char v60; // al
  uint32_t v61; // ecx
  char v62; // al
  _BOOL8 v63; // rsi
  const unsigned int *M_current; // r14
  const unsigned int *v65; // rcx
  char *v66; // rsi
  bool v67; // al
  unsigned int *v68; // rax
  int *v69; // rdx
  char v70; // cl
  int v71; // r14d
  const std::vector<unsigned int> *v72; // rsi
  std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > >::reference v73; // rax
  _DWORD *v74; // rdx
  int v75; // ecx
  char v76; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v77; // rax
  _DWORD *v78; // rdx
  int v79; // ecx
  char v80; // al
  char *v81; // rsi
  bool v82; // al
  unsigned int *v83; // rax
  int *v84; // rdx
  char v85; // cl
  int v86; // r14d
  const std::vector<unsigned int> *v87; // rsi
  std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > >::reference v88; // rax
  _DWORD *v89; // rdx
  int v90; // ecx
  char v91; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v92; // rax
  _DWORD *v93; // rdx
  uint32_t v94; // ecx
  char v95; // al
  unsigned int *v96; // rax
  int *v97; // rdx
  char v98; // cl
  int v99; // r14d
  __int64 v100; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v101; // rax
  _DWORD *v102; // rdx
  int v103; // ecx
  char v104; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v105; // rax
  _DWORD *v106; // rdx
  uint32_t v107; // ecx
  char v108; // al
  __int64 v109; // rsi
  std::vector<unsigned int>::const_reference v110; // rax
  _DWORD *v111; // rdx
  int v112; // ecx
  char v113; // al
  __int64 v114; // rsi
  std::vector<unsigned int>::const_reference v115; // rax
  _DWORD *v116; // rdx
  uint32_t v117; // ecx
  char v118; // al
  const std::vector<unsigned int> *time_points_veca; // [rsp+10h] [rbp-410h]
  uint32_t day_begin_0; // [rsp+24h] [rbp-3FCh]
  uint32_t week_begin; // [rsp+28h] [rbp-3F8h]
  uint32_t day_begin; // [rsp+2Ch] [rbp-3F4h]
  char v125[1008]; // [rsp+30h] [rbp-3F0h] BYREF

  time_points_veca = time_points_vec;
  v4 = (unsigned __int64)v125;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(960LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "38 32 4 14 max_uint32:142 48 4 9 <unknown> 64 4 13 time_diff:158 80 4 9 <unknown> 96 4 9 <unknow"
                        "n> 112 4 9 <unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 13 time_diff:17"
                        "9 192 4 9 <unknown> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 "
                        "4 9 <unknown> 288 4 9 <unknown> 304 4 9 <unknown> 320 8 14 upper_iter:159 352 8 9 <unknown> 384 "
                        "8 9 <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 512 8 9 <unknown> 544 8 9 <u"
                        "nknown> 576 8 9 <unknown> 608 8 9 <unknown> 640 8 14 upper_iter:180 672 8 9 <unknown> 704 8 9 <u"
                        "nknown> 736 8 9 <unknown> 768 8 9 <unknown> 800 8 9 <unknown> 832 8 9 <unknown> 864 8 9 <unknown"
                        "> 896 8 9 <unknown> 928 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -234556924;
  v6[536862727] = -234556924;
  v6[536862728] = -234556924;
  v6[536862729] = -234556924;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -218959360;
  v6[536862733] = -218959360;
  v6[536862734] = -218959360;
  v6[536862735] = -218959360;
  v6[536862736] = -218959360;
  v6[536862737] = -218959360;
  v6[536862738] = -218959360;
  v6[536862739] = -218959360;
  v6[536862740] = -218959360;
  v6[536862741] = -218959360;
  v6[536862742] = -218959360;
  v6[536862743] = -218959360;
  v6[536862744] = -218959360;
  v6[536862745] = -218959360;
  v6[536862746] = -218959360;
  v6[536862747] = -218959360;
  v6[536862748] = -218959360;
  v6[536862749] = -202116352;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 32, time_points_vec);
  *(_DWORD *)(v4 + 32) = -1;
  if ( std::vector<unsigned int>::empty(time_points_vec) )
    goto LABEL_141;
  if ( type == REFRESH_DAYBEGIN_INTERVAL )
  {
    day_begin_0 = common::tools::TimeUtils::getDayTime(last_refresh_time);
    v109 = 0LL;
    v110 = std::vector<unsigned int>::operator[](time_points_veca, 0LL);
    v111 = v110;
    if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v110);
    }
    v112 = 86400 * *v111;
    v113 = *(_BYTE *)(((v4 + 304) >> 3) + 0x7FFF8000);
    if ( v113 != 0 && v113 <= 3 )
    {
      LOBYTE(v109) = v113 != 0;
      __asan_report_store4(v4 + 304, v109);
    }
    *(_DWORD *)(v4 + 304) = v112;
    v114 = 0LL;
    v115 = std::vector<unsigned int>::operator[](time_points_veca, 0LL);
    v116 = v115;
    if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v115 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v115);
    }
    v117 = 86400 * *v116 + day_begin_0;
    v118 = *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000);
    if ( v118 != 0 && v118 <= 3 )
    {
      LOBYTE(v114) = v118 != 0;
      __asan_report_store4(v4 + 288, v114);
    }
    *(_DWORD *)(v4 + 288) = v117;
    v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 288), (unsigned int *)(v4 + 304));
  }
  else
  {
    if ( type > REFRESH_DAYBEGIN_INTERVAL )
    {
LABEL_141:
      v13 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v4 + 32), (unsigned int *)(v4 + 32));
      goto LABEL_142;
    }
    switch ( type )
    {
      case REFRESH_WEEKlY:
        week_begin = common::tools::TimeUtils::getWeekTime(last_refresh_time, 0LL);
        v61 = last_refresh_time - week_begin;
        v62 = *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000);
        v63 = v62 != 0;
        if ( v62 != 0 && v62 <= 3 )
          __asan_report_store4(v4 + 176, v63);
        *(_DWORD *)(v4 + 176) = v61;
        M_current = std::vector<unsigned int>::end(time_points_veca)._M_current;
        v65 = std::vector<unsigned int>::begin(time_points_veca)._M_current;
        if ( *(_BYTE *)(((v4 + 640) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 640, v63);
        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 640) = std::upper_bound<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v65, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v4 + 176));
        if ( *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 672, M_current);
        *(std::vector<unsigned int>::const_iterator *)(v4 + 672) = std::vector<unsigned int>::end(time_points_veca);
        v66 = (char *)(v4 + 672);
        v67 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 640),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 672));
        *(_BYTE *)(((v4 + 672) >> 3) + 0x7FFF8000) = -8;
        if ( v67 )
        {
          *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) = 4;
          *(_BYTE *)(((v4 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 736) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 736, v66);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 736) = std::vector<unsigned int>::begin(time_points_veca);
          v68 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 736));
          v69 = (int *)v68;
          v70 = *(_BYTE *)(((unsigned __int64)v68 >> 3) + 0x7FFF8000);
          LOBYTE(v66) = v70 != 0;
          if ( v70 != 0 && (char)(((unsigned __int8)v68 & 7) + 3) >= v70 )
            __asan_report_load4(v68);
          v71 = *v69;
          *(_BYTE *)(((v4 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 768) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 768, v66);
          v72 = time_points_veca;
          std::vector<unsigned int>::rbegin((const std::vector<unsigned int> *const)(v4 + 768));
          v73 = std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *const)(v4 + 768));
          v74 = v73;
          if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v73);
          }
          v75 = v71 - *v74 + 604800;
          v76 = *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000);
          LOBYTE(v72) = v76 != 0;
          if ( v76 != 0 && v76 <= 3 )
            __asan_report_store4(v4 + 208, v72);
          *(_DWORD *)(v4 + 208) = v75;
          *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 4;
          *(_BYTE *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 704) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 704, v72);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 704) = std::vector<unsigned int>::begin(time_points_veca);
          v77 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 704));
          v78 = v77;
          if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v77);
          }
          v79 = *v78 + week_begin + 604800;
          v80 = *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000);
          if ( v80 != 0 && v80 <= 3 )
          {
            LOBYTE(v72) = v80 != 0;
            __asan_report_store4(v4 + 192, v72);
          }
          *(_DWORD *)(v4 + 192) = v79;
          v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 192), (unsigned int *)(v4 + 208));
        }
        else
        {
          *(_BYTE *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 800) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 800, v66);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 800) = std::vector<unsigned int>::begin(time_points_veca);
          v81 = (char *)(v4 + 800);
          v82 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 640),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 800));
          *(_BYTE *)(((v4 + 800) >> 3) + 0x7FFF8000) = -8;
          if ( v82 )
          {
            *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) = 4;
            *(_BYTE *)(((v4 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 864) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 864, v81);
            *(std::vector<unsigned int>::const_iterator *)(v4 + 864) = std::vector<unsigned int>::begin(time_points_veca);
            v83 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 864));
            v84 = (int *)v83;
            v85 = *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000);
            LOBYTE(v81) = v85 != 0;
            if ( v85 != 0 && (char)(((unsigned __int8)v83 & 7) + 3) >= v85 )
              __asan_report_load4(v83);
            v86 = *v84;
            *(_BYTE *)(((v4 + 896) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 896) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 896, v81);
            v87 = time_points_veca;
            std::vector<unsigned int>::rbegin((const std::vector<unsigned int> *const)(v4 + 896));
            v88 = std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *const)(v4 + 896));
            v89 = v88;
            if ( *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v88 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v88 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v88);
            }
            v90 = v86 - *v89 + 604800;
            v91 = *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000);
            LOBYTE(v87) = v91 != 0;
            if ( v91 != 0 && v91 <= 3 )
              __asan_report_store4(v4 + 240, v87);
            *(_DWORD *)(v4 + 240) = v90;
            *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 4;
            *(_BYTE *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 832) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 832, v87);
            *(std::vector<unsigned int>::const_iterator *)(v4 + 832) = std::vector<unsigned int>::begin(time_points_veca);
            v92 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 832));
            v93 = v92;
            if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v92);
            }
            v94 = *v93 + week_begin;
            v95 = *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000);
            if ( v95 != 0 && v95 <= 3 )
            {
              LOBYTE(v87) = v95 != 0;
              __asan_report_store4(v4 + 224, v87);
            }
            *(_DWORD *)(v4 + 224) = v94;
            v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 224), (unsigned int *)(v4 + 240));
          }
          else
          {
            *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000) = 4;
            v96 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 640));
            v97 = (int *)v96;
            v98 = *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000);
            LOBYTE(v81) = v98 != 0;
            if ( v98 != 0 && (char)(((unsigned __int8)v96 & 7) + 3) >= v98 )
              __asan_report_load4(v96);
            v99 = *v97;
            *(_BYTE *)(((v4 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 928) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 928, v81);
            v100 = 1LL;
            *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 928) = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator-((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 640), 1LL);
            v101 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 928));
            v102 = v101;
            if ( *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v101 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v101);
            }
            v103 = v99 - *v102;
            v104 = *(_BYTE *)(((v4 + 272) >> 3) + 0x7FFF8000);
            if ( v104 != 0 && v104 <= 3 )
            {
              LOBYTE(v100) = v104 != 0;
              __asan_report_store4(v4 + 272, v100);
            }
            *(_DWORD *)(v4 + 272) = v103;
            *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 4;
            v105 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 640));
            v106 = v105;
            if ( *(_BYTE *)(((unsigned __int64)v105 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v105 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v105 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v105);
            }
            v107 = *v106 + week_begin;
            v108 = *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000);
            if ( v108 != 0 && v108 <= 3 )
            {
              LOBYTE(v100) = v108 != 0;
              __asan_report_store4(v4 + 256, v100);
            }
            *(_DWORD *)(v4 + 256) = v107;
            v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 256), (unsigned int *)(v4 + 272));
          }
        }
        break;
      case REFRESH_INTERVAL:
        v7 = std::vector<unsigned int>::operator[](time_points_vec, 0LL);
        v8 = 0LL;
        v9 = std::vector<unsigned int>::operator[](time_points_veca, 0LL);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10 + last_refresh_time;
        v12 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v8) = v12 != 0;
          __asan_report_store4(v4 + 48, v8);
        }
        *(_DWORD *)(v4 + 48) = v11;
        v13 = std::make_pair<unsigned int,unsigned int const&>((unsigned int *)(v4 + 48), v7);
        break;
      case REFRESH_DAILY:
        day_begin = common::tools::TimeUtils::getDayTime(last_refresh_time);
        v14 = last_refresh_time - day_begin;
        v15 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
        LOBYTE(time_points_vec) = v15 != 0;
        if ( v15 != 0 && v15 <= 3 )
          __asan_report_store4(v4 + 64, time_points_vec);
        *(_DWORD *)(v4 + 64) = v14;
        v16 = std::vector<unsigned int>::end(time_points_veca)._M_current;
        v17 = std::vector<unsigned int>::begin(time_points_veca)._M_current;
        if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 320, time_points_vec);
        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 320) = std::upper_bound<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v17, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v16, (const unsigned int *)(v4 + 64));
        if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 352, v16);
        *(std::vector<unsigned int>::const_iterator *)(v4 + 352) = std::vector<unsigned int>::end(time_points_veca);
        v18 = (char *)(v4 + 352);
        v19 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 320),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 352));
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
        if ( v19 )
        {
          *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
          *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 416, v18);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 416) = std::vector<unsigned int>::begin(time_points_veca);
          v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 416));
          v21 = (int *)v20;
          v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v22 != 0;
          if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
            __asan_report_load4(v20);
          v23 = *v21;
          *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 448, v18);
          v24 = time_points_veca;
          std::vector<unsigned int>::rbegin((const std::vector<unsigned int> *const)(v4 + 448));
          v25 = std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *const)(v4 + 448));
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v27 = v23 - *v26 + 86400;
          v28 = *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000);
          LOBYTE(v24) = v28 != 0;
          if ( v28 != 0 && v28 <= 3 )
            __asan_report_store4(v4 + 96, v24);
          *(_DWORD *)(v4 + 96) = v27;
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
          *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 384, v24);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 384) = std::vector<unsigned int>::begin(time_points_veca);
          v29 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 384));
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          v31 = *v30 + day_begin + 86400;
          v32 = *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000);
          if ( v32 != 0 && v32 <= 3 )
          {
            LOBYTE(v24) = v32 != 0;
            __asan_report_store4(v4 + 80, v24);
          }
          *(_DWORD *)(v4 + 80) = v31;
          v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 80), (unsigned int *)(v4 + 96));
        }
        else
        {
          *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v4 + 480, v18);
          *(std::vector<unsigned int>::const_iterator *)(v4 + 480) = std::vector<unsigned int>::begin(time_points_veca);
          v33 = (char *)(v4 + 480);
          v34 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 320),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 480));
          *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = -8;
          if ( v34 )
          {
            *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 4;
            *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 544) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 544, v33);
            *(std::vector<unsigned int>::const_iterator *)(v4 + 544) = std::vector<unsigned int>::begin(time_points_veca);
            v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 544));
            v36 = (int *)v35;
            v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
            LOBYTE(v33) = v37 != 0;
            if ( v37 != 0 && (char)(((unsigned __int8)v35 & 7) + 3) >= v37 )
              __asan_report_load4(v35);
            v38 = *v36;
            *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 576) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 576, v33);
            v39 = time_points_veca;
            std::vector<unsigned int>::rbegin((const std::vector<unsigned int> *const)(v4 + 576));
            v40 = std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > > *const)(v4 + 576));
            v41 = v40;
            if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v40);
            }
            v42 = v38 - *v41 + 86400;
            v43 = *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000);
            LOBYTE(v39) = v43 != 0;
            if ( v43 != 0 && v43 <= 3 )
              __asan_report_store4(v4 + 128, v39);
            *(_DWORD *)(v4 + 128) = v42;
            *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 4;
            *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 512, v39);
            *(std::vector<unsigned int>::const_iterator *)(v4 + 512) = std::vector<unsigned int>::begin(time_points_veca);
            v44 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 512));
            v45 = v44;
            if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v44);
            }
            v46 = *v45 + day_begin;
            v47 = *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000);
            if ( v47 != 0 && v47 <= 3 )
            {
              LOBYTE(v39) = v47 != 0;
              __asan_report_store4(v4 + 112, v39);
            }
            *(_DWORD *)(v4 + 112) = v46;
            v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 112), (unsigned int *)(v4 + 128));
          }
          else
          {
            *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 4;
            v48 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 320));
            v49 = (int *)v48;
            v50 = *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000);
            LOBYTE(v33) = v50 != 0;
            if ( v50 != 0 && (char)(((unsigned __int8)v48 & 7) + 3) >= v50 )
              __asan_report_load4(v48);
            v51 = *v49;
            *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v4 + 608) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v4 + 608, v33);
            v52 = 1LL;
            *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 608) = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator-((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 320), 1LL);
            v53 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 608));
            v54 = v53;
            if ( *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v53 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v53);
            }
            v55 = v51 - *v54;
            v56 = *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000);
            if ( v56 != 0 && v56 <= 3 )
            {
              LOBYTE(v52) = v56 != 0;
              __asan_report_store4(v4 + 160, v52);
            }
            *(_DWORD *)(v4 + 160) = v55;
            *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) = 4;
            v57 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 320));
            v58 = v57;
            if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v57);
            }
            v59 = *v58 + day_begin;
            v60 = *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000);
            if ( v60 != 0 && v60 <= 3 )
            {
              LOBYTE(v52) = v60 != 0;
              __asan_report_store4(v4 + 144, v52);
            }
            *(_DWORD *)(v4 + 144) = v59;
            v13 = std::make_pair<unsigned int,unsigned int>((unsigned int *)(v4 + 144), (unsigned int *)(v4 + 160));
          }
        }
        break;
      default:
        goto LABEL_141;
    }
  }
LABEL_142:
  if ( v125 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v13;
};

// Line 210: range 0000000014636DEE-00000000146370F5
std::pair<unsigned int,unsigned int> __fastcall RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
        const RefreshPolicyExcelConfigMgr *const this,
        __int64 refresh_id,
        uint32_t last_refresh_time)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::pair<unsigned int,unsigned int> result; // rax
  common::milog::MiLogStream *v7; // rax
  const data::RefreshPolicyExcelConfig *config_ptr; // [rsp+10h] [rbp-B0h]
  const std::vector<unsigned int> *time_points_vec; // [rsp+18h] [rbp-A8h]
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 max_uint32:211 48 4 14 refresh_id:209 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = refresh_id;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, refresh_id);
  *(_DWORD *)(v3 + 32) = -1;
  if ( *(_DWORD *)(v3 + 48) )
  {
    config_ptr = data::RefreshPolicyExcelConfigMgrBase::findRefreshPolicyExcelConfig(this, *(unsigned int *)(v3 + 48));
    if ( config_ptr )
    {
      time_points_vec = RefreshPolicyExcelConfigMgr::getTimePointsById(
                          this,
                          (std::vector<unsigned int> *)*(unsigned int *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->type);
      }
      result = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
                 this,
                 time_points_vec,
                 config_ptr->type,
                 last_refresh_time);
    }
    else
    {
      if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
        "getNextRefreshTimeAndRefreshInterval",
        220);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[33])"can not find refresh config,id :");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
      result = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 32), (unsigned int *)(v3 + 32));
    }
  }
  else
  {
    result = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 32), (unsigned int *)(v3 + 32));
  }
  if ( v11 == (char *)v3 )
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

// Line 231: range 00000000146370F6-00000000146373CE
// local variable allocation has failed, the output may be wrong!
bool __cdecl RefreshPolicyExcelConfigMgr::isTimeToRefresh(
        const RefreshPolicyExcelConfigMgr *const this,
        uint32_t refresh_id,
        uint32_t last_refresh_time,
        uint32_t now_time)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  bool result; // al
  uint32_t *next_refresh_time; // [rsp+20h] [rbp-B0h]
  const unsigned int *refresh_interval; // [rsp+28h] [rbp-A8h]
  char v15[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = RefreshPolicyExcelConfigMgr::isTimeToRefresh;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, *(_QWORD *)&refresh_id);
  *(std::pair<unsigned int,unsigned int> *)(v4 + 32) = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
                                                         this,
                                                         refresh_id,
                                                         last_refresh_time);
  next_refresh_time = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v4 + 32));
  refresh_interval = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v4 + 32));
  if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 64, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
    "isTimeToRefresh",
    234);
  v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
         (common::milog::MiLogStream *const)(v4 + 64),
         (const char (*)[19])"next_refresh_time:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, next_refresh_time);
  v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])" refresh_interval:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, refresh_interval);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
  *(_DWORD *)(((v4 + 64) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(next_refresh_time);
  }
  result = now_time >= *next_refresh_time;
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 245: range 00000000146373D0-000000001463786D
// local variable allocation has failed, the output may be wrong!
bool __cdecl RefreshPolicyExcelConfigMgr::isTimeToRefresh(
        const RefreshPolicyExcelConfigMgr *const this,
        uint32_t time_point,
        data::RefreshType type,
        uint32_t last_refresh_time,
        uint32_t now_time)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  bool v11; // r14
  bool result; // al
  uint32_t *next_refresh_time; // [rsp+20h] [rbp-120h]
  const unsigned int *refresh_interval; // [rsp+28h] [rbp-118h]
  char v18[272]; // [rsp+30h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 9 <unknown> 48 4 9 <unknown> 64 8 9 <unknown> 96 24 19 time_points_vec:246 160 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = RefreshPolicyExcelConfigMgr::isTimeToRefresh;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -218959360;
  v7[536862723] = -234881024;
  v7[536862724] = -218959118;
  v7[536862726] = -202116109;
  if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v5 + 48, *(_QWORD *)&time_point);
  *(_DWORD *)(v5 + 48) = time_point;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v5 + 32));
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)(v5 + 96),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, v5 + 48),
    (const std::vector<unsigned int>::allocator_type *)(v5 + 32));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v5 + 32));
  *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, v5 + 48);
  *(std::pair<unsigned int,unsigned int> *)(v5 + 64) = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
                                                         this,
                                                         (const std::vector<unsigned int> *)(v5 + 96),
                                                         type,
                                                         last_refresh_time);
  next_refresh_time = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v5 + 64));
  refresh_interval = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)(v5 + 64));
  *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v5 + 160, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v5 + 160),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/txt_data_manual/RefreshPolicyExcelConfig.cpp",
    "isTimeToRefresh",
    249);
  v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
         (common::milog::MiLogStream *const)(v5 + 160),
         (const char (*)[19])"next_refresh_time:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, next_refresh_time);
  v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" refresh_interval:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, refresh_interval);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
  *(_DWORD *)(((v5 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(next_refresh_time);
  }
  v11 = now_time >= *next_refresh_time;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 96));
  result = v11;
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 259: range 000000001463786E-0000000014637A29
const std::pair<data::RefreshType,data::GatherSaveType> *__fastcall RefreshPolicyExcelConfigMgr::getGatherTypeInfo(
        const RefreshPolicyExcelConfigMgr *const this,
        __int64 gather_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>> *p_gather_refresh_map; // rdx
  std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>> *v6; // rdx
  bool v7; // al
  const std::pair<data::RefreshType,data::GatherSaveType> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 gather_id:258 64 8 8 iter:260 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RefreshPolicyExcelConfigMgr::getGatherTypeInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gather_id;
  p_gather_refresh_map = &this->gather_refresh_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gather_id);
  *(std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::find(p_gather_refresh_map, (const std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::key_type *)(v2 + 48));
  v6 = &this->gather_refresh_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::pair<data::RefreshType,data::GatherSaveType>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<data::RefreshType,data::GatherSaveType> >,false,false> *const)(v2 + 64))->second;
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

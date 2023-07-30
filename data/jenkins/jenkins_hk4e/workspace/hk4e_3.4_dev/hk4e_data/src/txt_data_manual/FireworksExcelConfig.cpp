// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/FireworksExcelConfig.cpp

// Line 19: range 00000000143F9D0A-00000000143F9D43
int32_t __cdecl FireworksExcelConfigMgr::rewriteConfig(
        FireworksExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( FireworksExcelConfigMgr::rewriteFireworksConfig(this, txt_config_mgr) )
    return -1;
  else
    return 0;
};

// Line 28: range 00000000143F9D44-00000000143FAC93
int32_t __cdecl FireworksExcelConfigMgr::rewriteFireworksConfig(
        FireworksExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  int32_t standard_value; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v19; // rax
  int32_t *v20; // rdx
  int32_t v21; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v22; // rax
  int32_t *v23; // rdx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v30; // rax
  int *v31; // rdx
  int v32; // edi
  std::vector<int>::const_reference v33; // rax
  unsigned int *v34; // rdx
  __int64 v35; // rsi
  FireworksReformParamInfo *v36; // rax
  FireworksReformParamInfo *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::FireworksReformParamType,FireworksReformParamInfo>,false,false>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  unsigned __int64 v43; // rdx
  int v44; // edx
  int v45; // r15d
  std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *v46; // rdx
  const unsigned int *v47; // rcx
  std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *v48; // r8
  unsigned __int64 v49; // rax
  int v50; // eax
  int32_t result; // eax
  data::FireworksExcelConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-258h]
  const unsigned int *fireworks_id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,data::FireworksExcelConfig> >::type *fireworks_config; // [rsp+38h] [rbp-248h]
  std::vector<data::FireworksReformParamConfig> *__for_range_0; // [rsp+40h] [rbp-240h]
  const data::FireworksReformParamConfig *reform_param; // [rsp+48h] [rbp-238h]
  char v59[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 14 __for_begin:29 64 8 12 __for_end:29 96 8 14 __for_begin:35 128 8 12 __for_end:35 160 2"
                        "0 20 reform_param_info:37 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 56 24 ref"
                        "orm_param_info_map:34";
  *(_QWORD *)(v3 + 16) = FireworksExcelConfigMgr::rewriteFireworksConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234618880;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  __for_range = &this->fireworks_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FireworksExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::FireworksExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FireworksExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::FireworksExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FireworksExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FireworksExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FireworksExcelConfig>,false> *)(v3 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false> *const)(v3 + 32));
    fireworks_id = std::get<0ul,unsigned int const,data::FireworksExcelConfig>(__in);
    fireworks_config = std::get<1ul,unsigned int const,data::FireworksExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::FireworksReformParamConfig,data::FireworksReformParamType data::FireworksReformParamConfig::*>(
      &fireworks_config->reform_param_list,
      (data::FireworksReformParamType *)8);
    v6 = ((v3 + 416) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 6) = 0;
    std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::unordered_map((std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *const)(v3 + 416));
    __for_range_0 = &fireworks_config->reform_param_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, 8LL);
    *(std::vector<data::FireworksReformParamConfig>::iterator *)(v3 + 96) = std::vector<data::FireworksReformParamConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, 8LL);
    *(std::vector<data::FireworksReformParamConfig>::iterator *)(v3 + 128) = std::vector<data::FireworksReformParamConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::FireworksReformParamConfig *,std::vector<data::FireworksReformParamConfig>>(
              (const __gnu_cxx::__normal_iterator<data::FireworksReformParamConfig*,std::vector<data::FireworksReformParamConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<data::FireworksReformParamConfig*,std::vector<data::FireworksReformParamConfig> > *)(v3 + 128)) )
    {
      reform_param = __gnu_cxx::__normal_iterator<data::FireworksReformParamConfig *,std::vector<data::FireworksReformParamConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::FireworksReformParamConfig*,std::vector<data::FireworksReformParamConfig> > *const)(v3 + 96));
      v7 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v7 = 0;
      *(_BYTE *)(v7 + 2) = 4;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 160, v3 + 128);
      *(_DWORD *)(v3 + 160) = 0;
      v8 = ((_BYTE)v3 - 96 + 4) & 7;
      v9 = (*(_BYTE *)(((v3 + 164) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((v3 + 164) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(v3 + 164, v8, v9);
      *(_BYTE *)(v3 + 164) = 0;
      if ( *(_BYTE *)(((v3 + 168) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 168) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 168, v8);
      *(_DWORD *)(v3 + 168) = 0;
      v10 = (((_BYTE)v3 - 96 + 12) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 172) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 96 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 172) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 172, v10);
      }
      *(_DWORD *)(v3 + 172) = 0;
      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 176, v10);
      *(_DWORD *)(v3 + 176) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&reform_param->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&reform_param->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&reform_param->type);
      }
      *(_DWORD *)(v3 + 160) = reform_param->type;
      if ( *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reform_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&reform_param->standard_value);
      }
      *(_DWORD *)(v3 + 168) = reform_param->standard_value;
      if ( *(char *)(((unsigned __int64)&reform_param->is_can_reform >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(
          &reform_param->is_can_reform,
          (((_BYTE)reform_param + 12) & 7u) + 3,
          &reform_param->is_can_reform);
      *(_BYTE *)(v3 + 164) = reform_param->is_can_reform;
      if ( reform_param->is_can_reform )
      {
        if ( std::vector<int>::size(&reform_param->value_range) != 2 )
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
            "./src/txt_data_manual/FireworksExcelConfig.cpp",
            "rewriteFireworksConfig",
            45);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v11,
                  (const char (*)[15])"fireworks_id: ");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, fireworks_id);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v13, (const char (*)[22])byte_1AD68440);
          v15 = common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
                  v14,
                  &reform_param->type);
          v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v15, (const char (*)[29])byte_1AD68480);
          common::milog::MiLogStream::operator<<<int>(v16, &reform_param->value_range);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
          *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_67;
        }
        if ( *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reform_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&reform_param->standard_value);
        }
        standard_value = reform_param->standard_value;
        v19 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                  &reform_param->value_range,
                                                                                  0LL);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        if ( standard_value < *v20 )
          goto LABEL_47;
        if ( *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reform_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reform_param->standard_value >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&reform_param->standard_value);
        }
        v21 = reform_param->standard_value;
        v22 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                  &reform_param->value_range,
                                                                                  1uLL);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v22);
        }
        if ( v21 <= *v23 )
          v24 = 0;
        else
LABEL_47:
          v24 = 1;
        if ( v24 )
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
            "./src/txt_data_manual/FireworksExcelConfig.cpp",
            "rewriteFireworksConfig",
            50);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v25,
                  (const char (*)[15])"fireworks_id: ");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, fireworks_id);
          v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_1AD68440);
          v29 = common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
                  v28,
                  &reform_param->type);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v29, (const char (*)[31])byte_1AD684C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
          goto LABEL_67;
        }
        v30 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                  &reform_param->value_range,
                                                                                  0LL);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        v32 = *v31;
        if ( *(_BYTE *)(((v3 + 172) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 96 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 172) >> 3) + 0x7FFF8000) )
        {
          v32 = v3 + 172;
          __asan_report_store4(v3 + 172, (((_BYTE)v3 - 96 + 12) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 172) = v32;
        v33 = std::vector<int>::operator[](&reform_param->value_range, 1uLL);
        v34 = (unsigned int *)v33;
        if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v33);
        }
        v35 = *v34;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 176, v35);
        *(_DWORD *)(v3 + 176) = v35;
      }
      v36 = std::move<FireworksReformParamInfo &>((FireworksReformParamInfo *)(v3 + 160));
      v38 = std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::emplace<data::FireworksReformParamType const&,FireworksReformParamInfo>(
              (std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *const)(v3 + 416),
              &reform_param->type,
              v36,
              &reform_param->type,
              v37);
      if ( !v38.second )
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
          "./src/txt_data_manual/FireworksExcelConfig.cpp",
          "rewriteFireworksConfig",
          58);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v39, (const char (*)[15])"fireworks_id: ");
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, fireworks_id);
        v42 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v41, (const char (*)[28])byte_1AD68500);
        common::milog::MiLogStream::operator<<<data::FireworksReformParamType,(data::FireworksReformParamType*)0>(
          v42,
          &reform_param->type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
LABEL_67:
      v43 = ((v3 + 160) >> 3) + 2147450880;
      *(_WORD *)v43 = -1800;
      *(_BYTE *)(v43 + 2) = -8;
      if ( v17 != 1 )
      {
        v44 = 0;
        goto LABEL_71;
      }
      __gnu_cxx::__normal_iterator<data::FireworksReformParamConfig *,std::vector<data::FireworksReformParamConfig>>::operator++((__gnu_cxx::__normal_iterator<data::FireworksReformParamConfig*,std::vector<data::FireworksReformParamConfig> > *const)(v3 + 96));
    }
    v44 = 1;
LABEL_71:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v44 == 1 )
    {
      v46 = std::move<std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> &>((std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *)(v3 + 416));
      std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::emplace<unsigned int const&,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>(
        &this->fireworks_reform_map_,
        fireworks_id,
        v46,
        v47,
        v48);
      v45 = 1;
    }
    else
    {
      v45 = 0;
    }
    std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>::~unordered_map((std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *const)(v3 + 416));
    v49 = ((v3 + 416) >> 3) + 2147450880;
    *(_DWORD *)v49 = -117901064;
    *(_WORD *)(v49 + 4) = -1800;
    *(_BYTE *)(v49 + 6) = -8;
    if ( v45 != 1 )
    {
      v50 = 0;
      goto LABEL_78;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false> *const)(v3 + 32));
  }
  v50 = 1;
LABEL_78:
  if ( v50 == 1 )
    v2 = 0;
  result = v2;
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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

// Line 68: range 00000000143FAC94-00000000143FACEF
int32_t __cdecl FireworksExcelConfigMgr::checkConfig(
        FireworksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( FireworksExcelConfigMgr::checkFireworksConfig(this, txt_config_mgr)
    || FireworksExcelConfigMgr::checkFireworksLaunchConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 78: range 00000000143FACF0-00000000143FB0DB
int32_t __cdecl FireworksExcelConfigMgr::checkFireworksConfig(
        FireworksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-ECh]
  data::FireworksExcelConfigMap *__for_range; // [rsp+18h] [rbp-E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::reference v11; // [rsp+20h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::FireworksExcelConfig> >::type *material_id; // [rsp+28h] [rbp-D8h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 __for_begin:80 64 8 12 __for_end:80 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FireworksExcelConfigMgr::checkFireworksConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->fireworks_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FireworksExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FireworksExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::FireworksExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FireworksExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FireworksExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FireworksExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FireworksExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false> *const)(v2 + 32));
    material_id = std::get<0ul,unsigned int const,data::FireworksExcelConfig>(v11);
    std::get<1ul,unsigned int const,data::FireworksExcelConfig>(v11);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *material_id);
    if ( !material_config_ptr )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&material_config_ptr->material_type);
    }
    if ( material_config_ptr->material_type != MATERIAL_FIREWORKS )
    {
LABEL_16:
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
        "./src/txt_data_manual/FireworksExcelConfig.cpp",
        "checkFireworksConfig",
        86);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AD685C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::FireworksExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 94: range 00000000143FB0DC-00000000143FB733
int32_t __cdecl FireworksExcelConfigMgr::checkFireworksLaunchConfig(
        FireworksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t default_value; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v10; // rax
  int32_t *v11; // rdx
  int32_t v12; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v13; // rax
  int32_t *v14; // rdx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  data::FireworksLaunchExcelConfigMap *__for_range; // [rsp+20h] [rbp-130h]
  std::__detail::_Node_iterator<std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>,false,false>::reference v22; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig> >::type *launch_param_type; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig> >::type *config; // [rsp+38h] [rbp-118h]
  char v25[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:96 64 8 12 __for_end:96 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FireworksExcelConfigMgr::checkFireworksLaunchConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->fireworks_launch_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::FireworksLaunchParamType const,data::FireworksLaunchExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>,false> *)(v2 + 64)) )
  {
    v22 = std::__detail::_Node_iterator<std::pair<data::FireworksLaunchParamType const,data::FireworksLaunchExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>,false,false> *const)(v2 + 32));
    launch_param_type = std::get<0ul,data::FireworksLaunchParamType const,data::FireworksLaunchExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig> >::type *)std::get<1ul,data::FireworksLaunchParamType const,data::FireworksLaunchExcelConfig>(v22);
    if ( std::vector<int>::size(&config->adjust_range) != 2 )
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
        "./src/txt_data_manual/FireworksExcelConfig.cpp",
        "checkFireworksLaunchConfig",
        100);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])byte_1AD686C0);
      v7 = common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
             v6,
             launch_param_type);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v7, (const char (*)[28])byte_1AD68700);
      common::milog::MiLogStream::operator<<<int>(v8, &config->adjust_range);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->default_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->default_value >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->default_value);
    }
    default_value = config->default_value;
    v10 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                              &config->adjust_range,
                                                                              0LL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    if ( default_value < *v11 )
      goto LABEL_24;
    if ( *(_BYTE *)(((unsigned __int64)&config->default_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->default_value >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->default_value);
    }
    v12 = config->default_value;
    v13 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                              &config->adjust_range,
                                                                              1uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    if ( v12 <= *v14 )
      v15 = 0;
    else
LABEL_24:
      v15 = 1;
    if ( v15 )
    {
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
        "./src/txt_data_manual/FireworksExcelConfig.cpp",
        "checkFireworksLaunchConfig",
        105);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])byte_1AD686C0);
      v18 = common::milog::MiLogStream::operator<<<data::FireworksLaunchParamType,(data::FireworksLaunchParamType*)0>(
              v17,
              launch_param_type);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v18, (const char (*)[32])byte_1AD68740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<data::FireworksLaunchParamType const,data::FireworksLaunchExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::FireworksLaunchParamType,data::FireworksLaunchExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 113: range 00000000143FB734-00000000143FB8EF
const std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *__fastcall FireworksExcelConfigMgr::getFireworksReformParamConfig(
        const FireworksExcelConfigMgr *const this,
        __int64 fireworks_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>> *p_fireworks_reform_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>> *v6; // rdx
  bool v7; // al
  const std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 fireworks_id:112 64 8 8 iter:114 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = FireworksExcelConfigMgr::getFireworksReformParamConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = fireworks_id;
  p_fireworks_reform_map = &this->fireworks_reform_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, fireworks_id);
  *(std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::find(p_fireworks_reform_map, (const std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::key_type *)(v2 + 48));
  v6 = &this->fireworks_reform_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::FireworksReformParamType,FireworksReformParamInfo> >,false,false> *const)(v2 + 64))->second;
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

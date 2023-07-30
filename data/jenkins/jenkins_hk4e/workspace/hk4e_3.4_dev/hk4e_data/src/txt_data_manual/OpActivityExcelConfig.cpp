// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/OpActivityExcelConfig.cpp

// Line 19: range 0000000014624442-0000000014624656
int32_t __cdecl OpActivityExcelConfigMgr::rewriteConfig(
        OpActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OpActivityExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = OpActivityExcelConfigMgr::rewriteOpActivityExcelConfig(this, txt_config_mgr) != 0;
  if ( v5 | (OpActivityExcelConfigMgr::rewriteOpActivityBonusExcelConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/OpActivityExcelConfig.cpp",
      "rewriteConfig",
      23);
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

// Line 30: range 0000000014624658-000000001462486C
int32_t __cdecl OpActivityExcelConfigMgr::checkConfig(
        OpActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OpActivityExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = OpActivityExcelConfigMgr::checkOpActivityExcelConfig(this, txt_config_mgr) != 0;
  if ( v5 | (OpActivityExcelConfigMgr::checkOpActivityBonusExcelConfig(this, txt_config_mgr) != 0) )
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
      "./src/txt_data_manual/OpActivityExcelConfig.cpp",
      "checkConfig",
      34);
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

// Line 41: range 000000001462486E-0000000014624C69
int32_t __cdecl OpActivityExcelConfigMgr::rewriteOpActivityExcelConfig(
        OpActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  std::vector<unsigned int> *v11; // rdx
  int32_t result; // eax
  data::OpActivityExcelConfigMap *__for_range; // [rsp+18h] [rbp-108h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::reference v14; // [rsp+20h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityExcelConfig> >::type *activity_id; // [rsp+28h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-E8h]
  char v17[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 11 bonus_id:44 64 8 14 __for_begin:42 96 8 12 __for_end:42 128 8 14 __for_begin:44 160 8 12 __for_end:44";
  *(_QWORD *)(v2 + 16) = OpActivityExcelConfigMgr::rewriteOpActivityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  __for_range = &this->op_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OpActivityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityExcelConfig>,false> *)(v2 + 96)) )
      break;
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false> *const)(v2 + 64));
    activity_id = std::get<0ul,unsigned int const,data::OpActivityExcelConfig>(v14);
    __for_range_0 = &std::get<1ul,unsigned int const,data::OpActivityExcelConfig>(v14)->bonus_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      v11 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->bonus_to_activity_map,
              (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
      std::vector<unsigned int>::push_back(v11, activity_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 53: range 0000000014624C6A-0000000014625AF8
int32_t __cdecl OpActivityExcelConfigMgr::checkOpActivityExcelConfig(
        const OpActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  uint32_t bonus_ratio; // [rsp+1Ch] [rbp-2C4h]
  data::OpActivityExcelConfigMap *__for_range; // [rsp+20h] [rbp-2C0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityExcelConfig> >::type *activity_id; // [rsp+30h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityExcelConfig> >::type *config; // [rsp+38h] [rbp-2A8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-2A0h]
  const data::OpActivityBonusExcelConfig *bonus_config_ptr; // [rsp+48h] [rbp-298h]
  char v36[656]; // [rsp+50h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 11 bonus_id:78 64 8 14 __for_begin:54 96 8 12 __for_end:54 128 8 9 <unknown> 160 8 14 __"
                        "for_begin:78 192 8 12 __for_end:78 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 "
                        "32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OpActivityExcelConfigMgr::checkOpActivityExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
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
  v5[536862738] = -202116109;
  __for_range = &this->op_activity_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::OpActivityExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::OpActivityExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityExcelConfig>,false> *)(v3 + 96)) )
    {
      v7 = 1;
      goto LABEL_66;
    }
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false> *const)(v3 + 64));
    activity_id = std::get<0ul,unsigned int const,data::OpActivityExcelConfig>(v31);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityExcelConfig>(v31);
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    if ( !*activity_id )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityExcelConfig",
        58);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v6, (const char (*)[31])byte_1ADC5D40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v7 = 0;
      goto LABEL_66;
    }
    v8 = (((_BYTE)config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->bonus_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->bonus_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->bonus_type);
    }
    if ( config->bonus_type != TYPE_DAILY )
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityExcelConfig",
        63);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v9, (const char (*)[67])byte_1ADC5D80);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v11 = (((_BYTE)config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->bonus_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->bonus_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->bonus_type);
      }
      v12 = (__int64)data::enumValToStr(config->bonus_type, v11);
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_store8(v3 + 128, v11);
      *(_QWORD *)(v3 + 128) = v12;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v3 + 128));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v7 = 0;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->bonus_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->bonus_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->bonus_value);
    }
    if ( !config->bonus_value )
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityExcelConfig",
        69);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v13, (const char (*)[47])byte_1ADC5E00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->bonus_value);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v7 = 0;
      goto LABEL_66;
    }
    if ( std::vector<unsigned int>::empty(&config->bonus_list) )
      break;
    bonus_ratio = 0;
    __for_range_0 = &config->bonus_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v8);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v23 = 1;
        goto LABEL_62;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v3 + 48, v16);
      }
      *(_DWORD *)(v3 + 48) = v19;
      bonus_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityBonusExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
      if ( !bonus_config_ptr )
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
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "checkOpActivityExcelConfig",
          83);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v21, (const char (*)[48])byte_1ADC5EA0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v23 = 0;
        goto LABEL_62;
      }
      if ( !bonus_ratio )
      {
        if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&bonus_config_ptr->bonus_ratio);
        }
        bonus_ratio = bonus_config_ptr->bonus_ratio;
      }
      if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&bonus_config_ptr->bonus_ratio);
      }
      if ( bonus_ratio != bonus_config_ptr->bonus_ratio )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/OpActivityExcelConfig.cpp",
      "checkOpActivityExcelConfig",
      93);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v24, (const char (*)[64])byte_1ADC5F00);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 48));
    v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])byte_1ADC5F60);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, activity_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v23 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v23 != 1 )
    {
      v7 = 0;
      goto LABEL_66;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/OpActivityExcelConfig.cpp",
    "checkOpActivityExcelConfig",
    74);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 416),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v15, (const char (*)[32])byte_1ADC5E60);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
  v2 = -1;
  v7 = 0;
LABEL_66:
  if ( v7 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
  return result;
};

// Line 102: range 0000000014625AFA-000000001462719C
int32_t __cdecl OpActivityExcelConfigMgr::rewriteOpActivityBonusExcelConfig(
        OpActivityExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::OpActivityBonusSourceType *p_source_type; // rax
  data::OpActivityBonusSourceType source_type; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _DWORD *v9; // rax
  char *v10; // rsi
  bool v11; // r15
  unsigned __int64 v12; // rax
  char *i; // r13
  _DWORD *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  _BOOL4 v17; // r13d
  char *v18; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  std::set<unsigned int> *v23; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  int v27; // edx
  unsigned __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  _DWORD *v32; // rax
  char *v33; // rsi
  bool v34; // r15
  unsigned __int64 v35; // rax
  char *j; // r13
  _DWORD *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  _BOOL4 v40; // r13d
  char *v41; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v42; // rax
  int *v43; // rdx
  int v44; // ecx
  char v45; // al
  std::set<unsigned int> *v46; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  int v52; // edx
  unsigned __int64 v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rdx
  std::initializer_list<std::string > __l; // [rsp+0h] [rbp-500h]
  std::initializer_list<std::string > v60; // [rsp+10h] [rbp-4F0h]
  int32_t v61; // [rsp+2Ch] [rbp-4D4h]
  data::OpActivityBonusExcelConfigMap *__for_range; // [rsp+40h] [rbp-4C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::reference v63; // [rsp+48h] [rbp-4B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *bonus_id; // [rsp+50h] [rbp-4B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *config; // [rsp+58h] [rbp-4A8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-4A0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-498h]
  char v68[1168]; // [rsp+70h] [rbp-490h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 4 14 refresh_id:115 144 4 14 dungeon_id:133 160 8 15 __for_begin:103 192 8 13 __fo"
                        "r_end:103 224 8 15 __for_begin:115 256 8 13 __for_end:115 288 8 15 __for_begin:133 320 8 13 __fo"
                        "r_end:133 352 24 18 refresh_id_vec:109 416 24 9 <unknown> 480 24 18 dungeon_id_vec:127 544 24 9 "
                        "<unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <"
                        "unknown> 928 64 9 <unknown> 1024 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OpActivityExcelConfigMgr::rewriteOpActivityBonusExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234556924;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862733] = -234881024;
  v4[536862734] = -218959118;
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862751] = -218959118;
  v4[536862754] = -202116109;
  __for_range = &this->op_activity_bonus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false> *)(v2 + 192)) )
  {
    v63 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false> *const)(v2 + 160));
    bonus_id = std::get<0ul,unsigned int const,data::OpActivityBonusExcelConfig>(v63);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityBonusExcelConfig>(v63);
    p_source_type = &config->source_type;
    if ( *(_BYTE *)(((unsigned __int64)p_source_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_source_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_source_type);
    }
    source_type = config->source_type;
    if ( source_type == SOURCE_TYPE_BLOSSOM )
    {
      v7 = ((v2 + 352) >> 3) + 2147450880;
      *(_WORD *)v7 = 0;
      *(_BYTE *)(v7 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 352));
      v8 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 928) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 928),
        ",",
        (const std::allocator<char> *)(v2 + 32));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 960),
        ";",
        (const std::allocator<char> *)(v2 + 48));
      __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 928);
      __l._M_len = 2LL;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 64));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 416),
        __l,
        (const std::vector<std::string>::allocator_type *)(v2 + 64));
      v10 = (char *)(v2 + 416);
      v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              &config->source_param,
              (const std::vector<std::string> *)(v2 + 416),
              (std::vector<unsigned int> *)(v2 + 352),
              0) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
      v12 = ((v2 + 416) >> 3) + 2147450880;
      *(_WORD *)v12 = -1800;
      *(_BYTE *)(v12 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 992); i != (char *)(v2 + 928); std::string::~string(i) )
        i -= 32;
      v14 = (_DWORD *)(((v2 + 928) >> 3) + 2147450880);
      *v14 = -117901064;
      v14[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 32);
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "rewriteOpActivityBonusExcelConfig",
          112);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v15, (const char (*)[70])byte_1ADC6220);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, bonus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v61 = -1;
        v17 = 0;
      }
      else
      {
        __for_range_0 = (std::vector<unsigned int> *)(v2 + 352);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v10);
        *(std::vector<unsigned int>::iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v10);
        *(std::vector<unsigned int>::iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v18 = (char *)(v2 + 256);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 224),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 256)) )
          {
            v27 = 1;
            goto LABEL_38;
          }
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 4;
          v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 224));
          v20 = (int *)v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          v21 = *v20;
          v22 = *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000);
          if ( v22 != 0 && v22 <= 3 )
          {
            LOBYTE(v18) = v22 != 0;
            __asan_report_store4(v2 + 128, v18);
          }
          *(_DWORD *)(v2 + 128) = v21;
          v23 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->refresh_id_bonus_map,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 128));
          v24 = std::set<unsigned int>::insert(v23, bonus_id);
          if ( !v24.second )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 224));
        }
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "rewriteOpActivityBonusExcelConfig",
          119);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v25,
                (const char (*)[30])"duplicate bonus_id, bonus_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, bonus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v61 = -1;
        v27 = 0;
LABEL_38:
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        v17 = v27 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 352));
      v28 = ((v2 + 352) >> 3) + 2147450880;
      *(_WORD *)v28 = -1800;
      *(_BYTE *)(v28 + 2) = -8;
      if ( !v17 )
      {
        v29 = 0;
        goto LABEL_72;
      }
    }
    else if ( source_type == SOURCE_TYPE_DUNGEON )
    {
      v30 = ((v2 + 480) >> 3) + 2147450880;
      *(_WORD *)v30 = 0;
      *(_BYTE *)(v30 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 480));
      v31 = ((v2 + 544) >> 3) + 2147450880;
      *(_WORD *)v31 = 0;
      *(_BYTE *)(v31 + 2) = 0;
      v32 = (_DWORD *)(((v2 + 1024) >> 3) + 2147450880);
      *v32 = 0;
      v32[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1024),
        ",",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1056),
        ";",
        (const std::allocator<char> *)(v2 + 96));
      v60._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1024);
      v60._M_len = 2LL;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 544),
        v60,
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v33 = (char *)(v2 + 544);
      v34 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              &config->source_param,
              (const std::vector<std::string> *)(v2 + 544),
              (std::vector<unsigned int> *)(v2 + 480),
              0) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
      v35 = ((v2 + 544) >> 3) + 2147450880;
      *(_WORD *)v35 = -1800;
      *(_BYTE *)(v35 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 1088); j != (char *)(v2 + 1024); std::string::~string(j) )
        j -= 32;
      v37 = (_DWORD *)(((v2 + 1024) >> 3) + 2147450880);
      *v37 = -117901064;
      v37[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v34 )
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "rewriteOpActivityBonusExcelConfig",
          130);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v38, (const char (*)[70])byte_1ADC62E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, bonus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v61 = -1;
        v40 = 0;
      }
      else
      {
        __for_range_1 = (std::vector<unsigned int> *)(v2 + 480);
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 288, v33);
        *(std::vector<unsigned int>::iterator *)(v2 + 288) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 320, v33);
        *(std::vector<unsigned int>::iterator *)(v2 + 320) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v41 = (char *)(v2 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 320)) )
          {
            v52 = 1;
            goto LABEL_64;
          }
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
          v42 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 288));
          v43 = (int *)v42;
          if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v42);
          }
          v44 = *v43;
          v45 = *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000);
          if ( v45 != 0 && v45 <= 3 )
          {
            LOBYTE(v41) = v45 != 0;
            __asan_report_store4(v2 + 144, v41);
          }
          *(_DWORD *)(v2 + 144) = v44;
          v46 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->dungeon_id_bonus_map,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 144));
          v47 = std::set<unsigned int>::insert(v46, bonus_id);
          if ( !v47.second )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 288));
        }
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 800, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 800),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "rewriteOpActivityBonusExcelConfig",
          137);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v48,
                (const char (*)[20])"duplicate bonsu_id:");
        v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, bonus_id);
        v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v50, (const char (*)[13])" dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v2 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v61 = -1;
        v52 = 0;
LABEL_64:
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
        v40 = v52 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 480));
      v53 = ((v2 + 480) >> 3) + 2147450880;
      *(_WORD *)v53 = -1800;
      *(_BYTE *)(v53 + 2) = -8;
      if ( !v40 )
      {
        v29 = 0;
        goto LABEL_72;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 864, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 864),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "rewriteOpActivityBonusExcelConfig",
        144);
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v54,
              (const char (*)[21])"unknown source_type:");
      v56 = common::milog::MiLogStream::operator<<<data::OpActivityBonusSourceType,(data::OpActivityBonusSourceType*)0>(
              v55,
              &config->source_type);
      v57 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v56, (const char (*)[11])" bonus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, bonus_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false> *const)(v2 + 160));
  }
  v29 = 1;
LABEL_72:
  if ( v29 == 1 )
    v61 = 0;
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v68);
  }
  return v61;
};

// Line 152: range 000000001462719E-0000000014628929
int32_t __cdecl OpActivityExcelConfigMgr::checkOpActivityBonusExcelConfig(
        const OpActivityExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *p_bonus_ratio; // rsi
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  data::OpActivityBonusSourceType source_type; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  _BOOL4 v20; // eax
  unsigned __int64 v21; // rax
  char *v22; // rsi
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  _BOOL4 v26; // r15d
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v29; // rax
  unsigned int *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  int v32; // edx
  unsigned __int64 v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  __int64 v36; // rsi
  __int64 v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int v43; // eax
  data::OpActivityBonusExcelConfigMap *__for_range; // [rsp+28h] [rbp-498h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::reference v47; // [rsp+30h] [rbp-490h]
  std::tuple_element<0,std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *bonus_id; // [rsp+38h] [rbp-488h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *config; // [rsp+40h] [rbp-480h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-478h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_1; // [rsp+50h] [rbp-470h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v52; // [rsp+58h] [rbp-468h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *dungeon_id; // [rsp+60h] [rbp-460h]
  char v54[1104]; // [rsp+70h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 48 1 9 <unknown> 64 8 15 __for_begin:153 96 8 13 __for_end:153 128 8 15 __for_begin:196 160 8"
                        " 13 __for_end:196 192 8 9 <unknown> 224 8 15 __for_begin:216 256 8 13 __for_end:216 288 24 26 bl"
                        "ossom_refresh_id_vec:185 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unkn"
                        "own> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unkno"
                        "wn> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = OpActivityExcelConfigMgr::checkOpActivityBonusExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -234881024;
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
  v5[536862750] = -218959118;
  v5[536862752] = -202116109;
  __for_range = &this->op_activity_bonus_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::OpActivityBonusExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_bonus_ratio = (const char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false> *)(v3 + 96)) )
    {
      v8 = 1;
      goto LABEL_78;
    }
    v47 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false> *const)(v3 + 64));
    bonus_id = std::get<0ul,unsigned int const,data::OpActivityBonusExcelConfig>(v47);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpActivityBonusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OpActivityBonusExcelConfig>(v47);
    if ( *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bonus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bonus_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(bonus_id);
    }
    if ( !*bonus_id )
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityBonusExcelConfig",
        157);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      p_bonus_ratio = byte_1ADC6660;
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v7, (const char (*)[36])byte_1ADC6660);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->source_type);
    }
    if ( config->source_type == SOURCE_TYPE_NONE )
    {
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityBonusExcelConfig",
        162);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v9, (const char (*)[54])byte_1ADC66C0);
      p_bonus_ratio = (const char *)bonus_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, bonus_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->open_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->open_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->open_level);
    }
    if ( !config->open_level )
    {
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityBonusExcelConfig",
        167);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v11, (const char (*)[54])byte_1ADC6720);
      p_bonus_ratio = (const char *)bonus_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, bonus_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->bonus_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->bonus_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->bonus_ratio);
    }
    if ( config->bonus_ratio <= 1 )
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityBonusExcelConfig",
        172);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v13, (const char (*)[57])byte_1ADC6780);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, bonus_id);
      v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])byte_1ADC67E0);
      p_bonus_ratio = (const char *)&config->bonus_ratio;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->bonus_ratio);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_78;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->source_type);
    }
    source_type = config->source_type;
    if ( source_type != SOURCE_TYPE_BLOSSOM )
      break;
    if ( (unsigned __int8)std::string::empty() )
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
        "./src/txt_data_manual/OpActivityExcelConfig.cpp",
        "checkOpActivityBonusExcelConfig",
        182);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v18, (const char (*)[60])byte_1ADC6820);
      p_bonus_ratio = (const char *)bonus_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, bonus_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
    }
    else
    {
      v21 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v21 = 0;
      *(_BYTE *)(v21 + 2) = 0;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 672),
        ",",
        (const std::allocator<char> *)(v3 + 48));
      v22 = (char *)(v3 + 672);
      v23 = common::tools::StringUtils::splitToList<unsigned int>(
              &config->source_param,
              (const std::string *)(v3 + 672),
              (std::vector<unsigned int> *)(v3 + 288),
              0) != 0;
      std::string::~string((void *)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v23 )
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
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "checkOpActivityBonusExcelConfig",
          188);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v24, (const char (*)[70])byte_1ADC6220);
        p_bonus_ratio = (const char *)bonus_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, bonus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
      }
      else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 288)) )
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
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "checkOpActivityBonusExcelConfig",
          193);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v27, (const char (*)[67])byte_1ADC6880);
        p_bonus_ratio = (const char *)bonus_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, bonus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v26 = 0;
      }
      else
      {
        __for_range_0 = (std::vector<unsigned int> *)(v3 + 288);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v22);
        *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v22);
        *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          p_bonus_ratio = (const char *)(v3 + 160);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
          {
            v32 = 1;
            goto LABEL_65;
          }
          v29 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
          v30 = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v29);
          }
          if ( !data::BlossomExcelConfigMgrBase::findBlossomRefreshExcelConfig(
                  &txt_config_mgr->blossom_config_mgr,
                  *v30) )
            break;
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
        }
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
          "./src/txt_data_manual/OpActivityExcelConfig.cpp",
          "checkOpActivityBonusExcelConfig",
          200);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        p_bonus_ratio = byte_1ADC6900;
        common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(v31, (const char (*)[83])byte_1ADC6900);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v32 = 0;
LABEL_65:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v26 = v32 == 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
      v20 = v26;
    }
    v33 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v33 = -1800;
    *(_BYTE *)(v33 + 2) = -8;
    if ( !v20 )
    {
      v8 = 0;
      goto LABEL_78;
    }
LABEL_76:
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpActivityBonusExcelConfig>,false,false> *const)(v3 + 64));
  }
  if ( source_type == SOURCE_TYPE_DUNGEON )
    goto LABEL_76;
  *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 928, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 928),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/OpActivityExcelConfig.cpp",
    "checkOpActivityBonusExcelConfig",
    212);
  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 928),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v35 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v34, (const char (*)[61])byte_1ADC6980);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  v36 = (((_BYTE)config + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->source_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->source_type);
  }
  v37 = (__int64)data::enumValToStr(config->source_type, v36);
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    v37 = __asan_report_store8(v3 + 192, v36);
  *(_QWORD *)(v3 + 192) = v37;
  v38 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v35, (const char *const *)(v3 + 192));
  v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])byte_1ADC69E0);
  p_bonus_ratio = (const char *)bonus_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, bonus_id);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
  *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_78:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
  {
    __for_range_1 = &this->dungeon_id_bonus_map;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, p_bonus_ratio);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_bonus_ratio);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 256) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_1);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 256)) )
      {
        v43 = 1;
        goto LABEL_93;
      }
      v52 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 224));
      dungeon_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v52);
      std::get<1ul,unsigned int const,std::set<unsigned int>>(v52);
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(dungeon_id);
      }
      if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id) )
        break;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 224));
    }
    *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 992, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 992),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/OpActivityExcelConfig.cpp",
      "checkOpActivityBonusExcelConfig",
      220);
    v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 992),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v42 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            v41,
            (const char (*)[41])"findDungeonExcelConfig fail, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, dungeon_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
    v2 = -1;
    v43 = 0;
LABEL_93:
    if ( v43 == 1 )
      v2 = 0;
  }
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v54);
  }
  return v2;
};

// Line 228: range 000000001462892A-0000000014628B77
__int64 __fastcall OpActivityExcelConfigMgr::getDailyBonusCountLimit(
        const OpActivityExcelConfigMgr *const this,
        uint32_t activity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::OpActivityExcelConfig *op_activity_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 activity_id:227 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = OpActivityExcelConfigMgr::getDailyBonusCountLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = activity_id;
  op_activity_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                             this,
                             *(unsigned int *)(v2 + 48));
  if ( op_activity_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&op_activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&op_activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&op_activity_config_ptr->bonus_value);
    }
    result = op_activity_config_ptr->bonus_value;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/OpActivityExcelConfig.cpp",
      "getDailyBonusCountLimit",
      232);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[47])"findOpActivityExcelConfig failed, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp

// Line 21: range 0000000012E12C3C-0000000012E130B1
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::rewriteConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivitySeaLampV3ExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivitySeaLampV3ExcelConfigMgr::rewriteBoatConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "rewriteConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"rewriteBoatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivitySeaLampV3ExcelConfigMgr::rewriteRaceConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "rewriteConfig",
      31);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])"rewriteRaceConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivitySeaLampV3ExcelConfigMgr::rewriteShadowConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "rewriteConfig",
      37);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v8,
      (const char (*)[27])"rewriteShadowConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 44: range 0000000012E130B2-0000000012E1365C
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::checkConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[320]; // [rsp+10h] [rbp-140h] BYREF

  v2 = (common::milog::MiLogStream *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivitySeaLampV3ExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( ActivitySeaLampV3ExcelConfigMgr::checkBoatConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkConfig",
      48);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])"checkBoatConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivitySeaLampV3ExcelConfigMgr::checkBoatBaseConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkConfig",
      54);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v7,
      (const char (*)[27])"checkBoatBaseConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivitySeaLampV3ExcelConfigMgr::checkRaceConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkConfig",
      60);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])"checkRaceConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( ActivitySeaLampV3ExcelConfigMgr::checkShadowConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkConfig",
      66);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])"checkShadowConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 73: range 0000000012E1365E-0000000012E13D04
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::rewriteBoatConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::LanV3BoatType *p_type; // rax
  data::LanV3BoatType type; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::vector<unsigned int>::size_type v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  data::LanV3BoatExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::reference v17; // [rsp+18h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *map_id; // [rsp+20h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-158h]
  char v20[336]; // [rsp+30h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:74 64 8 12 __for_end:74 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::rewriteBoatConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  __for_range = &this->lan_v3_boat_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false> *)(v2 + 64)) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false> *const)(v2 + 32));
    map_id = std::get<0ul,unsigned int const,data::LanV3BoatExcelConfig>(v17);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3BoatExcelConfig>(v17);
    p_type = &excel_config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    type = excel_config->type;
    if ( type == LAN_V3_BOAT_MULTI )
    {
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        &this->multi_map_id_vec_,
        map_id,
        (const unsigned int *)&this->multi_map_id_vec_);
LABEL_16:
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        &this->single_map_id_vec_,
        map_id,
        (const unsigned int *)&this->single_map_id_vec_);
      goto LABEL_17;
    }
    if ( type == LAN_V3_BOAT_SINGLE )
      goto LABEL_16;
LABEL_17:
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
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "rewriteBoatConfig",
      88);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v7, (const char (*)[74])byte_1AAA92A0);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v9 = (((_BYTE)excel_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->type);
    }
    v10 = (__int64)data::enumValToStr(excel_config->type, v9);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_store8(v2 + 96, v9);
    *(_QWORD *)(v2 + 96) = v10;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
    "rewriteBoatConfig",
    93);
  v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(v2 + 224),
          (const char (*)[25])"multi_map_id_vec_ size: ");
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v12 = std::vector<unsigned int>::size(&this->multi_map_id_vec_);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    v12 = __asan_report_store8(v2 + 128, "multi_map_id_vec_ size: ");
  *(_QWORD *)(v2 + 128) = v12;
  v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v11,
          (const unsigned __int64 *)(v2 + 128));
  v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v13,
          (const char (*)[27])" single_map_id_vec_ size: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v14, &this->single_map_id_vec_);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 98: range 0000000012E13D06-0000000012E15D03
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::checkBoatConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t *p_control_group_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  unsigned __int64 v15; // rax
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  char *v30; // rsi
  unsigned int *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  const data::GalleryExcelConfigMgrBase *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r15
  __int64 v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  unsigned __int64 v64; // rax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-5A0h]
  int32_t ret; // [rsp+1Ch] [rbp-584h]
  uint32_t point_count; // [rsp+20h] [rbp-580h]
  data::GalleryType gallery_type; // [rsp+24h] [rbp-57Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-578h]
  data::LanV3BoatExcelConfigMap *__for_range; // [rsp+30h] [rbp-570h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::reference v72; // [rsp+38h] [rbp-568h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *map_id; // [rsp+40h] [rbp-560h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-558h]
  const GroupScriptConfig *group_config_ptr; // [rsp+50h] [rbp-550h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-548h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-540h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-538h]
  char v79[1328]; // [rsp+70h] [rbp-530h] BYREF

  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 48 4 13 config_id:145 64 4 13 config_id:158 80 8 15 __for_begin:111 112 8 13 __for_end:111 14"
                        "4 8 15 __for_begin:145 176 8 13 __for_end:145 208 8 15 __for_begin:158 240 8 13 __for_end:158 27"
                        "2 8 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 "
                        "32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 3"
                        "2 9 <unknown> 944 32 9 <unknown> 1008 32 9 <unknown> 1072 32 9 <unknown> 1136 32 9 <unknown> 120"
                        "0 48 17 config_id_set:144";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::checkBoatConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862728] = -234881024;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -219021312;
  v4[536862741] = 62194;
  v4[536862742] = -219021312;
  v4[536862743] = 62194;
  v4[536862744] = -219021312;
  v4[536862745] = 62194;
  v4[536862746] = -219021312;
  v4[536862747] = 62194;
  v4[536862748] = -219021312;
  v4[536862749] = 62194;
  v4[536862750] = -219021312;
  v4[536862751] = 62194;
  v4[536862752] = -219021312;
  v4[536862753] = 62194;
  v4[536862754] = -219021312;
  v4[536862755] = 62194;
  v4[536862756] = -219021312;
  v4[536862757] = 62194;
  v4[536862759] = -202116109;
  if ( std::vector<unsigned int>::empty(&this->multi_map_id_vec_) )
  {
    if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 304, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 304),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkBoatConfig",
      101);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 304),
           (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)byte_1AAA95E0;
    common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v5, (const char (*)[84])byte_1AAA95E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( std::vector<unsigned int>::empty(&this->single_map_id_vec_) )
  {
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 368, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 368),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
      "checkBoatConfig",
      106);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 368),
           (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)byte_1AAA9660;
    common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(v6, (const char (*)[84])byte_1AAA9660);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
    *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
  }
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgra)->lua_config_mgr;
  __for_range = &this->lan_v3_boat_excel_config_map;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::LanV3BoatExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false> *)(v2 + 112)) )
  {
    v72 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false> *const)(v2 + 80));
    map_id = std::get<0ul,unsigned int const,data::LanV3BoatExcelConfig>(v72);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3BoatExcelConfig>(v72);
    p_control_group_id = &excel_config->control_group_id;
    if ( *(_BYTE *)(((unsigned __int64)p_control_group_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_control_group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_control_group_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_control_group_id);
    }
    group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, excel_config->control_group_id);
    if ( group_config_ptr )
    {
      point_count = 0;
      gallery_type = GALLERY_TYPE_NONE;
      v10 = (std::tuple_element<0,std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *)((((_BYTE)excel_config + 12) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->type);
      }
      if ( excel_config->type == LAN_V3_BOAT_MULTI )
      {
        point_count = 4;
        gallery_type = GALLERY_TYPE_LANV3_BOAT_GAME_MULTI;
      }
      else
      {
        v10 = (std::tuple_element<0,std::pair<unsigned int const,data::LanV3BoatExcelConfig> >::type *)((((_BYTE)excel_config + 12) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->type >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&excel_config->type);
        }
        if ( excel_config->type == LAN_V3_BOAT_SINGLE )
        {
          point_count = 1;
          gallery_type = GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE;
        }
      }
      if ( std::vector<unsigned int>::size(&excel_config->player_config_id_list) < point_count )
      {
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 496, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 496),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          136);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 496),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [136],(char *[136])0>(v11, (const char (*)[136])byte_1AAA9780);
        v10 = map_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
        *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( std::vector<unsigned int>::size(&excel_config->vehicle_config_id_list) < point_count )
      {
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          141);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [136],(char *[136])0>(v13, (const char (*)[136])byte_1AAA9840);
        v10 = map_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
        *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
      }
      v15 = ((v2 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v15 = 0;
      *(_WORD *)(v15 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1200));
      __for_range_0 = &excel_config->player_config_id_list;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 144, v10);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 176, v10);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v16 = (char *)(v2 + 176);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
        v18 = (int *)v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        v19 = *v18;
        v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v20 != 0 && v20 <= 3 )
        {
          LOBYTE(v16) = v20 != 0;
          __asan_report_store4(v2 + 48, v16);
        }
        *(_DWORD *)(v2 + 48) = v19;
        v21 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 1200),
                (const std::set<unsigned int>::value_type *)(v2 + 48));
        if ( !v21.second )
        {
          *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 624) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 655) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 624, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 624),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "checkBoatConfig",
            149);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v22, (const char (*)[35])byte_1AAA9900);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v2 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])", map_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, map_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 624));
          *(_DWORD *)(((v2 + 624) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( !GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v2 + 48)) )
        {
          *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 688) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 719) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 688, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 688),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "checkBoatConfig",
            154);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 688),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v27 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v26, (const char (*)[61])byte_1AAA99A0);
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 48));
          v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])", map_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, map_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 688));
          *(_DWORD *)(((v2 + 688) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      __for_range_1 = &excel_config->vehicle_config_id_list;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 208, v16);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 208) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 240, v16);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 240) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v30 = (char *)(v2 + 240);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 208),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 240)) )
          break;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
        v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
        v32 = (int *)v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        v33 = *v32;
        v34 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
        if ( v34 != 0 && v34 <= 3 )
        {
          LOBYTE(v30) = v34 != 0;
          __asan_report_store4(v2 + 64, v30);
        }
        *(_DWORD *)(v2 + 64) = v33;
        v35 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v2 + 1200),
                (const std::set<unsigned int>::value_type *)(v2 + 64));
        if ( !v35.second )
        {
          *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 752) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 783) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 752, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 752),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "checkBoatConfig",
            162);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 752),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v37 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v36, (const char (*)[35])byte_1AAA9900);
          v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v37,
                  (const unsigned int *)(v2 + 64));
          v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])", map_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, map_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 752));
          *(_DWORD *)(((v2 + 752) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        if ( !GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v2 + 64)) )
        {
          *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 816) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 847) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 816, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 816),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "checkBoatConfig",
            167);
          v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 816),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v41 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v40, (const char (*)[61])byte_1AAA9A00);
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v2 + 64));
          v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])", map_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, map_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 816));
          *(_DWORD *)(((v2 + 816) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 208));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->prepare_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->prepare_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->prepare_time);
      }
      if ( !excel_config->prepare_time )
      {
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 880) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 911) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 880, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 880),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          173);
        v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 880),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v45 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v44, (const char (*)[62])byte_1AAA9A60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 880));
        *(_DWORD *)(((v2 + 880) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->play_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)excel_config + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->play_time >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&excel_config->play_time);
      }
      if ( !excel_config->play_time )
      {
        *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 944) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 975) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 944, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 944),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          178);
        v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 944),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v47 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v46, (const char (*)[62])byte_1AAA9AC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 944));
        *(_DWORD *)(((v2 + 944) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->settle_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->settle_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->settle_time);
      }
      if ( !excel_config->settle_time )
      {
        *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1008) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 1039) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1008, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1008),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          183);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1008),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v48, (const char (*)[62])byte_1AAA9B20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1008));
        *(_DWORD *)(((v2 + 1008) >> 3) + 0x7FFF8000) = -117901064;
      }
      p_gallery_config_mgr = &txt_config_mgra->gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->gallery_id);
      }
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                             p_gallery_config_mgr,
                             excel_config->gallery_id);
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&gallery_config_ptr->type);
        }
        if ( gallery_type != gallery_config_ptr->type )
        {
          *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1136) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1167) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 1167) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1136, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1136),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "checkBoatConfig",
            195);
          v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1136),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v56 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v55, (const char (*)[63])byte_1AAA9C00);
          v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &excel_config->gallery_id);
          v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])", map_id: ");
          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, map_id);
          v60 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v59, (const char (*)[17])byte_1AAA9C60);
          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
          v61 = (__int64)data::enumValToStr(gallery_type, (__int64)byte_1AAA9C60);
          if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) )
            v61 = __asan_report_store8(v2 + 272, byte_1AAA9C60);
          *(_QWORD *)(v2 + 272) = v61;
          v62 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v60,
                  (const char *const *)(v2 + 272));
          v63 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v62, (const char (*)[17])byte_1AAA9CA0);
          common::milog::MiLogStream::operator<<<data::GalleryType,(data::GalleryType*)0>(
            v63,
            &gallery_config_ptr->type);
          *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1136));
          *(_DWORD *)(((v2 + 1136) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1072) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 1103) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1072, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1072),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatConfig",
          189);
        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1072),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v52 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v51, (const char (*)[66])byte_1AAA9B80);
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &excel_config->gallery_id);
        v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v53, (const char (*)[11])", map_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, map_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1072));
        *(_DWORD *)(((v2 + 1072) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1200));
    }
    else
    {
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkBoatConfig",
        116);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 432),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [97],(char *[97])0>(v8, (const char (*)[97])byte_1AAA96E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->control_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
      *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
    }
    v64 = ((v2 + 1200) >> 3) + 2147450880;
    *(_DWORD *)v64 = -117901064;
    *(_WORD *)(v64 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatExcelConfig>,false,false> *const)(v2 + 80));
  }
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v79);
  }
  return ret;
};

// Line 204: range 0000000012E15D04-0000000012E16337
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::checkBoatBaseConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-15Ch]
  data::LanV3BoatBaseExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false,false>::reference v14; // [rsp+20h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-140h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+38h] [rbp-138h]
  char v17[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:206 64 8 13 __for_end:206 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::checkBoatBaseConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->lan_v3_boat_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatBaseExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV3BoatBaseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3BoatBaseExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3BoatBaseExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::LanV3BoatBaseExcelConfig>(v14);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3BoatBaseExcelConfig>(v14);
    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_gadget_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->vehicle_gadget_id);
    }
    gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                          p_gadget_config_mgr,
                          excel_config->vehicle_gadget_id);
    if ( gadget_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_config_ptr->type);
      }
      if ( gadget_config_ptr->type != Vehicle )
      {
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkBoatBaseConfig",
          217);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
               v8,
               (const char (*)[71])"[LAN_V3_BOAT] checkBoatExcelConfig failed, expect Vehicle rather than ");
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&gadget_config_ptr->type);
        }
        v10 = (__int64)data::enumValToStr(gadget_config_ptr->type);
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          v10 = __asan_report_store8(v2 + 96, (((_BYTE)gadget_config_ptr + 84) & 7u) + 3);
        *(_QWORD *)(v2 + 96) = v10;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v2 + 96));
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkBoatBaseConfig",
        211);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(v6, (const char (*)[80])byte_1AAA9DA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &excel_config->vehicle_gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3BoatBaseExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
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

// Line 226: range 0000000012E16338-0000000012E166BB
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::rewriteRaceConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  data::LanV3RaceExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *level_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *level_config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:228 64 8 13 __for_end:228 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::rewriteRaceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->lan_v3_race_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::LanV3RaceExcelConfig>(v13);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3RaceExcelConfig>(v13);
    v6 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->race_gallery_level_map_,
           &level_config->gallery_id,
           level_id,
           (const unsigned int *)&this->race_gallery_level_map_,
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
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "rewriteRaceConfig",
        232);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v7, (const char (*)[59])byte_1AAA9F40);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->gallery_id);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1AA5CA00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v16 == (char *)v2 )
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

// Line 241: range 0000000012E166BC-0000000012E17316
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::checkRaceConfig(
        const ActivitySeaLampV3ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  __int64 group_link_id; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  char *v16; // rsi
  unsigned int *v17; // rax
  int *v18; // rdx
  int v19; // ecx
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-284h]
  data::LanV3RaceExcelConfigMap *__for_range; // [rsp+20h] [rbp-280h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::reference v34; // [rsp+28h] [rbp-278h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *level_id; // [rsp+30h] [rbp-270h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *level_config; // [rsp+38h] [rbp-268h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-260h]
  char v38[592]; // [rsp+50h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 14 watcher_id:258 64 8 15 __for_begin:244 96 8 13 __for_end:244 128 8 15 __for_begin:258"
                        " 160 8 13 __for_end:258 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkno"
                        "wn> 448 56 18 watcher_id_set:243";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::checkRaceConfig;
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
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  ret = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 448));
  __for_range = &this->lan_v3_race_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LanV3RaceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false> *)(v2 + 96)) )
  {
    v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false> *const)(v2 + 64));
    level_id = std::get<0ul,unsigned int const,data::LanV3RaceExcelConfig>(v34);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3RaceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3RaceExcelConfig>(v34);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&level_config->gallery_id);
    }
    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, level_config->gallery_id) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkRaceConfig",
        248);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v6, (const char (*)[60])byte_1AAAA0E0);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &level_config->gallery_id);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])byte_1AA5CA00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&level_config->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->group_link_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config->group_link_id);
    }
    group_link_id = level_config->group_link_id;
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            group_link_id) )
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
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkRaceConfig",
        254);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v12, (const char (*)[68])byte_1AAAA140);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->group_link_id);
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])byte_1AA5CA00);
      group_link_id = (__int64)level_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_0 = &level_config->score_watcher_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, group_link_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v16 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v17 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v18 = (int *)v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      v19 = *v18;
      v20 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v20 != 0 && v20 <= 3 )
      {
        LOBYTE(v16) = v20 != 0;
        __asan_report_store4(v2 + 48, v16);
      }
      *(_DWORD *)(v2 + 48) = v19;
      if ( !WatcherExcelConfigMgr::findWatcherConfig(&txt_config_mgr->watcher_config_mgr, *(_DWORD *)(v2 + 48)) )
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
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkRaceConfig",
          263);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v21, (const char (*)[44])byte_1AAAA1C0);
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 48));
        v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])byte_1AA5CA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v25 = std::unordered_set<unsigned int>::insert(
              (std::unordered_set<unsigned int> *const)(v2 + 448),
              (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      if ( !v25.second )
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
          "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
          "checkRaceConfig",
          268);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v26, (const char (*)[44])byte_1AAAA220);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v2 + 48));
        v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v28, (const char (*)[17])byte_1AA5CA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, level_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3RaceExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 448));
  result = ret;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 277: range 0000000012E17318-0000000012E17A05
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::rewriteShadowConfig(
        ActivitySeaLampV3ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  __int64 v7; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v8; // rax
  const unsigned int *v9; // r8
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  uint32_t *v17; // rdx
  char *v18; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  char v21; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-160h]
  uint32_t index; // [rsp+14h] [rbp-15Ch]
  uint32_t next_level_id; // [rsp+18h] [rbp-158h]
  data::LanV3ShadowStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false>::reference v27; // [rsp+28h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *stage_id; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *stage_config; // [rsp+38h] [rbp-138h]
  char v30[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 level_id:289 64 8 15 __for_begin:279 96 8 13 __for_end:279 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::rewriteShadowConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->lan_v3_shadow_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::LanV3ShadowStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false> *)(v2 + 96)) )
  {
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false> *const)(v2 + 64));
    stage_id = std::get<0ul,unsigned int const,data::LanV3ShadowStageExcelConfig>(v27);
    stage_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3ShadowStageExcelConfig>(v27);
    if ( std::vector<unsigned int>::empty(&stage_config->stage_level_list) )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "rewriteShadowConfig",
        283);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v5, (const char (*)[57])byte_1AAAA340);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      for ( index = 0; index < std::vector<unsigned int>::size(&stage_config->stage_level_list); ++index )
      {
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v7 = index;
        v8 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &stage_config->stage_level_list,
                                                                                                   index);
        v10 = (int *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v7) = v12 != 0;
          __asan_report_store4(v2 + 48, v7);
        }
        *(_DWORD *)(v2 + 48) = v11;
        v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                &this->shadow_level_stage_map_,
                (unsigned int *)(v2 + 48),
                stage_id,
                (unsigned int *)&this->shadow_level_stage_map_,
                v9);
        if ( !v13.second )
        {
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
            "rewriteShadowConfig",
            292);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v14, (const char (*)[50])byte_1AAAA3A0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          next_level_id = 0;
          if ( index + 1 < std::vector<unsigned int>::size(&stage_config->stage_level_list) )
          {
            v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&stage_config->stage_level_list, index + 1);
            v17 = v16;
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v16);
            }
            next_level_id = *v17;
          }
          v18 = (char *)(v2 + 48);
          v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
                  &this->shadow_next_level_map_,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          v20 = v19;
          v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
          if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
          {
            LOBYTE(v18) = v21 != 0;
            __asan_report_store4(v19, v18);
          }
          *v20 = next_level_id;
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::LanV3ShadowStageExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v30 == (char *)v2 )
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

// Line 309: range 0000000012E17A06-0000000012E1808D
int32_t __cdecl ActivitySeaLampV3ExcelConfigMgr::checkShadowConfig(
        const ActivitySeaLampV3ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  uint32_t *p_watcher_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-19Ch]
  data::LanV3ShadowLevelExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false,false>::reference v19; // [rsp+20h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig> >::type *level_id; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig> >::type *level_config; // [rsp+30h] [rbp-180h]
  char v22[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:312 64 8 13 __for_end:312 96 32 9 <unknown> 160 32 9 <unknown> 224 56 18 w"
                        "atcher_id_set:311";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::checkShadowConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  ret = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
  __for_range = &this->lan_v3_shadow_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3ShadowLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::LanV3ShadowLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::LanV3ShadowLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::LanV3ShadowLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false,false> *const)(v2 + 32));
    level_id = std::get<0ul,unsigned int const,data::LanV3ShadowLevelExcelConfig>(v19);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::LanV3ShadowLevelExcelConfig>(v19);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    p_watcher_id = &level_config->watcher_id;
    if ( *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_watcher_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_watcher_id);
    }
    if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, level_config->watcher_id) )
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
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkShadowConfig",
        317);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v7, (const char (*)[46])byte_1AAAA4C0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &level_config->watcher_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AAAA520);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v11 = std::unordered_set<unsigned int>::insert(
            (std::unordered_set<unsigned int> *const)(v2 + 224),
            &level_config->watcher_id);
    if ( !v11.second )
    {
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
        "./src/txt_data_manual/ActivitySeaLampV3ExcelConfig.cpp",
        "checkShadowConfig",
        322);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v12, (const char (*)[61])byte_1AAAA560);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &level_config->watcher_id);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AAAA520);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::LanV3ShadowLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 224));
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 330: range 0000000012E1808E-0000000012E18289
__int64 __fastcall ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId(
        const ActivitySeaLampV3ExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_race_gallery_level_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:329 64 8 8 iter:331 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::findRaceLevelIdByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_race_gallery_level_map = &this->race_gallery_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_race_gallery_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->race_gallery_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 340: range 0000000012E1828A-0000000012E18485
__int64 __fastcall ActivitySeaLampV3ExcelConfigMgr::findShadowStageIdByLevelId(
        const ActivitySeaLampV3ExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_shadow_level_stage_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:339 64 8 8 iter:341 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::findShadowStageIdByLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_shadow_level_stage_map = &this->shadow_level_stage_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_shadow_level_stage_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->shadow_level_stage_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 350: range 0000000012E18486-0000000012E18681
__int64 __fastcall ActivitySeaLampV3ExcelConfigMgr::findShadowNextLevelId(
        const ActivitySeaLampV3ExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_shadow_next_level_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:349 64 8 8 iter:351 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySeaLampV3ExcelConfigMgr::findShadowNextLevelId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_shadow_next_level_map = &this->shadow_next_level_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_shadow_next_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->shadow_next_level_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

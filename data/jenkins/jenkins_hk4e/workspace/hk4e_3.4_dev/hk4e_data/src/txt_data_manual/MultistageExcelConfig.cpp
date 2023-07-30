// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MultistageExcelConfig.cpp

// Line 18: range 000000001461DC0C-000000001461DC30
int32_t __cdecl MultistageExcelConfigMgr::checkConfig(
        MultistageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return MultistageExcelConfigMgr::checkMultiStageConfig(this, txt_config_mgr);
};

// Line 23: range 000000001461DC32-000000001461E192
int32_t __cdecl MultistageExcelConfigMgr::checkMultiStageConfig(
        const MultistageExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  data::MultistageExcelConfigMap *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::MultistageExcelConfig>,false,true>::reference v12; // [rsp+28h] [rbp-138h]
  std::tuple_element<0,std::pair<const std::string,data::MultistageExcelConfig> >::type *type_str; // [rsp+30h] [rbp-130h]
  char v14[288]; // [rsp+40h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 play_type:27 64 8 14 __for_begin:25 96 8 12 __for_end:25 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MultistageExcelConfigMgr::checkMultiStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->multistage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::string,data::MultistageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::MultistageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<std::string,data::MultistageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::MultistageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::MultistageExcelConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageExcelConfig>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::MultistageExcelConfig>,true> *)(v2 + 96)) )
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::MultistageExcelConfig>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::MultistageExcelConfig>,false,true> *const)(v2 + 64));
    type_str = std::get<0ul,std::string const,data::MultistageExcelConfig>(v12);
    std::get<1ul,std::string const,data::MultistageExcelConfig>(v12);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v2 + 96);
    *(_DWORD *)(v2 + 48) = 0;
    if ( !proto::MultistagePlayType_Parse(type_str, (proto::MultistagePlayType *)(v2 + 48)) )
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
        "./src/txt_data_manual/MultistageExcelConfig.cpp",
        "checkMultiStageConfig",
        30);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v5, (const char (*)[41])byte_1ADC4620);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, type_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( !*(_DWORD *)(v2 + 48) )
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
          "./src/txt_data_manual/MultistageExcelConfig.cpp",
          "checkMultiStageConfig",
          36);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v7, (const char (*)[44])byte_1ADC4680);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, type_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::MultistageExcelConfig>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::MultistageExcelConfig>,false,true> *const)(v2 + 64));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

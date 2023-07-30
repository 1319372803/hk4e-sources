// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/SensitiveWordExcelConfig.cpp

// Line 17: range 000000000CADA894-000000000CADA8A6
int32_t __cdecl SensitiveWordExcelConfigMgr::checkConfig(
        SensitiveWordExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 22: range 000000000CADA8A8-000000000CADAC33
int32_t __cdecl SensitiveWordExcelConfigMgr::rewriteConfig(
        SensitiveWordExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  std::string *v10; // rax
  std::string *v11; // rdx
  int32_t result; // eax
  data::SensitiveWordConfigVec *__for_range; // [rsp+20h] [rbp-E0h]
  data::SensitiveWordConfig *word_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:23 64 8 12 __for_end:23 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = SensitiveWordExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->sensitive_word_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::SensitiveWordConfig>::iterator *)(v3 + 32) = std::vector<data::SensitiveWordConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::SensitiveWordConfig>::iterator *)(v3 + 64) = std::vector<data::SensitiveWordConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::SensitiveWordConfig *,std::vector<data::SensitiveWordConfig>>(
            (const __gnu_cxx::__normal_iterator<data::SensitiveWordConfig*,std::vector<data::SensitiveWordConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::SensitiveWordConfig*,std::vector<data::SensitiveWordConfig> > *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    word_config = __gnu_cxx::__normal_iterator<data::SensitiveWordConfig *,std::vector<data::SensitiveWordConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::SensitiveWordConfig*,std::vector<data::SensitiveWordConfig> > *const)(v3 + 32));
    if ( (unsigned __int8)std::string::empty() )
      break;
    v10 = std::move<std::string &>(&word_config->word);
    std::vector<std::string>::emplace_back<std::string>(&this->sensitive_word_vec_, v10, v11);
    __gnu_cxx::__normal_iterator<data::SensitiveWordConfig *,std::vector<data::SensitiveWordConfig>>::operator++((__gnu_cxx::__normal_iterator<data::SensitiveWordConfig*,std::vector<data::SensitiveWordConfig> > *const)(v3 + 32));
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
    "./src/txt_data_manual/SensitiveWordExcelConfig.cpp",
    "rewriteConfig",
    27);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v6, (const char (*)[5])"ID: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &word_config->id);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])byte_1A119640);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    std::vector<data::SensitiveWordConfig>::clear(&this->sensitive_word_config_vec);
    v2 = 0;
  }
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

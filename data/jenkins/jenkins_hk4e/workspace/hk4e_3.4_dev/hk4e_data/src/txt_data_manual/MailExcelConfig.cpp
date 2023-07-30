// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MailExcelConfig.cpp

// Line 21: range 00000000145E4BC8-00000000145E4DAB
int32_t __cdecl MailExcelConfigMgr::rewriteConfig(MailExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = MailExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MailExcelConfigMgr::rewriteBirthdayMailConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MailExcelConfig.cpp",
      "rewriteConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v5,
      (const char (*)[33])"rewriteBirthdayMailConfig failed");
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

// Line 31: range 00000000145E4DAC-00000000145E4F8F
int32_t __cdecl MailExcelConfigMgr::checkConfig(MailExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = MailExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( MailExcelConfigMgr::checkBirthdayMailConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/MailExcelConfig.cpp",
      "checkConfig",
      34);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"check birthday mail config failed");
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

// Line 41: range 00000000145E4F90-00000000145E5B24
int32_t __cdecl MailExcelConfigMgr::rewriteBirthdayMailConfig(
        MailExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t effective_timestamp; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // eax
  time_t v12; // rdi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // r15d
  __int64 TimeByDayStr; // rsi
  const unsigned int *v19; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // eax
  int32_t result; // eax
  data::BirthdayMailExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-248h]
  const unsigned int *birthday_mail_config_id; // [rsp+30h] [rbp-240h]
  std::tuple_element<1,std::pair<unsigned int const,data::BirthdayMailExcelConfig> >::type *birthday_mail_config; // [rsp+38h] [rbp-238h]
  char v33[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 21 original_timestamp:44 64 8 14 __for_begin:42 96 8 12 __for_end:42 128 32 9 <unknown> 1"
                        "92 32 20 original_time_str:52 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MailExcelConfigMgr::rewriteBirthdayMailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  __for_range = &this->birthday_mail_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false> *const)(v3 + 64));
    birthday_mail_config_id = std::get<0ul,unsigned int const,data::BirthdayMailExcelConfig>(__in);
    birthday_mail_config = std::get<1ul,unsigned int const,data::BirthdayMailExcelConfig>(__in);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&birthday_mail_config->effective_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&birthday_mail_config->effective_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&birthday_mail_config->effective_timestamp);
    }
    effective_timestamp = birthday_mail_config->effective_timestamp;
    v8 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = effective_timestamp;
    if ( *(_DWORD *)(v3 + 48) )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v12 = *(unsigned int *)(v3 + 48);
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        v12 = v3 + 192;
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 192), v12);
      if ( std::string::size(v3 + 192) == 19 )
      {
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        std::string::substr(v3 + 320, v3 + 192, 0LL, 10LL);
        TimeByDayStr = (unsigned int)common::tools::TimeUtils::getTimeByDayStr((const std::string *)(v3 + 320));
        if ( *(_BYTE *)(((unsigned __int64)&birthday_mail_config->effective_timestamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&birthday_mail_config->effective_timestamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&birthday_mail_config->effective_timestamp, TimeByDayStr);
        }
        birthday_mail_config->effective_timestamp = TimeByDayStr;
        std::string::~string((void *)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v20 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                &this->birthday_mail_effective_map_,
                &birthday_mail_config->effective_timestamp,
                birthday_mail_config_id,
                (unsigned int *)&this->birthday_mail_effective_map_,
                v19);
        if ( !v20.second )
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
            "./src/txt_data_manual/MailExcelConfig.cpp",
            "rewriteBirthdayMailConfig",
            64);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  v21,
                  (const char (*)[43])"duplicate timestamp, effective_timestamp: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v22,
            &birthday_mail_config->effective_timestamp);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/MailExcelConfig.cpp",
            "rewriteBirthdayMailConfig",
            68);
          v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[21])"original_timestamp: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 48));
          v25 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v24,
                  (const char (*)[24])" ,effective_timestamp: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v25,
            &birthday_mail_config->effective_timestamp);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v17 = 1;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/MailExcelConfig.cpp",
          "rewriteBirthdayMailConfig",
          55);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v13, (const char (*)[59])byte_1ADB96C0);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v15,
                (const char (*)[22])" ,original_time_str: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 192));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      std::string::~string((void *)(v3 + 192));
      v11 = v17 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/MailExcelConfig.cpp",
        "rewriteBirthdayMailConfig",
        47);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1ADB9660);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v11 )
    {
      v26 = 0;
      goto LABEL_42;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false> *const)(v3 + 64));
  }
  v26 = 1;
LABEL_42:
  if ( v26 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
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

// Line 74: range 00000000145E5B26-00000000145E6B4A
int32_t __cdecl MailExcelConfigMgr::checkBirthdayMailConfig(
        MailExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_reward_id; // rsi
  MailExcelConfigMgr *v7; // rcx
  uint32_t *p_mail_id; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::map<unsigned int,unsigned int> *p_birthday_mail_effective_map; // rdx
  std::map<unsigned int,unsigned int> *v15; // rdx
  char *v16; // rsi
  bool v17; // al
  common::milog::MiLogStream *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v19; // rax
  uint32_t *v20; // rdx
  char v21; // cl
  common::milog::MiLogStream *v22; // rax
  uint32_t *v23; // rax
  int v24; // eax
  std::unordered_map<unsigned int,data::ItemLimitType> *p_mail_limit_type_map; // rdx
  std::unordered_map<unsigned int,data::ItemLimitType> *v26; // rdx
  bool v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::pointer v32; // rdx
  data::ItemLimitType *p_second; // rax
  data::ItemLimitType second; // esi
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::pointer v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // eax
  int32_t result; // eax
  uint32_t now; // [rsp+14h] [rbp-31Ch]
  data::BirthdayMailExcelConfigMap *__for_range; // [rsp+18h] [rbp-318h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-310h]
  std::tuple_element<1,std::pair<unsigned int const,data::BirthdayMailExcelConfig> >::type *birthday_mail_config; // [rsp+30h] [rbp-300h]
  data::MailExcelConfigMap *__for_range_0; // [rsp+40h] [rbp-2F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MailExcelConfig>,false,false>::reference v50; // [rsp+48h] [rbp-2E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MailExcelConfig> >::type *mail_config_id; // [rsp+50h] [rbp-2E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MailExcelConfig> >::type *mail_config_0; // [rsp+58h] [rbp-2D8h]
  char v53[720]; // [rsp+60h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 8 14 __for_begin:75 64 8 12 __for_end:75 96 8 13 begin_iter:92 128 8 9 <unknown> 160 8 15 "
                        "__for_begin:104 192 8 13 __for_end:104 224 8 8 iter:110 256 8 9 <unknown> 288 32 9 <unknown> 352"
                        " 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MailExcelConfigMgr::checkBirthdayMailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  __for_range = &this->birthday_mail_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BirthdayMailExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_reward_id = (uint32_t *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BirthdayMailExcelConfig>(__in);
    birthday_mail_config = std::get<1ul,unsigned int const,data::BirthdayMailExcelConfig>(__in);
    v7 = this;
    p_mail_id = &birthday_mail_config->mail_id;
    if ( *(_BYTE *)(((unsigned __int64)p_mail_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_mail_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_mail_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_mail_id);
    }
    if ( !data::MailExcelConfigMgrBase::findMailExcelConfig(v7, birthday_mail_config->mail_id) )
    {
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
        "./src/txt_data_manual/MailExcelConfig.cpp",
        "checkBirthdayMailConfig",
        80);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1ADB99A0);
      p_reward_id = &birthday_mail_config->mail_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &birthday_mail_config->mail_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&birthday_mail_config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&birthday_mail_config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&birthday_mail_config->reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            birthday_mail_config->reward_id,
                            ITEM_LIMIT_BIRTHDAY_BENEFIT) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BirthdayMailExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/MailExcelConfig.cpp",
    "checkBirthdayMailConfig",
    86);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v12, (const char (*)[33])byte_1ADB99E0);
  p_reward_id = &birthday_mail_config->reward_id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &birthday_mail_config->reward_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v11 = 0;
LABEL_24:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v11 == 1 )
  {
    now = common::tools::TimeUtils::getNow();
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_birthday_mail_effective_map = &this->birthday_mail_effective_map_;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_reward_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::begin<std::map<unsigned int,unsigned int>>(p_birthday_mail_effective_map);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v15 = &this->birthday_mail_effective_map_;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_reward_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end(v15);
    v16 = (char *)(v3 + 128);
    v17 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 )
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
        "./src/txt_data_manual/MailExcelConfig.cpp",
        "checkBirthdayMailConfig",
        95);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v18, (const char (*)[31])byte_1ADB9A40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
    }
    else
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
      v20 = (uint32_t *)v19;
      v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v21 != 0;
      if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
        __asan_report_load4(v19);
      if ( now >= *v20 )
      {
        __for_range_0 = &this->mail_excel_config_map;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v16);
        *(std::unordered_map<unsigned int,data::MailExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::MailExcelConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v16);
        *(std::unordered_map<unsigned int,data::MailExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::MailExcelConfig>::end(__for_range_0);
        while ( std::__detail::operator!=<std::pair<unsigned int const,data::MailExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MailExcelConfig>,false> *)(v3 + 160),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MailExcelConfig>,false> *)(v3 + 192)) )
        {
          v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MailExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MailExcelConfig>,false,false> *const)(v3 + 160));
          mail_config_id = std::get<0ul,unsigned int const,data::MailExcelConfig>(v50);
          mail_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::MailExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MailExcelConfig>(v50);
          v23 = &mail_config_0->reward_id;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          if ( mail_config_0->reward_id )
          {
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
            p_mail_limit_type_map = &this->mail_limit_type_map_;
            if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 224, (((_BYTE)mail_config_0 + 20) & 7u) + 3);
            *(std::unordered_map<unsigned int,data::ItemLimitType>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ItemLimitType>::find(
                                                                                              p_mail_limit_type_map,
                                                                                              mail_config_id);
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            v26 = &this->mail_limit_type_map_;
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 256, mail_config_id);
            *(std::unordered_map<unsigned int,data::ItemLimitType>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::ItemLimitType>::end(v26);
            v27 = std::__detail::operator==<std::pair<unsigned int const,data::ItemLimitType>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemLimitType>,false> *)(v3 + 224),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemLimitType>,false> *)(v3 + 256));
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
            if ( v27 )
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
                "./src/txt_data_manual/MailExcelConfig.cpp",
                "checkBirthdayMailConfig",
                113);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 544),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      v28,
                      (const char (*)[26])"MailConfig has reward_id:");
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      &mail_config_0->reward_id);
              v31 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v30,
                      (const char (*)[41])" but no item_limit_type, mail_config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, mail_config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
              *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v24 = 1;
            }
            else
            {
              v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false> *const)(v3 + 224));
              p_second = &v32->second;
              if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(p_second);
              }
              second = v32->second;
              if ( *(_BYTE *)(((unsigned __int64)&mail_config_0->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)mail_config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mail_config_0->reward_id >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4(&mail_config_0->reward_id);
              }
              if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                      txt_config_mgr,
                                      mail_config_0->reward_id,
                                      second) != 1 )
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
                  "./src/txt_data_manual/MailExcelConfig.cpp",
                  "checkBirthdayMailConfig",
                  118);
                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 608),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v36 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        v35,
                        (const char (*)[38])"reward_id check fail, mail_config_id:");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, mail_config_id);
                v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v37,
                        (const char (*)[18])" item_limit_type:");
                v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false> *const)(v3 + 224));
                v40 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
                        v38,
                        &v39->second);
                v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v40,
                        (const char (*)[12])" reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &mail_config_0->reward_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
                *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v24 = 1;
              }
              else
              {
                v24 = 2;
              }
            }
          }
          else
          {
            v24 = 0;
          }
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v24 && v24 != 2 )
          {
            v42 = 0;
            goto LABEL_71;
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,data::MailExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MailExcelConfig>,false,false> *const)(v3 + 160));
        }
        v42 = 1;
LABEL_71:
        if ( v42 == 1 )
          v2 = 0;
      }
      else
      {
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
          "./src/txt_data_manual/MailExcelConfig.cpp",
          "checkBirthdayMailConfig",
          100);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v22, (const char (*)[52])byte_1ADB9A80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        v2 = -1;
      }
    }
  }
  result = v2;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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

// Line 125: range 00000000145E6B4C-00000000145E7230
__int64 __fastcall MailExcelConfigMgr::checkAndRecordMailIdAndLimitType(
        MailExcelConfigMgr *const this,
        uint32_t mail_config_id,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ItemLimitType *v6; // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,data::ItemLimitType> *p_mail_limit_type_map; // rcx
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> >::type *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  std::unordered_map<unsigned int,data::ItemLimitType> *v14; // rdx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::pointer v18; // rdx
  data::ItemLimitType *p_second; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::pointer v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> >::type *iter; // [rsp+10h] [rbp-180h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> >::type *is_inserted; // [rsp+18h] [rbp-178h]
  char v30[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 18 mail_config_id:124 48 4 19 item_limit_type:124 64 8 9 <unknown> 96 16 9 <unknown> 128 "
                        "32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MailExcelConfigMgr::checkAndRecordMailIdAndLimitType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = mail_config_id;
  *(_DWORD *)(v3 + 48) = item_limit_type;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MailExcelConfig>,unsigned int>(
          &this->mail_excel_config_map,
          (const unsigned int *)(v3 + 32)) )
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
      "./src/txt_data_manual/MailExcelConfig.cpp",
      "checkAndRecordMailIdAndLimitType",
      128);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           v7,
           (const char (*)[38])"MailConfig not found, mail_config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  p_mail_limit_type_map = &this->mail_limit_type_map_;
  if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> *)(v3 + 96) = std::unordered_map<unsigned int,data::ItemLimitType>::emplace<unsigned int &,data::ItemLimitType&>(p_mail_limit_type_map, (unsigned int *)(v3 + 32), (data::ItemLimitType *)(v3 + 48), (unsigned int *)p_mail_limit_type_map, v6);
  iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> *)(v3 + 96));
  v11 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool>((std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>,bool> *)(v3 + 96));
  is_inserted = v11;
  v12 = (unsigned __int8)v11 & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(v11, v12, v13);
  if ( *is_inserted )
    goto LABEL_25;
  v14 = &this->mail_limit_type_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v12);
  *(std::unordered_map<unsigned int,data::ItemLimitType>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ItemLimitType>::end(v14);
  v15 = std::__detail::operator==<std::pair<unsigned int const,data::ItemLimitType>,false>(
          iter,
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemLimitType>,false> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v15 )
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
      4u,
      "./src/txt_data_manual/MailExcelConfig.cpp",
      "checkAndRecordMailIdAndLimitType",
      136);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v16,
            (const char (*)[29])"insert fail, mail_config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0xFFFFFFFFLL;
    goto LABEL_26;
  }
  v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::operator->(iter);
  p_second = &v18->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  if ( v18->second == *(_DWORD *)(v3 + 48) )
  {
LABEL_25:
    result = 0LL;
    goto LABEL_26;
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
    "./src/txt_data_manual/MailExcelConfig.cpp",
    "checkAndRecordMailIdAndLimitType",
    141);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          v20,
          (const char (*)[50])"record mail item_limit_type fail, mail_config_id:");
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
  v23 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v22, (const char (*)[17])" old_item_limit:");
  v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemLimitType>,false,false>::operator->(iter);
  v25 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(v23, &v24->second);
  v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" item_limit:");
  common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
    v26,
    (const data::ItemLimitType *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  result = 0xFFFFFFFFLL;
LABEL_26:
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 149: range 00000000145E7232-00000000145E74EE
const data::BirthdayMailExcelConfig *__fastcall MailExcelConfigMgr::findEffectiveBirthdayMailConfig(
        const MailExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int> *p_birthday_mail_effective_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::BirthdayMailExcelConfig *result; // rax
  std::map<unsigned int,unsigned int> *v9; // rdx
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  char v13[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 timestamp:148 64 8 8 iter:150 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MailExcelConfigMgr::findEffectiveBirthdayMailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_birthday_mail_effective_map = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_birthday_mail_effective_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->birthday_mail_effective_map_;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = data::MailExcelConfigMgrBase::findBirthdayMailExcelConfig(this, v11->second);
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 165: range 00000000145E74F0-00000000145E76E3
__int64 __fastcall MailExcelConfigMgr::getNextEffectiveBirthdayMailTime(
        const MailExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_birthday_mail_effective_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rax
  unsigned int *v10; // rdx
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 timestamp:164 64 8 14 upper_iter:166 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MailExcelConfigMgr::getNextEffectiveBirthdayMailTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_birthday_mail_effective_map = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_birthday_mail_effective_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    v10 = (unsigned int *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    result = *v10;
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

// Line 175: range 00000000145E76E4-00000000145E78EF
const data::BirthdayMailExcelConfig *__fastcall MailExcelConfigMgr::findNextEffectiveBirthdayMailConfig(
        const MailExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_birthday_mail_effective_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::BirthdayMailExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 timestamp:174 64 8 8 iter:176 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MailExcelConfigMgr::findNextEffectiveBirthdayMailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_birthday_mail_effective_map = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_birthday_mail_effective_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->birthday_mail_effective_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::MailExcelConfigMgrBase::findBirthdayMailExcelConfig(this, v9->second);
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

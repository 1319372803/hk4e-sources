// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp

// Line 13: range 0000000012CC920A-0000000012CC9792
int32_t __cdecl data::FlightDailyPointFactor::init(
        data::FlightDailyPointFactor *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  char v10[368]; // [rsp+10h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FlightDailyPointFactor::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    &byte_1AA76CA0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->time_factor) != 0;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      16);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1AA76D40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      &byte_1AA76DA0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->gold_factor) != 0;
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
        "init",
        21);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1AA76DE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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

// Line 29: range 0000000012CC9794-0000000012CCACE1
int32_t __cdecl data::FlightActivityExcelConfig::init(
        data::FlightActivityExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  bool v12; // r15
  unsigned int *v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r15
  unsigned int *p_time_factor; // r15
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool v22; // r15
  unsigned int *p_gold_factor; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t v27; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-5FCh]
  uint32_t array_counta; // [rsp+14h] [rbp-5FCh]
  uint32_t i; // [rsp+18h] [rbp-5F8h]
  uint32_t i_0; // [rsp+1Ch] [rbp-5F4h]
  char v33[1520]; // [rsp+20h] [rbp-5F0h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unknown> 256 32 9 <un"
                        "known> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unk"
                        "nown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unkn"
                        "own> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 256 11 col_name:30";
  *(_QWORD *)(v2 + 16) = data::FlightActivityExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862764] = -202116109;
  v4[536862765] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    &byte_1AA322A0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 192), &this->id) != 0;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      34);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA32340);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v7 = -1;
    goto LABEL_40;
  }
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    &byte_1AA32380,
    (const std::allocator<char> *)(v2 + 64));
  v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 320), &this->activity_id) != 0;
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      39);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AA323C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v7 = -1;
    goto LABEL_40;
  }
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 448),
    &byte_1AA77020,
    (const std::allocator<char> *)(v2 + 80));
  v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 448),
          &this->preview_reward_id) != 0;
  std::string::~string((void *)(v2 + 448));
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      44);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 512),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AA77060);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    v7 = -1;
    goto LABEL_40;
  }
  std::vector<unsigned int>::resize(&this->medal_id, 3uLL);
  array_count = 0;
  for ( i = 0; i <= 2; ++i )
  {
    snprintf((char *)(v2 + 1152), 0x100uLL, asc_1AA770C0, i + 1);
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 96);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 576),
      (const char *)(v2 + 1152),
      (const std::allocator<char> *)(v2 + 96));
    v12 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 576));
    std::string::~string((void *)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 96);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v12 )
    {
      v13 = std::vector<unsigned int>::operator[](&this->medal_id, i);
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 640),
        (const char *)(v2 + 1152),
        (const std::allocator<char> *)(v2 + 112));
      LOBYTE(v13) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 640), v13) != 0;
      std::string::~string((void *)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)v13 )
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
          "init",
          56);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])byte_1AA2F380);
        v16 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v15, (const char (*)[256])(v2 + 1152));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1AA2F3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        v7 = -1;
        goto LABEL_40;
      }
      array_count = i + 1;
    }
  }
  std::vector<unsigned int>::resize(&this->medal_id, array_count);
  std::vector<data::FlightDailyPointFactor>::resize(&this->daily_factor_vec, 7uLL);
  array_counta = 0;
  for ( i_0 = 0; ; ++i_0 )
  {
    if ( i_0 > 6 )
    {
      std::vector<data::FlightDailyPointFactor>::resize(&this->daily_factor_vec, array_counta);
      v7 = 0;
      goto LABEL_40;
    }
    snprintf((char *)(v2 + 1152), 0x100uLL, &byte_1AA77100, i_0 + 1);
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 768),
      (const char *)(v2 + 1152),
      (const std::allocator<char> *)(v2 + 128));
    v17 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 768));
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 128);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( !v17 )
    {
      p_time_factor = &std::vector<data::FlightDailyPointFactor>::operator[](&this->daily_factor_vec, i_0)->time_factor;
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 832),
        (const char *)(v2 + 1152),
        (const std::allocator<char> *)(v2 + 144));
      LOBYTE(p_time_factor) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 832),
                                p_time_factor) != 0;
      std::string::~string((void *)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( (_BYTE)p_time_factor )
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
          "init",
          72);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])byte_1AA2F380);
        v21 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v20, (const char (*)[256])(v2 + 1152));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])byte_1AA2F3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        v7 = -1;
        goto LABEL_40;
      }
      snprintf((char *)(v2 + 1152), 0x100uLL, &byte_1AA77140, i_0 + 1);
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 960),
        (const char *)(v2 + 1152),
        (const std::allocator<char> *)(v2 + 160));
      v22 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 960));
      std::string::~string((void *)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( !v22 )
        break;
    }
LABEL_38:
    ;
  }
  p_gold_factor = &std::vector<data::FlightDailyPointFactor>::operator[](&this->daily_factor_vec, i_0)->gold_factor;
  *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1024),
    (const char *)(v2 + 1152),
    (const std::allocator<char> *)(v2 + 176));
  LOBYTE(p_gold_factor) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1024),
                            p_gold_factor) != 0;
  std::string::~string((void *)(v2 + 1024));
  *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_gold_factor )
  {
    array_counta = i_0 + 1;
    goto LABEL_38;
  }
  *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 1088, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 1088),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
    "init",
    80);
  v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 1088),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v24, (const char (*)[14])byte_1AA2F380);
  v26 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v25, (const char (*)[256])(v2 + 1152));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1AA2F3C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
  v7 = -1;
LABEL_40:
  v27 = v7;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v33);
  }
  return v27;
};

// Line 92: range 0000000012CCACE2-0000000012CCAFED
int32_t __cdecl data::FlightDailyInfo::init(data::FlightDailyInfo *const this, const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FlightDailyInfo::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    &byte_1AA77180,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->watcher) != 0;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      95);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v6, (const char (*)[31])byte_1AA771C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 103: range 0000000012CCAFEE-0000000012CCB82F
int32_t __cdecl data::FlightActivityMedalExcelConfig::init(
        data::FlightActivityMedalExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  unsigned int *p_watcher; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t array_count; // [rsp+18h] [rbp-318h]
  uint32_t i; // [rsp+1Ch] [rbp-314h]
  char v15[784]; // [rsp+20h] [rbp-310h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 256 12 col_name:104";
  *(_QWORD *)(v2 + 16) = data::FlightActivityMedalExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA322A0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->id) != 0;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      108);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA32340);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
    goto LABEL_18;
  }
  std::vector<data::FlightDailyInfo>::resize(&this->daily_info, 7uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 6 )
    {
      std::vector<data::FlightDailyInfo>::resize(&this->daily_info, array_count);
      result = 0;
      goto LABEL_18;
    }
    snprintf((char *)(v2 + 416), 0x100uLL, &byte_1AA772C0, i + 1);
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      (const char *)(v2 + 416),
      (const std::allocator<char> *)(v2 + 64));
    v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v8 )
      break;
LABEL_16:
    ;
  }
  p_watcher = &std::vector<data::FlightDailyInfo>::operator[](&this->daily_info, i)->watcher;
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    (const char *)(v2 + 416),
    (const std::allocator<char> *)(v2 + 80));
  LOBYTE(p_watcher) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 288),
                        p_watcher) != 0;
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)p_watcher )
  {
    array_count = i + 1;
    goto LABEL_16;
  }
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 352, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 352),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
    "init",
    120);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AA2F380);
  v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 416));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AA2F3C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
  result = -1;
LABEL_18:
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 132: range 0000000012CCB830-0000000012CCBB3B
int32_t __cdecl data::FlightActivityDayExcelConfig::init(
        data::FlightActivityDayExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::FlightActivityDayExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 64), &this->id) != 0;
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "init",
      135);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v6, (const char (*)[23])byte_1AA2F280);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 144: range 0000000012CCBB3C-0000000012CCCB2E
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::loadFlightActivityExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  data::FlightActivityExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::FlightActivityExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8618h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85F8h]
  char v37[34288]; // [rsp+50h] [rbp-85F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34240LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:159 80 4 9 <unknown> 96 32 9 paths:145 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 72 8 d"
                        "ata:162 656 376 24 debug_message_stream:170 1104 32880 12 txt_file:153";
  *(_QWORD *)(v3 + 16) = data::ActivityFlightExcelConfigMgrBase::loadFlightActivityExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862752] = -218959360;
  v5[536862753] = -218959118;
  v5[536862754] = 62194;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/FlightActivityData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 96); __for_begin != (std::string *)(v3 + 128); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 160), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 160);
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1104), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
        "loadFlightActivityExcelConfig",
        156);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 64, v7);
      for ( *(_DWORD *)(v3 + 64) = 0; ; ++*(_DWORD *)(v3 + 64) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1104));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_BYTE *)(v13 + 8) = 0;
        data::FlightActivityExcelConfig::FlightActivityExcelConfig((data::FlightActivityExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::FlightActivityExcelConfig::init((data::FlightActivityExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA774A0);
            if ( *(_BYTE *)(((v3 + 556) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 - 64 + 108) & 7) + 3) >= *(_BYTE *)(((v3 + 556) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v3 + 556);
            }
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 556));
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
              "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
              "loadFlightActivityExcelConfig",
              172);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v21);
            *(_DWORD *)(v3 + 80) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 80));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::FlightActivityExcelConfig &>((data::FlightActivityExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::emplace<unsigned int &,data::FlightActivityExcelConfig>(
                    &this->flight_activity_excel_config_map,
                    (unsigned int *)(v3 + 556),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 63) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
                "loadFlightActivityExcelConfig",
                177);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v28,
                      (const char (*)[18])byte_1AA774E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 556));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
            "loadFlightActivityExcelConfig",
            165);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::FlightActivityExcelConfig::~FlightActivityExcelConfig((data::FlightActivityExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_BYTE *)(v30 + 8) = -8;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4264) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v37);
  }
  return v2;
};

// Line 186: range 0000000012CCCB30-0000000012CCDB00
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::loadFlightActivityMedalExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  unsigned __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  data::FlightActivityMedalExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::FlightActivityMedalExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85F8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85D8h]
  char v37[34256]; // [rsp+50h] [rbp-85D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34208LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:201 80 4 9 <unknown> 96 32 9 paths:187 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 8 d"
                        "ata:204 624 376 24 debug_message_stream:212 1072 32880 12 txt_file:195";
  *(_QWORD *)(v3 + 16) = data::ActivityFlightExcelConfigMgrBase::loadFlightActivityMedalExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862751] = -218959360;
  v5[536862752] = -218959118;
  v5[536862753] = 62194;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/FlightActivityMedalData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 96); __for_begin != (std::string *)(v3 + 128); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 160), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 160);
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1072, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1072), v7) )
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
        "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
        "loadFlightActivityMedalExcelConfig",
        198);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 64, v7);
      for ( *(_DWORD *)(v3 + 64) = 0; ; ++*(_DWORD *)(v3 + 64) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_BYTE *)(v13 + 4) = 0;
        data::FlightActivityMedalExcelConfig::FlightActivityMedalExcelConfig((data::FlightActivityMedalExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::FlightActivityMedalExcelConfig::init(
                 (data::FlightActivityMedalExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AA2F960);
            if ( *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 552) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 552);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 552));
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
              "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
              "loadFlightActivityMedalExcelConfig",
              214);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v21);
            *(_DWORD *)(v3 + 80) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 80));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::FlightActivityMedalExcelConfig &>((data::FlightActivityMedalExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::emplace<unsigned int &,data::FlightActivityMedalExcelConfig>(
                    &this->flight_activity_medal_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
                "loadFlightActivityMedalExcelConfig",
                219);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 552));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v15 = 0;
            }
            else
            {
              v15 = 1;
            }
          }
        }
        else
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
            "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
            "loadFlightActivityMedalExcelConfig",
            207);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::FlightActivityMedalExcelConfig::~FlightActivityMedalExcelConfig((data::FlightActivityMedalExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_BYTE *)(v30 + 4) = -8;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 128); i != (char *)(v3 + 96); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4260) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34208LL, v37);
  }
  return v2;
};

// Line 228: range 0000000012CCDB02-0000000012CCEB5A
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::loadFlightActivityDayExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // r14d
  int v11; // eax
  uint32_t v12; // ecx
  __int64 v13; // rsi
  __int64 *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  __int64 v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  __int64 v22; // rsi
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  data::FlightActivityDayExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::FlightActivityDayExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false,false>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85B8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8598h]
  char v37[34192]; // [rsp+50h] [rbp-8590h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34144LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:243 64 4 9 <unknown> 80 16 8 data:246 112 32 9 paths:229 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <u"
                        "nknown> 560 376 24 debug_message_stream:254 1008 32880 12 txt_file:237";
  *(_QWORD *)(v3 + 16) = data::ActivityFlightExcelConfigMgrBase::loadFlightActivityDayExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862749] = -218959360;
  v5[536862750] = -218959118;
  v5[536862751] = 62194;
  v5[536863779] = -202116109;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 112),
    "/txt/FlightActivityDayData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 112); __for_begin != (std::string *)(v3 + 144); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 176, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 176), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 176);
    std::string::~string((void *)(v3 + 176));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1008, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1008), v7) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
        "loadFlightActivityDayExcelConfig",
        240);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v11 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
        __asan_report_store4(v3 + 48, v7);
      for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
      {
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1008));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1008), v13);
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::FlightActivityDayExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( row_ptr )
        {
          if ( data::FlightActivityDayExcelConfig::init((data::FlightActivityDayExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AA2F960);
            if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 88);
            std::ostream::operator<<(v17, *(unsigned int *)(v3 + 88));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
              "loadFlightActivityDayExcelConfig",
              256);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v22 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v22);
            *(_DWORD *)(v3 + 64) = v22;
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 64));
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 432, 32LL);
            }
            std::ostringstream::str(v3 + 432, v3 + 560);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v3 + 432));
            std::string::~string((void *)(v3 + 432));
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 560);
            __asan_poison_stack_memory(v3 + 560, 376LL);
            v16 = 0;
          }
          else
          {
            v25 = std::move<data::FlightActivityDayExcelConfig &>((data::FlightActivityDayExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::emplace<unsigned int &,data::FlightActivityDayExcelConfig>(
                    &this->flight_activity_day_excel_config_map,
                    (unsigned int *)(v3 + 88),
                    v25,
                    v26,
                    v27);
            if ( !v28.second )
            {
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 496, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 496),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
                "loadFlightActivityDayExcelConfig",
                261);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                (const unsigned int *)(v3 + 88));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v16 = 0;
            }
            else
            {
              v16 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
            "loadFlightActivityDayExcelConfig",
            249);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::FlightActivityDayExcelConfig::~FlightActivityDayExcelConfig((data::FlightActivityDayExcelConfig *const)(v3 + 80));
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v31 = 0;
          goto LABEL_49;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_49:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    __asan_poison_stack_memory(v3 + 1008, 32880LL);
    if ( !v10 )
      goto LABEL_53;
  }
  v2 = 0;
LABEL_53:
  for ( i = (char *)(v3 + 144); i != (char *)(v3 + 112); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4268) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34144LL, v37);
  }
  return v2;
};

// Line 270: range 0000000012CCEB5C-0000000012CCEFD1
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::loadConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityFlightExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( data::ActivityFlightExcelConfigMgrBase::loadFlightActivityExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "loadConfig",
      273);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v5,
      (const char (*)[37])"loadFlightActivityExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityFlightExcelConfigMgrBase::loadFlightActivityMedalExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "loadConfig",
      278);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v7,
      (const char (*)[42])"loadFlightActivityMedalExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityFlightExcelConfigMgrBase::loadFlightActivityDayExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityFlightExcelConfig.gen.cpp",
      "loadConfig",
      283);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"loadFlightActivityDayExcelConfig failed");
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

// Line 290: range 0000000012CCEFD2-0000000012CCEFE4
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::rewriteConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 295: range 0000000012CCEFE6-0000000012CCEFF8
int32_t __cdecl data::ActivityFlightExcelConfigMgrBase::finalConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 300: range 0000000012CCEFFA-0000000012CCF1B5
data::FlightActivityExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityExcelConfigMap *p_flight_activity_excel_config_map; // rdx
  data::FlightActivityExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FlightActivityExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:299 64 8 8 iter:301 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_flight_activity_excel_config_map = &this->flight_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::find(
                                                                                               p_flight_activity_excel_config_map,
                                                                                               (const std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 313: range 0000000012CCF1B6-0000000012CCF371
const data::FlightActivityExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityExcelConfig(
        const data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityExcelConfigMap *p_flight_activity_excel_config_map; // rdx
  data::FlightActivityExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FlightActivityExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:312 64 8 8 iter:314 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_flight_activity_excel_config_map = &this->flight_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::find(
                                                                                                     p_flight_activity_excel_config_map,
                                                                                                     (const std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 326: range 0000000012CCF372-0000000012CCF52D
data::FlightActivityMedalExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityMedalExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityMedalExcelConfigMap *p_flight_activity_medal_excel_config_map; // rdx
  data::FlightActivityMedalExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FlightActivityMedalExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:325 64 8 8 iter:327 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityMedalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_flight_activity_medal_excel_config_map = &this->flight_activity_medal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::find(
                                                                                                    p_flight_activity_medal_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_medal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 339: range 0000000012CCF52E-0000000012CCF6E9
const data::FlightActivityMedalExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityMedalExcelConfig(
        const data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityMedalExcelConfigMap *p_flight_activity_medal_excel_config_map; // rdx
  data::FlightActivityMedalExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FlightActivityMedalExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:338 64 8 8 iter:340 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityMedalExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_flight_activity_medal_excel_config_map = &this->flight_activity_medal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::find(p_flight_activity_medal_excel_config_map, (const std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_medal_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityMedalExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityMedalExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 352: range 0000000012CCF6EA-0000000012CCF8A5
data::FlightActivityDayExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityDayExcelConfig(
        data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityDayExcelConfigMap *p_flight_activity_day_excel_config_map; // rdx
  data::FlightActivityDayExcelConfigMap *v6; // rdx
  bool v7; // al
  data::FlightActivityDayExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:351 64 8 8 iter:353 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityDayExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_flight_activity_day_excel_config_map = &this->flight_activity_day_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::find(
                                                                                                  p_flight_activity_day_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_day_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 365: range 0000000012CCF8A6-0000000012CCFA61
const data::FlightActivityDayExcelConfig *__fastcall data::ActivityFlightExcelConfigMgrBase::findFlightActivityDayExcelConfig(
        const data::ActivityFlightExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::FlightActivityDayExcelConfigMap *p_flight_activity_day_excel_config_map; // rdx
  data::FlightActivityDayExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::FlightActivityDayExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:364 64 8 8 iter:366 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityFlightExcelConfigMgrBase::findFlightActivityDayExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_flight_activity_day_excel_config_map = &this->flight_activity_day_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::find(p_flight_activity_day_excel_config_map, (const std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->flight_activity_day_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::FlightActivityDayExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FlightActivityDayExcelConfig>,false,false> *const)(v2 + 64))->second;
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

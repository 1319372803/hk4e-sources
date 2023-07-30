// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp

// Line 13: range 0000000012B0932C-0000000012B098B4
int32_t __cdecl data::AbilityOverrideParamConfig::init(
        data::AbilityOverrideParamConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideParamConfig::init;
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
    &byte_1AA2EDA0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 64), &this->param_name) != 0;
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
      "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
      "init",
      16);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v6, (const char (*)[30])byte_1AA2EE80);
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
      &byte_1AA2EEC0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 192), &this->param_value) != 0;
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
        "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
        "init",
        21);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])byte_1AA2EF00);
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

// Line 29: range 0000000012B098B6-0000000012B0B9D2
int32_t __cdecl data::AbilityOverrideExcelConfig::init(
        data::AbilityOverrideExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rax
  bool v17; // r15
  unsigned __int64 v18; // rax
  char *j; // r14
  _DWORD *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  _DWORD *v25; // rax
  bool v26; // r15
  unsigned __int64 v27; // rax
  char *k; // r14
  _DWORD *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  bool t; // [rsp+0h] [rbp-8D0h]
  bool ta; // [rsp+0h] [rbp-8D0h]
  bool tb; // [rsp+0h] [rbp-8D0h]
  std::string *tc; // [rsp+0h] [rbp-8D0h]
  bool td; // [rsp+0h] [rbp-8D0h]
  float *te; // [rsp+0h] [rbp-8D0h]
  bool tf; // [rsp+0h] [rbp-8D0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-8C0h]
  uint32_t array_count; // [rsp+38h] [rbp-898h]
  uint32_t i; // [rsp+3Ch] [rbp-894h]
  char v44[2192]; // [rsp+40h] [rbp-890h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2144LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "39 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 24 9 <unknown> "
                        "352 24 9 <unknown> 416 32 10 val_str:32 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>"
                        " 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> "
                        "992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknow"
                        "n> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <un"
                        "known> 1632 64 9 <unknown> 1728 64 9 <unknown> 1824 256 11 col_name:30";
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862773] = -218959118;
  v4[536862776] = -218959118;
  v4[536862785] = -202116109;
  v4[536862786] = -202116109;
  std::string::basic_string(v2 + 416);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 480),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 480), &this->id) != 0;
  std::string::~string((void *)(v2 + 480));
  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
      "init",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 544),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AA2F280);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 608),
      "AbilityName",
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 608), &this->ability_name) != 0;
    std::string::~string((void *)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
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
        "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
        "init",
        40);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 672),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1AA2F300);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      std::vector<data::AbilityOverrideParamConfig>::resize(&this->ability_special_param_config, 5uLL);
      array_count = 0;
      for ( i = 0; i <= 4; ++i )
      {
        snprintf((char *)(v2 + 1824), 0x100uLL, asc_1AA2F340, i + 1);
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          (const char *)(v2 + 1824),
          (const std::allocator<char> *)(v2 + 80));
        tb = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !tb )
        {
          tc = &std::vector<data::AbilityOverrideParamConfig>::operator[](&this->ability_special_param_config, i)->param_name;
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 800),
            (const char *)(v2 + 1824),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(tc) = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 800), tc) != 0;
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)tc )
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
              "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
              "init",
              52);
            v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 864),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])byte_1AA2F380);
            v10 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v9,
                    (const char (*)[256])(v2 + 1824));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1AA2F3C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            goto LABEL_53;
          }
          snprintf((char *)(v2 + 1824), 0x100uLL, asc_1AA2F400, i + 1);
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 928),
            (const char *)(v2 + 1824),
            (const std::allocator<char> *)(v2 + 112));
          td = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 928));
          std::string::~string((void *)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( !td )
          {
            te = &std::vector<data::AbilityOverrideParamConfig>::operator[](&this->ability_special_param_config, i)->param_value;
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              (const char *)(v2 + 1824),
              (const std::allocator<char> *)(v2 + 128));
            LOBYTE(te) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 992), te) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( (_BYTE)te )
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1056, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1056),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
                "init",
                60);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v11,
                      (const char (*)[14])byte_1AA2F380);
              v13 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                      v12,
                      (const char (*)[256])(v2 + 1824));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AA2F3C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
              goto LABEL_53;
            }
            array_count = i + 1;
          }
        }
      }
      std::vector<data::AbilityOverrideParamConfig>::resize(&this->ability_special_param_config, array_count);
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1120),
        &byte_1AA2F440,
        (const std::allocator<char> *)(v2 + 144));
      tf = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1120), (std::string *)(v2 + 416)) != 0;
      std::string::~string((void *)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( tf )
      {
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
          "init",
          69);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v14, (const char (*)[36])byte_1AA2F480);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v15 = ((v2 + 288) >> 3) + 2147450880;
        *(_WORD *)v15 = 0;
        *(_BYTE *)(v15 + 2) = 0;
        v16 = (_DWORD *)(((v2 + 1632) >> 3) + 2147450880);
        *v16 = 0;
        v16[1] = 0;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 160);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1632),
          ";",
          (const std::allocator<char> *)(v2 + 160));
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 176);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1664),
          ",",
          (const std::allocator<char> *)(v2 + 176));
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 192));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 288),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1632),
          (const std::vector<std::string>::allocator_type *)(v2 + 192));
        v17 = common::tools::StringUtils::splitToListBySeps(
                (const std::string *)(v2 + 416),
                (const std::vector<std::string> *)(v2 + 288),
                &this->param_name_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
        v18 = ((v2 + 288) >> 3) + 2147450880;
        *(_WORD *)v18 = -1800;
        *(_BYTE *)(v18 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 192));
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        for ( j = (char *)(v2 + 1696); j != (char *)(v2 + 1632); std::string::~string(j) )
          j -= 32;
        v20 = (_DWORD *)(((v2 + 1632) >> 3) + 2147450880);
        *v20 = -117901064;
        v20[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 176);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 160);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v17 )
        {
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1248, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1248),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
            "init",
            74);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1248),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v21, (const char (*)[36])byte_1AA2F480);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 208);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1312),
            &byte_1AA2F4E0,
            (const std::allocator<char> *)(v2 + 208));
          v22 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1312),
                  (std::string *)(v2 + 416)) != 0;
          std::string::~string((void *)(v2 + 1312));
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 208);
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v22 )
          {
            *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1376, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1376),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
              "init",
              79);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1376),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v23, (const char (*)[36])byte_1AA2F520);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
            *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v24 = ((v2 + 352) >> 3) + 2147450880;
            *(_WORD *)v24 = 0;
            *(_BYTE *)(v24 + 2) = 0;
            v25 = (_DWORD *)(((v2 + 1728) >> 3) + 2147450880);
            *v25 = 0;
            v25[1] = 0;
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 224);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1728),
              ";",
              (const std::allocator<char> *)(v2 + 224));
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 240);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1760),
              ",",
              (const std::allocator<char> *)(v2 + 240));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1728);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 256));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 352),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 256));
            v26 = common::tools::StringUtils::splitToListBySeps<float>(
                    (const std::string *)(v2 + 416),
                    (const std::vector<std::string> *)(v2 + 352),
                    &this->param_value_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
            v27 = ((v2 + 352) >> 3) + 2147450880;
            *(_WORD *)v27 = -1800;
            *(_BYTE *)(v27 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 256));
            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
            for ( k = (char *)(v2 + 1792); k != (char *)(v2 + 1728); std::string::~string(k) )
              k -= 32;
            v29 = (_DWORD *)(((v2 + 1728) >> 3) + 2147450880);
            *v29 = -117901064;
            v29[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 240);
            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 224);
            *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
            if ( v26 )
            {
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1440, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1440),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
                "init",
                84);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v30, (const char (*)[36])byte_1AA2F520);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
              *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 272);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1504),
                &byte_1AA2F580,
                (const std::allocator<char> *)(v2 + 272));
              v31 = common::tools::TxtFile::Row::assignToNum<bool>(
                      row,
                      (const std::string *)(v2 + 1504),
                      &this->reset_ability_special) != 0;
              std::string::~string((void *)(v2 + 1504));
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 272);
              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
              if ( v31 )
              {
                *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1568, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1568),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
                  "init",
                  89);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1568),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v32, (const char (*)[54])byte_1AA2F5E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                v6 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  std::string::~string((void *)(v2 + 416));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80DC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862736) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450936 - (((_DWORD)v4 + 2147450944) & 0xFFFFFFF8) + 172) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2144LL, v44);
  }
  return v6;
};

// Line 98: range 0000000012B0B9D4-0000000012B0CBD9
int32_t __cdecl data::AbilityOverrideExcelConfigMgrBase::loadAbilityOverrideExcelConfig(
        data::AbilityOverrideExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string *p_real_data_base_dir; // rsi
  const char *v6; // rsi
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // r14d
  int v10; // eax
  uint32_t v11; // ecx
  _DWORD *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  __int64 v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  data::AbilityOverrideExcelConfig *v23; // rax
  unsigned int *v24; // rcx
  data::AbilityOverrideExcelConfig *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  _DWORD *v29; // rax
  int v30; // edx
  char *i; // r14
  int32_t v33; // [rsp+1Ch] [rbp-86B4h]
  std::string *__for_begin; // [rsp+38h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+58h] [rbp-8678h]
  char v37[34416]; // [rsp+60h] [rbp-8670h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_10(34368LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 5 r:115 96 4 9 <unknown> 112 32 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unk"
                        "nown> 496 96 8 paths:99 624 128 8 data:118 784 376 24 debug_message_stream:126 1232 32880 12 txt_file:109";
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideExcelConfigMgrBase::loadAbilityOverrideExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862756] = -218959360;
  v4[536862757] = -218959118;
  v4[536862758] = 62194;
  v4[536863786] = -202116109;
  v4[536863787] = -202116109;
  v4[536863788] = -202116109;
  v4[536863789] = -202116109;
  v4[536863790] = -202116109;
  v4[536863791] = -202116109;
  v4[536863792] = -202116109;
  v4[536863793] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 496),
    "/txt/AbilityOverride_Avatar.txt",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 528),
    "/txt/AbilityOverride_Level.txt",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 560),
    "/txt/AbilityOverride_Monster.txt",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v2 + 496); __for_begin != (std::string *)(v2 + 592); ++__for_begin )
  {
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v2 + 112, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 112), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v2 + 112);
    std::string::~string((void *)(v2 + 112));
    *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v2 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v2 + 1232));
    v6 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v2 + 1232), v6) )
    {
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
        "loadAbilityOverrideExcelConfig",
        112);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[8])byte_1AA2F8A0);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v33 = -1;
      v9 = 0;
    }
    else
    {
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
      v10 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v10 != 0 && (char)v10 <= 3 )
        __asan_report_store4(v2 + 80, v6);
      for ( *(_DWORD *)(v2 + 80) = 0; ; ++*(_DWORD *)(v2 + 80) )
      {
        v11 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v2 + 1232));
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
        if ( v11 <= *(_DWORD *)(v2 + 80) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v2 + 1232), *(_DWORD *)(v2 + 80));
        v12 = (_DWORD *)(((v2 + 624) >> 3) + 2147450880);
        *v12 = 0;
        v12[1] = 0;
        v12[2] = 0;
        v12[3] = 0;
        data::AbilityOverrideExcelConfig::AbilityOverrideExcelConfig((data::AbilityOverrideExcelConfig *const)(v2 + 624));
        if ( row_ptr )
        {
          if ( data::AbilityOverrideExcelConfig::init((data::AbilityOverrideExcelConfig *const)(v2 + 624), row_ptr) )
          {
            __asan_unpoison_stack_memory(v2 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v2 + 784);
            v15 = std::operator<<<std::char_traits<char>>(v2 + 784, &unk_1AA2F960);
            if ( *(_BYTE *)(((v2 + 632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 632) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 632);
            std::ostream::operator<<(v15, *(unsigned int *)(v2 + 632));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
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
              "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
              "loadAbilityOverrideExcelConfig",
              128);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"<");
            v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, __for_begin);
            v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v18,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 80);
            v20 = (unsigned int)(*(_DWORD *)(v2 + 80) + 1);
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 96, v20);
            *(_DWORD *)(v2 + 96) = v20;
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v2 + 96));
            v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v21,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 368, 32LL);
            }
            std::ostringstream::str(v2 + 368, v2 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, (const std::string *)(v2 + 368));
            std::string::~string((void *)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
            *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v33 = -1;
            std::ostringstream::~ostringstream(v2 + 784);
            __asan_poison_stack_memory(v2 + 784, 376LL);
            v14 = 0;
          }
          else
          {
            v23 = std::move<data::AbilityOverrideExcelConfig &>((data::AbilityOverrideExcelConfig *)(v2 + 624));
            v26 = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::emplace<unsigned int &,data::AbilityOverrideExcelConfig>(
                    &this->ability_override_excel_config_map,
                    (unsigned int *)(v2 + 632),
                    v23,
                    v24,
                    v25);
            if ( !v26.second )
            {
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 432, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 432),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
                "loadAbilityOverrideExcelConfig",
                133);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 432),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])byte_1AA2FA60);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v2 + 632));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
              v33 = -1;
              v14 = 0;
            }
            else
            {
              v14 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
            "loadAbilityOverrideExcelConfig",
            121);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v2 + 240),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v33 = -1;
          v14 = 0;
        }
        data::AbilityOverrideExcelConfig::~AbilityOverrideExcelConfig((data::AbilityOverrideExcelConfig *const)(v2 + 624));
        v29 = (_DWORD *)(((v2 + 624) >> 3) + 2147450880);
        *v29 = -117901064;
        v29[1] = -117901064;
        v29[2] = -117901064;
        v29[3] = -117901064;
        if ( v14 != 1 )
        {
          v30 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 80);
      }
      v30 = 1;
LABEL_45:
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      v9 = v30 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v2 + 1232));
    __asan_poison_stack_memory(v2 + 1232, 32880LL);
    if ( !v9 )
      goto LABEL_49;
  }
  v33 = 0;
LABEL_49:
  for ( i = (char *)(v2 + 592); i != (char *)(v2 + 496); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862740) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450952 - (((_DWORD)v4 + 2147450960) & 0xFFFFFFF8) + 4224) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_10(v2, 34368LL, v37);
  }
  return v33;
};

// Line 142: range 0000000012B0CBDA-0000000012B0CDBD
int32_t __cdecl data::AbilityOverrideExcelConfigMgrBase::loadConfig(
        data::AbilityOverrideExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
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
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideExcelConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::AbilityOverrideExcelConfigMgrBase::loadAbilityOverrideExcelConfig(this, config) )
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
      "./src/txt_data_auto/AbilityOverrideExcelConfig.gen.cpp",
      "loadConfig",
      145);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v5,
      (const char (*)[38])"loadAbilityOverrideExcelConfig failed");
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

// Line 152: range 0000000012B0CDBE-0000000012B0CDD0
int32_t __cdecl data::AbilityOverrideExcelConfigMgrBase::rewriteConfig(
        data::AbilityOverrideExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 157: range 0000000012B0CDD2-0000000012B0CDE4
int32_t __cdecl data::AbilityOverrideExcelConfigMgrBase::finalConfig(
        data::AbilityOverrideExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 162: range 0000000012B0CDE6-0000000012B0CFA1
data::AbilityOverrideExcelConfig *__fastcall data::AbilityOverrideExcelConfigMgrBase::findAbilityOverrideExcelConfig(
        data::AbilityOverrideExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AbilityOverrideExcelConfigMap *p_ability_override_excel_config_map; // rdx
  data::AbilityOverrideExcelConfigMap *v6; // rdx
  bool v7; // al
  data::AbilityOverrideExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:161 64 8 8 iter:163 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideExcelConfigMgrBase::findAbilityOverrideExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_ability_override_excel_config_map = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::find(
                                                                                                p_ability_override_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 175: range 0000000012B0CFA2-0000000012B0D15D
const data::AbilityOverrideExcelConfig *__fastcall data::AbilityOverrideExcelConfigMgrBase::findAbilityOverrideExcelConfig(
        const data::AbilityOverrideExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::AbilityOverrideExcelConfigMap *p_ability_override_excel_config_map; // rdx
  data::AbilityOverrideExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::AbilityOverrideExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:174 64 8 8 iter:176 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AbilityOverrideExcelConfigMgrBase::findAbilityOverrideExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_ability_override_excel_config_map = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::find(p_ability_override_excel_config_map, (const std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v2 + 64))->second;
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

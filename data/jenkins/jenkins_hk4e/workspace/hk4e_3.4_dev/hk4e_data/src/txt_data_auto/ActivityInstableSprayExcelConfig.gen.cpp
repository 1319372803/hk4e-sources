// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp

// Line 13: range 0000000012D42128-0000000012D4294A
int32_t __cdecl data::InstableSprayOverallExcelConfig::init(
        data::InstableSprayOverallExcelConfig *const this,
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
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  char v12[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InstableSprayOverallExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA36B20,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->activity_id) != 0;
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      16);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA36B60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "scheduleID",
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 224),
           &this->schedule_id) != 0;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        21);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v9, (const char (*)[31])byte_1AA470A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        aBuff_3,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 352),
              &this->weight_down_percent) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
          "init",
          26);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v11, (const char (*)[55])byte_1AA89420);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 34: range 0000000012D4294C-0000000012D44114
int32_t __cdecl data::InstableSprayStageExcelConfig::init(
        data::InstableSprayStageExcelConfig *const this,
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
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // r15
  unsigned __int64 v13; // rax
  char *i; // r14
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r15
  unsigned __int64 v22; // rax
  char *j; // r14
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool t; // [rsp+0h] [rbp-5C0h]
  bool ta; // [rsp+0h] [rbp-5C0h]
  bool tb; // [rsp+0h] [rbp-5C0h]
  bool tc; // [rsp+0h] [rbp-5C0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-5B0h]
  char v32[1424]; // [rsp+30h] [rbp-590h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1376LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "28 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 24 9 <unknown> 288 24 9 <unknown> 352 32 10 val_str:35 416 32 9 <unknown> 480 32 9 <unk"
                        "nown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unkn"
                        "own> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unk"
                        "nown> 1184 64 9 <unknown> 1280 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InstableSprayStageExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
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
  v4[536862759] = -218959118;
  v4[536862762] = -202116109;
  std::string::basic_string(v2 + 352);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    &byte_1AA473A0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 416), &this->stage_id) != 0;
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      38);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 480),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v5, (const char (*)[33])byte_1AA473E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 544),
      &byte_1AA34E00,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 544), &this->open_day) != 0;
    std::string::~string((void *)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        43);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 608),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AA34E40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        &byte_1AA400E0,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 672),
             &this->dungeon_id) != 0;
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
          "init",
          48);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 736),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v8, (const char (*)[29])byte_1AA40120);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 800),
          &byte_1AA39520,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 800), (std::string *)(v2 + 352)) != 0;
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "init",
            53);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 864),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AA39560);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v10 = ((v2 + 224) >> 3) + 2147450880;
          *(_WORD *)v10 = 0;
          *(_BYTE *)(v10 + 2) = 0;
          v11 = (_DWORD *)(((v2 + 1184) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1184),
            ";",
            (const std::allocator<char> *)(v2 + 112));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1216),
            ",",
            (const std::allocator<char> *)(v2 + 128));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 224),
            (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1184),
            (const std::vector<std::string>::allocator_type *)(v2 + 144));
          v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 352),
                  (const std::vector<std::string> *)(v2 + 224),
                  &this->level_id_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 224));
          v13 = ((v2 + 224) >> 3) + 2147450880;
          *(_WORD *)v13 = -1800;
          *(_BYTE *)(v13 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          for ( i = (char *)(v2 + 1248); i != (char *)(v2 + 1184); std::string::~string(i) )
            i -= 32;
          v15 = (_DWORD *)(((v2 + 1184) >> 3) + 2147450880);
          *v15 = -117901064;
          v15[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v12 )
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "init",
              58);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v16, (const char (*)[29])byte_1AA39560);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              aWatcher_5,
              (const std::allocator<char> *)(v2 + 160));
            v17 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 992),
                    (std::string *)(v2 + 352)) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v17 )
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
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "init",
                63);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v18, (const char (*)[34])byte_1AA33B80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v19 = ((v2 + 288) >> 3) + 2147450880;
              *(_WORD *)v19 = 0;
              *(_BYTE *)(v19 + 2) = 0;
              v20 = (_DWORD *)(((v2 + 1280) >> 3) + 2147450880);
              *v20 = 0;
              v20[1] = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1280),
                ";",
                (const std::allocator<char> *)(v2 + 176));
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1312),
                ",",
                (const std::allocator<char> *)(v2 + 192));
              __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1280);
              __l._M_len = 2LL;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 288),
                __l,
                (const std::vector<std::string>::allocator_type *)(v2 + 208));
              v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 352),
                      (const std::vector<std::string> *)(v2 + 288),
                      &this->watcher_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
              v22 = ((v2 + 288) >> 3) + 2147450880;
              *(_WORD *)v22 = -1800;
              *(_BYTE *)(v22 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              for ( j = (char *)(v2 + 1344); j != (char *)(v2 + 1280); std::string::~string(j) )
                j -= 32;
              v24 = (_DWORD *)(((v2 + 1280) >> 3) + 2147450880);
              *v24 = -117901064;
              v24[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v21 )
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1120, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1120),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                  "init",
                  68);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v25, (const char (*)[34])byte_1AA33B80);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 352));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862734) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450928 - (((_DWORD)v4 + 2147450936) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1376LL, v32);
  }
  return v6;
};

// Line 76: range 0000000012D44116-0000000012D44BAE
int32_t __cdecl data::InstableSprayDifficultyExcelConfig::init(
        data::InstableSprayDifficultyExcelConfig *const this,
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
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  char v14[656]; // [rsp+10h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InstableSprayDifficultyExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA896A0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 96),
         &this->difficulty_level) != 0;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      79);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AA896E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      &byte_1AA89740,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 224), &this->difficulty_desc) != 0;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        84);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v9, (const char (*)[54])byte_1AA897A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        &byte_1AA44040,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 352), &this->score_ratio) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
          "init",
          89);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1AA44080);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          &byte_1AA89800,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 480),
                &this->initial_dungeon_level) != 0;
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
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
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "init",
            94);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v13, (const char (*)[39])byte_1AA89840);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 102: range 0000000012D44BB0-0000000012D46AC2
int32_t __cdecl data::InstableSprayLevelExcelConfig::init(
        data::InstableSprayLevelExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  _DWORD *v10; // rax
  bool v11; // r15
  unsigned __int64 v12; // rax
  char *i; // r14
  _DWORD *v14; // rax
  common::milog::MiLogStream *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  _DWORD *v19; // rax
  bool v20; // r15
  unsigned __int64 v21; // rax
  char *j; // r14
  _DWORD *v23; // rax
  common::milog::MiLogStream *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  unsigned __int64 v27; // rax
  _DWORD *v28; // rax
  bool v29; // r15
  unsigned __int64 v30; // rax
  char *k; // r14
  _DWORD *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool v34; // r14
  common::milog::MiLogStream *v35; // rax
  bool t; // [rsp+0h] [rbp-770h]
  bool ta; // [rsp+0h] [rbp-770h]
  bool tb; // [rsp+0h] [rbp-770h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-760h]
  std::initializer_list<std::string > v41; // [rsp+20h] [rbp-750h]
  char v42[1840]; // [rsp+40h] [rbp-730h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1792LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "37 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 24 9 <unknown> "
                        "352 24 9 <unknown> 416 24 9 <unknown> 480 32 11 val_str:103 544 32 9 <unknown> 608 32 9 <unknown"
                        "> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown>"
                        " 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unkno"
                        "wn> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 64 9 <unknown> 1600 64 9 <u"
                        "nknown> 1696 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InstableSprayLevelExcelConfig::init;
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
  v4[536862733] = -234881024;
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
  v4[536862769] = -218959118;
  v4[536862772] = -218959118;
  v4[536862775] = -202116109;
  std::string::basic_string(v2 + 480);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 544),
    &byte_1AA39520,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 544), &this->level_id) != 0;
  std::string::~string((void *)(v2 + 544));
  *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      106);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 608),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AA39560);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
    *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 672),
      "galleryID",
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 672), &this->gallery_id) != 0;
    std::string::~string((void *)(v2 + 672));
    *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        111);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 736),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1AA47920);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 800),
        aBuff_4,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 800), (std::string *)(v2 + 480)) != 0;
      std::string::~string((void *)(v2 + 800));
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
          "init",
          116);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 864),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v8, (const char (*)[31])byte_1AA89BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v9 = ((v2 + 288) >> 3) + 2147450880;
        *(_WORD *)v9 = 0;
        *(_BYTE *)(v9 + 2) = 0;
        v10 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
        *v10 = 0;
        v10[1] = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1504),
          ";",
          (const std::allocator<char> *)(v2 + 96));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 112);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1536),
          ",",
          (const std::allocator<char> *)(v2 + 112));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 288),
          (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1504),
          (const std::vector<std::string>::allocator_type *)(v2 + 128));
        v11 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 480),
                (const std::vector<std::string> *)(v2 + 288),
                &this->buff_id_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
        v12 = ((v2 + 288) >> 3) + 2147450880;
        *(_WORD *)v12 = -1800;
        *(_BYTE *)(v12 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 1568); i != (char *)(v2 + 1504); std::string::~string(i) )
          i -= 32;
        v14 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
        *v14 = -117901064;
        v14[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 112);
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v11 )
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 928, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 928),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "init",
            121);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 928),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v15, (const char (*)[31])byte_1AA89BA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 992),
            aBuff_5,
            (const std::allocator<char> *)(v2 + 144));
          v16 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 992),
                  (std::string *)(v2 + 480)) != 0;
          std::string::~string((void *)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
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
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "init",
              126);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v17, (const char (*)[37])byte_1AA89C20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v18 = ((v2 + 352) >> 3) + 2147450880;
            *(_WORD *)v18 = 0;
            *(_BYTE *)(v18 + 2) = 0;
            v19 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
            *v19 = 0;
            v19[1] = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1600),
              ";",
              (const std::allocator<char> *)(v2 + 160));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 176);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1632),
              ",",
              (const std::allocator<char> *)(v2 + 176));
            __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1600);
            __l._M_len = 2LL;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 192));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 352),
              __l,
              (const std::vector<std::string>::allocator_type *)(v2 + 192));
            v20 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 480),
                    (const std::vector<std::string> *)(v2 + 352),
                    &this->buff_weight_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
            v21 = ((v2 + 352) >> 3) + 2147450880;
            *(_WORD *)v21 = -1800;
            *(_BYTE *)(v21 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 192));
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 1664); j != (char *)(v2 + 1600); std::string::~string(j) )
              j -= 32;
            v23 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
            *v23 = -117901064;
            v23[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 176);
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v20 )
            {
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1120, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1120),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "init",
                131);
              v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v24, (const char (*)[37])byte_1AA89C20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                &byte_1AA47AA0,
                (const std::allocator<char> *)(v2 + 208));
              v25 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1184),
                      (std::string *)(v2 + 480)) != 0;
              std::string::~string((void *)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 208);
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v25 )
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1248, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1248),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                  "init",
                  136);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1248),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v26, (const char (*)[36])byte_1AA47AE0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                v27 = ((v2 + 416) >> 3) + 2147450880;
                *(_WORD *)v27 = 0;
                *(_BYTE *)(v27 + 2) = 0;
                v28 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
                *v28 = 0;
                v28[1] = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1696),
                  ";",
                  (const std::allocator<char> *)(v2 + 224));
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 240);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1728),
                  ",",
                  (const std::allocator<char> *)(v2 + 240));
                v41._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1696);
                v41._M_len = 2LL;
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 256));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 416),
                  v41,
                  (const std::vector<std::string>::allocator_type *)(v2 + 256));
                v29 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 480),
                        (const std::vector<std::string> *)(v2 + 416),
                        &this->trail_avatar_list,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
                v30 = ((v2 + 416) >> 3) + 2147450880;
                *(_WORD *)v30 = -1800;
                *(_BYTE *)(v30 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 256));
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                for ( k = (char *)(v2 + 1760); k != (char *)(v2 + 1696); std::string::~string(k) )
                  k -= 32;
                v32 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
                *v32 = -117901064;
                v32[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 240);
                *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( v29 )
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1312, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1312),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                    "init",
                    141);
                  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1312),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v33,
                    (const char (*)[36])byte_1AA47AE0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 272);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    &byte_1AA89C80,
                    (const std::allocator<char> *)(v2 + 272));
                  v34 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1376),
                          &this->monster_preview) != 0;
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 272);
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  if ( v34 )
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1440, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1440),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                      "init",
                      146);
                    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1440),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v35,
                      (const char (*)[33])byte_1AA89CC0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
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
    }
  }
  std::string::~string((void *)(v2 + 480));
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862738) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450944 - (((_DWORD)v4 + 2147450952) & 0xFFFFFFF8) + 160) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1792LL, v42);
  }
  return v6;
};

// Line 154: range 0000000012D46AC4-0000000012D472E6
int32_t __cdecl data::InstableSprayBuffExcelConfig::init(
        data::InstableSprayBuffExcelConfig *const this,
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
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  char v12[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::InstableSprayBuffExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA3B300,
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      157);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA3B340);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "AbilityGroupName",
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 224), &this->ability_group_name) != 0;
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        162);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v9, (const char (*)[37])byte_1AA4A000);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        off_1AA89D20,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 352), &this->sgv) != 0;
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
          "init",
          167);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v11, (const char (*)[24])byte_1AA89D60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 175: range 0000000012D472E8-0000000012D47D9E
int32_t __cdecl data::InstableSprayGachaExcelConfig::init(
        data::InstableSprayGachaExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  unsigned int *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  uint32_t array_count; // [rsp+18h] [rbp-398h]
  uint32_t i; // [rsp+1Ch] [rbp-394h]
  char v17[912]; // [rsp+20h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 256 12 col_name:176";
  *(_QWORD *)(v2 + 16) = data::InstableSprayGachaExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    &byte_1AA89EA0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 96), &this->stage_id) != 0;
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "init",
      180);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AA89EE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    std::vector<unsigned int>::resize(&this->buff_count_weight_list, 4uLL);
    array_count = 0;
    for ( i = 0; i <= 3; ++i )
    {
      snprintf((char *)(v2 + 544), 0x100uLL, &byte_1AA89F40, i + 1);
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 224),
        (const char *)(v2 + 544),
        (const std::allocator<char> *)(v2 + 48));
      v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 224));
      std::string::~string((void *)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v8 )
      {
        v9 = std::vector<unsigned int>::operator[](&this->buff_count_weight_list, i);
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 288),
          (const char *)(v2 + 544),
          (const std::allocator<char> *)(v2 + 64));
        LOBYTE(v9) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 288), v9) != 0;
        std::string::~string((void *)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)v9 )
        {
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
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "init",
            192);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AA2F380);
          v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 544));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AA2F3C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          result = -1;
          goto LABEL_22;
        }
        array_count = i + 1;
      }
    }
    std::vector<unsigned int>::resize(&this->buff_count_weight_list, array_count);
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 80);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      &byte_1AA89F80,
      (const std::allocator<char> *)(v2 + 80));
    v13 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
            row,
            (const std::string *)(v2 + 416),
            &this->stage_end_time) != 0;
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 80);
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "init",
        201);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v14, (const char (*)[45])byte_1AA89FC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
LABEL_22:
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 210: range 0000000012D47DA0-0000000012D49266
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayOverallExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  unsigned __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  unsigned __int64 v19; // rax
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  std::map<long unsigned int,std::string>::mapped_type *v23; // rdx
  std::vector<std::string>::size_type v24; // rdx
  const char *v25; // rax
  __int64 v26; // r14
  std::map<long unsigned int,std::string>::mapped_type *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  const std::vector<std::string> *p_data_vec; // rax
  std::vector<std::string>::const_reference v31; // rax
  unsigned __int64 v32; // rax
  const char *v33; // rax
  __int64 v34; // r14
  std::vector<std::string>::const_reference v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  data::InstableSprayOverallExcelConfig *v43; // rax
  data::InstableSprayOverallExcelConfig *v44; // rdx
  unsigned __int64 v45; // rax
  int v46; // edx
  char *j; // r14
  std::string *__for_begin; // [rsp+20h] [rbp-86A0h]
  size_t i; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  std::map<std::string,short unsigned int> *__for_range_0; // [rsp+50h] [rbp-8670h]
  std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::reference v54; // [rsp+58h] [rbp-8668h]
  std::tuple_element<0,std::pair<const std::string,short unsigned int> >::type *col_name; // [rsp+60h] [rbp-8660h]
  std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *col_id; // [rsp+68h] [rbp-8658h]
  char v57[34384]; // [rsp+70h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "17 48 1 9 <unknown> 64 4 5 r:225 80 4 9 <unknown> 96 8 15 __for_begin:240 128 8 13 __for_end:240"
                        " 160 8 9 <unknown> 192 8 5 i:244 224 24 8 data:228 288 32 9 paths:211 352 32 9 <unknown> 416 32 "
                        "9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 48 19 col_id_name_map:2"
                        "39 752 376 24 debug_message_stream:236 1200 32880 12 txt_file:219";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayOverallExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862755] = -218959360;
  v5[536862756] = -218959118;
  v5[536862757] = 62194;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 288),
    "/txt/InstableSprayOverallData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 288); __for_begin != (std::string *)(v3 + 320); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 352, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 352), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 352);
    std::string::~string((void *)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
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
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayOverallExcelConfig",
        222);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1200));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        v13 = *(unsigned int *)(v3 + 64);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), v13);
        v14 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v14 = 0;
        *(_BYTE *)(v14 + 2) = 0;
        v15 = &`vtable for'data::InstableSprayOverallExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v13);
        *(_QWORD *)(v3 + 224) = v15;
        if ( *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 232) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 232, v13);
        *(_DWORD *)(v3 + 232) = 0;
        v16 = (((_BYTE)v3 - 32 + 12) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 - 32 + 12) & 7) + 3) >= *(_BYTE *)(((v3 + 236) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 236, v16);
        }
        *(_DWORD *)(v3 + 236) = 0;
        if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 240, v16);
        *(_DWORD *)(v3 + 240) = 0;
        if ( row_ptr )
        {
          if ( data::InstableSprayOverallExcelConfig::init(
                 (data::InstableSprayOverallExcelConfig *const)(v3 + 224),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
              __asan_report_load8(&row_ptr->col_name_map_ptr);
            if ( row_ptr->col_name_map_ptr )
            {
              v19 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v19 = 0;
              *(_WORD *)(v19 + 4) = 0;
              std::map<unsigned long,std::string>::map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              if ( *(_BYTE *)(((unsigned __int64)&row_ptr->col_name_map_ptr >> 3) + 0x7FFF8000) )
                __asan_report_load8(&row_ptr->col_name_map_ptr);
              __for_range_0 = row_ptr->col_name_map_ptr;
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 96, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 96) = std::map<std::string,unsigned short>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 128, 376LL);
              *(std::map<std::string,short unsigned int>::iterator *)(v3 + 128) = std::map<std::string,unsigned short>::end(__for_range_0);
              while ( std::operator!=(
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 96),
                        (const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> >::_Self *)(v3 + 128)) )
              {
                v54 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator*((const std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
                col_name = std::get<0ul,std::string const,unsigned short>(v54);
                v20 = (std::tuple_element<1,const std::pair<const std::string,short unsigned int> >::type *)std::get<1ul,std::string const,unsigned short>(v54);
                col_id = v20;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                v21 = ((unsigned __int8)v20 & 7u) + 1;
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v20 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load2(v20);
                }
                v22 = *col_id;
                if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 160, v21);
                *(_QWORD *)(v3 + 160) = v22;
                v23 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (std::map<long unsigned int,std::string>::key_type *)(v3 + 160));
                std::string::operator=(v23, col_name);
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                std::_Rb_tree_iterator<std::pair<std::string const,unsigned short>>::operator++((std::_Rb_tree_iterator<std::pair<const std::string,short unsigned int> > *const)(v3 + 96));
              }
              *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 192, v3 + 128);
              for ( *(_QWORD *)(v3 + 192) = 0LL; ; ++*(_QWORD *)(v3 + 192) )
              {
                v24 = std::vector<std::string>::size(&row_ptr->data_vec);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                if ( v24 <= *(_QWORD *)(v3 + 192) )
                  break;
                if ( *(_QWORD *)(v3 + 192) )
                  v25 = " ";
                else
                  v25 = byte_1A9D7400;
                v26 = std::operator<<<std::char_traits<char>>(v3 + 752, v25);
                v27 = std::map<unsigned long,std::string>::operator[](
                        (std::map<long unsigned int,std::string> *const)(v3 + 672),
                        (const std::map<long unsigned int,std::string>::key_type *)(v3 + 192));
                v28 = std::operator<<<char>(v26, v27);
                v29 = std::operator<<<std::char_traits<char>>(v28, &off_1AA327E0);
                p_data_vec = &row_ptr->data_vec;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
                v31 = std::vector<std::string>::operator[](p_data_vec, *(_QWORD *)(v3 + 192));
                std::operator<<<char>(v29, v31);
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v3 + 192);
              }
              *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
              std::map<unsigned long,std::string>::~map((std::map<long unsigned int,std::string> *const)(v3 + 672));
              v32 = ((v3 + 672) >> 3) + 2147450880;
              *(_DWORD *)v32 = -117901064;
              *(_WORD *)(v32 + 4) = -1800;
            }
            else
            {
              for ( i = 0LL; i < std::vector<std::string>::size(&row_ptr->data_vec); ++i )
              {
                if ( i )
                  v33 = (const char *)&unk_1AA32820;
                else
                  v33 = byte_1A9D7400;
                v34 = std::operator<<<std::char_traits<char>>(v3 + 752, v33);
                v35 = std::vector<std::string>::operator[](&row_ptr->data_vec, i);
                std::operator<<<char>(v34, v35);
              }
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
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayOverallExcelConfig",
              256);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v36, (const char (*)[2])"<");
            v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, __for_begin);
            v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v38,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v40 = (unsigned int)(*(_DWORD *)(v3 + 64) + 1);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v40);
            *(_DWORD *)(v3 + 80) = v40;
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v3 + 80));
            v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v41,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            std::ostringstream::str(v3 + 608, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, (const std::string *)(v3 + 608));
            std::string::~string((void *)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v18 = 0;
          }
          else
          {
            v43 = std::move<data::InstableSprayOverallExcelConfig &>((data::InstableSprayOverallExcelConfig *)(v3 + 224));
            std::vector<data::InstableSprayOverallExcelConfig>::emplace_back<data::InstableSprayOverallExcelConfig>(
              &this->instable_spray_overall_excel_config_vec,
              v43,
              v44);
            v18 = 1;
          }
        }
        else
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
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayOverallExcelConfig",
            231);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::InstableSprayOverallExcelConfig::~InstableSprayOverallExcelConfig((data::InstableSprayOverallExcelConfig *const)(v3 + 224));
        v45 = ((v3 + 224) >> 3) + 2147450880;
        *(_WORD *)v45 = -1800;
        *(_BYTE *)(v45 + 2) = -8;
        if ( v18 != 1 )
        {
          v46 = 0;
          goto LABEL_84;
        }
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
      }
      v46 = 1;
LABEL_84:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      v10 = v46 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
    if ( !v10 )
      goto LABEL_88;
  }
  v2 = 0;
LABEL_88:
  for ( j = (char *)(v3 + 320); j != (char *)(v3 + 288); std::string::~string(j) )
    j -= 32;
  if ( v57 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862732) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450920 - (((_DWORD)v5 + 2147450928) & 0xFFFFFFF8) + 4252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v57);
  }
  return v2;
};

// Line 266: range 0000000012D49268-0000000012D4A252
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayStageExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  data::InstableSprayStageExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InstableSprayStageExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:281 80 4 9 <unknown> 96 32 9 paths:267 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 72 8 d"
                        "ata:284 656 376 24 debug_message_stream:292 1104 32880 12 txt_file:275";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayStageExcelConfig;
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
    "/txt/InstableSprayStageData.txt",
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
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayStageExcelConfig",
        278);
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
        data::InstableSprayStageExcelConfig::InstableSprayStageExcelConfig((data::InstableSprayStageExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::InstableSprayStageExcelConfig::init(
                 (data::InstableSprayStageExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA47F60);
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
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayStageExcelConfig",
              294);
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
            v24 = std::move<data::InstableSprayStageExcelConfig &>((data::InstableSprayStageExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::emplace<unsigned int &,data::InstableSprayStageExcelConfig>(
                    &this->instable_spray_stage_excel_config_map,
                    (unsigned int *)(v3 + 552),
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
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "loadInstableSprayStageExcelConfig",
                299);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AA47FA0);
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
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayStageExcelConfig",
            287);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InstableSprayStageExcelConfig::~InstableSprayStageExcelConfig((data::InstableSprayStageExcelConfig *const)(v3 + 544));
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

// Line 308: range 0000000012D4A254-0000000012D4B277
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayDifficultyExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  data::InstableSprayDifficultyExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InstableSprayDifficultyExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:323 64 4 9 <unknown> 80 32 9 paths:309 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 56 8 d"
                        "ata:326 624 376 24 debug_message_stream:334 1072 32880 12 txt_file:317";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayDifficultyExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/InstableSprayDifficultyData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1072, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1072), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayDifficultyExcelConfig",
        320);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1072));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1072), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_WORD *)(v13 + 4) = 0;
        *(_BYTE *)(v13 + 6) = 0;
        data::InstableSprayDifficultyExcelConfig::InstableSprayDifficultyExcelConfig((data::InstableSprayDifficultyExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::InstableSprayDifficultyExcelConfig::init(
                 (data::InstableSprayDifficultyExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AA8A600);
            if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 536);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 536));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 336, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 336),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayDifficultyExcelConfig",
              336);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v21);
            *(_DWORD *)(v3 + 64) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 64));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 624);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 624);
            __asan_poison_stack_memory(v3 + 624, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::InstableSprayDifficultyExcelConfig &>((data::InstableSprayDifficultyExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::emplace<unsigned int &,data::InstableSprayDifficultyExcelConfig>(
                    &this->instable_spray_difficulty_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "loadInstableSprayDifficultyExcelConfig",
                341);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v28,
                      (const char (*)[22])byte_1AA8A640);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 536));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
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
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayDifficultyExcelConfig",
            329);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InstableSprayDifficultyExcelConfig::~InstableSprayDifficultyExcelConfig((data::InstableSprayDifficultyExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
        *(_BYTE *)(v30 + 6) = -8;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1072));
    __asan_poison_stack_memory(v3 + 1072, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4276) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34208LL, v37);
  }
  return v2;
};

// Line 350: range 0000000012D4B278-0000000012D4C2C8
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayLevelExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  data::InstableSprayLevelExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InstableSprayLevelExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8638h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8618h]
  char v37[34320]; // [rsp+50h] [rbp-8610h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34272LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:365 64 4 9 <unknown> 80 32 9 paths:351 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 120 8 "
                        "data:368 688 376 24 debug_message_stream:376 1136 32880 12 txt_file:359";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayLevelExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862753] = -218959360;
  v5[536862754] = -218959118;
  v5[536862755] = 62194;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/InstableSprayLevelData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1136), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayLevelExcelConfig",
        362);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1AA2F8A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AA2F8E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1136));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1136), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_WORD *)(v13 + 12) = 0;
        *(_BYTE *)(v13 + 14) = 0;
        data::InstableSprayLevelExcelConfig::InstableSprayLevelExcelConfig((data::InstableSprayLevelExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::InstableSprayLevelExcelConfig::init(
                 (data::InstableSprayLevelExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AA481A0);
            if ( *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 536) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 536);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 536));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 336, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 336),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayLevelExcelConfig",
              378);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AA2F9E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v21 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v21);
            *(_DWORD *)(v3 + 64) = v21;
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 64));
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])byte_1AA2FA20);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 688);
            __asan_poison_stack_memory(v3 + 688, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::InstableSprayLevelExcelConfig &>((data::InstableSprayLevelExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::emplace<unsigned int &,data::InstableSprayLevelExcelConfig>(
                    &this->instable_spray_level_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "loadInstableSprayLevelExcelConfig",
                383);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AA481E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 536));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
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
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayLevelExcelConfig",
            371);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InstableSprayLevelExcelConfig::~InstableSprayLevelExcelConfig((data::InstableSprayLevelExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_WORD *)(v30 + 12) = -1800;
        *(_BYTE *)(v30 + 14) = -8;
        if ( v15 != 1 )
        {
          v31 = 0;
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_45:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    __asan_poison_stack_memory(v3 + 1136, 32880LL);
    if ( !v10 )
      goto LABEL_49;
  }
  v2 = 0;
LABEL_49:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4284) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34272LL, v37);
  }
  return v2;
};

// Line 392: range 0000000012D4C2CA-0000000012D4D2BD
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayBuffExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  data::InstableSprayBuffExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InstableSprayBuffExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:407 80 4 9 <unknown> 96 32 9 paths:393 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 80 8 d"
                        "ata:410 656 376 24 debug_message_stream:418 1104 32880 12 txt_file:401";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayBuffExcelConfig;
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
  v5[536862739] = -219021312;
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
    "/txt/InstableSprayBuffData.txt",
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
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayBuffExcelConfig",
        404);
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
        *(_WORD *)(v13 + 8) = 0;
        data::InstableSprayBuffExcelConfig::InstableSprayBuffExcelConfig((data::InstableSprayBuffExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::InstableSprayBuffExcelConfig::init((data::InstableSprayBuffExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AA2F960);
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
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayBuffExcelConfig",
              420);
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
            v24 = std::move<data::InstableSprayBuffExcelConfig &>((data::InstableSprayBuffExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::emplace<unsigned int &,data::InstableSprayBuffExcelConfig>(
                    &this->instable_spray_buff_excel_config_map,
                    (unsigned int *)(v3 + 552),
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
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "loadInstableSprayBuffExcelConfig",
                425);
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
            && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayBuffExcelConfig",
            413);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InstableSprayBuffExcelConfig::~InstableSprayBuffExcelConfig((data::InstableSprayBuffExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_WORD *)(v30 + 8) = -1800;
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

// Line 434: range 0000000012D4D2BE-0000000012D4E297
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayGachaExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
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
  data::InstableSprayGachaExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::InstableSprayGachaExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:449 80 4 9 <unknown> 96 32 9 paths:435 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 48 8 d"
                        "ata:452 624 376 24 debug_message_stream:460 1072 32880 12 txt_file:443";
  *(_QWORD *)(v3 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayGachaExcelConfig;
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
  v5[536862738] = -219021312;
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
    "/txt/InstableSprayGachaData.txt",
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
        "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
        "loadInstableSprayGachaExcelConfig",
        446);
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
        *(_WORD *)(v13 + 4) = 0;
        data::InstableSprayGachaExcelConfig::InstableSprayGachaExcelConfig((data::InstableSprayGachaExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::InstableSprayGachaExcelConfig::init(
                 (data::InstableSprayGachaExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AA47F60);
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
              "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
              "loadInstableSprayGachaExcelConfig",
              462);
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
            v24 = std::move<data::InstableSprayGachaExcelConfig &>((data::InstableSprayGachaExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::emplace<unsigned int &,data::InstableSprayGachaExcelConfig>(
                    &this->instable_spray_gacha_excel_config_map,
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
                "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
                "loadInstableSprayGachaExcelConfig",
                467);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AA47FA0);
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
            "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
            "loadInstableSprayGachaExcelConfig",
            455);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::InstableSprayGachaExcelConfig::~InstableSprayGachaExcelConfig((data::InstableSprayGachaExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_WORD *)(v30 + 4) = -1800;
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

// Line 476: range 0000000012D4E298-0000000012D4EABA
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::loadConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v12[448]; // [rsp+10h] [rbp-1C0h] BYREF

  v2 = (common::milog::MiLogStream *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityInstableSprayExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayOverallExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      479);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v5,
      (const char (*)[43])"loadInstableSprayOverallExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayStageExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      484);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"loadInstableSprayStageExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayDifficultyExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      489);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v8,
      (const char (*)[46])"loadInstableSprayDifficultyExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayLevelExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      494);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v9,
      (const char (*)[41])"loadInstableSprayLevelExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    result = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayBuffExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      499);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v10,
      (const char (*)[40])"loadInstableSprayBuffExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    result = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadInstableSprayGachaExcelConfig(this, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityInstableSprayExcelConfig.gen.cpp",
      "loadConfig",
      504);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v11,
      (const char (*)[41])"loadInstableSprayGachaExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 511: range 0000000012D4EABC-0000000012D4EACE
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::rewriteConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 516: range 0000000012D4EAD0-0000000012D4EAE2
int32_t __cdecl data::ActivityInstableSprayExcelConfigMgrBase::finalConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 521: range 0000000012D4EAE4-0000000012D4EC9F
data::InstableSprayStageExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayStageExcelConfigMap *p_instable_spray_stage_excel_config_map; // rdx
  data::InstableSprayStageExcelConfigMap *v6; // rdx
  bool v7; // al
  data::InstableSprayStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:520 64 8 8 iter:522 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_instable_spray_stage_excel_config_map = &this->instable_spray_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::find(
                                                                                                   p_instable_spray_stage_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 534: range 0000000012D4ECA0-0000000012D4EE5B
const data::InstableSprayStageExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
        const data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayStageExcelConfigMap *p_instable_spray_stage_excel_config_map; // rdx
  data::InstableSprayStageExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::InstableSprayStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:533 64 8 8 iter:535 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_instable_spray_stage_excel_config_map = &this->instable_spray_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::find(p_instable_spray_stage_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 547: range 0000000012D4EE5C-0000000012D4F017
data::InstableSprayDifficultyExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 difficulty_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayDifficultyExcelConfigMap *p_instable_spray_difficulty_excel_config_map; // rdx
  data::InstableSprayDifficultyExcelConfigMap *v6; // rdx
  bool v7; // al
  data::InstableSprayDifficultyExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 difficulty_level:546 64 8 8 iter:548 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = difficulty_level;
  p_instable_spray_difficulty_excel_config_map = &this->instable_spray_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, difficulty_level);
  *(std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::find(p_instable_spray_difficulty_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 560: range 0000000012D4F018-0000000012D4F1D3
const data::InstableSprayDifficultyExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig(
        const data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 difficulty_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayDifficultyExcelConfigMap *p_instable_spray_difficulty_excel_config_map; // rdx
  data::InstableSprayDifficultyExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::InstableSprayDifficultyExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 20 difficulty_level:559 64 8 8 iter:561 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = difficulty_level;
  p_instable_spray_difficulty_excel_config_map = &this->instable_spray_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, difficulty_level);
  *(std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::find(p_instable_spray_difficulty_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayDifficultyExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayDifficultyExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 573: range 0000000012D4F1D4-0000000012D4F395
data::InstableSprayLevelExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayLevelExcelConfigMap *p_instable_spray_level_excel_config_map; // rdx
  data::InstableSprayLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  data::InstableSprayLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:572 64 8 8 iter:574 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_instable_spray_level_excel_config_map = &this->instable_spray_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::find(
                                                                                                   p_instable_spray_level_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 586: range 0000000012D4F396-0000000012D4F557
const data::InstableSprayLevelExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
        const data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayLevelExcelConfigMap *p_instable_spray_level_excel_config_map; // rdx
  data::InstableSprayLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::InstableSprayLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:585 64 8 8 iter:587 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_instable_spray_level_excel_config_map = &this->instable_spray_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::find(p_instable_spray_level_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 599: range 0000000012D4F558-0000000012D4F719
data::InstableSprayBuffExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayBuffExcelConfigMap *p_instable_spray_buff_excel_config_map; // rdx
  data::InstableSprayBuffExcelConfigMap *v6; // rdx
  bool v7; // al
  data::InstableSprayBuffExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:598 64 8 8 iter:600 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_instable_spray_buff_excel_config_map = &this->instable_spray_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::find(
                                                                                                  p_instable_spray_buff_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 612: range 0000000012D4F71A-0000000012D4F8DB
const data::InstableSprayBuffExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig(
        const data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayBuffExcelConfigMap *p_instable_spray_buff_excel_config_map; // rdx
  data::InstableSprayBuffExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::InstableSprayBuffExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:611 64 8 8 iter:613 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayBuffExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_instable_spray_buff_excel_config_map = &this->instable_spray_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::find(p_instable_spray_buff_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayBuffExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayBuffExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 625: range 0000000012D4F8DC-0000000012D4FA9D
data::InstableSprayGachaExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayGachaExcelConfig(
        data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayGachaExcelConfigMap *p_instable_spray_gacha_excel_config_map; // rdx
  data::InstableSprayGachaExcelConfigMap *v6; // rdx
  bool v7; // al
  data::InstableSprayGachaExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:624 64 8 8 iter:626 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayGachaExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_instable_spray_gacha_excel_config_map = &this->instable_spray_gacha_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::find(
                                                                                                   p_instable_spray_gacha_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_gacha_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 638: range 0000000012D4FA9E-0000000012D4FC5F
const data::InstableSprayGachaExcelConfig *__fastcall data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayGachaExcelConfig(
        const data::ActivityInstableSprayExcelConfigMgrBase *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::InstableSprayGachaExcelConfigMap *p_instable_spray_gacha_excel_config_map; // rdx
  data::InstableSprayGachaExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::InstableSprayGachaExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 stage_id:637 64 8 8 iter:639 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayGachaExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_instable_spray_gacha_excel_config_map = &this->instable_spray_gacha_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::find(p_instable_spray_gacha_excel_config_map, (const std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->instable_spray_gacha_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::InstableSprayGachaExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayGachaExcelConfig>,false,false> *const)(v2 + 64))->second;
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

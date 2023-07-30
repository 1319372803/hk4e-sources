// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp

// Line 13: range 000000001388128C-0000000013884153
int32_t __cdecl data::TreasureMapExcelConfig::init(
        data::TreasureMapExcelConfig *const this,
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
  common::milog::MiLogStream *v13; // rax
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  bool v16; // r15
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // rax
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  bool v22; // r15
  common::milog::MiLogStream *v23; // rax
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  bool v26; // r15
  common::milog::MiLogStream *v27; // rax
  bool v28; // r15
  common::milog::MiLogStream *v29; // rax
  bool v30; // r15
  common::milog::MiLogStream *v31; // rax
  bool v32; // r15
  common::milog::MiLogStream *v33; // rax
  bool v34; // r15
  common::milog::MiLogStream *v35; // rax
  bool v36; // r15
  common::milog::MiLogStream *v37; // rax
  bool v38; // r15
  common::milog::MiLogStream *v39; // rax
  bool v40; // r15
  common::milog::MiLogStream *v41; // rax
  bool v42; // r15
  common::milog::MiLogStream *v43; // rax
  int32_t v44; // ebx
  char v46[2832]; // [rsp+10h] [rbp-B10h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2784LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "57 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 3"
                        "2 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32"
                        " 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 3"
                        "2 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 14"
                        "40 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown"
                        "> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unk"
                        "nown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 "
                        "<unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 3"
                        "2 9 <unknown> 2720 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TreasureMapExcelConfig::init;
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
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
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
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    &byte_1AC188A0,
    (const std::allocator<char> *)(v2 + 48));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 352), &this->id) != 0;
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "init",
      16);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AC18940);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      &byte_1AC18980,
      (const std::allocator<char> *)(v2 + 64));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 480),
           &this->activity_id) != 0;
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "init",
        21);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AC189C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        &byte_1AC18A00,
        (const std::allocator<char> *)(v2 + 80));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 608),
              &this->preview_reward_id) != 0;
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
          "init",
          26);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v11, (const char (*)[35])byte_1AC18A40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          &byte_1AC18AA0,
          (const std::allocator<char> *)(v2 + 96));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 736),
                &this->treasure_days) != 0;
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "init",
            31);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 800),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v13, (const char (*)[39])byte_1AC18AE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 864),
            &byte_1AC15DE0,
            (const std::allocator<char> *)(v2 + 112));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 864),
                  &this->quest_id) != 0;
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
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
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "init",
              36);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v15, (const char (*)[35])byte_1AC15E20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              &byte_1AC18B40,
              (const std::allocator<char> *)(v2 + 128));
            v16 = common::tools::TxtFile::Row::assignToNum<float>(
                    row,
                    (const std::string *)(v2 + 992),
                    &this->monster_probability) != 0;
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1056, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1056),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "init",
                41);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v17, (const char (*)[48])byte_1AC18B80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                &byte_1AC18BE0,
                (const std::allocator<char> *)(v2 + 144));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1120),
                      &this->reward_worktop_gadget_id) != 0;
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1184, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1184),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                  "init",
                  46);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1184),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v19, (const char (*)[44])byte_1AC18C20);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  &byte_1AC18C80,
                  (const std::allocator<char> *)(v2 + 160));
                v20 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1248),
                        &this->token_material_id) != 0;
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( v20 )
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1312, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1312),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                    "init",
                    51);
                  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1312),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v21,
                    (const char (*)[29])byte_1AC18CC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    &byte_1AC18D00,
                    (const std::allocator<char> *)(v2 + 176));
                  v22 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1376),
                          &this->unit_token_drop_id) != 0;
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( v22 )
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
                      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                      "init",
                      56);
                    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1440),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v23,
                      (const char (*)[41])byte_1AC18D40);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1504),
                      &byte_1AC18DA0,
                      (const std::allocator<char> *)(v2 + 192));
                    v24 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                            row,
                            (const std::string *)(v2 + 1504),
                            &this->mp_reward_id) != 0;
                    std::string::~string((void *)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( v24 )
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1568, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1568),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                        "init",
                        61);
                      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1568),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        v25,
                        (const char (*)[41])byte_1AC18DE0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1632),
                        &byte_1AC18E40,
                        (const std::allocator<char> *)(v2 + 208));
                      v26 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 1632),
                              &this->host_reward_limit) != 0;
                      std::string::~string((void *)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( v26 )
                      {
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1696, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1696),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                          "init",
                          66);
                        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1696),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                          v27,
                          (const char (*)[51])byte_1AC18E80);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1760),
                          &byte_1AC18EE0,
                          (const std::allocator<char> *)(v2 + 224));
                        v28 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                row,
                                (const std::string *)(v2 + 1760),
                                &this->guest_reward_limit) != 0;
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( v28 )
                        {
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1824, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1824),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                            "init",
                            71);
                          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1824),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                            v29,
                            (const char (*)[51])byte_1AC18F20);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1888),
                            &byte_1AC18F80,
                            (const std::allocator<char> *)(v2 + 240));
                          v30 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 1888),
                                  &this->mp_challenge_index) != 0;
                          std::string::~string((void *)(v2 + 1888));
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( v30 )
                          {
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1952, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1952),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                              "init",
                              76);
                            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1952),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                              v31,
                              (const char (*)[44])byte_1AC18FC0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2016),
                              &byte_1AC19020,
                              (const std::allocator<char> *)(v2 + 256));
                            v32 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 2016),
                                    &this->bonus_challenge_index) != 0;
                            std::string::~string((void *)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( v32 )
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2080, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2080),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                "init",
                                81);
                              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2080),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                v33,
                                (const char (*)[44])byte_1AC19060);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2144),
                                &byte_1AC190C0,
                                (const std::allocator<char> *)(v2 + 272));
                              v34 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2144),
                                      &this->challenge_gadget_suite) != 0;
                              std::string::~string((void *)(v2 + 2144));
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( v34 )
                              {
                                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2208, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2208),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                  "init",
                                  86);
                                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2208),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                  v35,
                                  (const char (*)[38])byte_1AC19100);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2272),
                                  &byte_1AC19160,
                                  (const std::allocator<char> *)(v2 + 288));
                                v36 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 2272),
                                        &this->spot_revise_level_id) != 0;
                                std::string::~string((void *)(v2 + 2272));
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( v36 )
                                {
                                  *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2336, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2336),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                    "init",
                                    91);
                                  v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2336),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                    v37,
                                    (const char (*)[50])byte_1AC191A0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2400),
                                    &byte_1AC19200,
                                    (const std::allocator<char> *)(v2 + 304));
                                  v38 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                          row,
                                          (const std::string *)(v2 + 2400),
                                          &this->detector_material_id) != 0;
                                  std::string::~string((void *)(v2 + 2400));
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( v38 )
                                  {
                                    *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2464, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2464),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                      "init",
                                      96);
                                    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2464),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                      v39,
                                      (const char (*)[38])byte_1AC19240);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2528),
                                      &byte_1AC192A0,
                                      (const std::allocator<char> *)(v2 + 320));
                                    v40 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                            row,
                                            (const std::string *)(v2 + 2528),
                                            &this->guide_child_quest_id) != 0;
                                    std::string::~string((void *)(v2 + 2528));
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( v40 )
                                    {
                                      *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2592, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2592),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                        "init",
                                        101);
                                      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 2592),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                        v41,
                                        (const char (*)[38])byte_1AC192E0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2656),
                                        &byte_1AC19340,
                                        (const std::allocator<char> *)(v2 + 336));
                                      v42 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                              row,
                                              (const std::string *)(v2 + 2656),
                                              &this->front_child_quest_id) != 0;
                                      std::string::~string((void *)(v2 + 2656));
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( v42 )
                                      {
                                        *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2720, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2720),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                          "init",
                                          106);
                                        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 2720),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                          v43,
                                          (const char (*)[38])byte_1AC19380);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        v7 = 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v44 = v7;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8130) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8158) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2784LL, v46);
  }
  return v44;
};

// Line 114: range 0000000013884154-00000000138850D9
int32_t __cdecl data::TreasureMapBonusRegionExcelConfig::init(
        data::TreasureMapBonusRegionExcelConfig *const this,
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
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  char v18[944]; // [rsp+10h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TreasureMapBonusRegionExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
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
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    &byte_1AC188A0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 128), &this->id) != 0;
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "init",
      117);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AC18940);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      &byte_1AC193E0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 256),
           &this->unlock_region_id) != 0;
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "init",
        122);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v9, (const char (*)[47])byte_1AC19420);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        &byte_1AC19480,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 384),
              &this->group_id) != 0;
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
          "init",
          127);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v11, (const char (*)[38])byte_1AC194C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          &byte_1AC19520,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 512),
                &this->reward_id) != 0;
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "init",
            132);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v13, (const char (*)[29])byte_1AC19560);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            &byte_1AC195A0,
            (const std::allocator<char> *)(v2 + 96));
          v14 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                  row,
                  (const std::string *)(v2 + 640),
                  &this->revise_level) != 0;
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v14 )
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "init",
              137);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v15, (const char (*)[33])byte_1AC195E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              &byte_1AC19640,
              (const std::allocator<char> *)(v2 + 112));
            v16 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 768),
                    &this->fragment_num) != 0;
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( v16 )
            {
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "init",
                142);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 832),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v17, (const char (*)[33])byte_1AC19680);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              result = -1;
            }
            else
            {
              result = 0;
            }
          }
        }
      }
    }
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 150: range 00000000138850DA-000000001388996C
int32_t __cdecl data::TreasureMapRegionExcelConfig::init(
        data::TreasureMapRegionExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rax
  _DWORD *v4; // r14
  bool v5; // bl
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // ebx
  bool v8; // bl
  common::milog::MiLogStream *v9; // rax
  bool v10; // bl
  common::milog::MiLogStream *v11; // rax
  bool v12; // bl
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  bool v16; // r13
  unsigned __int64 v17; // rax
  char *i; // rbx
  _DWORD *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool v21; // bl
  common::milog::MiLogStream *v22; // rax
  bool v23; // bl
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  _DWORD *v26; // rax
  bool v27; // r13
  unsigned __int64 v28; // rax
  char *j; // rbx
  _DWORD *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool v32; // bl
  common::milog::MiLogStream *v33; // rax
  bool v34; // bl
  common::milog::MiLogStream *v35; // rax
  unsigned __int64 v36; // rax
  _DWORD *v37; // rax
  bool v38; // r13
  unsigned __int64 v39; // rax
  char *k; // rbx
  _DWORD *v41; // rax
  common::milog::MiLogStream *v42; // rax
  bool v43; // bl
  common::milog::MiLogStream *v44; // rax
  unsigned __int64 v45; // rax
  _DWORD *v46; // rax
  bool v47; // r13
  unsigned __int64 v48; // rax
  char *m; // rbx
  _DWORD *v50; // rax
  common::milog::MiLogStream *v51; // rax
  bool v52; // bl
  common::milog::MiLogStream *v53; // rax
  unsigned __int64 v54; // rax
  _DWORD *v55; // rax
  bool v56; // r13
  unsigned __int64 v57; // rax
  char *n; // rbx
  _DWORD *v59; // rax
  common::milog::MiLogStream *v60; // rax
  bool v61; // bl
  common::milog::MiLogStream *v62; // rax
  bool v63; // bl
  common::milog::MiLogStream *v64; // rax
  bool v65; // bl
  common::milog::MiLogStream *v66; // rax
  unsigned __int64 v67; // rax
  _DWORD *v68; // rax
  bool v69; // r13
  unsigned __int64 v70; // rax
  char *ii; // rbx
  _DWORD *v72; // rax
  common::milog::MiLogStream *v73; // rax
  bool v74; // bl
  common::milog::MiLogStream *v75; // rax
  bool v76; // bl
  common::milog::MiLogStream *v77; // rax
  bool v78; // bl
  common::milog::MiLogStream *v79; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-1060h]
  std::initializer_list<std::string > v82; // [rsp+20h] [rbp-1050h]
  std::initializer_list<std::string > v83; // [rsp+30h] [rbp-1040h]
  std::initializer_list<std::string > v84; // [rsp+40h] [rbp-1030h]
  std::initializer_list<std::string > v85; // [rsp+50h] [rbp-1020h]
  std::initializer_list<std::string > v86; // [rsp+60h] [rbp-1010h]
  char v87[4080]; // [rsp+80h] [rbp-FF0h] BYREF

  v2 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(4032LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "85 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkno"
                        "wn> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 54"
                        "4 1 9 <unknown> 560 1 9 <unknown> 576 24 9 <unknown> 640 24 9 <unknown> 704 24 9 <unknown> 768 2"
                        "4 9 <unknown> 832 24 9 <unknown> 896 24 9 <unknown> 960 32 11 val_str:151 1024 32 9 <unknown> 10"
                        "88 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown"
                        "> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unk"
                        "nown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 "
                        "<unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 3"
                        "2 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 26"
                        "24 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown"
                        "> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unk"
                        "nown> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 64 9 <unknown> 3552 64 9 "
                        "<unknown> 3648 64 9 <unknown> 3744 64 9 <unknown> 3840 64 9 <unknown> 3936 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::TreasureMapRegionExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862735] = -234753535;
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
  v4[536862738] = -234881024;
  v4[536862739] = -218959118;
  v4[536862740] = -234881024;
  v4[536862741] = -218959118;
  v4[536862742] = -234881024;
  v4[536862743] = -218959118;
  v4[536862744] = -234881024;
  v4[536862745] = -218959118;
  v4[536862746] = -234881024;
  v4[536862747] = -218959118;
  v4[536862748] = -234881024;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862830] = -218959118;
  v4[536862833] = -218959118;
  v4[536862836] = -218959118;
  v4[536862839] = -218959118;
  v4[536862842] = -218959118;
  v4[536862845] = -202116109;
  std::string::basic_string(v2 + 960);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1024),
    &byte_1AC188A0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1024), &this->id) != 0;
  std::string::~string((void *)(v2 + 1024));
  *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "init",
      154);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1088),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AC18940);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
    *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1152),
      &byte_1AC19D40,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 1152),
           &this->unlock_day) != 0;
    std::string::~string((void *)(v2 + 1152));
    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1216, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1216),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "init",
        159);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1216),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1AC19D80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
      *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1280),
        &byte_1AC19DE0,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
              row,
              (const std::string *)(v2 + 1280),
              &this->token_num) != 0;
      std::string::~string((void *)(v2 + 1280));
      *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1344, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1344),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
          "init",
          164);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1344),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1AC19E20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
        *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1408),
          &byte_1AC19E80,
          (const std::allocator<char> *)(v2 + 80));
        v12 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1408), (std::string *)(v2 + 960)) != 0;
        std::string::~string((void *)(v2 + 1408));
        *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1472, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1472),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "init",
            169);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1472),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v13, (const char (*)[36])byte_1AC19EC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
          *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          v14 = ((v2 + 576) >> 3) + 2147450880;
          *(_WORD *)v14 = 0;
          *(_BYTE *)(v14 + 2) = 0;
          v15 = (_DWORD *)(((v2 + 3456) >> 3) + 2147450880);
          *v15 = 0;
          v15[1] = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 3456),
            ";",
            (const std::allocator<char> *)(v2 + 96));
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 3488),
            ",",
            (const std::allocator<char> *)(v2 + 112));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3456);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 128));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 576),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 128));
          v16 = common::tools::StringUtils::splitToListBySeps<float>(
                  (const std::string *)(v2 + 960),
                  (const std::vector<std::string> *)(v2 + 576),
                  &this->region_center,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
          v17 = ((v2 + 576) >> 3) + 2147450880;
          *(_WORD *)v17 = -1800;
          *(_BYTE *)(v17 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 128));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          for ( i = (char *)(v2 + 3520); i != (char *)(v2 + 3456); std::string::~string(i) )
            i -= 32;
          v19 = (_DWORD *)(((v2 + 3456) >> 3) + 2147450880);
          *v19 = -117901064;
          v19[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
          {
            *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1536, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1536),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "init",
              174);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1536),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v20, (const char (*)[36])byte_1AC19EC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
            *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1600),
              &byte_1AC19F20,
              (const std::allocator<char> *)(v2 + 144));
            v21 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1600),
                    &this->region_radius) != 0;
            std::string::~string((void *)(v2 + 1600));
            *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v21 )
            {
              *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1664, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1664),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "init",
                179);
              v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1664),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v22, (const char (*)[33])byte_1AC19F60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
              *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 160);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1728),
                aGroup_13,
                (const std::allocator<char> *)(v2 + 160));
              v23 = common::tools::TxtFile::Row::assignToStr(
                      row,
                      (const std::string *)(v2 + 1728),
                      (std::string *)(v2 + 960)) != 0;
              std::string::~string((void *)(v2 + 1728));
              *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 160);
              *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
              {
                *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1792, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1792),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                  "init",
                  184);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1792),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v24, (const char (*)[32])byte_1AC1A000);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                v25 = ((v2 + 640) >> 3) + 2147450880;
                *(_WORD *)v25 = 0;
                *(_BYTE *)(v25 + 2) = 0;
                v26 = (_DWORD *)(((v2 + 3552) >> 3) + 2147450880);
                *v26 = 0;
                v26[1] = 0;
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 176);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 3552),
                  ";",
                  (const std::allocator<char> *)(v2 + 176));
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 192);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 3584),
                  ",",
                  (const std::allocator<char> *)(v2 + 192));
                v82._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3552);
                v82._M_len = 2LL;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
                std::vector<std::string>::vector(
                  (std::vector<std::string> *const)(v2 + 640),
                  v82,
                  (const std::vector<std::string>::allocator_type *)(v2 + 208));
                v27 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                        (const std::string *)(v2 + 960),
                        (const std::vector<std::string> *)(v2 + 640),
                        &this->group_list,
                        1) != 0;
                std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 640));
                v28 = ((v2 + 640) >> 3) + 2147450880;
                *(_WORD *)v28 = -1800;
                *(_BYTE *)(v28 + 2) = -8;
                std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                for ( j = (char *)(v2 + 3616); j != (char *)(v2 + 3552); std::string::~string(j) )
                  j -= 32;
                v30 = (_DWORD *)(((v2 + 3552) >> 3) + 2147450880);
                *v30 = -117901064;
                v30[1] = -117901064;
                std::allocator<char>::~allocator(v2 + 192);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                std::allocator<char>::~allocator(v2 + 176);
                *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                if ( v27 )
                {
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1856, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1856),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                    "init",
                    189);
                  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1856),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v31,
                    (const char (*)[32])byte_1AC1A000);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                  *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1920),
                    &byte_1AC195A0,
                    (const std::allocator<char> *)(v2 + 224));
                  v32 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                          row,
                          (const std::string *)(v2 + 1920),
                          &this->revise_level) != 0;
                  std::string::~string((void *)(v2 + 1920));
                  *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( v32 )
                  {
                    *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1984, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1984),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                      "init",
                      194);
                    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1984),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v33,
                      (const char (*)[33])byte_1AC195E0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                    *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 240);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2048),
                      &byte_1AC1A040,
                      (const std::allocator<char> *)(v2 + 240));
                    v34 = common::tools::TxtFile::Row::assignToStr(
                            row,
                            (const std::string *)(v2 + 2048),
                            (std::string *)(v2 + 960)) != 0;
                    std::string::~string((void *)(v2 + 2048));
                    *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 240);
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                    if ( v34 )
                    {
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2112) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2112, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2112),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                        "init",
                        199);
                      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2112),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v35,
                        (const char (*)[42])byte_1AC1A080);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                      *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      v36 = ((v2 + 704) >> 3) + 2147450880;
                      *(_WORD *)v36 = 0;
                      *(_BYTE *)(v36 + 2) = 0;
                      v37 = (_DWORD *)(((v2 + 3648) >> 3) + 2147450880);
                      *v37 = 0;
                      v37[1] = 0;
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 256);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 3648),
                        ";",
                        (const std::allocator<char> *)(v2 + 256));
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 272);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 3680),
                        ",",
                        (const std::allocator<char> *)(v2 + 272));
                      v83._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3648);
                      v83._M_len = 2LL;
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
                      std::vector<std::string>::vector(
                        (std::vector<std::string> *const)(v2 + 704),
                        v83,
                        (const std::vector<std::string>::allocator_type *)(v2 + 288));
                      v38 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                              (const std::string *)(v2 + 960),
                              (const std::vector<std::string> *)(v2 + 704),
                              &this->spot_num_list,
                              1) != 0;
                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 704));
                      v39 = ((v2 + 704) >> 3) + 2147450880;
                      *(_WORD *)v39 = -1800;
                      *(_BYTE *)(v39 + 2) = -8;
                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
                      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                      for ( k = (char *)(v2 + 3712); k != (char *)(v2 + 3648); std::string::~string(k) )
                        k -= 32;
                      v41 = (_DWORD *)(((v2 + 3648) >> 3) + 2147450880);
                      *v41 = -117901064;
                      v41[1] = -117901064;
                      std::allocator<char>::~allocator(v2 + 272);
                      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                      std::allocator<char>::~allocator(v2 + 256);
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                      if ( v38 )
                      {
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2176) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2176, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2176),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                          "init",
                          204);
                        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2176),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          v42,
                          (const char (*)[42])byte_1AC1A080);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 304);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2240),
                          &byte_1AC1A0E0,
                          (const std::allocator<char> *)(v2 + 304));
                        v43 = common::tools::TxtFile::Row::assignToStr(
                                row,
                                (const std::string *)(v2 + 2240),
                                (std::string *)(v2 + 960)) != 0;
                        std::string::~string((void *)(v2 + 2240));
                        *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 304);
                        *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                        if ( v43 )
                        {
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2304, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2304),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                            "init",
                            209);
                          v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2304),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v44,
                            (const char (*)[45])byte_1AC1A120);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          v45 = ((v2 + 768) >> 3) + 2147450880;
                          *(_WORD *)v45 = 0;
                          *(_BYTE *)(v45 + 2) = 0;
                          v46 = (_DWORD *)(((v2 + 3744) >> 3) + 2147450880);
                          *v46 = 0;
                          v46[1] = 0;
                          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 320);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 3744),
                            ";",
                            (const std::allocator<char> *)(v2 + 320));
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 336);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 3776),
                            ",",
                            (const std::allocator<char> *)(v2 + 336));
                          v84._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3744);
                          v84._M_len = 2LL;
                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 352));
                          std::vector<std::string>::vector(
                            (std::vector<std::string> *const)(v2 + 768),
                            v84,
                            (const std::vector<std::string>::allocator_type *)(v2 + 352));
                          v47 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                  (const std::string *)(v2 + 960),
                                  (const std::vector<std::string> *)(v2 + 768),
                                  &this->token_num_list,
                                  1) != 0;
                          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 768));
                          v48 = ((v2 + 768) >> 3) + 2147450880;
                          *(_WORD *)v48 = -1800;
                          *(_BYTE *)(v48 + 2) = -8;
                          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 352));
                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                          for ( m = (char *)(v2 + 3808); m != (char *)(v2 + 3744); std::string::~string(m) )
                            m -= 32;
                          v50 = (_DWORD *)(((v2 + 3744) >> 3) + 2147450880);
                          *v50 = -117901064;
                          v50[1] = -117901064;
                          std::allocator<char>::~allocator(v2 + 336);
                          *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                          std::allocator<char>::~allocator(v2 + 320);
                          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                          if ( v47 )
                          {
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2368) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2368, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2368),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                              "init",
                              214);
                            v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2368),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              v51,
                              (const char (*)[45])byte_1AC1A120);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 368);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2432),
                              &byte_1AC1A180,
                              (const std::allocator<char> *)(v2 + 368));
                            v52 = common::tools::TxtFile::Row::assignToStr(
                                    row,
                                    (const std::string *)(v2 + 2432),
                                    (std::string *)(v2 + 960)) != 0;
                            std::string::~string((void *)(v2 + 2432));
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 368);
                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                            if ( v52 )
                            {
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2496, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2496),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                "init",
                                219);
                              v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2496),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                v53,
                                (const char (*)[48])byte_1AC1A1C0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                              *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              v54 = ((v2 + 832) >> 3) + 2147450880;
                              *(_WORD *)v54 = 0;
                              *(_BYTE *)(v54 + 2) = 0;
                              v55 = (_DWORD *)(((v2 + 3840) >> 3) + 2147450880);
                              *v55 = 0;
                              v55[1] = 0;
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 384);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3840),
                                ";",
                                (const std::allocator<char> *)(v2 + 384));
                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 400);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 3872),
                                ",",
                                (const std::allocator<char> *)(v2 + 400));
                              v85._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3840);
                              v85._M_len = 2LL;
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 416));
                              std::vector<std::string>::vector(
                                (std::vector<std::string> *const)(v2 + 832),
                                v85,
                                (const std::vector<std::string>::allocator_type *)(v2 + 416));
                              v56 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                      (const std::string *)(v2 + 960),
                                      (const std::vector<std::string> *)(v2 + 832),
                                      &this->misc_drop_prob_list,
                                      1) != 0;
                              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 832));
                              v57 = ((v2 + 832) >> 3) + 2147450880;
                              *(_WORD *)v57 = -1800;
                              *(_BYTE *)(v57 + 2) = -8;
                              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 416));
                              *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                              for ( n = (char *)(v2 + 3904); n != (char *)(v2 + 3840); std::string::~string(n) )
                                n -= 32;
                              v59 = (_DWORD *)(((v2 + 3840) >> 3) + 2147450880);
                              *v59 = -117901064;
                              v59[1] = -117901064;
                              std::allocator<char>::~allocator(v2 + 400);
                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                              std::allocator<char>::~allocator(v2 + 384);
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                              if ( v56 )
                              {
                                *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2560, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2560),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                  "init",
                                  224);
                                v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2560),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                  v60,
                                  (const char (*)[48])byte_1AC1A1C0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 432);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2624),
                                  &byte_1AC1A220,
                                  (const std::allocator<char> *)(v2 + 432));
                                v61 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                        row,
                                        (const std::string *)(v2 + 2624),
                                        &this->misc_drop_id) != 0;
                                std::string::~string((void *)(v2 + 2624));
                                *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 432);
                                *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                if ( v61 )
                                {
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2688, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2688),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                    "init",
                                    229);
                                  v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2688),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                    v62,
                                    (const char (*)[34])byte_1AC1A260);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                  *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 448);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2752),
                                    &byte_1AC1A2C0,
                                    (const std::allocator<char> *)(v2 + 448));
                                  v63 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                          row,
                                          (const std::string *)(v2 + 2752),
                                          &this->mp_group_id) != 0;
                                  std::string::~string((void *)(v2 + 2752));
                                  *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 448);
                                  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                  if ( v63 )
                                  {
                                    *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2816, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2816),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                      "init",
                                      234);
                                    v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2816),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                      v64,
                                      (const char (*)[38])byte_1AC1A300);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                    *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 464);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2880),
                                      &byte_1AC1A360,
                                      (const std::allocator<char> *)(v2 + 464));
                                    v65 = common::tools::TxtFile::Row::assignToStr(
                                            row,
                                            (const std::string *)(v2 + 2880),
                                            (std::string *)(v2 + 960)) != 0;
                                    std::string::~string((void *)(v2 + 2880));
                                    *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 464);
                                    *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                    if ( v65 )
                                    {
                                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2944, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2944),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                        "init",
                                        239);
                                      v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 2944),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                        v66,
                                        (const char (*)[41])byte_1AC1A3A0);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                      *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      v67 = ((v2 + 896) >> 3) + 2147450880;
                                      *(_WORD *)v67 = 0;
                                      *(_BYTE *)(v67 + 2) = 0;
                                      v68 = (_DWORD *)(((v2 + 3936) >> 3) + 2147450880);
                                      *v68 = 0;
                                      v68[1] = 0;
                                      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 480);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3936),
                                        ";",
                                        (const std::allocator<char> *)(v2 + 480));
                                      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 496);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3968),
                                        ",",
                                        (const std::allocator<char> *)(v2 + 496));
                                      v86._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3936);
                                      v86._M_len = 2LL;
                                      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 512));
                                      std::vector<std::string>::vector(
                                        (std::vector<std::string> *const)(v2 + 896),
                                        v86,
                                        (const std::vector<std::string>::allocator_type *)(v2 + 512));
                                      v69 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                              (const std::string *)(v2 + 960),
                                              (const std::vector<std::string> *)(v2 + 896),
                                              &this->backup_group_list,
                                              1) != 0;
                                      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 896));
                                      v70 = ((v2 + 896) >> 3) + 2147450880;
                                      *(_WORD *)v70 = -1800;
                                      *(_BYTE *)(v70 + 2) = -8;
                                      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 512));
                                      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                      for ( ii = (char *)(v2 + 4000); ii != (char *)(v2 + 3936); std::string::~string(ii) )
                                        ii -= 32;
                                      v72 = (_DWORD *)(((v2 + 3936) >> 3) + 2147450880);
                                      *v72 = -117901064;
                                      v72[1] = -117901064;
                                      std::allocator<char>::~allocator(v2 + 496);
                                      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                      std::allocator<char>::~allocator(v2 + 480);
                                      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                      if ( v69 )
                                      {
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3008, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3008),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                          "init",
                                          244);
                                        v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3008),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                          v73,
                                          (const char (*)[41])byte_1AC1A3A0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 528);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3072),
                                          &byte_1AC1A400,
                                          (const std::allocator<char> *)(v2 + 528));
                                        v74 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 3072),
                                                &this->mp_token_threshold) != 0;
                                        std::string::~string((void *)(v2 + 3072));
                                        *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 528);
                                        *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                        if ( v74 )
                                        {
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3136) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3136, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3136),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                            "init",
                                            249);
                                          v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3136),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                            v75,
                                            (const char (*)[45])byte_1AC1A440);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3136));
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                          v7 = -1;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 544);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3200),
                                            &byte_1AC1A4A0,
                                            (const std::allocator<char> *)(v2 + 544));
                                          v76 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                  row,
                                                  (const std::string *)(v2 + 3200),
                                                  &this->mp_type_id) != 0;
                                          std::string::~string((void *)(v2 + 3200));
                                          *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 544);
                                          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                          if ( v76 )
                                          {
                                            *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3264) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3264, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3264),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                              "init",
                                              254);
                                            v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3264),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                              v77,
                                              (const char (*)[39])byte_1AC1A4E0);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3264));
                                            *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 560);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3328),
                                              &byte_1AC1A540,
                                              (const std::allocator<char> *)(v2 + 560));
                                            v78 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                    row,
                                                    (const std::string *)(v2 + 3328),
                                                    &this->fragment_bonus_id) != 0;
                                            std::string::~string((void *)(v2 + 3328));
                                            *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 560);
                                            *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                            if ( v78 )
                                            {
                                              *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3392) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3392, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3392),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                                                "init",
                                                259);
                                              v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3392),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                v79,
                                                (const char (*)[41])byte_1AC1A580);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3392));
                                              *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                              v7 = -1;
                                            }
                                            else
                                            {
                                              v7 = 0;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  std::string::~string((void *)(v2 + 960));
  if ( v87 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862753) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147451004 - (((_DWORD)v4 + 2147451012) & 0xFFFFFFF8) + 380) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 4032LL, v87);
  }
  return v7;
};

// Line 267: range 000000001388996E-000000001388A4F9
int32_t __cdecl data::BonusTreasureSolutionExcelConfig::init(
        data::BonusTreasureSolutionExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  unsigned __int64 v8; // rax
  _DWORD *v9; // rax
  bool v10; // r15
  unsigned __int64 v11; // rax
  char *i; // r14
  _DWORD *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  bool t; // [rsp+8h] [rbp-2E8h]
  bool ta; // [rsp+8h] [rbp-2E8h]
  char v18[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 24 "
                        "9 <unknown> 192 32 11 val_str:268 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 3"
                        "2 9 <unknown> 512 32 9 <unknown> 576 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::BonusTreasureSolutionExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862740] = -202116109;
  std::string::basic_string(v2 + 192);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 256),
    &byte_1AC188A0,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 256), &this->id) != 0;
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "init",
      271);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AC18940);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      &byte_1AC1A6E0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 384), (std::string *)(v2 + 192)) != 0;
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "init",
        276);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v7, (const char (*)[27])byte_1AC1A720);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 128),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 576),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 192),
              (const std::vector<std::string> *)(v2 + 128),
              &this->solution,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 128));
      v11 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v2 + 640); i != (char *)(v2 + 576); std::string::~string(i) )
        i -= 32;
      v13 = (_DWORD *)(((v2 + 576) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
          "init",
          281);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v14, (const char (*)[27])byte_1AC1A720);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  std::string::~string((void *)(v2 + 192));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 290: range 000000001388A4FA-000000001388B5DF
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
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
  char v14; // dl
  __int64 v15; // rsi
  __int64 *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::TreasureMapExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::TreasureMapExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  int v34; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8618h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85F8h]
  char v40[34288]; // [rsp+50h] [rbp-85F0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34240LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:305 64 4 9 <unknown> 80 32 9 paths:291 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 88 8 d"
                        "ata:308 656 376 24 debug_message_stream:316 1104 32880 12 txt_file:299";
  *(_QWORD *)(v3 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/TreasureMapData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1104, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1104), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "loadTreasureMapExcelConfig",
        302);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1104));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v15 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), v15);
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_WORD *)(v13 + 8) = 0;
        *(_BYTE *)(v13 + 10) = 0;
        v14 = *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v14 != 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0 || v14 != 0 && (char)((v3 + 103) & 7) >= v14 )
        {
          v15 = 88LL;
          __asan_report_store_n(v3 + 528, 88LL);
        }
        memset((void *)(v3 + 528), 0, 0x58uLL);
        v16 = &`vtable for'data::TreasureMapExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 528, v15);
        *(_QWORD *)(v3 + 528) = v16;
        if ( row_ptr )
        {
          if ( data::TreasureMapExcelConfig::init((data::TreasureMapExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1AC1A900);
            if ( *(_BYTE *)(((v3 + 540) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 - 64 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 540) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v3 + 540);
            }
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 540));
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
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "loadTreasureMapExcelConfig",
              318);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v24);
            *(_DWORD *)(v3 + 64) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::TreasureMapExcelConfig &>((data::TreasureMapExcelConfig *)(v3 + 528));
            v30 = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::emplace<unsigned int &,data::TreasureMapExcelConfig>(
                    &this->treasure_map_excel_config_map,
                    (unsigned int *)(v3 + 540),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
            {
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "loadTreasureMapExcelConfig",
                323);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v31,
                      (const char (*)[18])byte_1AC1A940);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 540));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
              *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v18 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "loadTreasureMapExcelConfig",
            311);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::TreasureMapExcelConfig::~TreasureMapExcelConfig((data::TreasureMapExcelConfig *const)(v3 + 528));
        v33 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v33 = -117901064;
        *(_DWORD *)(v33 + 4) = -117901064;
        *(_WORD *)(v33 + 8) = -1800;
        *(_BYTE *)(v33 + 10) = -8;
        if ( v18 != 1 )
        {
          v34 = 0;
          goto LABEL_49;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v34 = 1;
LABEL_49:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v34 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
    if ( !v10 )
      goto LABEL_53;
  }
  v2 = 0;
LABEL_53:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v40);
  }
  return v2;
};

// Line 332: range 000000001388B5E0-000000001388C79F
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapBonusRegionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
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
  __int64 v15; // rsi
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  int v18; // r14d
  __int64 v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 v24; // rsi
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  data::TreasureMapBonusRegionExcelConfig *v27; // rax
  unsigned int *v28; // rcx
  data::TreasureMapBonusRegionExcelConfig *v29; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-85D8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-85B8h]
  char v39[34224]; // [rsp+50h] [rbp-85B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34176LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:347 64 4 9 <unknown> 80 32 9 paths:333 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 8 data:350 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <u"
                        "nknown> 592 376 24 debug_message_stream:358 1040 32880 12 txt_file:341";
  *(_QWORD *)(v3 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapBonusRegionExcelConfig;
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
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = -218959118;
  v5[536862752] = 62194;
  v5[536863780] = -202116109;
  v5[536863781] = -202116109;
  v5[536863782] = -202116109;
  v5[536863783] = -202116109;
  v5[536863784] = -202116109;
  v5[536863785] = -202116109;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/TreasureMapBonusRegionData.txt",
    (const std::allocator<char> *)(v3 + 32));
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 80); __for_begin != (std::string *)(v3 + 112); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 144, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 144), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 144);
    std::string::~string((void *)(v3 + 144));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1040, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1040), v7) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "loadTreasureMapBonusRegionExcelConfig",
        344);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1040));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        v13 = *(unsigned int *)(v3 + 48);
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1040), v13);
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        v14 = &`vtable for'data::TreasureMapBonusRegionExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 272, v13);
        *(_QWORD *)(v3 + 272) = v14;
        if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 280, v13);
        *(_DWORD *)(v3 + 280) = 0;
        v15 = (((_BYTE)v3 + 28) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 28) & 7) + 3) >= *(_BYTE *)(((v3 + 284) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 284, v15);
        }
        *(_DWORD *)(v3 + 284) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 288, v15);
        *(_DWORD *)(v3 + 288) = 0;
        v16 = (((_BYTE)v3 + 36) & 7u) + 3;
        if ( *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 292) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 292, v16);
        }
        *(_DWORD *)(v3 + 292) = 0;
        if ( *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 296, v16);
        *(_DWORD *)(v3 + 296) = 0;
        if ( *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 44) & 7) + 3) >= *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 300, (((_BYTE)v3 + 44) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 300) = 0;
        if ( row_ptr )
        {
          if ( data::TreasureMapBonusRegionExcelConfig::init(
                 (data::TreasureMapBonusRegionExcelConfig *const)(v3 + 272),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 592, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 592);
            v19 = std::operator<<<std::char_traits<char>>(v3 + 592, &unk_1ABFF160);
            if ( *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 280) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 280);
            std::ostream::operator<<(v19, *(unsigned int *)(v3 + 280));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 400),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "loadTreasureMapBonusRegionExcelConfig",
              360);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v20, (const char (*)[2])"<");
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, __for_begin);
            v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v22,
                    (const char (*)[11])byte_1ABFF1E0);
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v24 = (unsigned int)(*(_DWORD *)(v3 + 48) + 1);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v24);
            *(_DWORD *)(v3 + 64) = v24;
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v25,
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 464, 32LL);
            }
            std::ostringstream::str(v3 + 464, v3 + 592);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, (const std::string *)(v3 + 464));
            std::string::~string((void *)(v3 + 464));
            *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 592);
            __asan_poison_stack_memory(v3 + 592, 376LL);
            v18 = 0;
          }
          else
          {
            v27 = std::move<data::TreasureMapBonusRegionExcelConfig &>((data::TreasureMapBonusRegionExcelConfig *)(v3 + 272));
            v30 = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::emplace<unsigned int &,data::TreasureMapBonusRegionExcelConfig>(
                    &this->treasure_map_bonus_region_excel_config_map,
                    (unsigned int *)(v3 + 280),
                    v27,
                    v28,
                    v29);
            if ( !v30.second )
            {
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 528, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 528),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "loadTreasureMapBonusRegionExcelConfig",
                365);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 528),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])byte_1ABFF260);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 280));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
              *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v18 = 1;
            }
          }
        }
        else
        {
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
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "loadTreasureMapBonusRegionExcelConfig",
            353);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 336),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
          *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v18 = 0;
        }
        data::TreasureMapBonusRegionExcelConfig::~TreasureMapBonusRegionExcelConfig((data::TreasureMapBonusRegionExcelConfig *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        if ( v18 != 1 )
        {
          v33 = 0;
          goto LABEL_59;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v33 = 1;
LABEL_59:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v33 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1040));
    __asan_poison_stack_memory(v3 + 1040, 32880LL);
    if ( !v10 )
      goto LABEL_63;
  }
  v2 = 0;
LABEL_63:
  for ( i = (char *)(v3 + 112); i != (char *)(v3 + 80); std::string::~string(i) )
    i -= 32;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF90A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4272) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34176LL, v39);
  }
  return v2;
};

// Line 374: range 000000001388C7A0-000000001388D7F0
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapRegionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
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
  data::TreasureMapRegionExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::TreasureMapRegionExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-86B8h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8698h]
  char v37[34448]; // [rsp+50h] [rbp-8690h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34400LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:389 80 4 9 <unknown> 96 32 9 paths:375 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 208 8 "
                        "data:392 816 376 24 debug_message_stream:400 1264 32880 12 txt_file:383";
  *(_QWORD *)(v3 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapRegionExcelConfig;
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
  v5[536862743] = -219021312;
  v5[536862744] = -218959118;
  v5[536862745] = 62194;
  v5[536862757] = -218959360;
  v5[536862758] = -218959118;
  v5[536862759] = 62194;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  v5[536863794] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/TreasureMapRegionData.txt",
    (const std::allocator<char> *)(v3 + 48));
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  for ( __for_begin = (std::string *)(v3 + 96); __for_begin != (std::string *)(v3 + 128); ++__for_begin )
  {
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_real_data_base_dir = &config->real_data_base_dir;
    if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
    {
      p_real_data_base_dir = (std::string *)32;
      __asan_report_store_n(v3 + 160, 32LL);
    }
    std::operator+<char>((std::string *)(v3 + 160), p_real_data_base_dir, __for_begin);
    std::string::operator=(__for_begin, v3 + 160);
    std::string::~string((void *)(v3 + 160));
    *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
    __asan_unpoison_stack_memory(v3 + 1264, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1264), v7) )
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
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "loadTreasureMapRegionExcelConfig",
        386);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1264));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1264), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_DWORD *)(v13 + 20) = 0;
        *(_WORD *)(v13 + 24) = 0;
        data::TreasureMapRegionExcelConfig::TreasureMapRegionExcelConfig((data::TreasureMapRegionExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::TreasureMapRegionExcelConfig::init((data::TreasureMapRegionExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 816, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 816);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 816, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "loadTreasureMapRegionExcelConfig",
              402);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 816);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 816);
            __asan_poison_stack_memory(v3 + 816, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::TreasureMapRegionExcelConfig &>((data::TreasureMapRegionExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::emplace<unsigned int &,data::TreasureMapRegionExcelConfig>(
                    &this->treasure_map_region_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "loadTreasureMapRegionExcelConfig",
                407);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "loadTreasureMapRegionExcelConfig",
            395);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::TreasureMapRegionExcelConfig::~TreasureMapRegionExcelConfig((data::TreasureMapRegionExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_DWORD *)(v30 + 20) = -117901064;
        *(_WORD *)(v30 + 24) = -1800;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1264));
    __asan_poison_stack_memory(v3 + 1264, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4284) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34400LL, v37);
  }
  return v2;
};

// Line 416: range 000000001388D7F2-000000001388E7C5
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::loadBonusTreasureSolutionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
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
  data::BonusTreasureSolutionExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::BonusTreasureSolutionExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:431 80 4 9 <unknown> 96 32 9 paths:417 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 40 8 d"
                        "ata:434 624 376 24 debug_message_stream:442 1072 32880 12 txt_file:425";
  *(_QWORD *)(v3 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::loadBonusTreasureSolutionExcelConfig;
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
    "/txt/BonusTreasureSolutionData.txt",
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
        "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
        "loadBonusTreasureSolutionExcelConfig",
        428);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        data::BonusTreasureSolutionExcelConfig::BonusTreasureSolutionExcelConfig((data::BonusTreasureSolutionExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::BonusTreasureSolutionExcelConfig::init(
                 (data::BonusTreasureSolutionExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
              "loadBonusTreasureSolutionExcelConfig",
              444);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v24 = std::move<data::BonusTreasureSolutionExcelConfig &>((data::BonusTreasureSolutionExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::emplace<unsigned int &,data::BonusTreasureSolutionExcelConfig>(
                    &this->bonus_treasure_solution_excel_config_map,
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
                "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
                "loadBonusTreasureSolutionExcelConfig",
                449);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
            "loadBonusTreasureSolutionExcelConfig",
            437);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::BonusTreasureSolutionExcelConfig::~BonusTreasureSolutionExcelConfig((data::BonusTreasureSolutionExcelConfig *const)(v3 + 544));
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

// Line 458: range 000000001388E7C6-000000001388ED70
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::loadConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivityTreasureMapExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "loadConfig",
      461);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v5,
      (const char (*)[34])"loadTreasureMapExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapBonusRegionExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "loadConfig",
      466);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v7,
      (const char (*)[45])"loadTreasureMapBonusRegionExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivityTreasureMapExcelConfigMgrBase::loadTreasureMapRegionExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "loadConfig",
      471);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"loadTreasureMapRegionExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivityTreasureMapExcelConfigMgrBase::loadBonusTreasureSolutionExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityTreasureMapExcelConfig.gen.cpp",
      "loadConfig",
      476);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v9,
      (const char (*)[44])"loadBonusTreasureSolutionExcelConfig failed");
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

// Line 483: range 000000001388ED72-000000001388ED84
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::rewriteConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 488: range 000000001388ED86-000000001388ED98
int32_t __cdecl data::ActivityTreasureMapExcelConfigMgrBase::finalConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 493: range 000000001388ED9A-000000001388EF55
data::TreasureMapExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapExcelConfigMap *p_treasure_map_excel_config_map; // rdx
  data::TreasureMapExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TreasureMapExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:492 64 8 8 iter:494 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_treasure_map_excel_config_map = &this->treasure_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::find(
                                                                                            p_treasure_map_excel_config_map,
                                                                                            (const std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 506: range 000000001388EF56-000000001388F111
const data::TreasureMapExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig(
        const data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapExcelConfigMap *p_treasure_map_excel_config_map; // rdx
  data::TreasureMapExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TreasureMapExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 activity_id:505 64 8 8 iter:507 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_treasure_map_excel_config_map = &this->treasure_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::find(
                                                                                                  p_treasure_map_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 519: range 000000001388F112-000000001388F2CD
data::TreasureMapBonusRegionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapBonusRegionExcelConfigMap *p_treasure_map_bonus_region_excel_config_map; // rdx
  data::TreasureMapBonusRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TreasureMapBonusRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:518 64 8 8 iter:520 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_treasure_map_bonus_region_excel_config_map = &this->treasure_map_bonus_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::find(p_treasure_map_bonus_region_excel_config_map, (const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_bonus_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 532: range 000000001388F2CE-000000001388F489
const data::TreasureMapBonusRegionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig(
        const data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapBonusRegionExcelConfigMap *p_treasure_map_bonus_region_excel_config_map; // rdx
  data::TreasureMapBonusRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TreasureMapBonusRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:531 64 8 8 iter:533 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapBonusRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_treasure_map_bonus_region_excel_config_map = &this->treasure_map_bonus_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::find(p_treasure_map_bonus_region_excel_config_map, (const std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_bonus_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapBonusRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapBonusRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 545: range 000000001388F48A-000000001388F645
data::TreasureMapRegionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapRegionExcelConfigMap *p_treasure_map_region_excel_config_map; // rdx
  data::TreasureMapRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  data::TreasureMapRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:544 64 8 8 iter:546 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_treasure_map_region_excel_config_map = &this->treasure_map_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::find(
                                                                                                  p_treasure_map_region_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 558: range 000000001388F646-000000001388F801
const data::TreasureMapRegionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig(
        const data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TreasureMapRegionExcelConfigMap *p_treasure_map_region_excel_config_map; // rdx
  data::TreasureMapRegionExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TreasureMapRegionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:557 64 8 8 iter:559 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findTreasureMapRegionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_treasure_map_region_excel_config_map = &this->treasure_map_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::find(p_treasure_map_region_excel_config_map, (const std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->treasure_map_region_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TreasureMapRegionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TreasureMapRegionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 571: range 000000001388F802-000000001388F9C3
data::BonusTreasureSolutionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findBonusTreasureSolutionExcelConfig(
        data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BonusTreasureSolutionExcelConfigMap *p_bonus_treasure_solution_excel_config_map; // rdx
  data::BonusTreasureSolutionExcelConfigMap *v6; // rdx
  bool v7; // al
  data::BonusTreasureSolutionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:570 64 8 8 iter:572 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findBonusTreasureSolutionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_bonus_treasure_solution_excel_config_map = &this->bonus_treasure_solution_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::find(p_bonus_treasure_solution_excel_config_map, (const std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bonus_treasure_solution_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 584: range 000000001388F9C4-000000001388FB85
const data::BonusTreasureSolutionExcelConfig *__fastcall data::ActivityTreasureMapExcelConfigMgrBase::findBonusTreasureSolutionExcelConfig(
        const data::ActivityTreasureMapExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BonusTreasureSolutionExcelConfigMap *p_bonus_treasure_solution_excel_config_map; // rdx
  data::BonusTreasureSolutionExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::BonusTreasureSolutionExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:583 64 8 8 iter:585 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityTreasureMapExcelConfigMgrBase::findBonusTreasureSolutionExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_bonus_treasure_solution_excel_config_map = &this->bonus_treasure_solution_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::find(p_bonus_treasure_solution_excel_config_map, (const std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bonus_treasure_solution_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BonusTreasureSolutionExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BonusTreasureSolutionExcelConfig>,false,false> *const)(v2 + 64))->second;
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

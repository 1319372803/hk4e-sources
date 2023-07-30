// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp

// Line 13: range 00000000138454FC-0000000013846A91
int32_t __cdecl data::ActivitySpiceExcelConfig::init(
        data::ActivitySpiceExcelConfig *const this,
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
  unsigned __int64 v11; // rax
  _DWORD *v12; // rax
  bool v13; // r15
  unsigned __int64 v14; // rax
  char *i; // r14
  _DWORD *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  bool t; // [rsp+0h] [rbp-530h]
  bool ta; // [rsp+0h] [rbp-530h]
  bool tb; // [rsp+0h] [rbp-530h]
  bool tc; // [rsp+0h] [rbp-530h]
  bool td; // [rsp+0h] [rbp-530h]
  char v26[1296]; // [rsp+20h] [rbp-510h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1248LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 24 9 <unknown> 256 32 10 va"
                        "l_str:14 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <u"
                        "nknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <un"
                        "known> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234881024;
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
  v4[536862758] = -202116109;
  std::string::basic_string(v2 + 256);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    "ID",
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 320), &this->id) != 0;
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "init",
      17);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v5, (const char (*)[23])byte_1AC01DC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      &byte_1ABFEAE0,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 448),
           &this->activity_id) != 0;
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "init",
        22);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1ABFEB20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        "ScheduleID",
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 576),
             &this->schedule_id) != 0;
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
          "init",
          27);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 640),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v8, (const char (*)[31])byte_1AC05DE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          &byte_1AC0EE60,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToNum<unsigned int>(
               row,
               (const std::string *)(v2 + 704),
               &this->spice_id) != 0;
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "init",
            32);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 768),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1AC0EEA0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            &byte_1AC0EF00,
            (const std::allocator<char> *)(v2 + 112));
          td = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 832), (std::string *)(v2 + 256)) != 0;
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "init",
              37);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v10, (const char (*)[40])byte_1AC0EF40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            v11 = ((v2 + 192) >> 3) + 2147450880;
            *(_WORD *)v11 = 0;
            *(_BYTE *)(v11 + 2) = 0;
            v12 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
            *v12 = 0;
            v12[1] = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1152),
              ";",
              (const std::allocator<char> *)(v2 + 128));
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1184),
              ",",
              (const std::allocator<char> *)(v2 + 144));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 192),
              (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1152),
              (const std::vector<std::string>::allocator_type *)(v2 + 160));
            v13 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 256),
                    (const std::vector<std::string> *)(v2 + 192),
                    &this->watcher_id_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
            v14 = ((v2 + 192) >> 3) + 2147450880;
            *(_WORD *)v14 = -1800;
            *(_BYTE *)(v14 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            for ( i = (char *)(v2 + 1216); i != (char *)(v2 + 1152); std::string::~string(i) )
              i -= 32;
            v16 = (_DWORD *)(((v2 + 1152) >> 3) + 2147450880);
            *v16 = -117901064;
            v16[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v13 )
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "init",
                42);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 960),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v17, (const char (*)[40])byte_1AC0EF40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                &byte_1AC0EFA0,
                (const std::allocator<char> *)(v2 + 176));
              v18 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1024),
                      &this->fetter_value) != 0;
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v18 )
              {
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1088, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1088),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                  "init",
                  47);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1088),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v19, (const char (*)[48])byte_1AC0EFE0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 256));
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862731) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450916 - (((_DWORD)v4 + 2147450924) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1248LL, v26);
  }
  return v6;
};

// Line 55: range 0000000013846A92-00000000138489B6
int32_t __cdecl data::ActivitySpiceStageDataExcelConfig::init(
        data::ActivitySpiceStageDataExcelConfig *const this,
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
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  bool v30; // r15
  unsigned __int64 v31; // rax
  char *k; // r14
  _DWORD *v33; // rax
  common::milog::MiLogStream *v34; // rax
  bool t; // [rsp+0h] [rbp-770h]
  bool ta; // [rsp+0h] [rbp-770h]
  bool tb; // [rsp+0h] [rbp-770h]
  bool tc; // [rsp+0h] [rbp-770h]
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
                        "352 24 9 <unknown> 416 24 9 <unknown> 480 32 10 val_str:56 544 32 9 <unknown> 608 32 9 <unknown>"
                        " 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> "
                        "992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknow"
                        "n> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 64 9 <unknown> 1600 64 9 <un"
                        "known> 1696 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceStageDataExcelConfig::init;
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
    &byte_1AC04000,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 544), &this->id) != 0;
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "init",
      59);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 608),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AC04040);
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
      &byte_1AC0F300,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 672),
           &this->open_day_index) != 0;
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "init",
        64);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 736),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v7, (const char (*)[33])byte_1AC0F340);
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
        &byte_1AC0F3A0,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToNum<unsigned int>(
             row,
             (const std::string *)(v2 + 800),
             &this->fetter_inc_cnt_limit) != 0;
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
          "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
          "init",
          69);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 864),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v8, (const char (*)[57])byte_1AC0F400);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
        *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 928),
          &byte_1AC0F460,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 928), (std::string *)(v2 + 480)) != 0;
        std::string::~string((void *)(v2 + 928));
        *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
        {
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 992, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 992),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "init",
            74);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 992),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v9, (const char (*)[32])byte_1AC0F4A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
          *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v10 = ((v2 + 288) >> 3) + 2147450880;
          *(_WORD *)v10 = 0;
          *(_BYTE *)(v10 + 2) = 0;
          v11 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
          *v11 = 0;
          v11[1] = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1504),
            ";",
            (const std::allocator<char> *)(v2 + 112));
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1536),
            ",",
            (const std::allocator<char> *)(v2 + 128));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 144));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 288),
            (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1504),
            (const std::vector<std::string>::allocator_type *)(v2 + 144));
          v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 480),
                  (const std::vector<std::string> *)(v2 + 288),
                  &this->material_id_list,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 288));
          v13 = ((v2 + 288) >> 3) + 2147450880;
          *(_WORD *)v13 = -1800;
          *(_BYTE *)(v13 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 144));
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          for ( i = (char *)(v2 + 1568); i != (char *)(v2 + 1504); std::string::~string(i) )
            i -= 32;
          v15 = (_DWORD *)(((v2 + 1504) >> 3) + 2147450880);
          *v15 = -117901064;
          v15[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v12 )
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "init",
              79);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v16, (const char (*)[32])byte_1AC0F4A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1120),
              &byte_1AC0F4E0,
              (const std::allocator<char> *)(v2 + 160));
            v17 = common::tools::TxtFile::Row::assignToStr(
                    row,
                    (const std::string *)(v2 + 1120),
                    (std::string *)(v2 + 480)) != 0;
            std::string::~string((void *)(v2 + 1120));
            *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v17 )
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
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "init",
                84);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1184),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v18, (const char (*)[36])byte_1AC0F520);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              v19 = ((v2 + 352) >> 3) + 2147450880;
              *(_WORD *)v19 = 0;
              *(_BYTE *)(v19 + 2) = 0;
              v20 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
              *v20 = 0;
              v20[1] = 0;
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 176);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1600),
                ";",
                (const std::allocator<char> *)(v2 + 176));
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1632),
                ",",
                (const std::allocator<char> *)(v2 + 192));
              __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1600);
              __l._M_len = 2LL;
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 208));
              std::vector<std::string>::vector(
                (std::vector<std::string> *const)(v2 + 352),
                __l,
                (const std::vector<std::string>::allocator_type *)(v2 + 208));
              v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                      (const std::string *)(v2 + 480),
                      (const std::vector<std::string> *)(v2 + 352),
                      &this->material_num_list,
                      1) != 0;
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 352));
              v22 = ((v2 + 352) >> 3) + 2147450880;
              *(_WORD *)v22 = -1800;
              *(_BYTE *)(v22 + 2) = -8;
              std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 208));
              *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
              for ( j = (char *)(v2 + 1664); j != (char *)(v2 + 1600); std::string::~string(j) )
                j -= 32;
              v24 = (_DWORD *)(((v2 + 1600) >> 3) + 2147450880);
              *v24 = -117901064;
              v24[1] = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              std::allocator<char>::~allocator(v2 + 176);
              *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
              if ( v21 )
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
                  "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                  "init",
                  89);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1248),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v25, (const char (*)[36])byte_1AC0F520);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 224);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1312),
                  &byte_1AC0F580,
                  (const std::allocator<char> *)(v2 + 224));
                v26 = common::tools::TxtFile::Row::assignToStr(
                        row,
                        (const std::string *)(v2 + 1312),
                        (std::string *)(v2 + 480)) != 0;
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 224);
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( v26 )
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
                    "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                    "init",
                    94);
                  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1376),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v27,
                    (const char (*)[39])byte_1AC0F5C0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  v28 = ((v2 + 416) >> 3) + 2147450880;
                  *(_WORD *)v28 = 0;
                  *(_BYTE *)(v28 + 2) = 0;
                  v29 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
                  *v29 = 0;
                  v29[1] = 0;
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 240);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1696),
                    ";",
                    (const std::allocator<char> *)(v2 + 240));
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 256);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1728),
                    ",",
                    (const std::allocator<char> *)(v2 + 256));
                  v41._M_array = (std::initializer_list<std::string >::iterator)(v2 + 1696);
                  v41._M_len = 2LL;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 272));
                  std::vector<std::string>::vector(
                    (std::vector<std::string> *const)(v2 + 416),
                    v41,
                    (const std::vector<std::string>::allocator_type *)(v2 + 272));
                  v30 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                          (const std::string *)(v2 + 480),
                          (const std::vector<std::string> *)(v2 + 416),
                          &this->material_order_list,
                          1) != 0;
                  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 416));
                  v31 = ((v2 + 416) >> 3) + 2147450880;
                  *(_WORD *)v31 = -1800;
                  *(_BYTE *)(v31 + 2) = -8;
                  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 272));
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  for ( k = (char *)(v2 + 1760); k != (char *)(v2 + 1696); std::string::~string(k) )
                    k -= 32;
                  v33 = (_DWORD *)(((v2 + 1696) >> 3) + 2147450880);
                  *v33 = -117901064;
                  v33[1] = -117901064;
                  std::allocator<char>::~allocator(v2 + 256);
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  std::allocator<char>::~allocator(v2 + 240);
                  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                  if ( v30 )
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
                      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                      "init",
                      99);
                    v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1440),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v34,
                      (const char (*)[39])byte_1AC0F5C0);
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

// Line 107: range 00000000138489B8-0000000013848F40
int32_t __cdecl data::ActivitySpiceFoodExcelConfig::init(
        data::ActivitySpiceFoodExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceFoodExcelConfig::init;
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
    &byte_1AC0F620,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 64),
         &this->normal_food_id) != 0;
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "init",
      110);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1AC0F660);
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
      &byte_1AC0F6C0,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->special_food_id) != 0;
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "init",
        115);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1AC0F700);
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

// Line 123: range 0000000013848F42-00000000138494CA
int32_t __cdecl data::ActivitySpiceGivingExcelConfig::init(
        data::ActivitySpiceGivingExcelConfig *const this,
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
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceGivingExcelConfig::init;
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
    "GivingDataID",
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
         row,
         (const std::string *)(v2 + 64),
         &this->giving_data_id) != 0;
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "init",
      126);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v6, (const char (*)[33])byte_1AC0F7A0);
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
      "CharacterID",
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 192),
           &this->character_id) != 0;
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "init",
        131);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v9, (const char (*)[32])byte_1AC0F840);
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

// Line 140: range 00000000138494CC-000000001384A4EF
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
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
  data::ActivitySpiceExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivitySpiceExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:155 64 4 9 <unknown> 80 32 9 paths:141 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 56 8 d"
                        "ata:158 624 376 24 debug_message_stream:166 1072 32880 12 txt_file:149";
  *(_QWORD *)(v3 + 16) = data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceExcelConfig;
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
    "/txt/SpiceConfig.txt",
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "loadActivitySpiceExcelConfig",
        152);
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
        data::ActivitySpiceExcelConfig::ActivitySpiceExcelConfig((data::ActivitySpiceExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivitySpiceExcelConfig::init((data::ActivitySpiceExcelConfig *const)(v3 + 528), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "loadActivitySpiceExcelConfig",
              168);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v24 = std::move<data::ActivitySpiceExcelConfig &>((data::ActivitySpiceExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::emplace<unsigned int &,data::ActivitySpiceExcelConfig>(
                    &this->activity_spice_excel_config_map,
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
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "loadActivitySpiceExcelConfig",
                173);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "loadActivitySpiceExcelConfig",
            161);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivitySpiceExcelConfig::~ActivitySpiceExcelConfig((data::ActivitySpiceExcelConfig *const)(v3 + 528));
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

// Line 182: range 000000001384A4F0-000000001384B51F
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
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
  _DWORD *v13; // rax
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
  data::ActivitySpiceStageDataExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivitySpiceStageDataExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:197 64 4 9 <unknown> 80 32 9 paths:183 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 96 8 d"
                        "ata:200 656 376 24 debug_message_stream:208 1104 32880 12 txt_file:191";
  *(_QWORD *)(v3 + 16) = data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceStageDataExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/SpiceStageData.txt",
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "loadActivitySpiceStageDataExcelConfig",
        194);
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
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1104), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        data::ActivitySpiceStageDataExcelConfig::ActivitySpiceStageDataExcelConfig((data::ActivitySpiceStageDataExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivitySpiceStageDataExcelConfig::init(
                 (data::ActivitySpiceStageDataExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 656, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 656);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 656, &unk_1ABFF160);
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "loadActivitySpiceStageDataExcelConfig",
              210);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 656);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 656);
            __asan_poison_stack_memory(v3 + 656, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivitySpiceStageDataExcelConfig &>((data::ActivitySpiceStageDataExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::emplace<unsigned int &,data::ActivitySpiceStageDataExcelConfig>(
                    &this->activity_spice_stage_data_excel_config_map,
                    (unsigned int *)(v3 + 536),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "loadActivitySpiceStageDataExcelConfig",
                215);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1ABFF260);
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
            && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "loadActivitySpiceStageDataExcelConfig",
            203);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivitySpiceStageDataExcelConfig::~ActivitySpiceStageDataExcelConfig((data::ActivitySpiceStageDataExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        v30[2] = -117901064;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1104));
    __asan_poison_stack_memory(v3 + 1104, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34240LL, v37);
  }
  return v2;
};

// Line 224: range 000000001384B520-000000001384C5C0
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceFoodExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
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
  data::ActivitySpiceFoodExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::ActivitySpiceFoodExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:239 64 4 9 <unknown> 80 16 8 data:242 112 32 9 paths:225 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <u"
                        "nknown> 560 376 24 debug_message_stream:250 1008 32880 12 txt_file:233";
  *(_QWORD *)(v3 + 16) = data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceFoodExcelConfig;
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
    "/txt/SpiceFoodData.txt",
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "loadActivitySpiceFoodExcelConfig",
        236);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v14 = &`vtable for'data::ActivitySpiceFoodExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, (((_BYTE)v3 + 92) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( row_ptr )
        {
          if ( data::ActivitySpiceFoodExcelConfig::init((data::ActivitySpiceFoodExcelConfig *const)(v3 + 80), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AC0FDA0);
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "loadActivitySpiceFoodExcelConfig",
              252);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v25 = std::move<data::ActivitySpiceFoodExcelConfig &>((data::ActivitySpiceFoodExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::emplace<unsigned int &,data::ActivitySpiceFoodExcelConfig>(
                    &this->activity_spice_food_excel_config_map,
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
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "loadActivitySpiceFoodExcelConfig",
                257);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v29,
                      (const char (*)[19])byte_1AC0FDE0);
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
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "loadActivitySpiceFoodExcelConfig",
            245);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ActivitySpiceFoodExcelConfig::~ActivitySpiceFoodExcelConfig((data::ActivitySpiceFoodExcelConfig *const)(v3 + 80));
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v31 = 0;
          goto LABEL_51;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_51:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    __asan_poison_stack_memory(v3 + 1008, 32880LL);
    if ( !v10 )
      goto LABEL_55;
  }
  v2 = 0;
LABEL_55:
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

// Line 266: range 000000001384C5C2-000000001384D665
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceGivingExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
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
  data::ActivitySpiceGivingExcelConfig *v25; // rax
  unsigned int *v26; // rcx
  data::ActivitySpiceGivingExcelConfig *v27; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>,bool> v28; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:281 64 4 9 <unknown> 80 16 8 data:284 112 32 9 paths:267 176 32 9 <"
                        "unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <u"
                        "nknown> 560 376 24 debug_message_stream:292 1008 32880 12 txt_file:275";
  *(_QWORD *)(v3 + 16) = data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceGivingExcelConfig;
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
    "/txt/SpiceGivingData.txt",
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
        "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
        "loadActivitySpiceGivingExcelConfig",
        278);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[8])byte_1ABFF0A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1ABFF0E0);
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
        v14 = &`vtable for'data::ActivitySpiceGivingExcelConfig + 2;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 80, v13);
        *(_QWORD *)(v3 + 80) = v14;
        if ( *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 88) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 88, v13);
        *(_DWORD *)(v3 + 88) = 0;
        if ( *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) != 0
          && (char)(((v3 + 92) & 7) + 3) >= *(_BYTE *)(((v3 + 92) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v3 + 92, (((_BYTE)v3 + 92) & 7u) + 3);
        }
        *(_DWORD *)(v3 + 92) = 0;
        if ( row_ptr )
        {
          if ( data::ActivitySpiceGivingExcelConfig::init(
                 (data::ActivitySpiceGivingExcelConfig *const)(v3 + 80),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 560, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 560);
            v17 = std::operator<<<std::char_traits<char>>(v3 + 560, &unk_1AC0FFE0);
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
              "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
              "loadActivitySpiceGivingExcelConfig",
              294);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v19 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v18, (const char (*)[2])"<");
            v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, __for_begin);
            v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v20,
                    (const char (*)[11])byte_1ABFF1E0);
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
                    (const char (*)[13])byte_1ABFF220);
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
            v25 = std::move<data::ActivitySpiceGivingExcelConfig &>((data::ActivitySpiceGivingExcelConfig *)(v3 + 80));
            v28 = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::emplace<unsigned int &,data::ActivitySpiceGivingExcelConfig>(
                    &this->activity_spice_giving_excel_config_map,
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
                "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
                "loadActivitySpiceGivingExcelConfig",
                299);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v29,
                      (const char (*)[19])byte_1AC10020);
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
            "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
            "loadActivitySpiceGivingExcelConfig",
            287);
          v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 304),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
          *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
        data::ActivitySpiceGivingExcelConfig::~ActivitySpiceGivingExcelConfig((data::ActivitySpiceGivingExcelConfig *const)(v3 + 80));
        *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
        if ( v16 != 1 )
        {
          v31 = 0;
          goto LABEL_51;
        }
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
      }
      v31 = 1;
LABEL_51:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v10 = v31 == 1;
    }
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1008));
    __asan_poison_stack_memory(v3 + 1008, 32880LL);
    if ( !v10 )
      goto LABEL_55;
  }
  v2 = 0;
LABEL_55:
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

// Line 308: range 000000001384D666-000000001384DC10
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::loadConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)data::ActivitySpiceExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "loadConfig",
      311);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v5,
      (const char (*)[36])"loadActivitySpiceExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceStageDataExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "loadConfig",
      316);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v7,
      (const char (*)[45])"loadActivitySpiceStageDataExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceFoodExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "loadConfig",
      321);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v8,
      (const char (*)[40])"loadActivitySpiceFoodExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else if ( data::ActivitySpiceExcelConfigMgrBase::loadActivitySpiceGivingExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivitySpiceExcelConfig.gen.cpp",
      "loadConfig",
      326);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v9,
      (const char (*)[42])"loadActivitySpiceGivingExcelConfig failed");
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

// Line 333: range 000000001384DC12-000000001384DC24
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::rewriteConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 338: range 000000001384DC26-000000001384DC38
int32_t __cdecl data::ActivitySpiceExcelConfigMgrBase::finalConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 343: range 000000001384DC3A-000000001384DDF5
data::ActivitySpiceExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceExcelConfigMap *p_activity_spice_excel_config_map; // rdx
  data::ActivitySpiceExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivitySpiceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:342 64 8 8 iter:344 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_spice_excel_config_map = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::find(
                                                                                              p_activity_spice_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 356: range 000000001384DDF6-000000001384DFB1
const data::ActivitySpiceExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceExcelConfig(
        const data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceExcelConfigMap *p_activity_spice_excel_config_map; // rdx
  data::ActivitySpiceExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivitySpiceExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:355 64 8 8 iter:357 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_spice_excel_config_map = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::find(
                                                                                                    p_activity_spice_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 369: range 000000001384DFB2-000000001384E16D
data::ActivitySpiceStageDataExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceStageDataExcelConfigMap *p_activity_spice_stage_data_excel_config_map; // rdx
  data::ActivitySpiceStageDataExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivitySpiceStageDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:368 64 8 8 iter:370 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_spice_stage_data_excel_config_map = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::find(p_activity_spice_stage_data_excel_config_map, (const std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 382: range 000000001384E16E-000000001384E329
const data::ActivitySpiceStageDataExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig(
        const data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceStageDataExcelConfigMap *p_activity_spice_stage_data_excel_config_map; // rdx
  data::ActivitySpiceStageDataExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivitySpiceStageDataExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:381 64 8 8 iter:383 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceStageDataExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_spice_stage_data_excel_config_map = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::find(p_activity_spice_stage_data_excel_config_map, (const std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_stage_data_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceStageDataExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceStageDataExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 395: range 000000001384E32A-000000001384E4E5
data::ActivitySpiceFoodExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 normal_food_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceFoodExcelConfigMap *p_activity_spice_food_excel_config_map; // rdx
  data::ActivitySpiceFoodExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivitySpiceFoodExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 normal_food_id:394 64 8 8 iter:396 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = normal_food_id;
  p_activity_spice_food_excel_config_map = &this->activity_spice_food_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, normal_food_id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::find(
                                                                                                  p_activity_spice_food_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_food_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 408: range 000000001384E4E6-000000001384E6A1
const data::ActivitySpiceFoodExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig(
        const data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 normal_food_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceFoodExcelConfigMap *p_activity_spice_food_excel_config_map; // rdx
  data::ActivitySpiceFoodExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivitySpiceFoodExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 normal_food_id:407 64 8 8 iter:409 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceFoodExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = normal_food_id;
  p_activity_spice_food_excel_config_map = &this->activity_spice_food_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, normal_food_id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::find(p_activity_spice_food_excel_config_map, (const std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_food_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceFoodExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceFoodExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 421: range 000000001384E6A2-000000001384E863
data::ActivitySpiceGivingExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig(
        data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 giving_data_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceGivingExcelConfigMap *p_activity_spice_giving_excel_config_map; // rdx
  data::ActivitySpiceGivingExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivitySpiceGivingExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 giving_data_id:420 64 8 8 iter:422 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = giving_data_id;
  p_activity_spice_giving_excel_config_map = &this->activity_spice_giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, giving_data_id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::find(
                                                                                                    p_activity_spice_giving_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 434: range 000000001384E864-000000001384EA25
const data::ActivitySpiceGivingExcelConfig *__fastcall data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig(
        const data::ActivitySpiceExcelConfigMgrBase *const this,
        __int64 giving_data_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivitySpiceGivingExcelConfigMap *p_activity_spice_giving_excel_config_map; // rdx
  data::ActivitySpiceGivingExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivitySpiceGivingExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 giving_data_id:433 64 8 8 iter:435 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivitySpiceExcelConfigMgrBase::findActivitySpiceGivingExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = giving_data_id;
  p_activity_spice_giving_excel_config_map = &this->activity_spice_giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, giving_data_id);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::find(p_activity_spice_giving_excel_config_map, (const std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_spice_giving_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivitySpiceGivingExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivitySpiceGivingExcelConfig>,false,false> *const)(v2 + 64))->second;
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

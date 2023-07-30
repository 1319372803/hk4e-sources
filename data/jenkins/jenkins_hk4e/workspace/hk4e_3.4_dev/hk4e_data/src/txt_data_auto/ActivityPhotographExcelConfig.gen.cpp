// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp

// Line 13: range 0000000012DB8CFA-0000000012DBD32E
int32_t __cdecl data::ActivityPhotographExcelConfig::init(
        data::ActivityPhotographExcelConfig *const this,
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
  unsigned __int64 v12; // rax
  _DWORD *v13; // rax
  bool v14; // r13
  unsigned __int64 v15; // rax
  char *i; // rbx
  _DWORD *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // bl
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  bool v23; // r13
  unsigned __int64 v24; // rax
  char *j; // rbx
  _DWORD *v26; // rax
  common::milog::MiLogStream *v27; // rax
  bool v28; // bl
  common::milog::MiLogStream *v29; // rax
  bool v30; // bl
  common::milog::MiLogStream *v31; // rax
  bool v32; // bl
  common::milog::MiLogStream *v33; // rax
  bool v34; // bl
  common::milog::MiLogStream *v35; // rax
  bool v36; // bl
  common::milog::MiLogStream *v37; // rax
  bool v38; // bl
  common::milog::MiLogStream *v39; // rax
  bool v40; // bl
  common::milog::MiLogStream *v41; // rax
  bool v42; // bl
  common::milog::MiLogStream *v43; // rax
  bool v44; // bl
  common::milog::MiLogStream *v45; // rax
  bool v46; // bl
  common::milog::MiLogStream *v47; // rax
  bool v48; // bl
  common::milog::MiLogStream *v49; // rax
  unsigned __int64 v50; // rax
  _DWORD *v51; // rax
  bool v52; // r13
  unsigned __int64 v53; // rax
  char *k; // rbx
  _DWORD *v55; // rax
  common::milog::MiLogStream *v56; // rax
  bool v57; // bl
  common::milog::MiLogStream *v58; // rax
  unsigned __int64 v59; // rax
  _DWORD *v60; // rax
  bool v61; // r13
  unsigned __int64 v62; // rax
  char *m; // rbx
  _DWORD *v64; // rax
  common::milog::MiLogStream *v65; // rax
  bool v66; // bl
  common::milog::MiLogStream *v67; // rax
  unsigned __int64 v68; // rax
  _DWORD *v69; // rax
  bool v70; // r13
  unsigned __int64 v71; // rax
  char *n; // rbx
  _DWORD *v73; // rax
  common::milog::MiLogStream *v74; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-FD0h]
  std::initializer_list<std::string > v77; // [rsp+20h] [rbp-FC0h]
  std::initializer_list<std::string > v78; // [rsp+30h] [rbp-FB0h]
  std::initializer_list<std::string > v79; // [rsp+40h] [rbp-FA0h]
  std::initializer_list<std::string > v80; // [rsp+50h] [rbp-F90h]
  char v81[3952]; // [rsp+70h] [rbp-F70h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3904LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "82 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkno"
                        "wn> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 54"
                        "4 24 9 <unknown> 608 24 9 <unknown> 672 24 9 <unknown> 736 24 9 <unknown> 800 24 9 <unknown> 864"
                        " 32 10 val_str:14 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> "
                        "1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unkno"
                        "wn> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <u"
                        "nknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 "
                        "9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400"
                        " 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> "
                        "2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unkno"
                        "wn> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <u"
                        "nknown> 3360 32 9 <unknown> 3424 64 9 <unknown> 3520 64 9 <unknown> 3616 64 9 <unknown> 3712 64 "
                        "9 <unknown> 3808 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfig::init;
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
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862745] = -234881024;
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
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862829] = -218959118;
  v4[536862832] = -218959118;
  v4[536862835] = -218959118;
  v4[536862838] = -218959118;
  v4[536862841] = -202116109;
  std::string::basic_string(v2 + 864);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 928),
    &byte_1AA99F40,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 928), &this->id) != 0;
  std::string::~string((void *)(v2 + 928));
  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
      "init",
      17);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 992),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v6, (const char (*)[35])byte_1AA99FE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 1056),
      &byte_1AA36B20,
      (const std::allocator<char> *)(v2 + 48));
    v8 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 1056),
           &this->activity_id) != 0;
    std::string::~string((void *)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
        "init",
        22);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 1120),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1AA36B60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1184),
        &byte_1AA9A040,
        (const std::allocator<char> *)(v2 + 64));
      v10 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1184), (std::string *)(v2 + 864)) != 0;
      std::string::~string((void *)(v2 + 1184));
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
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
          "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
          "init",
          27);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v11, (const char (*)[37])byte_1AA9A080);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v12 = ((v2 + 544) >> 3) + 2147450880;
        *(_WORD *)v12 = 0;
        *(_BYTE *)(v12 + 2) = 0;
        v13 = (_DWORD *)(((v2 + 3424) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3424),
          ";",
          (const std::allocator<char> *)(v2 + 80));
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 3456),
          ",",
          (const std::allocator<char> *)(v2 + 96));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3424);
        __l._M_len = 2LL;
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v2 + 544),
          __l,
          (const std::vector<std::string>::allocator_type *)(v2 + 112));
        v14 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                (const std::string *)(v2 + 864),
                (const std::vector<std::string> *)(v2 + 544),
                &this->photo_pos_id_list,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
        v15 = ((v2 + 544) >> 3) + 2147450880;
        *(_WORD *)v15 = -1800;
        *(_BYTE *)(v15 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
        *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
        for ( i = (char *)(v2 + 3488); i != (char *)(v2 + 3424); std::string::~string(i) )
          i -= 32;
        v17 = (_DWORD *)(((v2 + 3424) >> 3) + 2147450880);
        *v17 = -117901064;
        v17[1] = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v14 )
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
            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
            "init",
            32);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1312),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v18, (const char (*)[37])byte_1AA9A080);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
          v7 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 128);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1376),
            &byte_1AA9A0E0,
            (const std::allocator<char> *)(v2 + 128));
          v19 = common::tools::TxtFile::Row::assignToStr(
                  row,
                  (const std::string *)(v2 + 1376),
                  (std::string *)(v2 + 864)) != 0;
          std::string::~string((void *)(v2 + 1376));
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 128);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
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
              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
              "init",
              37);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1440),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1AA9A120);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
            v7 = -1;
          }
          else
          {
            v21 = ((v2 + 608) >> 3) + 2147450880;
            *(_WORD *)v21 = 0;
            *(_BYTE *)(v21 + 2) = 0;
            v22 = (_DWORD *)(((v2 + 3520) >> 3) + 2147450880);
            *v22 = 0;
            v22[1] = 0;
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 144);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3520),
              ";",
              (const std::allocator<char> *)(v2 + 144));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 160);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 3552),
              ",",
              (const std::allocator<char> *)(v2 + 160));
            v77._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3520);
            v77._M_len = 2LL;
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
            std::vector<std::string>::vector(
              (std::vector<std::string> *const)(v2 + 608),
              v77,
              (const std::vector<std::string>::allocator_type *)(v2 + 176));
            v23 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                    (const std::string *)(v2 + 864),
                    (const std::vector<std::string> *)(v2 + 608),
                    &this->photo_useable_widget_list,
                    1) != 0;
            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
            v24 = ((v2 + 608) >> 3) + 2147450880;
            *(_WORD *)v24 = -1800;
            *(_BYTE *)(v24 + 2) = -8;
            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
            *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
            for ( j = (char *)(v2 + 3584); j != (char *)(v2 + 3520); std::string::~string(j) )
              j -= 32;
            v26 = (_DWORD *)(((v2 + 3520) >> 3) + 2147450880);
            *v26 = -117901064;
            v26[1] = -117901064;
            std::allocator<char>::~allocator(v2 + 160);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            std::allocator<char>::~allocator(v2 + 144);
            *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
            if ( v23 )
            {
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1504, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1504),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                "init",
                42);
              v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1504),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v27, (const char (*)[33])byte_1AA9A120);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              v7 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 192);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1568),
                &byte_1AA9A180,
                (const std::allocator<char> *)(v2 + 192));
              v28 = common::tools::TxtFile::Row::assignToNum<float>(
                      row,
                      (const std::string *)(v2 + 1568),
                      &this->fov_max) != 0;
              std::string::~string((void *)(v2 + 1568));
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 192);
              *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
              if ( v28 )
              {
                *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1632, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1632),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                  "init",
                  47);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1632),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v29, (const char (*)[36])byte_1AA9A1C0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                v7 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1696),
                  &byte_1AA9A220,
                  (const std::allocator<char> *)(v2 + 208));
                v30 = common::tools::TxtFile::Row::assignToNum<float>(
                        row,
                        (const std::string *)(v2 + 1696),
                        &this->fov_min) != 0;
                std::string::~string((void *)(v2 + 1696));
                *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( v30 )
                {
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1760, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1760),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                    "init",
                    52);
                  v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1760),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v31,
                    (const char (*)[36])byte_1AA9A260);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                  v7 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1824),
                    &byte_1AA9A2C0,
                    (const std::allocator<char> *)(v2 + 224));
                  v32 = common::tools::TxtFile::Row::assignToNum<float>(
                          row,
                          (const std::string *)(v2 + 1824),
                          &this->fov_default) != 0;
                  std::string::~string((void *)(v2 + 1824));
                  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( v32 )
                  {
                    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1888) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1888, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1888),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                      "init",
                      57);
                    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1888),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v33,
                      (const char (*)[36])byte_1AA9A300);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                    v7 = -1;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 240);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1952),
                      &byte_1AA9A360,
                      (const std::allocator<char> *)(v2 + 240));
                    v34 = common::tools::TxtFile::Row::assignToNum<float>(
                            row,
                            (const std::string *)(v2 + 1952),
                            &this->camera_shift_up) != 0;
                    std::string::~string((void *)(v2 + 1952));
                    *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 240);
                    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                    if ( v34 )
                    {
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2016, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2016),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                        "init",
                        62);
                      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 2016),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        v35,
                        (const char (*)[30])byte_1AA9A3A0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                      v7 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 256);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2080),
                        &byte_1AA9A3E0,
                        (const std::allocator<char> *)(v2 + 256));
                      v36 = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 2080),
                              &this->camera_shift_down) != 0;
                      std::string::~string((void *)(v2 + 2080));
                      *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 256);
                      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                      if ( v36 )
                      {
                        *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2144, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2144),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                          "init",
                          67);
                        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2144),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v37,
                          (const char (*)[30])byte_1AA9A420);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                        *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                        v7 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2208),
                          &byte_1AA9A460,
                          (const std::allocator<char> *)(v2 + 272));
                        v38 = common::tools::TxtFile::Row::assignToNum<float>(
                                row,
                                (const std::string *)(v2 + 2208),
                                &this->camera_shift_left) != 0;
                        std::string::~string((void *)(v2 + 2208));
                        *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        if ( v38 )
                        {
                          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2272, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2272),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                            "init",
                            72);
                          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2272),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            v39,
                            (const char (*)[30])byte_1AA9A4A0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                          v7 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 288);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2336),
                            &byte_1AA9A4E0,
                            (const std::allocator<char> *)(v2 + 288));
                          v40 = common::tools::TxtFile::Row::assignToNum<float>(
                                  row,
                                  (const std::string *)(v2 + 2336),
                                  &this->camera_shift_right) != 0;
                          std::string::~string((void *)(v2 + 2336));
                          *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 288);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( v40 )
                          {
                            *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2400) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2400, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2400),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                              "init",
                              77);
                            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2400),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                              v41,
                              (const char (*)[30])byte_1AA9A520);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                            *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                            v7 = -1;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 304);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2464),
                              "QuestAcceptionMarkID",
                              (const std::allocator<char> *)(v2 + 304));
                            v42 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                    row,
                                    (const std::string *)(v2 + 2464),
                                    &this->quest_acception_mark_id) != 0;
                            std::string::~string((void *)(v2 + 2464));
                            *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 304);
                            *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                            if ( v42 )
                            {
                              *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2528, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2528),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                "init",
                                82);
                              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2528),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                v43,
                                (const char (*)[41])byte_1AA9A5A0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                              *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                              v7 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 320);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2592),
                                "PushTipsID",
                                (const std::allocator<char> *)(v2 + 320));
                              v44 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2592),
                                      &this->push_tips_id) != 0;
                              std::string::~string((void *)(v2 + 2592));
                              *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 320);
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                              if ( v44 )
                              {
                                *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2656) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2656, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2656),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                  "init",
                                  87);
                                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2656),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                  v45,
                                  (const char (*)[31])byte_1AA9A640);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
                                *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                v7 = -1;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 336);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2720),
                                  &byte_1AA9A680,
                                  (const std::allocator<char> *)(v2 + 336));
                                v46 = common::tools::TxtFile::Row::assignToNum<float>(
                                        row,
                                        (const std::string *)(v2 + 2720),
                                        &this->camera_pos_tip_offset) != 0;
                                std::string::~string((void *)(v2 + 2720));
                                *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 336);
                                *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                if ( v46 )
                                {
                                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2784, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2784),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                    "init",
                                    92);
                                  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2784),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                    v47,
                                    (const char (*)[48])byte_1AA9A6C0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
                                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                                  v7 = -1;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 352);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2848),
                                    &byte_1AA9A720,
                                    (const std::allocator<char> *)(v2 + 352));
                                  v48 = common::tools::TxtFile::Row::assignToStr(
                                          row,
                                          (const std::string *)(v2 + 2848),
                                          (std::string *)(v2 + 864)) != 0;
                                  std::string::~string((void *)(v2 + 2848));
                                  *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 352);
                                  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                  if ( v48 )
                                  {
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2912) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2912, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2912),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                      "init",
                                      97);
                                    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2912),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                      v49,
                                      (const char (*)[32])byte_1AA9A760);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2912));
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                    v7 = -1;
                                  }
                                  else
                                  {
                                    v50 = ((v2 + 672) >> 3) + 2147450880;
                                    *(_WORD *)v50 = 0;
                                    *(_BYTE *)(v50 + 2) = 0;
                                    v51 = (_DWORD *)(((v2 + 3616) >> 3) + 2147450880);
                                    *v51 = 0;
                                    v51[1] = 0;
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 368);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3616),
                                      ";",
                                      (const std::allocator<char> *)(v2 + 368));
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 384);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3648),
                                      ",",
                                      (const std::allocator<char> *)(v2 + 384));
                                    v78._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3616);
                                    v78._M_len = 2LL;
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 400));
                                    std::vector<std::string>::vector(
                                      (std::vector<std::string> *const)(v2 + 672),
                                      v78,
                                      (const std::vector<std::string>::allocator_type *)(v2 + 400));
                                    v52 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                            (const std::string *)(v2 + 864),
                                            (const std::vector<std::string> *)(v2 + 672),
                                            &this->extra_tip_middle_quest1,
                                            1) != 0;
                                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
                                    v53 = ((v2 + 672) >> 3) + 2147450880;
                                    *(_WORD *)v53 = -1800;
                                    *(_BYTE *)(v53 + 2) = -8;
                                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 400));
                                    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                    for ( k = (char *)(v2 + 3680); k != (char *)(v2 + 3616); std::string::~string(k) )
                                      k -= 32;
                                    v55 = (_DWORD *)(((v2 + 3616) >> 3) + 2147450880);
                                    *v55 = -117901064;
                                    v55[1] = -117901064;
                                    std::allocator<char>::~allocator(v2 + 384);
                                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                    std::allocator<char>::~allocator(v2 + 368);
                                    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                    if ( v52 )
                                    {
                                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2976, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2976),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                        "init",
                                        102);
                                      v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v2 + 2976),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        v56,
                                        (const char (*)[32])byte_1AA9A760);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                                      v7 = -1;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 416);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3040),
                                        &byte_1AA9A7A0,
                                        (const std::allocator<char> *)(v2 + 416));
                                      v57 = common::tools::TxtFile::Row::assignToStr(
                                              row,
                                              (const std::string *)(v2 + 3040),
                                              (std::string *)(v2 + 864)) != 0;
                                      std::string::~string((void *)(v2 + 3040));
                                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 416);
                                      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                      if ( v57 )
                                      {
                                        *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3104, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3104),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                          "init",
                                          107);
                                        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3104),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                          v58,
                                          (const char (*)[29])byte_1AA9A7E0);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                        *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                                        v7 = -1;
                                      }
                                      else
                                      {
                                        v59 = ((v2 + 736) >> 3) + 2147450880;
                                        *(_WORD *)v59 = 0;
                                        *(_BYTE *)(v59 + 2) = 0;
                                        v60 = (_DWORD *)(((v2 + 3712) >> 3) + 2147450880);
                                        *v60 = 0;
                                        v60[1] = 0;
                                        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 432);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3712),
                                          ";",
                                          (const std::allocator<char> *)(v2 + 432));
                                        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 448);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3744),
                                          ",",
                                          (const std::allocator<char> *)(v2 + 448));
                                        v79._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3712);
                                        v79._M_len = 2LL;
                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 464));
                                        std::vector<std::string>::vector(
                                          (std::vector<std::string> *const)(v2 + 736),
                                          v79,
                                          (const std::vector<std::string>::allocator_type *)(v2 + 464));
                                        v61 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                (const std::string *)(v2 + 864),
                                                (const std::vector<std::string> *)(v2 + 736),
                                                &this->extra_tip_middle_quest2,
                                                1) != 0;
                                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
                                        v62 = ((v2 + 736) >> 3) + 2147450880;
                                        *(_WORD *)v62 = -1800;
                                        *(_BYTE *)(v62 + 2) = -8;
                                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 464));
                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                        for ( m = (char *)(v2 + 3776); m != (char *)(v2 + 3712); std::string::~string(m) )
                                          m -= 32;
                                        v64 = (_DWORD *)(((v2 + 3712) >> 3) + 2147450880);
                                        *v64 = -117901064;
                                        v64[1] = -117901064;
                                        std::allocator<char>::~allocator(v2 + 448);
                                        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                        std::allocator<char>::~allocator(v2 + 432);
                                        *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                        if ( v61 )
                                        {
                                          *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3168) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3168, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3168),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                            "init",
                                            112);
                                          v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3168),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                            v65,
                                            (const char (*)[29])byte_1AA9A7E0);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3168));
                                          *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                          v7 = -1;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 480);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3232),
                                            &byte_1AA9A820,
                                            (const std::allocator<char> *)(v2 + 480));
                                          v66 = common::tools::TxtFile::Row::assignToStr(
                                                  row,
                                                  (const std::string *)(v2 + 3232),
                                                  (std::string *)(v2 + 864)) != 0;
                                          std::string::~string((void *)(v2 + 3232));
                                          *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 480);
                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                          if ( v66 )
                                          {
                                            *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3296, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3296),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                              "init",
                                              117);
                                            v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3296),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                              v67,
                                              (const char (*)[35])byte_1AA9A860);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3296));
                                            *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                            v7 = -1;
                                          }
                                          else
                                          {
                                            v68 = ((v2 + 800) >> 3) + 2147450880;
                                            *(_WORD *)v68 = 0;
                                            *(_BYTE *)(v68 + 2) = 0;
                                            v69 = (_DWORD *)(((v2 + 3808) >> 3) + 2147450880);
                                            *v69 = 0;
                                            v69[1] = 0;
                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 496);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3808),
                                              ";",
                                              (const std::allocator<char> *)(v2 + 496));
                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 512);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3840),
                                              ",",
                                              (const std::allocator<char> *)(v2 + 512));
                                            v80._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3808);
                                            v80._M_len = 2LL;
                                            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 528));
                                            std::vector<std::string>::vector(
                                              (std::vector<std::string> *const)(v2 + 800),
                                              v80,
                                              (const std::vector<std::string>::allocator_type *)(v2 + 528));
                                            v70 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                                                    (const std::string *)(v2 + 864),
                                                    (const std::vector<std::string> *)(v2 + 800),
                                                    &this->extra_tip_middle_quest3,
                                                    1) != 0;
                                            std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 800));
                                            v71 = ((v2 + 800) >> 3) + 2147450880;
                                            *(_WORD *)v71 = -1800;
                                            *(_BYTE *)(v71 + 2) = -8;
                                            std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 528));
                                            *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                            for ( n = (char *)(v2 + 3872); n != (char *)(v2 + 3808); std::string::~string(n) )
                                              n -= 32;
                                            v73 = (_DWORD *)(((v2 + 3808) >> 3) + 2147450880);
                                            *v73 = -117901064;
                                            v73[1] = -117901064;
                                            std::allocator<char>::~allocator(v2 + 512);
                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                            std::allocator<char>::~allocator(v2 + 496);
                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                            if ( v70 )
                                            {
                                              *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3360, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3360),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                                                "init",
                                                122);
                                              v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3360),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                v74,
                                                (const char (*)[35])byte_1AA9A860);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                                              *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -117901064;
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
  std::string::~string((void *)(v2 + 864));
  if ( v81 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862750) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450992 - (((_DWORD)v4 + 2147451000) & 0xFFFFFFF8) + 376) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3904LL, v81);
  }
  return v7;
};

// Line 130: range 0000000012DBD330-0000000012DBFAAF
int32_t __cdecl data::ActivityPhotographPosExcelConfig::init(
        data::ActivityPhotographPosExcelConfig *const this,
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
  char *i; // r14
  _DWORD *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  _DWORD *v25; // rax
  bool v26; // r15
  unsigned __int64 v27; // rax
  char *j; // r14
  _DWORD *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  bool t; // [rsp+0h] [rbp-920h]
  bool ta; // [rsp+0h] [rbp-920h]
  bool tb; // [rsp+0h] [rbp-920h]
  bool tc; // [rsp+0h] [rbp-920h]
  bool td; // [rsp+0h] [rbp-920h]
  bool te; // [rsp+0h] [rbp-920h]
  bool tf; // [rsp+0h] [rbp-920h]
  bool tg; // [rsp+0h] [rbp-920h]
  bool th; // [rsp+0h] [rbp-920h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-910h]
  char v44[2288]; // [rsp+30h] [rbp-8F0h] BYREF

  v2 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2240LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 24 9 <unknown> 384 24 9 <unknown> 448 32 11 val_str:131 512 32 9 <unknown> "
                        "576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 8"
                        "96 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown>"
                        " 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unkn"
                        "own> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <"
                        "unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 64 9 <unknown> 2144 64 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographPosExcelConfig::init;
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
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
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
  v4[536862786] = -218959118;
  v4[536862789] = -202116109;
  std::string::basic_string(v2 + 448);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    &byte_1AA9AC40,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 512), &this->id) != 0;
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
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
      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
      "init",
      134);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 576),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1AA9AC80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 640),
      "GroupLinkid",
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToNum<unsigned int>(
           row,
           (const std::string *)(v2 + 640),
           &this->group_link_id) != 0;
    std::string::~string((void *)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
        "init",
        139);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 704),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1AA9AD20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 768),
        &byte_1AA9AD60,
        (const std::allocator<char> *)(v2 + 80));
      tb = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 768), &this->pic_small) != 0;
      std::string::~string((void *)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( tb )
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
          "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
          "init",
          144);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 832),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v8, (const char (*)[30])byte_1AA9ADA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 896),
          &byte_1AA9ADE0,
          (const std::allocator<char> *)(v2 + 96));
        tc = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 896), &this->pic_big) != 0;
        std::string::~string((void *)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( tc )
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
            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
            "init",
            149);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 960),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v9, (const char (*)[30])byte_1AA9AE20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            &byte_1AA3CF00,
            (const std::allocator<char> *)(v2 + 112));
          td = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                 row,
                 (const std::string *)(v2 + 1024),
                 &this->open_day) != 0;
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( td )
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
              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
              "init",
              154);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v10, (const char (*)[33])byte_1AA3CF40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1152),
              &byte_1AA9AE60,
              (const std::allocator<char> *)(v2 + 128));
            te = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                   row,
                   (const std::string *)(v2 + 1152),
                   &this->watcher_id) != 0;
            std::string::~string((void *)(v2 + 1152));
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( te )
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
                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                "init",
                159);
              v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1216),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1AA9AEA0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1280),
                "Galleryid",
                (const std::allocator<char> *)(v2 + 144));
              tf = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                     row,
                     (const std::string *)(v2 + 1280),
                     &this->gallery_id) != 0;
              std::string::~string((void *)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( tf )
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
                  "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                  "init",
                  164);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1344),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v12, (const char (*)[30])byte_1AA9AF40);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1408),
                  &byte_1AA9AF80,
                  (const std::allocator<char> *)(v2 + 160));
                tg = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                       row,
                       (const std::string *)(v2 + 1408),
                       &this->red_point_id) != 0;
                std::string::~string((void *)(v2 + 1408));
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( tg )
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
                    "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                    "init",
                    169);
                  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1472),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v13,
                    (const char (*)[29])byte_1AA9AFC0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1536),
                    &byte_1AA9B000,
                    (const std::allocator<char> *)(v2 + 176));
                  th = common::tools::TxtFile::Row::assignToStr(
                         row,
                         (const std::string *)(v2 + 1536),
                         (std::string *)(v2 + 448)) != 0;
                  std::string::~string((void *)(v2 + 1536));
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( th )
                  {
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1600, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1600),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                      "init",
                      174);
                    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1600),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      v14,
                      (const char (*)[45])byte_1AA9B040);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    v15 = ((v2 + 320) >> 3) + 2147450880;
                    *(_WORD *)v15 = 0;
                    *(_BYTE *)(v15 + 2) = 0;
                    v16 = (_DWORD *)(((v2 + 2048) >> 3) + 2147450880);
                    *v16 = 0;
                    v16[1] = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2048),
                      ";",
                      (const std::allocator<char> *)(v2 + 192));
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 208);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2080),
                      ",",
                      (const std::allocator<char> *)(v2 + 208));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 224));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 320),
                      (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2048),
                      (const std::vector<std::string>::allocator_type *)(v2 + 224));
                    v17 = common::tools::StringUtils::splitToListBySeps(
                            (const std::string *)(v2 + 448),
                            (const std::vector<std::string> *)(v2 + 320),
                            &this->preset_preview_icon_girl,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
                    v18 = ((v2 + 320) >> 3) + 2147450880;
                    *(_WORD *)v18 = -1800;
                    *(_BYTE *)(v18 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 224));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    for ( i = (char *)(v2 + 2112); i != (char *)(v2 + 2048); std::string::~string(i) )
                      i -= 32;
                    v20 = (_DWORD *)(((v2 + 2048) >> 3) + 2147450880);
                    *v20 = -117901064;
                    v20[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 208);
                    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( v17 )
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
                        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                        "init",
                        179);
                      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1664),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v21,
                        (const char (*)[45])byte_1AA9B040);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 240);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1728),
                        &byte_1AA9B0A0,
                        (const std::allocator<char> *)(v2 + 240));
                      v22 = common::tools::TxtFile::Row::assignToStr(
                              row,
                              (const std::string *)(v2 + 1728),
                              (std::string *)(v2 + 448)) != 0;
                      std::string::~string((void *)(v2 + 1728));
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 240);
                      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                      if ( v22 )
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
                          "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                          "init",
                          184);
                        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1792),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          v23,
                          (const char (*)[45])byte_1AA9B0E0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        v24 = ((v2 + 384) >> 3) + 2147450880;
                        *(_WORD *)v24 = 0;
                        *(_BYTE *)(v24 + 2) = 0;
                        v25 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
                        *v25 = 0;
                        v25[1] = 0;
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 256);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2144),
                          ";",
                          (const std::allocator<char> *)(v2 + 256));
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 272);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2176),
                          ",",
                          (const std::allocator<char> *)(v2 + 272));
                        __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2144);
                        __l._M_len = 2LL;
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 288));
                        std::vector<std::string>::vector(
                          (std::vector<std::string> *const)(v2 + 384),
                          __l,
                          (const std::vector<std::string>::allocator_type *)(v2 + 288));
                        v26 = common::tools::StringUtils::splitToListBySeps(
                                (const std::string *)(v2 + 448),
                                (const std::vector<std::string> *)(v2 + 384),
                                &this->preset_preview_icon_boy,
                                1) != 0;
                        std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 384));
                        v27 = ((v2 + 384) >> 3) + 2147450880;
                        *(_WORD *)v27 = -1800;
                        *(_BYTE *)(v27 + 2) = -8;
                        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 288));
                        *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                        for ( j = (char *)(v2 + 2208); j != (char *)(v2 + 2144); std::string::~string(j) )
                          j -= 32;
                        v29 = (_DWORD *)(((v2 + 2144) >> 3) + 2147450880);
                        *v29 = -117901064;
                        v29[1] = -117901064;
                        std::allocator<char>::~allocator(v2 + 272);
                        *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                        std::allocator<char>::~allocator(v2 + 256);
                        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                        if ( v26 )
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
                            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                            "init",
                            189);
                          v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1856),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v30,
                            (const char (*)[45])byte_1AA9B0E0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 304);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1920),
                            &byte_1AA9B140,
                            (const std::allocator<char> *)(v2 + 304));
                          v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 1920),
                                  &this->scene_id) != 0;
                          std::string::~string((void *)(v2 + 1920));
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 304);
                          *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                          if ( v31 )
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
                              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                              "init",
                              194);
                            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1984),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              v32,
                              (const char (*)[37])byte_1AA9B180);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
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
        }
      }
    }
  }
  std::string::~string((void *)(v2 + 448));
  if ( v44 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 220) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2240LL, v44);
  }
  return v6;
};

// Line 203: range 0000000012DBFAB0-0000000012DC0AEB
int32_t __cdecl data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
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
  data::ActivityPhotographExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityPhotographExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8698h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8678h]
  char v37[34416]; // [rsp+50h] [rbp-8670h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34368LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:218 80 4 9 <unknown> 96 32 9 paths:204 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 176 8 "
                        "data:221 784 376 24 debug_message_stream:229 1232 32880 12 txt_file:212";
  *(_QWORD *)(v3 + 16) = data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographExcelConfig;
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
  v5[536862742] = -219021312;
  v5[536862743] = -218959118;
  v5[536862744] = 62194;
  v5[536862756] = -218959360;
  v5[536862757] = -218959118;
  v5[536862758] = 62194;
  v5[536863786] = -202116109;
  v5[536863787] = -202116109;
  v5[536863788] = -202116109;
  v5[536863789] = -202116109;
  v5[536863790] = -202116109;
  v5[536863791] = -202116109;
  v5[536863792] = -202116109;
  v5[536863793] = -202116109;
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/ActivityPhotographData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1232), v7) )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
        "loadActivityPhotographExcelConfig",
        215);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1232));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1232), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)(v13 + 16) = 0;
        *(_WORD *)(v13 + 20) = 0;
        data::ActivityPhotographExcelConfig::ActivityPhotographExcelConfig((data::ActivityPhotographExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::ActivityPhotographExcelConfig::init(
                 (data::ActivityPhotographExcelConfig *const)(v3 + 544),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1AA2F960);
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
              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
              "loadActivityPhotographExcelConfig",
              231);
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
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 784);
            __asan_poison_stack_memory(v3 + 784, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityPhotographExcelConfig &>((data::ActivityPhotographExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::emplace<unsigned int &,data::ActivityPhotographExcelConfig>(
                    &this->activity_photograph_excel_config_map,
                    (unsigned int *)(v3 + 552),
                    v24,
                    v25,
                    v26);
            if ( !v27.second )
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
                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                "loadActivityPhotographExcelConfig",
                236);
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
            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
            "loadActivityPhotographExcelConfig",
            224);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityPhotographExcelConfig::~ActivityPhotographExcelConfig((data::ActivityPhotographExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_DWORD *)(v30 + 16) = -117901064;
        *(_WORD *)(v30 + 20) = -1800;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    __asan_poison_stack_memory(v3 + 1232, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4280) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34368LL, v37);
  }
  return v2;
};

// Line 245: range 0000000012DC0AEC-0000000012DC1B5A
int32_t __cdecl data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographPosExcelConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
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
  data::ActivityPhotographPosExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityPhotographPosExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rax
  int v31; // edx
  char *i; // r14
  std::string *__for_begin; // [rsp+28h] [rbp-8678h]
  const common::tools::TxtFile::Row *row_ptr; // [rsp+48h] [rbp-8658h]
  char v37[34384]; // [rsp+50h] [rbp-8650h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_10(34336LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:260 64 4 9 <unknown> 80 32 9 paths:246 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 152 8 "
                        "data:263 752 376 24 debug_message_stream:271 1200 32880 12 txt_file:254";
  *(_QWORD *)(v3 + 16) = data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographPosExcelConfig;
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
  v5[536862741] = -218959360;
  v5[536862742] = -218959118;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ActivityPhotographPosData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1200, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1200), v7) )
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
        "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
        "loadActivityPhotographPosExcelConfig",
        257);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1200));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1200), *(_DWORD *)(v3 + 48));
        v13 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_WORD *)(v13 + 16) = 0;
        *(_BYTE *)(v13 + 18) = 0;
        data::ActivityPhotographPosExcelConfig::ActivityPhotographPosExcelConfig((data::ActivityPhotographPosExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityPhotographPosExcelConfig::init(
                 (data::ActivityPhotographPosExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 752, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 752);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 752, &unk_1AA2F960);
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
              "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
              "loadActivityPhotographPosExcelConfig",
              273);
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
              && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 400, 32LL);
            }
            std::ostringstream::str(v3 + 400, v3 + 752);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 752);
            __asan_poison_stack_memory(v3 + 752, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityPhotographPosExcelConfig &>((data::ActivityPhotographPosExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::emplace<unsigned int &,data::ActivityPhotographPosExcelConfig>(
                    &this->activity_photograph_pos_excel_config_map,
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
                "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
                "loadActivityPhotographPosExcelConfig",
                278);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])byte_1AA2FA60);
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
            "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
            "loadActivityPhotographPosExcelConfig",
            266);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityPhotographPosExcelConfig::~ActivityPhotographPosExcelConfig((data::ActivityPhotographPosExcelConfig *const)(v3 + 528));
        v30 = ((v3 + 528) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_DWORD *)(v30 + 12) = -117901064;
        *(_WORD *)(v30 + 16) = -1800;
        *(_BYTE *)(v30 + 18) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1200));
    __asan_poison_stack_memory(v3 + 1200, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4292) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34336LL, v37);
  }
  return v2;
};

// Line 287: range 0000000012DC1B5C-0000000012DC1E80
int32_t __cdecl data::ActivityPhotographExcelConfigMgrBase::loadConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
        HK4EDesignConfig *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
      "loadConfig",
      290);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"loadActivityPhotographExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::ActivityPhotographExcelConfigMgrBase::loadActivityPhotographPosExcelConfig(this, config) )
  {
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
      "./src/txt_data_auto/ActivityPhotographExcelConfig.gen.cpp",
      "loadConfig",
      295);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v7,
      (const char (*)[44])"loadActivityPhotographPosExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
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

// Line 302: range 0000000012DC1E82-0000000012DC1E94
int32_t __cdecl data::ActivityPhotographExcelConfigMgrBase::rewriteConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 307: range 0000000012DC1E96-0000000012DC1EA8
int32_t __cdecl data::ActivityPhotographExcelConfigMgrBase::finalConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 312: range 0000000012DC1EAA-0000000012DC2065
data::ActivityPhotographExcelConfig *__fastcall data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPhotographExcelConfigMap *p_activity_photograph_excel_config_map; // rdx
  data::ActivityPhotographExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityPhotographExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:311 64 8 8 iter:313 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_photograph_excel_config_map = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::find(
                                                                                                   p_activity_photograph_excel_config_map,
                                                                                                   (const std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 325: range 0000000012DC2066-0000000012DC2221
const data::ActivityPhotographExcelConfig *__fastcall data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographExcelConfig(
        const data::ActivityPhotographExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPhotographExcelConfigMap *p_activity_photograph_excel_config_map; // rdx
  data::ActivityPhotographExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityPhotographExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:324 64 8 8 iter:326 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_photograph_excel_config_map = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::find(p_activity_photograph_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_photograph_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 338: range 0000000012DC2222-0000000012DC23DD
data::ActivityPhotographPosExcelConfig *__fastcall data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
        data::ActivityPhotographExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPhotographPosExcelConfigMap *p_activity_photograph_pos_excel_config_map; // rdx
  data::ActivityPhotographPosExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityPhotographPosExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:337 64 8 8 iter:339 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_photograph_pos_excel_config_map = &this->activity_photograph_pos_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::find(p_activity_photograph_pos_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_photograph_pos_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 351: range 0000000012DC23DE-0000000012DC2599
const data::ActivityPhotographPosExcelConfig *__fastcall data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
        const data::ActivityPhotographExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPhotographPosExcelConfigMap *p_activity_photograph_pos_excel_config_map; // rdx
  data::ActivityPhotographPosExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityPhotographPosExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:350 64 8 8 iter:352 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_activity_photograph_pos_excel_config_map = &this->activity_photograph_pos_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::find(p_activity_photograph_pos_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_photograph_pos_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPhotographPosExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPhotographPosExcelConfig>,false,false> *const)(v2 + 64))->second;
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

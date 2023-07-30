// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BargainExcelConfig.gen.cpp

// Line 13: range 0000000013912498-0000000013915CAB
int32_t __cdecl data::BargainExcelConfig::init(
        data::BargainExcelConfig *const this,
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
  char *j; // r14
  _DWORD *v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  bool v19; // r15
  unsigned __int64 v20; // rax
  char *k; // r14
  _DWORD *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  common::milog::MiLogStream *v25; // rax
  bool v26; // r14
  unsigned int *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  bool v33; // r14
  common::milog::MiLogStream *v34; // rax
  bool v35; // r14
  common::milog::MiLogStream *v36; // rax
  unsigned __int64 v37; // rax
  _DWORD *v38; // rax
  bool v39; // r15
  unsigned __int64 v40; // rax
  char *m; // r14
  _DWORD *v42; // rax
  common::milog::MiLogStream *v43; // rax
  bool v44; // r14
  common::milog::MiLogStream *v45; // rax
  bool v46; // r14
  common::milog::MiLogStream *v47; // rax
  bool v48; // r14
  common::milog::MiLogStream *v49; // rax
  bool v50; // r14
  unsigned int *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  bool v55; // r14
  common::milog::MiLogStream *v56; // rax
  bool v57; // r14
  common::milog::MiLogStream *v58; // rax
  bool t; // [rsp+0h] [rbp-DE0h]
  bool ta; // [rsp+0h] [rbp-DE0h]
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-DD0h]
  std::initializer_list<std::string > v63; // [rsp+20h] [rbp-DC0h]
  uint32_t array_count; // [rsp+44h] [rbp-D9Ch]
  uint32_t array_counta; // [rsp+44h] [rbp-D9Ch]
  uint32_t i; // [rsp+48h] [rbp-D98h]
  uint32_t i_0; // [rsp+4Ch] [rbp-D94h]
  char v68[3472]; // [rsp+50h] [rbp-D90h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3424LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "66 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 24 9 <unknown> 512 24 9 <un"
                        "known> 576 24 9 <unknown> 640 32 10 val_str:16 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <u"
                        "nknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 "
                        "<unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 3"
                        "2 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 17"
                        "92 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown"
                        "> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unk"
                        "nown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 "
                        "<unknown> 2752 32 9 <unknown> 2816 64 9 <unknown> 2912 64 9 <unknown> 3008 64 9 <unknown> 3104 2"
                        "56 11 col_name:14";
  *(_QWORD *)(v2 + 16) = data::BargainExcelConfig::init;
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
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234881024;
  v4[536862735] = -218959118;
  v4[536862736] = -234881024;
  v4[536862737] = -218959118;
  v4[536862738] = -234881024;
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
  v4[536862810] = -218959118;
  v4[536862813] = -218959118;
  v4[536862816] = -218959118;
  v4[536862825] = -202116109;
  v4[536862826] = -202116109;
  std::string::basic_string(v2 + 640);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 704),
    &byte_1AC2FE60,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 704), &this->id) != 0;
  std::string::~string((void *)(v2 + 704));
  *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( t )
  {
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 768, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 768),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
      "init",
      19);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 768),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AC2FF00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 832),
      &byte_1AC2FF40,
      (const std::allocator<char> *)(v2 + 64));
    ta = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 832), (std::string *)(v2 + 640)) != 0;
    std::string::~string((void *)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( ta )
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
        "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
        "init",
        24);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 896),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v7, (const char (*)[35])byte_1AC2FF80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v8 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v8 = 0;
      *(_BYTE *)(v8 + 2) = 0;
      v9 = (_DWORD *)(((v2 + 2816) >> 3) + 2147450880);
      *v9 = 0;
      v9[1] = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2816),
        ";",
        (const std::allocator<char> *)(v2 + 80));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 96);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 2848),
        ",",
        (const std::allocator<char> *)(v2 + 96));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 112));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 448),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 2816),
        (const std::vector<std::string>::allocator_type *)(v2 + 112));
      v10 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 640),
              (const std::vector<std::string> *)(v2 + 448),
              &this->dialog_id,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 448));
      v11 = ((v2 + 448) >> 3) + 2147450880;
      *(_WORD *)v11 = -1800;
      *(_BYTE *)(v11 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 112));
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 2880); j != (char *)(v2 + 2816); std::string::~string(j) )
        j -= 32;
      v13 = (_DWORD *)(((v2 + 2816) >> 3) + 2147450880);
      *v13 = -117901064;
      v13[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 96);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
          "init",
          29);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1AC2FF80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1024),
          &byte_1AC2FFE0,
          (const std::allocator<char> *)(v2 + 128));
        v15 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1024), (std::string *)(v2 + 640)) != 0;
        std::string::~string((void *)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( v15 )
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
            "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
            "init",
            34);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1088),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v16, (const char (*)[36])byte_1AC30020);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
        }
        else
        {
          v17 = ((v2 + 512) >> 3) + 2147450880;
          *(_WORD *)v17 = 0;
          *(_BYTE *)(v17 + 2) = 0;
          v18 = (_DWORD *)(((v2 + 2912) >> 3) + 2147450880);
          *v18 = 0;
          v18[1] = 0;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 144);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2912),
            ";",
            (const std::allocator<char> *)(v2 + 144));
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 160);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 2944),
            ",",
            (const std::allocator<char> *)(v2 + 160));
          __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2912);
          __l._M_len = 2LL;
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
          std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
          std::vector<std::string>::vector(
            (std::vector<std::string> *const)(v2 + 512),
            __l,
            (const std::vector<std::string>::allocator_type *)(v2 + 176));
          v19 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                  (const std::string *)(v2 + 640),
                  (const std::vector<std::string> *)(v2 + 512),
                  &this->expected_value,
                  1) != 0;
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 512));
          v20 = ((v2 + 512) >> 3) + 2147450880;
          *(_WORD *)v20 = -1800;
          *(_BYTE *)(v20 + 2) = -8;
          std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
          *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
          for ( k = (char *)(v2 + 2976); k != (char *)(v2 + 2912); std::string::~string(k) )
            k -= 32;
          v22 = (_DWORD *)(((v2 + 2912) >> 3) + 2147450880);
          *v22 = -117901064;
          v22[1] = -117901064;
          std::allocator<char>::~allocator(v2 + 160);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          std::allocator<char>::~allocator(v2 + 144);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
          {
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
              "init",
              39);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v23, (const char (*)[36])byte_1AC30020);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
          }
          else
          {
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 192);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1216),
              &byte_1AC30080,
              (const std::allocator<char> *)(v2 + 192));
            v24 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                    row,
                    (const std::string *)(v2 + 1216),
                    &this->space) != 0;
            std::string::~string((void *)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 192);
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
            if ( v24 )
            {
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1280, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1280),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                "init",
                44);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v25, (const char (*)[33])byte_1AC300C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              v6 = -1;
            }
            else
            {
              std::vector<unsigned int>::resize(&this->success_talk_id, 3uLL);
              array_count = 0;
              for ( i = 0; i <= 2; ++i )
              {
                snprintf((char *)(v2 + 3104), 0x100uLL, &byte_1AC30120, i + 1);
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 208);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1344),
                  (const char *)(v2 + 3104),
                  (const std::allocator<char> *)(v2 + 208));
                v26 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 1344));
                std::string::~string((void *)(v2 + 1344));
                *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 208);
                *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                if ( !v26 )
                {
                  v27 = std::vector<unsigned int>::operator[](&this->success_talk_id, i);
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 224);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1408),
                    (const char *)(v2 + 3104),
                    (const std::allocator<char> *)(v2 + 224));
                  LOBYTE(v27) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 1408),
                                  v27) != 0;
                  std::string::~string((void *)(v2 + 1408));
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 224);
                  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                  if ( (_BYTE)v27 )
                  {
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1472, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1472),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                      "init",
                      56);
                    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1472),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v28,
                            (const char (*)[14])byte_1ABFD420);
                    v30 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                            v29,
                            (const char (*)[256])(v2 + 3104));
                    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])byte_1ABFD460);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                    goto LABEL_92;
                  }
                  array_count = i + 1;
                }
              }
              std::vector<unsigned int>::resize(&this->success_talk_id, array_count);
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 240);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1536),
                &byte_1AC30160,
                (const std::allocator<char> *)(v2 + 240));
              v31 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                      row,
                      (const std::string *)(v2 + 1536),
                      &this->fail_talk_id) != 0;
              std::string::~string((void *)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 240);
              *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
              if ( v31 )
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
                  "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                  "init",
                  65);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1600),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v32, (const char (*)[41])byte_1AC301A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                v6 = -1;
              }
              else
              {
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 256);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1664),
                  &byte_1AC30200,
                  (const std::allocator<char> *)(v2 + 256));
                v33 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                        row,
                        (const std::string *)(v2 + 1664),
                        &this->mood_upper_limit) != 0;
                std::string::~string((void *)(v2 + 1664));
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 256);
                *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                if ( v33 )
                {
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1728, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1728),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                    "init",
                    70);
                  v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1728),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v34,
                    (const char (*)[33])byte_1AC30240);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                  v6 = -1;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 272);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1792),
                    &byte_1AC302A0,
                    (const std::allocator<char> *)(v2 + 272));
                  v35 = common::tools::TxtFile::Row::assignToStr(
                          row,
                          (const std::string *)(v2 + 1792),
                          (std::string *)(v2 + 640)) != 0;
                  std::string::~string((void *)(v2 + 1792));
                  *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 272);
                  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                  if ( v35 )
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
                      "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                      "init",
                      75);
                    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1856),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v36,
                      (const char (*)[39])byte_1AC302E0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                    *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                    v6 = -1;
                  }
                  else
                  {
                    v37 = ((v2 + 576) >> 3) + 2147450880;
                    *(_WORD *)v37 = 0;
                    *(_BYTE *)(v37 + 2) = 0;
                    v38 = (_DWORD *)(((v2 + 3008) >> 3) + 2147450880);
                    *v38 = 0;
                    v38[1] = 0;
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 288);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 3008),
                      ";",
                      (const std::allocator<char> *)(v2 + 288));
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 304);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 3040),
                      ",",
                      (const std::allocator<char> *)(v2 + 304));
                    v63._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3008);
                    v63._M_len = 2LL;
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 320));
                    std::vector<std::string>::vector(
                      (std::vector<std::string> *const)(v2 + 576),
                      v63,
                      (const std::vector<std::string>::allocator_type *)(v2 + 320));
                    v39 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                            (const std::string *)(v2 + 640),
                            (const std::vector<std::string> *)(v2 + 576),
                            &this->random_mood,
                            1) != 0;
                    std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 576));
                    v40 = ((v2 + 576) >> 3) + 2147450880;
                    *(_WORD *)v40 = -1800;
                    *(_BYTE *)(v40 + 2) = -8;
                    std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 320));
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                    for ( m = (char *)(v2 + 3072); m != (char *)(v2 + 3008); std::string::~string(m) )
                      m -= 32;
                    v42 = (_DWORD *)(((v2 + 3008) >> 3) + 2147450880);
                    *v42 = -117901064;
                    v42[1] = -117901064;
                    std::allocator<char>::~allocator(v2 + 304);
                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                    std::allocator<char>::~allocator(v2 + 288);
                    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                    if ( v39 )
                    {
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1920, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1920),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                        "init",
                        80);
                      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1920),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        v43,
                        (const char (*)[39])byte_1AC302E0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                      *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                      v6 = -1;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 336);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1984),
                        &byte_1AC30340,
                        (const std::allocator<char> *)(v2 + 336));
                      v44 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                              row,
                              (const std::string *)(v2 + 1984),
                              &this->mood_alert_limit) != 0;
                      std::string::~string((void *)(v2 + 1984));
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 336);
                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                      if ( v44 )
                      {
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2048, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2048),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                          "init",
                          85);
                        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 2048),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          v45,
                          (const char (*)[36])byte_1AC30380);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                        *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                        v6 = -1;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 352);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2112),
                          &byte_1AC303E0,
                          (const std::allocator<char> *)(v2 + 352));
                        v46 = common::tools::TxtFile::Row::assignToNum<int>(
                                row,
                                (const std::string *)(v2 + 2112),
                                &this->mood_low_limit) != 0;
                        std::string::~string((void *)(v2 + 2112));
                        *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 352);
                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                        if ( v46 )
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
                            "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                            "init",
                            90);
                          v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2176),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            v47,
                            (const char (*)[33])byte_1AC30420);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                          *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                          v6 = -1;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 368);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2240),
                            &byte_1AC30480,
                            (const std::allocator<char> *)(v2 + 368));
                          v48 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                  row,
                                  (const std::string *)(v2 + 2240),
                                  &this->single_fail_mood_deduction) != 0;
                          std::string::~string((void *)(v2 + 2240));
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 368);
                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                          if ( v48 )
                          {
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2304, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2304),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                              "init",
                              95);
                            v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2304),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                              v49,
                              (const char (*)[45])byte_1AC304C0);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                            *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                            v6 = -1;
                          }
                          else
                          {
                            std::vector<unsigned int>::resize(&this->single_fail_talk_id, 2uLL);
                            array_counta = 0;
                            for ( i_0 = 0; i_0 <= 1; ++i_0 )
                            {
                              snprintf((char *)(v2 + 3104), 0x100uLL, &byte_1AC30520, i_0 + 1);
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 384);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2368),
                                (const char *)(v2 + 3104),
                                (const std::allocator<char> *)(v2 + 384));
                              v50 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2368));
                              std::string::~string((void *)(v2 + 2368));
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 384);
                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                              if ( !v50 )
                              {
                                v51 = std::vector<unsigned int>::operator[](&this->single_fail_talk_id, i_0);
                                *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 400);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2432),
                                  (const char *)(v2 + 3104),
                                  (const std::allocator<char> *)(v2 + 400));
                                LOBYTE(v51) = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                                row,
                                                (const std::string *)(v2 + 2432),
                                                v51) != 0;
                                std::string::~string((void *)(v2 + 2432));
                                *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 400);
                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                if ( (_BYTE)v51 )
                                {
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2496, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2496),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                                    "init",
                                    107);
                                  v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2496),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                          v52,
                                          (const char (*)[14])byte_1ABFD420);
                                  v54 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                                          v53,
                                          (const char (*)[256])(v2 + 3104));
                                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                    v54,
                                    (const char (*)[7])byte_1ABFD460);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                  v6 = -1;
                                  goto LABEL_92;
                                }
                                array_counta = i_0 + 1;
                              }
                            }
                            std::vector<unsigned int>::resize(&this->single_fail_talk_id, array_counta);
                            *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 416);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2560),
                              &byte_1AC30560,
                              (const std::allocator<char> *)(v2 + 416));
                            v55 = common::tools::TxtFile::Row::assignToNum<bool>(
                                    row,
                                    (const std::string *)(v2 + 2560),
                                    &this->delete_item) != 0;
                            std::string::~string((void *)(v2 + 2560));
                            *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 416);
                            *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                            if ( v55 )
                            {
                              *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2624) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2624, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2624),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                                "init",
                                116);
                              v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2624),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                v56,
                                (const char (*)[45])byte_1AC305A0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
                              *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                              v6 = -1;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 432);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2688),
                                &byte_1AC30600,
                                (const std::allocator<char> *)(v2 + 432));
                              v57 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                                      row,
                                      (const std::string *)(v2 + 2688),
                                      &this->item_id) != 0;
                              std::string::~string((void *)(v2 + 2688));
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 432);
                              *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                              if ( v57 )
                              {
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2752, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2752),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                                  "init",
                                  121);
                                v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2752),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                  v58,
                                  (const char (*)[29])byte_1AC30640);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
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
    }
  }
LABEL_92:
  std::string::~string((void *)(v2 + 640));
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF817C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450964 - (((_DWORD)v4 + 2147450972) & 0xFFFFFFF8) + 304) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A4) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3424LL, v68);
  }
  return v6;
};

// Line 130: range 0000000013915CAC-0000000013916CE7
int32_t __cdecl data::BargainExcelConfigMgrBase::loadBargainExcelConfig(
        data::BargainExcelConfigMgrBase *const this,
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
  data::BargainExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::BargainExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 5 r:145 80 4 9 <unknown> 96 32 9 paths:131 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 176 8 "
                        "data:148 784 376 24 debug_message_stream:156 1232 32880 12 txt_file:139";
  *(_QWORD *)(v3 + 16) = data::BargainExcelConfigMgrBase::loadBargainExcelConfig;
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
    "/txt/BargainData.txt",
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
        "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
        "loadBargainExcelConfig",
        142);
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
        data::BargainExcelConfig::BargainExcelConfig((data::BargainExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::BargainExcelConfig::init((data::BargainExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1ABFF160);
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
              "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
              "loadBargainExcelConfig",
              158);
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
            v24 = std::move<data::BargainExcelConfig &>((data::BargainExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::BargainExcelConfig>::emplace<unsigned int &,data::BargainExcelConfig>(
                    &this->bargain_excel_config_map,
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
                "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
                "loadBargainExcelConfig",
                163);
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
            "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
            "loadBargainExcelConfig",
            151);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::BargainExcelConfig::~BargainExcelConfig((data::BargainExcelConfig *const)(v3 + 544));
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

// Line 172: range 0000000013916CE8-0000000013916ECB
int32_t __cdecl data::BargainExcelConfigMgrBase::loadConfig(
        data::BargainExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::BargainExcelConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::BargainExcelConfigMgrBase::loadBargainExcelConfig(this, config) )
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
      "./src/txt_data_auto/BargainExcelConfig.gen.cpp",
      "loadConfig",
      175);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v5,
      (const char (*)[30])"loadBargainExcelConfig failed");
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

// Line 182: range 0000000013916ECC-0000000013916EDE
int32_t __cdecl data::BargainExcelConfigMgrBase::rewriteConfig(
        data::BargainExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 187: range 0000000013916EE0-0000000013916EF2
int32_t __cdecl data::BargainExcelConfigMgrBase::finalConfig(
        data::BargainExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 192: range 0000000013916EF4-00000000139170AF
data::BargainExcelConfig *__fastcall data::BargainExcelConfigMgrBase::findBargainExcelConfig(
        data::BargainExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BargainExcelConfigMap *p_bargain_excel_config_map; // rdx
  data::BargainExcelConfigMap *v6; // rdx
  bool v7; // al
  data::BargainExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:191 64 8 8 iter:193 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::BargainExcelConfigMgrBase::findBargainExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_bargain_excel_config_map = &this->bargain_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BargainExcelConfig>::find(
                                                                                        p_bargain_excel_config_map,
                                                                                        (const std::unordered_map<unsigned int,data::BargainExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bargain_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BargainExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::BargainExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 205: range 00000000139170B0-000000001391726B
const data::BargainExcelConfig *__fastcall data::BargainExcelConfigMgrBase::findBargainExcelConfig(
        const data::BargainExcelConfigMgrBase *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::BargainExcelConfigMap *p_bargain_excel_config_map; // rdx
  data::BargainExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::BargainExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:204 64 8 8 iter:206 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::BargainExcelConfigMgrBase::findBargainExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_bargain_excel_config_map = &this->bargain_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BargainExcelConfig>::find(
                                                                                              p_bargain_excel_config_map,
                                                                                              (const std::unordered_map<unsigned int,data::BargainExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->bargain_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BargainExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::BargainExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp

// Line 13: range 0000000012DC259A-0000000012DC6132
int32_t __cdecl data::ActivityPlantFlowerMainExcelConfig::init(
        data::ActivityPlantFlowerMainExcelConfig *const this,
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
  unsigned __int64 v10; // rax
  _DWORD *v11; // rax
  bool v12; // r13
  unsigned __int64 v13; // rax
  char *j; // rbx
  _DWORD *v15; // rax
  common::milog::MiLogStream *v16; // rax
  bool v17; // bl
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rax
  bool v21; // r13
  unsigned __int64 v22; // rax
  char *k; // rbx
  _DWORD *v24; // rax
  common::milog::MiLogStream *v25; // rax
  bool v26; // bl
  common::milog::MiLogStream *v27; // rax
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  bool v30; // r13
  unsigned __int64 v31; // rax
  char *m; // rbx
  _DWORD *v33; // rax
  common::milog::MiLogStream *v34; // rax
  bool v35; // bl
  common::milog::MiLogStream *v36; // rax
  bool v37; // bl
  common::milog::MiLogStream *v38; // rax
  bool v39; // bl
  common::milog::MiLogStream *v40; // rax
  bool v41; // bl
  common::milog::MiLogStream *v42; // rax
  unsigned __int64 v43; // rax
  _DWORD *v44; // rax
  bool v45; // r13
  unsigned __int64 v46; // rax
  char *n; // rbx
  _DWORD *v48; // rax
  common::milog::MiLogStream *v49; // rax
  bool v50; // bl
  common::milog::MiLogStream *v51; // rax
  bool v52; // bl
  common::milog::MiLogStream *v53; // rax
  unsigned __int64 v54; // rax
  _DWORD *v55; // rax
  bool v56; // r13
  unsigned __int64 v57; // rax
  char *ii; // rbx
  _DWORD *v59; // rax
  common::milog::MiLogStream *v60; // rax
  bool v61; // bl
  common::milog::MiLogStream *v62; // rax
  bool v63; // bl
  unsigned int *v64; // rbx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-EA0h]
  std::initializer_list<std::string > v70; // [rsp+20h] [rbp-E90h]
  std::initializer_list<std::string > v71; // [rsp+30h] [rbp-E80h]
  std::initializer_list<std::string > v72; // [rsp+40h] [rbp-E70h]
  std::initializer_list<std::string > v73; // [rsp+50h] [rbp-E60h]
  uint32_t array_count; // [rsp+78h] [rbp-E38h]
  uint32_t i; // [rsp+7Ch] [rbp-E34h]
  char v76[3632]; // [rsp+80h] [rbp-E30h] BYREF

  v2 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3584LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "70 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkno"
                        "wn> 464 1 9 <unknown> 480 24 9 <unknown> 544 24 9 <unknown> 608 24 9 <unknown> 672 24 9 <unknown"
                        "> 736 24 9 <unknown> 800 32 10 val_str:16 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknow"
                        "n> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <un"
                        "known> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9"
                        " <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 "
                        "32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2"
                        "272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknow"
                        "n> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 64 9 <unknown> 2880 64 9 <un"
                        "known> 2976 64 9 <unknown> 3072 64 9 <unknown> 3168 64 9 <unknown> 3264 256 11 col_name:14";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerMainExcelConfig::init;
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
  v4[536862735] = -234881024;
  v4[536862736] = -218959118;
  v4[536862737] = -234881024;
  v4[536862738] = -218959118;
  v4[536862739] = -234881024;
  v4[536862740] = -218959118;
  v4[536862741] = -234881024;
  v4[536862742] = -218959118;
  v4[536862743] = -234881024;
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
  v4[536862806] = -218959118;
  v4[536862809] = -218959118;
  v4[536862812] = -218959118;
  v4[536862815] = -218959118;
  v4[536862818] = -218959118;
  v4[536862821] = -218959118;
  v4[536862830] = -202116109;
  v4[536862831] = -202116109;
  std::string::basic_string(v2 + 800);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 864),
    &byte_1AA4E760,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 864), &this->schedule_id) != 0;
  std::string::~string((void *)(v2 + 864));
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      19);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 928),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v6, (const char (*)[29])byte_1AA4E7A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 992),
    &byte_1AA9BCC0,
    (const std::allocator<char> *)(v2 + 48));
  v8 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 992), (std::string *)(v2 + 800)) != 0;
  std::string::~string((void *)(v2 + 992));
  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      24);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 1056),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v9, (const char (*)[33])byte_1AA9BD00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
    *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  v10 = ((v2 + 480) >> 3) + 2147450880;
  *(_WORD *)v10 = 0;
  *(_BYTE *)(v10 + 2) = 0;
  v11 = (_DWORD *)(((v2 + 2784) >> 3) + 2147450880);
  *v11 = 0;
  v11[1] = 0;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2784),
    ";",
    (const std::allocator<char> *)(v2 + 64));
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 80);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2816),
    ",",
    (const std::allocator<char> *)(v2 + 80));
  __l._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2784);
  __l._M_len = 2LL;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 96));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 480),
    __l,
    (const std::vector<std::string>::allocator_type *)(v2 + 96));
  v12 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 800),
          (const std::vector<std::string> *)(v2 + 480),
          &this->seed_reward_id_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 480));
  v13 = ((v2 + 480) >> 3) + 2147450880;
  *(_WORD *)v13 = -1800;
  *(_BYTE *)(v13 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  for ( j = (char *)(v2 + 2848); j != (char *)(v2 + 2784); std::string::~string(j) )
    j -= 32;
  v15 = (_DWORD *)(((v2 + 2784) >> 3) + 2147450880);
  *v15 = -117901064;
  v15[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 80);
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      29);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1120),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v16, (const char (*)[33])byte_1AA9BD00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
    *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 112);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1184),
    &byte_1AA9BD60,
    (const std::allocator<char> *)(v2 + 112));
  v17 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1184), (std::string *)(v2 + 800)) != 0;
  std::string::~string((void *)(v2 + 1184));
  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 112);
  *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v17 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      34);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1248),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v18, (const char (*)[35])byte_1AA9BDA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
    *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  v19 = ((v2 + 544) >> 3) + 2147450880;
  *(_WORD *)v19 = 0;
  *(_BYTE *)(v19 + 2) = 0;
  v20 = (_DWORD *)(((v2 + 2880) >> 3) + 2147450880);
  *v20 = 0;
  v20[1] = 0;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 128);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2880),
    ";",
    (const std::allocator<char> *)(v2 + 128));
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 144);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2912),
    ",",
    (const std::allocator<char> *)(v2 + 144));
  v70._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2880);
  v70._M_len = 2LL;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 160));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 544),
    v70,
    (const std::vector<std::string>::allocator_type *)(v2 + 160));
  v21 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 800),
          (const std::vector<std::string> *)(v2 + 544),
          &this->flower_id_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 544));
  v22 = ((v2 + 544) >> 3) + 2147450880;
  *(_WORD *)v22 = -1800;
  *(_BYTE *)(v22 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 160));
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  for ( k = (char *)(v2 + 2944); k != (char *)(v2 + 2880); std::string::~string(k) )
    k -= 32;
  v24 = (_DWORD *)(((v2 + 2880) >> 3) + 2147450880);
  *v24 = -117901064;
  v24[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 144);
  *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 128);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v21 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      39);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1312),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v25, (const char (*)[35])byte_1AA9BDA0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 176);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1376),
    &byte_1AA9BE00,
    (const std::allocator<char> *)(v2 + 176));
  v26 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1376), (std::string *)(v2 + 800)) != 0;
  std::string::~string((void *)(v2 + 1376));
  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 176);
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( v26 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      44);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1440),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v27, (const char (*)[35])byte_1AA9BE40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  v28 = ((v2 + 608) >> 3) + 2147450880;
  *(_WORD *)v28 = 0;
  *(_BYTE *)(v28 + 2) = 0;
  v29 = (_DWORD *)(((v2 + 2976) >> 3) + 2147450880);
  *v29 = 0;
  v29[1] = 0;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 192);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2976),
    ";",
    (const std::allocator<char> *)(v2 + 192));
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 208);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3008),
    ",",
    (const std::allocator<char> *)(v2 + 208));
  v71._M_array = (std::initializer_list<std::string >::iterator)(v2 + 2976);
  v71._M_len = 2LL;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 224));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 608),
    v71,
    (const std::vector<std::string>::allocator_type *)(v2 + 224));
  v30 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 800),
          (const std::vector<std::string> *)(v2 + 608),
          &this->seed_id_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 608));
  v31 = ((v2 + 608) >> 3) + 2147450880;
  *(_WORD *)v31 = -1800;
  *(_BYTE *)(v31 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 224));
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  for ( m = (char *)(v2 + 3040); m != (char *)(v2 + 2976); std::string::~string(m) )
    m -= 32;
  v33 = (_DWORD *)(((v2 + 2976) >> 3) + 2147450880);
  *v33 = -117901064;
  v33[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 208);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 192);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v30 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      49);
    v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1504),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v34, (const char (*)[35])byte_1AA9BE40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 240);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1568),
    &byte_1AA9BEA0,
    (const std::allocator<char> *)(v2 + 240));
  v35 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 1568),
          &this->max_wish_flower_kinds) != 0;
  std::string::~string((void *)(v2 + 1568));
  *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 240);
  *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
  if ( v35 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      54);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1632),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v36, (const char (*)[45])byte_1AA9BEE0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 256);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1696),
    &byte_1AA36C40,
    (const std::allocator<char> *)(v2 + 256));
  v37 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 1696),
          &this->reward_preview_id) != 0;
  std::string::~string((void *)(v2 + 1696));
  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 256);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  if ( v37 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      59);
    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1760),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v38, (const char (*)[35])byte_1AA36C80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
    *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 272);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1824),
    &byte_1AA9BF40,
    (const std::allocator<char> *)(v2 + 272));
  v39 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 1824),
          &this->guarantee_start_times) != 0;
  std::string::~string((void *)(v2 + 1824));
  *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 272);
  *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
  if ( v39 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      64);
    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 1888),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v40, (const char (*)[39])byte_1AA9BF80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 288);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 1952),
    &byte_1AA43920,
    (const std::allocator<char> *)(v2 + 288));
  v41 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 1952), (std::string *)(v2 + 800)) != 0;
  std::string::~string((void *)(v2 + 1952));
  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 288);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  if ( v41 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      69);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2016),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v42, (const char (*)[33])byte_1AA43960);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
    *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  v43 = ((v2 + 672) >> 3) + 2147450880;
  *(_WORD *)v43 = 0;
  *(_BYTE *)(v43 + 2) = 0;
  v44 = (_DWORD *)(((v2 + 3072) >> 3) + 2147450880);
  *v44 = 0;
  v44[1] = 0;
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 304);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3072),
    ";",
    (const std::allocator<char> *)(v2 + 304));
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 320);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3104),
    ",",
    (const std::allocator<char> *)(v2 + 320));
  v72._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3072);
  v72._M_len = 2LL;
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 336));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 672),
    v72,
    (const std::vector<std::string>::allocator_type *)(v2 + 336));
  v45 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 800),
          (const std::vector<std::string> *)(v2 + 672),
          &this->pre_quest_id_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 672));
  v46 = ((v2 + 672) >> 3) + 2147450880;
  *(_WORD *)v46 = -1800;
  *(_BYTE *)(v46 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 336));
  *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
  for ( n = (char *)(v2 + 3136); n != (char *)(v2 + 3072); std::string::~string(n) )
    n -= 32;
  v48 = (_DWORD *)(((v2 + 3072) >> 3) + 2147450880);
  *v48 = -117901064;
  v48[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 320);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 304);
  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
  if ( v45 )
  {
    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2080, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2080),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      74);
    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2080),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v49, (const char (*)[33])byte_1AA43960);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 352);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2144),
    &byte_1AA43600,
    (const std::allocator<char> *)(v2 + 352));
  v50 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 2144),
          &this->open_quest_id) != 0;
  std::string::~string((void *)(v2 + 2144));
  *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 352);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  if ( v50 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      79);
    v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2208),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v51, (const char (*)[33])byte_1AA43640);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
    *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 368);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2272),
    &byte_1AA82620,
    (const std::allocator<char> *)(v2 + 368));
  v52 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 2272), (std::string *)(v2 + 800)) != 0;
  std::string::~string((void *)(v2 + 2272));
  *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 368);
  *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
  if ( v52 )
  {
    *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 2336, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 2336),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      84);
    v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2336),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v53, (const char (*)[37])byte_1AA82660);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
    *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  v54 = ((v2 + 736) >> 3) + 2147450880;
  *(_WORD *)v54 = 0;
  *(_BYTE *)(v54 + 2) = 0;
  v55 = (_DWORD *)(((v2 + 3168) >> 3) + 2147450880);
  *v55 = 0;
  v55[1] = 0;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 384);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3168),
    ";",
    (const std::allocator<char> *)(v2 + 384));
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 400);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 3200),
    ",",
    (const std::allocator<char> *)(v2 + 400));
  v73._M_array = (std::initializer_list<std::string >::iterator)(v2 + 3168);
  v73._M_len = 2LL;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
  std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 416));
  std::vector<std::string>::vector(
    (std::vector<std::string> *const)(v2 + 736),
    v73,
    (const std::vector<std::string>::allocator_type *)(v2 + 416));
  v56 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
          (const std::string *)(v2 + 800),
          (const std::vector<std::string> *)(v2 + 736),
          &this->group_id_list,
          1) != 0;
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 736));
  v57 = ((v2 + 736) >> 3) + 2147450880;
  *(_WORD *)v57 = -1800;
  *(_BYTE *)(v57 + 2) = -8;
  std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 416));
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  for ( ii = (char *)(v2 + 3232); ii != (char *)(v2 + 3168); std::string::~string(ii) )
    ii -= 32;
  v59 = (_DWORD *)(((v2 + 3168) >> 3) + 2147450880);
  *v59 = -117901064;
  v59[1] = -117901064;
  std::allocator<char>::~allocator(v2 + 400);
  *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
  std::allocator<char>::~allocator(v2 + 384);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  if ( v56 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      89);
    v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2400),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v60, (const char (*)[37])byte_1AA82660);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
    *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 432);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2464),
    &byte_1AA3C720,
    (const std::allocator<char> *)(v2 + 432));
  v61 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
          row,
          (const std::string *)(v2 + 2464),
          &this->content_day) != 0;
  std::string::~string((void *)(v2 + 2464));
  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 432);
  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
  if ( v61 )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      94);
    v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 2528),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v62, (const char (*)[39])byte_1AA3C760);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
    v7 = -1;
    goto LABEL_93;
  }
  std::vector<unsigned int>::resize(&this->daily_config_id_list, 6uLL);
  array_count = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 5 )
    {
      std::vector<unsigned int>::resize(&this->daily_config_id_list, array_count);
      v7 = 0;
      goto LABEL_93;
    }
    snprintf((char *)(v2 + 3264), 0x100uLL, &byte_1AA9BFE0, i + 1);
    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 448);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 2592),
      (const char *)(v2 + 3264),
      (const std::allocator<char> *)(v2 + 448));
    v63 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 2592));
    std::string::~string((void *)(v2 + 2592));
    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 448);
    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( !v63 )
      break;
LABEL_91:
    ;
  }
  v64 = std::vector<unsigned int>::operator[](&this->daily_config_id_list, i);
  *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 464);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 2656),
    (const char *)(v2 + 3264),
    (const std::allocator<char> *)(v2 + 464));
  LOBYTE(v64) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 2656), v64) != 0;
  std::string::~string((void *)(v2 + 2656));
  *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 464);
  *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
  if ( !(_BYTE)v64 )
  {
    array_count = i + 1;
    goto LABEL_91;
  }
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
    "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
    "init",
    106);
  v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 2720),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v66 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v65, (const char (*)[14])byte_1AA2F380);
  v67 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v66, (const char (*)[256])(v2 + 3264));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v67, (const char (*)[7])byte_1AA2F3C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
  *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
  v7 = -1;
LABEL_93:
  std::string::~string((void *)(v2 + 800));
  if ( v76 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8190) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862748) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450984 - (((_DWORD)v4 + 2147450992) & 0xFFFFFFF8) + 304) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B8) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3584LL, v76);
  }
  return v7;
};

// Line 118: range 0000000012DC6134-0000000012DC75B9
int32_t __cdecl data::ActivityPlantFlowerDailyExcelConfig::init(
        data::ActivityPlantFlowerDailyExcelConfig *const this,
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
  unsigned __int64 v14; // rax
  _DWORD *v15; // rax
  bool v16; // r15
  unsigned __int64 v17; // rax
  char *j; // r14
  _DWORD *v19; // rax
  common::milog::MiLogStream *v20; // rax
  bool t; // [rsp+0h] [rbp-600h]
  bool ta; // [rsp+0h] [rbp-600h]
  uint32_t *tb; // [rsp+0h] [rbp-600h]
  bool tc; // [rsp+0h] [rbp-600h]
  uint32_t *td; // [rsp+0h] [rbp-600h]
  bool te; // [rsp+0h] [rbp-600h]
  uint32_t array_count; // [rsp+28h] [rbp-5D8h]
  uint32_t i; // [rsp+2Ch] [rbp-5D4h]
  char v30[1488]; // [rsp+30h] [rbp-5D0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1440LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 24 9 <unknown> 256 32 11 va"
                        "l_str:121 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <"
                        "unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <u"
                        "nknown> 960 32 9 <unknown> 1024 64 9 <unknown> 1120 256 12 col_name:119";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerDailyExcelConfig::init;
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
  v4[536862754] = -218959118;
  v4[536862763] = -202116109;
  v4[536862764] = -202116109;
  std::string::basic_string(v2 + 256);
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    &byte_1AA74860,
    (const std::allocator<char> *)(v2 + 48));
  t = common::tools::TxtFile::Row::assignToNum<unsigned int>(
        row,
        (const std::string *)(v2 + 320),
        &this->daily_config_id) != 0;
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "init",
      124);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v5, (const char (*)[29])byte_1AA748A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    std::vector<data::IdCountConfig>::resize(&this->cost_item_list, 5uLL);
    array_count = 0;
    for ( i = 0; i <= 4; ++i )
    {
      snprintf((char *)(v2 + 1120), 0x100uLL, asc_1AA9C200, i + 1);
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        (const char *)(v2 + 1120),
        (const std::allocator<char> *)(v2 + 64));
      ta = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !ta )
      {
        tb = &std::vector<data::IdCountConfig>::operator[](&this->cost_item_list, i)->id;
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          (const char *)(v2 + 1120),
          (const std::allocator<char> *)(v2 + 80));
        LOBYTE(tb) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 512), tb) != 0;
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)tb )
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
            "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
            "init",
            136);
          v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 576),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])byte_1AA2F380);
          v9 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v8, (const char (*)[256])(v2 + 1120));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AA2F3C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v6 = -1;
          goto LABEL_34;
        }
        snprintf((char *)(v2 + 1120), 0x100uLL, asc_1AA9C240, i + 1);
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          (const char *)(v2 + 1120),
          (const std::allocator<char> *)(v2 + 96));
        tc = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( !tc )
        {
          td = &std::vector<data::IdCountConfig>::operator[](&this->cost_item_list, i)->count;
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            (const char *)(v2 + 1120),
            (const std::allocator<char> *)(v2 + 112));
          LOBYTE(td) = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 704), td) != 0;
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)td )
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 127) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
              "init",
              144);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v10,
                    (const char (*)[14])byte_1AA2F380);
            v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v11,
                    (const char (*)[256])(v2 + 1120));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AA2F3C0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            goto LABEL_34;
          }
          array_count = i + 1;
        }
      }
    }
    std::vector<data::IdCountConfig>::resize(&this->cost_item_list, array_count);
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 128);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 832),
      &byte_1AA9C280,
      (const std::allocator<char> *)(v2 + 128));
    te = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 832), (std::string *)(v2 + 256)) != 0;
    std::string::~string((void *)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 128);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( te )
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
        "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
        "init",
        153);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AA9C2C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      v14 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v14 = 0;
      *(_BYTE *)(v14 + 2) = 0;
      v15 = (_DWORD *)(((v2 + 1024) >> 3) + 2147450880);
      *v15 = 0;
      v15[1] = 0;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 144);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1024),
        ";",
        (const std::allocator<char> *)(v2 + 144));
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1056),
        ",",
        (const std::allocator<char> *)(v2 + 160));
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v2 + 176));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v2 + 192),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v2 + 1024),
        (const std::vector<std::string>::allocator_type *)(v2 + 176));
      v16 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
              (const std::string *)(v2 + 256),
              (const std::vector<std::string> *)(v2 + 192),
              &this->reward_id_list,
              1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 192));
      v17 = ((v2 + 192) >> 3) + 2147450880;
      *(_WORD *)v17 = -1800;
      *(_BYTE *)(v17 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v2 + 176));
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      for ( j = (char *)(v2 + 1088); j != (char *)(v2 + 1024); std::string::~string(j) )
        j -= 32;
      v19 = (_DWORD *)(((v2 + 1024) >> 3) + 2147450880);
      *v19 = -117901064;
      v19[1] = -117901064;
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v2 + 144);
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      if ( v16 )
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 63) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
          "init",
          158);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v20, (const char (*)[27])byte_1AA9C2C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
  }
LABEL_34:
  std::string::~string((void *)(v2 + 256));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862731) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450916 - (((_DWORD)v4 + 2147450924) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1440LL, v30);
  }
  return v6;
};

// Line 167: range 0000000012DC75BA-0000000012DC8634
int32_t __cdecl data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
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
  data::ActivityPlantFlowerMainExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityPlantFlowerMainExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:182 64 4 9 <unknown> 80 32 9 paths:168 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 192 8 "
                        "data:185 784 376 24 debug_message_stream:193 1232 32880 12 txt_file:176";
  *(_QWORD *)(v3 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerMainExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ActivityPlantFlowerMain.txt",
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
    __asan_unpoison_stack_memory(v3 + 1232, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1232), v7) )
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
        "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
        "loadActivityPlantFlowerMainExcelConfig",
        179);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1232));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( v12 <= *(_DWORD *)(v3 + 48) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1232), *(_DWORD *)(v3 + 48));
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        v13[2] = 0;
        v13[3] = 0;
        v13[4] = 0;
        v13[5] = 0;
        data::ActivityPlantFlowerMainExcelConfig::ActivityPlantFlowerMainExcelConfig((data::ActivityPlantFlowerMainExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityPlantFlowerMainExcelConfig::init(
                 (data::ActivityPlantFlowerMainExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 784, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 784);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 784, &unk_1AA47D20);
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
              "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
              "loadActivityPlantFlowerMainExcelConfig",
              195);
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
            std::ostringstream::str(v3 + 400, v3 + 784);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 400));
            std::string::~string((void *)(v3 + 400));
            *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
            *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 784);
            __asan_poison_stack_memory(v3 + 784, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::ActivityPlantFlowerMainExcelConfig &>((data::ActivityPlantFlowerMainExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::emplace<unsigned int &,data::ActivityPlantFlowerMainExcelConfig>(
                    &this->activity_plant_flower_main_excel_config_map,
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
                "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
                "loadActivityPlantFlowerMainExcelConfig",
                200);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v28,
                      (const char (*)[17])byte_1AA47D60);
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
            "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
            "loadActivityPlantFlowerMainExcelConfig",
            188);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityPlantFlowerMainExcelConfig::~ActivityPlantFlowerMainExcelConfig((data::ActivityPlantFlowerMainExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
        v30[2] = -117901064;
        v30[3] = -117901064;
        v30[4] = -117901064;
        v30[5] = -117901064;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1232));
    __asan_poison_stack_memory(v3 + 1232, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90C0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 4296) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34368LL, v37);
  }
  return v2;
};

// Line 209: range 0000000012DC8636-0000000012DC964B
int32_t __cdecl data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
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
  data::ActivityPlantFlowerDailyExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::ActivityPlantFlowerDailyExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _DWORD *v30; // rax
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
  *(_QWORD *)(v3 + 8) = "13 32 1 9 <unknown> 48 4 5 r:224 64 4 9 <unknown> 80 32 9 paths:210 144 32 9 <unknown> 208 32 9 "
                        "<unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 64 8 d"
                        "ata:227 624 376 24 debug_message_stream:235 1072 32880 12 txt_file:218";
  *(_QWORD *)(v3 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerDailyExcelConfig;
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
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 80),
    "/txt/ActivityPlantFlowerDaily.txt",
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
        "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
        "loadActivityPlantFlowerDailyExcelConfig",
        221);
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
        v13 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v13 = 0;
        v13[1] = 0;
        data::ActivityPlantFlowerDailyExcelConfig::ActivityPlantFlowerDailyExcelConfig((data::ActivityPlantFlowerDailyExcelConfig *const)(v3 + 528));
        if ( row_ptr )
        {
          if ( data::ActivityPlantFlowerDailyExcelConfig::init(
                 (data::ActivityPlantFlowerDailyExcelConfig *const)(v3 + 528),
                 row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 624, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 624);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 624, &unk_1AA4BE80);
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
              "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
              "loadActivityPlantFlowerDailyExcelConfig",
              237);
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
            v24 = std::move<data::ActivityPlantFlowerDailyExcelConfig &>((data::ActivityPlantFlowerDailyExcelConfig *)(v3 + 528));
            v27 = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::emplace<unsigned int &,data::ActivityPlantFlowerDailyExcelConfig>(
                    &this->activity_plant_flower_daily_excel_config_map,
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
                "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
                "loadActivityPlantFlowerDailyExcelConfig",
                242);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v28,
                      (const char (*)[20])byte_1AA4BEC0);
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
            "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
            "loadActivityPlantFlowerDailyExcelConfig",
            230);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 272),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
          *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::ActivityPlantFlowerDailyExcelConfig::~ActivityPlantFlowerDailyExcelConfig((data::ActivityPlantFlowerDailyExcelConfig *const)(v3 + 528));
        v30 = (_DWORD *)(((v3 + 528) >> 3) + 2147450880);
        *v30 = -117901064;
        v30[1] = -117901064;
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

// Line 251: range 0000000012DC964C-0000000012DC9970
int32_t __cdecl data::ActivityPlantFlowerExcelConfigMgrBase::loadConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerMainExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "loadConfig",
      254);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      v5,
      (const char (*)[46])"loadActivityPlantFlowerMainExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( data::ActivityPlantFlowerExcelConfigMgrBase::loadActivityPlantFlowerDailyExcelConfig(this, config) )
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
      "./src/txt_data_auto/ActivityPlantFlowerExcelConfig.gen.cpp",
      "loadConfig",
      259);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v7,
      (const char (*)[47])"loadActivityPlantFlowerDailyExcelConfig failed");
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

// Line 266: range 0000000012DC9972-0000000012DC9984
int32_t __cdecl data::ActivityPlantFlowerExcelConfigMgrBase::rewriteConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 271: range 0000000012DC9986-0000000012DC9998
int32_t __cdecl data::ActivityPlantFlowerExcelConfigMgrBase::finalConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 276: range 0000000012DC999A-0000000012DC9B55
data::ActivityPlantFlowerMainExcelConfig *__fastcall data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPlantFlowerMainExcelConfigMap *p_activity_plant_flower_main_excel_config_map; // rdx
  data::ActivityPlantFlowerMainExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityPlantFlowerMainExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:275 64 8 8 iter:277 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_activity_plant_flower_main_excel_config_map = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::find(p_activity_plant_flower_main_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 289: range 0000000012DC9B56-0000000012DC9D11
const data::ActivityPlantFlowerMainExcelConfig *__fastcall data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
        const data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPlantFlowerMainExcelConfigMap *p_activity_plant_flower_main_excel_config_map; // rdx
  data::ActivityPlantFlowerMainExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityPlantFlowerMainExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:288 64 8 8 iter:290 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_activity_plant_flower_main_excel_config_map = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::find(p_activity_plant_flower_main_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_plant_flower_main_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerMainExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerMainExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 302: range 0000000012DC9D12-0000000012DC9ECD
data::ActivityPlantFlowerDailyExcelConfig *__fastcall data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig(
        data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        __int64 daily_config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPlantFlowerDailyExcelConfigMap *p_activity_plant_flower_daily_excel_config_map; // rdx
  data::ActivityPlantFlowerDailyExcelConfigMap *v6; // rdx
  bool v7; // al
  data::ActivityPlantFlowerDailyExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 daily_config_id:301 64 8 8 iter:303 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = daily_config_id;
  p_activity_plant_flower_daily_excel_config_map = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, daily_config_id);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::find(p_activity_plant_flower_daily_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 315: range 0000000012DC9ECE-0000000012DCA089
const data::ActivityPlantFlowerDailyExcelConfig *__fastcall data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig(
        const data::ActivityPlantFlowerExcelConfigMgrBase *const this,
        __int64 daily_config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ActivityPlantFlowerDailyExcelConfigMap *p_activity_plant_flower_daily_excel_config_map; // rdx
  data::ActivityPlantFlowerDailyExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::ActivityPlantFlowerDailyExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 daily_config_id:314 64 8 8 iter:316 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerDailyExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = daily_config_id;
  p_activity_plant_flower_daily_excel_config_map = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, daily_config_id);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::find(p_activity_plant_flower_daily_excel_config_map, (const std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->activity_plant_flower_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityPlantFlowerDailyExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityPlantFlowerDailyExcelConfig>,false,false> *const)(v2 + 64))->second;
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

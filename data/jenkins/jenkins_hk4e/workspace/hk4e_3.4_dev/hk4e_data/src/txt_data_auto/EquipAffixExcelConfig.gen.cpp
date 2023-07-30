// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/EquipAffixExcelConfig.gen.cpp

// Line 13: range 00000000142DE534-00000000142DFCE7
int32_t __cdecl data::EquipAffixExcelConfig::init(
        data::EquipAffixExcelConfig *const this,
        const common::tools::TxtFile::Row *row)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  bool v8; // r15
  data::FightPropType *p_prop_type; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool v13; // r15
  float *p_value; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool v18; // r15
  float *v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  int32_t v29; // ebx
  uint32_t array_count; // [rsp+14h] [rbp-67Ch]
  uint32_t array_counta; // [rsp+14h] [rbp-67Ch]
  uint32_t i; // [rsp+18h] [rbp-678h]
  uint32_t i_0; // [rsp+1Ch] [rbp-674h]
  char v35[1648]; // [rsp+20h] [rbp-670h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1600LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "28 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknow"
                        "n> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkn"
                        "own> 1216 32 9 <unknown> 1280 256 11 col_name:14";
  *(_QWORD *)(v2 + 16) = data::EquipAffixExcelConfig::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862768] = -202116109;
  v4[536862769] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    &byte_1AD39EA0,
    (const std::allocator<char> *)(v2 + 32));
  v5 = common::tools::TxtFile::Row::assignToStr(row, (const std::string *)(v2 + 192), &this->open_config) != 0;
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
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
      "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
      "init",
      18);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AD39F40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v7 = -1;
  }
  else
  {
    std::vector<data::PropValConfig>::resize(&this->add_props, 3uLL);
    array_count = 0;
    for ( i = 0; i <= 2; ++i )
    {
      snprintf((char *)(v2 + 1280), 0x100uLL, asc_1AD39FA0, i + 1);
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        (const char *)(v2 + 1280),
        (const std::allocator<char> *)(v2 + 48));
      v8 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v8 )
      {
        p_prop_type = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->prop_type;
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 384),
          (const char *)(v2 + 1280),
          (const std::allocator<char> *)(v2 + 64));
        LOBYTE(p_prop_type) = common::tools::TxtFile::Row::assignToEnum<data::FightPropType>(
                                row,
                                (const std::string *)(v2 + 384),
                                p_prop_type) != 0;
        std::string::~string((void *)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)p_prop_type )
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
            "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
            "init",
            30);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])byte_1AD38B80);
          v12 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v11, (const char (*)[256])(v2 + 1280));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])byte_1AD38BC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          v7 = -1;
          goto LABEL_44;
        }
        snprintf((char *)(v2 + 1280), 0x100uLL, asc_1AD39FE0, i + 1);
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          (const char *)(v2 + 1280),
          (const std::allocator<char> *)(v2 + 80));
        v13 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v13 )
        {
          p_value = &std::vector<data::PropValConfig>::operator[](&this->add_props, i)->value;
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 576),
            (const char *)(v2 + 1280),
            (const std::allocator<char> *)(v2 + 96));
          LOBYTE(p_value) = common::tools::TxtFile::Row::assignToNum<float>(
                              row,
                              (const std::string *)(v2 + 576),
                              p_value) != 0;
          std::string::~string((void *)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (_BYTE)p_value )
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
              "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
              "init",
              38);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])byte_1AD38B80);
            v17 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(
                    v16,
                    (const char (*)[256])(v2 + 1280));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])byte_1AD38BC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
            v7 = -1;
            goto LABEL_44;
          }
          array_count = i + 1;
        }
      }
    }
    std::vector<data::PropValConfig>::resize(&this->add_props, array_count);
    std::vector<float>::resize(&this->param_list, 0x14uLL);
    array_counta = 0;
    for ( i_0 = 0; i_0 <= 0x13; ++i_0 )
    {
      snprintf((char *)(v2 + 1280), 0x100uLL, &byte_1AD3A020, i_0 + 1);
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 112);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 704),
        (const char *)(v2 + 1280),
        (const std::allocator<char> *)(v2 + 112));
      v18 = !common::tools::TxtFile::Row::hasKey(row, (const std::string *)(v2 + 704));
      std::string::~string((void *)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 112);
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( !v18 )
      {
        v19 = std::vector<float>::operator[](&this->param_list, i_0);
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 128);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 768),
          (const char *)(v2 + 1280),
          (const std::allocator<char> *)(v2 + 128));
        LOBYTE(v19) = common::tools::TxtFile::Row::assignToNum<float>(row, (const std::string *)(v2 + 768), v19) != 0;
        std::string::~string((void *)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 128);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( (_BYTE)v19 )
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
            "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
            "init",
            54);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])byte_1AD38B80);
          v22 = common::milog::MiLogStream::operator<<<char [256],(char *[256])0>(v21, (const char (*)[256])(v2 + 1280));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])byte_1AD38BC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          v7 = -1;
          goto LABEL_44;
        }
        array_counta = i_0 + 1;
      }
    }
    std::vector<float>::resize(&this->param_list, array_counta);
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 144);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 896),
      "AffixID",
      (const std::allocator<char> *)(v2 + 144));
    v23 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 896), &this->affix_id) != 0;
    std::string::~string((void *)(v2 + 896));
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 144);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v23 )
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
        "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
        "init",
        63);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v24, (const char (*)[28])byte_1AD3A0A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
      v7 = -1;
    }
    else
    {
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 160);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1024),
        "ID",
        (const std::allocator<char> *)(v2 + 160));
      v25 = common::tools::TxtFile::Row::assignToNum<unsigned int>(row, (const std::string *)(v2 + 1024), &this->id) != 0;
      std::string::~string((void *)(v2 + 1024));
      *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 160);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v25 )
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
          "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
          "init",
          68);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1088),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v26, (const char (*)[23])byte_1AD3A120);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
        v7 = -1;
      }
      else
      {
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 176);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1152),
          &byte_1AD3A160,
          (const std::allocator<char> *)(v2 + 176));
        v27 = common::tools::TxtFile::Row::assignToNum<unsigned int>(
                row,
                (const std::string *)(v2 + 1152),
                &this->level) != 0;
        std::string::~string((void *)(v2 + 1152));
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 176);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        if ( v27 )
        {
          *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1216, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1216),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
            "init",
            73);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1216),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v28, (const char (*)[33])byte_1AD3A1A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
          v7 = -1;
        }
        else
        {
          v7 = 0;
        }
      }
    }
  }
LABEL_44:
  v29 = v7;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1600LL, v35);
  }
  return v29;
};

// Line 82: range 00000000142DFCE8-00000000142E0CE7
int32_t __cdecl data::EquipAffixExcelConfigMgrBase::loadEquipAffixExcelConfig(
        data::EquipAffixExcelConfigMgrBase *const this,
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
  data::EquipAffixExcelConfig *v24; // rax
  unsigned int *v25; // rcx
  data::EquipAffixExcelConfig *v26; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>,bool> v27; // rax
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
  *(_QWORD *)(v3 + 8) = "13 48 1 9 <unknown> 64 4 4 r:97 80 4 9 <unknown> 96 32 8 paths:83 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 104 8 da"
                        "ta:100 688 376 24 debug_message_stream:108 1136 32880 11 txt_file:91";
  *(_QWORD *)(v3 + 16) = data::EquipAffixExcelConfigMgrBase::loadEquipAffixExcelConfig;
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
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 96),
    "/txt/EquipAffixData.txt",
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
    __asan_unpoison_stack_memory(v3 + 1136, 32880LL);
    common::tools::TxtFile::TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    v7 = (const char *)std::string::c_str(__for_begin);
    if ( common::tools::TxtFile::load((common::tools::TxtFile *const)(v3 + 1136), v7) )
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
        "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
        "loadEquipAffixExcelConfig",
        94);
      v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[8])byte_1AD383A0);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, __for_begin);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1AD383E0);
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
        v12 = common::tools::TxtFile::rowNum((common::tools::TxtFile *const)(v3 + 1136));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( v12 <= *(_DWORD *)(v3 + 64) )
          break;
        row_ptr = common::tools::TxtFile::row((common::tools::TxtFile *const)(v3 + 1136), *(_DWORD *)(v3 + 64));
        v13 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v13 = 0;
        *(_DWORD *)(v13 + 4) = 0;
        *(_DWORD *)(v13 + 8) = 0;
        *(_BYTE *)(v13 + 12) = 0;
        data::EquipAffixExcelConfig::EquipAffixExcelConfig((data::EquipAffixExcelConfig *const)(v3 + 544));
        if ( row_ptr )
        {
          if ( data::EquipAffixExcelConfig::init((data::EquipAffixExcelConfig *const)(v3 + 544), row_ptr) )
          {
            __asan_unpoison_stack_memory(v3 + 688, 376LL);
            std::ostringstream::basic_ostringstream(v3 + 688);
            v16 = std::operator<<<std::char_traits<char>>(v3 + 688, &unk_1AD3A3A0);
            if ( *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 632) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 632);
            std::ostream::operator<<(v16, *(unsigned int *)(v3 + 632));
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
              "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
              "loadEquipAffixExcelConfig",
              110);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])"<");
            v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, __for_begin);
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v19,
                    (const char (*)[11])byte_1AD384E0);
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
                    (const char (*)[13])byte_1AD38520);
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 416, 32LL);
            }
            std::ostringstream::str(v3 + 416, v3 + 688);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)(v3 + 416));
            std::string::~string((void *)(v3 + 416));
            *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            std::ostringstream::~ostringstream(v3 + 688);
            __asan_poison_stack_memory(v3 + 688, 376LL);
            v15 = 0;
          }
          else
          {
            v24 = std::move<data::EquipAffixExcelConfig &>((data::EquipAffixExcelConfig *)(v3 + 544));
            v27 = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::emplace<unsigned int &,data::EquipAffixExcelConfig>(
                    &this->equip_affix_excel_config_map,
                    (unsigned int *)(v3 + 632),
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
                "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
                "loadEquipAffixExcelConfig",
                115);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v28,
                      (const char (*)[14])byte_1AD3A3E0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v3 + 632));
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
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
            "loadEquipAffixExcelConfig",
            103);
          v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[22])"row_ptr is null, row:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v15 = 0;
        }
        data::EquipAffixExcelConfig::~EquipAffixExcelConfig((data::EquipAffixExcelConfig *const)(v3 + 544));
        v30 = ((v3 + 544) >> 3) + 2147450880;
        *(_DWORD *)v30 = -117901064;
        *(_DWORD *)(v30 + 4) = -117901064;
        *(_DWORD *)(v30 + 8) = -117901064;
        *(_BYTE *)(v30 + 12) = -8;
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
    common::tools::TxtFile::~TxtFile((common::tools::TxtFile *const)(v3 + 1136));
    __asan_poison_stack_memory(v3 + 1136, 32880LL);
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF90B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862726) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450896 - (((_DWORD)v5 + 2147450904) & 0xFFFFFFF8) + 4268) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_10(v3, 34272LL, v37);
  }
  return v2;
};

// Line 124: range 00000000142E0CE8-00000000142E0ECB
int32_t __cdecl data::EquipAffixExcelConfigMgrBase::loadConfig(
        data::EquipAffixExcelConfigMgrBase *const this,
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
  *(_QWORD *)(v2 + 16) = data::EquipAffixExcelConfigMgrBase::loadConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( data::EquipAffixExcelConfigMgrBase::loadEquipAffixExcelConfig(this, config) )
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
      "./src/txt_data_auto/EquipAffixExcelConfig.gen.cpp",
      "loadConfig",
      127);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v5,
      (const char (*)[33])"loadEquipAffixExcelConfig failed");
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

// Line 134: range 00000000142E0ECC-00000000142E0EDE
int32_t __cdecl data::EquipAffixExcelConfigMgrBase::rewriteConfig(
        data::EquipAffixExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 139: range 00000000142E0EE0-00000000142E0EF2
int32_t __cdecl data::EquipAffixExcelConfigMgrBase::finalConfig(
        data::EquipAffixExcelConfigMgrBase *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 144: range 00000000142E0EF4-00000000142E10AF
data::EquipAffixExcelConfig *__fastcall data::EquipAffixExcelConfigMgrBase::findEquipAffixExcelConfig(
        data::EquipAffixExcelConfigMgrBase *const this,
        __int64 affix_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::EquipAffixExcelConfigMap *p_equip_affix_excel_config_map; // rdx
  data::EquipAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  data::EquipAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 affix_id:143 64 8 8 iter:145 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::EquipAffixExcelConfigMgrBase::findEquipAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = affix_id;
  p_equip_affix_excel_config_map = &this->equip_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, affix_id);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::find(
                                                                                           p_equip_affix_excel_config_map,
                                                                                           (const std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->equip_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 157: range 00000000142E10B0-00000000142E126B
const data::EquipAffixExcelConfig *__fastcall data::EquipAffixExcelConfigMgrBase::findEquipAffixExcelConfig(
        const data::EquipAffixExcelConfigMgrBase *const this,
        __int64 affix_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::EquipAffixExcelConfigMap *p_equip_affix_excel_config_map; // rdx
  data::EquipAffixExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::EquipAffixExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 affix_id:156 64 8 8 iter:158 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::EquipAffixExcelConfigMgrBase::findEquipAffixExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = affix_id;
  p_equip_affix_excel_config_map = &this->equip_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, affix_id);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::find(
                                                                                                 p_equip_affix_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->equip_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::EquipAffixExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EquipAffixExcelConfig>,false,false> *const)(v2 + 64))->second;
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

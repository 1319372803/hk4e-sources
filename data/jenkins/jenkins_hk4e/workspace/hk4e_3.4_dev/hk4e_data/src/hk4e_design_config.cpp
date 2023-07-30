// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/hk4e_design_config.cpp

// Line 36: range 000000000CCDEBCE-000000000CCE00B6
int32_t __cdecl ClientVersionConfig::loadClientVersionConfig(ClientVersionConfig *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  const char *v8; // rsi
  common::milog::MiLogStream *v9; // r14
  google::protobuf::uint32 v10; // edx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  const char *v13; // rsi
  common::milog::MiLogStream *v14; // r14
  google::protobuf::uint32 v15; // edx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  const char *v18; // rsi
  common::milog::MiLogStream *v19; // r14
  google::protobuf::uint32 v20; // edx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  bool v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  bool v33; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  bool v36; // al
  __int64 v37; // rsi
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  char *v44; // rsi
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  const char *v47; // rsi
  common::milog::MiLogStream *v48; // r14
  google::protobuf::uint32 v49; // edx
  char v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  bool v53; // al
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  const std::string *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  const std::string *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  const char *v62; // rsi
  common::milog::MiLogStream *v63; // r14
  google::protobuf::uint32 v64; // edx
  char v65; // al
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  const std::string *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  const std::string *v71; // rax
  proto::PlatformType platform; // [rsp+14h] [rbp-3BCh]
  const std::string *platform_name; // [rsp+18h] [rbp-3B8h]
  std::map<unsigned int,proto::ResVersionConfig> *__for_range; // [rsp+20h] [rbp-3B0h]
  std::map<unsigned int,proto::ResVersionConfig> *__for_range_0; // [rsp+28h] [rbp-3A8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::reference v76; // [rsp+30h] [rbp-3A0h]
  std::tuple_element<0,std::pair<unsigned int const,proto::ResVersionConfig> >::type *platform_1; // [rsp+38h] [rbp-398h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *res_config_0; // [rsp+40h] [rbp-390h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::reference v79; // [rsp+48h] [rbp-388h]
  std::tuple_element<0,std::pair<unsigned int const,proto::ResVersionConfig> >::type *platform_0; // [rsp+50h] [rbp-380h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *res_config; // [rsp+58h] [rbp-378h]
  char v82[880]; // [rsp+60h] [rbp-370h] BYREF

  v1 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(832LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "18 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 1"
                        "4 __for_begin:85 160 8 12 __for_end:85 192 8 14 __for_begin:93 224 8 12 __for_end:93 256 32 9 <u"
                        "nknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <un"
                        "known> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ClientVersionConfig::loadClientVersionConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -218959360;
  v3[536862725] = -218959360;
  v3[536862726] = -218959360;
  v3[536862727] = -218959360;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -218959118;
  v3[536862741] = -218959118;
  v3[536862743] = -218959118;
  v3[536862745] = -202116109;
  if ( ClientVersionConfig::readDataVersion(this, &HK4EDesignConfig::data_version_path[abi:cxx11]) )
  {
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadClientVersionConfig",
      40);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v4, (const char (*)[17])"readDataVersion ");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
           v5,
           &HK4EDesignConfig::data_version_path[abi:cxx11]);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
    result = -1;
  }
  else
  {
    if ( !proto::DataVersionConfig::server(&this->data_version_config) )
    {
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/hk4e_design_config.cpp",
        "loadClientVersionConfig",
        45);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)(v1 + 320),
        (const char (*)[20])"server version is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( !proto::DataVersionConfig::client(&this->data_version_config) )
    {
      *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/hk4e_design_config.cpp",
        "loadClientVersionConfig",
        49);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
        (common::milog::MiLogStream *const)(v1 + 384),
        (const char (*)[20])"client version is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
      *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( !proto::DataVersionConfig::client_silence(&this->data_version_config) )
    {
      *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/hk4e_design_config.cpp",
        "loadClientVersionConfig",
        53);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v1 + 448),
        (const char (*)[27])"client silent version is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
      *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/hk4e_design_config.cpp",
      "loadClientVersionConfig",
      55);
    v8 = "server version:";
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 512),
           (const char (*)[16])"server version:");
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    v10 = proto::DataVersionConfig::server(&this->data_version_config);
    v11 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(v1 + 48, v8);
    }
    *(_DWORD *)(v1 + 48) = v10;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
    v13 = " client version:";
    v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v12, (const char (*)[17])" client version:");
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 4;
    v15 = proto::DataVersionConfig::client(&this->data_version_config);
    v16 = *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v1 + 64, v13);
    }
    *(_DWORD *)(v1 + 64) = v15;
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 64));
    v18 = " client_silence:";
    v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])" client_silence:");
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
    v20 = proto::DataVersionConfig::client_silence(&this->data_version_config);
    v21 = *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000);
    if ( v21 != 0 && v21 <= 3 )
    {
      LOBYTE(v18) = v21 != 0;
      __asan_report_store4(v1 + 80, v18);
    }
    *(_DWORD *)(v1 + 80) = v20;
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 80));
    v23 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v22,
            (const char (*)[24])" client_version_suffix:");
    v24 = proto::DataVersionConfig::client_version_suffix[abi:cxx11](&this->data_version_config);
    v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, v24);
    v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v25,
            (const char (*)[32])" client_silence_version_suffix:");
    v27 = proto::DataVersionConfig::client_silence_version_suffix[abi:cxx11](&this->data_version_config);
    v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
    v29 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v28,
            (const char (*)[21])" data_need_relogin: ");
    v30 = proto::DataVersionConfig::relogin(&this->data_version_config);
    v31 = common::milog::MiLogStream::operator<<(v29, v30);
    v32 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v31,
            (const char (*)[24])" data_need_mp_relogin: ");
    v33 = proto::DataVersionConfig::mp_relogin(&this->data_version_config);
    v34 = common::milog::MiLogStream::operator<<(v32, v33);
    v35 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v34,
            (const char (*)[22])" gcg_forbid_relogin: ");
    v36 = proto::DataVersionConfig::gcg_forbid_relogin(&this->data_version_config);
    v37 = v36;
    common::milog::MiLogStream::operator<<(v35, v36);
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
    *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
    for ( platform = EDITOR; (unsigned int)platform <= 0x10; ++platform )
    {
      platform_name = proto::PlatformType_Name[abi:cxx11](platform);
      if ( !(unsigned __int8)std::string::empty(platform_name) )
      {
        if ( ClientVersionConfig::readResVersion(this, platform, platform_name) )
        {
          *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/hk4e_design_config.cpp",
            "loadClientVersionConfig",
            76);
          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 576),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v39 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v38,
                  (const char (*)[26])"readResVersion platform: ");
          v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, platform_name);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v40, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 576));
          result = -1;
          goto LABEL_63;
        }
        v37 = (unsigned int)platform;
        if ( ClientVersionConfig::readNextResVersion(this, platform, platform_name) )
        {
          *(_DWORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 640) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 671) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 671) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 640, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 640),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/hk4e_design_config.cpp",
            "loadClientVersionConfig",
            81);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v41,
                  (const char (*)[30])"readNextResVersion platform: ");
          v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, platform_name);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 640));
          result = -1;
          goto LABEL_63;
        }
      }
    }
    __for_range = &this->res_version_map;
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v1 + 128, v37);
    *(std::map<unsigned int,proto::ResVersionConfig>::iterator *)(v1 + 128) = std::map<unsigned int,proto::ResVersionConfig>::begin(__for_range);
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v1 + 160, v37);
    *(std::map<unsigned int,proto::ResVersionConfig>::iterator *)(v1 + 160) = std::map<unsigned int,proto::ResVersionConfig>::end(__for_range);
    while ( 1 )
    {
      v44 = (char *)(v1 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 128),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 160)) )
        break;
      v79 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 128));
      platform_0 = std::get<0ul,unsigned int const,proto::ResVersionConfig>(v79);
      res_config = (std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *)std::get<1ul,unsigned int const,proto::ResVersionConfig>(v79);
      *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/hk4e_design_config.cpp",
        "loadClientVersionConfig",
        87);
      v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)(v1 + 704),
              (const char (*)[11])"platform: ");
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, platform_0);
      v47 = " version:";
      v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])" version:");
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 4;
      v49 = proto::ResVersionConfig::version(res_config);
      v50 = *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000);
      if ( v50 != 0 && v50 <= 3 )
      {
        LOBYTE(v47) = v50 != 0;
        __asan_report_store4(v1 + 96, v47);
      }
      *(_DWORD *)(v1 + 96) = v49;
      v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v1 + 96));
      v52 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v51, (const char (*)[13])" is_relogin:");
      v53 = proto::ResVersionConfig::relogin(res_config);
      v54 = common::milog::MiLogStream::operator<<(v52, v53);
      v55 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v54, (const char (*)[17])" version_suffix:");
      v56 = proto::ResVersionConfig::version_suffix[abi:cxx11](res_config);
      v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, v56);
      v58 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v57, (const char (*)[9])" branch:");
      v59 = proto::ResVersionConfig::branch[abi:cxx11](res_config);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, v59);
      *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 704));
      *(_DWORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = -117901064;
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 128));
    }
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_0 = &this->next_res_version_map;
    *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v1 + 192, v44);
    *(std::map<unsigned int,proto::ResVersionConfig>::iterator *)(v1 + 192) = std::map<unsigned int,proto::ResVersionConfig>::begin(__for_range_0);
    *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v1 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v1 + 224, v44);
    *(std::map<unsigned int,proto::ResVersionConfig>::iterator *)(v1 + 224) = std::map<unsigned int,proto::ResVersionConfig>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 192),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v1 + 224)) )
    {
      v76 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 192));
      platform_1 = std::get<0ul,unsigned int const,proto::ResVersionConfig>(v76);
      res_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,proto::ResVersionConfig> >::type *)std::get<1ul,unsigned int const,proto::ResVersionConfig>(v76);
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/hk4e_design_config.cpp",
        "loadClientVersionConfig",
        95);
      v60 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v1 + 768),
              (const char (*)[22])"[next_res] platform: ");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, platform_1);
      v62 = " version:";
      v63 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v61, (const char (*)[10])" version:");
      *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = 4;
      v64 = proto::ResVersionConfig::version(res_config_0);
      v65 = *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000);
      if ( v65 != 0 && v65 <= 3 )
      {
        LOBYTE(v62) = v65 != 0;
        __asan_report_store4(v1 + 112, v62);
      }
      *(_DWORD *)(v1 + 112) = v64;
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v63,
              (const unsigned int *)(v1 + 112));
      v67 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v66, (const char (*)[17])" version_suffix:");
      v68 = proto::ResVersionConfig::version_suffix[abi:cxx11](res_config_0);
      v69 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, v68);
      v70 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v69, (const char (*)[9])" branch:");
      v71 = proto::ResVersionConfig::branch[abi:cxx11](res_config_0);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v70, v71);
      *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 768));
      *(_DWORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = -117901064;
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v1 + 192));
    }
    result = 0;
  }
LABEL_63:
  if ( v82 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 104: range 000000000CCE00B8-000000000CCE0C1A
__int64 __fastcall ClientVersionConfig::readResVersion(
        ClientVersionConfig *const this,
        int platform,
        const std::string *platform_name)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::ResVersionConfig *v12; // rax
  unsigned int *v13; // rcx
  proto::ResVersionConfig *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v20; // [rsp+0h] [rbp-5B0h]
  int v22; // [rsp+10h] [rbp-5A0h]
  ClientVersionConfig *thisa; // [rsp+18h] [rbp-598h]
  int v24; // [rsp+20h] [rbp-590h] BYREF
  void *v25; // [rsp+28h] [rbp-588h]
  int v26; // [rsp+30h] [rbp-580h]
  char v27; // [rsp+38h] [rbp-578h]

  v3 = (unsigned __int64)&v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 1 10 option:117 64 4 12 platform:103 80 32 13 file_name:105 144 32 9 <unknown> 208 32 9 <u"
                        "nknown> 272 32 9 <unknown> 336 32 8 line:113 400 32 9 <unknown> 464 32 9 <unknown> 528 40 10 sta"
                        "tus:119 608 72 14 res_config:116 720 520 7 ifs:106";
  *(_QWORD *)(v3 + 16) = ClientVersionConfig::readResVersion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
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
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  *(_DWORD *)(v3 + 64) = platform;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 144), &HK4EDesignConfig::res_path[abi:cxx11], "/");
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 208), (std::string *)(v3 + 144), platform_name);
  if ( *(char *)(((v3 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 80, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 80), (std::string *)(v3 + 208), "_version.txt");
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 144));
  *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
  __asan_unpoison_stack_memory(v3 + 720, 520LL);
  std::ifstream::basic_ifstream(v3 + 720, v3 + 80, 8LL);
  if ( (unsigned __int8)std::ios::operator!(v3 + 976) )
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
      2u,
      "./src/hk4e_design_config.cpp",
      "readResVersion",
      109);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 272),
           (const char (*)[29])"Not found res version file: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 336);
    std::getline<char,std::char_traits<char>,std::allocator<char>>(v3 + 720, v3 + 336);
    v8 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_BYTE *)(v8 + 8) = 0;
    proto::ResVersionConfig::ResVersionConfig((proto::ResVersionConfig *const)(v3 + 608));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v3 + 48));
    if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v3 + 48, v3 + 336, v3 + 48);
    *(_BYTE *)(v3 + 48) = 1;
    v9 = ((v3 + 528) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_BYTE *)(v9 + 4) = 0;
    if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 528, 40LL);
    }
    google::protobuf::util::JsonStringToMessage(
      (google::protobuf::util::Status *)(v3 + 528),
      v20,
      (int)platform_name,
      v22,
      (int)this,
      v24,
      v25,
      v26,
      v27);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v3 + 528)) )
    {
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
        "./src/hk4e_design_config.cpp",
        "readResVersion",
        122);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v10,
              (const char (*)[34])"JsonStringToMessage fails, line: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v3 + 336));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v12 = std::move<proto::ResVersionConfig &>((proto::ResVersionConfig *)(v3 + 608));
      v15 = std::map<unsigned int,proto::ResVersionConfig>::emplace<unsigned int &,proto::ResVersionConfig>(
              &thisa->res_version_map,
              (unsigned int *)(v3 + 64),
              v12,
              v13,
              v14);
      if ( !v15.second )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/hk4e_design_config.cpp",
          "readResVersion",
          128);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v16,
                (const char (*)[19])"emplace platform: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 528));
    proto::ResVersionConfig::~ResVersionConfig((proto::ResVersionConfig *const)(v3 + 608));
    std::string::~string((void *)(v3 + 336));
  }
  std::ifstream::~ifstream(v3 + 720);
  std::string::~string((void *)(v3 + 80));
  if ( &v24 == (int *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A8) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, &v24);
  }
  return v7;
};

// Line 135: range 000000000CCE0C1C-000000000CCE1B7D
int32_t __cdecl ClientVersionConfig::readDataVersion(ClientVersionConfig *const this, const std::string *path)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r15d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  std::string *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  __int64 v19; // rsi
  std::string *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  ClientVersionConfig *thisa; // [rsp+8h] [rbp-5E8h]
  int client_platform_md5; // [rsp+10h] [rbp-5E0h]
  google::protobuf::Map<unsigned int,std::string > *client_platform_md5a; // [rsp+10h] [rbp-5E0h]
  int __for_range; // [rsp+18h] [rbp-5D8h]
  const google::protobuf::Map<std::string,std::string > *__for_rangea; // [rsp+18h] [rbp-5D8h]
  int client_silence_platform_md5; // [rsp+20h] [rbp-5D0h]
  google::protobuf::Map<unsigned int,std::string > *client_silence_platform_md5a; // [rsp+20h] [rbp-5D0h]
  google::protobuf::Map<std::string,std::string > *__for_range_0; // [rsp+28h] [rbp-5C8h]
  const google::protobuf::Map<std::string,std::string > *__for_range_0a; // [rsp+28h] [rbp-5C8h]
  int p_name_0; // [rsp+30h] [rbp-5C0h]
  google::protobuf::Map<std::string,std::string >::const_reference p_name_0a; // [rsp+30h] [rbp-5C0h]
  char p_name; // [rsp+38h] [rbp-5B8h]
  google::protobuf::Map<std::string,std::string >::const_reference p_namea; // [rsp+38h] [rbp-5B8h]
  char v37[1456]; // [rsp+40h] [rbp-5B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 10 option:146 48 4 12 platform:155 64 4 9 <unknown> 80 4 9 <unknown> 96 24 15 __for_begi"
                        "n:157 160 24 13 __for_end:157 224 24 15 __for_begin:170 288 24 13 __for_end:170 352 32 9 <unknow"
                        "n> 416 32 8 line:143 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 40 10 status:1"
                        "48 752 520 7 ifs:136";
  *(_QWORD *)(v2 + 16) = ClientVersionConfig::readDataVersion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -234881024;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959360;
  v4[536862743] = 62194;
  v4[536862759] = -218103808;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  std::ifstream::basic_ifstream(v2 + 752, path, 8LL);
  if ( (unsigned __int8)std::ios::operator!(v2 + 1008) )
  {
    if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/hk4e_design_config.cpp",
      "readDataVersion",
      139);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 352),
           (const char (*)[28])"can not open version_path: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, path);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v6 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 416);
    std::getline<char,std::char_traits<char>,std::allocator<char>>(v2 + 752, v2 + 416);
    google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v2 + 32));
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 32, v2 + 416, v2 + 32);
    *(_BYTE *)(v2 + 32) = 1;
    if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 711) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 57) & 7) >= *(_BYTE *)(((v2 + 711) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 672, 40LL);
    }
    google::protobuf::util::JsonStringToMessage(
      (google::protobuf::util::Status *)(v2 + 672),
      (int)path,
      (int)this,
      client_platform_md5,
      __for_range,
      client_silence_platform_md5,
      __for_range_0,
      p_name_0,
      p_name);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 672)) )
    {
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
        "./src/hk4e_design_config.cpp",
        "readDataVersion",
        151);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 480),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             v7,
             (const char (*)[34])"JsonStringToMessage fails, line: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 416));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else
    {
      client_platform_md5a = proto::DataVersionConfig::mutable_client_platform_md5[abi:cxx11](&thisa->data_version_config);
      __for_rangea = proto::DataVersionConfig::client_md5[abi:cxx11](&thisa->data_version_config);
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 119) & 7) >= *(_BYTE *)(((v2 + 119) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 24LL);
      }
      google::protobuf::Map<std::string,std::string>::begin(
        (google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 96),
        __for_rangea);
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 183) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 73) & 7) >= *(_BYTE *)(((v2 + 183) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 24LL);
      }
      google::protobuf::Map<std::string,std::string>::end(
        (google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 160),
        __for_rangea);
      while ( google::protobuf::operator!=(
                (const google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 96),
                (const google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 160)) )
      {
        p_namea = google::protobuf::Map<std::string,std::string>::const_iterator::operator*((const google::protobuf::Map<std::string,std::string >::const_iterator *const)(v2 + 96));
        if ( !proto::PlatformType_Parse(&p_namea->first, (proto::PlatformType *)(v2 + 48)) )
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
            1u,
            "./src/hk4e_design_config.cpp",
            "readDataVersion",
            162);
          v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                 (common::milog::MiLogStream *const)(v2 + 544),
                 (const char (*)[7])"name: ");
          v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &p_namea->first);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v10, (const char (*)[28])byte_1A17B020);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v11 = *(unsigned int *)(v2 + 48);
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 64, v11);
          *(_DWORD *)(v2 + 64) = v11;
          v12 = google::protobuf::Map<unsigned int,std::string>::operator[](
                  client_platform_md5a,
                  (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v2 + 64));
          std::string::operator=(v12, &p_namea->second);
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        }
        google::protobuf::Map<std::string,std::string>::const_iterator::operator++((google::protobuf::Map<std::string,std::string >::const_iterator *const)(v2 + 96));
      }
      v13 = ((v2 + 96) >> 3) + 2147450880;
      *(_WORD *)v13 = -1800;
      *(_BYTE *)(v13 + 2) = -8;
      v14 = ((v2 + 160) >> 3) + 2147450880;
      *(_WORD *)v14 = -1800;
      *(_BYTE *)(v14 + 2) = -8;
      proto::DataVersionConfig::clear_client_md5(&thisa->data_version_config);
      client_silence_platform_md5a = proto::DataVersionConfig::mutable_client_silence_platform_md5[abi:cxx11](&thisa->data_version_config);
      __for_range_0a = proto::DataVersionConfig::client_silence_md5[abi:cxx11](&thisa->data_version_config);
      v15 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v15 = 0;
      *(_BYTE *)(v15 + 2) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 247) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 9) & 7) >= *(_BYTE *)(((v2 + 247) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 24LL);
      }
      google::protobuf::Map<std::string,std::string>::begin(
        (google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 224),
        __for_range_0a);
      v16 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 311) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 55) & 7) >= *(_BYTE *)(((v2 + 311) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 24LL);
      }
      google::protobuf::Map<std::string,std::string>::end(
        (google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 288),
        __for_range_0a);
      while ( google::protobuf::operator!=(
                (const google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 224),
                (const google::protobuf::Map<std::string,std::string >::const_iterator *)(v2 + 288)) )
      {
        p_name_0a = google::protobuf::Map<std::string,std::string>::const_iterator::operator*((const google::protobuf::Map<std::string,std::string >::const_iterator *const)(v2 + 224));
        if ( !proto::PlatformType_Parse(&p_name_0a->first, (proto::PlatformType *)(v2 + 48)) )
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
            1u,
            "./src/hk4e_design_config.cpp",
            "readDataVersion",
            175);
          v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[7])"name: ");
          v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &p_name_0a->first);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v18, (const char (*)[28])byte_1A17B020);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v19 = *(unsigned int *)(v2 + 48);
          if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 80, v19);
          *(_DWORD *)(v2 + 80) = v19;
          v20 = google::protobuf::Map<unsigned int,std::string>::operator[](
                  client_silence_platform_md5a,
                  (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v2 + 80));
          std::string::operator=(v20, &p_name_0a->second);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        }
        google::protobuf::Map<std::string,std::string>::const_iterator::operator++((google::protobuf::Map<std::string,std::string >::const_iterator *const)(v2 + 224));
      }
      v21 = ((v2 + 224) >> 3) + 2147450880;
      *(_WORD *)v21 = -1800;
      *(_BYTE *)(v21 + 2) = -8;
      v22 = ((v2 + 288) >> 3) + 2147450880;
      *(_WORD *)v22 = -1800;
      *(_BYTE *)(v22 + 2) = -8;
      proto::DataVersionConfig::clear_client_silence_md5(&thisa->data_version_config);
      v6 = 0;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 672));
    std::string::~string((void *)(v2 + 416));
  }
  std::ifstream::~ifstream(v2 + 752);
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v37);
  }
  return v6;
};

// Line 186: range 000000000CCE1B7E-000000000CCE26E0
__int64 __fastcall ClientVersionConfig::readNextResVersion(
        ClientVersionConfig *const this,
        int platform,
        const std::string *platform_name)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  proto::ResVersionConfig *v12; // rax
  unsigned int *v13; // rcx
  proto::ResVersionConfig *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v20; // [rsp+0h] [rbp-5B0h]
  int v22; // [rsp+10h] [rbp-5A0h]
  ClientVersionConfig *thisa; // [rsp+18h] [rbp-598h]
  int v24; // [rsp+20h] [rbp-590h] BYREF
  void *v25; // [rsp+28h] [rbp-588h]
  int v26; // [rsp+30h] [rbp-580h]
  char v27; // [rsp+38h] [rbp-578h]

  v3 = (unsigned __int64)&v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1376LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 1 10 option:199 64 4 12 platform:185 80 32 13 file_name:187 144 32 9 <unknown> 208 32 9 <u"
                        "nknown> 272 32 9 <unknown> 336 32 8 line:195 400 32 9 <unknown> 464 32 9 <unknown> 528 40 10 sta"
                        "tus:201 608 72 14 res_config:198 720 520 7 ifs:188";
  *(_QWORD *)(v3 + 16) = ClientVersionConfig::readNextResVersion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
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
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862758] = -218103808;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  v5[536862761] = -202116109;
  v5[536862762] = -202116109;
  *(_DWORD *)(v3 + 64) = platform;
  if ( *(char *)(((v3 + 144) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 175) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 144, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 144), &HK4EDesignConfig::res_path[abi:cxx11], "/");
  if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 208, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 208), (std::string *)(v3 + 144), platform_name);
  if ( *(char *)(((v3 + 80) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 111) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 80, 32LL);
  }
  std::operator+<char>((std::string *)(v3 + 80), (std::string *)(v3 + 208), "_next_version.txt");
  std::string::~string((void *)(v3 + 208));
  *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
  std::string::~string((void *)(v3 + 144));
  *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
  __asan_unpoison_stack_memory(v3 + 720, 520LL);
  std::ifstream::basic_ifstream(v3 + 720, v3 + 80, 8LL);
  if ( (unsigned __int8)std::ios::operator!(v3 + 976) )
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
      2u,
      "./src/hk4e_design_config.cpp",
      "readNextResVersion",
      191);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v3 + 272),
           (const char (*)[29])"Not found res version file: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v7 = 0;
  }
  else
  {
    *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 336);
    std::getline<char,std::char_traits<char>,std::allocator<char>>(v3 + 720, v3 + 336);
    v8 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_BYTE *)(v8 + 8) = 0;
    proto::ResVersionConfig::ResVersionConfig((proto::ResVersionConfig *const)(v3 + 608));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    google::protobuf::util::JsonParseOptions::JsonParseOptions((google::protobuf::util::JsonParseOptions *const)(v3 + 48));
    if ( *(char *)(((v3 + 48) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v3 + 48, v3 + 336, v3 + 48);
    *(_BYTE *)(v3 + 48) = 1;
    v9 = ((v3 + 528) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_BYTE *)(v9 + 4) = 0;
    if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 567) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 528, 40LL);
    }
    google::protobuf::util::JsonStringToMessage(
      (google::protobuf::util::Status *)(v3 + 528),
      v20,
      (int)platform_name,
      v22,
      (int)this,
      v24,
      v25,
      v26,
      v27);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v3 + 528)) )
    {
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
        "./src/hk4e_design_config.cpp",
        "readNextResVersion",
        204);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 400),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v10,
              (const char (*)[34])"JsonStringToMessage fails, line: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v3 + 336));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      v7 = -1;
    }
    else
    {
      v12 = std::move<proto::ResVersionConfig &>((proto::ResVersionConfig *)(v3 + 608));
      v15 = std::map<unsigned int,proto::ResVersionConfig>::emplace<unsigned int &,proto::ResVersionConfig>(
              &thisa->next_res_version_map,
              (unsigned int *)(v3 + 64),
              v12,
              v13,
              v14);
      if ( !v15.second )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/hk4e_design_config.cpp",
          "readNextResVersion",
          210);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v16,
                (const char (*)[19])"emplace platform: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v3 + 528));
    proto::ResVersionConfig::~ResVersionConfig((proto::ResVersionConfig *const)(v3 + 608));
    std::string::~string((void *)(v3 + 336));
  }
  std::ifstream::~ifstream(v3 + 720);
  std::string::~string((void *)(v3 + 80));
  if ( &v24 == (int *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A8) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1376LL, &v24);
  }
  return v7;
};

// Line 217: range 000000000CCE26E2-000000000CCE26FB
uint32_t __cdecl ClientVersionConfig::getServerDataVersion(ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::server(&this->data_version_config);
};

// Line 222: range 000000000CCE26FC-000000000CCE2715
uint32_t __cdecl ClientVersionConfig::getClientDataVersion(ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::client(&this->data_version_config);
};

// Line 227: range 000000000CCE2716-000000000CCE272F
uint32_t __cdecl ClientVersionConfig::getClientSilenceDataVersion(ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::client_silence(&this->data_version_config);
};

// Line 232: range 000000000CCE2730-000000000CCE2749
bool __cdecl ClientVersionConfig::isDataVersionNeedRelogin(const ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::relogin(&this->data_version_config);
};

// Line 237: range 000000000CCE274A-000000000CCE2763
bool __cdecl ClientVersionConfig::isDataVersionNeedMpRelogin(const ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::mp_relogin(&this->data_version_config);
};

// Line 242: range 000000000CCE2764-000000000CCE277D
bool __cdecl ClientVersionConfig::isDataVersionNeedGCGForbidRelogin(const ClientVersionConfig *const this)
{
  return proto::DataVersionConfig::gcg_forbid_relogin(&this->data_version_config);
};

// Line 247: range 000000000CCE277E-000000000CCE27B1
std::string *__cdecl ClientVersionConfig::getClientVersionSuffix[abi:cxx11](
        std::string *retstr,
        ClientVersionConfig *const this)
{
  const std::string *v2; // rdx

  v2 = proto::DataVersionConfig::client_version_suffix[abi:cxx11](&this->data_version_config);
  std::string::basic_string(retstr, v2);
  return retstr;
};

// Line 252: range 000000000CCE27B2-000000000CCE27E5
std::string *__cdecl ClientVersionConfig::getClientSilenceVersionSuffix[abi:cxx11](
        std::string *retstr,
        ClientVersionConfig *const this)
{
  const std::string *v2; // rdx

  v2 = proto::DataVersionConfig::client_silence_version_suffix[abi:cxx11](&this->data_version_config);
  std::string::basic_string(retstr, v2);
  return retstr;
};

// Line 257: range 000000000CCE27E6-000000000CCE2AE7
void __fastcall ClientVersionConfig::findClientVersionMd5(
        ClientVersionConfig *const this,
        __int64 platform,
        unsigned __int64 client_version,
        std::string *md5)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  google::protobuf::uint32 v7; // ecx
  char v8; // dl
  bool v9; // al
  unsigned __int64 v10; // rdx
  google::protobuf::Map<unsigned int,std::string >::const_pointer v11; // rax
  const google::protobuf::Map<unsigned int,std::string > *md5_map; // [rsp+28h] [rbp-E8h]
  char v15[224]; // [rsp+30h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 platform:256 64 24 8 iter:260 128 24 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ClientVersionConfig::findClientVersionMd5;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = platform;
  v7 = proto::DataVersionConfig::client(&this->data_version_config);
  v8 = *(_BYTE *)((client_version >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((client_version & 7) + 3) >= v8 )
  {
    LOBYTE(platform) = v8 != 0;
    __asan_report_store4(client_version, platform);
  }
  *(_DWORD *)client_version = v7;
  md5_map = proto::DataVersionConfig::client_platform_md5[abi:cxx11](&this->data_version_config);
  if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 87) & 7) >= *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 64, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::find(
    (google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 64),
    md5_map,
    (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v4 + 48));
  if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 128, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::end(
    (google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 128),
    md5_map);
  v9 = google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 64),
         (const google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 128));
  v10 = ((v4 + 128) >> 3) + 2147450880;
  *(_WORD *)v10 = -1800;
  *(_BYTE *)(v10 + 2) = -8;
  if ( v9 )
  {
    v11 = google::protobuf::Map<unsigned int,std::string>::const_iterator::operator->((const google::protobuf::Map<unsigned int,std::string >::const_iterator *const)(v4 + 64));
    std::string::operator=(md5, &v11->second);
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 268: range 000000000CCE2AE8-000000000CCE2DE9
void __fastcall ClientVersionConfig::findClientSilenceVersionMd5(
        ClientVersionConfig *const this,
        __int64 platform,
        unsigned __int64 client_silence_version,
        std::string *md5)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  google::protobuf::uint32 v7; // ecx
  char v8; // dl
  bool v9; // al
  unsigned __int64 v10; // rdx
  google::protobuf::Map<unsigned int,std::string >::const_pointer v11; // rax
  const google::protobuf::Map<unsigned int,std::string > *md5_map; // [rsp+28h] [rbp-E8h]
  char v15[224]; // [rsp+30h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 platform:267 64 24 8 iter:271 128 24 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ClientVersionConfig::findClientSilenceVersionMd5;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234881024;
  v6[536862723] = -218959118;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = platform;
  v7 = proto::DataVersionConfig::client_silence(&this->data_version_config);
  v8 = *(_BYTE *)((client_silence_version >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((client_silence_version & 7) + 3) >= v8 )
  {
    LOBYTE(platform) = v8 != 0;
    __asan_report_store4(client_silence_version, platform);
  }
  *(_DWORD *)client_silence_version = v7;
  md5_map = proto::DataVersionConfig::client_silence_platform_md5[abi:cxx11](&this->data_version_config);
  if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 87) & 7) >= *(_BYTE *)(((v4 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 64, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::find(
    (google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 64),
    md5_map,
    (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v4 + 48));
  if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 105) & 7) >= *(_BYTE *)(((v4 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 128, 24LL);
  }
  google::protobuf::Map<unsigned int,std::string>::end(
    (google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 128),
    md5_map);
  v9 = google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 64),
         (const google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v4 + 128));
  v10 = ((v4 + 128) >> 3) + 2147450880;
  *(_WORD *)v10 = -1800;
  *(_BYTE *)(v10 + 2) = -8;
  if ( v9 )
  {
    v11 = google::protobuf::Map<unsigned int,std::string>::const_iterator::operator->((const google::protobuf::Map<unsigned int,std::string >::const_iterator *const)(v4 + 64));
    std::string::operator=(md5, &v11->second);
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 279: range 000000000CCE2DEA-000000000CCE30F7
const proto::ResVersionConfig *__fastcall ClientVersionConfig::findResVersionConfig(
        const ClientVersionConfig *const this,
        __int64 platform)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,proto::ResVersionConfig> *p_res_version_map; // rdx
  std::map<unsigned int,proto::ResVersionConfig> *v6; // rdx
  bool v7; // al
  const proto::ResVersionConfig *result; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 platform:278 64 8 8 iter:285 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ClientVersionConfig::findResVersionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = platform;
  if ( TxtConfigMgr::isCloudPlatform(*(_DWORD *)(v2 + 48)) )
    *(_DWORD *)(v2 + 48) = 3;
  p_res_version_map = &this->res_version_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, platform);
  *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                   p_res_version_map,
                                                                                   (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)(v2 + 48));
  v6 = &this->res_version_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,proto::ResVersionConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 64))->second;
  }
  else
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
      2u,
      "./src/hk4e_design_config.cpp",
      "findResVersionConfig",
      290);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[40])"find platform version failed, platform:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 295: range 000000000CCE30F8-000000000CCE3137
uint32_t __cdecl ClientVersionConfig::getResVersion(const ClientVersionConfig *const this, uint32_t platform)
{
  const proto::ResVersionConfig *res_config_ptr; // [rsp+18h] [rbp-8h]

  res_config_ptr = ClientVersionConfig::findResVersionConfig(this, platform);
  if ( res_config_ptr )
    return proto::ResVersionConfig::version(res_config_ptr);
  else
    return 0;
};

// Line 305: range 000000000CCE3138-000000000CCE3445
const proto::ResVersionConfig *__fastcall ClientVersionConfig::findNextResVersionConfig(
        const ClientVersionConfig *const this,
        __int64 platform)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,proto::ResVersionConfig> *p_next_res_version_map; // rdx
  std::map<unsigned int,proto::ResVersionConfig> *v6; // rdx
  bool v7; // al
  const proto::ResVersionConfig *result; // rax
  common::milog::MiLogStream *v9; // rax
  char v10[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 platform:304 64 8 8 iter:311 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ClientVersionConfig::findNextResVersionConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = platform;
  if ( TxtConfigMgr::isCloudPlatform(*(_DWORD *)(v2 + 48)) )
    *(_DWORD *)(v2 + 48) = 3;
  p_next_res_version_map = &this->next_res_version_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, platform);
  *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,proto::ResVersionConfig>::find(
                                                                                   p_next_res_version_map,
                                                                                   (const std::map<unsigned int,proto::ResVersionConfig>::key_type *)(v2 + 48));
  v6 = &this->next_res_version_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,proto::ResVersionConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,proto::ResVersionConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::ResVersionConfig> > *const)(v2 + 64))->second;
  }
  else
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
      2u,
      "./src/hk4e_design_config.cpp",
      "findNextResVersionConfig",
      316);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[40])"find platform version failed, platform:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  if ( v10 == (char *)v2 )
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

// Line 321: range 000000000CCE3446-000000000CCE3B70
int32_t __cdecl HK4EDesignConfig::init(
        HK4EDesignConfig *const this,
        ScriptLibBasePtr *p_script_lib_ptr,
        const Flag<ConfigOption> *flag)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  char v12[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 16 9 <unknown> 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 25"
                        "6 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = HK4EDesignConfig::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_flag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_flag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_flag, p_script_lib_ptr);
  }
  if ( *(_BYTE *)(((unsigned __int64)flag >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)flag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(flag);
  }
  this->config_flag = (Flag<ConfigOption>)flag->options;
  if ( std::operator==<ScriptLibBase>(p_script_lib_ptr, 0LL) )
  {
    if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    common::tools::perf::make_shared<ScriptLibBase>();
    std::shared_ptr<ScriptLibBase>::operator=(p_script_lib_ptr, (std::shared_ptr<ScriptLibBase> *)(v3 + 32));
    std::shared_ptr<ScriptLibBase>::~shared_ptr((std::shared_ptr<ScriptLibBase> *const)(v3 + 32));
    *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
  }
  if ( std::operator==<ScriptLibBase>(p_script_lib_ptr, 0LL) )
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
      "./src/hk4e_design_config.cpp",
      "init",
      332);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v6, (const char (*)[26])"script_lib_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = -1;
  }
  else
  {
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<ScriptLibBase>::shared_ptr((std::shared_ptr<ScriptLibBase> *const)(v3 + 64), p_script_lib_ptr);
    v8 = LuaConfigMgr::init(&this->lua_config_mgr, (ScriptLibBasePtr *)(v3 + 64)) != 0;
    std::shared_ptr<ScriptLibBase>::~shared_ptr((std::shared_ptr<ScriptLibBase> *const)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( v8 )
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
        "./src/hk4e_design_config.cpp",
        "init",
        338);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v9,
        (const char (*)[27])"lua_config_mgr init failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = -1;
    }
    else
    {
      if ( std::operator==<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
      {
        *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        common::tools::perf::make_shared<GCGConfigMgr>();
        std::shared_ptr<GCGConfigMgr>::operator=(&this->gcg_config_mgr_ptr, (std::shared_ptr<GCGConfigMgr> *)(v3 + 96));
        std::shared_ptr<GCGConfigMgr>::~shared_ptr((std::shared_ptr<GCGConfigMgr> *const)(v3 + 96));
        *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
      }
      if ( std::operator==<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
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
          "./src/hk4e_design_config.cpp",
          "init",
          347);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          v10,
          (const char (*)[30])"gcg_config_mgr_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v12 == (char *)v3 )
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

// Line 354: range 000000000CCE3B72-000000000CCE3B9E
void __cdecl HK4EDesignConfig::setItemOutputLimitMap(
        HK4EDesignConfig *const this,
        const std::map<unsigned int,ItemOutputLimitConfig> *item_limit_map)
{
  std::map<unsigned int,ItemOutputLimitConfig>::operator=(&this->item_output_limit_map, item_limit_map);
};

// Line 360: range 000000000CCE3BA0-000000000CCE3D61
const ItemOutputLimitConfig *__fastcall HK4EDesignConfig::findItemOutputLimitConfig(
        const HK4EDesignConfig *const this,
        __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,ItemOutputLimitConfig> *p_item_output_limit_map; // rdx
  std::map<unsigned int,ItemOutputLimitConfig> *v6; // rdx
  bool v7; // al
  const ItemOutputLimitConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 item_id:359 64 8 8 iter:361 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::findItemOutputLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_item_output_limit_map = &this->item_output_limit_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::map<unsigned int,ItemOutputLimitConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,ItemOutputLimitConfig>::find(
                                                                                 p_item_output_limit_map,
                                                                                 (const std::map<unsigned int,ItemOutputLimitConfig>::key_type *)(v2 + 48));
  v6 = &this->item_output_limit_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,ItemOutputLimitConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,ItemOutputLimitConfig>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ItemOutputLimitConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ItemOutputLimitConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,ItemOutputLimitConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ItemOutputLimitConfig> > *const)(v2 + 64))->second;
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

// Line 370: range 000000000CCE3D62-000000000CCE49B2
int32_t __cdecl HK4EDesignConfig::tryGetReadLink(
        HK4EDesignConfig *const this,
        bool is_readlink,
        const std::string *link,
        std::string *out_link)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int *v16; // rax
  int *v17; // rdx
  char v18; // cl
  const char *v19; // rsi
  __int64 v20; // rax
  int v21; // r14d
  const char *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  int *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int *v31; // rax
  int *v32; // rdx
  char v33; // cl
  const char *v34; // rsi
  __int64 v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  int *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  int *v45; // rax
  int *v46; // rdx
  char v47; // cl
  const char *v48; // rsi
  __int64 v49; // rax
  int v50; // eax
  int32_t v54; // [rsp+10h] [rbp-6E0h]
  char v55[1744]; // [rsp+20h] [rbp-6D0h] BYREF

  v4 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1696LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 13 try_count:376 48 8 9 <unknown> 80 8 9 <unknown> 112 8 9 <unknown> 144 32 9 <unknown> 2"
                        "08 32 9 <unknown> 272 32 9 <unknown> 336 144 12 dir_stat:371 544 1024 7 buf:392";
  *(_QWORD *)(v4 + 16) = HK4EDesignConfig::tryGetReadLink;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862735] = -218959118;
  v6[536862736] = -218959118;
  v6[536862769] = -202116109;
  v6[536862770] = -202116109;
  v6[536862771] = -202116109;
  v6[536862772] = -202116109;
  std::string::operator=(out_link, link);
  if ( !is_readlink )
    goto LABEL_51;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 32, link);
  *(_DWORD *)(v4 + 32) = 0;
  do
  {
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 32);
    if ( *(_DWORD *)(v4 + 32) > 2u )
      break;
    v7 = (char *)std::string::c_str(link);
    if ( (int)lstat(v7, (struct stat *)(v4 + 336)) >= 0 )
    {
      if ( *(_BYTE *)(((v4 + 360) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 360) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 360);
      if ( (*(_DWORD *)(v4 + 360) & 0xF000) == 40960 )
      {
        __asan_unpoison_stack_memory(v4 + 544, 1024LL);
        if ( *(char *)(((v4 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 127) & 7) >= *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 544, 1024LL);
        }
        *(_QWORD *)(v4 + 544) = 0LL;
        *(_QWORD *)(v4 + 552) = 0LL;
        memset((void *)(v4 + 560), 0, 0x3F0uLL);
        v22 = (const char *)std::string::c_str(link);
        if ( readlink(v22, (char *)(v4 + 544), 0x3FFuLL) >= 0 )
        {
          std::string::operator=(out_link, v4 + 544);
          v21 = 1;
        }
        else
        {
          if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 32);
          ++*(_DWORD *)(v4 + 32);
          *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 208) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 96 + 79) & 7) >= *(_BYTE *)(((v4 + 239) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 208, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 208),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/hk4e_design_config.cpp",
            "tryGetReadLink",
            396);
          v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  (common::milog::MiLogStream *const)(v4 + 208),
                  (const char (*)[32])"readlink fail! try again! link:");
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, link);
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])" try_count:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v4 + 32));
          v27 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v26, (const char (*)[8])" errno:");
          v28 = __errno_location();
          v29 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, v28);
          v34 = " err_msg:";
          v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" err_msg:");
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 0;
          v31 = __errno_location();
          v32 = v31;
          v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
          LOBYTE(v34) = v33 != 0;
          if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
            __asan_report_load4(v31);
          v35 = (__int64)strerror(*v32);
          if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
            v35 = __asan_report_store8(v4 + 80, v34);
          *(_QWORD *)(v4 + 80) = v35;
          common::milog::MiLogStream::operator<<<char *,(char **)0>(v30, (char *const *)(v4 + 80));
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 208));
          *(_DWORD *)(((v4 + 208) >> 3) + 0x7FFF8000) = -117901064;
          usleep(0xBB8u);
          v21 = 0;
        }
      }
      else
      {
        v21 = 1;
      }
    }
    else
    {
      if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 32);
      ++*(_DWORD *)(v4 + 32);
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 112 + 31) & 7) >= *(_BYTE *)(((v4 + 175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/hk4e_design_config.cpp",
        "tryGetReadLink",
        382);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             (common::milog::MiLogStream *const)(v4 + 144),
             (const char (*)[29])"lstat fail! try again! link:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, link);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" try_count:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" errno:");
      v13 = __errno_location();
      v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, v13);
      v19 = " err_msg:";
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" err_msg:");
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 0;
      v16 = __errno_location();
      v17 = v16;
      v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      LOBYTE(v19) = v18 != 0;
      if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
        __asan_report_load4(v16);
      v20 = (__int64)strerror(*v17);
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_store8(v4 + 48, v19);
      *(_QWORD *)(v4 + 48) = v20;
      common::milog::MiLogStream::operator<<<char *,(char **)0>(v15, (char *const *)(v4 + 48));
      *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 144));
      *(_DWORD *)(((v4 + 144) >> 3) + 0x7FFF8000) = -117901064;
      usleep(0xBB8u);
      v21 = 0;
    }
    __asan_poison_stack_memory(v4 + 544, 1024LL);
  }
  while ( !v21 );
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 32);
  if ( *(_DWORD *)(v4 + 32) <= 2u )
  {
    v50 = 1;
  }
  else
  {
    *(_DWORD *)(((v4 + 272) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 47) & 7) >= *(_BYTE *)(((v4 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "tryGetReadLink",
      405);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 272),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v36,
            (const char (*)[21])"readlink fail! link:");
    v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, link);
    v39 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v38, (const char (*)[12])" try_count:");
    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 32));
    v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" errno:");
    v42 = __errno_location();
    v43 = common::milog::MiLogStream::operator<<<int,(int *)0>(v41, v42);
    v48 = " err_msg:";
    v44 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v43, (const char (*)[10])" err_msg:");
    *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 0;
    v45 = __errno_location();
    v46 = v45;
    v47 = *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000);
    LOBYTE(v48) = v47 != 0;
    if ( v47 != 0 && (char)(((unsigned __int8)v45 & 7) + 3) >= v47 )
      __asan_report_load4(v45);
    v49 = (__int64)strerror(*v46);
    if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) )
      v49 = __asan_report_store8(v4 + 112, v48);
    *(_QWORD *)(v4 + 112) = v49;
    common::milog::MiLogStream::operator<<<char *,(char **)0>(v44, (char *const *)(v4 + 112));
    *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 272));
    v54 = -1;
    v50 = 0;
  }
  if ( v50 == 1 )
LABEL_51:
    v54 = 0;
  if ( v55 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450940 - (((_DWORD)v6 + 2147450948) & 0xFFFFFFF8) + 152) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1696LL, v55);
  }
  return v54;
};

// Line 414: range 000000000CCE49B4-000000000CCE4BE2
int32_t __cdecl HK4EDesignConfig::setRealResBaseDir(HK4EDesignConfig *const this, bool is_readlink)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int ret_code; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::setRealResBaseDir;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  ret_code = HK4EDesignConfig::tryGetReadLink(
               this,
               is_readlink,
               &HK4EDesignConfig::res_path[abi:cxx11],
               &this->real_res_base_dir);
  if ( ret_code )
  {
    result = ret_code;
  }
  else
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
      1u,
      "./src/hk4e_design_config.cpp",
      "setRealResBaseDir",
      418);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[18])"now res base dir:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->real_res_base_dir);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" is_readlink:");
    common::milog::MiLogStream::operator<<(v8, is_readlink);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 423: range 000000000CCE4BE4-000000000CCE4E21
int32_t __cdecl HK4EDesignConfig::setRealDataBaseDir(HK4EDesignConfig *const this, bool is_readlink)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int ret_code; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::setRealDataBaseDir;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  ret_code = HK4EDesignConfig::tryGetReadLink(
               this,
               is_readlink,
               &HK4EDesignConfig::data_base_dir[abi:cxx11],
               &this->real_data_base_dir);
  if ( ret_code )
  {
    result = ret_code;
  }
  else
  {
    HK4EDesignConfig::modifyRelativeDir(this);
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "setRealDataBaseDir",
      429);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[21])"now config base dir:");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->real_data_base_dir);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" is_readlink:");
    common::milog::MiLogStream::operator<<(v8, is_readlink);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 437: range 000000000CCE4E22-000000000CCE67CA
void __cdecl HK4EDesignConfig::modifyRelativeDir(HK4EDesignConfig *const this)
{
  std::string *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::string *p_scene_lua_base_behind_dir; // rdi
  std::string *p_real_data_base_dir; // rsi
  const std::string *p_gadget_lua_base_behind_dir; // rdi
  std::string *v7; // rsi
  const std::string *p_monster_lua_base_behind_dir; // rdi
  std::string *v9; // rsi
  const std::string *p_quest_lua_base_behind_dir; // rdi
  std::string *v11; // rsi
  const std::string *p_rand_task_lua_base_behind_dir; // rdi
  std::string *v13; // rsi
  const std::string *p_activity_lua_base_behind_dir; // rdi
  std::string *v15; // rsi
  const std::string *p_common_lua_base_behind_dir; // rdi
  std::string *v17; // rsi
  std::string *v18; // rsi
  const std::string *p_json_config_base_behind_dir; // rdi
  std::string *v20; // rsi
  const std::string *p_ability_json_base_behind_dir; // rdi
  std::string *v22; // rsi
  const std::string *p_avatar_json_base_behind_dir; // rdi
  std::string *v24; // rsi
  const std::string *p_monster_json_base_behind_dir; // rdi
  std::string *v26; // rsi
  const std::string *p_gadget_json_base_behind_dir; // rdi
  std::string *v28; // rsi
  const std::string *p_talent_json_base_behind_dir; // rdi
  std::string *v30; // rsi
  const std::string *p_scene_npc_born_json_base_behind_dir; // rdi
  std::string *v32; // rsi
  const std::string *p_common_combat_json_base_behind_dir; // rdi
  std::string *v34; // rsi
  const std::string *p_level_json_base_behind_dir; // rdi
  std::string *v36; // rsi
  const std::string *p_ability_group_json_base_behind_dir; // rdi
  std::string *v38; // rsi
  const std::string *p_coop_json_base_behind_dir; // rdi
  std::string *v40; // rsi
  const std::string *p_furniture_suite_json_base_behind_dir; // rdi
  std::string *v42; // rsi
  const std::string *p_metalua_base_behind_dir; // rdi
  std::string *v44; // rsi
  const std::string *p_furniture_group_json_base_behind_dir; // rdi
  std::string *v46; // rsi
  const std::string *p_home_scene_auto_gen_json_base_behind_dir; // rdi
  std::string *v48; // rsi
  const std::string *p_gcg_card_ai_behind_dir; // rdi
  std::string *v50; // rsi
  const std::string *p_dummy_points_base_behind_dir; // rdi
  std::string *v52; // rsi
  char v54[1664]; // [rsp+10h] [rbp-680h] BYREF

  v1 = (std::string *)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1632LL);
    if ( v2 )
      v1 = (std::string *)v2;
  }
  v1->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v1->_M_string_length = (std::string::size_type)"25 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unk"
                                                 "nown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                                                 " <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736"
                                                 " 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown"
                                                 "> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 "
                                                 "<unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1"
                                                 "440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  v1->_anon_0._M_allocated_capacity = (std::string::size_type)HK4EDesignConfig::modifyRelativeDir;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -218959118;
  v3[536862740] = -218959118;
  v3[536862742] = -218959118;
  v3[536862744] = -218959118;
  v3[536862746] = -218959118;
  v3[536862748] = -218959118;
  v3[536862750] = -218959118;
  v3[536862752] = -218959118;
  v3[536862754] = -218959118;
  v3[536862756] = -218959118;
  v3[536862758] = -218959118;
  v3[536862760] = -218959118;
  v3[536862762] = -218959118;
  v3[536862764] = -218959118;
  v3[536862766] = -218959118;
  v3[536862768] = -218959118;
  v3[536862770] = -202116109;
  p_scene_lua_base_behind_dir = &this->scene_lua_base_behind_dir;
  p_real_data_base_dir = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[1]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    p_real_data_base_dir = (std::string *)32;
    p_scene_lua_base_behind_dir = v1 + 1;
    __asan_report_store_n(&v1[1], 32LL);
  }
  std::operator+<char>(v1 + 1, p_real_data_base_dir, p_scene_lua_base_behind_dir);
  std::string::operator=(this, &v1[1]);
  std::string::~string(&v1[1]);
  *(_DWORD *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = 0;
  p_gadget_lua_base_behind_dir = &this->gadget_lua_base_behind_dir;
  v7 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[3]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v7 = (std::string *)32;
    p_gadget_lua_base_behind_dir = v1 + 3;
    __asan_report_store_n(&v1[3], 32LL);
  }
  std::operator+<char>(v1 + 3, v7, p_gadget_lua_base_behind_dir);
  std::string::operator=(&this->gadget_lua_base_dir, &v1[3]);
  std::string::~string(&v1[3]);
  *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = 0;
  p_monster_lua_base_behind_dir = &this->monster_lua_base_behind_dir;
  v9 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[5]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v9 = (std::string *)32;
    p_monster_lua_base_behind_dir = v1 + 5;
    __asan_report_store_n(&v1[5], 32LL);
  }
  std::operator+<char>(v1 + 5, v9, p_monster_lua_base_behind_dir);
  std::string::operator=(&this->monster_lua_base_dir, &v1[5]);
  std::string::~string(&v1[5]);
  *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = 0;
  p_quest_lua_base_behind_dir = &this->quest_lua_base_behind_dir;
  v11 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[7]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v11 = (std::string *)32;
    p_quest_lua_base_behind_dir = v1 + 7;
    __asan_report_store_n(&v1[7], 32LL);
  }
  std::operator+<char>(v1 + 7, v11, p_quest_lua_base_behind_dir);
  std::string::operator=(&this->quest_lua_base_dir, &v1[7]);
  std::string::~string(&v1[7]);
  *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = 0;
  p_rand_task_lua_base_behind_dir = &this->rand_task_lua_base_behind_dir;
  v13 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[9]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[9]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v13 = (std::string *)32;
    p_rand_task_lua_base_behind_dir = v1 + 9;
    __asan_report_store_n(&v1[9], 32LL);
  }
  std::operator+<char>(v1 + 9, v13, p_rand_task_lua_base_behind_dir);
  std::string::operator=(&this->rand_task_lua_base_dir, &v1[9]);
  std::string::~string(&v1[9]);
  *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) = 0;
  p_activity_lua_base_behind_dir = &this->activity_lua_base_behind_dir;
  v15 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[11]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[11]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v15 = (std::string *)32;
    p_activity_lua_base_behind_dir = v1 + 11;
    __asan_report_store_n(&v1[11], 32LL);
  }
  std::operator+<char>(v1 + 11, v15, p_activity_lua_base_behind_dir);
  std::string::operator=(&this->activity_lua_base_dir, &v1[11]);
  std::string::~string(&v1[11]);
  *(_DWORD *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[13] >> 3) + 0x7FFF8000) = 0;
  p_common_lua_base_behind_dir = &this->common_lua_base_behind_dir;
  v17 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[13] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[13]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[13]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v17 = (std::string *)32;
    p_common_lua_base_behind_dir = v1 + 13;
    __asan_report_store_n(&v1[13], 32LL);
  }
  std::operator+<char>(v1 + 13, v17, p_common_lua_base_behind_dir);
  std::string::operator=(&this->common_lua_base_dir, &v1[13]);
  std::string::~string(&v1[13]);
  *(_DWORD *)(((unsigned __int64)&v1[13] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[15] >> 3) + 0x7FFF8000) = 0;
  v18 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[15] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[15]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[15]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v18 = (std::string *)32;
    __asan_report_store_n(&v1[15], 32LL);
  }
  std::operator+<char>(v1 + 15, v18, &HK4EDesignConfig::lua_base_behind_dir[abi:cxx11]);
  std::string::operator=(&this->lua_base_dir, &v1[15]);
  std::string::~string(&v1[15]);
  *(_DWORD *)(((unsigned __int64)&v1[15] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[17] >> 3) + 0x7FFF8000) = 0;
  p_json_config_base_behind_dir = &this->json_config_base_behind_dir;
  v20 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[17] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[17]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[17]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v20 = (std::string *)32;
    p_json_config_base_behind_dir = v1 + 17;
    __asan_report_store_n(&v1[17], 32LL);
  }
  std::operator+<char>(v1 + 17, v20, p_json_config_base_behind_dir);
  std::string::operator=(&this->json_config_base_dir, &v1[17]);
  std::string::~string(&v1[17]);
  *(_DWORD *)(((unsigned __int64)&v1[17] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[19] >> 3) + 0x7FFF8000) = 0;
  p_ability_json_base_behind_dir = &this->ability_json_base_behind_dir;
  v22 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[19] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[19]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[19]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v22 = (std::string *)32;
    p_ability_json_base_behind_dir = v1 + 19;
    __asan_report_store_n(&v1[19], 32LL);
  }
  std::operator+<char>(v1 + 19, v22, p_ability_json_base_behind_dir);
  std::string::operator=(&this->ability_json_base_dir, &v1[19]);
  std::string::~string(&v1[19]);
  *(_DWORD *)(((unsigned __int64)&v1[19] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[21] >> 3) + 0x7FFF8000) = 0;
  p_avatar_json_base_behind_dir = &this->avatar_json_base_behind_dir;
  v24 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[21] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[21]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[21]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v24 = (std::string *)32;
    p_avatar_json_base_behind_dir = v1 + 21;
    __asan_report_store_n(&v1[21], 32LL);
  }
  std::operator+<char>(v1 + 21, v24, p_avatar_json_base_behind_dir);
  std::string::operator=(&this->avatar_json_base_dir, &v1[21]);
  std::string::~string(&v1[21]);
  *(_DWORD *)(((unsigned __int64)&v1[21] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[23] >> 3) + 0x7FFF8000) = 0;
  p_monster_json_base_behind_dir = &this->monster_json_base_behind_dir;
  v26 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[23] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[23]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[23]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v26 = (std::string *)32;
    p_monster_json_base_behind_dir = v1 + 23;
    __asan_report_store_n(&v1[23], 32LL);
  }
  std::operator+<char>(v1 + 23, v26, p_monster_json_base_behind_dir);
  std::string::operator=(&this->monster_json_base_dir, &v1[23]);
  std::string::~string(&v1[23]);
  *(_DWORD *)(((unsigned __int64)&v1[23] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[25] >> 3) + 0x7FFF8000) = 0;
  p_gadget_json_base_behind_dir = &this->gadget_json_base_behind_dir;
  v28 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[25] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[25]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[25]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v28 = (std::string *)32;
    p_gadget_json_base_behind_dir = v1 + 25;
    __asan_report_store_n(&v1[25], 32LL);
  }
  std::operator+<char>(v1 + 25, v28, p_gadget_json_base_behind_dir);
  std::string::operator=(&this->gadget_json_base_dir, &v1[25]);
  std::string::~string(&v1[25]);
  *(_DWORD *)(((unsigned __int64)&v1[25] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[27] >> 3) + 0x7FFF8000) = 0;
  p_talent_json_base_behind_dir = &this->talent_json_base_behind_dir;
  v30 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[27] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[27]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[27]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v30 = (std::string *)32;
    p_talent_json_base_behind_dir = v1 + 27;
    __asan_report_store_n(&v1[27], 32LL);
  }
  std::operator+<char>(v1 + 27, v30, p_talent_json_base_behind_dir);
  std::string::operator=(&this->talent_json_base_dir, &v1[27]);
  std::string::~string(&v1[27]);
  *(_DWORD *)(((unsigned __int64)&v1[27] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[29] >> 3) + 0x7FFF8000) = 0;
  p_scene_npc_born_json_base_behind_dir = &this->scene_npc_born_json_base_behind_dir;
  v32 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[29] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[29]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[29]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v32 = (std::string *)32;
    p_scene_npc_born_json_base_behind_dir = v1 + 29;
    __asan_report_store_n(&v1[29], 32LL);
  }
  std::operator+<char>(v1 + 29, v32, p_scene_npc_born_json_base_behind_dir);
  std::string::operator=(&this->scene_npc_born_json_base_dir, &v1[29]);
  std::string::~string(&v1[29]);
  *(_DWORD *)(((unsigned __int64)&v1[29] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[31] >> 3) + 0x7FFF8000) = 0;
  p_common_combat_json_base_behind_dir = &this->common_combat_json_base_behind_dir;
  v34 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[31] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[31]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[31]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v34 = (std::string *)32;
    p_common_combat_json_base_behind_dir = v1 + 31;
    __asan_report_store_n(&v1[31], 32LL);
  }
  std::operator+<char>(v1 + 31, v34, p_common_combat_json_base_behind_dir);
  std::string::operator=(&this->common_combat_json_base_dir, &v1[31]);
  std::string::~string(&v1[31]);
  *(_DWORD *)(((unsigned __int64)&v1[31] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[33] >> 3) + 0x7FFF8000) = 0;
  p_level_json_base_behind_dir = &this->level_json_base_behind_dir;
  v36 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[33] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[33]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[33]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v36 = (std::string *)32;
    p_level_json_base_behind_dir = v1 + 33;
    __asan_report_store_n(&v1[33], 32LL);
  }
  std::operator+<char>(v1 + 33, v36, p_level_json_base_behind_dir);
  std::string::operator=(&this->level_json_base_dir, &v1[33]);
  std::string::~string(&v1[33]);
  *(_DWORD *)(((unsigned __int64)&v1[33] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[35] >> 3) + 0x7FFF8000) = 0;
  p_ability_group_json_base_behind_dir = &this->ability_group_json_base_behind_dir;
  v38 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[35] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[35]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[35]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v38 = (std::string *)32;
    p_ability_group_json_base_behind_dir = v1 + 35;
    __asan_report_store_n(&v1[35], 32LL);
  }
  std::operator+<char>(v1 + 35, v38, p_ability_group_json_base_behind_dir);
  std::string::operator=(&this->ability_group_json_base_dir, &v1[35]);
  std::string::~string(&v1[35]);
  *(_DWORD *)(((unsigned __int64)&v1[35] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[37] >> 3) + 0x7FFF8000) = 0;
  p_coop_json_base_behind_dir = &this->coop_json_base_behind_dir;
  v40 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[37] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[37]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[37]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v40 = (std::string *)32;
    p_coop_json_base_behind_dir = v1 + 37;
    __asan_report_store_n(&v1[37], 32LL);
  }
  std::operator+<char>(v1 + 37, v40, p_coop_json_base_behind_dir);
  std::string::operator=(&this->coop_json_base_dir, &v1[37]);
  std::string::~string(&v1[37]);
  *(_DWORD *)(((unsigned __int64)&v1[37] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[39] >> 3) + 0x7FFF8000) = 0;
  p_furniture_suite_json_base_behind_dir = &this->furniture_suite_json_base_behind_dir;
  v42 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[39] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[39]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[39]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v42 = (std::string *)32;
    p_furniture_suite_json_base_behind_dir = v1 + 39;
    __asan_report_store_n(&v1[39], 32LL);
  }
  std::operator+<char>(v1 + 39, v42, p_furniture_suite_json_base_behind_dir);
  std::string::operator=(&this->furniture_suite_json_base_dir, &v1[39]);
  std::string::~string(&v1[39]);
  *(_DWORD *)(((unsigned __int64)&v1[39] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[41] >> 3) + 0x7FFF8000) = 0;
  p_metalua_base_behind_dir = &this->metalua_base_behind_dir;
  v44 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[41] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[41]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[41]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v44 = (std::string *)32;
    p_metalua_base_behind_dir = v1 + 41;
    __asan_report_store_n(&v1[41], 32LL);
  }
  std::operator+<char>(v1 + 41, v44, p_metalua_base_behind_dir);
  std::string::operator=(&this->metalua_base_dir, &v1[41]);
  std::string::~string(&v1[41]);
  *(_DWORD *)(((unsigned __int64)&v1[41] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[43] >> 3) + 0x7FFF8000) = 0;
  p_furniture_group_json_base_behind_dir = &this->furniture_group_json_base_behind_dir;
  v46 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[43] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[43]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[43]._anon_0._M_allocated_capacity + 15) >> 3)
                                                     + 0x7FFF8000) )
  {
    v46 = (std::string *)32;
    p_furniture_group_json_base_behind_dir = v1 + 43;
    __asan_report_store_n(&v1[43], 32LL);
  }
  std::operator+<char>(v1 + 43, v46, p_furniture_group_json_base_behind_dir);
  std::string::operator=(&this->furniture_group_json_base_dir, &v1[43]);
  std::string::~string(&v1[43]);
  *(_DWORD *)(((unsigned __int64)&v1[43] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[45] >> 3) + 0x7FFF8000) = 0;
  p_home_scene_auto_gen_json_base_behind_dir = &this->home_scene_auto_gen_json_base_behind_dir;
  v48 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[45] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[45]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[45]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v48 = (std::string *)32;
    p_home_scene_auto_gen_json_base_behind_dir = v1 + 45;
    __asan_report_store_n(&v1[45], 32LL);
  }
  std::operator+<char>(v1 + 45, v48, p_home_scene_auto_gen_json_base_behind_dir);
  std::string::operator=(&this->home_scene_auto_gen_json_base_dir, &v1[45]);
  std::string::~string(&v1[45]);
  *(_DWORD *)(((unsigned __int64)&v1[45] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[47] >> 3) + 0x7FFF8000) = 0;
  p_gcg_card_ai_behind_dir = &this->gcg_card_ai_behind_dir;
  v50 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[47] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[47]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[47]._anon_0._M_allocated_capacity + 15) >> 3)
                                                   + 0x7FFF8000) )
  {
    v50 = (std::string *)32;
    p_gcg_card_ai_behind_dir = v1 + 47;
    __asan_report_store_n(&v1[47], 32LL);
  }
  std::operator+<char>(v1 + 47, v50, p_gcg_card_ai_behind_dir);
  std::string::operator=(&this->gcg_card_ai_base_dir, &v1[47]);
  std::string::~string(&v1[47]);
  *(_DWORD *)(((unsigned __int64)&v1[47] >> 3) + 0x7FFF8000) = -117901064;
  *(_DWORD *)(((unsigned __int64)&v1[49] >> 3) + 0x7FFF8000) = 0;
  p_dummy_points_base_behind_dir = &this->dummy_points_base_behind_dir;
  v52 = &this->real_data_base_dir;
  if ( *(char *)(((unsigned __int64)&v1[49] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v1[49]._anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[49]._anon_0._M_allocated_capacity + 15) >> 3)
                                                    + 0x7FFF8000) )
  {
    v52 = (std::string *)32;
    p_dummy_points_base_behind_dir = v1 + 49;
    __asan_report_store_n(&v1[49], 32LL);
  }
  std::operator+<char>(v1 + 49, v52, p_dummy_points_base_behind_dir);
  std::string::operator=(&this->dummy_points_base_dir, &v1[49]);
  std::string::~string(&v1[49]);
  if ( v54 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF80BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 196) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    v1->_M_dataplus._M_p = (std::string::pointer)1172321806;
    __asan_stack_free_5(v1, 1632LL, v54);
  }
};

// Line 467: range 000000000CCE67CC-000000000CCE70B5
int32_t __cdecl HK4EDesignConfig::loadDesignConfig(
        HK4EDesignConfig *const this,
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *p_mysql_mgr_ptr,
        const HK4EDesignConfig *prev_design_config_ptr,
        bool is_readlink)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  char v17[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 16 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = HK4EDesignConfig::loadDesignConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -218959118;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -202116109;
  if ( HK4EDesignConfig::setRealDataBaseDir(this, is_readlink) )
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadDesignConfig",
      470);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])"setRealDataBaseDir failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = -1;
  }
  else if ( HK4EDesignConfig::setRealResBaseDir(this, is_readlink) )
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadDesignConfig",
      476);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v9, (const char (*)[25])"setRealResBaseDir failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    result = -1;
  }
  else
  {
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
      (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)(v4 + 32),
      p_mysql_mgr_ptr);
    v10 = HK4EDesignConfig::loadConfig(this, (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)(v4 + 32)) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)(v4 + 32));
    *(_WORD *)(((v4 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v10 )
    {
      *(_DWORD *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadDesignConfig",
        482);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])"loadConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      result = -1;
    }
    else if ( HK4EDesignConfig::rewriteConfig(this) )
    {
      *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadDesignConfig",
        487);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])"rewriteConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
      result = -1;
    }
    else if ( HK4EDesignConfig::checkConfig(this) )
    {
      *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadDesignConfig",
        492);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v13, (const char (*)[19])"checkConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
      result = -1;
    }
    else if ( HK4EDesignConfig::finalConfig(this, prev_design_config_ptr) )
    {
      *(_DWORD *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadDesignConfig",
        497);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v14, (const char (*)[19])"finalConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 504: range 000000000CCE70B6-000000000CCE70D6
void __cdecl HK4EDesignConfig::fini(HK4EDesignConfig *const this)
{
  LuaConfigMgr::clear(&this->lua_config_mgr);
};

// Line 509: range 000000000CCE70D8-000000000CCE7BC9
int32_t __cdecl HK4EDesignConfig::loadConfig(
        HK4EDesignConfig *const this,
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *p_mysql_mgr_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdx
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t ret; // [rsp+1Ch] [rbp-234h]
  char v19[560]; // [rsp+20h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 16 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  v5 = ((_BYTE)this - 94) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_load_version_config >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_load_version_config >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->is_load_version_config, v5, v6);
  if ( this->is_load_version_config && ClientVersionConfig::loadClientVersionConfig(&this->version_config) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadConfig",
      512);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v8,
      (const char (*)[30])"loadClientVersionConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  else
  {
    ret = 0;
    if ( HK4EDesignConfig::loadTxtData(this) )
    {
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
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        519);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])"loadTxtData fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( HK4EDesignConfig::loadJsonData(this) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        524);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])"loadJsonData fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
      (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)(v2 + 32),
      p_mysql_mgr_ptr);
    v12 = HK4EDesignConfig::loadDbData(this, (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)(v2 + 32)) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)(v2 + 32));
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v12 )
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
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        530);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])"loadDbData failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( HK4EDesignConfig::loadScript(this) )
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
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        536);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])"loadScript fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( HK4EDesignConfig::loadXmlData(this) )
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
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        541);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])"loadXmlData fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( HK4EDesignConfig::loadGCGConfig(this) )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "loadConfig",
        546);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v16, (const char (*)[20])"loadGCGConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      ret = -1;
    }
    result = ret;
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 554: range 000000000CCE7BCA-000000000CCE8427
int32_t __cdecl HK4EDesignConfig::loadTxtData(HK4EDesignConfig *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // r14
  float v6; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1BCh]
  char v11[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 timer:555 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = HK4EDesignConfig::loadTxtData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  ret = 0;
  if ( TxtConfigMgr::loadConfig(&this->txt_config_mgr, this) )
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadTxtData",
      561);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])"loadData fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ret )
  {
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadTxtData",
      576);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(v8, (const char (*)[93])byte_1A17C0A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "loadTxtData",
      572);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           (common::milog::MiLogStream *const)(v1 + 256),
           (const char (*)[56])byte_1A17C000);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    v6 = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96)) / 1000.0;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48, byte_1A17C000);
    *(float *)(v1 + 48) = v6;
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, (const float *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1A17C060);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  result = ret;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 583: range 000000000CCE8428-000000000CCE8CA7
int32_t __cdecl HK4EDesignConfig::loadJsonData(HK4EDesignConfig *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // r14
  float v6; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1BCh]
  char v11[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 timer:584 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = HK4EDesignConfig::loadJsonData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  ret = 0;
  if ( JsonConfigMgr::loadAllJson(&this->json_config_mgr, this) )
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadJsonData",
      590);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v4, (const char (*)[18])"loadAllJson fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ret )
  {
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadJsonData",
      605);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [92],(char *[92])0>(v8, (const char (*)[92])byte_1A17C320);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "loadJsonData",
      601);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           (common::milog::MiLogStream *const)(v1 + 256),
           (const char (*)[56])byte_1A17C280);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    v6 = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96)) / 1000.0;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48, byte_1A17C280);
    *(float *)(v1 + 48) = v6;
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, (const float *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1A17C2E0);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
    *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  result = ret;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 612: range 000000000CCE8CA8-000000000CCE9796
int32_t __cdecl HK4EDesignConfig::loadDbData(
        HK4EDesignConfig *const this,
        std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *p_mysql_mgr_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  float v11; // xmm0_4
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-23Ch]
  char v16[560]; // [rsp+30h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 timer:625 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::loadDbData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  if ( std::operator==<common::midb::MySqlMgrT<std::mutex>>(0LL, p_mysql_mgr_ptr) )
  {
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
      "./src/hk4e_design_config.cpp",
      "loadDbData",
      615);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"mysql_mgr_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_mysql_mgr_ptr);
    if ( !common::midb::MySqlMgrT<std::mutex>::isInit(v7) )
    {
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/hk4e_design_config.cpp",
        "loadDbData",
        621);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[42])"mysql_mgr_ptr not init, ignore loadDbData");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      v6 = 0;
    }
    else
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
      ret = 0;
      v8 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_mysql_mgr_ptr);
      if ( DbConfigMgr::loadConfig(&this->db_config_mgr, 0xFFFFFFFF, v8, &this->config_flag) )
      {
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
          "./src/hk4e_design_config.cpp",
          "loadDbData",
          631);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          v9,
          (const char (*)[32])"db_config_mgr.loadConfig failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( ret )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/hk4e_design_config.cpp",
          "loadDbData",
          646);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [90],(char *[90])0>(v13, (const char (*)[90])byte_1A17C660);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
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
          1u,
          "./src/hk4e_design_config.cpp",
          "loadDbData",
          642);
        v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[55])byte_1A17C600);
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v11 = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96))
            / 1000.0;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48, byte_1A17C600);
        *(float *)(v2 + 48) = v11;
        v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, (const float *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v12, (const char (*)[29])byte_1A17C2E0);
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
      v6 = ret;
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
    }
  }
  result = v6;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 654: range 000000000CCE9798-000000000CCEA16D
int32_t __cdecl HK4EDesignConfig::loadScript(HK4EDesignConfig *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // r14
  float v6; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1FCh]
  char v11[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 timer:655 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = HK4EDesignConfig::loadScript;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  ret = 0;
  if ( LuaConfigMgr::loadAllScript(&this->lua_config_mgr, this) )
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadScript",
      661);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v4, (const char (*)[20])"loadAllScript fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ret )
  {
    *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadScript",
      681);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(v8, (const char (*)[94])byte_1A17C8A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
    *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "loadScript",
      677);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v1 + 320),
           (const char (*)[57])byte_1A17C840);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    v6 = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96)) / 1000.0;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48, byte_1A17C840);
    *(float *)(v1 + 48) = v6;
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, (const float *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1A17C060);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  result = ret;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 688: range 000000000CCEA16E-000000000CCEAB43
int32_t __cdecl HK4EDesignConfig::loadXmlData(HK4EDesignConfig *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // r14
  float v6; // xmm0_4
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1FCh]
  char v11[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 9 <unknown> 64 8 9 <unknown> 96 16 9 timer:689 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = HK4EDesignConfig::loadXmlData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  ret = 0;
  if ( XmlConfigMgr::loadAllXml(&this->xml_config_mgr, this) )
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadXmlData",
      695);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v4, (const char (*)[17])"loadAllXml fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    *(_DWORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( ret )
  {
    *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "loadXmlData",
      715);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 384),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(v8, (const char (*)[94])byte_1A17CB40);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
    *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
  }
  else
  {
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "loadXmlData",
      711);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v1 + 320),
           (const char (*)[57])byte_1A17CAE0);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
    v6 = (float)common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 96)) / 1000.0;
    if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v1 + 48, byte_1A17CAE0);
    *(float *)(v1 + 48) = v6;
    v7 = common::milog::MiLogStream::operator<<<float,(float *)0>(v5, (const float *)(v1 + 48));
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v7, (const char (*)[30])byte_1A17C060);
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
    *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 96));
  result = ret;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 721: range 000000000CCEAB44-000000000CCEAB97
int32_t __cdecl HK4EDesignConfig::loadGCGConfig(HK4EDesignConfig *const this)
{
  GCGConfigMgr *v1; // rdx

  if ( !std::operator!=<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
    return 0;
  v1 = std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gcg_config_mgr_ptr);
  return GCGConfigMgr::loadConfig(v1, this);
};

// Line 730: range 000000000CCEAB98-000000000CCEB4CF
int32_t __cdecl HK4EDesignConfig::rewriteConfig(HK4EDesignConfig *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GCGConfigMgr *v9; // rdx
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  char v14[448]; // [rsp+20h] [rbp-1C0h] BYREF

  v1 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)HK4EDesignConfig::rewriteConfig;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -202116109;
  ret = 0;
  if ( TxtConfigMgr::rewriteConfig(&this->txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteConfig",
      734);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v4, (const char (*)[78])byte_1A17CC60);
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    *(_DWORD *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( JsonConfigMgr::rewriteConfig(&this->json_config_mgr, this) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteConfig",
      739);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v5, (const char (*)[79])byte_1A17CCE0);
    common::milog::MiLogStream::~MiLogStream(v1 + 3);
    *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( DbConfigMgr::rewriteConfig(&this->db_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteConfig",
      745);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v6, (const char (*)[77])byte_1A17CD60);
    common::milog::MiLogStream::~MiLogStream(v1 + 5);
    *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( LuaConfigMgr::rewriteConfig(&this->lua_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteConfig",
      751);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v7, (const char (*)[78])byte_1A17CDE0);
    common::milog::MiLogStream::~MiLogStream(v1 + 7);
    *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( XmlConfigMgr::rewriteConfig(&this->xml_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteConfig",
      756);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v8, (const char (*)[78])byte_1A17CE60);
    common::milog::MiLogStream::~MiLogStream(v1 + 9);
    *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( std::operator!=<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gcg_config_mgr_ptr);
    if ( GCGConfigMgr::rewriteConfig(v9, this) )
    {
      *(_DWORD *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[11], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "rewriteConfig",
        761);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v1 + 11,
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v11, (const char (*)[81])byte_1A17CEE0);
      common::milog::MiLogStream::~MiLogStream(v1 + 11);
      ret = -1;
    }
  }
  result = ret;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 768: range 000000000CCEB4D0-000000000CCEBE18
int32_t __cdecl HK4EDesignConfig::checkConfig(HK4EDesignConfig *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GCGConfigMgr *v9; // rdx
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  char v14[448]; // [rsp+20h] [rbp-1C0h] BYREF

  v1 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(416LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)HK4EDesignConfig::checkConfig;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -202116109;
  ret = 0;
  if ( TxtConfigMgr::checkConfig(&this->txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "checkConfig",
      772);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v4, (const char (*)[78])byte_1A17CF60);
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    *(_DWORD *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( JsonConfigMgr::checkConfig(&this->json_config_mgr, this) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "checkConfig",
      777);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v5, (const char (*)[79])byte_1A17CFE0);
    common::milog::MiLogStream::~MiLogStream(v1 + 3);
    *(_DWORD *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( DbConfigMgr::checkConfig(&this->db_config_mgr, &this->txt_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "checkConfig",
      783);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v6, (const char (*)[77])byte_1A17D060);
    common::milog::MiLogStream::~MiLogStream(v1 + 5);
    *(_DWORD *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( LuaConfigMgr::checkConfig(&this->lua_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 96 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "checkConfig",
      789);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v7, (const char (*)[78])byte_1A17D0E0);
    common::milog::MiLogStream::~MiLogStream(v1 + 7);
    *(_DWORD *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( XmlConfigMgr::checkConfig(&this->xml_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "checkConfig",
      794);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v8, (const char (*)[78])byte_1A17D160);
    common::milog::MiLogStream::~MiLogStream(v1 + 9);
    *(_DWORD *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( std::operator!=<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
  {
    v9 = std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gcg_config_mgr_ptr);
    if ( GCGConfigMgr::checkConfig(v9, this) )
    {
      *(_DWORD *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[11], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/hk4e_design_config.cpp",
        "checkConfig",
        799);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v1 + 11,
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v11, (const char (*)[81])byte_1A17D1E0);
      common::milog::MiLogStream::~MiLogStream(v1 + 11);
      ret = -1;
    }
  }
  result = ret;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 806: range 000000000CCEBE1A-000000000CCEC758
int32_t __cdecl HK4EDesignConfig::finalConfig(
        HK4EDesignConfig *const this,
        const HK4EDesignConfig *prev_design_config_ptr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  GCGConfigMgr *v10; // rdx
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1C4h]
  char v15[448]; // [rsp+20h] [rbp-1C0h] BYREF

  v2 = (common::milog::MiLogStream *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"6 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)HK4EDesignConfig::finalConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  if ( TxtConfigMgr::finalConfig(&this->txt_config_mgr) )
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
      "./src/hk4e_design_config.cpp",
      "finalConfig",
      810);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v5, (const char (*)[78])byte_1A17D260);
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( JsonConfigMgr::finalConfig(&this->json_config_mgr, prev_design_config_ptr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = 0;
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
      "./src/hk4e_design_config.cpp",
      "finalConfig",
      815);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(v6, (const char (*)[79])byte_1A17D2E0);
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( DbConfigMgr::finalConfig(&this->db_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = 0;
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
      "./src/hk4e_design_config.cpp",
      "finalConfig",
      821);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v7, (const char (*)[77])byte_1A17D360);
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( LuaConfigMgr::finalConfig(&this->lua_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = 0;
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
      "./src/hk4e_design_config.cpp",
      "finalConfig",
      827);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v8, (const char (*)[78])byte_1A17D3E0);
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( XmlConfigMgr::finalConfig(&this->xml_config_mgr) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = 0;
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
      "./src/hk4e_design_config.cpp",
      "finalConfig",
      832);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v9, (const char (*)[78])byte_1A17D460);
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( std::operator!=<GCGConfigMgr>(&this->gcg_config_mgr_ptr, 0LL) )
  {
    v10 = std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGConfigMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gcg_config_mgr_ptr);
    if ( GCGConfigMgr::finalConfig(v10, this) )
    {
      *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = 0;
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
        "./src/hk4e_design_config.cpp",
        "finalConfig",
        837);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v2 + 11,
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v12, (const char (*)[81])byte_1A17D4E0);
      common::milog::MiLogStream::~MiLogStream(v2 + 11);
      ret = -1;
    }
  }
  result = ret;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 844: range 000000000CCEC75A-000000000CCECC1F
__int64 __fastcall HK4EDesignConfig::rewriteVisionConfig(
        HK4EDesignConfig *const this,
        data::VisionLevelType type,
        uint32_t grid_width,
        uint32_t vision_range)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::array<unsigned int,6>::size_type v7; // r14
  std::array<unsigned int,6>::size_type v8; // r14
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  int v12; // r14d
  std::array<unsigned int,6>::size_type v13; // rsi
  std::array<unsigned int,6>::reference v14; // rax
  _DWORD *v15; // rdx
  char v16; // cl
  int v17; // r14d
  std::array<unsigned int,6>::size_type v18; // rsi
  std::array<unsigned int,6>::reference v19; // rax
  _DWORD *v20; // rdx
  char v21; // cl
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  char v29[272]; // [rsp+20h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 8 type:843 64 4 14 grid_width:843 80 4 16 vision_range:843 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = HK4EDesignConfig::rewriteVisionConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = type;
  *(_DWORD *)(v4 + 64) = grid_width;
  *(_DWORD *)(v4 + 80) = vision_range;
  if ( *(int *)(v4 + 48) < 0
    || (v7 = *(int *)(v4 + 48), v7 >= std::array<unsigned int,6ul>::size(&this->scene_grid_width_array))
    || (v8 = *(int *)(v4 + 48), v8 >= std::array<unsigned int,6ul>::size(&this->scene_sight_range_array)) )
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "rewriteVisionConfig",
      847);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)(v4 + 96),
            (const char (*)[27])"VisionLevelType is invalid");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v10,
      (const data::VisionLevelType *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = *(_DWORD *)(v4 + 64);
    v13 = *(unsigned int *)(v4 + 48);
    v14 = std::array<unsigned int,6ul>::operator[](&this->scene_grid_width_array, v13);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13);
    }
    *v15 = v12;
    v17 = *(_DWORD *)(v4 + 80);
    v18 = *(unsigned int *)(v4 + 48);
    v19 = std::array<unsigned int,6ul>::operator[](&this->scene_sight_range_array, v18);
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
    {
      LOBYTE(v18) = v21 != 0;
      __asan_report_store4(v19, v18);
    }
    *v20 = v17;
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/hk4e_design_config.cpp",
      "rewriteVisionConfig",
      852);
    v22 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v4 + 160),
            (const char (*)[28])"rewriteVisionConfig level: ");
    v23 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
            v22,
            (const data::VisionLevelType *)(v4 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" range: ");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
    v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" width: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    result = 0LL;
  }
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 857: range 000000000CCECC20-000000000CCECE9A
__int64 __fastcall HK4EDesignConfig::findVisionRange(const HK4EDesignConfig *const this, data::VisionLevelType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::array<unsigned int,6>::size_type v5; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::array<unsigned int,6>::const_reference v9; // rax
  unsigned int *v10; // rdx
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:856 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::findVisionRange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = type;
  if ( *(int *)(v2 + 48) < 0
    || (v5 = *(int *)(v2 + 48), v5 >= std::array<unsigned int,6ul>::size(&this->scene_sight_range_array)) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "findVisionRange",
      860);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[29])"VisionLevelType is not valid");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v7,
      (const data::VisionLevelType *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  else
  {
    v9 = std::array<unsigned int,6ul>::operator[](&this->scene_sight_range_array, *(unsigned int *)(v2 + 48));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 867: range 000000000CCECE9C-000000000CCED116
__int64 __fastcall HK4EDesignConfig::findGridWidth(const HK4EDesignConfig *const this, data::VisionLevelType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::array<unsigned int,6>::size_type v5; // r14
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::array<unsigned int,6>::const_reference v9; // rax
  unsigned int *v10; // rdx
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:866 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = HK4EDesignConfig::findGridWidth;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = type;
  if ( *(int *)(v2 + 48) < 0
    || (v5 = *(int *)(v2 + 48), v5 >= std::array<unsigned int,6ul>::size(&this->scene_grid_width_array)) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/hk4e_design_config.cpp",
      "findGridWidth",
      870);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[29])"VisionLevelType is not valid");
    common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
      v7,
      (const data::VisionLevelType *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  else
  {
    v9 = std::array<unsigned int,6ul>::operator[](&this->scene_grid_width_array, *(unsigned int *)(v2 + 48));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

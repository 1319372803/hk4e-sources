// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/config/config.cpp

// Line 30: range 000000000C749422-000000000C74B576
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ConfigBasePtr v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  common::tools::PTree *v10; // r14
  unsigned int v11; // edx
  bool v12; // cl
  _BOOL4 is_dev_sdk_account; // r14d
  const char *v14; // rax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  bool v18; // cl
  common::milog::MiLogStream *v19; // rcx
  common::tools::PTree *v20; // r14
  bool v21; // cl
  common::milog::MiLogStream *v22; // rcx
  common::tools::PTree *v23; // r14
  unsigned int v24; // edx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::tools::PTree *v27; // r14
  bool v28; // cl
  common::milog::MiLogStream *v29; // rcx
  common::tools::PTree *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::tools::PTree *v32; // r14
  uint16_t *v33; // rax
  uint16_t *v34; // rdx
  uint16_t v35; // cx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v38; // rax
  bool v39; // cl
  common::milog::MiLogStream *v40; // rcx
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  const char *v44; // rax
  DbDeployConfigMgr *p_db_deploy_config_mgr; // rcx
  const char *v46; // rax
  uint32_t app_id; // ecx
  common::milog::MiLogStream *v48; // r14
  const char *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int32_t result; // eax
  std::allocator<char> v53; // [rsp+28h] [rbp-2A8h] BYREF
  std::allocator<char> __a; // [rsp+29h] [rbp-2A7h] BYREF
  unsigned __int16 __b; // [rsp+2Ah] [rbp-2A6h] BYREF
  Flag<ConfigOption> flag; // [rsp+2Ch] [rbp-2A4h] BYREF
  const data::DbRegionConfig *region_config_ptr; // [rsp+30h] [rbp-2A0h]
  const data::DbSdkConfig *sdk_config_ptr; // [rsp+38h] [rbp-298h]
  std::string path; // [rsp+40h] [rbp-290h] BYREF
  std::string v60; // [rsp+60h] [rbp-270h] BYREF
  std::string v61; // [rsp+80h] [rbp-250h] BYREF
  std::string v62; // [rsp+A0h] [rbp-230h] BYREF
  std::string v63; // [rsp+C0h] [rbp-210h] BYREF
  std::string v64; // [rsp+E0h] [rbp-1F0h] BYREF
  std::string v65; // [rsp+100h] [rbp-1D0h] BYREF
  std::string v66; // [rsp+120h] [rbp-1B0h] BYREF
  std::string v67; // [rsp+140h] [rbp-190h] BYREF
  std::string p_default_value; // [rsp+160h] [rbp-170h] BYREF
  common::milog::MiLogStream v69; // [rsp+180h] [rbp-150h] BYREF
  char v70[304]; // [rsp+1A0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 2 9 weight:97 64 8 12 region_pt:45 96 8 12 packet_pt:50 128 8 22 security_config_pt:146 160"
                        " 16 13 version_pt:37 192 16 29 retry_sdk_verify_config_pt:61 224 16 40 sdk_verify_host_darkrelease_config_pt:89";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 224), p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 224);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 224));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      33);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v69,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v69);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 160), &this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 160)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 160));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
      v11 = common::tools::PTree::get<unsigned int>(v10, &path, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->xml_config_version);
      }
      this->xml_config_version = v11;
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        41);
      if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->xml_config_version);
      }
      common::milog::MiLogStream::operator()(&v69, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v69);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.dev_sdk_account", &__a);
    v12 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 64), (const std::string *)&v69);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_dev_sdk_account);
    }
    this->is_dev_sdk_account = v12;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      47);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_dev_sdk_account);
    }
    is_dev_sdk_account = this->is_dev_sdk_account;
    v14 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v69, "load region_name=%s dev_sdk_account: %d", v14, is_dev_sdk_account);
    common::milog::MiLogStream::~MiLogStream(&v69);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.PacketConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v60, "<xmlattr>.check_interval", &__a);
    v15 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 96), &v60, 0x1388u);
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->packet_recv_check_interval_ms);
    }
    this->packet_recv_check_interval_ms = v15;
    std::string::~string(&v60);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v61, "<xmlattr>.max_count", &__a);
    v16 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 96), &v61, 0x1F4u);
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->packet_recv_max_count);
    }
    this->packet_recv_max_count = v16;
    std::string::~string(&v61);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v62, "<xmlattr>.max_size", &__a);
    v17 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 96), &v62, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->packet_recv_max_size);
    }
    this->packet_recv_max_size = v17;
    std::string::~string(&v62);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&v53);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v69,
      "Root.IsSkipSDKVerifyWhenHttpFailed",
      &v53);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v69);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v63, "<xmlattr>.value", &__a);
    v18 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 128), &v63, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_skip_sdk_verify_when_http_failed);
    }
    this->is_skip_sdk_verify_when_http_failed = v18;
    std::string::~string(&v63);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 128));
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&v53);
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      58);
    v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v69,
            (const char (*)[29])"IsSkipSDKVerifyWhenHttpFail:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_skip_sdk_verify_when_http_failed >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_skip_sdk_verify_when_http_failed);
    }
    common::milog::MiLogStream::operator<<(v19, this->is_skip_sdk_verify_when_http_failed);
    common::milog::MiLogStream::~MiLogStream(&v69);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.RetrySDKVerifyConfig", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 192), &this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 192)) )
    {
      v20 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v64, "<xmlattr>.is_retry_when_http_error", &__a);
      v21 = common::tools::PTree::get<bool>(v20, &v64, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->retry_sdk_verify_config);
      }
      this->retry_sdk_verify_config.is_retry_when_http_error = v21;
      std::string::~string(&v64);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        67);
      v22 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v69,
              (const char (*)[50])"retry_sdk_verify_config.is_retry_when_http_error:");
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->retry_sdk_verify_config);
      }
      common::milog::MiLogStream::operator<<(v22, this->retry_sdk_verify_config.is_retry_when_http_error);
      common::milog::MiLogStream::~MiLogStream(&v69);
      v23 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v65, "<xmlattr>.retry_sdk_verify_second", &__a);
      v24 = common::tools::PTree::get<unsigned int>(v23, &v65, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->retry_sdk_verify_config.retry_sdk_verify_second);
      }
      this->retry_sdk_verify_config.retry_sdk_verify_second = v24;
      std::string::~string(&v65);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.retry_sdk_verify_second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->retry_sdk_verify_config.retry_sdk_verify_second);
      }
      if ( this->retry_sdk_verify_config.retry_sdk_verify_second > 0x257 )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/config/config.cpp",
          "loadConfig",
          76);
        v25 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v69,
                (const char (*)[39])"Is config error? RetrySDKVerifySecond:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v25,
          &this->retry_sdk_verify_config.retry_sdk_verify_second);
        common::milog::MiLogStream::~MiLogStream(&v69);
      }
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        78);
      v26 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v69,
              (const char (*)[49])"retry_sdk_verify_config.retry_sdk_verify_second:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v26,
        &this->retry_sdk_verify_config.retry_sdk_verify_second);
      common::milog::MiLogStream::~MiLogStream(&v69);
      v27 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v66, "<xmlattr>.is_kickout_when_retry_fail", &__a);
      v28 = common::tools::PTree::get<bool>(v27, &v66, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.is_kickout_when_retry_fail >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.is_kickout_when_retry_fail >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->retry_sdk_verify_config.is_kickout_when_retry_fail);
      }
      this->retry_sdk_verify_config.is_kickout_when_retry_fail = v28;
      std::string::~string(&v66);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        84);
      v29 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v69,
              (const char (*)[52])"retry_sdk_verify_config.is_kickout_when_retry_fail:");
      if ( *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.is_kickout_when_retry_fail >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->retry_sdk_verify_config.is_kickout_when_retry_fail >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->retry_sdk_verify_config.is_kickout_when_retry_fail);
      }
      common::milog::MiLogStream::operator<<(v29, this->retry_sdk_verify_config.is_kickout_when_retry_fail);
      common::milog::MiLogStream::~MiLogStream(&v69);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.SDKVerifyHostDarkRelease", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 224), &this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 224)) )
    {
      v30 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 224));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_1A055E60, &__a);
      std::allocator<char>::allocator(&v53);
      std::string::basic_string<std::allocator<char>>(&v67, "<xmlattr>.host", &v53);
      common::tools::PTree::get<std::string>((std::string *)&v69, v30, &v67, &p_default_value);
      std::string::operator=(&this->sdk_verify_host_dark_release, &v69);
      std::string::~string(&v69);
      std::string::~string(&v67);
      std::allocator<char>::~allocator(&v53);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        94);
      v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v69,
              (const char (*)[35])"sdk_verify_host_dark_release.host:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &this->sdk_verify_host_dark_release.host);
      common::milog::MiLogStream::~MiLogStream(&v69);
      v32 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 224));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, "<xmlattr>.weight", &__a);
      *(_WORD *)(v3 + 48) = common::tools::PTree::get<unsigned short>(v32, &p_default_value, 0);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      __b = 100;
      v33 = (uint16_t *)std::min<unsigned short>((const unsigned __int16 *)(v3 + 48), &__b);
      v34 = v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 1) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load2(v33);
      }
      v35 = *v34;
      if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) <= 1 )
      {
        __asan_report_store2(&this->sdk_verify_host_dark_release.weight);
      }
      this->sdk_verify_host_dark_release.weight = v35;
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        99);
      v36 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v69,
              (const char (*)[37])"sdk_verify_host_dark_release.weight:");
      common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
        v36,
        &this->sdk_verify_host_dark_release.weight);
      common::milog::MiLogStream::~MiLogStream(&v69);
      if ( *(_WORD *)(v3 + 48) && (unsigned __int8)std::string::empty(&this->sdk_verify_host_dark_release) )
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/config/config.cpp",
          "loadConfig",
          104);
        v38 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
                &v69,
                (const char (*)[84])"Is config error? sdk_verify_host_dark_release weight > 0 but host is empty. weight=");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v38,
          &this->sdk_verify_host_dark_release.weight);
        common::milog::MiLogStream::~MiLogStream(&v69);
      }
    }
    std::allocator<char>::allocator(&v53);
    std::string::basic_string<std::allocator<char>>(&p_default_value, "Root.isTamperClientMsg", &v53);
    common::tools::PTree::getChild(&this->pt, &p_default_value);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.value", &__a);
    v39 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 128), (const std::string *)&v69, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_tamper_client_msg_);
    }
    this->is_tamper_client_msg_ = v39;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 128));
    std::string::~string(&p_default_value);
    std::allocator<char>::~allocator(&v53);
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      110);
    v40 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v69,
            (const char (*)[19])"isTamperClientMsg:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_tamper_client_msg_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_tamper_client_msg_);
    }
    common::milog::MiLogStream::operator<<(v40, this->is_tamper_client_msg_);
    common::milog::MiLogStream::~MiLogStream(&v69);
    Flag<ConfigOption>::Flag(&flag);
    v41 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( DbConfigMgr::loadConfig(&this->db_config_mgr, 0xFFFFFFFF, v41, &flag) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        115);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v69, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v42, "init db_config_mgr failed");
      common::milog::MiLogStream::~MiLogStream(&v69);
      v9 = -1;
    }
    else if ( DbConfigMgr::rewriteConfig(&this->db_config_mgr) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        120);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v69, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v43, "db_config_mgr.rewriteConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v69);
      v9 = -1;
    }
    else
    {
      region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                            &this->db_config_mgr.db_deploy_config_mgr,
                            &this->region_name);
      if ( region_config_ptr )
      {
        p_db_deploy_config_mgr = &this->db_config_mgr.db_deploy_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&region_config_ptr->sdk_env);
        }
        sdk_config_ptr = DbDeployConfigMgr::findSdkConfig(p_db_deploy_config_mgr, region_config_ptr->sdk_env);
        if ( sdk_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&sdk_config_ptr->app_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)sdk_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sdk_config_ptr->app_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&sdk_config_ptr->app_id);
          }
          app_id = sdk_config_ptr->app_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->sdk_info.app_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sdk_info.app_id >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->sdk_info.app_id);
          }
          this->sdk_info.app_id = app_id;
          std::string::operator=(&this->sdk_info.key, &sdk_config_ptr->account_key);
          if ( Config::parseSdkUrl(this, &sdk_config_ptr->account_url, &this->sdk_info) )
          {
            common::milog::MiLogStream::create(
              &v69,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadConfig",
              141);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v69,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = (const char *)std::string::c_str(&sdk_config_ptr->account_url);
            common::milog::MiLogStream::operator()(v48, "parseSdkUrl: %s fails", v49);
            common::milog::MiLogStream::~MiLogStream(&v69);
            v9 = -1;
          }
          else
          {
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.SecurityConfig", &__a);
            common::tools::PTree::getChild(&this->pt, (const std::string *)&v69);
            std::string::~string(&v69);
            std::allocator<char>::~allocator(&__a);
            if ( SecurityUtils::loadSecurityConfig((const common::tools::PTree *)(v3 + 128), &this->security_config) )
            {
              common::milog::MiLogStream::create(
                &v69,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/config/config.cpp",
                "loadConfig",
                149);
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      &v69,
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator()(v50, "loadSecurityConfig fails");
              common::milog::MiLogStream::~MiLogStream(&v69);
              v9 = -1;
            }
            else if ( Config::loadGameserverMgrConfig(this, &this->pt) )
            {
              common::milog::MiLogStream::create(
                &v69,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/config/config.cpp",
                "loadConfig",
                156);
              common::milog::MiLogStream::operator()(&v69, "loadGameserverMgrConfig failed");
              common::milog::MiLogStream::~MiLogStream(&v69);
              v9 = -1;
            }
            else if ( FeatureSwitchMgr::refresh(
                        &this->feature_switch_mgr,
                        &this->db_config_mgr.db_local_config_mgr.feature_switch_off_config_mgr) )
            {
              common::milog::MiLogStream::create(
                &v69,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/config/config.cpp",
                "loadConfig",
                163);
              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v69,
                (const char (*)[34])"feature_switch_mgr refresh failed");
              common::milog::MiLogStream::~MiLogStream(&v69);
              v9 = -1;
            }
            else
            {
              v9 = 0;
            }
            common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 128));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v69,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadConfig",
            134);
          v46 = (const char *)std::string::c_str(&this->region_name);
          common::milog::MiLogStream::operator()(&v69, "findSdkConfig fails, region_name: %s", v46);
          common::milog::MiLogStream::~MiLogStream(&v69);
          v9 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v69,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          128);
        v44 = (const char *)std::string::c_str(&this->region_name);
        common::milog::MiLogStream::operator()(&v69, "findDbRegionConfig %s fails", v44);
        common::milog::MiLogStream::~MiLogStream(&v69);
        v9 = -1;
      }
    }
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 224));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 192));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 96));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 160));
  }
  result = v9;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 171: range 000000000C74B578-000000000C74B592
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  GateserverApp *v1; // rax

  v1 = Singleton<GateserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 177: range 000000000C74B594-000000000C74B699
void __cdecl Config::onReloadConfig(Config *const this)
{
  GateserverService *v1; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v4; // [rsp+20h] [rbp-30h] BYREF

  if ( ServiceBox::findService<GateserverService>() )
  {
    v1 = ServiceBox::findService<GateserverService>();
    GateserverService::onReloadConfig(v1);
    v2 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v4, byte_1A055E60, &__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->xml_config_version);
    }
    MonitorReport::addValue(v2, 0x17u, this->xml_config_version, (unsigned __int64)&v4);
    std::string::~string(&v4);
    std::allocator<char>::~allocator(&__a);
  }
};

// Line 191: range 000000000C74B69A-000000000C74BADF
int32_t __cdecl Config::parseSdkUrl(const Config *const this, const std::string *url, SdkInfo *info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  bool v8; // dl
  int32_t result; // eax
  char v11[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 9 proto:200 112 264 14 url_parser:193";
  *(_QWORD *)(v3 + 16) = Config::parseSdkUrl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  v5[536862733] = -202116109;
  LUrlParser::clParseURL::ParseURL((LUrlParser::clParseURL_0 *)(v3 + 112), url);
  if ( !LUrlParser::clParseURL::IsValid((const LUrlParser::clParseURL *const)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 48),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "parseSdkUrl",
      196);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
           (common::milog::MiLogStream *const)(v3 + 48),
           (const char (*)[14])"url invalid: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, url);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 48));
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v3 + 48);
    if ( (unsigned __int8)std::string::empty(v3 + 120) != 1 )
      std::string::operator=(v3 + 48, v3 + 120);
    v8 = std::operator==<char>("https", (const std::string *)(v3 + 48));
    if ( *(char *)(((unsigned __int64)&info->is_ssl >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&info->is_ssl);
    info->is_ssl = v8;
    std::string::operator=(info, v3 + 152);
    std::string::operator=(&info->uri, v3 + 216);
    std::string::insert(&info->uri, 0LL, "/");
    if ( (unsigned __int8)std::string::empty(v3 + 184) )
    {
      if ( *(char *)(((unsigned __int64)&info->is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&info->is_ssl);
      if ( info->is_ssl )
        std::string::operator=(&info->port, "443");
      else
        std::string::operator=(&info->port, "80");
    }
    else
    {
      std::string::operator=(&info->port, v3 + 184);
    }
    v7 = 0;
    std::string::~string((void *)(v3 + 48));
  }
  LUrlParser::clParseURL::~clParseURL((LUrlParser::clParseURL *const)(v3 + 112));
  result = v7;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 232: range 000000000C74BAE0-000000000C74BB68
std::string *__cdecl Config::getServerSecretKey[abi:cxx11](std::string *retstr, const Config *const this)
{
  const data::DbRegionConfig *region_config_ptr; // [rsp+18h] [rbp-18h]

  std::string::basic_string(retstr);
  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                        &this->db_config_mgr.db_deploy_config_mgr,
                        &this->region_name);
  if ( region_config_ptr )
    std::string::operator=(retstr, &region_config_ptr->server_secret_key);
  return retstr;
};

// Line 243: range 000000000C74BB6A-000000000C74C08B
int32_t __cdecl Config::loadGameserverMgrConfig(Config *const this, const common::tools::PTree *root)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int32_t threshold_load_0; // ecx
  int32_t v9; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 28 gameserver_mgr_config_pt:244";
  *(_QWORD *)(v2 + 16) = Config::loadGameserverMgrConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.GameserverMgrConf", &__a);
  common::tools::PTree::getChild(root, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.threshold_load_0", &__a);
  v5 = common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gameserver_mgr_config);
  }
  this->gameserver_mgr_config.threshold_load_0 = v5;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.threshold_load_1", &__a);
  v6 = common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.threshold_load_1 >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gameserver_mgr_config.threshold_load_1);
  }
  this->gameserver_mgr_config.threshold_load_1 = v6;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.choose_add_load", &__a);
  v7 = common::tools::PTree::get<int>((const common::tools::PTree *const)(v2 + 32), &child_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.choose_add_load >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.choose_add_load >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gameserver_mgr_config.choose_add_load);
  }
  this->gameserver_mgr_config.choose_add_load = v7;
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gameserver_mgr_config);
  }
  threshold_load_0 = this->gameserver_mgr_config.threshold_load_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.threshold_load_1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gameserver_mgr_config.threshold_load_1 >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gameserver_mgr_config.threshold_load_1);
  }
  if ( threshold_load_0 <= this->gameserver_mgr_config.threshold_load_1 )
  {
    v9 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadGameserverMgrConfig",
      250);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&child_name,
      "threshold_load_0 > threshold_load_1!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v9 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v9;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 257: range 000000000C74C08C-000000000C74C1C9
std::string *__cdecl Config::getSDKVerifyHostWithDarkRelease[abi:cxx11](std::string *retstr, Config *const this)
{
  std::uniform_int_distribution<short unsigned int>::result_type r; // [rsp+1Eh] [rbp-2h]

  if ( (unsigned __int8)std::string::empty(&this->sdk_verify_host_dark_release) )
    goto LABEL_9;
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->sdk_verify_host_dark_release.weight);
  }
  if ( !this->sdk_verify_host_dark_release.weight )
    goto LABEL_9;
  r = common::tools::RandomUtils::rand<unsigned short>(1u, 0x64u);
  if ( *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sdk_verify_host_dark_release.weight >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&this->sdk_verify_host_dark_release.weight);
  }
  if ( r <= this->sdk_verify_host_dark_release.weight )
    std::string::basic_string(retstr, &this->sdk_verify_host_dark_release);
  else
LABEL_9:
    std::string::basic_string(retstr, &this->sdk_info);
  return retstr;
};

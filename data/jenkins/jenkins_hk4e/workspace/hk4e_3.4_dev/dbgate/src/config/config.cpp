// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/config/config.cpp

// Line 22: range 000000000C5D4F4C-000000000C5D625E
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r13
  ConfigBasePtr v6; // rdx
  bool v7; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r12d
  common::tools::PTree *v10; // r12
  std::string *p_path; // rsi
  unsigned int v12; // edx
  char v13; // al
  bool v14; // cl
  char v15; // dl
  common::milog::MiLogStream *v16; // rsi
  bool v17; // dl
  common::milog::MiLogStream *v18; // rsi
  unsigned int v19; // edx
  char v20; // al
  bool v21; // cl
  char v22; // dl
  common::milog::MiLogStream *v23; // rsi
  bool v24; // dl
  bool v25; // cl
  char v26; // dl
  common::milog::MiLogStream *v27; // rsi
  bool v28; // dl
  bool v29; // cl
  char v30; // dl
  common::milog::MiLogStream *v31; // rsi
  bool v32; // dl
  std::string *v33; // rsi
  unsigned int v34; // edx
  char v35; // al
  bool v36; // cl
  char v37; // dl
  std::string *v38; // rsi
  bool v39; // dl
  std::string *v40; // rsi
  unsigned int v41; // edx
  char v42; // al
  common::tools::PTree *v43; // r12
  bool v44; // cl
  char v45; // dl
  common::milog::MiLogStream *v46; // rsi
  bool v47; // dl
  _BOOL8 is_check_register_black_ip; // r15
  _BOOL4 is_dev_sdk_account; // r12d
  const char *v50; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int32_t result; // eax
  uint32_t max_register; // [rsp+Ch] [rbp-1B4h]
  _BOOL4 is_check_login_black_ip; // [rsp+10h] [rbp-1B0h]
  _BOOL4 is_check_uncompress_valid; // [rsp+14h] [rbp-1ACh]
  uint32_t login_rsp_proto_max_size; // [rsp+18h] [rbp-1A8h]
  _BOOL4 is_login_rsp_split; // [rsp+1Ch] [rbp-1A4h]
  uint32_t login_rsp_split_size; // [rsp+20h] [rbp-1A0h]
  _BOOL4 is_judge_user_db_delete; // [rsp+24h] [rbp-19Ch]
  std::allocator<char> __a; // [rsp+4Bh] [rbp-175h] BYREF
  Flag<ConfigOption> flag; // [rsp+4Ch] [rbp-174h] BYREF
  std::string path; // [rsp+50h] [rbp-170h] BYREF
  std::string v66; // [rsp+70h] [rbp-150h] BYREF
  std::string v67; // [rsp+90h] [rbp-130h] BYREF
  std::string v68; // [rsp+B0h] [rbp-110h] BYREF
  common::milog::MiLogStream v69; // [rsp+D0h] [rbp-F0h] BYREF
  char v70[208]; // [rsp+F0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v70;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 12 region_pt:37 64 8 12 dbgate_pt:44 96 16 13 version_pt:29 128 16 21 mysql_extra_pt_opt:49";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 128), p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 128);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 128));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      25);
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
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 96), &this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 96)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
      p_path = &path;
      v12 = common::tools::PTree::get<unsigned int>(v10, &path, 0);
      v13 = *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(p_path) = v13 != 0;
        __asan_report_store4(&this->xml_config_version, p_path);
      }
      this->xml_config_version = v12;
      std::string::~string(&path);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadConfig",
        33);
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
    v16 = &v69;
    v14 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 32), (const std::string *)&v69);
    v15 = *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v15 != 0;
    v17 = v15 != 0 && (((unsigned __int8)this - 84) & 7) >= v15;
    if ( v17 )
      __asan_report_store1(&this->is_dev_sdk_account_, v16, v17);
    this->is_dev_sdk_account_ = v14;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.max_register", &__a);
    v18 = &v69;
    v19 = common::tools::PTree::get<unsigned int>(
            (const common::tools::PTree *const)(v3 + 32),
            (const std::string *)&v69);
    v20 = *(_BYTE *)(((unsigned __int64)&this->max_register_ >> 3) + 0x7FFF8000);
    if ( v20 != 0 && v20 <= 3 )
    {
      LOBYTE(v18) = v20 != 0;
      __asan_report_store4(&this->max_register_, v18);
    }
    this->max_register_ = v19;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.check_login_black_ip", &__a);
    v23 = &v69;
    v21 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 32), (const std::string *)&v69);
    v22 = *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3) + 0x7FFF8000);
    LOBYTE(v23) = v22 != 0;
    v24 = v22 != 0 && (((unsigned __int8)this - 76) & 7) >= v22;
    if ( v24 )
      __asan_report_store1(&this->is_check_login_black_ip_, v23, v24);
    this->is_check_login_black_ip_ = v21;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.check_register_black_ip", &__a);
    v27 = &v69;
    v25 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 32), (const std::string *)&v69);
    v26 = *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3) + 0x7FFF8000);
    LOBYTE(v27) = v26 != 0;
    v28 = v26 != 0 && (((unsigned __int8)this - 75) & 7) >= v26;
    if ( v28 )
      __asan_report_store1(&this->is_check_register_black_ip, v27, v28);
    this->is_check_register_black_ip = v25;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "<xmlattr>.check_uncompress_valid", &__a);
    v31 = &v69;
    v29 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 32), (const std::string *)&v69);
    v30 = *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3) + 0x7FFF8000);
    LOBYTE(v31) = v30 != 0;
    v32 = v30 != 0 && (((unsigned __int8)this - 74) & 7) >= v30;
    if ( v32 )
      __asan_report_store1(&this->is_check_uncompress_valid, v31, v32);
    this->is_check_uncompress_valid = v29;
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.ServiceList.Dbgate", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v66, "<xmlattr>.login_rsp_proto_max_size", &__a);
    v33 = &v66;
    v34 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 64), &v66, 0x96000u);
    v35 = *(_BYTE *)(((unsigned __int64)&this->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000);
    if ( v35 != 0 && v35 <= 3 )
    {
      LOBYTE(v33) = v35 != 0;
      __asan_report_store4(&this->login_rsp_proto_max_size_, v33);
    }
    this->login_rsp_proto_max_size_ = v34;
    std::string::~string(&v66);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v67, "<xmlattr>.is_login_rsp_split", &__a);
    v38 = &v67;
    v36 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 64), &v67, 0);
    v37 = *(_BYTE *)(((unsigned __int64)&this->is_login_rsp_split_ >> 3) + 0x7FFF8000);
    LOBYTE(v38) = v37 != 0;
    v39 = v37 != 0 && (((unsigned __int8)this - 67) & 7) >= v37;
    if ( v39 )
      __asan_report_store1(&this->is_login_rsp_split_, v38, v39);
    this->is_login_rsp_split_ = v36;
    std::string::~string(&v67);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v68, "<xmlattr>.login_rsp_split_size", &__a);
    v40 = &v68;
    v41 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 64), &v68, 0x96000u);
    v42 = *(_BYTE *)(((unsigned __int64)&this->login_rsp_split_size_ >> 3) + 0x7FFF8000);
    if ( v42 != 0 && v42 <= 3 )
    {
      LOBYTE(v40) = v42 != 0;
      __asan_report_store4(&this->login_rsp_split_size_, v40);
    }
    this->login_rsp_split_size_ = v41;
    std::string::~string(&v68);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v69, "Root.MysqlExtraConf", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v3 + 128), &this->pt, (const std::string *)&v69);
    std::string::~string(&v69);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 128)) )
    {
      v43 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 128));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v69,
        "<xmlattr>.is_judge_user_db_delete",
        &__a);
      v46 = &v69;
      v44 = common::tools::PTree::get<bool>(v43, (const std::string *)&v69, 0);
      v45 = *(_BYTE *)(((unsigned __int64)&this->is_judge_user_db_delete_ >> 3) + 0x7FFF8000);
      LOBYTE(v46) = v45 != 0;
      v47 = v45 != 0 && (((unsigned __int8)this - 68) & 7) >= v45;
      if ( v47 )
        __asan_report_store1(&this->is_judge_user_db_delete_, v46, v47);
      this->is_judge_user_db_delete_ = v44;
      std::string::~string(&v69);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v69,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      55);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_judge_user_db_delete_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_judge_user_db_delete_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_judge_user_db_delete_);
    }
    is_judge_user_db_delete = this->is_judge_user_db_delete_;
    if ( *(_BYTE *)(((unsigned __int64)&this->login_rsp_split_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->login_rsp_split_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->login_rsp_split_size_);
    }
    login_rsp_split_size = this->login_rsp_split_size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_login_rsp_split_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_login_rsp_split_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_login_rsp_split_);
    }
    is_login_rsp_split = this->is_login_rsp_split_;
    if ( *(_BYTE *)(((unsigned __int64)&this->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->login_rsp_proto_max_size_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->login_rsp_proto_max_size_);
    }
    login_rsp_proto_max_size = this->login_rsp_proto_max_size_;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_uncompress_valid >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_check_uncompress_valid);
    }
    is_check_uncompress_valid = this->is_check_uncompress_valid;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_register_black_ip >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_check_register_black_ip);
    }
    is_check_register_black_ip = this->is_check_register_black_ip;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_login_black_ip_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_check_login_black_ip_);
    }
    is_check_login_black_ip = this->is_check_login_black_ip_;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_register_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_register_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->max_register_);
    }
    max_register = this->max_register_;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dev_sdk_account_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_dev_sdk_account_);
    }
    is_dev_sdk_account = this->is_dev_sdk_account_;
    v50 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(
      &v69,
      "load region_name=%s, is_dev_sdk_account_: %d, max_register: %u, is_check_login_black_ip:%d, check_register_black_i"
      "p:%d, is_check_uncompress_valid:%d, login_rsp_proto_max_size_:%d , is_login_rsp_split_:%d, login_rsp_split_size_:%"
      "u, is_judge_user_db_delete_:%d",
      v50,
      is_dev_sdk_account,
      max_register,
      is_check_login_black_ip,
      is_check_register_black_ip,
      is_check_uncompress_valid,
      login_rsp_proto_max_size,
      is_login_rsp_split,
      login_rsp_split_size,
      is_judge_user_db_delete);
    common::milog::MiLogStream::~MiLogStream(&v69);
    Flag<ConfigOption>::Flag(&flag);
    v51 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    if ( DbConfigMgr::loadConfig(&this->db_config_mgr, 0xFFFFFFFF, v51, &flag) )
    {
      common::milog::MiLogStream::create(
        &v69,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        62);
      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v69, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v52, "init db_config_mgr failed");
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
        67);
      v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v69, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator()(v53, "db_config_mgr.rewriteConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v69);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 128));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 64));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 96));
  }
  result = v9;
  if ( v70 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 74: range 000000000C5D6260-000000000C5D627A
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  DbgateApp *v1; // rax

  v1 = Singleton<DbgateApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 79: range 000000000C5D627C-000000000C5D6360
void __cdecl Config::onReloadConfig(Config *const this)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::allocator<char> __a; // [rsp+1Fh] [rbp-31h] BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  v1 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v3, byte_19D3D6A0, &__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->xml_config_version);
  }
  MonitorReport::addValue(v1, (char *)0x17, this->xml_config_version, (unsigned __int64)&v3);
  std::string::~string(&v3);
  std::allocator<char>::~allocator(&__a);
};

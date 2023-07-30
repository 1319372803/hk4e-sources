// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/config/config.cpp

// Line 26: range 000000000DEA8C88-000000000DEA8E56
std::shared_ptr<Config> __cdecl Config::getConfig()
{
  std::shared_ptr<ConfigBase> *v0; // rdi
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  std::shared_ptr<Config> result; // rax
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::shared_ptr<ConfigBase> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 base_ptr:28";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)Config::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE();
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_ConfigMgrBase + 4);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_ConfigMgrBase + 4);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(
      &__r,
      v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v0 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v0, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v0);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};

// Line 41: range 000000000DEA8E58-000000000DEA905B
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  common::milog::MiLogStream *v4; // rax
  const std::vector<std::string> *v5; // rax
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( Config::loadSystemConfig(this, config_file_name) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      44);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v6, (const char (*)[24])"loadSystemConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else if ( Config::loadDesignConfig(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      49);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v6, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v4, (const char (*)[24])"loadDesignConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    v5 = SensitiveWordExcelConfigMgr::getSensitiveWordVec[abi:cxx11](&this->design_config_.txt_config_mgr.sensitive_word_config_mgr);
    common::tools::WordFilter::init(&this->word_filter, v5);
    if ( FeatureSwitchMgr::refresh(
           &this->feature_switch_mgr,
           &this->design_config_.db_config_mgr.db_local_config_mgr.feature_switch_off_config_mgr) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        58);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v6,
        (const char (*)[34])"feature_switch_mgr refresh failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 65: range 000000000DEA905C-000000000DEA9076
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  MultiserverApp *v1; // rax

  v1 = Singleton<MultiserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 71: range 000000000DEA9078-000000000DEAB560
int32_t __cdecl Config::loadSystemConfig(Config *const this, const std::string *config_file_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ConfigBasePtr v5; // rdx
  bool v6; // r14
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  common::tools::PTree *v9; // r14
  unsigned int v10; // edx
  const char *v11; // rax
  common::tools::PTree *v12; // r14
  bool v13; // dl
  common::tools::PTree *v14; // r14
  bool v15; // cl
  common::tools::PTree *v16; // r14
  common::tools::PTree *v17; // r14
  common::tools::PTree *v18; // r14
  common::tools::PTree *v19; // r14
  unsigned int v20; // edx
  common::tools::PTree *v21; // r14
  unsigned int v22; // ecx
  common::tools::PTree *v23; // r14
  unsigned int v24; // edx
  common::tools::PTree *v25; // r14
  unsigned int v26; // ecx
  common::tools::PTree *v27; // r14
  unsigned int v28; // ecx
  common::tools::PTree *v29; // r14
  unsigned int v30; // edx
  common::tools::PTree *v31; // r14
  unsigned int v32; // edx
  common::tools::PTree *v33; // r14
  unsigned int v34; // ecx
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::tools::PTree *v58; // r14
  unsigned int v59; // edx
  common::tools::PTree *v60; // r14
  unsigned int v61; // ecx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::tools::PTree *v65; // r14
  unsigned int v66; // edx
  common::tools::PTree *v67; // r14
  unsigned int v68; // ecx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::tools::PTree *v74; // r14
  unsigned int v75; // edx
  common::tools::PTree *v76; // r14
  unsigned int v77; // ecx
  common::tools::PTree *v78; // r14
  unsigned int v79; // edx
  common::tools::PTree *v80; // r14
  unsigned int v81; // ecx
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::tools::PTree *v89; // r14
  bool v90; // dl
  int32_t result; // eax
  std::allocator<char> v92; // [rsp+1Eh] [rbp-412h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-411h] BYREF
  std::string path; // [rsp+20h] [rbp-410h] BYREF
  std::string v95; // [rsp+40h] [rbp-3F0h] BYREF
  std::string v96; // [rsp+60h] [rbp-3D0h] BYREF
  std::string v97; // [rsp+80h] [rbp-3B0h] BYREF
  std::string v98; // [rsp+A0h] [rbp-390h] BYREF
  std::string v99; // [rsp+C0h] [rbp-370h] BYREF
  std::string v100; // [rsp+E0h] [rbp-350h] BYREF
  std::string v101; // [rsp+100h] [rbp-330h] BYREF
  std::string v102; // [rsp+120h] [rbp-310h] BYREF
  std::string v103; // [rsp+140h] [rbp-2F0h] BYREF
  std::string v104; // [rsp+160h] [rbp-2D0h] BYREF
  std::string v105; // [rsp+180h] [rbp-2B0h] BYREF
  std::string v106; // [rsp+1A0h] [rbp-290h] BYREF
  std::string v107; // [rsp+1C0h] [rbp-270h] BYREF
  std::string v108; // [rsp+1E0h] [rbp-250h] BYREF
  std::string v109; // [rsp+200h] [rbp-230h] BYREF
  std::string v110; // [rsp+220h] [rbp-210h] BYREF
  std::string v111; // [rsp+240h] [rbp-1F0h] BYREF
  std::string v112; // [rsp+260h] [rbp-1D0h] BYREF
  std::string v113; // [rsp+280h] [rbp-1B0h] BYREF
  std::string v114; // [rsp+2A0h] [rbp-190h] BYREF
  std::string p_default_value; // [rsp+2C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v116; // [rsp+2E0h] [rbp-150h] BYREF
  char v117[304]; // [rsp+300h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v117;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 12 region_pt:86 64 16 13 version_pt:78 96 16 20 custom_dungeon_pt:97 128 16 21 home_bluep"
                        "rint_pt:128 160 16 18 mail_config_pt:137 192 16 17 gcg_config_pt:156 224 16 38 client_data_versi"
                        "on_ban_gcg_pt_opt:169";
  *(_QWORD *)(v2 + 16) = Config::loadSystemConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v2 + 224), 0LL);
  v5._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v2 + 224);
  v6 = ConfigBase::loadConfig(this, config_file_name, v5) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v2 + 224));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      74);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v116,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v116);
    v8 = -1;
    goto LABEL_77;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.BuildVersion", &__a);
  common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 64), &this->pt, (const std::string *)&v116);
  std::string::~string(&v116);
  std::allocator<char>::~allocator(&__a);
  if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 64)) )
  {
    v9 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 64));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
    v10 = common::tools::PTree::get<unsigned int>(v9, &path, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->xml_config_version);
    }
    this->xml_config_version = v10;
    std::string::~string(&path);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      82);
    if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->xml_config_version);
    }
    common::milog::MiLogStream::operator()(&v116, "load xml_config_version=%u", this->xml_config_version);
    common::milog::MiLogStream::~MiLogStream(&v116);
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.RegionConf", &__a);
  common::tools::PTree::getChild(&this->pt, (const std::string *)&v116);
  std::string::~string(&v116);
  std::allocator<char>::~allocator(&__a);
  common::milog::MiLogStream::create(
    &v116,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/config/config.cpp",
    "loadSystemConfig",
    87);
  v11 = (const char *)std::string::c_str(&this->region_name);
  common::milog::MiLogStream::operator()(&v116, "load region_name=%s", v11);
  common::milog::MiLogStream::~MiLogStream(&v116);
  if ( !Config::loadItemLimitConfig(this, &this->pt) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.CustomDungeon", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 96), &this->pt, (const std::string *)&v116);
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 96)) )
    {
      v12 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v95, "<xmlattr>.is_enable_verify", &__a);
      v13 = common::tools::PTree::get<bool>(v12, &v95, 0);
      if ( *(char *)(((unsigned __int64)&this->is_custom_dungeon_verify_enable >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_custom_dungeon_verify_enable);
      this->is_custom_dungeon_verify_enable = v13;
      std::string::~string(&v95);
      std::allocator<char>::~allocator(&__a);
      v14 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v96, "<xmlattr>.is_verify_ssl", &__a);
      v15 = common::tools::PTree::get<bool>(v14, &v96, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_custom_dungeon_verify_ssl);
      }
      this->is_custom_dungeon_verify_ssl = v15;
      std::string::~string(&v96);
      std::allocator<char>::~allocator(&__a);
      v16 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_1BABF140, &__a);
      std::allocator<char>::allocator(&v92);
      std::string::basic_string<std::allocator<char>>(&v97, "<xmlattr>.verify_host", &v92);
      common::tools::PTree::get<std::string>((std::string *)&v116, v16, &v97, &p_default_value);
      std::string::operator=(&this->custom_dungeon_verify_host, &v116);
      std::string::~string(&v116);
      std::string::~string(&v97);
      std::allocator<char>::~allocator(&v92);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      v17 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_1BABF140, &__a);
      std::allocator<char>::allocator(&v92);
      std::string::basic_string<std::allocator<char>>(&v98, "<xmlattr>.verify_port", &v92);
      common::tools::PTree::get<std::string>((std::string *)&v116, v17, &v98, &p_default_value);
      std::string::operator=(&this->custom_dungeon_verify_port, &v116);
      std::string::~string(&v116);
      std::string::~string(&v98);
      std::allocator<char>::~allocator(&v92);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      v18 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, byte_1BABF140, &__a);
      std::allocator<char>::allocator(&v92);
      std::string::basic_string<std::allocator<char>>(&v99, "<xmlattr>.verify_uri", &v92);
      common::tools::PTree::get<std::string>((std::string *)&v116, v18, &v99, &p_default_value);
      std::string::operator=(&this->custom_dungeon_verify_uri, &v116);
      std::string::~string(&v116);
      std::string::~string(&v99);
      std::allocator<char>::~allocator(&v92);
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
      v19 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v100, "<xmlattr>.verify_timeout", &__a);
      v20 = common::tools::PTree::get<unsigned int>(v19, &v100, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_verify_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_verify_timeout);
      }
      this->custom_dungeon_verify_timeout = v20;
      std::string::~string(&v100);
      std::allocator<char>::~allocator(&__a);
      v21 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v101, "<xmlattr>.cache_max_size", &__a);
      v22 = common::tools::PTree::get<unsigned int>(v21, &v101, 0x1F4u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_max_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_max_size >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_cache_max_size);
      }
      this->custom_dungeon_cache_max_size = v22;
      std::string::~string(&v101);
      std::allocator<char>::~allocator(&__a);
      v23 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v102, "<xmlattr>.cache_timeout", &__a);
      v24 = common::tools::PTree::get<unsigned int>(v23, &v102, 0xE10u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_cache_timeout);
      }
      this->custom_dungeon_cache_timeout = v24;
      std::string::~string(&v102);
      std::allocator<char>::~allocator(&__a);
      v25 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v103, "<xmlattr>.recommend_timeout", &__a);
      v26 = common::tools::PTree::get<unsigned int>(v25, &v103, 0xAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_recommend_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_recommend_timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_recommend_timeout);
      }
      this->custom_dungeon_recommend_timeout = v26;
      std::string::~string(&v103);
      std::allocator<char>::~allocator(&__a);
      v27 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v104, "<xmlattr>.search_cache_max_size", &__a);
      v28 = common::tools::PTree::get<unsigned int>(v27, &v104, 0x1F4u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_max_size >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_max_size >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_search_cache_max_size);
      }
      this->custom_dungeon_search_cache_max_size = v28;
      std::string::~string(&v104);
      std::allocator<char>::~allocator(&__a);
      v29 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v105, "<xmlattr>.search_cache_timeout", &__a);
      v30 = common::tools::PTree::get<unsigned int>(v29, &v105, 0x78u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_search_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_search_cache_timeout);
      }
      this->custom_dungeon_search_cache_timeout = v30;
      std::string::~string(&v105);
      std::allocator<char>::~allocator(&__a);
      v31 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v106, "<xmlattr>.old_recommend_num", &__a);
      v32 = common::tools::PTree::get<unsigned int>(v31, &v106, 0xAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_old_recommend_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_old_recommend_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_old_recommend_num);
      }
      this->custom_dungeon_old_recommend_num = v32;
      std::string::~string(&v106);
      std::allocator<char>::~allocator(&__a);
      v33 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 96));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v107, "<xmlattr>.new_recommend_num", &__a);
      v34 = common::tools::PTree::get<unsigned int>(v33, &v107, 0xDu);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_new_recommend_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_new_recommend_num >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_new_recommend_num);
      }
      this->custom_dungeon_new_recommend_num = v34;
      std::string::~string(&v107);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      114);
    v35 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v116,
            (const char (*)[33])"Custom Dungeon is_enable_verify:");
    if ( *(char *)(((unsigned __int64)&this->is_custom_dungeon_verify_enable >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_custom_dungeon_verify_enable);
    v36 = common::milog::MiLogStream::operator<<(v35, this->is_custom_dungeon_verify_enable);
    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v36, (const char (*)[16])" is_verify_ssl:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_custom_dungeon_verify_ssl >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_custom_dungeon_verify_ssl);
    }
    v38 = common::milog::MiLogStream::operator<<(v37, this->is_custom_dungeon_verify_ssl);
    v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])" verify_host:");
    v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, &this->custom_dungeon_verify_host);
    v41 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v40, (const char (*)[14])" verify_port:");
    v42 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, &this->custom_dungeon_verify_port);
    v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v42, (const char (*)[13])" verify_uri:");
    v44 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, &this->custom_dungeon_verify_uri);
    v45 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v44, (const char (*)[17])" verify_timeout:");
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v45,
            &this->custom_dungeon_verify_timeout);
    v47 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v46,
            (const char (*)[25])" dungeon cache_max_size:");
    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v47,
            &this->custom_dungeon_cache_max_size);
    v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v48, (const char (*)[16])" cache timeout:");
    v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v49,
            &this->custom_dungeon_cache_timeout);
    v51 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v50,
            (const char (*)[24])" search_cache_max_size:");
    v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v51,
            &this->custom_dungeon_search_cache_max_size);
    v53 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v52,
            (const char (*)[23])" search_cache_timeout:");
    v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v53,
            &this->custom_dungeon_search_cache_timeout);
    v55 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v54,
            (const char (*)[20])" old_recommend_num:");
    v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v55,
            &this->custom_dungeon_old_recommend_num);
    v57 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v56,
            (const char (*)[20])" new_recommend_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &this->custom_dungeon_new_recommend_num);
    common::milog::MiLogStream::~MiLogStream(&v116);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.HomeBlueprint", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 128), &this->pt, (const std::string *)&v116);
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 128)) )
    {
      v58 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 128));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v108, "<xmlattr>.cache_max_size", &__a);
      v59 = common::tools::PTree::get<unsigned int>(v58, &v108, 0x1F4u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_max_size >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->home_blueprint_detail_cache_max_size);
      }
      this->home_blueprint_detail_cache_max_size = v59;
      std::string::~string(&v108);
      std::allocator<char>::~allocator(&__a);
      v60 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 128));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v109, "<xmlattr>.cache_timeout", &__a);
      v61 = common::tools::PTree::get<unsigned int>(v60, &v109, 0xE10u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_blueprint_detail_cache_timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_blueprint_detail_cache_timeout);
      }
      this->home_blueprint_detail_cache_timeout = v61;
      std::string::~string(&v109);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      134);
    v62 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v116,
            (const char (*)[58])"HomeBlueprintConfig home_blueprint_detail_cache_max_size:");
    v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v62,
            &this->home_blueprint_detail_cache_max_size);
    v64 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v63,
            (const char (*)[38])" home_blueprint_detail_cache_timeout:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v64,
      &this->home_blueprint_detail_cache_timeout);
    common::milog::MiLogStream::~MiLogStream(&v116);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.MailConfig", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 160), &this->pt, (const std::string *)&v116);
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 160)) )
    {
      v65 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v110, "<xmlattr>.mail_message_max_size", &__a);
      v66 = common::tools::PTree::get<unsigned int>(v65, &v110, 0x64u);
      if ( *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->mail_message_max_size);
      }
      this->mail_message_max_size = v66;
      std::string::~string(&v110);
      std::allocator<char>::~allocator(&__a);
      v67 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 160));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v111, "<xmlattr>.max_batch_mail_count", &__a);
      v68 = common::tools::PTree::get<unsigned int>(v67, &v111, 0x28u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_batch_mail_count);
      }
      this->max_batch_mail_count = v68;
      std::string::~string(&v111);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->mail_message_max_size >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->mail_message_max_size);
      }
      if ( this->mail_message_max_size <= 0x63 || this->mail_message_max_size > 0xFA )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadSystemConfig",
          144);
        v69 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v116,
                (const char (*)[31])"invalid mail_message_max_size:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &this->mail_message_max_size);
        common::milog::MiLogStream::~MiLogStream(&v116);
        v8 = -1;
LABEL_75:
        std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 160));
        std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 128));
        std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 96));
        goto LABEL_76;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_batch_mail_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->max_batch_mail_count);
      }
      if ( this->max_batch_mail_count <= 9 )
      {
        common::milog::MiLogStream::create(
          &v116,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadSystemConfig",
          149);
        v70 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v116,
                (const char (*)[35])"max_batch_mail_count is too small:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &this->max_batch_mail_count);
        common::milog::MiLogStream::~MiLogStream(&v116);
        v8 = -1;
        goto LABEL_75;
      }
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      153);
    v71 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v116,
            (const char (*)[34])"MailConfig mail_message_max_size:");
    v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &this->mail_message_max_size);
    v73 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v72,
            (const char (*)[23])" max_batch_mail_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &this->max_batch_mail_count);
    common::milog::MiLogStream::~MiLogStream(&v116);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "Root.GCGConfig", &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 192), &this->pt, (const std::string *)&v116);
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 192)) )
    {
      v74 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v112, "<xmlattr>.max_gcg_game_num_per_thread", &__a);
      v75 = common::tools::PTree::get<unsigned int>(v74, &v112, 0x3E8u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_gcg_game_num_per_thread >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->max_gcg_game_num_per_thread);
      }
      this->max_gcg_game_num_per_thread = v75;
      std::string::~string(&v112);
      std::allocator<char>::~allocator(&__a);
      v76 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v113, "<xmlattr>.gcg_game_no_recv_expire_time", &__a);
      v77 = common::tools::PTree::get<unsigned int>(v76, &v113, 0x708u);
      if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_no_recv_expire_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_game_no_recv_expire_time >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->gcg_game_no_recv_expire_time);
      }
      this->gcg_game_no_recv_expire_time = v77;
      std::string::~string(&v113);
      std::allocator<char>::~allocator(&__a);
      v78 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v114, "<xmlattr>.gcg_game_retain_time", &__a);
      v79 = common::tools::PTree::get<unsigned int>(v78, &v114, 0x14u);
      if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_retain_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gcg_game_retain_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->gcg_game_retain_time);
      }
      this->gcg_game_retain_time = v79;
      std::string::~string(&v114);
      std::allocator<char>::~allocator(&__a);
      v80 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&p_default_value, "<xmlattr>.gcg_game_create_timeout", &__a);
      v81 = common::tools::PTree::get<unsigned int>(v80, &p_default_value, 0xAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->gcg_game_create_timeout);
      }
      this->gcg_game_create_timeout = v81;
      std::string::~string(&p_default_value);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v116,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      164);
    v82 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v116,
            (const char (*)[39])"GCGConfig max_gcg_game_num_per_thread:");
    v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v82,
            &this->max_gcg_game_num_per_thread);
    v84 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v83,
            (const char (*)[31])" gcg_game_no_recv_expire_time:");
    v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v84,
            &this->gcg_game_no_recv_expire_time);
    v86 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v85,
            (const char (*)[23])" gcg_game_retain_time:");
    v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &this->gcg_game_retain_time);
    v88 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v87,
            (const char (*)[26])" gcg_game_create_timeout:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, &this->gcg_game_create_timeout);
    common::milog::MiLogStream::~MiLogStream(&v116);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v116,
      "Root.ClientDataVersionNotLatestBanGCG",
      &__a);
    common::tools::PTree::getChildOptional((common::tools::PTree *)(v2 + 224), &this->pt, (const std::string *)&v116);
    std::string::~string(&v116);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v2 + 224)) )
    {
      v89 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v2 + 224));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v116, "<xmlattr>.open", &__a);
      v90 = common::tools::PTree::get<bool>(v89, (const std::string *)&v116, 1);
      if ( *(char *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_client_data_version_not_latest_ban_gcg);
      this->is_client_data_version_not_latest_ban_gcg = v90;
      std::string::~string(&v116);
      std::allocator<char>::~allocator(&__a);
    }
    v8 = 0;
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 224));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 192));
    goto LABEL_75;
  }
  common::milog::MiLogStream::create(
    &v116,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/config/config.cpp",
    "loadSystemConfig",
    92);
  common::milog::MiLogStream::operator()(&v116, "loadItemLimitConfig failed");
  common::milog::MiLogStream::~MiLogStream(&v116);
  v8 = -1;
LABEL_76:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v2 + 64));
LABEL_77:
  result = v8;
  if ( v117 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 179: range 000000000DEAB562-000000000DEAB89D
int32_t __cdecl Config::loadDesignConfig(Config *const this)
{
  bool v1; // bl
  common::milog::MiLogStream *v2; // rax
  bool is_readlink; // bl
  bool v5; // bl
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v8; // rax
  Flag<ConfigOption> flag; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<ScriptLibBase> p_script_lib_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  Flag<ConfigOption>::Flag(&flag);
  std::shared_ptr<ScriptLibBase>::shared_ptr(&p_script_lib_ptr, 0LL);
  v1 = HK4EDesignConfig::init(&this->design_config_, &p_script_lib_ptr, &flag) != 0;
  std::shared_ptr<ScriptLibBase>::~shared_ptr(&p_script_lib_ptr);
  if ( v1 )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadDesignConfig",
      182);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v2, (const char (*)[22])"initDesignConfig fail");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    HK4EDesignConfig::setItemOutputLimitMap(&this->design_config_, &this->item_output_limit_map);
    HK4EDesignConfig::setRegionName(&this->design_config_, &this->region_name);
    if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_readlink);
    is_readlink = this->is_readlink;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
      (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr,
      &ResourceBox::mysql_mgr_ptr);
    v5 = HK4EDesignConfig::loadDesignConfig(
           &this->design_config_,
           (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)&p_script_lib_ptr,
           0LL,
           is_readlink) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr);
    if ( v5 )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadDesignConfig",
        191);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])"loadDesignConfig fail");
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(&this->region_name) != 1
        && !DbDeployConfigMgr::findDbRegionConfig(
              &this->design_config_.db_config_mgr.db_deploy_config_mgr,
              &this->region_name) )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadDesignConfig",
          197);
        v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v11,
               (const char (*)[52])"db_config_mgr findDbRegionConfig failed for region:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &this->region_name);
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
      return 0;
    }
  }
};

// Line 203: range 000000000DEAB89E-000000000DEABAE8
// local variable allocation has failed, the output may be wrong!
void __cdecl Config::onReloadConfig(Config *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  MonitorReport *v4; // r14
  GCGService *v5; // r14
  std::string v6; // [rsp+0h] [rbp-C0h] OVERLAPPED BYREF
  std::shared_ptr<proto::ReloadConfigNotify> p_proto_ptr; // [rsp+20h] [rbp-A0h] BYREF
  std::string v8; // [rsp+30h] [rbp-90h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v6._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 reload_notify_ptr:209";
  *(_QWORD *)(v1 + 16) = Config::onReloadConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator((char *)&v6._anon_0._M_allocated_capacity + 15);
  std::string::basic_string<std::allocator<char>>(
    &v8,
    byte_1BABF140,
    (const std::allocator<char> *)&v6._anon_0._M_allocated_capacity + 15);
  if ( *(_BYTE *)(((v6._M_string_length + 168) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v6._M_string_length + 168) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v6._M_string_length + 168);
  }
  MonitorReport::addValue(v4, MONITOR_XML_CONFIG_VERSION, *(_DWORD *)(v6._M_string_length + 168), v6);
  std::string::~string(&v8);
  std::allocator<char>::~allocator((char *)&v6._anon_0._M_allocated_capacity + 15);
  if ( ServiceBox::findService<GCGService>() )
  {
    common::tools::perf::make_shared<proto::ReloadConfigNotify>();
    v5 = ServiceBox::findService<GCGService>();
    std::shared_ptr<proto::ReloadConfigNotify>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReloadConfigNotify> *)(v1 + 32));
    GCGService::broadcastToAllThread<proto::ReloadConfigNotify>(v5, &p_proto_ptr);
    std::shared_ptr<proto::ReloadConfigNotify>::~shared_ptr(&p_proto_ptr);
    std::shared_ptr<proto::ReloadConfigNotify>::~shared_ptr((std::shared_ptr<proto::ReloadConfigNotify> *const)(v1 + 32));
  }
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 215: range 000000000DEABAEA-000000000DEAC244
int32_t __cdecl Config::loadItemLimitConfig(Config *const this, const common::tools::PTree *root)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::tools::PTree *p_second; // r14
  common::tools::PTree *v6; // r14
  common::tools::PTree *v7; // r14
  common::tools::PTree *v8; // r14
  ItemOutputLimitConfig *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ItemOutputLimitConfig> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t v12; // r14d
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  std::allocator<char> v21; // [rsp+24h] [rbp-13Ch] BYREF
  std::allocator<char> v22; // [rsp+25h] [rbp-13Bh] BYREF
  std::allocator<char> v23; // [rsp+26h] [rbp-13Ah] BYREF
  std::allocator<char> __a; // [rsp+27h] [rbp-139h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+38h] [rbp-128h]
  const std::pair<std::string,common::tools::PTree> *pt; // [rsp+40h] [rbp-120h]
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-110h] BYREF
  std::string child_name; // [rsp+70h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 24 item_output_limit_pt:216 64 16 28 item_output_limit_config:231 96 24 11 pt_list:228";
  *(_QWORD *)(v2 + 16) = Config::loadItemLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  common::tools::PTree::PTree((common::tools::PTree *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ItemOutputLimit", &__a);
  common::tools::PTree::getChild(root, &child_name);
  common::tools::PTree::operator=((common::tools::PTree *const)(v2 + 32), (common::tools::PTree *)&__for_end);
  common::tools::PTree::~PTree((common::tools::PTree *const)&__for_end);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::map<unsigned int,ItemOutputLimitConfig>::clear(&this->item_output_limit_map);
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 96),
    (const common::tools::PTree *const)(v2 + 32));
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 96);
  __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 96))._M_node;
  __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 76) = 0;
    p_second = &pt->second;
    std::allocator<char>::allocator(&v21);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.item_id", &v21);
    *(_DWORD *)(v2 + 64) = common::tools::PTree::get<unsigned int>(p_second, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&v21);
    v6 = &pt->second;
    std::allocator<char>::allocator(&v22);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.reward_limit", &v22);
    *(_DWORD *)(v2 + 68) = common::tools::PTree::get<unsigned int>(v6, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&v22);
    v7 = &pt->second;
    std::allocator<char>::allocator(&v23);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.drop_limit", &v23);
    *(_DWORD *)(v2 + 72) = common::tools::PTree::get<unsigned int>(v7, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&v23);
    v8 = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.mail_limit", &__a);
    *(_DWORD *)(v2 + 76) = common::tools::PTree::get<unsigned int>(v8, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v10 = std::map<unsigned int,ItemOutputLimitConfig>::emplace<unsigned int &,ItemOutputLimitConfig&>(
            &this->item_output_limit_map,
            (unsigned int *)(v2 + 64),
            (ItemOutputLimitConfig *)(v2 + 64),
            (unsigned int *)&this->item_output_limit_map,
            v9);
    if ( !v10.second )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadItemLimitConfig",
        238);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v29,
              (const char (*)[43])"duplicate item_output_limit node, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v12 = -1;
      goto LABEL_10;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "loadItemLimitConfig",
      241);
    v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[33])"load item_output_limit, item_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" reward_limit:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 68));
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" drop_limit:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 72));
    v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" mail_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 76));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
  }
  v12 = 0;
LABEL_10:
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 96));
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v12;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

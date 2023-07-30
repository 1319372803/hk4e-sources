// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/config/config.cpp

// Line 22: range 0000000003845C8A-0000000003846219
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  ConfigBasePtr v6; // rdx
  bool v7; // r14
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  common::tools::PTree *v10; // r14
  common::milog::MiLogStream *v11; // rsi
  __int64 v12; // rdx
  char v13; // al
  const char *v14; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-B1h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 region_pt:37 64 16 13 version_pt:29";
  *(_QWORD *)(v3 + 16) = Config::loadConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 64), p_prev_config_ptr);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 64);
  v7 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 64));
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      25);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v18,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v9 = -1;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v18, "Root.BuildVersion", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v18);
    std::string::~string(&v18);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 64)) )
    {
      v10 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 64));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v18, "<xmlattr>.value", &__a);
      v11 = &v18;
      v12 = common::tools::PTree::get<unsigned int>(v10, (const std::string *)&v18, 0);
      v13 = *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(&this->xml_config_version, v11, v12);
      }
      this->xml_config_version = v12;
      std::string::~string(&v18);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v18,
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
      common::milog::MiLogStream::operator()(&v18, "load xml_config_version=%u", this->xml_config_version);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v18, "Root.RegionConf", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v18);
    std::string::~string(&v18);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadConfig",
      38);
    v14 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v18, "load region_name=%s", v14);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v9 = 0;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 64));
  }
  result = v9;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 44: range 000000000384621A-0000000003846234
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  NodeserverApp *v1; // rax

  v1 = Singleton<NodeserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 49: range 0000000003846236-000000000384631A
// local variable allocation has failed, the output may be wrong!
void __cdecl Config::onReloadConfig(Config *const this)
{
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::string v2; // [rsp+0h] [rbp-50h] OVERLAPPED BYREF
  std::string v3; // [rsp+20h] [rbp-30h] BYREF

  v2._M_string_length = (std::string::size_type)this;
  v1 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator((char *)&v2._anon_0._M_allocated_capacity + 15);
  std::string::basic_string<std::allocator<char>>(
    &v3,
    byte_8C847C0,
    (const std::allocator<char> *)&v2._anon_0._M_allocated_capacity + 15);
  if ( *(_BYTE *)(((v2._M_string_length + 168) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v2._M_string_length + 168) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v2._M_string_length + 168);
  }
  MonitorReport::addValue(v1, MONITOR_XML_CONFIG_VERSION, *(_DWORD *)(v2._M_string_length + 168), v2);
  std::string::~string(&v3);
  std::allocator<char>::~allocator((char *)&v2._anon_0._M_allocated_capacity + 15);
};

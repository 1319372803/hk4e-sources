// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/config/config.cpp

// Line 20: range 000000000043E11C-000000000043E36A
int32_t __cdecl Config::loadDesignConfig(Config *const this)
{
  bool v1; // bl
  common::milog::MiLogStream *v2; // rax
  bool v4; // bl
  common::milog::MiLogStream *v5; // rax
  Flag<ConfigOption> flag; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  std::make_shared<common::midb::MySqlMgrT<std::mutex>>();
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::operator=(&ResourceBox::mysql_mgr_ptr, &__r);
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr(&__r);
  Flag<ConfigOption>::Flag(&flag);
  std::make_shared<ScriptLibBase>();
  v1 = HK4EDesignConfig::init(&this->design_config, (ScriptLibBasePtr *)&__r, &flag) != 0;
  std::shared_ptr<ScriptLibBase>::~shared_ptr((std::shared_ptr<ScriptLibBase> *const)&__r);
  if ( v1 )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadDesignConfig",
      24);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v2, (const char (*)[24])"initDesignConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->design_config.is_used_by_robot >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->design_config.is_used_by_robot >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->design_config.is_used_by_robot);
    }
    this->design_config.is_used_by_robot = 1;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(&__r, &ResourceBox::mysql_mgr_ptr);
    v4 = HK4EDesignConfig::loadDesignConfig(&this->design_config, &__r, 0LL, 0) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr(&__r);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadDesignConfig",
        31);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"loadDesignConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 38: range 000000000043E36C-000000000043E718
int32_t __cdecl Config::loadFirstPacketSecretKey(Config *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-371h] BYREF
  std::istreambuf_iterator<char> __beg; // [rsp+20h] [rbp-370h] BYREF
  std::istreambuf_iterator<char> __end; // [rsp+30h] [rbp-360h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-350h] BYREF
  char v9[816]; // [rsp+60h] [rbp-330h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(768LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 32 12 file_path:39 112 520 6 ifs:40";
  *(_QWORD *)(v1 + 16) = Config::loadFirstPacketSecretKey;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862739] = -218103808;
  v3[536862740] = -202116109;
  v3[536862741] = -202116109;
  v3[536862742] = -202116109;
  v3[536862743] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v1 + 48), "./encryptVector.dat", &__a);
  std::allocator<char>::~allocator(&__a);
  std::ifstream::basic_ifstream(v1 + 112, v1 + 48, 8LL);
  if ( (unsigned __int8)std::ios::fail(v1 + 368) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "loadFirstPacketSecretKey",
      43);
    common::milog::MiLogStream::operator()(&v8, "loadFirstPacketSecretKey failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  std::allocator<char>::allocator(&__a);
  std::istreambuf_iterator<char>::istreambuf_iterator(&__end);
  std::istreambuf_iterator<char>::istreambuf_iterator(
    &__beg,
    (std::istreambuf_iterator<char>::istream_type *)(v1 + 112));
  std::string::basic_string<std::istreambuf_iterator<char>,void>((std::string *const)&v8, __beg, __end, &__a);
  std::string::operator=(&this->first_packet_secret_key, (std::string *)&v8);
  std::string::~string((std::string *const)&v8);
  std::allocator<char>::~allocator(&__a);
  std::ifstream::~ifstream(v1 + 112);
  std::string::~string((std::string *const)(v1 + 48));
  result = 0;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 55: range 000000000043E71A-000000000043ECA9
int32_t __cdecl Config::loadRsakey(Config *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-651h] BYREF
  std::istreambuf_iterator<char> __beg; // [rsp+20h] [rbp-650h] BYREF
  std::istreambuf_iterator<char> __end; // [rsp+30h] [rbp-640h] BYREF
  std::string __str; // [rsp+40h] [rbp-630h] BYREF
  std::string v12; // [rsp+60h] [rbp-610h] BYREF
  char v13[1520]; // [rsp+80h] [rbp-5F0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1472LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 32 21 server_public_file:56 96 32 22 client_private_file:57 160 520 19 server_public_fs:58 "
                        "816 520 20 client_private_fs:63";
  *(_QWORD *)(v1 + 16) = Config::loadRsakey;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862741] = -218959360;
  v3[536862742] = -218959118;
  v3[536862743] = -218959118;
  v3[536862744] = -218959118;
  v3[536862745] = 62194;
  v3[536862761] = -218103808;
  v3[536862762] = -202116109;
  v3[536862763] = -202116109;
  v3[536862764] = -202116109;
  v3[536862765] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v1 + 32), "./conf/server_public.key", &__a);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v1 + 96), "./conf/client_private.key", &__a);
  std::allocator<char>::~allocator(&__a);
  std::ifstream::basic_ifstream(v1 + 160, v1 + 32, 8LL);
  if ( (unsigned __int8)std::ios::fail(v1 + 416) != 1 )
  {
    std::allocator<char>::allocator(&__a);
    std::istreambuf_iterator<char>::istreambuf_iterator(&__end);
    std::istreambuf_iterator<char>::istreambuf_iterator(
      &__beg,
      (std::istreambuf_iterator<char>::istream_type *)(v1 + 160));
    std::string::basic_string<std::istreambuf_iterator<char>,void>(&__str, __beg, __end, &__a);
    std::string::operator=(&this->server_public_key, &__str);
    std::string::~string(&__str);
    std::allocator<char>::~allocator(&__a);
  }
  std::ifstream::basic_ifstream(v1 + 816, v1 + 96, 8LL);
  if ( (unsigned __int8)std::ios::fail(v1 + 1072) != 1 )
  {
    std::allocator<char>::allocator(&__a);
    std::istreambuf_iterator<char>::istreambuf_iterator(&__end);
    std::istreambuf_iterator<char>::istreambuf_iterator(
      &__beg,
      (std::istreambuf_iterator<char>::istream_type *)(v1 + 816));
    std::string::basic_string<std::istreambuf_iterator<char>,void>(&v12, __beg, __end, &__a);
    std::string::operator=(&this->client_private_key, &v12);
    std::string::~string(&v12);
    std::allocator<char>::~allocator(&__a);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/config/config.cpp",
    "loadRsakey",
    69);
  v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
         (common::milog::MiLogStream *const)&v12,
         (const char (*)[19])"server_public_key:");
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->server_public_key);
  v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])" client_private_key:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->client_private_key);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v12);
  std::ifstream::~ifstream(v1 + 816);
  std::ifstream::~ifstream(v1 + 160);
  std::string::~string((std::string *const)(v1 + 96));
  std::string::~string((std::string *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80A4) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF80B4) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1472LL, v13);
  }
  return 0;
};

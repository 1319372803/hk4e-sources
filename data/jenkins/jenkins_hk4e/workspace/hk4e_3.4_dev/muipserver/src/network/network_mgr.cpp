// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/network/network_mgr.cpp

// Line 24: range 000000000CBF508E-000000000CBF519C
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnectBase> > __r; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<common::minet::AServerMgr<HttpSession> > v4; // [rsp+20h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->http_ptr_);
  std::shared_ptr<common::minet::AClientBase>::shared_ptr(&this->nodeserver_ptr_);
  common::tools::perf::make_shared<common::minet::AClientMgr<NodeserverConnectBase>>();
  std::shared_ptr<common::minet::AClientBase>::operator=<common::minet::AClientMgr<NodeserverConnectBase>>(
    &this->nodeserver_ptr_,
    &__r);
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnectBase>>::~shared_ptr(&__r);
  common::tools::perf::make_shared<common::minet::AServerMgr<HttpSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<HttpSession>>(&this->http_ptr_, &v4);
  std::shared_ptr<common::minet::AServerMgr<HttpSession>>::~shared_ptr(&v4);
};

// Line 32: range 000000000CBF524C-000000000CBF5E57
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MuipserverApp *v6; // rax
  _BOOL4 v7; // r14d
  MuipserverApp *v8; // rax
  MuipserverApp *v9; // r14
  MuipserverApp *v10; // rax
  uint32_t AppId; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _BOOL4 v14; // r14d
  Json::Value_0 *v15; // rax
  bool v16; // r14
  int v17; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  unsigned __int64 v20; // rax
  MuipserverApp *v21; // rax
  __int64 v22; // rsi
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  unsigned __int64 v28; // rax
  int32_t result; // eax
  std::string v30; // [rsp+0h] [rbp-160h]
  unsigned int (__fastcall *v31)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-158h]
  void (__fastcall *v32)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, common::milog::MiLogStream *); // [rsp+8h] [rbp-158h]
  std::allocator<char> __a; // [rsp+22h] [rbp-13Eh] BYREF
  bool rewrite_with_remote_json; // [rsp+23h] [rbp-13Dh]
  uint32_t port_http; // [rsp+24h] [rbp-13Ch]
  std::string value; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-110h] BYREF
  char v38[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v38;
  v30._M_dataplus._M_p = v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 10 http_pt:57 80 8 8 ns_pt:67 112 40 16 remote_config:37";
  *(_QWORD *)(v3 + 16) = NetworkMgr::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value(v3 + 112, 0LL);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v3 + 112)) )
    rewrite_with_remote_json = 1;
  if ( !rewrite_with_remote_json )
    goto LABEL_11;
  v6 = Singleton<MuipserverApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      47);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v37,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v2 = -1;
    v7 = 0;
    goto LABEL_37;
  }
  v8 = Singleton<MuipserverApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      52);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v37,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "Root.NetConf.HttpServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v37);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<MuipserverApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "port_http", &__a);
    v10 = Singleton<MuipserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port_http = AppBase::findAppPort((AppBase *const)v9, AppId, v30);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port_http);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v37, &value);
    std::string::~string(&v37);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v30._anon_0._M_allocated_capacity + 1) + 8));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = *(_QWORD *)v12 + 8LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(*(_QWORD *)v12 + 8LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v12, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        62);
      common::milog::MiLogStream::operator()(&v37, "init http failed");
      common::milog::MiLogStream::~MiLogStream(&v37);
      v2 = -1;
      v14 = 0;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v37,
        "Root.NetConf.NodeserverClientConf",
        &__a);
      common::tools::PTree::getChild(
        (const common::tools::PTree *const)v30._anon_0._M_allocated_capacity,
        (const std::string *)&v37);
      std::string::~string(&v37);
      std::allocator<char>::~allocator(&__a);
      if ( rewrite_with_remote_json
        && (std::allocator<char>::allocator(&__a),
            std::string::basic_string<std::allocator<char>>((std::string *const)&v37, "port_service", &__a),
            v15 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 112), "nodeserver"),
            v16 = NetworkMgrBase::convertConnectionListJsonToPTree(
                    (const Json::Value *)v15,
                    (const std::string *)&v37,
                    (common::tools::PTree *)(v3 + 80)) != 0,
            std::string::~string(&v37),
            std::allocator<char>::~allocator(&__a),
            v16) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "init",
          72);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v37,
          (const char (*)[33])"convert nodeserver config failed");
        common::milog::MiLogStream::~MiLogStream(&v37);
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v30._anon_0._M_allocated_capacity + 1) + 24));
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v18);
        v20 = (unsigned __int64)(v19->_vptr_AClientBase + 1);
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          v20 = __asan_report_load8(v19->_vptr_AClientBase + 1);
        v31 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v20;
        v21 = Singleton<MuipserverApp>::instance();
        v22 = AppBase::getAppId((AppBase *const)v21);
        if ( v31(v19, v22, v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/network_mgr.cpp",
            "init",
            78);
          common::milog::MiLogStream::operator()(&v37, "init nodeserver failed");
          common::milog::MiLogStream::~MiLogStream(&v37);
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v23 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v30._anon_0._M_allocated_capacity + 1) + 8));
          v24 = v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v23);
          v25 = (unsigned __int64)(v24->_vptr_AServerBase + 9);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8(v24->_vptr_AServerBase + 9);
          v30._M_string_length = *(_QWORD *)v25;
          std::function<int ()(void)>::function<NetworkMgr::init(common::tools::PTree &)::{lambda(void)#1},void,void>(
            (std::function<int()> *const)&v37,
            (NetworkMgr::init::<lambda()>)v22);
          ((void (__fastcall *)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, common::milog::MiLogStream *))v30._M_string_length)(
            v24,
            &v37);
          std::function<int ()(void)>::~function((std::function<int()> *const)&v37);
          v26 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v30._anon_0._M_allocated_capacity + 1) + 8));
          v27 = v26;
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v26);
          v28 = (unsigned __int64)(v27->_vptr_AServerBase + 10);
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            v28 = __asan_report_load8(v27->_vptr_AServerBase + 10);
          v32 = *(void (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, common::milog::MiLogStream *))v28;
          std::function<void ()(void)>::function<NetworkMgr::init(common::tools::PTree &)::{lambda(void)#2},void,void>(
            (std::function<void()> *const)&v37,
            (NetworkMgr::init::<lambda()>)&v37);
          v32(v27, &v37);
          std::function<void ()(void)>::~function((std::function<void()> *const)&v37);
          v17 = 1;
        }
      }
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
      v14 = v17 == 1;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v14;
  }
LABEL_37:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 112));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v30._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 83: range 000000000CBF519E-000000000CBF5237
int __cdecl NetworkMgr::init(common::tools::PTree &)::{lambda(void)#1}::operator()(
        const NetworkMgr::init::<lambda()> *const __closure)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( mysqlpp::Connection::thread_start() )
    return 0;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/network/network_mgr.cpp",
    "operator()",
    87);
  common::milog::MiLogStream::operator()(&v2, "Connection::thread_start failed");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 92: range 000000000CBF5238-000000000CBF524B
void __cdecl NetworkMgr::init(common::tools::PTree &)::{lambda(void)#2}::operator()(
        const NetworkMgr::init::<lambda()> *const __closure)
{
  mysqlpp::Connection::thread_end();
};

// Line 108: range 000000000CBF5E58-000000000CBF64E8
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  MuipserverApp *v6; // rax
  _BOOL4 v7; // r14d
  Json::Value_0 *v8; // rax
  bool v9; // r14
  int v10; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  MuipserverApp *v14; // rax
  __int64 AppId; // rsi
  int32_t result; // eax
  unsigned int (__fastcall *v17)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-118h]
  std::allocator<char> __a; // [rsp+26h] [rbp-FAh] BYREF
  bool rewrite_with_remote_json; // [rsp+27h] [rbp-F9h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 9 ns_pt:129 80 40 17 remote_config:113";
  *(_QWORD *)(v3 + 16) = NetworkMgr::reload;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value(v3 + 80, 0LL);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v3 + 80)) )
    rewrite_with_remote_json = 1;
  if ( rewrite_with_remote_json
    && (v6 = Singleton<MuipserverApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80))) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      123);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v20,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v2 = -1;
    v7 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "Root.NetConf.NodeserverClientConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v20);
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( rewrite_with_remote_json
      && (std::allocator<char>::allocator(&__a),
          std::string::basic_string<std::allocator<char>>((std::string *const)&v20, "port_service", &__a),
          v8 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 80), "nodeserver"),
          v9 = NetworkMgrBase::convertConnectionListJsonToPTree(
                 (const Json::Value *)v8,
                 (const std::string *)&v20,
                 (common::tools::PTree *)(v3 + 48)) != 0,
          std::string::~string(&v20),
          std::allocator<char>::~allocator(&__a),
          v9) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "reload",
        134);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v20,
        (const char (*)[33])"convert nodeserver config failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v11);
      v13 = (unsigned __int64)(v12->_vptr_AClientBase + 2);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v12->_vptr_AClientBase + 2);
      v17 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v13;
      v14 = Singleton<MuipserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v14);
      if ( v17(v12, AppId, v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "reload",
          140);
        common::milog::MiLogStream::operator()(&v20, "reload nodeserver failed");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v10 == 1;
  }
  Json::Value::~Value((Json::Value_0 *const)(v3 + 80));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v21 == (char *)v3 )
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

// Line 154: range 000000000CBF64EA-000000000CBF65C1
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 24LL);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
  v4 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr_);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 16LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 16LL);
  return v3 | (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
};

// Line 160: range 000000000CBF65C2-000000000CBF66A3
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 56LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 56LL);
  if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))v2)(v1) )
    return 0;
  v3 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr_);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3);
  v4 = *(_QWORD *)v3 + 48LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)v3 + 48LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v4)(v3) != 0;
};

// Line 166: range 000000000CBF66A4-000000000CBF677B
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 48LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 48LL);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
  v4 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr_);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 40LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 40LL);
  return v3 | (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
};

// Line 172: range 000000000CBF677C-000000000CBF69FB
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::minet::Packet *v4; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 (__fastcall *v9)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  common::minet::Packet *v10; // rax
  uint32_t TargetAppId; // r13d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64); // r12
  common::minet::Packet *v16; // rax
  uint32_t SendOffset; // r13d
  std::shared_ptr<common::minet::Packet> v19; // [rsp+10h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-40h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      175);
    common::milog::MiLogStream::operator()(&v20, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getTargetService(v3) == 4
      && (v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr),
          common::minet::Packet::getTargetAppId(v4)) )
    {
      v6 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      v8 = (unsigned __int64)(v7->_vptr_AClientBase + 10);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v7->_vptr_AClientBase + 10);
      v9 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v8;
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      TargetAppId = common::minet::Packet::getTargetAppId(v10);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v19, p_packet_ptr);
      v2 = v9(v7, &v19, TargetAppId);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v19);
    }
    else
    {
      v12 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      v14 = (unsigned __int64)(v13->_vptr_AClientBase + 11);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v13->_vptr_AClientBase + 11);
      v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64))v14;
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      SendOffset = common::minet::Packet::getSendOffset(v16);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v19, p_packet_ptr);
      v2 = v15(v13, &v19, SendOffset, 1LL);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v19);
    }
  }
  return v2;
};

// Line 190: range 000000000CBF69FC-000000000CBF6BE2
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 (__fastcall *v7)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r12
  int32_t ret; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<common::minet::Packet> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "broadcastPacket",
      193);
    common::milog::MiLogStream::operator()(&v10, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    ret = 0;
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    if ( common::minet::Packet::getTargetService(v3) == 4 )
    {
      v4 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4);
      v6 = (unsigned __int64)(v5->_vptr_AClientBase + 12);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v5->_vptr_AClientBase + 12);
      v7 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v6;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      ret = v7(v5, &v9);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v9);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "broadcastPacket",
        203);
      common::milog::MiLogStream::operator()(&v10, "Just support broadcast to All Node!");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    return ret;
  }
};

// Line 210: range 000000000CBF6BE4-000000000CBF6DE2
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( std::__shared_ptr<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->http_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      213);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Http num:");
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(_QWORD *)v2 + 96LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 96LL);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( std::__shared_ptr<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->nodeserver_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      217);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Node num:");
    v5 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 72LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 72LL);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

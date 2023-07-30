// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/network_mgr.cpp

// Line 26: range 00000000175A4ABC-00000000175A4BCA
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx
  std::shared_ptr<common::minet::AServerMgr<GateserverSession> > __r; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnect> > v3; // [rsp+20h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->gateserver_ptr_);
  std::shared_ptr<common::minet::AClientBase>::shared_ptr(&this->nodeserver_ptr_);
  common::tools::perf::make_shared<common::minet::AServerMgr<GateserverSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<GateserverSession>>(
    &this->gateserver_ptr_,
    &__r);
  std::shared_ptr<common::minet::AServerMgr<GateserverSession>>::~shared_ptr(&__r);
  common::tools::perf::make_shared<common::minet::AClientMgr<NodeserverConnect>>();
  std::shared_ptr<common::minet::AClientBase>::operator=<common::minet::AClientMgr<NodeserverConnect>>(
    &this->nodeserver_ptr_,
    &v3);
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnect>>::~shared_ptr(&v3);
};

// Line 32: range 00000000175A4BCC-00000000175A4C39
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AClientBase>::~shared_ptr(&this->nodeserver_ptr_);
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->gateserver_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 32: range 00000000175A4C3A-00000000175A4C64
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x28uLL);
};

// Line 38: range 00000000175A4C66-00000000175A5702
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GameserverApp *v6; // rax
  _BOOL4 v7; // r14d
  GameserverApp *v8; // rax
  GameserverApp *v9; // r14
  GameserverApp *v10; // rax
  uint32_t AppId; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _BOOL4 v14; // r14d
  Json::Value_0 *v15; // rax
  bool v16; // r14
  int v17; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  unsigned __int64 v19; // rax
  GameserverApp *v20; // rax
  __int64 v21; // rsi
  int32_t result; // eax
  std::string v23; // [rsp+0h] [rbp-160h]
  unsigned int (__fastcall *v24)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-158h]
  std::allocator<char> __a; // [rsp+22h] [rbp-13Eh] BYREF
  bool rewrite_with_remote_json; // [rsp+23h] [rbp-13Dh]
  uint32_t port; // [rsp+24h] [rbp-13Ch]
  std::string value; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-110h] BYREF
  char v30[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v23._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v30;
  v23._M_dataplus._M_p = v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 10 gate_pt:64 80 8 8 ns_pt:74 112 40 16 remote_config:43";
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
  v6 = Singleton<GameserverApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      53);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v29,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v2 = -1;
    v7 = 0;
    goto LABEL_29;
  }
  v8 = Singleton<GameserverApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      58);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v29,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v29);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v29, "Root.NetConf.GateserverServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v29);
    std::string::~string(&v29);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<GameserverApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v29, "port_gt", &__a);
    v10 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port = AppBase::findAppPort((AppBase *const)v9, AppId, v23);
    std::string::~string(&v29);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v29, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v29, &value);
    std::string::~string(&v29);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v23._anon_0._M_allocated_capacity + 1) + 8));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 8LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v12, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        69);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v29,
        (const char (*)[27])"init gateserver_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v2 = -1;
      v14 = 0;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v29,
        "Root.NetConf.NodeserverClientConf",
        &__a);
      common::tools::PTree::getChild(
        (const common::tools::PTree *const)v23._anon_0._M_allocated_capacity,
        (const std::string *)&v29);
      std::string::~string(&v29);
      std::allocator<char>::~allocator(&__a);
      if ( rewrite_with_remote_json
        && (std::allocator<char>::allocator(&__a),
            std::string::basic_string<std::allocator<char>>((std::string *const)&v29, "port_service", &__a),
            v15 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 112), "nodeserver"),
            v16 = NetworkMgrBase::convertConnectionListJsonToPTree(
                    (const Json::Value *)v15,
                    (const std::string *)&v29,
                    (common::tools::PTree *)(v3 + 80)) != 0,
            std::string::~string(&v29),
            std::allocator<char>::~allocator(&__a),
            v16) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "init",
          79);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v29,
          (const char (*)[33])"convert nodeserver config failed");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v23._anon_0._M_allocated_capacity + 1) + 24));
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = (unsigned __int64)(v18->_vptr_AClientBase + 1);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          v19 = __asan_report_load8();
        v24 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v19;
        v20 = Singleton<GameserverApp>::instance();
        v21 = AppBase::getAppId((AppBase *const)v20);
        if ( v24(v18, v21, v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/network/network_mgr.cpp",
            "init",
            85);
          common::milog::MiLogStream::operator()(&v29, "init nodeserver failed");
          common::milog::MiLogStream::~MiLogStream(&v29);
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
      v14 = v17 == 1;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v14;
  }
LABEL_29:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 112));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v23._M_dataplus._M_p == (std::string::pointer)v3 )
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

// Line 99: range 00000000175A5704-00000000175A5D94
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  GameserverApp *v6; // rax
  _BOOL4 v7; // r14d
  Json::Value_0 *v8; // rax
  bool v9; // r14
  int v10; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  GameserverApp *v13; // rax
  __int64 AppId; // rsi
  int32_t result; // eax
  unsigned int (__fastcall *v16)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-118h]
  std::allocator<char> __a; // [rsp+26h] [rbp-FAh] BYREF
  bool rewrite_with_remote_json; // [rsp+27h] [rbp-F9h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 9 ns_pt:120 80 40 17 remote_config:105";
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
    && (v6 = Singleton<GameserverApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80))) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      115);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v19,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v2 = -1;
    v7 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v19, "Root.NetConf.NodeserverClientConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v19);
    std::string::~string(&v19);
    std::allocator<char>::~allocator(&__a);
    if ( rewrite_with_remote_json
      && (std::allocator<char>::allocator(&__a),
          std::string::basic_string<std::allocator<char>>((std::string *const)&v19, "port_service", &__a),
          v8 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 80), "nodeserver"),
          v9 = NetworkMgrBase::convertConnectionListJsonToPTree(
                 (const Json::Value *)v8,
                 (const std::string *)&v19,
                 (common::tools::PTree *)(v3 + 48)) != 0,
          std::string::~string(&v19),
          std::allocator<char>::~allocator(&__a),
          v9) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "reload",
        125);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v19,
        (const char (*)[33])"convert nodeserver config failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(v11->_vptr_AClientBase + 2);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v16 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v12;
      v13 = Singleton<GameserverApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v13);
      if ( v16(v11, AppId, v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "reload",
          131);
        common::milog::MiLogStream::operator()(&v19, "reload nodeserver failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
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
  if ( v20 == (char *)v3 )
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

// Line 145: range 00000000175A5D96-00000000175A5E6D
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v2 = *(_QWORD *)v1 + 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v3 = (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
  v4 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  v5 = *(_QWORD *)v4 + 16LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  return v3 | (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
};

// Line 152: range 00000000175A5E6E-00000000175A5F4F
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v2 = *(_QWORD *)v1 + 56LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))v2)(v1) )
    return 0;
  v3 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  v4 = *(_QWORD *)v3 + 48LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v4)(v3) != 0;
};

// Line 158: range 00000000175A5F50-00000000175A5FD6
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/network/network_mgr.cpp",
    "stop",
    159);
  common::milog::MiLogStream::operator()(&v2, off_2614A9E0);
  common::milog::MiLogStream::~MiLogStream(&v2);
  return -1;
};

// Line 165: range 00000000175A5FD8-00000000175A6045
int32_t __cdecl NetworkMgr::stopGateserver(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v2 = *(_QWORD *)v1 + 40LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 171: range 00000000175A6046-00000000175A60B3
int32_t __cdecl NetworkMgr::stopNodeserverClient(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  v2 = *(_QWORD *)v1 + 48LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 177: range 00000000175A60B4-00000000175A656D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  const std::shared_ptr<common::minet::Packet> *v2; // rsi
  int32_t v3; // ebx
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v4; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t TargetService; // eax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v7; // rsi
  common::minet::Packet *v8; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  const std::shared_ptr<common::minet::Packet> *v12; // rsi
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 (__fastcall *v15)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v16; // rsi
  common::minet::Packet *v17; // rax
  uint32_t SendOffset; // r13d
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v19; // rsi
  common::minet::Packet *v20; // rax
  uint32_t v21; // ebx
  GameserverApp *v22; // rax
  common::minet::PacketPtr v23; // rdi
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v24; // rsi
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v26; // rsi
  common::minet::Packet *v27; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rbx
  unsigned __int64 v30; // rax
  __int64 (__fastcall *v31)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v32; // rsi
  common::minet::Packet *v33; // rax
  uint32_t TargetAppId; // r13d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rbx
  unsigned __int64 v36; // rax
  __int64 (__fastcall *v37)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64); // r12
  const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const v38; // rsi
  common::minet::Packet *v39; // rax
  uint32_t v40; // r13d
  uint32_t gateserver_app_id; // [rsp+1Ch] [rbp-54h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v44; // [rsp+30h] [rbp-40h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, v2) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      180);
    common::milog::MiLogStream::operator()(&v44, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v44);
    return -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v4);
    TargetService = common::minet::Packet::getTargetService(v5);
    if ( TargetService == 2 )
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v7);
      gateserver_app_id = common::minet::Packet::getTargetAppId(v8);
      if ( gateserver_app_id )
      {
        v9 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = (unsigned __int64)(v9->_vptr_AServerBase + 13);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v10;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&packet_ptr, v12);
        v3 = v11(v9, &packet_ptr, gateserver_app_id);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
      else
      {
        v13 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = (unsigned __int64)(v13->_vptr_AServerBase + 14);
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        v15 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v14;
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v16);
        SendOffset = common::minet::Packet::getSendOffset(v17);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)v16);
        v3 = v15(v13, &packet_ptr, SendOffset);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
    }
    else if ( TargetService == 3
           && (v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v19),
               v21 = common::minet::Packet::getTargetAppId(v20),
               v22 = Singleton<GameserverApp>::instance(),
               v21 == AppBase::getAppId((AppBase *const)v22)) )
    {
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)v23._M_refcount._M_pi);
      v23._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&packet_ptr;
      v3 = ServiceBox::pushPacketToService(v23);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    else
    {
      v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v24);
      if ( common::minet::Packet::getTargetService(v25) == 4
        && (v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v26),
            common::minet::Packet::getTargetAppId(v27)) )
      {
        v29 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = (unsigned __int64)(v29->_vptr_AClientBase + 10);
        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
          v30 = __asan_report_load8();
        v31 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v30;
        v33 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v32);
        TargetAppId = common::minet::Packet::getTargetAppId(v33);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)v32);
        v3 = v31(v29, &packet_ptr, TargetAppId);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
      else
      {
        v35 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v36 = (unsigned __int64)(v35->_vptr_AClientBase + 11);
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8();
        v37 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD, __int64))v36;
        v39 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v38);
        v40 = common::minet::Packet::getSendOffset(v39);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)v38);
        v3 = v37(v35, &packet_ptr, v40, 1LL);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
    }
  }
  return v3;
};

// Line 222: range 00000000175A656E-00000000175A6756
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 (__fastcall *v6)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r12
  uint32_t target_service; // [rsp+1Ch] [rbp-44h]
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
      225);
    common::milog::MiLogStream::operator()(&v10, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    target_service = common::minet::Packet::getTargetService(v3);
    if ( target_service == 4 )
    {
      v4 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = (unsigned __int64)(v4->_vptr_AClientBase + 12);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v5;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v9, p_packet_ptr);
      v2 = v6(v4, &v9);
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
        240);
      common::milog::MiLogStream::operator()(&v10, off_2614AA60, target_service);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
  }
  return v2;
};

// Line 248: range 00000000175A6758-00000000175A69DE
int32_t __cdecl NetworkMgr::findNodeserverAllConnTargetAppIdVec(
        NetworkMgr *const this,
        std::vector<unsigned int> *target_app_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<common::minet::AClientMgr<NodeserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t result; // eax
  std::vector<unsigned int> __x; // [rsp+10h] [rbp-B0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-90h] BYREF
  char v10[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 connect_ptr:254";
  *(_QWORD *)(v2 + 16) = NetworkMgr::findNodeserverAllConnTargetAppIdVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<common::minet::AClientBase>(&this->nodeserver_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "findNodeserverAllConnTargetAppIdVec",
      251);
    common::milog::MiLogStream::operator()(&v9, "nodeserver_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v5 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<common::minet::AClientMgr<NodeserverConnect>,common::minet::AClientBase>((const std::shared_ptr<common::minet::AClientBase> *)(v2 + 32));
    if ( std::operator==<common::minet::AClientMgr<NodeserverConnect>>(
           (const std::shared_ptr<common::minet::AClientMgr<NodeserverConnect> > *)(v2 + 32),
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "findNodeserverAllConnTargetAppIdVec",
        257);
      common::milog::MiLogStream::operator()(&v9, "connect_ptr null");
      common::milog::MiLogStream::~MiLogStream(&v9);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<common::minet::AClientMgr<NodeserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientMgr<NodeserverConnect>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::AClientMgr<NodeserverConnect>::getAllConnTargetAppIdVec(&__x, v6);
      std::vector<unsigned int>::operator=(target_app_id_vec, &__x);
      std::vector<unsigned int>::~vector(&__x);
      v5 = 0;
    }
    std::shared_ptr<common::minet::AClientMgr<NodeserverConnect>>::~shared_ptr((std::shared_ptr<common::minet::AClientMgr<NodeserverConnect> > *const)(v2 + 32));
  }
  result = v5;
  if ( v10 == (char *)v2 )
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

// Line 265: range 00000000175A69E0-00000000175A6BDE
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

  if ( std::__shared_ptr<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->gateserver_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      268);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Gate num:");
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 96LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
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
      272);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Node num:");
    v5 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 72LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    val = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

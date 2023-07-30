// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/network/network_mgr.cpp

// Line 24: range 000000000C5D6362-000000000C5D6421
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnectBase> > __r; // [rsp+10h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AClientBase>::shared_ptr(&this->nodeserver_ptr_);
  common::tools::perf::make_shared<common::minet::AClientMgr<NodeserverConnectBase>>();
  std::shared_ptr<common::minet::AClientBase>::operator=<common::minet::AClientMgr<NodeserverConnectBase>>(
    &this->nodeserver_ptr_,
    &__r);
  std::shared_ptr<common::minet::AClientMgr<NodeserverConnectBase>>::~shared_ptr(&__r);
};

// Line 28: range 000000000C5D6422-000000000C5D647F
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AClientBase>::~shared_ptr(&this->nodeserver_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 28: range 000000000C5D6480-000000000C5D64AA
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x18uLL);
};

// Line 34: range 000000000C5D64AC-000000000C5D6BE4
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DbgateApp *v6; // rax
  _BOOL4 v7; // r14d
  DbgateApp *v8; // rax
  Json::Value_0 *v9; // rax
  bool v10; // r14
  int v11; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  DbgateApp *v15; // rax
  __int64 AppId; // rsi
  int32_t result; // eax
  unsigned int (__fastcall *v18)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64); // [rsp+8h] [rbp-118h]
  std::allocator<char> __a; // [rsp+26h] [rbp-FAh] BYREF
  bool rewrite_with_remote_json; // [rsp+27h] [rbp-F9h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 8 ns_pt:60 80 40 16 remote_config:40";
  *(_QWORD *)(v3 + 16) = NetworkMgr::init;
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
  if ( !rewrite_with_remote_json )
    goto LABEL_11;
  v6 = Singleton<DbgateApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      50);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v21,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
    v7 = 0;
    goto LABEL_22;
  }
  v8 = Singleton<DbgateApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      55);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v21,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "Root.NetConf.NodeserverClientConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v21);
    std::string::~string(&v21);
    std::allocator<char>::~allocator(&__a);
    if ( rewrite_with_remote_json
      && (std::allocator<char>::allocator(&__a),
          std::string::basic_string<std::allocator<char>>((std::string *const)&v21, "port_service", &__a),
          v9 = Json::Value::operator[]((Json::Value_0 *const)(v3 + 80), "nodeserver"),
          v10 = NetworkMgrBase::convertConnectionListJsonToPTree(
                  (const Json::Value *)v9,
                  (const std::string *)&v21,
                  (common::tools::PTree *)(v3 + 48)) != 0,
          std::string::~string(&v21),
          std::allocator<char>::~allocator(&__a),
          v10) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        65);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v21,
        (const char (*)[33])"convert nodeserver config failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = -1;
      v11 = 0;
    }
    else
    {
      v12 = std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v12);
      v14 = (unsigned __int64)(v13->_vptr_AClientBase + 1);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v13->_vptr_AClientBase + 1);
      v18 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, __int64, unsigned __int64))v14;
      v15 = Singleton<DbgateApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v15);
      if ( v18(v13, AppId, v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "init",
          71);
        common::milog::MiLogStream::operator()(&v21, "init nodeserver failed");
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v11 == 1;
  }
LABEL_22:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 80));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 85: range 000000000C5D6BE6-000000000C5D7276
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  DbgateApp *v6; // rax
  _BOOL4 v7; // r14d
  Json::Value_0 *v8; // rax
  bool v9; // r14
  int v10; // r14d
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  DbgateApp *v14; // rax
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
  *(_QWORD *)(v3 + 8) = "2 48 8 9 ns_pt:105 80 40 16 remote_config:90";
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
    && (v6 = Singleton<DbgateApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80))) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      100);
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
        110);
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
      v14 = Singleton<DbgateApp>::instance();
      AppId = AppBase::getAppId((AppBase *const)v14);
      if ( v17(v12, AppId, v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "reload",
          116);
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

// Line 130: range 000000000C5D7278-000000000C5D72E5
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 24LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 24LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 136: range 000000000C5D72E6-000000000C5D7353
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 56LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 56LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 142: range 000000000C5D7354-000000000C5D73C1
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 48LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 48LL);
  return (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
};

// Line 148: range 000000000C5D73C2-000000000C5D7643
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
      151);
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

// Line 165: range 000000000C5D7644-000000000C5D76CE
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/network/network_mgr.cpp",
    "broadcastPacket",
    166);
  common::milog::MiLogStream::operator()(&v3, "wait to finish this func");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 171: range 000000000C5D76D0-000000000C5D77DA
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::__shared_ptr<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->nodeserver_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      174);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v5,
           (const char (*)[24])"ConnectionNum Node num:");
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AClientBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->nodeserver_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(_QWORD *)v2 + 72LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 72LL);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

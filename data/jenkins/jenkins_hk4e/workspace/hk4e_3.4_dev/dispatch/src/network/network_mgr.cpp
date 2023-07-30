// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/network/network_mgr.cpp

// Line 25: range 000000000C618EA2-000000000C618FB0
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  std::shared_ptr<common::minet::AServerMgr<HttpSession> > __r; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<common::minet::AServerMgr<GateserverSession> > v4; // [rsp+20h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v2 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NetworkMgrBase = v2;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->http_ptr);
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->gateserver_ptr);
  common::tools::perf::make_shared<common::minet::AServerMgr<HttpSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<HttpSession>>(&this->http_ptr, &__r);
  std::shared_ptr<common::minet::AServerMgr<HttpSession>>::~shared_ptr(&__r);
  common::tools::perf::make_shared<common::minet::AServerMgr<GateserverSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<GateserverSession>>(
    &this->gateserver_ptr,
    &v4);
  std::shared_ptr<common::minet::AServerMgr<GateserverSession>>::~shared_ptr(&v4);
};

// Line 33: range 000000000C618FB2-000000000C619A6C
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DispatchApp *v6; // rax
  _BOOL4 v7; // r15d
  DispatchApp *v8; // rax
  DispatchApp *v9; // r15
  DispatchApp *v10; // rax
  uint32_t AppId; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _BOOL4 v14; // r15d
  DispatchApp *v15; // r15
  DispatchApp *v16; // rax
  uint32_t v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r15d
  int32_t result; // eax
  std::string v22; // [rsp+0h] [rbp-170h]
  std::allocator<char> __a; // [rsp+2Eh] [rbp-142h] BYREF
  bool rewrite_with_remote_json; // [rsp+2Fh] [rbp-141h]
  uint32_t port_gt; // [rsp+30h] [rbp-140h]
  uint32_t port_http; // [rsp+34h] [rbp-13Ch]
  std::string value; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-110h] BYREF
  char v29[240]; // [rsp+80h] [rbp-F0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v29;
  v22._M_string_length = (std::string::size_type)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 10 gate_pt:59 80 8 10 http_pt:68 112 40 16 remote_config:38";
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
  v6 = Singleton<DispatchApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      49);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v28,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
    v7 = 0;
    goto LABEL_26;
  }
  v8 = Singleton<DispatchApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      54);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v28,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "Root.NetConf.GateserverServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v28);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<DispatchApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "port_gt", &__a);
    v10 = Singleton<DispatchApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port_gt = AppBase::findAppPort((AppBase *const)v9, AppId, v22);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port_gt);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v28, &value);
    std::string::~string(&v28);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v22._anon_0._M_allocated_capacity + 1) + 24));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12);
    v13 = *(_QWORD *)v12 + 8LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(*(_QWORD *)v12 + 8LL);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v12, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        64);
      common::milog::MiLogStream::operator()(&v28, "init gateserver failed");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v2 = -1;
      v14 = 0;
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "Root.NetConf.HttpServerConf", &__a);
      common::tools::PTree::getChild(
        (const common::tools::PTree *const)v22._anon_0._M_allocated_capacity,
        (const std::string *)&v28);
      std::string::~string(&v28);
      std::allocator<char>::~allocator(&__a);
      v15 = Singleton<DispatchApp>::instance();
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "port_http", &__a);
      v16 = Singleton<DispatchApp>::instance();
      v17 = AppBase::getAppId((AppBase *const)v16);
      port_http = AppBase::findAppPort((AppBase *const)v15, v17, v22);
      std::string::~string(&v28);
      std::allocator<char>::~allocator(&__a);
      std::to_string(&value, port_http);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v28, "ListenPort.<xmlattr>.value", &__a);
      common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 80), (const std::string *)&v28, &value);
      std::string::~string(&v28);
      std::allocator<char>::~allocator(&__a);
      std::string::~string(&value);
      v18 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v22._anon_0._M_allocated_capacity + 1) + 8));
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v18);
      v19 = *(_QWORD *)v18 + 8LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(*(_QWORD *)v18 + 8LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v19)(v18, v3 + 80) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/network/network_mgr.cpp",
          "init",
          73);
        common::milog::MiLogStream::operator()(&v28, "init http failed");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v2 = -1;
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
      v14 = v20 == 1;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v14;
  }
LABEL_26:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 112));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v22._M_string_length == v3 )
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

// Line 88: range 000000000C619A6E-000000000C619C7B
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  DispatchApp *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  bool rewrite_with_remote_json; // [rsp+1Fh] [rbp-D1h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-D0h] BYREF
  char v10[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 16 remote_config:92";
  *(_QWORD *)(v2 + 16) = NetworkMgr::reload;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  rewrite_with_remote_json = 0;
  Json::Value::Value(v2 + 48, 0LL);
  if ( !NetworkMgrBase::getCMDBConfigFromPTree(pt, (Json::Value *)(v2 + 48)) )
    rewrite_with_remote_json = 1;
  if ( rewrite_with_remote_json
    && (v5 = Singleton<DispatchApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v5, (const Json::Value *)(v2 + 48))) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      103);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v9,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  Json::Value::~Value((Json::Value_0 *const)(v2 + 48));
  result = v6;
  if ( v10 == (char *)v2 )
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

// Line 112: range 000000000C619C7C-000000000C619D53
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 16LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 16LL);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
  v4 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 16LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 16LL);
  return v3 | (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
};

// Line 118: range 000000000C619D54-000000000C619E35
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 48LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 48LL);
  if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))v2)(v1) )
    return 0;
  v3 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(v3);
  v4 = *(_QWORD *)v3 + 48LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)v3 + 48LL);
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64))v4)(v3) != 0;
};

// Line 124: range 000000000C619E36-000000000C619F0D
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v1 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(v1);
  v2 = *(_QWORD *)v1 + 40LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8(*(_QWORD *)v1 + 40LL);
  v3 = (*(__int64 (__fastcall **)(unsigned __int64))v2)(v1);
  v4 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(v4);
  v5 = *(_QWORD *)v4 + 40LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8(*(_QWORD *)v4 + 40LL);
  return v3 | (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
};

// Line 130: range 000000000C619F0E-000000000C61A1E4
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::minet::Packet *v4; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  common::minet::Packet *v13; // rax
  uint32_t SendOffset; // r13d
  uint32_t target_service; // [rsp+18h] [rbp-58h]
  uint32_t target_app_id; // [rsp+1Ch] [rbp-54h]
  std::shared_ptr<common::minet::Packet> v18; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-40h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      133);
    common::milog::MiLogStream::operator()(&v19, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    target_service = common::minet::Packet::getTargetService(v3);
    v4 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    target_app_id = common::minet::Packet::getTargetAppId(v4);
    if ( target_service == 2 )
    {
      if ( target_app_id )
      {
        v5 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
        v6 = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v5);
        v7 = (unsigned __int64)(v6->_vptr_AServerBase + 13);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v6->_vptr_AServerBase + 13);
        v8 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v7;
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v18, p_packet_ptr);
        v2 = v8(v6, &v18, target_app_id);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v18);
      }
      else
      {
        v9 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v9);
        v11 = (unsigned __int64)(v10->_vptr_AServerBase + 14);
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8(v10->_vptr_AServerBase + 14);
        v12 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v11;
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
        SendOffset = common::minet::Packet::getSendOffset(v13);
        std::shared_ptr<common::minet::Packet>::shared_ptr(&v18, p_packet_ptr);
        v2 = v12(v10, &v18, SendOffset);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/network/network_mgr.cpp",
        "sendPacket",
        152);
      common::milog::MiLogStream::operator()(&v19, "can not send to target_service=%u", target_service);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return -1;
    }
  }
  return v2;
};

// Line 160: range 000000000C61A1E6-000000000C61A270
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/network/network_mgr.cpp",
    "broadcastPacket",
    161);
  common::milog::MiLogStream::operator()(&v3, "wait to finish this func");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 166: range 000000000C61A272-000000000C61A470
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

  if ( std::__shared_ptr<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->http_ptr) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      169);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Http num:");
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(_QWORD *)v2 + 96LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 96LL);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( std::__shared_ptr<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->gateserver_ptr) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      173);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v8,
           (const char (*)[24])"ConnectionNum Gate num:");
    v5 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 96LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 96LL);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 175: range 000000000C634562-000000000C634585
void __cdecl GLOBAL__sub_I_merge_merge_dispatch_app_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 175: range 000000000C61A6A6-000000000C633867
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);

// Line 175: range 000000000C634474-000000000C634561
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  char v3; // dl
  __int64 v4; // rdx
  _BYTE *v5; // rcx
  char v6; // dl
  __int64 v7; // rdx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_dispatch_app.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      v3 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000);
      LOBYTE(__priority) = v3 != 0;
      v4 = (v3 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v3);
      if ( (_BYTE)v4 )
        __asan_report_load1(
          &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          __priority,
          v4,
          &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      if ( !*v2 )
      {
        v5 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        v6 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v6 != 0;
        v7 = (v6 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v6);
        if ( (_BYTE)v7 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
            __priority,
            v7,
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        *v5 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

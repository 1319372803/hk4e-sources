// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/network/network_mgr.cpp

// Line 23: range 000000000CB71A5E-000000000CB71B1D
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx
  std::shared_ptr<common::minet::AServerMgr<GateserverSession> > __r; // [rsp+10h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->gateserver_ptr_);
  common::tools::perf::make_shared<common::minet::AServerMgr<GateserverSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<GateserverSession>>(
    &this->gateserver_ptr_,
    &__r);
  std::shared_ptr<common::minet::AServerMgr<GateserverSession>>::~shared_ptr(&__r);
};

// Line 28: range 000000000CB71B1E-000000000CB71B7B
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AServerBase>::~shared_ptr(&this->gateserver_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 28: range 000000000CB71B7C-000000000CB71BA6
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x18uLL);
};

// Line 34: range 000000000CB71BA8-000000000CB722EF
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  PathfindingserverApp *v6; // rax
  _BOOL4 v7; // r15d
  PathfindingserverApp *v8; // rax
  PathfindingserverApp *v9; // r15
  PathfindingserverApp *v10; // rax
  uint32_t AppId; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  int v15; // r15d
  int32_t result; // eax
  std::string v17; // [rsp+0h] [rbp-140h]
  std::allocator<char> __a; // [rsp+22h] [rbp-11Eh] BYREF
  bool rewrite_with_remote_json; // [rsp+23h] [rbp-11Dh]
  uint32_t port; // [rsp+24h] [rbp-11Ch]
  std::string value; // [rsp+30h] [rbp-110h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+70h] [rbp-D0h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v17._anon_0._M_allocated_capacity = (std::string::size_type)pt;
  v3 = (unsigned __int64)v23;
  v17._M_string_length = (std::string::size_type)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 8 10 gate_pt:59 80 40 16 remote_config:39";
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
  v6 = Singleton<PathfindingserverApp>::instance();
  if ( AppBase::rewriteServerConfig((AppBase *const)v6, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      49);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v22,
      (const char (*)[27])"rewriteServerConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
    v7 = 0;
    goto LABEL_19;
  }
  v8 = Singleton<PathfindingserverApp>::instance();
  if ( AppBase::rewriteAppHostConfig((AppBase *const)v8, (const Json::Value *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      54);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"rewriteAppHostConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
    v7 = 0;
  }
  else
  {
LABEL_11:
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "Root.NetConf.GateserverServerConf", &__a);
    common::tools::PTree::getChild(pt, (const std::string *)&v22);
    std::string::~string(&v22);
    std::allocator<char>::~allocator(&__a);
    v9 = Singleton<PathfindingserverApp>::instance();
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "port_gt", &__a);
    v10 = Singleton<PathfindingserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v10);
    port = AppBase::findAppPort((AppBase *const)v9, AppId, v17);
    std::string::~string(&v22);
    std::allocator<char>::~allocator(&__a);
    std::to_string(&value, port);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v22, "ListenPort.<xmlattr>.value", &__a);
    common::tools::PTree::putValue((common::tools::PTree *const)(v3 + 48), (const std::string *)&v22, &value);
    std::string::~string(&v22);
    std::allocator<char>::~allocator(&__a);
    std::string::~string(&value);
    v12 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(*(&v17._anon_0._M_allocated_capacity + 1) + 8));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8(v12, &v22);
    v13 = *(_QWORD *)v12 + 8LL;
    v14 = *(unsigned __int8 *)((v13 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v14 )
      v12 = __asan_report_load8(*(_QWORD *)v12 + 8LL, v14);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v13)(v12, v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        65);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v22,
        (const char (*)[27])"init gateserver_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
      v15 = 0;
    }
    else
    {
      v15 = 1;
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 48));
    v7 = v15 == 1;
  }
LABEL_19:
  Json::Value::~Value((Json::Value_0 *const)(v3 + 80));
  if ( v7 )
    v2 = 0;
  result = v2;
  if ( v17._M_string_length == v3 )
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

// Line 81: range 000000000CB722F0-000000000CB724FD
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PathfindingserverApp *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "1 48 40 16 remote_config:84";
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
    && (v5 = Singleton<PathfindingserverApp>::instance(),
        AppBase::rewriteServerConfig((AppBase *const)v5, (const Json::Value *)(v2 + 48))) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "reload",
      95);
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

// Line 104: range 000000000CB724FE-000000000CB7256B
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi

  v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, v1);
  v3 = *(_QWORD *)v2 + 16LL;
  v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v4 )
    v2 = __asan_report_load8(*(_QWORD *)v2 + 16LL, v4);
  return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
};

// Line 111: range 000000000CB7256C-000000000CB725D9
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi

  v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, v1);
  v3 = *(_QWORD *)v2 + 48LL;
  v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v4 )
    v2 = __asan_report_load8(*(_QWORD *)v2 + 48LL, v4);
  return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
};

// Line 117: range 000000000CB725DA-000000000CB725F3
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  return NetworkMgr::stopGateserver(this);
};

// Line 123: range 000000000CB725F4-000000000CB72661
int32_t __cdecl NetworkMgr::stopGateserver(NetworkMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi

  v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8(v2, v1);
  v3 = *(_QWORD *)v2 + 40LL;
  v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v4 )
    v2 = __asan_report_load8(*(_QWORD *)v2 + 40LL, v4);
  return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
};

// Line 130: range 000000000CB72662-000000000CB728A1
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  int32_t v2; // ebx
  common::minet::Packet *v3; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 (__fastcall *v7)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rbx
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD); // r12
  common::minet::Packet *v12; // rax
  uint32_t SendOffset; // r13d
  uint32_t gateserver_app_id; // [rsp+1Ch] [rbp-54h]
  std::shared_ptr<common::minet::Packet> v16; // [rsp+20h] [rbp-50h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-40h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "sendPacket",
      133);
    common::milog::MiLogStream::operator()(&v17, "packet is null");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    gateserver_app_id = common::minet::Packet::getTargetAppId(v3);
    if ( gateserver_app_id )
    {
      v4 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4, p_packet_ptr);
      v6 = (unsigned __int64)(v5->_vptr_AServerBase + 13);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v5->_vptr_AServerBase + 13, p_packet_ptr);
      v7 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v6;
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v16, p_packet_ptr);
      v2 = v7(v5, &v16, gateserver_app_id);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v16);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v8, p_packet_ptr);
      v10 = (unsigned __int64)(v9->_vptr_AServerBase + 14);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v9->_vptr_AServerBase + 14, p_packet_ptr);
      v11 = *(__int64 (__fastcall **)(std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *, _QWORD))v10;
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      SendOffset = common::minet::Packet::getSendOffset(v12);
      std::shared_ptr<common::minet::Packet>::shared_ptr(&v16, p_packet_ptr);
      v2 = v11(v9, &v16, SendOffset);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v16);
    }
  }
  return v2;
};

// Line 149: range 000000000CB728A2-000000000CB729D1
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t target_service; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "broadcastPacket",
      152);
    common::milog::MiLogStream::operator()(&v5, "packet is null");
  }
  else
  {
    v3 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    target_service = common::minet::Packet::getTargetService(v3);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/network/network_mgr.cpp",
      "broadcastPacket",
      157);
    common::milog::MiLogStream::operator()(&v5, "can not broadcast to service=%u", target_service);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 162: range 000000000CB729D2-000000000CB72ADC
void __cdecl NetworkMgr::monitorReport(NetworkMgr *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::__shared_ptr<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2>::operator bool(&this->gateserver_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/network/network_mgr.cpp",
      "monitorReport",
      165);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v6,
           (const char (*)[24])"ConnectionNum Gate num:");
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->gateserver_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2, "ConnectionNum Gate num:");
    v3 = *(_QWORD *)v2 + 96LL;
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 96LL, v4);
    val = (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

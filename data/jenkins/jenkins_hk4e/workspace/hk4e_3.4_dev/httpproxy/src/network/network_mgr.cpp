// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/network/network_mgr.cpp

// Line 20: range 000000000C6E099E-000000000C6E0A5D
void __cdecl NetworkMgr::NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx
  std::shared_ptr<common::minet::AServerMgr<HttpSession> > __r; // [rsp+10h] [rbp-20h] BYREF

  NetworkMgrBase::NetworkMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AServerBase>::shared_ptr(&this->http_server_ptr_);
  common::tools::perf::make_shared<common::minet::AServerMgr<HttpSession>>();
  std::shared_ptr<common::minet::AServerBase>::operator=<common::minet::AServerMgr<HttpSession>>(
    &this->http_server_ptr_,
    &__r);
  std::shared_ptr<common::minet::AServerMgr<HttpSession>>::~shared_ptr(&__r);
};

// Line 26: range 000000000C6E0A5E-000000000C6E0EDC
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl NetworkMgr::init(NetworkMgr *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  HttpProxyApp *v5; // r14
  HttpProxyApp *v6; // rax
  uint32_t AppId; // eax
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  int32_t result; // eax
  std::string pta; // [rsp+0h] [rbp-D0h] OVERLAPPED BYREF
  std::string value; // [rsp+20h] [rbp-B0h] BYREF
  std::string child_name; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  pta._M_string_length = (std::string::size_type)this;
  pta._M_dataplus._M_p = (std::string::pointer)pt;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 10 http_pt:27";
  *(_QWORD *)(v2 + 16) = NetworkMgr::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  std::string::basic_string<std::allocator<char>>(
    &child_name,
    "Root.NetConf.HttpProxyConf",
    (const std::allocator<char> *)&pta._anon_0._M_allocated_capacity + 11);
  common::tools::PTree::getChild((const common::tools::PTree *const)pta._M_dataplus._M_p, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  v5 = Singleton<HttpProxyApp>::instance();
  std::allocator<char>::allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  std::string::basic_string<std::allocator<char>>(
    &child_name,
    "port_http",
    (const std::allocator<char> *)&pta._anon_0._M_allocated_capacity + 11);
  v6 = Singleton<HttpProxyApp>::instance();
  AppId = AppBase::getAppId((AppBase *const)v6);
  *((_DWORD *)&pta._anon_0._M_allocated_capacity + 3) = AppBase::findAppPort((AppBase *const)v5, AppId, pta);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  std::to_string(&value, *((unsigned int *)&pta._anon_0._M_allocated_capacity + 3));
  std::allocator<char>::allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  std::string::basic_string<std::allocator<char>>(
    &child_name,
    "ListenPort.<xmlattr>.value",
    (const std::allocator<char> *)&pta._anon_0._M_allocated_capacity + 11);
  common::tools::PTree::putValue((common::tools::PTree *const)(v2 + 32), &child_name, &value);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator((char *)&pta._anon_0._M_allocated_capacity + 11);
  std::string::~string(&value);
  if ( std::operator==<common::minet::AServerBase>(
         0LL,
         (const std::shared_ptr<common::minet::AServerBase> *)(pta._M_string_length + 8)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "init",
      32);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&child_name,
      "http_server_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v8 = -1;
  }
  else
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(pta._M_string_length + 8));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9, pta._M_string_length + 8);
    v10 = *(_QWORD *)v9 + 8LL;
    v11 = *(unsigned __int8 *)((v10 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v11 )
      v9 = __asan_report_load8(*(_QWORD *)v9 + 8LL, v11);
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v10)(v9, v2 + 32) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/network/network_mgr.cpp",
        "init",
        37);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, "init http failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v8;
  if ( v16 == (char *)v2 )
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

// Line 44: range 000000000C6E0EDE-000000000C6E0EF0
int32_t __cdecl NetworkMgr::reload(NetworkMgr *const this, common::tools::PTree *pt)
{
  return 0;
};

// Line 49: range 000000000C6E0EF2-000000000C6E0FF3
int32_t __cdecl NetworkMgr::start(NetworkMgr *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::AServerBase>(0LL, &this->http_server_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "start",
      52);
    common::milog::MiLogStream::operator()(&v5, "http_server_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_server_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2, &this->http_server_ptr_);
    v3 = *(_QWORD *)v2 + 16LL;
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 16LL, v4);
    return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
  }
};

// Line 59: range 000000000C6E0FF4-000000000C6E10F5
bool __cdecl NetworkMgr::isRun(NetworkMgr *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::AServerBase>(0LL, &this->http_server_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "isRun",
      62);
    common::milog::MiLogStream::operator()(&v5, "http_server_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
  else
  {
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_server_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2, &this->http_server_ptr_);
    v3 = *(_QWORD *)v2 + 48LL;
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 48LL, v4);
    return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
  }
};

// Line 69: range 000000000C6E10F6-000000000C6E11F7
int32_t __cdecl NetworkMgr::stop(NetworkMgr *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::AServerBase>(0LL, &this->http_server_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/network/network_mgr.cpp",
      "stop",
      72);
    common::milog::MiLogStream::operator()(&v5, "http_server_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v2 = (unsigned __int64)std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::AServerBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->http_server_ptr_);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2, &this->http_server_ptr_);
    v3 = *(_QWORD *)v2 + 40LL;
    v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v4 )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 40LL, v4);
    return (*(__int64 (__fastcall **)(unsigned __int64))v3)(v2);
  }
};

// Line 79: range 000000000C6E11F8-000000000C6E1282
int32_t __cdecl NetworkMgr::sendPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/network/network_mgr.cpp",
    "sendPacket",
    80);
  common::milog::MiLogStream::operator()(&v3, "Not Support!");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

// Line 85: range 000000000C6E1284-000000000C6E130E
int32_t __cdecl NetworkMgr::broadcastPacket(NetworkMgr *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/network/network_mgr.cpp",
    "broadcastPacket",
    86);
  common::milog::MiLogStream::operator()(&v3, "Not Support!");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return -1;
};

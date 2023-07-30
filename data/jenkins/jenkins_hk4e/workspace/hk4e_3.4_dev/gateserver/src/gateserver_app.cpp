// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/gateserver_app.cpp

// Line 25: range 000000000C748A44-000000000C748A6F
int32_t __cdecl GateserverApp::addAllServicesToBox(GateserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<GateserverService>() )
    return -1;
  else
    return 0;
};

// Line 31: range 000000000C748A70-000000000C748F45
int32_t __cdecl GateserverApp::stop(GateserverApp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 network_ptr:32";
  *(_QWORD *)(v1 + 16) = GateserverApp::stop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v1 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gateserver_app.cpp",
      "stop",
      35);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v12,
      (const char (*)[39])"dynamic_pointer_cast NetworkMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopDispatchClient(v5) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        42);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v12, (const char (*)[21])"stop dispatch failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    v6 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopPlayerServer(v6) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        46);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v12,
        (const char (*)[25])"stop PlayerServer failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    if ( ServiceBox::stop() )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        52);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v12, (const char (*)[20])"stop service failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    v7 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopGameserverClient(v7) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        58);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v12,
        (const char (*)[23])"stop gameserver failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    v8 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopPathfindingClient(v8) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        62);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v12,
        (const char (*)[30])"stop pathfindingserver failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    v9 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopTothemoonClient(v9) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gateserver_app.cpp",
        "stop",
        67);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v12,
        (const char (*)[28])"stop tothemoonserver failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    if ( std::operator!=<MonitorReport>(0LL, &ResourceBox::monitor_report_ptr) )
    {
      v10 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      MonitorReport::stop(v10);
    }
    v4 = 0;
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v1 + 32));
  result = v4;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

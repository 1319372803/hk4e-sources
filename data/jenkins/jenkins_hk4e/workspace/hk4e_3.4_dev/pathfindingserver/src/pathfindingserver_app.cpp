// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfindingserver_app.cpp

// Line 21: range 000000000CB5A1CA-000000000CB5A498
int32_t __cdecl PathfindingserverApp::init(PathfindingserverApp *const this)
{
  std::string v2; // [rsp-10h] [rbp-A0h]
  std::string v3; // [rsp-10h] [rbp-A0h]
  AppBase *const thisa; // [rsp+8h] [rbp-88h]
  std::allocator<char> v5; // [rsp+1Dh] [rbp-73h] BYREF
  std::allocator<char> v6; // [rsp+1Eh] [rbp-72h] BYREF
  std::allocator<char> __a; // [rsp+1Fh] [rbp-71h] BYREF
  std::string v8; // [rsp+20h] [rbp-70h] BYREF
  std::string v9; // [rsp+40h] [rbp-50h] BYREF
  std::string v10; // [rsp+60h] [rbp-30h] BYREF

  *(&v2._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v10, _s, &__a);
  std::allocator<char>::allocator(&v6);
  std::string::basic_string<std::allocator<char>>(&v9, _s, &v6);
  std::allocator<char>::allocator(&v5);
  std::string::basic_string<std::allocator<char>>(&v8, "TEST_PLAYER", &v5);
  v2._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x28u,
    (unsigned __int64)&v8,
    (unsigned __int64)&v9,
    (unsigned __int64)&v10,
    COLOR_DEFAULT,
    v2);
  std::string::~string(&v8);
  std::allocator<char>::~allocator(&v5);
  std::string::~string(&v9);
  std::allocator<char>::~allocator(&v6);
  std::string::~string(&v10);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&v10, _s, &__a);
  std::allocator<char>::allocator(&v6);
  std::string::basic_string<std::allocator<char>>(&v9, _s, &v6);
  std::allocator<char>::allocator(&v5);
  std::string::basic_string<std::allocator<char>>(&v8, "CPU_PROFILING", &v5);
  v3._M_dataplus._M_p = (std::string::pointer)2;
  common::milog::MiLog::addLogLevel(
    &common::milog::MiLogDefault::default_log_obj_,
    0x29u,
    (unsigned __int64)&v8,
    (unsigned __int64)&v9,
    (unsigned __int64)&v10,
    COLOR_DEFAULT,
    v3);
  std::string::~string(&v8);
  std::allocator<char>::~allocator(&v5);
  std::string::~string(&v9);
  std::allocator<char>::~allocator(&v6);
  std::string::~string(&v10);
  std::allocator<char>::~allocator(&__a);
  return AppBase::init(thisa);
};

// Line 29: range 000000000CB5A49A-000000000CB5A4C5
int32_t __cdecl PathfindingserverApp::addAllServicesToBox(PathfindingserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<PathfindingService>() )
    return -1;
  else
    return 0;
};

// Line 37: range 000000000CB5A4C6-000000000CB5A844
int32_t __cdecl PathfindingserverApp::processSignal(PathfindingserverApp *const this, int signal)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  if ( signal == 14 )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      41);
    v2 = ThreadSafeCountMgr::Get(CountTypeNavMeshInstance);
    common::milog::MiLogStream::operator()(&v10, "NavMeshInstance count:%d", v2);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      42);
    v3 = ThreadSafeCountMgr::Get(CountTypeNavMeshData);
    common::milog::MiLogStream::operator()(&v10, "NavMeshData count:%d, ", v3);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      43);
    v4 = ThreadSafeCountMgr::Get(CountTypeStaticNavMesh);
    common::milog::MiLogStream::operator()(&v10, "static nav mesh count:%d", v4);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      44);
    v5 = ThreadSafeCountMgr::Get(CountTypeDynamicNavMesh);
    common::milog::MiLogStream::operator()(&v10, "dynamic nav mesh count:%d", v5);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      45);
    v6 = ThreadSafeCountMgr::Get(CountTypeObstacle);
    common::milog::MiLogStream::operator()(&v10, "obstacle count:%d", v6);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      46);
    v7 = ThreadSafeCountMgr::Get(CountTypeTile);
    common::milog::MiLogStream::operator()(&v10, "override tile count:%d", v7);
    common::milog::MiLogStream::~MiLogStream(&v10);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/pathfindingserver_app.cpp",
      "processSignal",
      47);
    v8 = ThreadSafeCountMgr::Get(CountTypeDynamicMemorySize);
    common::milog::MiLogStream::operator()(&v10, "override tile memory size:%d", v8);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  return AppBase::processSignal((AppBase *const)this, signal);
};

// Line 57: range 000000000CB5A846-000000000CB5A871
int32_t __cdecl PathfindingserverApp::loopFunc(PathfindingserverApp *const this)
{
  int ret; // [rsp+1Ch] [rbp-4h]

  ret = AppBase::loopFunc((AppBase *const)this);
  PathfindingserverApp::onMonitorReport(this);
  return ret;
};

// Line 69: range 000000000CB5A872-000000000CB5AEAD
int32_t __cdecl PathfindingserverApp::onMonitorReport(PathfindingserverApp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-B5h] BYREF
  int time_memory; // [rsp+1Ch] [rbp-B4h]
  int player_num; // [rsp+20h] [rbp-B0h]
  int tile_num; // [rsp+24h] [rbp-ACh]
  __int64 now_time; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<ConfigBase> v19; // [rsp+30h] [rbp-A0h] BYREF
  std::string v20; // [rsp+40h] [rbp-90h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:70";
  *(_QWORD *)(v2 + 16) = PathfindingserverApp::onMonitorReport;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(v5, v1);
  v6 = *(_QWORD *)v5 + 32LL;
  v7 = *(unsigned __int8 *)((v6 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v7 )
    v5 = __asan_report_load8(*(_QWORD *)v5 + 32LL, v7);
  (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&v19, v5);
  std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)(v2 + 32));
  std::shared_ptr<ConfigBase>::~shared_ptr(&v19);
  now_time = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->next_report_tile_memory_);
  }
  if ( now_time > this->next_report_tile_memory_ )
  {
    this->next_report_tile_memory_ = now_time + 30;
    time_memory = ThreadSafeCountMgr::Get(CountTypeDynamicMemorySize);
    player_num = ThreadSafeCountMgr::Get(CountTypeDynamicNavMesh);
    tile_num = ThreadSafeCountMgr::Get(CountTypeTile);
    v8 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    if ( player_num )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v8, 46LL, time_memory / player_num, (unsigned __int64)&v20);
      std::string::~string(&v20);
      std::allocator<char>::~allocator(&__a);
      v10 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v10, 48LL, tile_num / player_num, (unsigned __int64)&v20);
    }
    else
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v8, 46LL, 0, (unsigned __int64)&v20);
      std::string::~string(&v20);
      std::allocator<char>::~allocator(&__a);
      v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v9, 48LL, 0, (unsigned __int64)&v20);
    }
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( tile_num )
    {
      v12 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v12, 47LL, time_memory / tile_num, (unsigned __int64)&v20);
    }
    else
    {
      v11 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v20, _s, &__a);
      MonitorReport::addValue(v11, 47LL, 0, (unsigned __int64)&v20);
    }
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = 0;
  if ( v21 == (char *)v2 )
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

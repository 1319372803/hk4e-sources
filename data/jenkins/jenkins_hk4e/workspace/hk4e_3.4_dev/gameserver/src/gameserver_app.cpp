// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gameserver_app.cpp

// Line 25: range 0000000017594950-00000000175949D1
void __cdecl GameserverApp::GameserverApp(GameserverApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<GameserverApp>::Singleton(this);
  v1 = &`vtable for'GameserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->gap0 = v1;
  AbilityConfigImplMgr::init();
};

// Line 33: range 00000000175949D2-0000000017594A6D
int32_t __cdecl GameserverApp::init(GameserverApp *const this)
{
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  ret = AppBase::init((AppBase *const)this);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gameserver_app.cpp",
    "init",
    37);
  common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"AppBase::init fails");
  common::milog::MiLogStream::~MiLogStream(&v3);
  return ret;
};

// Line 45: range 0000000017594A6E-0000000017594A99
int32_t __cdecl GameserverApp::addAllServicesToBox(GameserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<GameserverService>() )
    return -1;
  else
    return 0;
};

// Line 52: range 0000000017594A9A-0000000017594D4E
int32_t __cdecl GameserverApp::processOpt(GameserverApp *const this, int argc, char **argv, int opt, bool *is_exit)
{
  _DWORD *v5; // rbx
  int32_t v6; // r13d
  int32_t result; // eax
  std::shared_ptr<Config> p_prev_config_ptr; // [rsp+20h] [rbp-19470h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-19460h] BYREF
  Config v12; // [rsp+50h] [rbp-19440h] BYREF

  v11[0] = 1102416563LL;
  v11[1] = "1 32 103192 9 config:66";
  v11[2] = GameserverApp::processOpt;
  v5 = (_DWORD *)((unsigned __int64)v11 >> 3);
  v5[536862720] = -235802127;
  v5[536865945] = -218103808;
  v5[536865946] = -202116109;
  v5[536865947] = -202116109;
  v5[536865948] = -202116109;
  v5[536865949] = -202116109;
  v5[536865950] = -202116109;
  v5[536865951] = -202116109;
  v5[536865952] = -202116109;
  v5[536865953] = -202116109;
  if ( AppBase::processOpt((AppBase *const)this, argc, argv, opt, is_exit) )
  {
    v6 = -1;
  }
  else if ( opt == 99 )
  {
    if ( *(_BYTE *)(((unsigned __int64)is_exit >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exit & 7) >= *(_BYTE *)(((unsigned __int64)is_exit >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_exit);
    }
    *is_exit = 1;
    GameserverApp::tryInitMySqlMgr(this);
    Config::Config(&v12);
    v12.thread_num = 1;
    std::shared_ptr<Config>::shared_ptr(&p_prev_config_ptr, 0LL);
    v6 = Config::loadDesignConfig(&v12, &p_prev_config_ptr);
    std::shared_ptr<Config>::~shared_ptr(&p_prev_config_ptr);
    Config::~Config(&v12);
  }
  else if ( opt == 112 )
  {
    if ( *(_BYTE *)(((unsigned __int64)is_exit >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_exit & 7) >= *(_BYTE *)(((unsigned __int64)is_exit >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_exit);
    }
    *is_exit = 1;
    proto::CmdIdConfig_descriptor();
    proto::Retcode_descriptor();
    v6 = ProtoUtils::init();
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  *(_DWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) = 0;
  *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFFB264) = 0LL;
  *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFFB26C) = 0LL;
  *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFFB274) = 0LL;
  *(_QWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFFB27C) = 0LL;
  *(_DWORD *)(((unsigned __int64)v11 >> 3) + 0x7FFFB284) = 0;
  return result;
};

// Line 83: range 0000000017594D50-0000000017595035
void __cdecl GameserverApp::tryInitMySqlMgr(GameserverApp *const this)
{
  std::optional<common::tools::PTree> *v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const std::string *v4; // rsi
  common::midb::MySqlMgrT<std::mutex> *v5; // r14
  common::tools::PTree *v6; // rax
  common::milog::MiLogStream *v8; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-B9h] BYREF
  std::string child_name; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (std::optional<common::tools::PTree> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = (std::optional<common::tools::PTree> *)v2;
  }
  v1->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1102416563;
  *(_QWORD *)&v1->_M_payload._M_engaged = "2 32 8 5 pt:85 64 16 15 mysql_pt_opt:97";
  v1[1]._M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)GameserverApp::tryInitMySqlMgr;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  common::tools::PTree::PTree((common::tools::PTree *const)&v1[2]);
  v4 = AppBase::getServerConfigFile[abi:cxx11]((const AppBase *const)this);
  common::tools::PTree::readXml((common::tools::PTree *const)&v1[2], v4);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.MysqlConf", &__a);
  common::tools::PTree::getChildOptional((const common::tools::PTree *const)&v1[2], &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( std::optional<common::tools::PTree>::operator bool(v1 + 4) )
  {
    v5 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::mysql_mgr_ptr);
    v6 = std::optional<common::tools::PTree>::operator*(v1 + 4);
    if ( common::midb::MySqlMgrT<std::mutex>::init(v5, v6, 0) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gameserver_app.cpp",
        "tryInitMySqlMgr",
        100);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)&child_name,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v8,
        (const char (*)[27])"mysql_mgr_ptr->init failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    }
  }
  std::optional<common::tools::PTree>::~optional(v1 + 4);
  common::tools::PTree::~PTree((common::tools::PTree *const)&v1[2]);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v1->_M_payload._M_payload._M_value.impl_ptr_._M_t._M_t._M_head_impl = (common::tools::PTree::Impl *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 106: range 0000000017595036-0000000017595385
int32_t __cdecl GameserverApp::stop(GameserverApp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  MonitorReport *v7; // rax
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 network_ptr:108";
  *(_QWORD *)(v1 + 16) = GameserverApp::stop;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<NetworkMgr,NetworkMgrBase>((const std::shared_ptr<NetworkMgrBase> *)(v1 + 32));
  if ( std::operator==<NetworkMgr>(0LL, (const std::shared_ptr<NetworkMgr> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gameserver_app.cpp",
      "stop",
      111);
    common::milog::MiLogStream::operator()(&v9, "network is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopGateserver(v5) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_app.cpp",
        "stop",
        118);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v9, (const char (*)[23])"stop gateserver failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    if ( ServiceBox::stop() )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_app.cpp",
        "stop",
        124);
      common::milog::MiLogStream::operator()(&v9, "stop service failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    v6 = std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( NetworkMgr::stopNodeserverClient(v6) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gameserver_app.cpp",
        "stop",
        130);
      common::milog::MiLogStream::operator()(&v9, "stop nodeserver network failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    if ( std::operator!=<MonitorReport>(0LL, &ResourceBox::monitor_report_ptr) )
    {
      v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      MonitorReport::stop(v7);
    }
    v4 = 0;
  }
  std::shared_ptr<NetworkMgr>::~shared_ptr((std::shared_ptr<NetworkMgr> *const)(v1 + 32));
  result = v4;
  if ( v10 == (char *)v1 )
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

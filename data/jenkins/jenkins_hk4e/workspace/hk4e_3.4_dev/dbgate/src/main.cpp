// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/main.cpp

// Line 23: range 000000000C5D4A70-000000000C5D4F4B
int __cdecl main(int argc, const char **argv, const char **envp)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  DbgateApp *v6; // rax
  std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int result; // eax
  int ret; // [rsp+1Ch] [rbp-204h]
  std::shared_ptr<ConfigMgr<Config> > __r; // [rsp+20h] [rbp-200h] BYREF
  std::shared_ptr<NetworkMgr> v13; // [rsp+30h] [rbp-1F0h] BYREF
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > v14; // [rsp+40h] [rbp-1E0h] BYREF
  std::shared_ptr<common::midb::RedisMgr> v15; // [rsp+50h] [rbp-1D0h] BYREF
  std::shared_ptr<MonitorReport> v16; // [rsp+60h] [rbp-1C0h] BYREF
  char v17[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL, argv);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 288 13 app_config:27";
  *(_QWORD *)(v3 + 16) = main;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862730] = -202116109;
  v5[536862731] = -202116109;
  proto::CmdIdConfig_descriptor();
  proto::Retcode_descriptor();
  AppBaseConfig::AppBaseConfig((AppBaseConfig *const)(v3 + 32));
  std::string::assign(v3 + 32, "dbgate");
  std::string::assign(v3 + 96, "0.4.0");
  std::string::assign(v3 + 128, "1163352");
  std::string::assign(v3 + 160, "1163352");
  std::string::assign(v3 + 192, "hk4e_3.4_dev");
  std::string::clear(v3 + 64);
  std::string::append(v3 + 64, "Oct 11 2022");
  std::string::append(v3 + 64, " ");
  std::string::append(v3 + 64, "22:58:09");
  *(_DWORD *)(v3 + 224) = 300;
  *(_DWORD *)(v3 + 228) = argc;
  *(_QWORD *)(v3 + 232) = argv;
  common::tools::perf::make_shared<ConfigMgr<Config>>();
  std::shared_ptr<ConfigMgrBase>::operator=<ConfigMgr<Config>>((std::shared_ptr<ConfigMgrBase> *const)(v3 + 256), &__r);
  std::shared_ptr<ConfigMgr<Config>>::~shared_ptr(&__r);
  common::tools::perf::make_shared<NetworkMgr>();
  std::shared_ptr<NetworkMgrBase>::operator=<NetworkMgr>((std::shared_ptr<NetworkMgrBase> *const)(v3 + 240), &v13);
  std::shared_ptr<NetworkMgr>::~shared_ptr(&v13);
  common::tools::perf::make_shared<common::midb::MySqlMgrT<std::mutex>>();
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::operator=(
    (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)(v3 + 272),
    &v14);
  std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr(&v14);
  common::tools::perf::make_shared<common::midb::RedisMgr>();
  std::shared_ptr<common::midb::RedisMgr>::operator=((std::shared_ptr<common::midb::RedisMgr> *const)(v3 + 288), &v15);
  std::shared_ptr<common::midb::RedisMgr>::~shared_ptr(&v15);
  common::tools::perf::make_shared<MonitorReport>();
  std::shared_ptr<MonitorReport>::operator=((std::shared_ptr<MonitorReport> *const)(v3 + 304), &v16);
  std::shared_ptr<MonitorReport>::~shared_ptr(&v16);
  v6 = Singleton<DbgateApp>::instance();
  ret = AppBase::run((AppBase *const)v6, (const AppBaseConfig *)(v3 + 32));
  std::__shared_ptr<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 256));
  std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 240));
  if ( std::operator!=<common::midb::MySqlMgrT<std::mutex>>(
         (const std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)(v3 + 272),
         0LL) )
  {
    v7 = std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 272));
    common::midb::MySqlMgrT<std::mutex>::final(v7);
  }
  std::__shared_ptr<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<common::midb::MySqlMgrT<std::mutex>,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 272));
  if ( std::operator!=<common::midb::RedisMgr>((const std::shared_ptr<common::midb::RedisMgr> *)(v3 + 288), 0LL) )
  {
    v8 = std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 288));
    common::midb::RedisMgr::final(v8);
  }
  std::__shared_ptr<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<common::midb::RedisMgr,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 288));
  if ( std::operator!=<MonitorReport>((const std::shared_ptr<MonitorReport> *)(v3 + 304), 0LL) )
  {
    v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 304));
    MonitorReport::final(v9);
  }
  std::__shared_ptr<MonitorReport,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<MonitorReport,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 304));
  AppBaseConfig::~AppBaseConfig((AppBaseConfig *const)(v3 + 32));
  result = ret;
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

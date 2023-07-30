// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoonserver_app.cpp

// Line 22: range 000000000CBABF7E-000000000CBABFA9
int32_t __cdecl TothemoonserverApp::addAllServicesToBox(TothemoonserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<TothemoonService>() )
    return -1;
  else
    return 0;
};

// Line 28: range 000000000CBABFAA-000000000CBAC045
int32_t __cdecl TothemoonserverApp::processSignal(TothemoonserverApp *const this, int signal)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( signal == 14 )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/tothemoonserver_app.cpp",
      "processSignal",
      32);
    common::milog::MiLogStream::operator()(&v3, "[ToTheMoon][processSignal]");
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
  return AppBase::processSignal((AppBase *const)this, signal);
};

// Line 38: range 000000000CBAC046-000000000CBAC071
int32_t __cdecl TothemoonserverApp::loopFunc(TothemoonserverApp *const this)
{
  int ret; // [rsp+1Ch] [rbp-4h]

  ret = AppBase::loopFunc((AppBase *const)this);
  TothemoonserverApp::onMonitorReport(this);
  return ret;
};

// Line 49: range 000000000CBAC072-000000000CBAC230
int32_t __cdecl TothemoonserverApp::onMonitorReport(TothemoonserverApp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  int32_t result; // eax
  std::shared_ptr<ConfigBase> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 config_ptr:50";
  *(_QWORD *)(v2 + 16) = TothemoonserverApp::onMonitorReport;
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
  (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v6)(&v9, v5);
  std::dynamic_pointer_cast<Config,ConfigBase>((const std::shared_ptr<ConfigBase> *)(v2 + 32));
  std::shared_ptr<ConfigBase>::~shared_ptr(&v9);
  common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->next_report_tile_memory_);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  result = 0;
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

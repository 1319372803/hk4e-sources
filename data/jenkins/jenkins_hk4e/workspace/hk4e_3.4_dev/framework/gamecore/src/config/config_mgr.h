// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/config/config_mgr.h

// Line 41: range 000000000C69E76E-000000000C69E7AF
void __cdecl ConfigMgrBase::ConfigMgrBase(ConfigMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigMgrBase = v1;
};

// Line 44: range 000000000C637696-000000000C6376D7
void __cdecl ConfigMgrBase::~ConfigMgrBase(ConfigMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigMgrBase = v1;
};

// Line 44: range 000000000C6376D8-000000000C637702
void __cdecl ConfigMgrBase::~ConfigMgrBase(ConfigMgrBase *const this)
{
  ConfigMgrBase::~ConfigMgrBase(this);
  operator delete(this, 8uLL);
};

// Line 57: range 000000000C637704-000000000C63770E
void __cdecl ConfigMgrBase::monitorReport(ConfigMgrBase *const this)
{
  ;
};

// Line 62: range 000000000C6A3B68-000000000C6A3BD5
void __cdecl ConfigMgr<Config>::~ConfigMgr(ConfigMgr<Config> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigMgr<Config> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigMgrBase = v1;
  std::set<std::shared_ptr<Config>>::~set(&this->old_config_set_);
  std::shared_ptr<Config>::~shared_ptr(&this->cur_config_ptr_);
  ConfigMgrBase::~ConfigMgrBase(this);
};

// Line 62: range 000000000C6A3BD6-000000000C6A3C00
void __cdecl ConfigMgr<Config>::~ConfigMgr(ConfigMgr<Config> *const this)
{
  ConfigMgr<Config>::~ConfigMgr(this);
  operator delete(this, 0x70uLL);
};

// Line 70: range 000000000C69E820-000000000C69E89D
void __cdecl ConfigMgr<Config>::ConfigMgr(ConfigMgr<Config> *const this)
{
  int (**v1)(...); // rdx

  ConfigMgrBase::ConfigMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'ConfigMgr<Config> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigMgrBase = v1;
  std::shared_ptr<Config>::shared_ptr(&this->cur_config_ptr_);
  std::set<std::shared_ptr<Config>>::set(&this->old_config_set_);
  std::mutex::mutex(&this->mu_);
};

// Line 102: range 000000000C6AEE24-000000000C6AF503
int32_t __cdecl ConfigMgr<Config>::reloadConfig(ConfigMgr<Config> *const this, const std::string *config_file_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  char v9; // r14
  int32_t v10; // r14d
  int v11; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool is_open_mem_perf; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool is_open_cmd_report; // cl
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int32_t result; // eax
  struct _Unwind_Exception *v20; // [rsp+8h] [rbp-118h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 8 lock:136 64 16 9 timer:105 96 16 18 new_config_ptr:108 128 16 14 config_ptr:140";
  *(_QWORD *)(v2 + 16) = ConfigMgr<Config>::reloadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  common::tools::perf::make_shared<Config>();
  v5 = 0;
  if ( std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 96)) )
    goto LABEL_10;
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(v6);
  v8 = (unsigned __int64)(v7->_vptr_ConfigBase + 2);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v7->_vptr_ConfigBase + 2);
  v20 = *(struct _Unwind_Exception **)v8;
  std::shared_ptr<ConfigBase>::shared_ptr<Config,void>(
    (std::shared_ptr<ConfigBase> *const)(v2 + 128),
    &this->cur_config_ptr_);
  v5 = 1;
  if ( ((__int64 (__fastcall *)(std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const std::string *, unsigned __int64))v20)(
         v7,
         config_file_name,
         v2 + 128) )
  {
LABEL_10:
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( v5 )
    std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v2 + 128));
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "../framework/gamecore/src/config/config_mgr.h",
      "reloadConfig",
      114);
    common::milog::MiLogStream::operator()(&v21, "reload config failed");
    common::milog::MiLogStream::~MiLogStream(&v21);
    v10 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "../framework/gamecore/src/config/config_mgr.h",
      "reloadConfig",
      123);
    v11 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64));
    common::milog::MiLogStream::operator()(&v21, "reload config succ, timecost=%dms", (unsigned int)(v11 / 1000));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    common::milog::MiLog::setLogLevelMask(&common::milog::MiLogDefault::default_log_obj_, &v12->log_level_mask);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(char *)(((unsigned __int64)&v13->is_open_mem_perf >> 3) + 0x7FFF8000) < 0 )
      v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->is_open_mem_perf);
    is_open_mem_perf = v13->is_open_mem_perf;
    if ( *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000) != 0
      && (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) >= *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3)
                                                                                               + 0x7FFF8000) )
    {
      __asan_report_store1(&common::tools::perf::MemoryPerf::is_record);
    }
    common::tools::perf::MemoryPerf::is_record = is_open_mem_perf;
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(char *)(((unsigned __int64)&v15->is_open_cmd_report >> 3) + 0x7FFF8000) < 0 )
      v15 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v15->is_open_cmd_report);
    is_open_cmd_report = v15->is_open_cmd_report;
    if ( *(_BYTE *)(((unsigned __int64)&CmdReport::is_record >> 3) + 0x7FFF8000) != 0
      && (char)((unsigned __int64)&CmdReport::is_record & 7) >= *(_BYTE *)(((unsigned __int64)&CmdReport::is_record >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_store1(&CmdReport::is_record);
    }
    CmdReport::is_record = is_open_cmd_report;
    std::set<std::shared_ptr<Config>>::insert(&this->old_config_set_, &this->cur_config_ptr_);
    std::lock_guard<std::mutex>::lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32), &this->mu_);
    std::shared_ptr<Config>::operator=(&this->cur_config_ptr_, (const std::shared_ptr<Config> *)(v2 + 96));
    std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
    ConfigMgr<Config>::getConfig((ConfigMgr<Config> *const)(v2 + 128));
    v17 = (unsigned __int64)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(v17);
    v18 = *(_QWORD *)v17 + 32LL;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8(*(_QWORD *)v17 + 32LL);
    (*(void (__fastcall **)(unsigned __int64))v18)(v17);
    v10 = 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  result = v10;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 148: range 000000000C6AF504-000000000C6AF728
void __cdecl ConfigMgr<Config>::removeObsoleteConfig(ConfigMgr<Config> *const this)
{
  std::set<std::shared_ptr<Config>>::iterator *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r12
  std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  const ConfigMgr<Config>::ConfigPtrT *config_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-80h] BYREF
  char v8[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (std::set<std::shared_ptr<Config>>::iterator *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::set<std::shared_ptr<Config>>::iterator *)v2;
  }
  v1->_M_node = (std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Base_ptr)1102416563;
  v1[1]._M_node = (std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Base_ptr)"1 32 8 6 it:150";
  v1[2]._M_node = (std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Base_ptr)ConfigMgr<Config>::removeObsoleteConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  v1[4]._M_node = std::set<std::shared_ptr<Config>>::begin(&this->old_config_set_)._M_node;
  while ( 1 )
  {
    __y._M_node = std::set<std::shared_ptr<Config>>::end(&this->old_config_set_)._M_node;
    if ( !std::operator!=(v1 + 4, &__y) )
      break;
    config_ptr = std::_Rb_tree_const_iterator<std::shared_ptr<Config>>::operator*(v1 + 4);
    if ( std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::use_count(config_ptr) > 1 )
      std::_Rb_tree_const_iterator<std::shared_ptr<Config>>::operator++(v1 + 4, 0);
    else
      v1[4]._M_node = std::set<std::shared_ptr<Config>>::erase[abi:cxx11](&this->old_config_set_, v1[4])._M_node;
  }
  if ( std::set<std::shared_ptr<Config>>::size(&this->old_config_set_) > 1 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/gamecore/src/config/config_mgr.h",
      "removeObsoleteConfig",
      165);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v7,
           (const char (*)[32])"[THREAD] obsolete config count:");
    __y._M_node = (std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Base_ptr)std::set<std::shared_ptr<Config>>::size(&this->old_config_set_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v4, (const unsigned __int64 *)&__y);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_node = (std::_Rb_tree_const_iterator<std::shared_ptr<Config> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 171: range 000000000C6B7F78-000000000C6B806E
std::shared_ptr<Config> __cdecl ConfigMgr<Config>::getConfig(ConfigMgr<Config> *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<Config> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 lock:173";
  *(_QWORD *)(v2 + 16) = ConfigMgr<Config>::getConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::lock_guard<std::mutex>::lock_guard(
    (std::lock_guard<std::mutex> *const)(v2 + 32),
    (std::lock_guard<std::mutex>::mutex_type *)(v1 + 72));
  std::shared_ptr<Config>::shared_ptr((std::shared_ptr<Config> *const)this, (const std::shared_ptr<Config> *)(v1 + 8));
  std::lock_guard<std::mutex>::~lock_guard((std::lock_guard<std::mutex> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 178: range 000000000C6AF72A-000000000C6AF83A
ConfigBasePtr __cdecl ConfigMgr<Config>::getBaseConfig(ConfigMgr<Config> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ConfigBasePtr result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 config_ptr:180";
  *(_QWORD *)(v1 + 16) = ConfigMgr<Config>::getBaseConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ConfigMgr<Config>::getConfig((ConfigMgr<Config> *const)(v1 + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    ((void (__fastcall *)(ConfigMgr<Config> *const))__asan_report_store16)(this);
  std::dynamic_pointer_cast<ConfigBase,Config>((const std::shared_ptr<Config> *)this);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/offline_op_service.cpp

// Line 20: range 000000000DE8EA5E-000000000DE8ECAA
int32_t __cdecl OfflineOpService::init(OfflineOpService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:22";
  *(_QWORD *)(v2 + 16) = OfflineOpService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.OfflineOpservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v5 = -1;
  }
  else if ( ServiceBase::addHandler<OfflineOpHandler>(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/offline_op_service.cpp",
      "init",
      31);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_1BB49F20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = v5;
  if ( v9 == (char *)v2 )
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

// Line 39: range 000000000DE8ECAC-000000000DE8EE7E
ConfigPtr __cdecl OfflineOpService::getConfig(OfflineOpService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v9; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v9 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (OfflineOpService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 base_ptr:41";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)OfflineOpService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_ConfigMgrBase + 4);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_ConfigMgrBase + 4);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(
      &__r,
      v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v9);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v9;
  return result;
};

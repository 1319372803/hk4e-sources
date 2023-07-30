// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/dispatch_service.cpp

// Line 23: range 000000000C60EACE-000000000C60ED1E
int32_t __cdecl DispatchService::init(DispatchService *const this, common::tools::PTree *pt)
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
  *(_QWORD *)(v2 + 8) = "1 32 8 14 dispatch_pt:25";
  *(_QWORD *)(v2 + 16) = DispatchService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.Dispatch", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v5 = -1;
  }
  else if ( GateserverMgr::init(&this->gateserver_mgr) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dispatch_service.cpp",
      "init",
      34);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[26])"gateserver_mgr init fails");
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

// Line 42: range 000000000C60ED20-000000000C60EDDC
int32_t __cdecl DispatchService::defaultProcessPacketFunc(
        DispatchService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const std::string *v3; // rax
  const char *v4; // rax
  uint32_t cmd_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v2);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dispatch_service.cpp",
    "defaultProcessPacketFunc",
    44);
  v3 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  v4 = (const char *)std::string::c_str(v3);
  common::milog::MiLogStream::operator()(&v7, "can not find func for cmd_id=%u, name=%s", cmd_id, v4);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 50: range 000000000C60EDDE-000000000C60EDEC
uint32_t __cdecl DispatchService::getServiceType(DispatchService *const this)
{
  return 7;
};

// Line 57: range 000000000C60EDEE-000000000C60EFBF
ConfigPtr __cdecl DispatchService::getConfig(DispatchService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const std::shared_ptr<ConfigBase> *v4; // rax
  const std::shared_ptr<ConfigBase> *v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v9; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v11[96]; // [rsp+20h] [rbp-60h] BYREF

  v9 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (DispatchService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 base_ptr:59";
  *(_QWORD *)(v1 + 16) = DispatchService::getConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v1 + 32), v4);
  v5 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(v1 + 32);
  if ( std::operator==<ConfigBase>(0LL, v5) )
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6);
    v7 = *(_QWORD *)v6 + 32LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 32LL);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v7)(&__r, v6);
    std::shared_ptr<ConfigBase>::operator=((std::shared_ptr<ConfigBase> *const)(v1 + 32), &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v9);
  std::dynamic_pointer_cast<Config,ConfigBase>(v9);
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v9;
  return result;
};

// Line 71: range 000000000C60EFC0-000000000C60EFE0
void __cdecl DispatchService::onReloadConfig(DispatchService *const this)
{
  GateserverMgr::onReloadConfig(&this->gateserver_mgr);
};

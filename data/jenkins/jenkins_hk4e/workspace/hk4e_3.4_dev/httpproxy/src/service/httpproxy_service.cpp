// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/service/httpproxy_service.cpp

// Line 19: range 000000000C6E1310-000000000C6E14CB
int32_t __cdecl HttpProxyService::init(HttpProxyService *const this, common::tools::PTree *pt)
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
  *(_QWORD *)(v2 + 8) = "1 32 8 11 proxy_pt:20";
  *(_QWORD *)(v2 + 16) = HttpProxyService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.HttpProxy", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
    v5 = -1;
  else
    v5 = 0;
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

// Line 29: range 000000000C6E14CC-000000000C6E14DE
int32_t __cdecl HttpProxyService::defaultProcessPacketFunc(
        HttpProxyService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  return 0;
};

// Line 36: range 000000000C6E14E0-000000000C6E16B2
ConfigPtr __cdecl HttpProxyService::getConfig(HttpProxyService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v10; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v10 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (HttpProxyService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 base_ptr:38";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)HttpProxyService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, p_r);
    v7 = *(_QWORD *)v6 + 32LL;
    v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 32LL, v8);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v7)(&__r, v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v10, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v10);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v10;
  return result;
};

// Line 47: range 000000000C6FB123-000000000C6FB146
void __cdecl GLOBAL__sub_I_merge_merge_httpproxy_app_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 47: range 000000000C6E17B8-000000000C6FAA2E
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);

// Line 47: range 000000000C6FB035-000000000C6FB122
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_httpproxy_app.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v2 )
      {
        v3 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        }
        *v3 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

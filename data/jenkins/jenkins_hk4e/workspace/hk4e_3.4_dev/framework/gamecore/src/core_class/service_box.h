// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/core_class/service_box.h

// Line 109: range 000000000C65A004-000000000C65A3E0
int32_t __cdecl ServiceBox::addService<DispatchService>()
{
  unsigned __int64 v0; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  int32_t v3; // r14d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  std::shared_ptr<ServiceBase> *v6; // rax
  int v7; // r14d
  std::map<long unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >::_Self __x; // [rsp+0h] [rbp-F0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<ServiceBase> > >::_Self __y; // [rsp+8h] [rbp-E8h] BYREF
  std::shared_ptr<DispatchService> __r; // [rsp+10h] [rbp-E0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v0 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "3 48 4 16 service_type:123 64 8 15 service_tid:124 96 16 12 base_ptr:115";
  *(_QWORD *)(v0 + 16) = ServiceBox::addService<DispatchService>;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -234556943;
  v2[536862722] = -218959360;
  v2[536862723] = -202178560;
  common::tools::perf::make_shared<DispatchService>();
  std::shared_ptr<ServiceBase>::shared_ptr<DispatchService,void>((std::shared_ptr<ServiceBase> *const)(v0 + 96), &__r);
  std::shared_ptr<DispatchService>::~shared_ptr(&__r);
  if ( std::operator==<ServiceBase>(0LL, (const std::shared_ptr<ServiceBase> *)(v0 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "../framework/gamecore/src/core_class/service_box.h",
      "addService",
      118);
    common::milog::MiLogStream::operator()(&v14, "create service failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v3 = -1;
  }
  else
  {
    v4 = (unsigned __int64)std::__shared_ptr_access<ServiceBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ServiceBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v0 + 96));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v4);
    v5 = *(_QWORD *)v4 + 104LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)v4 + 104LL);
    *(_DWORD *)(v0 + 48) = (*(__int64 (__fastcall **)(unsigned __int64))v5)(v4);
    *(_QWORD *)(v0 + 64) = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'DispatchService);
    __y._M_node = std::map<unsigned int,std::shared_ptr<ServiceBase>>::find(
                    &ServiceBox::service_map,
                    (const std::map<unsigned int,std::shared_ptr<ServiceBase>>::key_type *)(v0 + 48))._M_node;
    __x._M_node = std::map<unsigned int,std::shared_ptr<ServiceBase>>::end(&ServiceBox::service_map)._M_node;
    if ( std::operator!=(&__x, &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/gamecore/src/core_class/service_box.h",
        "addService",
        129);
      common::milog::MiLogStream::operator()(&v14, "can not add repeat service type=%u", *(unsigned int *)(v0 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v3 = -1;
    }
    else
    {
      v6 = std::map<unsigned int,std::shared_ptr<ServiceBase>>::operator[](
             &ServiceBox::service_map,
             (const std::map<unsigned int,std::shared_ptr<ServiceBase>>::key_type *)(v0 + 48));
      std::shared_ptr<ServiceBase>::operator=(v6, (const std::shared_ptr<ServiceBase> *)(v0 + 96));
      v7 = *(_DWORD *)(v0 + 48);
      v8 = std::map<unsigned long,unsigned int>::operator[](
             &ServiceBox::tid_to_type_map,
             (const std::map<long unsigned int,unsigned int>::key_type *)(v0 + 64));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v8);
      }
      *v9 = v7;
      std::atomic<bool>::store(&ServiceBox::is_init_static_service_ptr, 1, memory_order_seq_cst);
      ServiceBox::findService<DispatchService>();
      std::atomic<bool>::store(&ServiceBox::is_init_static_service_ptr, 0, memory_order_seq_cst);
      v3 = 0;
    }
  }
  std::shared_ptr<ServiceBase>::~shared_ptr((std::shared_ptr<ServiceBase> *const)(v0 + 96));
  result = v3;
  if ( v15 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 151: range 000000000C667F68-000000000C6682CE
DispatchService *__cdecl ServiceBox::initStaticServicePtr<DispatchService>()
{
  unsigned __int64 v0; // r12
  __int64 v1; // rax
  _DWORD *v2; // r13
  DispatchService *v3; // r14
  std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::pointer v4; // rax
  const char *v5; // rax
  std::__shared_ptr<ServiceBase,(__gnu_cxx::_Lock_policy)2>::element_type *v6; // rax
  DispatchService *v7; // rax
  DispatchService *result; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self __y; // [rsp+10h] [rbp-E0h] BYREF
  DispatchService *service_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v0 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_1(128LL);
    if ( v1 )
      v0 = v1;
  }
  *(_QWORD *)v0 = 1102416563LL;
  *(_QWORD *)(v0 + 8) = "3 32 8 15 service_tid:156 64 8 8 iter:157 96 16 12 base_ptr:166";
  *(_QWORD *)(v0 + 16) = ServiceBox::initStaticServicePtr<DispatchService>;
  v2 = (_DWORD *)(v0 >> 3);
  v2[536862720] = -235802127;
  v2[536862721] = -218959360;
  v2[536862722] = -218959360;
  v2[536862723] = -202178560;
  service_ptr = 0LL;
  *(_QWORD *)(v0 + 32) = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'DispatchService);
  *(std::map<long unsigned int,unsigned int>::iterator *)(v0 + 64) = std::map<unsigned long,unsigned int>::find(
                                                                       &ServiceBox::tid_to_type_map,
                                                                       (const std::map<long unsigned int,unsigned int>::key_type *)(v0 + 32));
  __y._M_node = std::map<unsigned long,unsigned int>::end(&ServiceBox::tid_to_type_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> >::_Self *)(v0 + 64),
         &__y) )
  {
    v3 = 0LL;
  }
  else
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned long const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,unsigned int> > *const)(v0 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v4->second);
    }
    ServiceBox::findServiceBase((std::_Rb_tree_node_base::_Base_ptr *)(v0 + 96), v4->second);
    if ( std::operator==<ServiceBase>(0LL, (const std::shared_ptr<ServiceBase> *)(v0 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/gamecore/src/core_class/service_box.h",
        "initStaticServicePtr",
        170);
      v5 = std::type_info::name((const std::type_info *const)&`typeinfo for'DispatchService);
      common::milog::MiLogStream::operator()(&v11, "can not find service typeid=%s", v5);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v3 = 0LL;
    }
    else if ( std::atomic<bool>::load(&ServiceBox::is_init_static_service_ptr, memory_order_seq_cst) )
    {
      v6 = std::__shared_ptr<ServiceBase,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<ServiceBase,(__gnu_cxx::_Lock_policy)2> *const)(v0 + 96));
      if ( v6 )
        v7 = (DispatchService *)__dynamic_cast(
                                  v6,
                                  (const struct __class_type_info *)&`typeinfo for'ServiceBase,
                                  (const struct __class_type_info *)&`typeinfo for'DispatchService,
                                  0LL);
      else
        v7 = 0LL;
      service_ptr = v7;
      v3 = v7;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "../framework/gamecore/src/core_class/service_box.h",
        "initStaticServicePtr",
        177);
      common::milog::MiLogStream::operator()(&v11, "init static service ptr err");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v3 = 0LL;
    }
    std::shared_ptr<ServiceBase>::~shared_ptr((std::shared_ptr<ServiceBase> *const)(v0 + 96));
  }
  result = v3;
  if ( v12 == (char *)v0 )
  {
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v0 = 1172321806LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v0 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 154: range 000000000C65A76E-000000000C65A7A4
DispatchService *__cdecl ServiceBox::findService<DispatchService>()
{
  if ( !ServiceBox::findService<DispatchService>(void)::service_ptr )
    ServiceBox::findService<DispatchService>(void)::service_ptr = ServiceBox::initStaticServicePtr<DispatchService>();
  return ServiceBox::findService<DispatchService>(void)::service_ptr;
};

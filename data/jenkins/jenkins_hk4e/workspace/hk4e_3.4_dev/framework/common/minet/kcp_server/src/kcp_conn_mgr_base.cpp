// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/src/kcp_conn_mgr_base.cpp

// Line 33: range 000000000CDDE160-000000000CDDEBCD
void __fastcall common::minet::KcpConnMgrBase::~KcpConnMgrBase(common::minet::KcpConnMgrBase *const this)
{
  unsigned __int64 p_kcp_timer; // r12
  common::minet::KcpConnMgrBase *v2; // rbx
  unsigned __int64 v3; // rbp
  char *v4; // r15
  unsigned __int64 p_ioc; // r14
  _DWORD *v6; // r13
  unsigned __int64 M_parent; // rsi
  bool *p_might_have_pending_waits; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  boost::asio::detail::epoll_reactor *v12; // rdi
  unsigned __int64 v13; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v14; // rdi
  void (__fastcall *v15)(_QWORD, unsigned __int64, unsigned __int64, _QWORD); // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *v16; // rax
  unsigned __int64 p_udp_socket; // r12
  char v18; // al
  unsigned __int64 p_implementation_executor; // rdi
  unsigned __int64 v20; // rdx
  boost::asio::detail::service_registry *service_registry; // rax
  unsigned __int64 p_first_service; // rdi
  unsigned __int64 v23; // rdi
  char v24; // dl
  char v25; // al
  char *v26; // rdi
  __int64 v27; // rax
  std::_Rb_tree_node_base::_Base_ptr *p_cat; // rdi
  std::size_t v29; // rax
  boost::asio::detail::wait_op *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  boost::asio::detail::service_registry *v35; // r12
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  unsigned __int64 M_pi; // rdi
  unsigned __int64 v38; // rax
  char v39; // cl
  signed __int32 v40; // eax
  unsigned __int64 v41; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v42; // rdi
  char v43; // cl
  unsigned __int64 v44; // rdx
  unsigned __int64 p_implementation; // [rsp+0h] [rbp-B8h]
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *service; // [rsp+8h] [rbp-B0h]
  boost::asio::detail::reactive_socket_service_base *v47; // [rsp+18h] [rbp-A0h]
  char v48[152]; // [rsp+20h] [rbp-98h] BYREF

  v2 = this;
  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(96LL);
    if ( v11 )
      v3 = v11;
  }
  v4 = (char *)(v3 + 96);
  p_ioc = v3 + 96;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 10 ignored_ec 64 16 16 descriptors_lock";
  *(_QWORD *)(v3 + 16) = common::minet::KcpConnMgrBase::~KcpConnMgrBase;
  v6 = (_DWORD *)(v3 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_19;
  }
  this->_vptr_KcpConnMgrBase = (int (**)(...))(&`vtable for'common::minet::KcpConnMgrBase + 2);
  this = (common::minet::KcpConnMgrBase *const)((char *)this + 1048928);
  if ( *(_BYTE *)(((unsigned __int64)&v2->rate_limiter_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(this);
    goto LABEL_20;
  }
  M_parent = (unsigned __int64)v2->rate_limiter_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>>::_M_erase(
    &v2->rate_limiter_map_._M_t,
    (std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > > >::_Link_type)M_parent);
  this = (common::minet::KcpConnMgrBase *const)&v2->network_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->network_thread_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(this);
LABEL_21:
    __asan_handle_no_return(this);
    std::terminate();
  }
  if ( v2->network_thread_._M_id._M_thread )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)&v2->session_map_._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v2->session_map_._M_t._M_impl._M_header._M_parent);
    goto LABEL_23;
  }
  M_parent = (unsigned __int64)v2->session_map_._M_t._M_impl._M_header._M_parent;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>>::_M_erase(
    &v2->session_map_._M_t,
    (std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > > >::_Link_type)M_parent);
  p_kcp_timer = (unsigned __int64)&v2->kcp_timer_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->kcp_timer_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_might_have_pending_waits = (bool *)p_kcp_timer;
    __asan_report_load8(p_kcp_timer);
    goto LABEL_24;
  }
  M_parent = (unsigned __int64)v2->kcp_timer_.impl_.service_;
  p_implementation = (unsigned __int64)&v2->kcp_timer_.impl_.implementation_;
  p_might_have_pending_waits = &v2->kcp_timer_.impl_.implementation_.might_have_pending_waits;
  if ( *(char *)(((unsigned __int64)&v2->kcp_timer_.impl_.implementation_.might_have_pending_waits >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_24:
    __asan_report_load1(p_might_have_pending_waits);
    goto LABEL_25;
  }
  if ( !v2->kcp_timer_.impl_.implementation_.might_have_pending_waits )
    goto LABEL_10;
LABEL_25:
  v9 = M_parent + 104;
  if ( *(_BYTE *)(((M_parent + 104) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_29;
  }
  v12 = *(boost::asio::detail::epoll_reactor **)(M_parent + 104);
  M_parent += 40LL;
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    v12,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)M_parent,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(p_implementation + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v9 = p_implementation + 8;
  if ( *(char *)(((p_implementation + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_29:
    __asan_report_store1(v9);
    goto LABEL_30;
  }
  *(_BYTE *)(p_implementation + 8) = 0;
LABEL_10:
  v9 = p_kcp_timer + 64;
  if ( *(_BYTE *)(((p_kcp_timer + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_load8(v9);
    goto LABEL_31;
  }
  v9 = *(_QWORD *)(p_kcp_timer + 64);
  if ( v9 )
  {
    if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
    {
      v10 = *(_QWORD *)v9 + 8LL;
      if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))(*(_QWORD *)v9 + 8LL))(v9, M_parent);
        goto LABEL_15;
      }
LABEL_32:
      v13 = v10;
      __asan_report_load8(v10);
      goto LABEL_33;
    }
LABEL_31:
    __asan_report_load8(v9);
    goto LABEL_32;
  }
LABEL_15:
  p_kcp_timer += 24LL;
  while ( 1 )
  {
    v13 = p_kcp_timer;
    if ( *(_BYTE *)((p_kcp_timer >> 3) + 0x7FFF8000) )
    {
LABEL_33:
      __asan_report_load8(v13);
LABEL_34:
      __asan_report_load8(v13);
LABEL_35:
      *(_QWORD *)(p_kcp_timer + 8) = 0LL;
      goto LABEL_36;
    }
    M_parent = *(_QWORD *)p_kcp_timer;
    if ( !*(_QWORD *)p_kcp_timer )
      goto LABEL_45;
    v13 = *(_QWORD *)p_kcp_timer;
    if ( *(_BYTE *)((M_parent >> 3) + 0x7FFF8000) )
      goto LABEL_34;
    v16 = *(boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type **)M_parent;
    *(_QWORD *)p_kcp_timer = *(_QWORD *)M_parent;
    if ( !v16 )
      break;
LABEL_36:
    *(_QWORD *)M_parent = 0LL;
    v14 = (std::_Rb_tree_node_base::_Base_ptr *)(M_parent + 8);
    if ( *(_BYTE *)(((M_parent + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_44;
    v15 = *(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, _QWORD))(M_parent + 8);
    *(_DWORD *)(v3 + 64) = 0;
    *(_BYTE *)(v3 + 68) = 0;
    *(_QWORD *)(v3 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    v15(0LL, M_parent, v3 + 64, 0LL);
  }
  v14 = (std::_Rb_tree_node_base::_Base_ptr *)(p_kcp_timer + 8);
  if ( !*(_BYTE *)(((p_kcp_timer + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  __asan_report_store8();
LABEL_44:
  __asan_report_load8(v14);
LABEL_45:
  p_udp_socket = (unsigned __int64)&v2->udp_socket_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->udp_socket_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&v2->udp_socket_);
LABEL_58:
    __asan_report_load4(p_ioc);
    goto LABEL_59;
  }
  service = v2->udp_socket_.impl_.service_;
  p_implementation = (unsigned __int64)&service->boost::asio::detail::reactive_socket_service_base;
  p_ioc = (unsigned __int64)&v2->udp_socket_.impl_.implementation_;
  v18 = *(_BYTE *)(((unsigned __int64)&v2->udp_socket_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_58;
  M_parent = (unsigned int)v2->udp_socket_.impl_.implementation_.socket_;
  if ( (_DWORD)M_parent == -1 )
    goto LABEL_49;
LABEL_59:
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
    v23 = p_implementation;
    __asan_report_load8(p_implementation);
LABEL_86:
    __asan_report_load1(v23);
LABEL_87:
    __asan_report_load4(p_ioc);
    goto LABEL_88;
  }
  v23 = p_ioc + 4;
  v24 = *(_BYTE *)(((p_ioc + 4) >> 3) + 0x7FFF8000);
  if ( v24 <= (char)((p_ioc + 4) & 7) && v24 )
    goto LABEL_86;
  boost::asio::detail::epoll_reactor::deregister_descriptor(
    service->reactor_,
    M_parent,
    (boost::asio::detail::epoll_reactor::per_descriptor_data *)(p_ioc + 8),
    ((*(_BYTE *)(p_ioc + 4) >> 6) ^ 1) & 1);
  *(_DWORD *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  M_parent = p_ioc + 4;
  v25 = *(_BYTE *)((p_ioc >> 3) + 0x7FFF8000);
  if ( v25 && v25 <= 3 )
    goto LABEL_87;
  boost::asio::detail::socket_ops::close(
    v2->udp_socket_.impl_.implementation_.socket_,
    (boost::asio::detail::socket_ops::state_type *)M_parent,
    1,
    (boost::system::error_code *)(v3 + 32));
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_88:
    v26 = (char *)p_implementation;
    __asan_report_load8(p_implementation);
    goto LABEL_89;
  }
  service = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *)service->reactor_;
  v26 = (char *)(p_ioc + 8);
  if ( *(_BYTE *)(((p_ioc + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_89:
    __asan_report_load8(v26);
    goto LABEL_90;
  }
  p_implementation = *(_QWORD *)(p_ioc + 8);
  if ( !p_implementation )
    goto LABEL_49;
  M_parent = (unsigned __int64)&service[2].boost::asio::detail::reactive_socket_service_base;
  v47 = &service[2].boost::asio::detail::reactive_socket_service_base;
  v26 = (char *)&service[3].boost::asio::detail::reactive_socket_service_base;
  if ( *(char *)(((unsigned __int64)&service[3].boost::asio::detail::reactive_socket_service_base >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_90:
    v27 = __asan_report_load1(v26);
    goto LABEL_91;
  }
  v27 = (__int64)service;
  if ( !LOBYTE(service[3].reactor_) )
  {
    *(_BYTE *)(v3 + 72) = 0;
    goto LABEL_70;
  }
LABEL_91:
  pthread_mutex_lock((pthread_mutex_t *)(v27 + 144));
  *(_BYTE *)(v3 + 72) = 1;
LABEL_70:
  if ( *(_BYTE *)(((unsigned __int64)&service[4] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&service[4]);
  }
  else
  {
    M_parent = p_implementation;
    if ( (int (**)(...))p_implementation != service[4]._vptr_service )
      goto LABEL_72;
  }
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)(M_parent + 24);
  if ( *(_BYTE *)(((M_parent + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_cat);
LABEL_96:
    __asan_report_load8(p_cat);
LABEL_97:
    __asan_report_load8(p_cat);
    goto LABEL_98;
  }
  service[4]._vptr_service = *(int (***)(...))(p_implementation + 24);
LABEL_72:
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)(p_implementation + 32);
  if ( *(_BYTE *)(((p_implementation + 32) >> 3) + 0x7FFF8000) )
    goto LABEL_96;
  v29 = *(_QWORD *)(p_implementation + 32);
  if ( !v29 )
    goto LABEL_77;
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)(p_implementation + 24);
  if ( *(_BYTE *)(((p_implementation + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_97;
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)(v29 + 24);
  if ( *(_BYTE *)(((v29 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
LABEL_99:
    __asan_report_load8(p_cat);
LABEL_100:
    __asan_report_store8();
    goto LABEL_101;
  }
  *(_QWORD *)(v29 + 24) = *(_QWORD *)(p_implementation + 24);
LABEL_77:
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)(p_implementation + 24);
  if ( *(_BYTE *)(((p_implementation + 24) >> 3) + 0x7FFF8000) )
    goto LABEL_99;
  v30 = *(boost::asio::detail::wait_op **)(p_implementation + 24);
  if ( !v30 )
    goto LABEL_81;
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)&v30->ec_.cat_;
  if ( *(_BYTE *)(((unsigned __int64)&v30->ec_.cat_ >> 3) + 0x7FFF8000) )
    goto LABEL_100;
  v30->ec_.cat_ = *(const boost::system::error_category **)(p_implementation + 32);
LABEL_81:
  p_cat = (std::_Rb_tree_node_base::_Base_ptr *)&service[4].key_;
  if ( !*(_BYTE *)(((unsigned __int64)&service[4].key_ >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(p_implementation + 24) = service[4].key_.type_info_;
    *(_QWORD *)(p_implementation + 32) = 0LL;
    service[4].key_.type_info_ = (const std::type_info *)p_implementation;
    if ( !*(_BYTE *)(v3 + 72) )
      goto LABEL_83;
    goto LABEL_102;
  }
LABEL_101:
  __asan_report_load8(p_cat);
LABEL_102:
  pthread_mutex_unlock((pthread_mutex_t *)&v47[1]);
LABEL_83:
  p_implementation_executor = p_ioc + 8;
  if ( *(_BYTE *)(((p_ioc + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_104:
    __asan_report_load8(p_implementation_executor);
LABEL_105:
    __asan_report_load8(p_implementation_executor);
    goto LABEL_106;
  }
  *(_QWORD *)(p_ioc + 8) = 0LL;
LABEL_49:
  p_implementation_executor = (unsigned __int64)&v2->udp_socket_.impl_.implementation_executor_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->udp_socket_.impl_.implementation_executor_ >> 3) + 0x7FFF8000) )
    goto LABEL_104;
  p_implementation_executor = (unsigned __int64)v2->udp_socket_.impl_.implementation_executor_.executor_.impl_;
  if ( !p_implementation_executor )
    goto LABEL_54;
  if ( *(_BYTE *)((p_implementation_executor >> 3) + 0x7FFF8000) )
    goto LABEL_105;
  v20 = *(_QWORD *)p_implementation_executor + 8LL;
  if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
  {
LABEL_106:
    __asan_report_load8(v20);
LABEL_107:
    p_first_service = p_ioc;
    __asan_report_load8(p_ioc);
    goto LABEL_108;
  }
  (*(void (**)(void))(*(_QWORD *)p_implementation_executor + 8LL))();
LABEL_54:
  p_ioc = (unsigned __int64)&v2->ioc_;
  if ( *(_BYTE *)(((unsigned __int64)&v2->ioc_ >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  service_registry = v2->ioc_.service_registry_;
  p_first_service = (unsigned __int64)&service_registry->first_service_;
  if ( *(_BYTE *)(((unsigned __int64)&service_registry->first_service_ >> 3) + 0x7FFF8000) )
  {
LABEL_108:
    __asan_report_load8(p_first_service);
    goto LABEL_109;
  }
  for ( p_udp_socket = (unsigned __int64)service_registry->first_service_;
        p_udp_socket;
        p_udp_socket = *(_QWORD *)(p_udp_socket + 32) )
  {
    p_first_service = p_udp_socket;
    if ( *(_BYTE *)((p_udp_socket >> 3) + 0x7FFF8000) )
    {
LABEL_109:
      __asan_report_load8(p_first_service);
LABEL_110:
      __asan_report_load8(p_first_service);
      continue;
    }
    p_first_service = *(_QWORD *)p_udp_socket + 16LL;
    if ( *(_BYTE *)((p_first_service >> 3) + 0x7FFF8000) )
      goto LABEL_110;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)p_udp_socket + 16LL))(p_udp_socket);
    if ( *(_BYTE *)(((p_udp_socket + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_udp_socket + 32);
      break;
    }
  }
  if ( *(_BYTE *)((p_ioc >> 3) + 0x7FFF8000) )
  {
    v31 = (_QWORD *)p_ioc;
    __asan_report_load8(p_ioc);
    goto LABEL_120;
  }
  p_udp_socket = (unsigned __int64)v2->ioc_.service_registry_;
  while ( 2 )
  {
    v31 = (_QWORD *)(p_udp_socket + 56);
    if ( *(_BYTE *)(((p_udp_socket + 56) >> 3) + 0x7FFF8000) )
    {
LABEL_120:
      v32 = __asan_report_load8(v31);
LABEL_121:
      v33 = v32;
      __asan_report_load8(v32);
LABEL_122:
      __asan_report_load8(v33);
LABEL_123:
      __asan_report_load8(v34);
LABEL_124:
      *(_QWORD *)(p_udp_socket + 56) = v4;
      continue;
    }
    break;
  }
  v33 = *(_QWORD *)(p_udp_socket + 56);
  if ( !v33 )
    goto LABEL_132;
  v32 = v33 + 32;
  if ( *(_BYTE *)(((v33 + 32) >> 3) + 0x7FFF8000) )
    goto LABEL_121;
  v4 = *(char **)(v33 + 32);
  if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
    goto LABEL_122;
  v34 = *(_QWORD *)v33 + 8LL;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    goto LABEL_123;
  (*(void (**)(void))(*(_QWORD *)v33 + 8LL))();
  if ( !*(_BYTE *)(((p_udp_socket + 56) >> 3) + 0x7FFF8000) )
    goto LABEL_124;
  __asan_report_store8();
LABEL_132:
  if ( *(_BYTE *)((p_ioc >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_ioc;
    __asan_report_load8(p_ioc);
LABEL_148:
    v38 = __asan_report_load8(p_M_refcount);
    goto LABEL_149;
  }
  v35 = v2->ioc_.service_registry_;
  if ( v35 )
  {
    pthread_mutex_destroy(&v35->mutex_.mutex_);
    operator delete(v35, 0x40uLL);
  }
  p_M_refcount = &v2->kcp_server_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v2->kcp_server_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_148;
  M_pi = (unsigned __int64)v2->kcp_server_mgr_wtr_._M_refcount._M_pi;
  if ( !M_pi )
    goto LABEL_142;
  v38 = M_pi + 12;
  if ( &_pthread_key_create )
  {
    v39 = *(_BYTE *)((v38 >> 3) + 0x7FFF8000);
    if ( (char)((v38 & 7) + 3) < v39 || !v39 )
    {
      v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF);
      goto LABEL_141;
    }
LABEL_149:
    M_pi = v38;
    __asan_report_store4(v38);
  }
  v43 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((M_pi + 12) & 7) + 3) >= v43 && v43 )
  {
    M_pi += 12LL;
    __asan_report_load4(M_pi);
LABEL_154:
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
    }
    else
    {
      v44 = *(_QWORD *)M_pi + 24LL;
      if ( !*(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)M_pi + 24LL))();
        goto LABEL_142;
      }
    }
    v41 = v44;
    __asan_report_load8(v44);
    goto LABEL_159;
  }
  v40 = *(_DWORD *)(M_pi + 12);
  *(_DWORD *)(M_pi + 12) = v40 - 1;
LABEL_141:
  if ( v40 == 1 )
    goto LABEL_154;
LABEL_142:
  v41 = (unsigned __int64)&v2->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v2->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_159:
    __asan_report_load8(v41);
    goto LABEL_160;
  }
  v42 = v2->_M_weak_this._M_refcount._M_pi;
  if ( v42 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v42);
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    return;
  }
LABEL_160:
  *(_QWORD *)v3 = 1172321806LL;
  *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
};

// Line 33: range 000000000CDDEBD2-000000000CDDEBE9
void __fastcall common::minet::KcpConnMgrBase::~KcpConnMgrBase(common::minet::KcpConnMgrBase *const this)
{
  common::minet::KcpConnMgrBase::~KcpConnMgrBase(this);
  operator delete(this, 0x100180uLL);
};

// Line 86: range 000000000CDDBADE-000000000CDDBC89
__int64 __fastcall common::minet::KcpConnMgrBase::reload(
        common::minet::KcpConnMgrBase *const this,
        double connect_limit_per_second_per_ip,
        uint32_t max_conn_num,
        uint32_t wait_snd_check_interval,
        uint32_t wait_snd_max)
{
  std::atomic<unsigned int> *p_max_conn_num; // rbp
  char v7; // di
  uint32_t *p_M_i; // rdi
  char v9; // si
  char v10; // al
  char v11; // al
  char v12; // dl
  char v13; // dl
  struct _Unwind_Exception *v14; // rbx
  common::milog::MiLogStream v16; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_16:
    p_M_i = &p_max_conn_num->_M_i;
    __asan_report_store4(p_max_conn_num);
LABEL_17:
    __asan_report_store4(p_M_i);
LABEL_18:
    __asan_report_store4(p_M_i);
LABEL_19:
    __asan_report_load4(p_M_i);
LABEL_20:
    __asan_report_load4(p_M_i);
    goto LABEL_21;
  }
  this->connect_limit_per_second_per_ip_._M_i = connect_limit_per_second_per_ip;
  _mm_mfence();
  p_max_conn_num = &this->max_conn_num_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 64) & 7) + 3) >= v7 && v7 )
    goto LABEL_16;
  this->max_conn_num_._M_i = max_conn_num;
  _mm_mfence();
  p_M_i = &this->wait_snd_check_interval_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v9 && v9 )
    goto LABEL_17;
  this->wait_snd_check_interval_ = wait_snd_check_interval;
  p_M_i = &this->wait_snd_max_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_18;
  this->wait_snd_max_ = wait_snd_max;
  common::milog::MiLogStream::MiLogStream(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_conn_mgr_base.cpp",
    "reload",
    92);
  p_M_i = &this->wait_snd_max_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_19;
  p_M_i = &this->wait_snd_check_interval_;
  v12 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 68) & 7) + 3) >= v12 && v12 )
    goto LABEL_20;
  v13 = *(_BYTE *)(((unsigned __int64)p_max_conn_num >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)p_max_conn_num & 7) + 3) >= v13 && v13 )
  {
LABEL_21:
    v14 = (struct _Unwind_Exception *)__asan_report_load4(p_max_conn_num);
    common::milog::MiLogStream::~MiLogStream(&v16);
    __asan_handle_no_return(&v16);
    _Unwind_Resume(v14);
  }
  common::milog::MiLogStream::operator()(
    &v16,
    "KcpConnMgr reload succ with connect_limit_per_second_per_ip=%g max_conn_num=%u wait_snd_check_interval=%u wait_snd_max_=%u",
    this->max_conn_num_._M_i,
    this->wait_snd_check_interval_,
    this->wait_snd_max_,
    connect_limit_per_second_per_ip);
  common::milog::MiLogStream::~MiLogStream(&v16);
  return 0LL;
};

// Line 98: range 000000000CDE669E-000000000CDE68AC
int32_t __fastcall common::minet::KcpConnMgrBase::start(common::minet::KcpConnMgrBase *const this)
{
  __int64 v1; // rsi
  std::atomic<common::minet::KcpConnMgrBase::Status> *p_state; // rdi
  char v4; // dl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 p_network_thread; // rdi
  std::thread::native_handle_type M_thread; // rax
  struct _Unwind_Exception *v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rax
  std::thread::native_handle_type v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  common::minet::KcpConnMgrBase *thisa; // [rsp+20h] [rbp-38h]
  __m128i v18[2]; // [rsp+30h] [rbp-28h] BYREF

  common::minet::KcpConnMgrBase::hook_udp_async_receive(this);
  common::minet::KcpConnMgrBase::hook_kcp_timer(this);
  p_state = &this->state_;
  v4 = *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 96) & 7) + 3) >= v4 && v4 )
  {
    v5 = __asan_report_store4(p_state);
    goto LABEL_8;
  }
  this->state_._M_i = STATUS_RUNNING;
  _mm_mfence();
  v16.m128i_i64[0] = (__int64)common::minet::KcpConnMgrBase::network_thread;
  v16.m128i_i64[1] = 0LL;
  thisa = this;
  v14 = 0LL;
  v18[0] = _mm_load_si128(&v16);
  v5 = operator new(0x20uLL);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    v6 = v5;
    __asan_report_store8();
    goto LABEL_9;
  }
  *(_QWORD *)v5 = &`vtable for'std::thread::_State_impl<std::thread::_Invoker<std::tuple<std::_Bind<void (common::minet::KcpConnMgrBase::*)(void) ()(common::minet::KcpConnMgrBase*)>>>>
                + 2;
  v6 = v5 + 8;
  if ( *(_WORD *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_9:
    __asan_report_store16(v6, v1);
    goto LABEL_10;
  }
  *(__m128i *)(v5 + 8) = _mm_load_si128(v18);
  if ( !*(_BYTE *)(((v5 + 24) >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)(v5 + 24) = this;
    v15 = v5;
    std::thread::_M_start_thread(&v14, &v15, &pthread_create);
    goto LABEL_11;
  }
LABEL_10:
  __asan_report_store8();
LABEL_11:
  if ( !v15 )
    goto LABEL_15;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v15);
    goto LABEL_21;
  }
  v7 = *(_QWORD *)v15 + 8LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    p_network_thread = v7;
    __asan_report_load8(v7);
LABEL_22:
    v11 = (struct _Unwind_Exception *)__asan_report_load8(p_network_thread);
    v12 = (__int64 *)v15;
    if ( v15 )
    {
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v15);
      v13 = *v12;
      if ( *(_BYTE *)(((unsigned __int64)(*v12 + 8) >> 3) + 0x7FFF8000) )
      {
        v12 = (__int64 *)(*v12 + 8);
        v13 = __asan_report_load8(v12);
      }
      (*(void (**)(void))(v13 + 8))();
    }
    __asan_handle_no_return(v12);
    _Unwind_Resume(v11);
  }
  (*(void (**)(void))(*(_QWORD *)v15 + 8LL))();
LABEL_15:
  p_network_thread = (unsigned __int64)&this->network_thread_;
  if ( *(_BYTE *)(((unsigned __int64)&this->network_thread_ >> 3) + 0x7FFF8000) )
    goto LABEL_22;
  if ( this->network_thread_._M_id._M_thread )
  {
    __asan_handle_no_return(p_network_thread);
    std::terminate();
  }
  if ( *(_BYTE *)((p_network_thread >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_network_thread);
LABEL_31:
    __asan_handle_no_return(p_network_thread);
    std::terminate();
  }
  M_thread = this->network_thread_._M_id._M_thread;
  this->network_thread_._M_id._M_thread = v14;
  v14 = M_thread;
  if ( M_thread )
    goto LABEL_31;
  return 0;
};

// Line 107: range 000000000CDE7250-000000000CDE7A38
// local variable allocation has failed, the output may be wrong!
common::minet::KcpConnMgrBase *__fastcall common::minet::KcpConnMgrBase::createSession(
        common::minet::KcpConnMgrBase *const this,
        common::minet::KcpConnMgrBasePtr kcp_conn_mgr_ptr,
        uint32_t session_id,
        uint32_t token,
        const boost::asio::ip::udp::endpoint *udp_remote_endpoint)
{
  unsigned __int64 v5; // r15
  common::minet::KcpConnMgrBase *v6; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // r12
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r14
  char v10; // al
  void **p_type; // rsi
  char v12; // al
  char v13; // dl
  void **v14; // rdi
  char v15; // al
  std::forward_iterator_tag v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rax
  char v21; // dl
  char v22; // cl
  void *v23; // r12
  void **v24; // rdi
  char v25; // al
  char v26; // al
  struct _Unwind_Exception *v27; // rbx
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession> *M_p; // rdi
  std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2> *v29; // rsi
  char v30; // al
  char v31; // dl
  volatile signed __int32 *p_M_weak_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rax
  char v34; // dl
  char v35; // cl
  void *v36; // rdi
  struct _Unwind_Exception *v37; // rbx
  void *v38; // rdi
  struct _Unwind_Exception *v39; // rbp
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_ptr; // rdi
  unsigned __int64 s; // [rsp+0h] [rbp-F8h]
  common::minet::KcpSession *v46; // [rsp+20h] [rbp-D8h]
  std::enable_shared_from_this<common::minet::KcpConnMgrBase> *v47; // [rsp+28h] [rbp-D0h]
  common::minet::KcpConnMgrBaseWtr kcp_conn_mgr_wtr; // [rsp+30h] [rbp-C8h] BYREF
  std::string type; // [rsp+40h] [rbp-B8h] BYREF
  char v50[152]; // [rsp+60h] [rbp-98h] BYREF

  v6 = this;
  M_pi = kcp_conn_mgr_ptr._M_refcount._M_pi;
  v8 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(96LL);
    if ( v18 )
      v8 = v18;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "3 32 1 4 __a2 48 1 4 __a2 64 16 7 __guard";
  *(_QWORD *)(v8 + 16) = common::minet::KcpConnMgrBase::createSession;
  v9 = (_DWORD *)(v8 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753535;
  v9[536862722] = -202178560;
  v10 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v10 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v10 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_22;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->_vptr_KcpConnMgrBase = 0LL;
      v47 = &this->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
      p_type = (void **)(v8 + 32);
      std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession> *)(v8 + 32));
      v5 = *(_QWORD *)(v8 + 72);
      this = (common::minet::KcpConnMgrBase *const)(v5 + 8);
      v12 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
      if ( !v12 || v12 > 3 )
      {
        *(_DWORD *)(v5 + 8) = 1;
        this = (common::minet::KcpConnMgrBase *const)(v5 + 12);
        v13 = *(_BYTE *)(((v5 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v5 + 12) & 7) + 3) < v13 || !v13 )
        {
          *(_DWORD *)(v5 + 12) = 1;
          if ( !*(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v5 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>
                          + 2;
            v46 = (common::minet::KcpSession *)(v5 + 16);
            if ( !common::tools::perf::MemoryPerf::is_record )
              goto LABEL_32;
            v14 = &`typeinfo for'common::minet::KcpSession + 1;
            if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::KcpSession + 1) >> 3) + 0x7FFF8000) )
            {
              s = (unsigned __int64)*(&`typeinfo for'common::minet::KcpSession + 1);
              v14 = (void **)s;
              v15 = *(_BYTE *)((s >> 3) + 0x7FFF8000);
              v16.gap0[0] = s & 7;
              if ( v15 > (char)(s & 7) || !v15 )
              {
                if ( *(_BYTE *)s != 42 )
                  goto LABEL_16;
                goto LABEL_28;
              }
LABEL_27:
              __asan_report_load1(v14);
LABEL_28:
              ++s;
LABEL_16:
              type._M_dataplus._M_p = type._anon_0._M_local_buf;
              if ( s )
                v17 = s + strlen((const char *)s);
              else
                v17 = -1LL;
              std::string::_M_construct<char const*>(&type, (const char *)s, (const char *)v17, v16);
              p_type = (void **)&type;
              common::tools::perf::MemoryPerfRecorder::construct(
                &common::tools::perf::MemoryPerf::recorder,
                &type,
                0xF8uLL);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                operator delete(type._M_dataplus._M_p);
LABEL_32:
              if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
              {
                p_M_use_count = (volatile signed __int32 *)M_pi;
                __asan_report_load8(M_pi);
              }
              else
              {
                kcp_conn_mgr_wtr._M_ptr = (std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
                p_M_use_count = &M_pi->_M_use_count;
                if ( !*(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
                {
                  v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
                  kcp_conn_mgr_wtr._M_refcount._M_pi = v20;
                  if ( !v20 )
                    goto LABEL_39;
                  p_M_use_count = &v20->_M_weak_count;
                  if ( !&_pthread_key_create )
                  {
LABEL_43:
                    v22 = *(_BYTE *)(((unsigned __int64)&v20->_M_weak_count >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v20 + 12) & 7) + 3) >= v22 && v22 )
                    {
                      __asan_report_load4(&v20->_M_weak_count);
LABEL_47:
                      if ( kcp_conn_mgr_wtr._M_refcount._M_pi )
                        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(kcp_conn_mgr_wtr._M_refcount._M_pi);
                      *(_QWORD *)(v8 + 72) = 0LL;
                      if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store8();
                      }
                      else
                      {
                        v6->_M_weak_this._M_ptr = (std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)v5;
                        if ( !*(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
                        {
                          v6->_vptr_KcpConnMgrBase = (int (**)(...))v46;
                          v23 = *(void **)(v8 + 72);
                          if ( !v23 )
                            goto LABEL_62;
                          v24 = (void **)&common::tools::perf::MemoryPerf::is_record;
                          v25 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3)
                                         + 0x7FFF8000);
                          if ( v25 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v25 )
                          {
                            __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
                          }
                          else
                          {
                            if ( !common::tools::perf::MemoryPerf::is_record )
                            {
LABEL_61:
                              free(v23);
                              goto LABEL_62;
                            }
                            v24 = &`typeinfo for'common::minet::KcpSession + 1;
                            if ( !*(_BYTE *)(((unsigned __int64)(&`typeinfo for'common::minet::KcpSession + 1) >> 3)
                                           + 0x7FFF8000) )
                            {
                              p_type = (void **)*(&`typeinfo for'common::minet::KcpSession + 1);
                              v24 = p_type;
                              v26 = *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000);
                              if ( v26 > (*(_BYTE *)(&`typeinfo for'common::minet::KcpSession + 1) & 7) || !v26 )
                              {
                                if ( *(_BYTE *)p_type != 42 )
                                  goto LABEL_59;
                                goto LABEL_74;
                              }
LABEL_73:
                              __asan_report_load1(v24);
LABEL_74:
                              p_type = (void **)((char *)p_type + 1);
LABEL_59:
                              std::string::basic_string<std::allocator<char>>(
                                &type,
                                (const char *)p_type,
                                (const std::allocator<char> *)(v8 + 48));
                              common::tools::perf::MemoryPerfRecorder::deallocate(
                                &common::tools::perf::MemoryPerf::recorder,
                                &type);
                              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                                operator delete(type._M_dataplus._M_p);
                              goto LABEL_61;
                            }
                          }
                          __asan_report_load8(v24);
                          goto LABEL_73;
                        }
                      }
                      v27 = (struct _Unwind_Exception *)__asan_report_store8();
                      M_p = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession> *)type._M_dataplus._M_p;
                      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type._M_dataplus._M_p != &type._anon_0 )
                        operator delete(type._M_dataplus._M_p);
                      v29 = *(std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2> **)(v8 + 72);
                      if ( v29 )
                      {
                        M_p = *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession> **)(v8 + 64);
                        common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,common::tools::perf::allocator<common::minet::KcpSession,common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>,common::minet::KcpSession>::deallocate(
                          M_p,
                          v29,
                          1uLL);
                      }
                      __asan_handle_no_return(M_p);
                      _Unwind_Resume(v27);
                    }
                    ++v20->_M_weak_count;
LABEL_39:
                    p_type = (void **)&kcp_conn_mgr_wtr;
                    common::minet::KcpSession::KcpSession(v46, &kcp_conn_mgr_wtr, session_id, token);
                    goto LABEL_47;
                  }
                  v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
                  if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
                  {
                    _InterlockedAdd(p_M_use_count, 1u);
                    goto LABEL_39;
                  }
LABEL_42:
                  v20 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
                  goto LABEL_43;
                }
              }
              __asan_report_load8(p_M_use_count);
              goto LABEL_42;
            }
LABEL_26:
            __asan_report_load8(v14);
            goto LABEL_27;
          }
LABEL_25:
          v14 = (void **)v5;
          __asan_report_store8();
          goto LABEL_26;
        }
LABEL_24:
        __asan_report_store4(this);
        goto LABEL_25;
      }
LABEL_23:
      __asan_report_store4(this);
      goto LABEL_24;
    }
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_90:
    __asan_report_store4(this);
LABEL_91:
    __asan_report_store4(this);
    goto LABEL_92;
  }
  this->_vptr_KcpConnMgrBase = 0LL;
  v46 = (common::minet::KcpSession *)&this->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,std::allocator<common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<common::minet::KcpSession,std::allocator<common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2> > *)(v8 + 48));
  v5 = *(_QWORD *)(v8 + 72);
  this = (common::minet::KcpConnMgrBase *const)(v5 + 8);
  v30 = *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000);
  if ( v30 && v30 <= 3 )
    goto LABEL_90;
  *(_DWORD *)(v5 + 8) = 1;
  this = (common::minet::KcpConnMgrBase *const)(v5 + 12);
  v31 = *(_BYTE *)(((v5 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v5 + 12) & 7) + 3) >= v31 && v31 )
    goto LABEL_91;
  *(_DWORD *)(v5 + 12) = 1;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  *(_QWORD *)v5 = &`vtable for'std::_Sp_counted_ptr_inplace<common::minet::KcpSession,std::allocator<common::minet::KcpSession>,(__gnu_cxx::_Lock_policy)2>
                + 2;
  s = v5 + 16;
  if ( *(_BYTE *)(((unsigned __int64)M_pi >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    p_M_weak_count = (volatile signed __int32 *)M_pi;
    __asan_report_load8(M_pi);
    goto LABEL_94;
  }
  kcp_conn_mgr_wtr._M_ptr = (std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)M_pi->_vptr__Sp_counted_base;
  p_M_weak_count = &M_pi->_M_use_count;
  if ( *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_load8(p_M_weak_count);
LABEL_95:
    v33 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_weak_count);
    goto LABEL_96;
  }
  v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)&M_pi->_M_use_count;
  kcp_conn_mgr_wtr._M_refcount._M_pi = v33;
  if ( !v33 )
  {
LABEL_88:
    common::minet::KcpSession::KcpSession((common::minet::KcpSession *const)s, &kcp_conn_mgr_wtr, session_id, token);
    goto LABEL_100;
  }
  p_M_weak_count = &v33->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v34 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v34 || !v34 )
    {
      _InterlockedAdd(p_M_weak_count, 1u);
      goto LABEL_88;
    }
    goto LABEL_95;
  }
LABEL_96:
  v35 = *(_BYTE *)(((unsigned __int64)&v33->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v33 + 12) & 7) + 3) < v35 || !v35 )
  {
    ++v33->_M_weak_count;
    goto LABEL_88;
  }
  __asan_report_load4(&v33->_M_weak_count);
LABEL_100:
  if ( kcp_conn_mgr_wtr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(kcp_conn_mgr_wtr._M_refcount._M_pi);
  *(_QWORD *)(v8 + 72) = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
LABEL_107:
    v37 = (struct _Unwind_Exception *)__asan_report_store8();
    if ( kcp_conn_mgr_wtr._M_refcount._M_pi )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(kcp_conn_mgr_wtr._M_refcount._M_pi);
    v38 = *(void **)(v8 + 72);
    if ( v38 )
      operator delete(v38);
    __asan_handle_no_return(v38);
    _Unwind_Resume(v37);
  }
  v6->_M_weak_this._M_ptr = (std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)v5;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    goto LABEL_107;
  v6->_vptr_KcpConnMgrBase = (int (**)(...))s;
  v36 = *(void **)(v8 + 72);
  if ( v36 )
    operator delete(v36);
LABEL_62:
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    v39 = (struct _Unwind_Exception *)__asan_report_load8(v6);
    if ( *(_BYTE *)(((unsigned __int64)&v6->std::enable_shared_from_this<common::minet::KcpConnMgrBase> >> 3)
                  + 0x7FFF8000) )
      __asan_report_load8(&v6->std::enable_shared_from_this<common::minet::KcpConnMgrBase>);
    M_ptr = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v6->_M_weak_this._M_ptr;
    if ( M_ptr )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_ptr);
    __asan_handle_no_return(M_ptr);
    _Unwind_Resume(v39);
  }
  if ( v6->_vptr_KcpConnMgrBase )
    common::minet::KcpSession::set_udp_remote_endpoint(
      (common::minet::KcpSession *const)v6->_vptr_KcpConnMgrBase,
      udp_remote_endpoint);
  if ( v50 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v6;
};

// Line 117: range 000000000CDDBF9A-000000000CDDC4C5
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall common::minet::KcpConnMgrBase::addSession(
        common::minet::KcpConnMgrBase *const this,
        common::minet::KcpSessionPtr session_ptr,
        __int64 a3,
        std::shared_ptr<common::minet::KcpSession> *a4)
{
  std::shared_ptr<common::minet::KcpSession> *M_ptr; // rbp
  unsigned __int64 v6; // r12
  unsigned int *v7; // rcx
  _DWORD *v8; // r14
  volatile signed __int32 *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // eax
  int v13; // ett
  bool v14; // dl
  std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *v15; // rdi
  std::enable_shared_from_this<common::minet::KcpServerMgrBase> *v16; // rdi
  char v17; // dl
  char v18; // dl
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > >,bool> v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebp
  common::minet::KcpServerMgrBase *v22; // rdx
  volatile signed __int32 *p_M_use_count; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rax
  char v25; // cl
  int32_t v26; // eax
  char v27; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v28; // rdi
  std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::element_type *v30; // [rsp+0h] [rbp-C8h] BYREF
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v31; // [rsp+8h] [rbp-C0h]
  common::milog::MiLogStream v32; // [rsp+10h] [rbp-B8h] BYREF
  char v33[152]; // [rsp+30h] [rbp-98h] BYREF

  M_ptr = (std::shared_ptr<common::minet::KcpSession> *)session_ptr._M_ptr;
  v6 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_1(96LL);
    if ( v20 )
      v6 = v20;
  }
  v7 = (unsigned int *)(v6 + 96);
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 7 __count 64 16 22 kcp_server_mgr_ptr:123";
  *(_QWORD *)(v6 + 16) = common::minet::KcpConnMgrBase::addSession;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)session_ptr._M_ptr >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)session_ptr._M_ptr;
    __asan_report_load8(session_ptr._M_ptr);
LABEL_28:
    __asan_report_load8(p_M_refcount);
    goto LABEL_29;
  }
  if ( !session_ptr._M_ptr->_vptr_KcpSession )
  {
    v21 = -1;
    goto LABEL_60;
  }
  session_ptr._M_ptr = (std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::element_type *)&this->kcp_server_mgr_wtr_;
  p_M_refcount = (volatile signed __int32 *)&this->kcp_server_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_server_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
    goto LABEL_28;
  M_pi = this->kcp_server_mgr_wtr_._M_refcount._M_pi;
  *(_QWORD *)(v6 + 72) = M_pi;
  if ( !M_pi )
    goto LABEL_15;
  p_M_refcount = &M_pi->_M_use_count;
  a4 = (std::shared_ptr<common::minet::KcpSession> *)*(unsigned __int8 *)(((unsigned __int64)&M_pi->_M_use_count >> 3)
                                                                        + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < (char)a4 || !(_BYTE)a4 )
  {
    *(_DWORD *)(v6 + 48) = M_pi->_M_use_count;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v6 + 48);
      if ( !v11 )
        goto LABEL_30;
      v13 = *(_DWORD *)(v6 + 48);
      v12 = _InterlockedCompareExchange(p_M_refcount, v11 + 1, v11);
      v14 = v13 == v12;
      if ( v13 != v12 )
        *(_DWORD *)(v6 + 48) = v12;
      if ( v14 )
        goto LABEL_13;
    }
  }
LABEL_29:
  __asan_report_load4(p_M_refcount);
LABEL_30:
  v14 = 0;
LABEL_13:
  if ( !v14 )
    *(_QWORD *)(v6 + 72) = 0LL;
LABEL_15:
  v15 = *(std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 72);
  if ( !v15 )
    goto LABEL_21;
  v16 = &v15->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  v17 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v16 & 7) + 3) >= v17 && v17 )
  {
    __asan_report_load4(v16);
LABEL_32:
    __asan_report_load8(session_ptr._M_ptr);
    goto LABEL_33;
  }
  if ( LODWORD(v16->_M_weak_this._M_ptr) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)session_ptr._M_ptr >> 3) + 0x7FFF8000) )
    {
      v15 = this->kcp_server_mgr_wtr_._M_ptr;
      goto LABEL_21;
    }
    goto LABEL_32;
  }
LABEL_33:
  v15 = 0LL;
LABEL_21:
  *(_QWORD *)(v6 + 64) = v15;
  if ( v15 )
  {
    v18 = *(_BYTE *)(((unsigned __int64)&M_ptr->_M_ptr->session_id_ >> 3) + 0x7FFF8000);
    if ( v18 && v18 <= 3 )
    {
      __asan_report_load4(&M_ptr->_M_ptr->session_id_);
    }
    else
    {
      *(_DWORD *)(v6 + 48) = M_ptr->_M_ptr->session_id_;
      v19 = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>>::_M_emplace_unique<unsigned int &,std::shared_ptr<common::minet::KcpSession>&>(
              &this->session_map_._M_t,
              (unsigned int *)(v6 + 48),
              M_ptr,
              v7,
              a4);
    }
    if ( v19.second )
    {
      v22 = *(common::minet::KcpServerMgrBase **)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)M_ptr >> 3) + 0x7FFF8000) )
      {
        p_M_use_count = (volatile signed __int32 *)M_ptr;
        __asan_report_load8(M_ptr);
      }
      else
      {
        v30 = M_ptr->_M_ptr;
        p_M_use_count = (volatile signed __int32 *)&M_ptr->_M_refcount;
        if ( !*(_BYTE *)(((unsigned __int64)&M_ptr->_M_refcount >> 3) + 0x7FFF8000) )
        {
          v24 = M_ptr->_M_refcount._M_pi;
          v31 = v24;
          if ( !v24 )
            goto LABEL_44;
          p_M_use_count = &v24->_M_use_count;
          if ( !&_pthread_key_create )
          {
LABEL_49:
            v27 = *(_BYTE *)(((unsigned __int64)&v24->_M_use_count >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v24 + 8) & 7) + 3) >= v27 && v27 )
            {
              v26 = __asan_report_load4(&v24->_M_use_count);
              goto LABEL_53;
            }
            ++v24->_M_use_count;
LABEL_44:
            v26 = common::minet::KcpServerMgrBase::addSession(
                    v22,
                    (common::minet::KcpSessionPtr)__PAIR128__((unsigned __int64)v22, &v30));
LABEL_53:
            v21 = v26;
            if ( v31 )
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v31);
            if ( v21 )
            {
              common::milog::MiLogStream::MiLogStream(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "src/kcp_conn_mgr_base.cpp",
                "addSession",
                139);
              common::milog::MiLogStream::operator()(
                &v32,
                "addSession failed, session_id=%u",
                *(unsigned int *)(v6 + 48));
              common::milog::MiLogStream::~MiLogStream(&v32);
              v21 = -1;
            }
            else
            {
              common::milog::MiLogStream::MiLogStream(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                2u,
                "src/kcp_conn_mgr_base.cpp",
                "addSession",
                143);
              common::milog::MiLogStream::operator()(
                &v32,
                "add session succ, session_id=%u",
                *(unsigned int *)(v6 + 48));
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
            goto LABEL_58;
          }
          v25 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v25 || !v25 )
          {
            _InterlockedAdd(p_M_use_count, 1u);
            goto LABEL_44;
          }
LABEL_48:
          v24 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
          goto LABEL_49;
        }
      }
      __asan_report_load8(p_M_use_count);
      goto LABEL_48;
    }
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "addSession",
      133);
    common::milog::MiLogStream::operator()(&v32, "duplciate session session_id=%u", *(unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v21 = -1;
  }
  else
  {
    common::milog::MiLogStream::MiLogStream(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "addSession",
      126);
    common::milog::MiLogStream::operator()(&v32, "kcp_server_mgr_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v21 = -1;
  }
LABEL_58:
  v28 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
  if ( v28 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v28);
LABEL_60:
  if ( v33 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v21;
};

// Line 149: range 000000000CDDEBEA-000000000CDDEE7F
void __fastcall common::minet::KcpConnMgrBase::delSession(
        common::minet::KcpConnMgrBase *const this,
        uint32_t session_id)
{
  unsigned __int64 v3; // rbp
  _DWORD *v4; // r13
  common::minet::KcpServerMgrBaseWtr *p_kcp_server_mgr_wtr; // rcx
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v8; // si
  signed __int32 v9; // eax
  signed __int32 v10; // eax
  int v11; // ett
  bool v12; // dl
  common::minet::KcpServerMgrBase *M_ptr; // rdi
  std::enable_shared_from_this<common::minet::KcpServerMgrBase> *v14; // rdi
  char v15; // dl
  __int64 v16; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-B8h] BYREF
  char v19[152]; // [rsp+30h] [rbp-98h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_1(96LL);
    if ( v16 )
      v3 = v16;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 __count 48 4 14 session_id:148 64 16 22 kcp_server_mgr_ptr:151";
  *(_QWORD *)(v3 + 16) = common::minet::KcpConnMgrBase::delSession;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = session_id;
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>>::erase(
    &this->session_map_._M_t,
    (const unsigned int *)(v3 + 48));
  p_kcp_server_mgr_wtr = &this->kcp_server_mgr_wtr_;
  p_M_refcount = &this->kcp_server_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_server_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = this->kcp_server_mgr_wtr_._M_refcount._M_pi;
    *(_QWORD *)(v3 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v8 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v8 || !v8 )
    {
      *(_DWORD *)(v3 + 32) = M_pi->_M_use_count;
      while ( 1 )
      {
        v9 = *(_DWORD *)(v3 + 32);
        if ( !v9 )
          goto LABEL_23;
        v11 = *(_DWORD *)(v3 + 32);
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v9 + 1, v9);
        v12 = v11 == v10;
        if ( v11 != v10 )
          *(_DWORD *)(v3 + 32) = v10;
        if ( v12 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v12 = 0;
LABEL_11:
  if ( !v12 )
    *(_QWORD *)(v3 + 72) = 0LL;
LABEL_13:
  M_ptr = *(common::minet::KcpServerMgrBase **)(v3 + 72);
  if ( !M_ptr )
    goto LABEL_27;
  v14 = &M_ptr->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  v15 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v14 & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(v14);
LABEL_25:
    __asan_report_load8(p_kcp_server_mgr_wtr);
    goto LABEL_26;
  }
  if ( LODWORD(v14->_M_weak_this._M_ptr) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_kcp_server_mgr_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = this->kcp_server_mgr_wtr_._M_ptr;
      goto LABEL_27;
    }
    goto LABEL_25;
  }
LABEL_26:
  M_ptr = 0LL;
LABEL_27:
  *(_QWORD *)(v3 + 64) = M_ptr;
  if ( M_ptr )
    common::minet::KcpServerMgrBase::delSession(M_ptr, *(_DWORD *)(v3 + 48));
  common::milog::MiLogStream::MiLogStream(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_conn_mgr_base.cpp",
    "delSession",
    156);
  common::milog::MiLogStream::operator()(&v18, "del session succ, session_id=%u", *(unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream(&v18);
  v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 72);
  if ( v17 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 160: range 000000000CDDC4CA-000000000CDDC6E9
std::_Rb_tree_node_base::_Base_ptr *__fastcall common::minet::KcpConnMgrBase::findSession(
        std::_Rb_tree_node_base::_Base_ptr *p_M_parent,
        common::minet::KcpConnMgrBase *const this,
        uint32_t session_id)
{
  std::_Rb_tree_node_base::_Base_ptr *v3; // rbp
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > > >::iterator v7; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  char v12; // dl
  __int64 v13; // rax
  char v15; // cl
  _BYTE v16[120]; // [rsp+0h] [rbp-78h] BYREF

  v3 = p_M_parent;
  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_0(64LL);
    if ( v13 )
      v5 = v13;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 session_id:159";
  *(_QWORD *)(v5 + 16) = common::minet::KcpConnMgrBase::findSession;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = session_id;
  v7._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>>::find(
                 &this->session_map_._M_t,
                 (const unsigned int *)(v5 + 32))._M_node;
  if ( (std::_Rb_tree_header *)v7._M_node == &this->session_map_._M_t._M_impl.std::_Rb_tree_header )
  {
    if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
    }
    else
    {
      *p_M_parent++ = 0LL;
      if ( !*(_BYTE *)(((unsigned __int64)(v3 + 1) >> 3) + 0x7FFF8000) )
      {
        v3[1] = 0LL;
        goto LABEL_17;
      }
    }
    __asan_report_store8();
    goto LABEL_22;
  }
  p_M_parent = &v7._M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&v7._M_node[1]._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_load8(p_M_parent);
    goto LABEL_23;
  }
  M_parent = v7._M_node[1]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    v9 = __asan_report_store8();
    goto LABEL_24;
  }
  *v3 = M_parent;
  v9 = (__int64)(p_M_parent + 1);
  if ( *(_BYTE *)(((unsigned __int64)(p_M_parent + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    v11 = v9;
    __asan_report_load8(v9);
    goto LABEL_25;
  }
  v10 = (__int64)p_M_parent[1];
  v11 = (unsigned __int64)(v3 + 1);
  if ( *(_BYTE *)(((unsigned __int64)(v3 + 1) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_store8();
    goto LABEL_26;
  }
  v3[1] = (std::_Rb_tree_node_base::_Base_ptr)v10;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 + 8;
  if ( !&_pthread_key_create )
    goto LABEL_27;
  v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
  if ( (char)((v11 & 7) + 3) < v12 || !v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)v11, 1u);
    goto LABEL_17;
  }
LABEL_26:
  v10 = __asan_report_store4(v11);
LABEL_27:
  v15 = *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((v10 + 8) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(v10 + 8);
    goto LABEL_31;
  }
  ++*(_DWORD *)(v10 + 8);
LABEL_17:
  if ( v16 != (_BYTE *)v5 )
  {
LABEL_31:
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return v3;
  }
  *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  return v3;
};

// Line 176: range 000000000CDDCFDA-000000000CDDD373
void __fastcall common::minet::KcpConnMgrBase::network_thread(common::minet::KcpConnMgrBase *const this)
{
  unsigned __int64 impl; // r12
  char *v2; // r15
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  pthread_t v6; // rax
  __int64 v7; // rax
  boost::asio::io_context::impl_type **p_impl; // rdi
  boost::asio::detail::scheduler *p_state; // rdi
  char v10; // dl
  boost::asio::io_context::impl_type **v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  const char *v14; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-98h] BYREF
  char v16[120]; // [rsp+30h] [rbp-78h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 4 lock";
  *(_QWORD *)(v4 + 16) = common::minet::KcpConnMgrBase::network_thread;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = pthread_self();
  pthread_setname_np(v6, "kcp_server_io");
  while ( 1 )
  {
    p_state = (boost::asio::detail::scheduler *)&this->state_;
    v10 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 96) & 7) + 3) >= v10 && v10 )
    {
      __asan_report_load4(p_state);
LABEL_6:
      __asan_report_load8(p_state);
      goto LABEL_7;
    }
    if ( this->state_._M_i != STATUS_RUNNING )
      break;
    *(_DWORD *)(v4 + 32) = 0;
    *(_BYTE *)(v4 + 36) = 0;
    *(_QWORD *)(v4 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    p_state = (boost::asio::detail::scheduler *)&this->ioc_.impl_;
    if ( *(_BYTE *)(((unsigned __int64)&this->ioc_.impl_ >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    p_state = this->ioc_.impl_;
    boost::asio::detail::scheduler::run(p_state, (boost::system::error_code *)(v4 + 32));
LABEL_7:
    if ( *(_DWORD *)(v4 + 32) )
    {
      __asan_handle_no_return(p_state);
      boost::asio::detail::do_throw_error((const boost::system::error_code *)(v4 + 32));
    }
    p_impl = &this->ioc_.impl_;
    if ( *(_BYTE *)(((unsigned __int64)&this->ioc_.impl_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_impl);
LABEL_22:
      __asan_report_load1(p_impl);
      goto LABEL_23;
    }
    impl = (unsigned __int64)this->ioc_.impl_;
    v2 = (char *)(impl + 48);
    p_impl = (boost::asio::io_context::impl_type **)(impl + 96);
    if ( *(char *)(((impl + 96) >> 3) + 0x7FFF8000) < 0 )
      goto LABEL_22;
    if ( !*(_BYTE *)(impl + 96) )
    {
      *(_BYTE *)(v4 + 40) = 0;
      goto LABEL_12;
    }
LABEL_23:
    pthread_mutex_lock((pthread_mutex_t *)(impl + 56));
    *(_BYTE *)(v4 + 40) = 1;
LABEL_12:
    if ( *(char *)(((impl + 232) >> 3) + 0x7FFF8000) < 0 )
    {
      __asan_report_load1(impl + 232);
LABEL_25:
      pthread_mutex_unlock((pthread_mutex_t *)(v2 + 8));
      goto LABEL_14;
    }
    impl = *(unsigned __int8 *)(impl + 232);
    if ( *(_BYTE *)(v4 + 40) )
      goto LABEL_25;
LABEL_14:
    if ( (_BYTE)impl )
    {
      v11 = &this->ioc_.impl_;
      if ( *(_BYTE *)(((unsigned __int64)&this->ioc_.impl_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v11);
LABEL_34:
        __asan_report_load1(v11);
LABEL_35:
        pthread_mutex_lock((pthread_mutex_t *)(impl + 56));
        *(_BYTE *)(v4 + 40) = 1;
        goto LABEL_30;
      }
      impl = (unsigned __int64)this->ioc_.impl_;
      v2 = (char *)(impl + 48);
      v11 = (boost::asio::io_context::impl_type **)(impl + 96);
      if ( *(char *)(((impl + 96) >> 3) + 0x7FFF8000) < 0 )
        goto LABEL_34;
      if ( *(_BYTE *)(impl + 96) )
        goto LABEL_35;
      *(_BYTE *)(v4 + 40) = 0;
LABEL_30:
      if ( *(char *)(((impl + 232) >> 3) + 0x7FFF8000) < 0 )
      {
        v12 = (void *)__asan_report_store1(impl + 232);
        impl = (unsigned __int64)__cxa_begin_catch(v12);
        common::milog::MiLogStream::MiLogStream(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/kcp_conn_mgr_base.cpp",
          "network_thread",
          190);
        if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
          __asan_report_load8(impl);
        v13 = *(_QWORD *)impl;
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)impl + 16LL) >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(*(_QWORD *)impl + 16LL);
        v14 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))(v13 + 16))(impl);
        common::milog::MiLogStream::operator()(&v15, "catch exception %s", v14);
        common::milog::MiLogStream::~MiLogStream(&v15);
        __cxa_end_catch();
      }
      else
      {
        *(_BYTE *)(impl + 232) = 0;
        if ( *(_BYTE *)(v4 + 40) )
          pthread_mutex_unlock((pthread_mutex_t *)(v2 + 8));
      }
    }
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 196: range 000000000CDE476C-000000000CDE5B95
void __fastcall common::minet::KcpConnMgrBase::hook_udp_async_receive(common::minet::KcpConnMgrBase *const this)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 p_udp_remote_endpoint; // rsi
  unsigned __int64 udp_data; // r14
  unsigned __int64 v4; // r15
  _DWORD *v5; // r12
  void *p_state; // rdi
  char v7; // dl
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // al
  char v11; // dl
  __int64 v12; // rax
  __int8 *v13; // rdi
  char v14; // al
  char v15; // al
  boost::asio::detail::socket_type socket; // edx
  __m128i *v17; // rdi
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // dl
  char v23; // al
  signed __int8 v24; // cl
  unsigned __int64 impl; // rdi
  __int64 (**v26)(void); // rax
  __int64 v27; // rax
  _BYTE *v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 (**v30)(void); // rax
  __int64 (**v31)(void); // rdi
  char v32; // al
  char *v33; // rdi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  char v37; // al
  char v38; // al
  char v39; // dl
  int v40; // eax
  char v41; // cl
  char v42; // al
  boost::asio::detail::reactor *reactor; // rax
  unsigned __int64 p_scheduler; // rdi
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  char v49; // al
  char v50; // cl
  unsigned __int64 *v51; // rdi
  struct _Unwind_Exception *v52; // rbx
  boost::asio::detail::socket_ops::state_type *v53; // [rsp+0h] [rbp-150h]
  boost::asio::detail::socket_type fd; // [rsp+8h] [rbp-148h]
  char is_continuation; // [rsp+Fh] [rbp-141h]
  unsigned __int64 v56; // [rsp+10h] [rbp-140h]
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *service; // [rsp+18h] [rbp-138h]
  unsigned __int64 p_implementation_executor; // [rsp+28h] [rbp-128h]
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *p_implementation; // [rsp+30h] [rbp-120h]
  boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,const boost::system::error_code&,long unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(),boost::arg<2> (*)()> > v61; // [rsp+40h] [rbp-110h] BYREF
  char v62[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(192LL);
    if ( v12 )
      v4 = v12;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 3 arg 64 8 2 ex 96 16 2 ex 128 24 1 p";
  *(_QWORD *)(v4 + 16) = common::minet::KcpConnMgrBase::hook_udp_async_receive;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  p_state = &this->state_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 96) & 7) + 3) >= v7 && v7 )
  {
    __asan_report_load4(p_state);
LABEL_21:
    v9 = __asan_report_load8(p_state);
    goto LABEL_22;
  }
  v1 = (unsigned __int64)this;
  if ( this->state_._M_i == STATUS_STOPPED )
    goto LABEL_155;
  boost::bind<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long,common::minet::KcpConnMgrBase*,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>(
    &v61,
    (void (*)(common::minet::KcpConnMgrBase *, const boost::system::error_code *, unsigned __int64))common::minet::KcpConnMgrBase::handle_udp_receive_from,
    0LL,
    (boost::arg<1> (*)(void))this,
    (boost::arg<2> (*)(void))boost::asio::placeholders::error);
  p_udp_remote_endpoint = (unsigned __int64)&this->udp_remote_endpoint_;
  v56 = (unsigned __int64)&this->udp_remote_endpoint_;
  udp_data = (unsigned __int64)this->udp_data_;
  p_state = &this->udp_socket_;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_socket_ >> 3) + 0x7FFF8000) )
    goto LABEL_21;
  service = this->udp_socket_.impl_.service_;
  p_udp_remote_endpoint = (unsigned __int64)&this->udp_socket_.impl_.implementation_executor_;
  p_implementation_executor = (unsigned __int64)&this->udp_socket_.impl_.implementation_executor_;
  p_implementation = &this->udp_socket_.impl_.implementation_;
  v1 = (unsigned __int64)&v61;
  is_continuation = boost::asio::asio_handler_is_continuation(&v61);
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_QWORD *)(v4 + 144) = 0LL;
  *(_QWORD *)(v4 + 128) = &v61;
  v8 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                           + __readfsqword(0));
  if ( !v8 )
    goto LABEL_9;
  v9 = v8 + 8;
  if ( *(_BYTE *)(((v8 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v8 = v9;
    __asan_report_load8(v9);
LABEL_23:
    __asan_report_load8(v8);
LABEL_24:
    __asan_report_load1(v8);
LABEL_25:
    __asan_report_store1(v8);
    goto LABEL_26;
  }
  v8 = *(_QWORD *)(v8 + 8);
LABEL_9:
  if ( !v8 )
    goto LABEL_27;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    goto LABEL_23;
  v1 = *(_QWORD *)v8;
  if ( !*(_QWORD *)v8 )
    goto LABEL_27;
  *(_QWORD *)v8 = 0LL;
  v8 = v1;
  v10 = *(_BYTE *)((v1 >> 3) + 0x7FFF8000);
  if ( v10 <= (char)(v1 & 7) && v10 )
    goto LABEL_24;
  if ( *(_BYTE *)v1 > 0x21u )
  {
    v8 = v1 + 136;
    v11 = *(_BYTE *)(((v1 + 136) >> 3) + 0x7FFF8000);
    if ( v11 > (char)((v1 - 120) & 7) || !v11 )
    {
      *(_BYTE *)v8 = *(_BYTE *)v1;
      goto LABEL_30;
    }
    goto LABEL_25;
  }
LABEL_26:
  operator delete((void *)v1);
LABEL_27:
  v1 = operator new(0x89uLL);
  v13 = (__int8 *)(v1 + 136);
  v14 = *(_BYTE *)(((v1 + 136) >> 3) + 0x7FFF8000);
  if ( v14 <= (char)((v1 - 120) & 7) && v14 )
  {
    __asan_report_store1(v13);
LABEL_92:
    __asan_report_load4(p_implementation);
    goto LABEL_93;
  }
  *v13 = 34;
LABEL_30:
  *(_QWORD *)(v4 + 136) = v1;
  v15 = *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_92;
  socket = this->udp_socket_.impl_.implementation_.socket_;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    v17 = (__m128i *)v1;
    __asan_report_store8();
    goto LABEL_94;
  }
  *(_QWORD *)v1 = 0LL;
  v17 = (__m128i *)(v1 + 8);
  if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    __asan_report_store8();
LABEL_95:
    __asan_report_store4(v17);
LABEL_96:
    __asan_report_store4(v17);
LABEL_97:
    __asan_report_store1(v17);
    goto LABEL_98;
  }
  *(_QWORD *)(v1 + 8) = boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v17 = (__m128i *)(v1 + 16);
  v18 = *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_95;
  *(_DWORD *)(v1 + 16) = 0;
  v17 = (__m128i *)(v1 + 24);
  v19 = *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000);
  if ( v19 && v19 <= 3 )
    goto LABEL_96;
  *(_DWORD *)(v1 + 24) = 0;
  v17 = (__m128i *)(v1 + 28);
  v20 = *(_BYTE *)(((v1 + 28) >> 3) + 0x7FFF8000);
  if ( v20 <= (char)((v1 + 28) & 7) && v20 )
    goto LABEL_97;
  *(_BYTE *)(v1 + 28) = 0;
  v17 = (__m128i *)(v1 + 32);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_98:
    __asan_report_store8();
    goto LABEL_99;
  }
  *(_QWORD *)(v1 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v17 = (__m128i *)(v1 + 40);
  if ( *(_BYTE *)(((v1 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_99:
    __asan_report_store8();
    goto LABEL_100;
  }
  *(_QWORD *)(v1 + 40) = 0LL;
  v17 = (__m128i *)(v1 + 48);
  if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_100:
    __asan_report_store8();
LABEL_101:
    __asan_report_store4(v17);
LABEL_102:
    __asan_report_store4(v17);
    goto LABEL_103;
  }
  *(_QWORD *)(v1 + 48) = boost::asio::detail::reactive_socket_recvfrom_op_base<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>>::do_perform;
  v17 = (__m128i *)(v1 + 56);
  v21 = *(_BYTE *)(((v1 + 56) >> 3) + 0x7FFF8000);
  if ( v21 && v21 <= 3 )
    goto LABEL_101;
  *(_DWORD *)(v1 + 56) = socket;
  v17 = (__m128i *)(v1 + 60);
  v22 = *(_BYTE *)(((v1 + 60) >> 3) + 0x7FFF8000);
  if ( (char)(((v1 + 60) & 7) + 3) >= v22 && v22 )
    goto LABEL_102;
  *(_DWORD *)(v1 + 60) = 2;
  v17 = (__m128i *)(v1 + 64);
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_store16(v17, p_udp_remote_endpoint);
    goto LABEL_104;
  }
  *(_QWORD *)(v1 + 64) = udp_data;
  *(_QWORD *)(v1 + 72) = 0x100000LL;
  v17 = (__m128i *)(v1 + 80);
  if ( *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    __asan_report_store8();
LABEL_105:
    __asan_report_store4(v17);
LABEL_106:
    p_udp_remote_endpoint = 24LL;
    __asan_report_store_n(v17, 24LL);
    goto LABEL_107;
  }
  *(_QWORD *)(v1 + 80) = v56;
  v17 = (__m128i *)(v1 + 88);
  v23 = *(_BYTE *)(((v1 + 88) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_105;
  *(_DWORD *)(v1 + 88) = 0;
  v17 = (__m128i *)(v1 + 96);
  v24 = *(_BYTE *)(((v1 + 119) >> 3) + 0x7FFF8000);
  LOBYTE(p_udp_remote_endpoint) = v24 <= (signed __int8)((v1 + 119) & 7);
  if ( ((v24 != 0) & (unsigned __int8)p_udp_remote_endpoint) != 0 || *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_106;
  *(__m128i *)(v1 + 96) = _mm_load_si128((const __m128i *)&v61);
  *(_QWORD *)(v1 + 112) = v61.l_.a1_.t_;
  udp_data = v1 + 120;
  if ( *(_BYTE *)((p_implementation_executor >> 3) + 0x7FFF8000) )
  {
LABEL_107:
    impl = p_implementation_executor;
    __asan_report_load8(p_implementation_executor);
LABEL_108:
    v26 = (__int64 (**)(void))__asan_report_load8(impl);
    goto LABEL_109;
  }
  impl = (unsigned __int64)this->udp_socket_.impl_.implementation_executor_.executor_.impl_;
  if ( !impl )
    goto LABEL_58;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_108;
  v26 = *(__int64 (***)(void))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_109:
    v27 = __asan_report_load8(v26);
    goto LABEL_110;
  }
  impl = (*v26)();
LABEL_58:
  v27 = v1 + 120;
  if ( *(_BYTE *)(((v1 + 120) >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    v28 = (_BYTE *)v27;
    __asan_report_store8();
    goto LABEL_111;
  }
  *(_QWORD *)(v1 + 120) = impl;
  v28 = (_BYTE *)(p_implementation_executor + 8);
  if ( *(char *)(((p_implementation_executor + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_111:
    __asan_report_load1(v28);
    goto LABEL_112;
  }
  v28 = (_BYTE *)(v1 + 128);
  if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_112:
    __asan_report_store1(v28);
    goto LABEL_113;
  }
  *(_BYTE *)(v1 + 128) = *(_BYTE *)(p_implementation_executor + 8);
  if ( *(_BYTE *)((udp_data >> 3) + 0x7FFF8000) )
  {
LABEL_113:
    v29 = udp_data;
    __asan_report_load8(udp_data);
LABEL_114:
    v30 = (__int64 (**)(void))__asan_report_load8(v29);
    goto LABEL_115;
  }
  v29 = *(_QWORD *)udp_data;
  if ( !*(_QWORD *)udp_data )
    goto LABEL_66;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    goto LABEL_114;
  v30 = *(__int64 (***)(void))v29;
  if ( *(_BYTE *)((*(_QWORD *)v29 >> 3) + 0x7FFF8000LL) )
  {
LABEL_115:
    v31 = v30;
    __asan_report_load8(v30);
    goto LABEL_116;
  }
  v29 = (*v30)();
LABEL_66:
  *(_QWORD *)(v4 + 96) = v29;
  v31 = (__int64 (**)(void))(v1 + 128);
  if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_116:
    __asan_report_load1(v31);
    goto LABEL_117;
  }
  v32 = *(_BYTE *)(v1 + 128);
  *(_BYTE *)(v4 + 104) = v32;
  if ( v32 )
    goto LABEL_68;
LABEL_117:
  v45 = *(_QWORD *)(v4 + 96);
  if ( !v45 )
  {
    *(_QWORD *)(v4 + 64) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(0LL);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v4 + 64));
  }
  if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v45);
    goto LABEL_123;
  }
  v46 = *(_QWORD *)v45 + 24LL;
  if ( *(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
  {
LABEL_123:
    v33 = (char *)v46;
    __asan_report_load8(v46);
    goto LABEL_124;
  }
  (*(void (**)(void))(*(_QWORD *)v45 + 24LL))();
LABEL_68:
  v33 = (char *)(udp_data + 8);
  if ( *(char *)(((udp_data + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_124:
    __asan_report_load1(v33);
    goto LABEL_125;
  }
  if ( *(_BYTE *)(udp_data + 8) )
    goto LABEL_70;
LABEL_125:
  if ( *(_BYTE *)((udp_data >> 3) + 0x7FFF8000) )
  {
    v47 = udp_data;
    __asan_report_load8(udp_data);
LABEL_131:
    *(_QWORD *)(v4 + 64) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(v47);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v4 + 64));
  }
  v47 = *(_QWORD *)udp_data;
  if ( !*(_QWORD *)udp_data )
    goto LABEL_131;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v47);
    goto LABEL_133;
  }
  v48 = *(_QWORD *)v47 + 24LL;
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_133:
    v34 = v48;
    __asan_report_load8(v48);
    goto LABEL_134;
  }
  (*(void (**)(void))(*(_QWORD *)v47 + 24LL))();
LABEL_70:
  v34 = *(_QWORD *)(v4 + 96);
  if ( v34 )
  {
    if ( !*(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    {
      v35 = *(_QWORD *)v34 + 8LL;
      if ( !*(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
      {
        (*(void (**)(void))(*(_QWORD *)v34 + 8LL))();
        goto LABEL_74;
      }
LABEL_135:
      v36 = v35;
      __asan_report_load8(v35);
LABEL_136:
      __asan_report_load1(v36);
LABEL_137:
      __asan_report_load4(p_implementation);
      goto LABEL_138;
    }
LABEL_134:
    __asan_report_load8(v34);
    goto LABEL_135;
  }
LABEL_74:
  *(_QWORD *)(v4 + 144) = v1;
  v56 = (unsigned __int64)&service->boost::asio::detail::reactive_socket_service_base;
  v36 = (unsigned __int64)&p_implementation->state_;
  v37 = *(_BYTE *)(((unsigned __int64)&p_implementation->state_ >> 3) + 0x7FFF8000);
  if ( v37 <= (((unsigned __int8)p_implementation + 4) & 7) && v37 )
    goto LABEL_136;
  if ( (p_implementation->state_ & 3) != 0 )
    goto LABEL_148;
  udp_data = v1 + 24;
  p_udp_remote_endpoint = (unsigned __int64)&p_implementation->state_;
  v53 = &p_implementation->state_;
  v38 = *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000);
  if ( v38 && v38 <= 3 )
    goto LABEL_137;
  fd = this->udp_socket_.impl_.implementation_.socket_;
  if ( fd == -1 )
  {
LABEL_138:
    if ( !*(_WORD *)((udp_data >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)udp_data = 0x100000009LL;
      *(_QWORD *)(udp_data + 8) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v42 = 0;
      goto LABEL_87;
    }
    __asan_report_store16(udp_data, p_udp_remote_endpoint);
    goto LABEL_141;
  }
  p_udp_remote_endpoint = (unsigned __int64)__errno_location();
  p_implementation_executor = p_udp_remote_endpoint;
  v39 = *(_BYTE *)((p_udp_remote_endpoint >> 3) + 0x7FFF8000);
  if ( (char)((p_udp_remote_endpoint & 7) + 3) >= v39 && v39 )
  {
LABEL_141:
    __asan_report_store4(p_udp_remote_endpoint);
LABEL_142:
    __asan_report_load4(p_implementation_executor);
    goto LABEL_143;
  }
  *(_DWORD *)p_udp_remote_endpoint = 0;
  *(_DWORD *)(v4 + 48) = 1;
  v40 = ioctl(fd, 0x5421uLL, v4 + 48);
  v41 = *(_BYTE *)((p_udp_remote_endpoint >> 3) + 0x7FFF8000);
  p_udp_remote_endpoint &= 7u;
  if ( (char)((p_implementation_executor & 7) + 3) >= v41 && v41 )
    goto LABEL_142;
  p_udp_remote_endpoint = p_implementation_executor;
  if ( !*(_WORD *)((udp_data >> 3) + 0x7FFF8000) )
  {
    *(_QWORD *)udp_data = ((unsigned __int64)(*(_DWORD *)p_implementation_executor != 0) << 32) | *(unsigned int *)p_implementation_executor;
    *(_QWORD *)(v1 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
    if ( v40 < 0 )
    {
      v42 = 0;
      goto LABEL_87;
    }
    goto LABEL_144;
  }
LABEL_143:
  __asan_report_store16(udp_data, p_udp_remote_endpoint);
LABEL_144:
  *(_QWORD *)udp_data = 0LL;
  v49 = *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000);
  if ( v49 <= ((unsigned __int8)v53 & 7) && v49 )
  {
    __asan_report_load1(v53);
LABEL_148:
    if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v56);
    }
    else
    {
      v50 = *(_BYTE *)(((unsigned __int64)p_implementation >> 3) + 0x7FFF8000);
      if ( !v50 || v50 > 3 )
      {
        boost::asio::detail::epoll_reactor::start_op(
          service->reactor_,
          0,
          this->udp_socket_.impl_.implementation_.socket_,
          &p_implementation->reactor_data_,
          (boost::asio::detail::reactor_op *)v1,
          is_continuation,
          1);
        goto LABEL_154;
      }
    }
    __asan_report_load4(p_implementation);
    goto LABEL_154;
  }
  *v53 |= 2u;
  v42 = 1;
LABEL_87:
  if ( v42 )
    goto LABEL_148;
  if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
  {
    p_scheduler = v56;
    __asan_report_load8(v56);
  }
  else
  {
    reactor = service->reactor_;
    p_scheduler = (unsigned __int64)&reactor->scheduler_;
    if ( !*(_BYTE *)(((unsigned __int64)&reactor->scheduler_ >> 3) + 0x7FFF8000) )
    {
      boost::asio::detail::scheduler::post_immediate_completion(
        reactor->scheduler_,
        (boost::asio::detail::scheduler::operation *)v1,
        is_continuation);
LABEL_154:
      *(_QWORD *)(v4 + 144) = 0LL;
      *(_QWORD *)(v4 + 136) = 0LL;
      goto LABEL_155;
    }
  }
  v51 = (unsigned __int64 *)__asan_report_load8(p_scheduler);
  __asan_report_load8(v51);
  __asan_report_load8(v51);
  if ( MEMORY[0x7FFF8011] < 0 )
  {
    __asan_report_load1(v1 + 136);
LABEL_162:
    v52 = (struct _Unwind_Exception *)__asan_report_store1(v1);
    boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,boost::system::error_code const&,unsigned long>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(void),boost::arg<2> (*)(void)>>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_recvfrom_op<boost::asio::mutable_buffers_1,boost::asio::ip::basic_endpoint<boost::asio::ip::udp>,boost::_bi::bind_t<void,boost::_mfi::mf2<void,common::minet::KcpConnMgrBase,const boost::system::error_code&,long unsigned int>,boost::_bi::list3<boost::_bi::value<common::minet::KcpConnMgrBase*>,boost::arg<1> (*)(),boost::arg<2> (*)()> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v4 + 128));
    __asan_handle_no_return(v4 + 128);
    _Unwind_Resume(v52);
  }
  if ( MEMORY[0x7FFF8000] < 0 )
    goto LABEL_162;
  *(_BYTE *)v1 = *(_BYTE *)(v1 + 136);
  *v51 = v1;
LABEL_155:
  if ( v62 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 247: range 000000000CDDDCE8-000000000CDDE15A
void __fastcall common::minet::KcpConnMgrBase::handle_kcp_packet(
        common::minet::KcpConnMgrBase *const this,
        size_t bytes_recvd)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  common::minet::KcpSession *v6; // rdi
  __int64 v7; // rax
  char v8; // dl
  sa_family_t sa_family; // dx
  in_port_t *p_sin_port; // rdi
  char v11; // cl
  in6_addr *p_sin6_flowinfo; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  char v16; // cl
  char v17; // dl
  in_addr_t s_addr; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v20; // rdi
  uint32_t conv; // [rsp+Ch] [rbp-10Ch]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D8h] BYREF
  boost::asio::ip::address v23; // [rsp+60h] [rbp-B8h] BYREF
  std::string v24; // [rsp+80h] [rbp-98h] BYREF
  char v25[120]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = bytes_recvd;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 15 session_ptr:258";
  *(_QWORD *)(v4 + 16) = common::minet::KcpConnMgrBase::handle_kcp_packet;
  v5 = v4 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( bytes_recvd > 0x17 )
  {
    conv = ikcp_getconv(this->udp_data_);
    common::minet::KcpConnMgrBase::findSession((std::_Rb_tree_node_base::_Base_ptr *)(v4 + 32), this, conv);
    v6 = *(common::minet::KcpSession **)(v4 + 32);
    if ( v6 )
    {
      common::minet::KcpSession::input(v6, this->udp_data_, bytes_recvd, &this->udp_remote_endpoint_);
      v20 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
      if ( v20 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v20);
    }
    else
    {
      common::milog::MiLogStream::MiLogStream(
        (common::milog::MiLogStream *const)&v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "src/kcp_conn_mgr_base.cpp",
        "handle_kcp_packet",
        261);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&v24,
        "findSession failed, session_id=%u",
        conv);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
      v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 40);
      if ( v19 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v19);
    }
    goto LABEL_34;
  }
  common::milog::MiLogStream::MiLogStream(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/kcp_conn_mgr_base.cpp",
    "handle_kcp_packet",
    251);
  v8 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 88) & 7) + 1) >= v8 && v8 )
  {
    __asan_report_load2(&this->udp_remote_endpoint_);
  }
  else
  {
    sa_family = this->udp_remote_endpoint_.impl_.data_.base.sa_family;
    if ( sa_family != 2 )
    {
      p_sin_port = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
      v11 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 86) & 7) + 1) < v11 || !v11 )
        goto LABEL_12;
LABEL_24:
      __asan_report_load2(p_sin_port);
LABEL_25:
      p_sin6_flowinfo = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo;
      v17 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 84) & 7) + 3) < v17 || !v17 )
      {
        s_addr = this->udp_remote_endpoint_.impl_.data_.v4.sin_addr.s_addr;
        v23.type_ = ipv4;
        v23.ipv4_address_.addr_.s_addr = s_addr;
        memset(&v23.ipv6_address_, 0, sizeof(v23.ipv6_address_));
        goto LABEL_18;
      }
      __asan_report_load4(p_sin6_flowinfo);
      goto LABEL_29;
    }
  }
  p_sin_port = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
  v16 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 86) & 7) + 1) >= v16 && v16 )
  {
    __asan_report_load2(p_sin_port);
    goto LABEL_24;
  }
LABEL_12:
  v3 = (unsigned __int16)__ROR2__(this->udp_remote_endpoint_.impl_.data_.v4.sin_port, 8);
  if ( sa_family == 2 )
    goto LABEL_25;
  p_sin6_flowinfo = &this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 80) & 7)
    || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)this - 65) & 7) )
  {
LABEL_29:
    __asan_report_load_n(p_sin6_flowinfo, 16LL);
LABEL_30:
    __asan_report_load4(p_sin6_flowinfo);
    goto LABEL_31;
  }
  v13 = *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8;
  v14 = *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2];
  p_sin6_flowinfo = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 64) & 7) + 3) >= v15 && v15 )
    goto LABEL_30;
  v23.type_ = ipv6;
  v23.ipv4_address_.addr_.s_addr = 0;
  *(_QWORD *)v23.ipv6_address_.addr_.__u6_addr8 = v13;
  *(_QWORD *)&v23.ipv6_address_.addr_.__u6_addr32[2] = v14;
  v23.ipv6_address_.scope_id_ = this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
LABEL_18:
  boost::asio::ip::address::to_string[abi:cxx11](&v24, &v23);
LABEL_31:
  common::milog::MiLogStream::operator()(
    &v22,
    "handle_kcp_packet recv data less than KCP_OVERHEAD, ip=%s port=%u",
    v24._M_dataplus._M_p,
    v3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
    operator delete(v24._M_dataplus._M_p);
  common::milog::MiLogStream::~MiLogStream(&v22);
LABEL_34:
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 269: range 000000000CDE08DA-000000000CDE4767
void __fastcall common::minet::KcpConnMgrBase::handle_connect_packet(
        common::minet::KcpConnMgrBase *const this,
        size_t bytes_recvd)
{
  double M_i; // xmm1_8
  unsigned __int64 v3; // r13
  unsigned int v4; // r15d
  _DWORD *v5; // r12
  uint32_t SessionNum; // eax
  __int64 v7; // rax
  std::atomic<unsigned int> *p_max_conn_num; // r14
  char v9; // dl
  void *p_connect_limit_per_second_per_ip; // rdi
  char v11; // dl
  common::minet::KcpConnMgrBase *v12; // rax
  in6_addr *p_sin6_flowinfo; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // dl
  __int64 v17; // rax
  boost::asio::ip::udp::endpoint *p_udp_remote_endpoint; // rdi
  char v19; // dl
  sa_family_t sa_family; // ax
  in_port_t *p_sin_port; // rdi
  char v22; // cl
  in6_addr *p_sin6_addr; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // dl
  __int64 sin6_scope_id; // rax
  char v28; // cl
  char v29; // dl
  in_addr_t s_addr; // eax
  char v31; // dl
  char *v32; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v33; // rdi
  char v34; // dl
  in_addr_t v35; // eax
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > >::_Base_ptr M_node; // rdx
  __int64 p_M_parent; // rax
  __int64 M_parent; // rax
  unsigned __int64 v39; // rdi
  char v40; // dl
  uint64_t NowMs; // rax
  common::minet::KcpConnRateLimiter *v42; // r14
  common::tools::RateLimiter *v43; // rax
  unsigned __int64 v44; // rax
  common::minet::KcpConnRateLimiter **v45; // r8
  unsigned __int64 v46; // rdi
  char v47; // dl
  char v48; // cl
  __int64 v49; // rax
  char v50; // cl
  uint64_t *v51; // rdi
  __int64 v52; // rax
  char v53; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v54; // rdi
  char *v55; // rdi
  uint32_t v56; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v57; // rdi
  char *v58; // rdi
  volatile signed __int32 *p_M_refcount; // rdi
  void (__fastcall *v60)(unsigned __int64, common::minet::KcpConnMgrBase *const, unsigned __int64, _QWORD, _QWORD, boost::asio::ip::udp::endpoint *); // r10
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v62; // cl
  int v63; // eax
  signed __int32 v64; // eax
  signed __int32 v65; // ett
  bool v66; // dl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // rdi
  common::minet::KcpSession *v68; // rdi
  char v69; // al
  uint32_t *p_wnd_size; // rdx
  char v71; // cl
  uint32_t *p_mtu; // rdx
  char v73; // al
  uint32_t *p_timeout_sec; // rdx
  char v75; // si
  int32_t v76; // eax
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rdx
  int v79; // eax
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  std::shared_ptr<common::minet::KcpSession> *v82; // r8
  unsigned int v83; // eax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v84; // rdi
  unsigned int v85; // r14d
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v86; // rdi
  char v87; // dl
  sa_family_t v88; // ax
  in_port_t *v89; // rdi
  char v90; // cl
  in6_addr *p_sin6_scope_id; // rdi
  __int64 v92; // r8
  __int64 v93; // r9
  char v94; // dl
  __int64 v95; // rax
  char v96; // cl
  char v97; // dl
  in_addr_t v98; // eax
  char *v99; // rdi
  boost::asio::ip::udp::socket *p_udp_socket; // r10
  __int64 v101; // rax
  __int64 v102; // rdx
  unsigned __int64 p_implementation; // rdi
  char v104; // dl
  std::size_t v105; // rcx
  char *v106; // rax
  char v107; // dl
  boost::asio::detail::socket_ops::state_type v108; // si
  char v109; // al
  char *v110; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v111; // rdi
  std::nothrow_t data; // [rsp+0h] [rbp-1F0h]
  uint64_t dataa; // [rsp+0h] [rbp-1F0h]
  uint32_t datab; // [rsp+0h] [rbp-1F0h]
  boost::asio::ip::udp::endpoint *v115; // [rsp+8h] [rbp-1E8h]
  uint32_t token; // [rsp+10h] [rbp-1E0h]
  std::string *tokena; // [rsp+10h] [rbp-1E0h]
  unsigned int tokenb; // [rsp+10h] [rbp-1E0h]
  uint32_t session_id; // [rsp+18h] [rbp-1D8h]
  common::minet::KcpConnRateLimiter *v121; // [rsp+38h] [rbp-1B8h] BYREF
  common::milog::MiLogStream v122; // [rsp+40h] [rbp-1B0h] BYREF
  char v123[400]; // [rsp+60h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v123;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(352LL);
    if ( v7 )
      v3 = v7;
  }
  v4 = v3 + 352;
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 7 __count 64 16 22 kcp_server_mgr_ptr:270 96 16 15 session_ptr:312 128 16 2 ec 160 24 4 b"
                        "ufs 224 32 10 ip_str:288 288 32 17 send_back_msg:335";
  *(_QWORD *)(v3 + 16) = common::minet::KcpConnMgrBase::handle_connect_packet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  std::__shared_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 64),
    &this->kcp_server_mgr_wtr_,
    data);
  if ( !*(_QWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      273);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "kcp_server_mgr_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    goto LABEL_53;
  }
  SessionNum = common::minet::KcpConnMgrBase::getSessionNum(this);
  token = SessionNum;
  p_max_conn_num = &this->max_conn_num_;
  v9 = *(_BYTE *)(((unsigned __int64)&this->max_conn_num_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 64) & 7) + 3) >= v9 && v9 )
  {
    __asan_report_load4(p_max_conn_num);
    goto LABEL_22;
  }
  if ( SessionNum > this->max_conn_num_._M_i )
  {
LABEL_22:
    common::milog::MiLogStream::MiLogStream(
      &v122,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      280);
    p_udp_remote_endpoint = &this->udp_remote_endpoint_;
    v19 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 88) & 7) + 1) >= v19 && v19 )
    {
      sa_family = __asan_report_load2(p_udp_remote_endpoint);
    }
    else
    {
      sa_family = this->udp_remote_endpoint_.impl_.data_.base.sa_family;
      if ( sa_family != 2 )
      {
        p_sin_port = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
        v22 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this - 86) & 7) + 1) < v22 || !v22 )
          goto LABEL_27;
        goto LABEL_39;
      }
    }
    p_sin_port = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
    v28 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this - 86) & 7) + 1) < v28 || !v28 )
    {
LABEL_27:
      v4 = (unsigned __int16)__ROR2__(this->udp_remote_endpoint_.impl_.data_.v4.sin_port, 8);
      if ( sa_family != 2 )
      {
        p_sin6_addr = &this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr;
        if ( (*(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) == 0
           || *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) > (((unsigned __int8)this - 80) & 7))
          && (*(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                       + 0x7FFF8000) == 0
           || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                       + 0x7FFF8000) > (((unsigned __int8)this - 65) & 7)) )
        {
          v24 = *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8;
          v25 = *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2];
          p_sin6_addr = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
          v26 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)this - 64) & 7) + 3) < v26 || !v26 )
          {
            sin6_scope_id = this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
            *(_QWORD *)(v3 + 160) = v24;
            *(_QWORD *)(v3 + 168) = v25;
            *(_DWORD *)(v3 + 224) = 1;
            *(_DWORD *)(v3 + 228) = 0;
            *(_QWORD *)(v3 + 232) = v24;
            *(_QWORD *)(v3 + 240) = v25;
            *(_QWORD *)(v3 + 248) = sin6_scope_id;
LABEL_33:
            boost::asio::ip::address::to_string[abi:cxx11](
              (std::string *)(v3 + 288),
              (const boost::asio::ip::address *const)(v3 + 224));
            goto LABEL_46;
          }
LABEL_45:
          __asan_report_load4(p_sin6_addr);
LABEL_46:
          v31 = *(_BYTE *)(((unsigned __int64)p_max_conn_num >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)p_max_conn_num & 7) + 3) >= v31 && v31 )
            __asan_report_load4(p_max_conn_num);
          else
            common::milog::MiLogStream::operator()(
              &v122,
              "cur_session_num=%u exceed max_conn_num=%u, refuse connect from ip=%s port=%u",
              token,
              this->max_conn_num_._M_i,
              *(const char **)(v3 + 288),
              v4);
          v32 = *(char **)(v3 + 288);
          if ( v32 != (char *)(v3 + 304) )
            operator delete(v32);
          common::milog::MiLogStream::~MiLogStream(&v122);
LABEL_53:
          v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 72);
          if ( !v33 )
            goto LABEL_55;
          goto LABEL_54;
        }
LABEL_44:
        __asan_report_load_n(p_sin6_addr, 16LL);
        goto LABEL_45;
      }
LABEL_40:
      p_sin6_addr = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo;
      v29 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 84) & 7) + 3) < v29 || !v29 )
      {
        s_addr = this->udp_remote_endpoint_.impl_.data_.v4.sin_addr.s_addr;
        *(_DWORD *)(v3 + 48) = s_addr;
        *(_DWORD *)(v3 + 224) = 0;
        *(_DWORD *)(v3 + 228) = s_addr;
        *(_QWORD *)(v3 + 232) = 0LL;
        *(_QWORD *)(v3 + 240) = 0LL;
        *(_QWORD *)(v3 + 248) = 0LL;
        goto LABEL_33;
      }
      __asan_report_load4(p_sin6_addr);
      goto LABEL_44;
    }
    __asan_report_load2(p_sin_port);
LABEL_39:
    __asan_report_load2(p_sin_port);
    goto LABEL_40;
  }
  p_connect_limit_per_second_per_ip = &this->connect_limit_per_second_per_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_connect_limit_per_second_per_ip);
LABEL_58:
    v12 = (common::minet::KcpConnMgrBase *)__asan_report_load2(p_connect_limit_per_second_per_ip);
LABEL_59:
    p_sin6_flowinfo = (in6_addr *)&v12->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo;
    v34 = *(_BYTE *)(((unsigned __int64)&v12->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v12 - 84) & 7) + 3) < v34 || !v34 )
    {
      v35 = this->udp_remote_endpoint_.impl_.data_.v4.sin_addr.s_addr;
      *(_DWORD *)(v3 + 48) = v35;
      *(_DWORD *)(v3 + 288) = 0;
      *(_DWORD *)(v3 + 292) = v35;
      *(_QWORD *)(v3 + 296) = 0LL;
      *(_QWORD *)(v3 + 304) = 0LL;
      *(_QWORD *)(v3 + 312) = 0LL;
      goto LABEL_20;
    }
    __asan_report_load4(p_sin6_flowinfo);
    goto LABEL_63;
  }
  M_i = this->connect_limit_per_second_per_ip_._M_i;
  if ( M_i <= 0.0 )
    goto LABEL_113;
  p_connect_limit_per_second_per_ip = &this->udp_remote_endpoint_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 88) & 7) + 1) >= v11 && v11 )
    goto LABEL_58;
  v12 = this;
  if ( this->udp_remote_endpoint_.impl_.data_.base.sa_family == 2 )
    goto LABEL_59;
  p_sin6_flowinfo = &this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 80) & 7)
    || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)this - 65) & 7) )
  {
LABEL_63:
    __asan_report_load_n(p_sin6_flowinfo, 16LL);
    goto LABEL_64;
  }
  v14 = *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8;
  v15 = *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2];
  p_sin6_flowinfo = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
  v16 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 64) & 7) + 3) < v16 || !v16 )
  {
    v17 = this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
    *(_QWORD *)(v3 + 160) = v14;
    *(_QWORD *)(v3 + 168) = v15;
    *(_DWORD *)(v3 + 288) = 1;
    *(_DWORD *)(v3 + 292) = 0;
    *(_QWORD *)(v3 + 296) = v14;
    *(_QWORD *)(v3 + 304) = v15;
    *(_QWORD *)(v3 + 312) = v17;
LABEL_20:
    boost::asio::ip::address::to_string[abi:cxx11](
      (std::string *)(v3 + 224),
      (const boost::asio::ip::address *const)(v3 + 288));
    goto LABEL_65;
  }
LABEL_64:
  __asan_report_load4(p_sin6_flowinfo);
LABEL_65:
  M_node = std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>>::find(
             &this->rate_limiter_map_._M_t,
             (const std::string *)(v3 + 224))._M_node;
  if ( M_node != (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > >::_Base_ptr)&this->rate_limiter_map_._M_t._M_impl.std::_Rb_tree_header )
    goto LABEL_66;
  dataa = common::tools::TimeUtils::getNowMs();
  v42 = (common::minet::KcpConnRateLimiter *)operator new(0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
  {
    v43 = (common::tools::RateLimiter *)__asan_report_store8();
  }
  else
  {
    v42->last_connect_ms = dataa;
    v43 = common::tools::RateLimiter::create(M_i);
  }
  tokena = (std::string *)v43;
  if ( *(_BYTE *)(((unsigned __int64)&v42->rate_limiter_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_81;
  }
  v42->rate_limiter_ptr._M_ptr = v43;
  dataa = (uint64_t)&v42->rate_limiter_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&v42->rate_limiter_ptr._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    v44 = __asan_report_store8();
    goto LABEL_82;
  }
  v42->rate_limiter_ptr._M_refcount._M_pi = 0LL;
  v44 = operator new(0x18uLL);
LABEL_82:
  v46 = v44 + 8;
  v47 = *(_BYTE *)(((v44 + 8) >> 3) + 0x7FFF8000);
  if ( v47 && v47 <= 3 )
  {
    __asan_report_store4(v46);
LABEL_91:
    __asan_report_store4(v46);
    goto LABEL_92;
  }
  *(_DWORD *)(v44 + 8) = 1;
  v46 = v44 + 12;
  v48 = *(_BYTE *)(((v44 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v44 + 12) & 7) + 3) >= v48 && v48 )
    goto LABEL_91;
  *(_DWORD *)(v44 + 12) = 1;
  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
  {
LABEL_92:
    __asan_report_store8();
    goto LABEL_93;
  }
  *(_QWORD *)v44 = &`vtable for'std::_Sp_counted_ptr<common::tools::RateLimiter *,(__gnu_cxx::_Lock_policy)2> + 2;
  if ( *(_BYTE *)(((v44 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_93:
    __asan_report_store8();
    goto LABEL_94;
  }
  *(_QWORD *)(v44 + 16) = tokena;
  if ( *(_BYTE *)((dataa >> 3) + 0x7FFF8000) )
  {
LABEL_94:
    v49 = __asan_report_store8();
    goto LABEL_95;
  }
  v42->rate_limiter_ptr._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)v44;
  v121 = v42;
  v49 = (unsigned __int64)std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>>::_M_emplace_unique<std::string&,common::minet::KcpConnRateLimiter*>(
                            &this->rate_limiter_map_._M_t,
                            (std::string *)(v3 + 224),
                            &v121,
                            tokena,
                            v45).first._M_node;
LABEL_95:
  M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > >::_Base_ptr)v49;
LABEL_66:
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2] >> 3) + 0x7FFF8000) )
  {
    p_M_parent = __asan_report_load8(&M_node[2]);
    goto LABEL_97;
  }
  *(_QWORD *)(v3 + 128) = *(_QWORD *)&M_node[2]._M_color;
  p_M_parent = (__int64)&M_node[2]._M_parent;
  if ( *(_BYTE *)(((unsigned __int64)&M_node[2]._M_parent >> 3) + 0x7FFF8000) )
  {
LABEL_97:
    v39 = p_M_parent;
    __asan_report_load8(p_M_parent);
LABEL_98:
    M_parent = __asan_report_store4(v39);
    goto LABEL_99;
  }
  M_parent = (__int64)M_node[2]._M_parent;
  *(_QWORD *)(v3 + 136) = M_parent;
  if ( !M_parent )
  {
LABEL_73:
    NowMs = common::tools::TimeUtils::getNowMs();
    goto LABEL_103;
  }
  v39 = M_parent + 8;
  if ( &_pthread_key_create )
  {
    v40 = *(_BYTE *)((v39 >> 3) + 0x7FFF8000);
    if ( (char)((v39 & 7) + 3) < v40 || !v40 )
    {
      _InterlockedAdd((volatile signed __int32 *)v39, 1u);
      goto LABEL_73;
    }
    goto LABEL_98;
  }
LABEL_99:
  v50 = *(_BYTE *)(((unsigned __int64)(M_parent + 8) >> 3) + 0x7FFF8000);
  if ( (char)(((M_parent + 8) & 7) + 3) < v50 || !v50 )
  {
    ++*(_DWORD *)(M_parent + 8);
    goto LABEL_73;
  }
  NowMs = __asan_report_load4(M_parent + 8);
LABEL_103:
  v51 = *(uint64_t **)(v3 + 128);
  if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    *v51 = NowMs;
    v52 = *(_QWORD *)(v3 + 128);
    v51 = (uint64_t *)(v52 + 8);
    if ( !*(_BYTE *)(((unsigned __int64)(v52 + 8) >> 3) + 0x7FFF8000) )
    {
      v53 = common::tools::RateLimiter::acquire(*(common::tools::RateLimiter *const *)(v52 + 8), 1u);
      goto LABEL_108;
    }
  }
  v53 = __asan_report_load8(v51);
LABEL_108:
  if ( !v53 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      299);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "rate_limiter failed to acquire. ip=%s",
      *(const char **)(v3 + 224));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    v57 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 136);
    if ( v57 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v57);
    v58 = *(char **)(v3 + 224);
    if ( v58 != (char *)(v3 + 240) )
      operator delete(v58);
    goto LABEL_53;
  }
  v54 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 136);
  if ( v54 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v54);
  v55 = *(char **)(v3 + 224);
  if ( v55 != (char *)(v3 + 240) )
    operator delete(v55);
LABEL_113:
  v56 = common::minet::KcpUtils::grab_token_from_control_packet(this->udp_data_, bytes_recvd);
  tokenb = v56;
  if ( !v56 )
    tokenb = common::tools::RandomUtils::rand<unsigned int>(1u, 0xFFFFFFFF);
  datab = common::minet::KcpUtils::grab_data_from_control_packet(this->udp_data_, bytes_recvd);
  session_id = common::minet::KcpServerMgrBase::genNewSessionId(*(common::minet::KcpServerMgrBase *const *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    p_M_refcount = (volatile signed __int32 *)this;
    __asan_report_load8(this);
    goto LABEL_134;
  }
  p_M_refcount = (volatile signed __int32 *)(this->_vptr_KcpConnMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_134:
    __asan_report_load8(p_M_refcount);
    goto LABEL_135;
  }
  v60 = (void (__fastcall *)(unsigned __int64, common::minet::KcpConnMgrBase *const, unsigned __int64, _QWORD, _QWORD, boost::asio::ip::udp::endpoint *))*((_QWORD *)this->_vptr_KcpConnMgrBase + 2);
  v115 = &this->udp_remote_endpoint_;
  p_M_refcount = (volatile signed __int32 *)&this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_135:
    __asan_report_load8(p_M_refcount);
    goto LABEL_136;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v3 + 136) = M_pi;
  if ( !M_pi )
    goto LABEL_139;
  p_M_refcount = &M_pi->_M_use_count;
  v62 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) >= v62 && v62 )
  {
LABEL_136:
    __asan_report_load4(p_M_refcount);
LABEL_137:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  *(_DWORD *)(v3 + 48) = M_pi->_M_use_count;
  do
  {
    v63 = *(_DWORD *)(v3 + 48);
    if ( !v63 )
      goto LABEL_137;
    v65 = *(_DWORD *)(v3 + 48);
    v64 = _InterlockedCompareExchange(p_M_refcount, v63 + 1, v65);
    v66 = v65 == v64;
    if ( v65 != v64 )
      *(_DWORD *)(v3 + 48) = v64;
  }
  while ( !v66 );
  p_M_refcount = (volatile signed __int32 *)&this->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::KcpConnMgrBase> >> 3)
                + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
LABEL_139:
    __asan_handle_no_return(p_M_refcount);
    std::__throw_bad_weak_ptr();
  }
  *(_QWORD *)(v3 + 128) = this->_M_weak_this._M_ptr;
  v60(v3 + 96, this, v3 + 128, session_id, tokenb, v115);
  v67 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 136);
  if ( v67 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
  v68 = *(common::minet::KcpSession **)(v3 + 96);
  if ( !v68 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      315);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "createSession failed, session_id=%u",
      session_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    goto LABEL_167;
  }
  v69 = *(_BYTE *)(((unsigned __int64)&this->kcp_log_mask_ >> 3) + 0x7FFF8000);
  if ( v69 && v69 <= 3 )
  {
    __asan_report_load4(&this->kcp_log_mask_);
LABEL_154:
    __asan_report_load4(p_wnd_size);
LABEL_155:
    __asan_report_load4(p_mtu);
    goto LABEL_156;
  }
  p_wnd_size = &this->wnd_size_;
  v71 = *(_BYTE *)(((unsigned __int64)&this->wnd_size_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 44) & 7) + 3) >= v71 && v71 )
    goto LABEL_154;
  p_mtu = &this->mtu_;
  v73 = *(_BYTE *)(((unsigned __int64)&this->mtu_ >> 3) + 0x7FFF8000);
  if ( v73 && v73 <= 3 )
    goto LABEL_155;
  p_timeout_sec = &this->timeout_sec_;
  v75 = *(_BYTE *)(((unsigned __int64)&this->timeout_sec_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 36) & 7) + 3) < v75 || !v75 )
  {
    v76 = common::minet::KcpSession::init(v68, this->timeout_sec_, this->mtu_, this->wnd_size_, this->kcp_log_mask_);
    goto LABEL_157;
  }
LABEL_156:
  v76 = __asan_report_load4(p_timeout_sec);
LABEL_157:
  if ( v76 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      320);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "init Session failed, session_id=%u",
      session_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    goto LABEL_167;
  }
  v77 = *(_QWORD *)(v3 + 96);
  if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v77);
  }
  else
  {
    v78 = *(_QWORD *)v77 + 32LL;
    if ( !*(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
    {
      v79 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v77 + 32LL))(v77, datab);
      goto LABEL_164;
    }
  }
  v79 = __asan_report_load8(v78);
LABEL_164:
  if ( v79 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      325);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "onConnect failed, session_id=%u",
      session_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    goto LABEL_167;
  }
  std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::__shared_ptr(
    (std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 128),
    (const std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2> *)(v3 + 96));
  v83 = common::minet::KcpConnMgrBase::addSession(
          this,
          (common::minet::KcpSessionPtr)__PAIR128__(v80, v3 + 128),
          v81,
          v82);
  v85 = v83;
  v86 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 136);
  if ( v86 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v86);
  if ( v85 )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_connect_packet",
      330);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)(v3 + 288),
      "addSession failed, session_id=%u",
      session_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
LABEL_167:
    v84 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 104);
    if ( v84 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v84);
    goto LABEL_53;
  }
  common::milog::MiLogStream::MiLogStream(
    &v122,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_conn_mgr_base.cpp",
    "handle_connect_packet",
    334);
  v87 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 88) & 7) + 1) >= v87 && v87 )
  {
    v88 = __asan_report_load2(&this->udp_remote_endpoint_);
  }
  else
  {
    v88 = this->udp_remote_endpoint_.impl_.data_.base.sa_family;
    if ( v88 != 2 )
    {
      v89 = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
      v90 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 86) & 7) + 1) < v90 || !v90 )
        goto LABEL_179;
LABEL_191:
      __asan_report_load2(v89);
LABEL_192:
      p_sin6_scope_id = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo;
      v97 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_flowinfo >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)this - 84) & 7) + 3) < v97 || !v97 )
      {
        v98 = this->udp_remote_endpoint_.impl_.data_.v4.sin_addr.s_addr;
        *(_DWORD *)(v3 + 48) = v98;
        *(_DWORD *)(v3 + 224) = 0;
        *(_DWORD *)(v3 + 228) = v98;
        *(_QWORD *)(v3 + 232) = 0LL;
        *(_QWORD *)(v3 + 240) = 0LL;
        *(_QWORD *)(v3 + 248) = 0LL;
        goto LABEL_185;
      }
      __asan_report_load4(p_sin6_scope_id);
      goto LABEL_196;
    }
  }
  v89 = &this->udp_remote_endpoint_.impl_.data_.v4.sin_port;
  v96 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v4.sin_port >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 86) & 7) + 1) >= v96 && v96 )
  {
    __asan_report_load2(v89);
    goto LABEL_191;
  }
LABEL_179:
  v85 = (unsigned __int16)__ROR2__(this->udp_remote_endpoint_.impl_.data_.v4.sin_port, 8);
  if ( v88 == 2 )
    goto LABEL_192;
  p_sin6_scope_id = &this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr;
  if ( *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 80) & 7)
    || *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[3] + 3) >> 3)
                + 0x7FFF8000) <= (((unsigned __int8)this - 65) & 7) )
  {
LABEL_196:
    __asan_report_load_n(p_sin6_scope_id, 16LL);
    goto LABEL_197;
  }
  v92 = *(_QWORD *)this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr8;
  v93 = *(_QWORD *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_addr.__u6_addr32[2];
  p_sin6_scope_id = (in6_addr *)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
  v94 = *(_BYTE *)(((unsigned __int64)&this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 64) & 7) + 3) < v94 || !v94 )
  {
    v95 = this->udp_remote_endpoint_.impl_.data_.v6.sin6_scope_id;
    *(_QWORD *)(v3 + 160) = v92;
    *(_QWORD *)(v3 + 168) = v93;
    *(_DWORD *)(v3 + 224) = 1;
    *(_DWORD *)(v3 + 228) = 0;
    *(_QWORD *)(v3 + 232) = v92;
    *(_QWORD *)(v3 + 240) = v93;
    *(_QWORD *)(v3 + 248) = v95;
LABEL_185:
    boost::asio::ip::address::to_string[abi:cxx11](
      (std::string *)(v3 + 288),
      (const boost::asio::ip::address *const)(v3 + 224));
    goto LABEL_198;
  }
LABEL_197:
  __asan_report_load4(p_sin6_scope_id);
LABEL_198:
  common::milog::MiLogStream::operator()(
    &v122,
    "addSession from from ip=%s port=%u data=%u token=%u",
    *(const char **)(v3 + 288),
    v85,
    datab,
    tokenb);
  v99 = *(char **)(v3 + 288);
  if ( v99 != (char *)(v3 + 304) )
    operator delete(v99);
  common::milog::MiLogStream::~MiLogStream(&v122);
  common::minet::KcpUtils::making_send_back_conv_packet[abi:cxx11]((std::string *)(v3 + 288), session_id, tokenb, datab);
  p_udp_socket = &this->udp_socket_;
  v101 = *(_QWORD *)(v3 + 296);
  if ( v101 )
    v102 = *(_QWORD *)(v3 + 288);
  else
    v102 = 0LL;
  *(_DWORD *)(v3 + 128) = 0;
  *(_BYTE *)(v3 + 132) = 0;
  *(_QWORD *)(v3 + 136) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_implementation = (unsigned __int64)&this->udp_socket_.impl_.implementation_;
  *(_QWORD *)(v3 + 160) = v102;
  *(_QWORD *)(v3 + 168) = v101;
  *(_QWORD *)(v3 + 176) = v101;
  v104 = *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this - 88) & 7) + 1) >= v104 && v104 )
  {
    p_implementation = (unsigned __int64)&this->udp_remote_endpoint_;
    __asan_report_load2(v115);
    goto LABEL_213;
  }
  if ( this->udp_remote_endpoint_.impl_.data_.base.sa_family == 2 )
  {
LABEL_213:
    v105 = 16LL;
    goto LABEL_206;
  }
  v105 = 28LL;
LABEL_206:
  v106 = (char *)(p_implementation + 4);
  v107 = *(_BYTE *)(((p_implementation + 4) >> 3) + 0x7FFF8000);
  if ( v107 <= (char)((p_implementation + 4) & 7) && v107 )
  {
    p_implementation += 4LL;
    __asan_report_load1(v106);
  }
  else
  {
    v108 = *(_BYTE *)(p_implementation + 4);
    v109 = *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000);
    if ( !v109 || v109 > 3 )
    {
      p_implementation = (unsigned int)p_udp_socket->impl_.implementation_.socket_;
      boost::asio::detail::socket_ops::sync_sendto(
        p_implementation,
        v108,
        (const boost::asio::detail::socket_ops::buf *)(v3 + 160),
        1uLL,
        0,
        &v115->impl_.data_.base,
        v105,
        (boost::system::error_code *)(v3 + 128));
      goto LABEL_216;
    }
  }
  __asan_report_load4(p_implementation);
LABEL_216:
  if ( *(_DWORD *)(v3 + 128) )
  {
    __asan_handle_no_return(p_implementation);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v3 + 128), "send_to");
  }
  v110 = *(char **)(v3 + 288);
  if ( v110 != (char *)(v3 + 304) )
    operator delete(v110);
  v111 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 104);
  if ( v111 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v111);
  v33 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v3 + 72);
  if ( v33 )
LABEL_54:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v33);
LABEL_55:
  if ( v123 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 340: range 000000000CDDFE8C-000000000CDE033C
void __fastcall common::minet::KcpConnMgrBase::handle_disconnect_packet(
        common::minet::KcpConnMgrBase *const this,
        size_t bytes_recvd)
{
  unsigned __int64 v4; // rbp
  _DWORD *v5; // r13
  common::minet::KcpServerMgrBaseWtr *p_kcp_server_mgr_wtr; // rsi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // eax
  int v12; // ett
  bool v13; // dl
  std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::enable_shared_from_this<common::minet::KcpServerMgrBase> *v15; // rdi
  char v16; // dl
  __int64 v17; // rax
  uint32_t v18; // r14d
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  char v22; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v23; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v25; // rdi
  uint32_t token; // [rsp+8h] [rbp-E0h]
  uint32_t data; // [rsp+Ch] [rbp-DCh]
  common::milog::MiLogStream v28; // [rsp+10h] [rbp-D8h] BYREF
  char v29[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_1(128LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 __count 64 16 22 kcp_server_mgr_ptr:341 96 16 15 session_ptr:351";
  *(_QWORD *)(v4 + 16) = common::minet::KcpConnMgrBase::handle_disconnect_packet;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  p_kcp_server_mgr_wtr = &this->kcp_server_mgr_wtr_;
  p_M_refcount = &this->kcp_server_mgr_wtr_._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_server_mgr_wtr_._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = this->kcp_server_mgr_wtr_._M_refcount._M_pi;
    *(_QWORD *)(v4 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v9 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v9 || !v9 )
    {
      *(_DWORD *)(v4 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v4 + 48);
        if ( !v10 )
          goto LABEL_25;
        v12 = *(_DWORD *)(v4 + 48);
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v10 + 1, v10);
        v13 = v12 == v11;
        if ( v12 != v11 )
          *(_DWORD *)(v4 + 48) = v11;
        if ( v13 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_25:
  v13 = 0;
LABEL_11:
  if ( !v13 )
    *(_QWORD *)(v4 + 72) = 0LL;
LABEL_13:
  M_ptr = *(std::__weak_ptr<common::minet::KcpServerMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v4 + 72);
  if ( !M_ptr )
    goto LABEL_19;
  v15 = &M_ptr->std::enable_shared_from_this<common::minet::KcpServerMgrBase>;
  v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v15 & 7) + 3) >= v16 && v16 )
  {
    __asan_report_load4(v15);
LABEL_27:
    __asan_report_load8(&this->kcp_server_mgr_wtr_);
    goto LABEL_28;
  }
  if ( LODWORD(v15->_M_weak_this._M_ptr) )
  {
    if ( !*(_BYTE *)(((unsigned __int64)p_kcp_server_mgr_wtr >> 3) + 0x7FFF8000) )
    {
      M_ptr = this->kcp_server_mgr_wtr_._M_ptr;
      goto LABEL_19;
    }
    goto LABEL_27;
  }
LABEL_28:
  M_ptr = 0LL;
LABEL_19:
  *(_QWORD *)(v4 + 64) = M_ptr;
  if ( !M_ptr )
  {
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_disconnect_packet",
      344);
    common::milog::MiLogStream::operator()(&v28, "kcp_server_mgr_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_44;
  }
  token = common::minet::KcpUtils::grab_token_from_control_packet(this->udp_data_, bytes_recvd);
  data = common::minet::KcpUtils::grab_data_from_control_packet(this->udp_data_, bytes_recvd);
  v18 = common::minet::KcpUtils::grab_conv_from_control_packet(this->udp_data_, bytes_recvd);
  common::minet::KcpConnMgrBase::findSession((std::_Rb_tree_node_base::_Base_ptr *)(v4 + 96), this, v18);
  v19 = *(_QWORD *)(v4 + 96);
  if ( !v19 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_disconnect_packet",
      355);
    common::milog::MiLogStream::operator()(&v28, "findSession failed, session_id=%u", v18);
    common::milog::MiLogStream::~MiLogStream(&v28);
LABEL_42:
    v23 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
    if ( v23 )
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v23);
LABEL_44:
    v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
    if ( !v24 )
      goto LABEL_46;
    goto LABEL_45;
  }
  v20 = *(_BYTE *)(((unsigned __int64)(v19 + 28) >> 3) + 0x7FFF8000);
  if ( (char)(((v19 + 28) & 7) + 3) >= v20 && v20 )
  {
    __asan_report_load4(v19 + 28);
LABEL_37:
    v21 = *(_QWORD *)(v4 + 96);
    v22 = *(_BYTE *)(((unsigned __int64)(v21 + 28) >> 3) + 0x7FFF8000);
    if ( (char)(((v21 + 28) & 7) + 3) >= v22 && v22 )
      __asan_report_load4(v21 + 28);
    else
      common::milog::MiLogStream::operator()(
        &v28,
        "token not match, session_token=%u disconnect_token=%u",
        *(unsigned int *)(v21 + 28),
        token);
    common::milog::MiLogStream::~MiLogStream(&v28);
    goto LABEL_42;
  }
  if ( token != *(_DWORD *)(v19 + 28) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "src/kcp_conn_mgr_base.cpp",
      "handle_disconnect_packet",
      361);
    goto LABEL_37;
  }
  common::minet::KcpConnMgrBase::disconnect(this, v18, data);
  common::milog::MiLogStream::MiLogStream(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_conn_mgr_base.cpp",
    "handle_disconnect_packet",
    366);
  common::milog::MiLogStream::operator()(&v28, "disconnect session from client, session_id=%u data=%u", v18, data);
  common::milog::MiLogStream::~MiLogStream(&v28);
  v25 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
  if ( v25 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v25);
  v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
  if ( v24 )
LABEL_45:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v24);
LABEL_46:
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 370: range 000000000CDDC6EE-000000000CDDCFD4
void __fastcall common::minet::KcpConnMgrBase::stop(common::minet::KcpConnMgrBase *const this)
{
  unsigned __int64 p_reactor_data; // rbp
  unsigned __int64 v2; // rsi
  boost::asio::ip::udp::socket *p_udp_socket; // r12
  unsigned __int64 reactor; // r14
  unsigned __int64 v5; // r15
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *v6; // r13
  std::atomic<common::minet::KcpConnMgrBase::Status> *p_state; // rdi
  char v8; // dl
  common::minet::KcpConnMgrBase *v9; // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *service; // rdx
  boost::asio::detail::reactive_socket_service_base *v11; // rcx
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *p_implementation; // rdi
  char v13; // al
  char v14; // al
  char v15; // al
  unsigned __int64 v16; // rdi
  char v17; // al
  __int64 v18; // rax
  boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *v19; // rdx
  int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // al
  char *v31; // rdi
  boost::asio::execution_context *p_owner; // rdi
  boost::asio::execution_context::service *next; // rax
  boost::asio::execution_context *owner; // rax
  _DWORD *v36; // [rsp+18h] [rbp-D0h]
  boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>::protocol_type *p_protocol; // [rsp+20h] [rbp-C8h]
  __int64 v38; // [rsp+28h] [rbp-C0h]
  char v39[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v18 = __asan_stack_malloc_1(128LL);
    if ( v18 )
      v5 = v18;
  }
  v6 = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type *)(v5 + 128);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 16 2 ec 64 16 15 descriptor_lock 96 16 16 descriptors_lock";
  *(_QWORD *)(v5 + 16) = common::minet::KcpConnMgrBase::stop;
  v36 = (_DWORD *)(v5 >> 3);
  v36[536862720] = -235802127;
  v36[536862721] = -219021312;
  v36[536862722] = -219021312;
  v36[536862723] = -202178560;
  p_state = &this->state_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 96) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_store4(p_state);
    goto LABEL_25;
  }
  v9 = this;
  this->state_._M_i = STATUS_STOPPED;
  _mm_mfence();
  p_udp_socket = &v9->udp_socket_;
  *(_DWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 36) = 0;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&v9->udp_socket_ >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    p_implementation = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *)p_udp_socket;
    __asan_report_load8(p_udp_socket);
LABEL_26:
    __asan_report_load4(p_implementation);
    goto LABEL_27;
  }
  service = this->udp_socket_.impl_.service_;
  v11 = &service->boost::asio::detail::reactive_socket_service_base;
  p_implementation = &this->udp_socket_.impl_.implementation_;
  v13 = *(_BYTE *)(((unsigned __int64)&this->udp_socket_.impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_26;
  if ( p_udp_socket->impl_.implementation_.socket_ == -1 )
  {
    *(_QWORD *)(v5 + 32) = 0x100000009LL;
    *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_9;
  }
LABEL_27:
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v11);
    goto LABEL_35;
  }
  reactor = (unsigned __int64)service->reactor_;
  p_reactor_data = (unsigned __int64)&p_implementation->reactor_data_;
  if ( *(_BYTE *)(((unsigned __int64)&p_implementation->reactor_data_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_reactor_data);
LABEL_36:
    p_implementation = v19;
    __asan_report_load1(v19);
    goto LABEL_37;
  }
  p_implementation = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *)p_implementation->reactor_data_;
  if ( !p_implementation )
    goto LABEL_70;
  p_protocol = &p_implementation[1].protocol_;
  v19 = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *)((char *)p_implementation + 88);
  if ( *(char *)(((unsigned __int64)&p_implementation[3].protocol_ >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_36;
  if ( LOBYTE(p_implementation[3].protocol_.family_) )
  {
LABEL_37:
    pthread_mutex_lock((pthread_mutex_t *)&p_implementation[2]);
    *(_BYTE *)(v5 + 72) = 1;
    goto LABEL_33;
  }
  *(_BYTE *)(v5 + 72) = 0;
LABEL_33:
  *(_QWORD *)(v5 + 96) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
  v20 = 0;
  v21 = v38;
  while ( v20 <= 2 )
  {
    while ( 1 )
    {
      v24 = p_reactor_data;
      if ( *(_BYTE *)((p_reactor_data >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_reactor_data);
LABEL_39:
        __asan_report_load8(v24);
LABEL_40:
        __asan_report_store16(v24, v2);
LABEL_41:
        __asan_report_load8(v24);
        goto LABEL_42;
      }
      v2 = *(_QWORD *)p_reactor_data;
      v24 = *(_QWORD *)p_reactor_data + 16 * (v20 + 7LL);
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        goto LABEL_39;
      v22 = *(_QWORD *)(v2 + 16 * (v20 + 7LL));
      if ( !v22 )
        break;
      v25 = v21 & 0xFFFFFFFF00000000LL | 0x7D;
      v21 = 0xFFFFFF00FFFFFFFFLL;
      v2 = v25 & 0xFFFFFF00FFFFFFFFLL | 0x100000000LL;
      v24 = v22 + 24;
      if ( *(_WORD *)(((v22 + 24) >> 3) + 0x7FFF8000) )
        goto LABEL_40;
      *(_QWORD *)(v22 + 24) = v2;
      *(_QWORD *)(v22 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v23 = *(_QWORD *)p_reactor_data;
      v24 = *(_QWORD *)p_reactor_data + 16 * (v20 + 7LL);
      v2 = v24 >> 3;
      if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
        goto LABEL_41;
      v2 = *(_QWORD *)(v23 + 16 * (v20 + 7LL));
      if ( v2 )
      {
        v24 = *(_QWORD *)(v23 + 16 * (v20 + 7LL));
        if ( !*(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        {
          v26 = *(_QWORD *)v2;
          *(_QWORD *)(v23 + 16 * (v20 + 7LL)) = *(_QWORD *)v2;
          if ( !v26 )
          {
            if ( *(_BYTE *)(((v23 + 16 * (v20 + 7LL) + 8) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
LABEL_59:
              __asan_report_store8();
              goto LABEL_60;
            }
LABEL_43:
            *(_QWORD *)(v23 + 16 * (v20 + 7LL) + 8) = 0LL;
          }
          *(_QWORD *)v2 = 0LL;
          goto LABEL_45;
        }
LABEL_42:
        v21 = __asan_report_load8(v24);
        goto LABEL_43;
      }
LABEL_45:
      v2 = v22 >> 3;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        goto LABEL_59;
      *(_QWORD *)v22 = 0LL;
      v2 = *(_QWORD *)(v5 + 104);
      if ( !v2 )
        goto LABEL_61;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      {
LABEL_60:
        v21 = __asan_report_store8();
LABEL_61:
        *(_QWORD *)(v5 + 104) = v22;
        *(_QWORD *)(v5 + 96) = v22;
      }
      else
      {
        *(_QWORD *)v2 = v22;
        *(_QWORD *)(v5 + 104) = v22;
      }
    }
    ++v20;
  }
  if ( *(_BYTE *)(v5 + 72) )
  {
    if ( *(char *)(((unsigned __int64)&p_protocol[12] >> 3) + 0x7FFF8000) < 0 )
    {
      v27 = __asan_report_load1(&p_protocol[12]);
    }
    else
    {
      v27 = (__int64)p_protocol;
      if ( !LOBYTE(p_protocol[12].family_) )
        goto LABEL_67;
    }
    pthread_mutex_unlock((pthread_mutex_t *)(v27 + 8));
LABEL_67:
    *(_BYTE *)(v5 + 72) = 0;
  }
  if ( *(_BYTE *)(((reactor + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(reactor + 40);
  }
  else
  {
    p_reactor_data = v5 + 96;
    LODWORD(v2) = v5 + 96;
    boost::asio::detail::scheduler::post_deferred_completions(
      *(boost::asio::detail::scheduler *const *)(reactor + 40),
      (boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *)(v5 + 96));
    p_implementation = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *)(v5 + 96);
    boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation>::~op_queue((boost::asio::detail::op_queue<boost::asio::detail::scheduler_operation> *const)(v5 + 96));
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_70;
  }
  p_implementation = (boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::implementation_type *)&p_protocol[2];
  pthread_mutex_unlock((pthread_mutex_t *)&p_protocol[2]);
LABEL_70:
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 40) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_9:
  if ( *(_DWORD *)(v5 + 32) )
  {
    __asan_handle_no_return(p_implementation);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 32), "cancel");
  }
  *(_DWORD *)(v5 + 64) = 0;
  *(_BYTE *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)p_udp_socket >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_udp_socket);
LABEL_77:
    __asan_report_load4(p_reactor_data);
LABEL_78:
    if ( *(_BYTE *)((reactor >> 3) + 0x7FFF8000) )
    {
      v28 = reactor;
      __asan_report_load8(reactor);
    }
    else
    {
      v28 = p_reactor_data + 4;
      v29 = *(_BYTE *)(((p_reactor_data + 4) >> 3) + 0x7FFF8000);
      if ( v29 > (char)((p_reactor_data + 4) & 7) || !v29 )
      {
        boost::asio::detail::epoll_reactor::deregister_descriptor(
          v6->reactor_,
          v2,
          (boost::asio::detail::epoll_reactor::per_descriptor_data *)(p_reactor_data + 8),
          ((*(_BYTE *)(p_reactor_data + 4) >> 6) ^ 1) & 1);
        v30 = *(_BYTE *)((p_reactor_data >> 3) + 0x7FFF8000);
        if ( !v30 || v30 > 3 )
        {
          boost::asio::detail::socket_ops::close(
            p_udp_socket->impl_.implementation_.socket_,
            (boost::asio::detail::socket_ops::state_type *)(p_reactor_data + 4),
            0,
            (boost::system::error_code *)(v5 + 64));
          if ( !*(_BYTE *)((reactor >> 3) + 0x7FFF8000) )
          {
            reactor = (unsigned __int64)v6->reactor_;
            v31 = (char *)(p_reactor_data + 8);
            if ( !*(_BYTE *)(((p_reactor_data + 8) >> 3) + 0x7FFF8000) )
            {
              v6 = *(boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type **)(p_reactor_data + 8);
              if ( !v6 )
                goto LABEL_15;
              p_protocol = (boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>::protocol_type *)(reactor + 136);
              v31 = (char *)(reactor + 184);
              if ( *(char *)(((reactor + 184) >> 3) + 0x7FFF8000) >= 0 )
              {
                if ( !*(_BYTE *)(reactor + 184) )
                {
                  *(_BYTE *)(v5 + 104) = 0;
                  goto LABEL_89;
                }
LABEL_110:
                pthread_mutex_lock((pthread_mutex_t *)(reactor + 144));
                *(_BYTE *)(v5 + 104) = 1;
LABEL_89:
                if ( *(_BYTE *)(((reactor + 192) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(reactor + 192);
                }
                else if ( v6 != *(boost::asio::detail::io_object_impl<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>,boost::asio::executor>::service_type **)(reactor + 192) )
                {
                  goto LABEL_91;
                }
                p_owner = (boost::asio::execution_context *)&v6->owner_;
                if ( *(_BYTE *)(((unsigned __int64)&v6->owner_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(p_owner);
                  goto LABEL_115;
                }
                *(_QWORD *)(reactor + 192) = v6->owner_;
LABEL_91:
                p_owner = (boost::asio::execution_context *)&v6->next_;
                if ( !*(_BYTE *)(((unsigned __int64)&v6->next_ >> 3) + 0x7FFF8000) )
                {
                  next = v6->next_;
                  if ( !next )
                    goto LABEL_96;
                  p_owner = (boost::asio::execution_context *)&v6->owner_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v6->owner_ >> 3) + 0x7FFF8000) )
                  {
                    p_owner = (boost::asio::execution_context *)&next->owner_;
                    if ( !*(_BYTE *)(((unsigned __int64)&next->owner_ >> 3) + 0x7FFF8000) )
                    {
                      next->owner_ = v6->owner_;
LABEL_96:
                      p_owner = (boost::asio::execution_context *)&v6->owner_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v6->owner_ >> 3) + 0x7FFF8000) )
                      {
                        owner = v6->owner_;
                        if ( !owner )
                          goto LABEL_100;
                        p_owner = owner + 4;
                        if ( !*(_BYTE *)(((unsigned __int64)&owner[4] >> 3) + 0x7FFF8000) )
                        {
                          owner[4].service_registry_ = (boost::asio::detail::service_registry *)v6->next_;
LABEL_100:
                          p_owner = (boost::asio::execution_context *)(reactor + 200);
                          if ( !*(_BYTE *)(((reactor + 200) >> 3) + 0x7FFF8000) )
                          {
                            v6->owner_ = *(boost::asio::execution_context **)(reactor + 200);
                            v6->next_ = 0LL;
                            *(_QWORD *)(reactor + 200) = v6;
                            if ( !*(_BYTE *)(v5 + 104) )
                            {
LABEL_102:
                              if ( !*(_BYTE *)(((p_reactor_data + 8) >> 3) + 0x7FFF8000) )
                              {
                                *(_QWORD *)(p_reactor_data + 8) = 0LL;
                                goto LABEL_15;
                              }
                              __asan_report_store8();
LABEL_123:
                              v16 = p_reactor_data;
                              __asan_report_store4(p_reactor_data);
LABEL_124:
                              __asan_report_store1(v16);
LABEL_125:
                              __asan_handle_no_return(v16);
                              boost::asio::detail::do_throw_error((const boost::system::error_code *)(v5 + 64), "close");
                            }
LABEL_121:
                            pthread_mutex_unlock((pthread_mutex_t *)&p_protocol[2]);
                            goto LABEL_102;
                          }
LABEL_120:
                          __asan_report_load8(p_owner);
                          goto LABEL_121;
                        }
LABEL_119:
                        __asan_report_store8();
                        goto LABEL_120;
                      }
LABEL_118:
                      __asan_report_load8(p_owner);
                      goto LABEL_119;
                    }
LABEL_117:
                    __asan_report_store8();
                    goto LABEL_118;
                  }
LABEL_116:
                  __asan_report_load8(p_owner);
                  goto LABEL_117;
                }
LABEL_115:
                __asan_report_load8(p_owner);
                goto LABEL_116;
              }
LABEL_109:
              __asan_report_load1(v31);
              goto LABEL_110;
            }
LABEL_108:
            __asan_report_load8(v31);
            goto LABEL_109;
          }
LABEL_107:
          v31 = (char *)reactor;
          __asan_report_load8(reactor);
          goto LABEL_108;
        }
LABEL_106:
        __asan_report_load4(p_reactor_data);
        goto LABEL_107;
      }
    }
    __asan_report_load1(v28);
    goto LABEL_106;
  }
  v6 = this->udp_socket_.impl_.service_;
  reactor = (unsigned __int64)&v6->boost::asio::detail::reactive_socket_service_base;
  p_reactor_data = (unsigned __int64)&p_udp_socket->impl_.implementation_;
  v14 = *(_BYTE *)(((unsigned __int64)&p_udp_socket->impl_.implementation_ >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_77;
  LODWORD(v2) = p_udp_socket->impl_.implementation_.socket_;
  if ( (_DWORD)v2 != -1 )
    goto LABEL_78;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_15:
  v15 = *(_BYTE *)((p_reactor_data >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_123;
  p_udp_socket->impl_.implementation_.socket_ = -1;
  v16 = p_reactor_data + 4;
  v17 = *(_BYTE *)(((p_reactor_data + 4) >> 3) + 0x7FFF8000);
  if ( v17 <= (char)((p_reactor_data + 4) & 7) && v17 )
    goto LABEL_124;
  *(_BYTE *)(p_reactor_data + 4) = 0;
  if ( *(_DWORD *)(v5 + 64) )
    goto LABEL_125;
  std::thread::join(&this->network_thread_);
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 383: range 000000000CDDF9EC-000000000CDDFE86
void __fastcall common::minet::KcpConnMgrBase::disconnect(
        common::minet::KcpConnMgrBase *const this,
        uint32_t session_id,
        uint32_t data)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r12
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  volatile signed __int32 *p_M_weak_count; // rdi
  char v11; // dl
  __int64 v12; // rax
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v13; // rdi
  char v14; // cl
  boost::asio::io_context *p_ioc; // rdx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v16; // rax
  volatile signed __int32 *v17; // rdi
  char v18; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v19; // rax
  volatile signed __int32 *p_M_use_count; // rdi
  char v21; // cl
  char v22; // si
  char v23; // si
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v24; // rdi
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-148h] BYREF
  common::minet::KcpConnMgrBase::disconnect::<lambda()> handler; // [rsp+30h] [rbp-128h] BYREF
  char v27[216]; // [rsp+80h] [rbp-D8h] BYREF

  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v6 = v12;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 16 15 session_ptr:384 64 16 20 kcp_conn_mgr_wtr:391 96 28 13 end_point:392";
  *(_QWORD *)(v6 + 16) = common::minet::KcpConnMgrBase::disconnect;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862723] = 0x4000000;
  v7[536862724] = -202116109;
  common::minet::KcpConnMgrBase::findSession((std::_Rb_tree_node_base::_Base_ptr *)(v6 + 32), this, session_id);
  if ( !*(_QWORD *)(v6 + 32) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/kcp_conn_mgr_base.cpp",
      "disconnect",
      387);
    common::milog::MiLogStream::operator()(&v25, "findSession failed, session_id=%u", session_id);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v13 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
    if ( !v13 )
      goto LABEL_51;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->std::enable_shared_from_this<common::minet::KcpConnMgrBase> >> 3)
                + 0x7FFF8000) )
  {
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)__asan_report_load8(&this->std::enable_shared_from_this<common::minet::KcpConnMgrBase>);
    goto LABEL_16;
  }
  *(_QWORD *)(v6 + 64) = this->_M_weak_this._M_ptr;
  p_M_refcount = &this->_M_weak_this._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&this->_M_weak_this._M_refcount >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    p_M_weak_count = (volatile signed __int32 *)p_M_refcount;
    __asan_report_load8(p_M_refcount);
LABEL_17:
    M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_weak_count);
    goto LABEL_18;
  }
  M_pi = this->_M_weak_this._M_refcount._M_pi;
  *(_QWORD *)(v6 + 72) = M_pi;
  if ( !M_pi )
  {
LABEL_10:
    common::minet::KcpSession::get_udp_remote_endpoint(
      (boost::asio::ip::udp::endpoint *)(v6 + 96),
      *(common::minet::KcpSession *const *)(v6 + 32));
    goto LABEL_22;
  }
  p_M_weak_count = &M_pi->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v11 = *(_BYTE *)(((unsigned __int64)p_M_weak_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_weak_count & 7) + 3) < v11 || !v11 )
    {
      _InterlockedAdd(p_M_weak_count, 1u);
      goto LABEL_10;
    }
    goto LABEL_17;
  }
LABEL_18:
  v14 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)M_pi + 12) & 7) + 3) < v14 || !v14 )
  {
    ++M_pi->_M_weak_count;
    goto LABEL_10;
  }
  __asan_report_load4(&M_pi->_M_weak_count);
LABEL_22:
  p_ioc = &this->ioc_;
  handler.__this = this;
  handler.__kcp_conn_mgr_wtr._M_ptr = *(std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 64);
  v16 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
  handler.__kcp_conn_mgr_wtr._M_refcount._M_pi = v16;
  if ( !v16 )
    goto LABEL_27;
  v17 = &v16->_M_weak_count;
  if ( &_pthread_key_create )
  {
    v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v17 & 7) + 3) < v18 || !v18 )
    {
      _InterlockedAdd(v17, 1u);
      goto LABEL_27;
    }
    v16 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(v17);
  }
  p_M_use_count = &v16->_M_weak_count;
  v22 = *(_BYTE *)(((unsigned __int64)&v16->_M_weak_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v16 + 12) & 7) + 3) >= v22 && v22 )
  {
    __asan_report_load4(p_M_use_count);
LABEL_38:
    v19 = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)__asan_report_store4(p_M_use_count);
    goto LABEL_39;
  }
  ++v16->_M_weak_count;
LABEL_27:
  handler.__end_point.impl_.data_.base = (boost::asio::detail::socket_addr_type)_mm_load_si128((const __m128i *)(v6 + 96));
  *(_QWORD *)&handler.__end_point.impl_.data_.v6.sin6_addr.__u6_addr32[2] = *(_QWORD *)(v6 + 112);
  handler.__end_point.impl_.data_.v6.sin6_scope_id = *(_DWORD *)(v6 + 120);
  handler.__session_ptr._M_ptr = *(std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::element_type **)(v6 + 32);
  v19 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
  handler.__session_ptr._M_refcount._M_pi = v19;
  if ( !v19 )
  {
LABEL_32:
    handler.__data = data;
    boost::asio::io_context::dispatch<common::minet::KcpConnMgrBase::disconnect(unsigned int,unsigned int)::{lambda(void)#1}>(
      p_ioc,
      &handler);
    goto LABEL_43;
  }
  p_M_use_count = &v19->_M_use_count;
  if ( &_pthread_key_create )
  {
    v21 = *(_BYTE *)(((unsigned __int64)p_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)p_M_use_count & 7) + 3) < v21 || !v21 )
    {
      _InterlockedAdd(p_M_use_count, 1u);
      goto LABEL_32;
    }
    goto LABEL_38;
  }
LABEL_39:
  v23 = *(_BYTE *)(((unsigned __int64)&v19->_M_use_count >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v19 + 8) & 7) + 3) < v23 || !v23 )
  {
    ++v19->_M_use_count;
    goto LABEL_32;
  }
  __asan_report_load4(&v19->_M_use_count);
LABEL_43:
  if ( handler.__session_ptr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(handler.__session_ptr._M_refcount._M_pi);
  if ( handler.__kcp_conn_mgr_wtr._M_refcount._M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(handler.__kcp_conn_mgr_wtr._M_refcount._M_pi);
  common::milog::MiLogStream::MiLogStream(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/kcp_conn_mgr_base.cpp",
    "disconnect",
    408);
  common::milog::MiLogStream::operator()(&v25, "session disconnect session_id=%u data=%u", session_id, data);
  common::milog::MiLogStream::~MiLogStream(&v25);
  v24 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 72);
  if ( v24 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_weak_release(v24);
  v13 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v6 + 40);
  if ( v13 )
LABEL_50:
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v13);
LABEL_51:
  if ( v27 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 393: range 000000000CDDEE82-000000000CDDF2D4
void __fastcall common::minet::KcpConnMgrBase::disconnect(unsigned int,unsigned int)::{lambda(void)#1}::operator()(
        const common::minet::KcpConnMgrBase::disconnect::<lambda()> *const __closure)
{
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  common::minet::KcpConnMgrBaseWtr *p_kcp_conn_mgr_wtr; // rsi
  std::__weak_count<(__gnu_cxx::_Lock_policy)2> *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rax
  char v7; // r8
  signed __int32 v8; // eax
  signed __int32 v9; // eax
  int v10; // ett
  bool v11; // dl
  std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rdi
  std::enable_shared_from_this<common::minet::KcpConnMgrBase> *v13; // rdi
  char v14; // dl
  __int64 v15; // rax
  void *p_session_ptr; // rdi
  std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::element_type *v17; // rax
  char v18; // dl
  char v19; // cl
  char v20; // dl
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  uint32_t *p_data; // rdx
  char v24; // al
  void *p_session_id; // rdi
  std::__shared_ptr<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2>::element_type *v26; // rax
  char v27; // dl
  _BYTE *v28; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v29; // rdi
  _BYTE v30[200]; // [rsp+0h] [rbp-C8h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(160LL);
    if ( v15 )
      v2 = v15;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 __count 64 16 20 kcp_conn_mgr_ptr:394 96 32 18 disconnect_msg:397";
  *(_QWORD *)(v2 + 16) = common::minet::KcpConnMgrBase::disconnect(unsigned int,unsigned int)::{lambda(void)#1}::operator();
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  p_kcp_conn_mgr_wtr = &__closure->__kcp_conn_mgr_wtr;
  p_M_refcount = &__closure->__kcp_conn_mgr_wtr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__kcp_conn_mgr_wtr._M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
  }
  else
  {
    M_pi = __closure->__kcp_conn_mgr_wtr._M_refcount._M_pi;
    *(_QWORD *)(v2 + 72) = M_pi;
    if ( !M_pi )
      goto LABEL_13;
    p_M_refcount = (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)&M_pi->_M_use_count;
    v7 = *(_BYTE *)(((unsigned __int64)&M_pi->_M_use_count >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_pi + 8) & 7) + 3) < v7 || !v7 )
    {
      *(_DWORD *)(v2 + 48) = M_pi->_M_use_count;
      while ( 1 )
      {
        v8 = *(_DWORD *)(v2 + 48);
        if ( !v8 )
          goto LABEL_23;
        v10 = *(_DWORD *)(v2 + 48);
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)p_M_refcount, v8 + 1, v8);
        v11 = v10 == v9;
        if ( v10 != v9 )
          *(_DWORD *)(v2 + 48) = v9;
        if ( v11 )
          goto LABEL_11;
      }
    }
  }
  __asan_report_load4(p_M_refcount);
LABEL_23:
  v11 = 0;
LABEL_11:
  if ( !v11 )
    *(_QWORD *)(v2 + 72) = 0LL;
LABEL_13:
  M_ptr = *(std::__weak_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type **)(v2 + 72);
  if ( M_ptr )
  {
    v13 = &M_ptr->std::enable_shared_from_this<common::minet::KcpConnMgrBase>;
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) >= v14 && v14 )
    {
      __asan_report_load4(v13);
    }
    else
    {
      if ( !LODWORD(v13->_M_weak_this._M_ptr) )
      {
LABEL_26:
        M_ptr = 0LL;
        goto LABEL_27;
      }
      if ( !*(_BYTE *)(((unsigned __int64)p_kcp_conn_mgr_wtr >> 3) + 0x7FFF8000) )
      {
        M_ptr = __closure->__kcp_conn_mgr_wtr._M_ptr;
        goto LABEL_27;
      }
    }
    __asan_report_load8(&__closure->__kcp_conn_mgr_wtr);
    goto LABEL_26;
  }
LABEL_27:
  *(_QWORD *)(v2 + 64) = M_ptr;
  if ( !M_ptr )
    goto LABEL_41;
  p_session_ptr = &__closure->__session_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__session_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_session_ptr);
LABEL_38:
    __asan_report_load4(p_session_ptr);
LABEL_39:
    __asan_report_load4(p_session_ptr);
LABEL_40:
    __asan_report_load4(p_session_ptr);
    goto LABEL_41;
  }
  v17 = __closure->__session_ptr._M_ptr;
  if ( !v17 )
  {
LABEL_41:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/kcp_conn_mgr_base.cpp",
      "operator()",
      404);
    common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)(v2 + 96), "dispatch event error");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    goto LABEL_62;
  }
  p_session_ptr = &__closure->__data;
  v18 = *(_BYTE *)(((unsigned __int64)&__closure->__data >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_38;
  p_session_ptr = &v17->token_;
  v19 = *(_BYTE *)(((unsigned __int64)&v17->token_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v17 + 28) & 7) + 3) >= v19 && v19 )
    goto LABEL_39;
  p_session_ptr = &v17->session_id_;
  v20 = *(_BYTE *)(((unsigned __int64)&v17->session_id_ >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
    goto LABEL_40;
  common::minet::KcpUtils::making_disconnect_packet[abi:cxx11](
    (std::string *)(v2 + 96),
    v17->session_id_,
    v17->token_,
    __closure->__data);
  v21 = (unsigned __int64)&__closure->__session_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__session_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v21);
    goto LABEL_49;
  }
  v21 = (unsigned __int64)__closure->__session_ptr._M_ptr;
  if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    __asan_report_load8(v21);
    goto LABEL_50;
  }
  v22 = *(_QWORD *)v21 + 24LL;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_load8(v22);
    goto LABEL_51;
  }
  p_data = &__closure->__data;
  v24 = *(_BYTE *)(((unsigned __int64)&__closure->__data >> 3) + 0x7FFF8000);
  if ( !v24 || v24 > 3 )
  {
    (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v21 + 24LL))(v21, __closure->__data);
    goto LABEL_52;
  }
LABEL_51:
  __asan_report_load4(p_data);
LABEL_52:
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    p_session_id = (void *)__closure;
    __asan_report_load8(__closure);
    goto LABEL_58;
  }
  p_session_id = &__closure->__session_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__session_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    __asan_report_load8(p_session_id);
    goto LABEL_59;
  }
  v26 = __closure->__session_ptr._M_ptr;
  p_session_id = &v26->session_id_;
  v27 = *(_BYTE *)(((unsigned __int64)&v26->session_id_ >> 3) + 0x7FFF8000);
  if ( !v27 || v27 > 3 )
  {
    common::minet::KcpConnMgrBase::delSession(__closure->__this, v26->session_id_);
    goto LABEL_60;
  }
LABEL_59:
  __asan_report_load4(p_session_id);
LABEL_60:
  common::minet::KcpConnMgrBase::send_udp_packet(
    *(common::minet::KcpConnMgrBase *const *)(v2 + 64),
    (const std::string *)(v2 + 96),
    &__closure->__end_point);
  v28 = *(_BYTE **)(v2 + 96);
  if ( v28 != (_BYTE *)(v2 + 112) )
    operator delete(v28);
LABEL_62:
  v29 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v2 + 72);
  if ( v29 )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v29);
  if ( v30 == (_BYTE *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 412: range 000000000CDE5B98-000000000CDE6699
void __fastcall common::minet::KcpConnMgrBase::hook_kcp_timer(common::minet::KcpConnMgrBase *const this)
{
  unsigned __int64 p_implementation; // rbx
  boost::asio::time_traits<boost::posix_time::ptime>::time_type *v2; // rsi
  unsigned __int64 p_kcp_timer; // r15
  unsigned __int64 v5; // r13
  _DWORD *v6; // r14
  std::atomic<common::minet::KcpConnMgrBase::Status> *p_state; // rdi
  char v8; // dl
  boost::posix_time::ptime v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  boost::asio::deadline_timer *v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // al
  char v17; // dl
  bool *v18; // rdi
  boost::asio::deadline_timer *v19; // rdi
  char v20; // al
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *v21; // rdi
  char v22; // al
  char v23; // al
  char v24; // al
  unsigned __int64 impl; // rdi
  __int64 (**v26)(void); // rax
  __int64 v27; // rax
  char *v28; // rdi
  unsigned __int64 v29; // rdi
  __int64 (**v30)(void); // rax
  __int64 (**v31)(void); // rdi
  char v32; // al
  __int64 (***v33)(void); // rdi
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  boost::asio::time_traits<boost::posix_time::ptime>::time_type *p_scheduler; // rdi
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  unsigned __int64 value; // [rsp+0h] [rbp-128h]
  boost::asio::time_traits<boost::posix_time::ptime>::time_type *time; // [rsp+8h] [rbp-120h]
  boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::service_type *service; // [rsp+18h] [rbp-110h]
  __m128i v44; // [rsp+30h] [rbp-F8h] BYREF
  common::minet::KcpConnMgrBase *v45; // [rsp+40h] [rbp-E8h]
  char v46[216]; // [rsp+50h] [rbp-D8h] BYREF

  v5 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_2(160LL);
    if ( v11 )
      v5 = v11;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 8 2 ex 64 16 2 ex 96 24 1 p";
  *(_QWORD *)(v5 + 16) = common::minet::KcpConnMgrBase::hook_kcp_timer;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  p_state = &this->state_;
  v8 = *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 96) & 7) + 3) >= v8 && v8 )
  {
    __asan_report_load4(p_state);
LABEL_14:
    v9.time_.time_count_.value_ = __asan_report_load8(p_kcp_timer);
    goto LABEL_15;
  }
  if ( this->state_._M_i == STATUS_STOPPED )
    goto LABEL_144;
  p_kcp_timer = (unsigned __int64)&this->kcp_timer_;
  *(_DWORD *)(v5 + 64) = 0;
  *(_BYTE *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_timer_ >> 3) + 0x7FFF8000) )
    goto LABEL_14;
  time = (boost::asio::time_traits<boost::posix_time::ptime>::time_type *)this->kcp_timer_.impl_.service_;
  p_implementation = (unsigned __int64)&this->kcp_timer_.impl_.implementation_;
  v9.time_.time_count_.value_ = boost::date_time::microsec_clock<boost::posix_time::ptime>::create_time(boost::date_time::c_time::gmtime).time_.time_count_.value_;
  *(_QWORD *)(v5 + 32) = 1000LL;
  if ( v9.time_.time_count_.value_ != 0x8000000000000000LL && v9.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL )
  {
    v10 = *(_QWORD *)(v5 + 32);
    if ( v10 != 0x8000000000000000LL && v10 <= 0x7FFFFFFFFFFFFFFDLL )
    {
      v9.time_.time_count_.value_ += v10;
      goto LABEL_30;
    }
  }
LABEL_15:
  v12 = *(_QWORD *)(v5 + 32);
  if ( v9.time_.time_count_.value_ != 0x8000000000000000LL
    && v9.time_.time_count_.value_ <= 0x7FFFFFFFFFFFFFFDLL
    && v12 != 0x8000000000000000LL
    && v12 <= 0x7FFFFFFFFFFFFFFDLL )
  {
    goto LABEL_19;
  }
  if ( v9.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFELL || v12 == 0x7FFFFFFFFFFFFFFELL )
  {
    v9.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v9.time_.time_count_.value_ == 0x7FFFFFFFFFFFFFFFLL && v12 == 0x8000000000000000LL
         || v9.time_.time_count_.value_ == 0x8000000000000000LL && v12 == 0x7FFFFFFFFFFFFFFFLL )
  {
    v9.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFELL;
  }
  else if ( v9.time_.time_count_.value_ != 0x8000000000000000LL && v9.time_.time_count_.value_ != 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v12 == 0x7FFFFFFFFFFFFFFFLL )
    {
      v9.time_.time_count_.value_ = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      if ( v12 != 0x8000000000000000LL )
      {
LABEL_19:
        v9.time_.time_count_.value_ += v12;
        goto LABEL_30;
      }
      v9.time_.time_count_.value_ = 0x8000000000000000LL;
    }
  }
LABEL_30:
  value = v9.time_.time_count_.value_;
  if ( *(char *)(((p_implementation + 8) >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_implementation + 8);
  }
  else if ( !*(_BYTE *)(p_implementation + 8) )
  {
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
    goto LABEL_33;
  }
  v18 = (bool *)&time[13];
  if ( *(_BYTE *)(((unsigned __int64)&time[13] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v18);
    goto LABEL_57;
  }
  v2 = time + 5;
  boost::asio::detail::epoll_reactor::cancel_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    (boost::asio::detail::epoll_reactor *const)time[13].time_.time_count_.value_,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> > *)&time[5],
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)(p_implementation + 16),
    0xFFFFFFFFFFFFFFFFLL);
  v18 = (bool *)(p_implementation + 8);
  if ( *(char *)(((p_implementation + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_57:
    __asan_report_store1(v18);
    goto LABEL_58;
  }
  *(_BYTE *)(p_implementation + 8) = 0;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_33:
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_58:
    v13 = (boost::asio::deadline_timer *)p_implementation;
    __asan_report_store8();
    goto LABEL_59;
  }
  *(_QWORD *)(p_kcp_timer + 8) = value;
  *(_QWORD *)(v5 + 64) = 0LL;
  *(_QWORD *)(v5 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v44.m128i_i64[0] = (__int64)common::minet::KcpConnMgrBase::handle_kcp_timer;
  v44.m128i_i64[1] = 0LL;
  v45 = this;
  v13 = &this->kcp_timer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->kcp_timer_ >> 3) + 0x7FFF8000) )
  {
LABEL_59:
    v15 = __asan_report_load8(v13);
    goto LABEL_60;
  }
  service = this->kcp_timer_.impl_.service_;
  value = (unsigned __int64)&this->kcp_timer_.impl_.implementation_executor_;
  time = &this->kcp_timer_.impl_.implementation_.expiry;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 96) = &v44;
  v14 = *(unsigned __int64 *)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                            + __readfsqword(0));
  if ( !v14 )
    goto LABEL_38;
  v15 = v14 + 8;
  if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    v14 = v15;
    __asan_report_load8(v15);
LABEL_61:
    __asan_report_load8(v14);
LABEL_62:
    __asan_report_load1(v14);
LABEL_63:
    __asan_report_store1(v14);
    goto LABEL_64;
  }
  v14 = *(_QWORD *)(v14 + 8);
LABEL_38:
  if ( !v14 )
    goto LABEL_65;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    goto LABEL_61;
  p_implementation = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_65;
  *(_QWORD *)v14 = 0LL;
  v14 = p_implementation;
  v16 = *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000);
  if ( v16 <= (char)(p_implementation & 7) && v16 )
    goto LABEL_62;
  if ( *(_BYTE *)p_implementation > 0x13u )
  {
    v14 = p_implementation + 80;
    v17 = *(_BYTE *)(((p_implementation + 80) >> 3) + 0x7FFF8000);
    if ( v17 > (char)((p_implementation + 80) & 7) || !v17 )
    {
      *(_BYTE *)v14 = *(_BYTE *)p_implementation;
      goto LABEL_68;
    }
    goto LABEL_63;
  }
LABEL_64:
  operator delete((void *)p_implementation);
LABEL_65:
  p_implementation = operator new(0x51uLL);
  v19 = (boost::asio::deadline_timer *)(p_implementation + 80);
  v20 = *(_BYTE *)(((p_implementation + 80) >> 3) + 0x7FFF8000);
  if ( v20 <= (char)((p_implementation + 80) & 7) && v20 )
  {
    __asan_report_store1(v19);
    goto LABEL_104;
  }
  LOBYTE(v19->impl_.service_) = 20;
LABEL_68:
  *(_QWORD *)(v5 + 104) = p_implementation;
  if ( *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)p_implementation;
    __asan_report_store8();
    goto LABEL_105;
  }
  *(_QWORD *)p_implementation = 0LL;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 8);
  if ( *(_BYTE *)(((p_implementation + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_105:
    __asan_report_store8();
LABEL_106:
    __asan_report_store4(v21);
LABEL_107:
    __asan_report_store4(v21);
LABEL_108:
    __asan_report_store1(v21);
    goto LABEL_109;
  }
  *(_QWORD *)(p_implementation + 8) = boost::asio::detail::wait_handler<std::_Bind<void (common::minet::KcpConnMgrBase::*)(void) ()(common::minet::KcpConnMgrBase*)>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 16);
  v22 = *(_BYTE *)(((p_implementation + 16) >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_106;
  *(_DWORD *)(p_implementation + 16) = 0;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 24);
  v23 = *(_BYTE *)(((p_implementation + 24) >> 3) + 0x7FFF8000);
  if ( v23 && v23 <= 3 )
    goto LABEL_107;
  *(_DWORD *)(p_implementation + 24) = 0;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 28);
  v24 = *(_BYTE *)(((p_implementation + 28) >> 3) + 0x7FFF8000);
  if ( v24 <= (char)((p_implementation + 28) & 7) && v24 )
    goto LABEL_108;
  *(_BYTE *)(p_implementation + 28) = 0;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 32);
  if ( *(_BYTE *)(((p_implementation + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_109:
    __asan_report_store8();
    goto LABEL_110;
  }
  *(_QWORD *)(p_implementation + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
  v21 = (boost::asio::detail::io_object_impl<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime> >,boost::asio::executor>::implementation_type *)(p_implementation + 40);
  if ( *(_WORD *)(((p_implementation + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_110:
    __asan_report_store16(v21, v2);
    goto LABEL_111;
  }
  *(__m128i *)(p_implementation + 40) = _mm_load_si128(&v44);
  if ( *(_BYTE *)(((p_implementation + 56) >> 3) + 0x7FFF8000) )
  {
LABEL_111:
    __asan_report_store8();
    goto LABEL_112;
  }
  *(_QWORD *)(p_implementation + 56) = v45;
  p_kcp_timer = p_implementation + 64;
  if ( *(_BYTE *)((value >> 3) + 0x7FFF8000) )
  {
LABEL_112:
    impl = value;
    __asan_report_load8(value);
LABEL_113:
    v26 = (__int64 (**)(void))__asan_report_load8(impl);
    goto LABEL_114;
  }
  impl = (unsigned __int64)this->kcp_timer_.impl_.implementation_executor_.executor_.impl_;
  if ( !impl )
    goto LABEL_84;
  if ( *(_BYTE *)((impl >> 3) + 0x7FFF8000) )
    goto LABEL_113;
  v26 = *(__int64 (***)(void))impl;
  if ( *(_BYTE *)((*(_QWORD *)impl >> 3) + 0x7FFF8000LL) )
  {
LABEL_114:
    v27 = __asan_report_load8(v26);
    goto LABEL_115;
  }
  impl = (*v26)();
LABEL_84:
  v27 = p_implementation + 64;
  if ( *(_BYTE *)(((p_implementation + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    v28 = (char *)v27;
    __asan_report_store8();
    goto LABEL_116;
  }
  *(_QWORD *)(p_implementation + 64) = impl;
  v28 = (char *)(value + 8);
  if ( *(char *)(((value + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_116:
    __asan_report_load1(v28);
    goto LABEL_117;
  }
  v28 = (char *)(p_implementation + 72);
  if ( *(char *)(((p_implementation + 72) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_117:
    __asan_report_store1(v28);
    goto LABEL_118;
  }
  *(_BYTE *)(p_implementation + 72) = *(_BYTE *)(value + 8);
  if ( *(_BYTE *)((p_kcp_timer >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    v29 = p_kcp_timer;
    __asan_report_load8(p_kcp_timer);
LABEL_119:
    v30 = (__int64 (**)(void))__asan_report_load8(v29);
    goto LABEL_120;
  }
  v29 = *(_QWORD *)p_kcp_timer;
  if ( !*(_QWORD *)p_kcp_timer )
    goto LABEL_92;
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    goto LABEL_119;
  v30 = *(__int64 (***)(void))v29;
  if ( *(_BYTE *)((*(_QWORD *)v29 >> 3) + 0x7FFF8000LL) )
  {
LABEL_120:
    v31 = v30;
    __asan_report_load8(v30);
    goto LABEL_121;
  }
  v29 = (*v30)();
LABEL_92:
  *(_QWORD *)(v5 + 64) = v29;
  v31 = (__int64 (**)(void))(p_implementation + 72);
  if ( *(char *)(((p_implementation + 72) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_121:
    __asan_report_load1(v31);
    goto LABEL_122;
  }
  v32 = *(_BYTE *)(p_implementation + 72);
  *(_BYTE *)(v5 + 72) = v32;
  if ( v32 )
    goto LABEL_94;
LABEL_122:
  v37 = *(_QWORD *)(v5 + 64);
  if ( !v37 )
  {
    *(_QWORD *)(v5 + 32) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(0LL);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v5 + 32));
  }
  if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v37);
    goto LABEL_128;
  }
  v38 = *(_QWORD *)v37 + 24LL;
  if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
  {
LABEL_128:
    v33 = (__int64 (***)(void))v38;
    __asan_report_load8(v38);
    goto LABEL_129;
  }
  (*(void (**)(void))(*(_QWORD *)v37 + 24LL))();
LABEL_94:
  v33 = (__int64 (***)(void))(p_kcp_timer + 8);
  if ( *(char *)(((p_kcp_timer + 8) >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_129:
    __asan_report_load1(v33);
    goto LABEL_130;
  }
  if ( *(_BYTE *)(p_kcp_timer + 8) )
    goto LABEL_96;
LABEL_130:
  if ( *(_BYTE *)((p_kcp_timer >> 3) + 0x7FFF8000) )
  {
    v39 = p_kcp_timer;
    __asan_report_load8(p_kcp_timer);
LABEL_136:
    *(_QWORD *)(v5 + 32) = &`vtable for'boost::asio::bad_executor + 2;
    __asan_handle_no_return(v39);
    boost::throw_exception<boost::asio::bad_executor>((const boost::asio::bad_executor *)(v5 + 32));
  }
  v39 = *(_QWORD *)p_kcp_timer;
  if ( !*(_QWORD *)p_kcp_timer )
    goto LABEL_136;
  if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v39);
    goto LABEL_138;
  }
  v40 = *(_QWORD *)v39 + 24LL;
  if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
  {
LABEL_138:
    v34 = v40;
    __asan_report_load8(v40);
LABEL_139:
    __asan_report_load8(v34);
    goto LABEL_140;
  }
  (*(void (**)(void))(*(_QWORD *)v39 + 24LL))();
LABEL_96:
  v34 = *(_QWORD *)(v5 + 64);
  if ( !v34 )
    goto LABEL_100;
  if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
    goto LABEL_139;
  v35 = *(_QWORD *)v34 + 8LL;
  if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
  {
LABEL_140:
    p_scheduler = (boost::asio::time_traits<boost::posix_time::ptime>::time_type *)v35;
    __asan_report_load8(v35);
    goto LABEL_141;
  }
  (*(void (**)(void))(*(_QWORD *)v34 + 8LL))();
LABEL_100:
  *(_QWORD *)(v5 + 112) = p_implementation;
  p_scheduler = time + 1;
  if ( *(char *)(((unsigned __int64)&time[1] >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_141:
    __asan_report_store1(p_scheduler);
    goto LABEL_142;
  }
  LOBYTE(time[1].time_.time_count_.value_) = 1;
  p_scheduler = (boost::asio::time_traits<boost::posix_time::ptime>::time_type *)&service->scheduler_;
  if ( *(_BYTE *)(((unsigned __int64)&service->scheduler_ >> 3) + 0x7FFF8000) )
  {
LABEL_142:
    __asan_report_load8(p_scheduler);
    goto LABEL_143;
  }
  boost::asio::detail::epoll_reactor::schedule_timer<boost::asio::time_traits<boost::posix_time::ptime>>(
    service->scheduler_,
    &service->timer_queue_,
    time,
    (boost::asio::detail::timer_queue<boost::asio::time_traits<boost::posix_time::ptime> >::per_timer_data *)&time[2],
    *(boost::asio::detail::wait_op **)(v5 + 112));
LABEL_143:
  *(_QWORD *)(v5 + 112) = 0LL;
  *(_QWORD *)(v5 + 104) = 0LL;
LABEL_144:
  if ( v46 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 420: range 000000000CDE68B2-000000000CDE724E
void __fastcall common::minet::KcpConnMgrBase::handle_kcp_timer(common::minet::KcpConnMgrBase *const this)
{
  common::minet::KcpConnMgrBase *M_left; // rbp
  common::minet::KcpConnMgrBase *v2; // r13
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> >,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > > >::const_iterator v3; // r14
  double v4; // xmm1_8
  common::minet::KcpConnMgrBase *v6; // rbx
  uint64_t NowMs; // r15
  std::_Rb_tree_node_base::_Base_ptr *p_M_left; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // cl
  char v12; // al
  uint32_t *p_wait_snd_max; // rdi
  char v14; // al
  char v15; // dl
  char isWaitSndMax; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v17; // rdi
  volatile signed __int32 *v18; // rdx
  char v19; // cl
  common::minet::KcpSession *v20; // rdi
  char v21; // al
  uint32_t WaitSnd; // r14d
  common::milog::MilogStringStream *ostr; // r14
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  common::milog::MilogStringStream *v26; // r14
  char *v27; // rdi
  size_t v28; // r13
  unsigned int Rtt; // eax
  common::milog::MilogStringStream *v30; // r14
  common::milog::MilogStringStream *v31; // rdi
  char *v32; // rdi
  size_t v33; // r13
  unsigned int PktLoss; // eax
  common::milog::MilogStringStream *v35; // r14
  common::milog::MilogStringStream *v36; // rdi
  char *v37; // rdi
  size_t v38; // r13
  unsigned int RxBandwidth; // eax
  common::milog::MilogStringStream *v40; // r14
  common::milog::MilogStringStream *v41; // rdi
  char *v42; // rdi
  size_t v43; // r13
  unsigned int TxBandwidth; // eax
  common::milog::MilogStringStream *v45; // r14
  common::milog::MilogStringStream *v46; // rdi
  char *v47; // rdi
  size_t v48; // r13
  unsigned int v49; // eax
  common::milog::MilogStringStream *v50; // r14
  common::milog::MilogStringStream *v51; // rdi
  char *v52; // rdi
  size_t v53; // r13
  unsigned int WaitRcv; // eax
  void *p_connect_limit_per_second_per_ip; // rdi
  bool v56; // zf
  std::atomic<unsigned int> *p_max_conn_num; // rdi
  std::atomic<unsigned int> *v58; // rax
  struct _Unwind_Exception *v59; // rbx
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v60; // rdi
  size_t n; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v63; // [rsp+20h] [rbp-A8h]
  common::milog::MiLogStream v64; // [rsp+30h] [rbp-98h] BYREF
  char v65[120]; // [rsp+50h] [rbp-78h] BYREF

  v62 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v62 = v9;
  }
  v6 = (common::minet::KcpConnMgrBase *)(v62 + 64);
  *(_QWORD *)v62 = 1102416563LL;
  *(_QWORD *)(v62 + 8) = "1 32 16 15 session_ptr:427";
  *(_QWORD *)(v62 + 16) = common::minet::KcpConnMgrBase::handle_kcp_timer;
  v63 = v62 >> 3;
  *(_DWORD *)(v63 + 2147450880) = -235802127;
  *(_DWORD *)(v63 + 2147450884) = -202178560;
  common::minet::KcpConnMgrBase::hook_kcp_timer(this);
  NowMs = common::tools::TimeUtils::getNowMs();
  p_M_left = &this->session_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->session_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_left);
    goto LABEL_7;
  }
  M_left = (common::minet::KcpConnMgrBase *)this->session_map_._M_t._M_impl._M_header._M_left;
  while ( 1 )
  {
    v2 = M_left;
    if ( &this->session_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)M_left )
      break;
    v3._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession> > >::_Base_ptr)M_left;
    M_left = (common::minet::KcpConnMgrBase *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)M_left);
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)&v2->mtu_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->mtu_ >> 3) + 0x7FFF8000) )
    {
LABEL_7:
      __asan_report_load8(p_M_left);
LABEL_8:
      __asan_report_load8(p_M_left);
LABEL_9:
      v10 = __asan_report_store4(p_M_left);
LABEL_10:
      v11 = *(_BYTE *)(((unsigned __int64)(v10 + 8) >> 3) + 0x7FFF8000);
      if ( (char)(((v10 + 8) & 7) + 3) >= v11 && v11 )
      {
        __asan_report_load4(v10 + 8);
LABEL_14:
        common::milog::MiLogStream::MiLogStream(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "src/kcp_conn_mgr_base.cpp",
          "handle_kcp_timer",
          430);
        v12 = *(_BYTE *)(((unsigned __int64)&v2->send_buf_len_ >> 3) + 0x7FFF8000);
        if ( v12 && v12 <= 3 )
          __asan_report_load4(&v2->send_buf_len_);
        else
          common::milog::MiLogStream::operator()(&v64, "session_ptr is nullptr, session_id=%u", v2->send_buf_len_);
        common::milog::MiLogStream::~MiLogStream(&v64);
        std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>,std::_Select1st<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<common::minet::KcpSession>>>>::_M_erase_aux(
          &this->session_map_._M_t,
          v3);
        goto LABEL_27;
      }
      ++*(_DWORD *)(v10 + 8);
      goto LABEL_37;
    }
    *(_QWORD *)(v62 + 32) = *(_QWORD *)&v2->mtu_;
    p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)&v2->kcp_log_mask_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->kcp_log_mask_ >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    v10 = *(_QWORD *)&v2->kcp_log_mask_;
    *(_QWORD *)(v62 + 40) = v10;
    if ( v10 )
    {
      v18 = (volatile signed __int32 *)(v10 + 8);
      if ( !&_pthread_key_create )
        goto LABEL_10;
      p_M_left = (std::_Rb_tree_node_base::_Base_ptr *)(v10 + 8);
      v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v18 & 7) + 3) >= v19 && v19 )
        goto LABEL_9;
      _InterlockedAdd(v18, 1u);
    }
LABEL_37:
    v20 = *(common::minet::KcpSession **)(v62 + 32);
    if ( !v20 )
      goto LABEL_14;
    v21 = *(_BYTE *)(((unsigned __int64)&v20->session_id_ >> 3) + 0x7FFF8000);
    if ( v21 && v21 <= 3 )
    {
      __asan_report_load4(&v20->session_id_);
    }
    else
    {
      LODWORD(v2) = v20->session_id_;
      common::minet::KcpSession::update_kcp(v20, NowMs);
    }
    common::minet::KcpSession::flush(*(common::minet::KcpSession *const *)(v62 + 32));
    common::minet::KcpSession::recv_from_kcp(*(common::minet::KcpSession *const *)(v62 + 32));
    if ( common::minet::KcpSession::is_timeout(*(const common::minet::KcpSession *const *)(v62 + 32)) )
    {
      common::minet::KcpConnMgrBase::disconnect(this, (uint32_t)v2, 0);
      common::milog::MiLogStream::MiLogStream(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/kcp_conn_mgr_base.cpp",
        "handle_kcp_timer",
        444);
      common::milog::MiLogStream::operator()(&v64, "disconnect session for timeout, session_id=%u", (unsigned int)v2);
      common::milog::MiLogStream::~MiLogStream(&v64);
LABEL_27:
      v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v62 + 40);
      if ( v17 )
        goto LABEL_28;
    }
    else
    {
      p_wait_snd_max = &this->wait_snd_max_;
      v14 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_max_ >> 3) + 0x7FFF8000);
      if ( v14 && v14 <= 3 )
      {
        __asan_report_load4(p_wait_snd_max);
      }
      else
      {
        p_wait_snd_max = &this->wait_snd_check_interval_;
        v15 = *(_BYTE *)(((unsigned __int64)&this->wait_snd_check_interval_ >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)this + 68) & 7) + 3) < v15 || !v15 )
        {
          isWaitSndMax = common::minet::KcpSession::isWaitSndMax(
                           *(common::minet::KcpSession *const *)(v62 + 32),
                           NowMs,
                           this->wait_snd_check_interval_,
                           this->wait_snd_max_);
          goto LABEL_43;
        }
      }
      isWaitSndMax = __asan_report_load4(p_wait_snd_max);
LABEL_43:
      if ( isWaitSndMax )
      {
        WaitSnd = common::minet::KcpSession::getWaitSnd(*(const common::minet::KcpSession *const *)(v62 + 32));
        common::minet::KcpConnMgrBase::disconnect(this, (uint32_t)v2, 0x14u);
        common::milog::MiLogStream::MiLogStream(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/kcp_conn_mgr_base.cpp",
          "handle_kcp_timer",
          454);
        common::milog::MiLogStream::operator()(
          &v64,
          "disconnect session for wait_snd max, session_id=%u, wait_snd:%u",
          (unsigned int)v2,
          WaitSnd);
        common::milog::MiLogStream::~MiLogStream(&v64);
        goto LABEL_27;
      }
      if ( common::minet::KcpSession::getLastCheckRttMs(*(const common::minet::KcpSession *const *)(v62 + 32)) + 5000 <= NowMs )
      {
        common::minet::KcpSession::setLastCheckRttMs(*(common::minet::KcpSession *const *)(v62 + 32), NowMs);
        common::milog::MiLogStream::MiLogStream(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/kcp_conn_mgr_base.cpp",
          "handle_kcp_timer",
          462);
        ostr = v64.ostr_;
        p_cur = v64.ostr_;
        if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(v64.ostr_);
        }
        else
        {
          p_cur = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
          if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
          {
            cur = v64.ostr_->buffer_.cur_;
            n = (size_t)&v64.ostr_->buffer_.data_[-(int)cur + 0x4000];
            if ( n > 0xA )
              n = 11LL;
            memcpy(cur, "session_id:", n);
            ostr->buffer_.cur_ += n;
            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, (unsigned int)v2);
            v26 = v64.ostr_;
            p_cur = v64.ostr_;
            if ( !*(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
            {
              p_cur = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
              if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
              {
                v27 = v64.ostr_->buffer_.cur_;
                v28 = (size_t)&v64.ostr_->buffer_.data_[-(int)v27 + 0x4000];
                if ( v28 > 9 )
                  v28 = 10LL;
                memcpy(v27, ", cur_rtt:", v28);
                v26->buffer_.cur_ += v28;
                Rtt = common::minet::KcpSession::getRtt(*(const common::minet::KcpSession *const *)(v62 + 32));
LABEL_61:
                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, Rtt);
                v30 = v64.ostr_;
                v31 = v64.ostr_;
                if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load8(v64.ostr_);
                }
                else
                {
                  v31 = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
                  if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                  {
                    v32 = v64.ostr_->buffer_.cur_;
                    v33 = (size_t)&v64.ostr_->buffer_.data_[-(int)v32 + 0x4000];
                    if ( v33 > 0xC )
                      v33 = 13LL;
                    memcpy(v32, "ms, pkt_loss:", v33);
                    v30->buffer_.cur_ += v33;
                    PktLoss = common::minet::KcpSession::getPktLoss(*(const common::minet::KcpSession *const *)(v62 + 32));
LABEL_68:
                    common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v64.ostr_, PktLoss);
                    v35 = v64.ostr_;
                    v36 = v64.ostr_;
                    if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load8(v64.ostr_);
                    }
                    else
                    {
                      v36 = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
                      if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                      {
                        v37 = v64.ostr_->buffer_.cur_;
                        v38 = (size_t)&v64.ostr_->buffer_.data_[-(int)v37 + 0x4000];
                        if ( v38 > 0xE )
                          v38 = 15LL;
                        memcpy(v37, ", rx_bandwidth:", v38);
                        v35->buffer_.cur_ += v38;
                        RxBandwidth = common::minet::KcpSession::getRxBandwidth(*(const common::minet::KcpSession *const *)(v62 + 32));
LABEL_75:
                        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                          v64.ostr_,
                          RxBandwidth);
                        v40 = v64.ostr_;
                        v41 = v64.ostr_;
                        if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load8(v64.ostr_);
                        }
                        else
                        {
                          v41 = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                          {
                            v42 = v64.ostr_->buffer_.cur_;
                            v43 = (size_t)&v64.ostr_->buffer_.data_[-(int)v42 + 0x4000];
                            if ( v43 > 0xF )
                              v43 = 16LL;
                            memcpy(v42, ", tx_bandwidth: ", v43);
                            v40->buffer_.cur_ += v43;
                            TxBandwidth = common::minet::KcpSession::getTxBandwidth(*(const common::minet::KcpSession *const *)(v62 + 32));
LABEL_82:
                            common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                              v64.ostr_,
                              TxBandwidth);
                            v45 = v64.ostr_;
                            v46 = v64.ostr_;
                            if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_load8(v64.ostr_);
                            }
                            else
                            {
                              v46 = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
                              if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                              {
                                v47 = v64.ostr_->buffer_.cur_;
                                v48 = (size_t)&v64.ostr_->buffer_.data_[-(int)v47 + 0x4000];
                                if ( v48 > 0xA )
                                  v48 = 11LL;
                                memcpy(v47, ", wait_snd:", v48);
                                v45->buffer_.cur_ += v48;
                                v49 = common::minet::KcpSession::getWaitSnd(*(const common::minet::KcpSession *const *)(v62 + 32));
LABEL_89:
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  v64.ostr_,
                                  v49);
                                v50 = v64.ostr_;
                                v51 = v64.ostr_;
                                if ( *(_BYTE *)(((unsigned __int64)v64.ostr_ >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_load8(v64.ostr_);
                                }
                                else
                                {
                                  v51 = (common::milog::MilogStringStream *)&v64.ostr_->buffer_.cur_;
                                  if ( !*(_BYTE *)(((unsigned __int64)&v64.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
                                  {
                                    v52 = v64.ostr_->buffer_.cur_;
                                    v53 = (size_t)&v64.ostr_->buffer_.data_[-(int)v52 + 0x4000];
                                    if ( v53 > 0xA )
                                      v53 = 11LL;
                                    memcpy(v52, ", wait_rcv:", v53);
                                    v50->buffer_.cur_ += v53;
                                    WaitRcv = common::minet::KcpSession::getWaitRcv(*(const common::minet::KcpSession *const *)(v62 + 32));
                                    goto LABEL_96;
                                  }
                                }
                                WaitRcv = __asan_report_load8(v51);
LABEL_96:
                                common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
                                  v64.ostr_,
                                  WaitRcv);
                                common::milog::MiLogStream::~MiLogStream(&v64);
                                goto LABEL_46;
                              }
                            }
                            v49 = __asan_report_load8(v46);
                            goto LABEL_89;
                          }
                        }
                        TxBandwidth = __asan_report_load8(v41);
                        goto LABEL_82;
                      }
                    }
                    RxBandwidth = __asan_report_load8(v36);
                    goto LABEL_75;
                  }
                }
                PktLoss = __asan_report_load8(v31);
                goto LABEL_68;
              }
LABEL_60:
              Rtt = __asan_report_load8(p_cur);
              goto LABEL_61;
            }
LABEL_59:
            __asan_report_load8(p_cur);
            goto LABEL_60;
          }
        }
        __asan_report_load8(p_cur);
        goto LABEL_59;
      }
LABEL_46:
      v17 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v62 + 40);
      if ( v17 )
LABEL_28:
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v17);
    }
  }
  p_connect_limit_per_second_per_ip = &this->connect_limit_per_second_per_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_limit_per_second_per_ip_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_connect_limit_per_second_per_ip);
    goto LABEL_101;
  }
  n = *(size_t *)&this->connect_limit_per_second_per_ip_._M_i;
  p_connect_limit_per_second_per_ip = &this->rate_limiter_map_._M_t._M_impl._M_header._M_left;
  if ( *(_BYTE *)(((unsigned __int64)&this->rate_limiter_map_._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(p_connect_limit_per_second_per_ip);
    goto LABEL_102;
  }
  v6 = (common::minet::KcpConnMgrBase *)this->rate_limiter_map_._M_t._M_impl._M_header._M_left;
  while ( 1 )
  {
    v2 = v6;
    if ( v6 == (common::minet::KcpConnMgrBase *)&this->rate_limiter_map_._M_t._M_impl.std::_Rb_tree_header )
      break;
    M_left = v6;
    v6 = (common::minet::KcpConnMgrBase *)std::_Rb_tree_increment((std::_Rb_tree_node_base *)v6);
    v4 = *(double *)&n;
    v56 = *(double *)&n == 0.0;
LABEL_102:
    if ( v56 )
      goto LABEL_103;
    p_max_conn_num = &v2->max_conn_num_;
    if ( *(_BYTE *)(((unsigned __int64)&v2->max_conn_num_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_max_conn_num);
LABEL_112:
      __asan_report_load8(p_max_conn_num);
LABEL_113:
      v59 = (struct _Unwind_Exception *)__asan_report_load8(p_max_conn_num);
      common::milog::MiLogStream::~MiLogStream(&v64);
      v60 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v62 + 40);
      if ( v60 )
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v60);
      __asan_handle_no_return(v60);
      _Unwind_Resume(v59);
    }
    v58 = *(std::atomic<unsigned int> **)&v2->max_conn_num_._M_i;
    p_max_conn_num = v58;
    if ( *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) )
      goto LABEL_112;
    if ( *(_QWORD *)&v58->_M_i + 1000LL < NowMs )
    {
LABEL_103:
      std::_Rb_tree<std::string,std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>,std::_Select1st<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<common::minet::KcpConnRateLimiter>>>>::_M_erase_aux(
        &this->rate_limiter_map_._M_t,
        (std::_Rb_tree<std::string,std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> >,std::_Select1st<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::shared_ptr<common::minet::KcpConnRateLimiter> > > >::const_iterator)M_left);
    }
    else
    {
      p_max_conn_num = v58 + 2;
      if ( *(_BYTE *)(((unsigned __int64)&v58[2] >> 3) + 0x7FFF8000) )
        goto LABEL_113;
      common::tools::RateLimiter::setRate(*(common::tools::RateLimiter *const *)&v58[2]._M_i, v4);
    }
  }
  if ( v65 == (char *)v62 )
  {
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v62 = 1172321806LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 486: range 000000000CDDD376-000000000CDDDCE3
void __fastcall common::minet::KcpConnMgrBase::send_udp_packet(
        common::minet::KcpConnMgrBase *const this,
        const std::string *msg,
        const boost::asio::ip::udp::endpoint *endpoint)
{
  unsigned __int64 v4; // r14
  _DWORD *v5; // r12
  boost::asio::ip::udp::socket *p_udp_socket; // rdx
  std::string::size_type M_string_length; // rax
  std::string::pointer M_p; // rcx
  unsigned __int64 p_implementation; // rdi
  char v10; // cl
  char v11; // cl
  char v12; // al
  int socket; // r15d
  unsigned __int64 v14; // rbp
  char v15; // dl
  ssize_t v16; // rax
  __int64 v17; // rax
  char v18; // cl
  int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  char v22; // dl
  int v23; // eax
  __int64 v24; // rax
  char v25; // cl
  bool v26; // zf
  bool v27; // sf
  char v28; // of
  const boost::asio::ip::udp::endpoint *endpointa; // [rsp+10h] [rbp-1F8h]
  char v30; // [rsp+1Fh] [rbp-1E9h]
  int v31; // [rsp+20h] [rbp-1E8h]
  __int64 v32; // [rsp+28h] [rbp-1E0h]
  __int64 v33; // [rsp+38h] [rbp-1D0h]
  __int64 v34; // [rsp+40h] [rbp-1C8h]
  __int64 v35; // [rsp+48h] [rbp-1C0h]
  __int64 v36; // [rsp+50h] [rbp-1B8h]
  __int64 v37; // [rsp+58h] [rbp-1B0h]
  char v38[312]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v17 = __asan_stack_malloc_2(256LL);
    if ( v17 )
      v4 = v17;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 3 fds 64 16 2 ec 96 24 4 bufs 160 56 3 msg";
  *(_QWORD *)(v4 + 16) = common::minet::KcpConnMgrBase::send_udp_packet;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  p_udp_socket = &this->udp_socket_;
  if ( *(_BYTE *)(((unsigned __int64)&msg->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&msg->_M_string_length);
    goto LABEL_19;
  }
  M_string_length = msg->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)msg >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(msg);
LABEL_20:
    p_implementation = (unsigned __int64)endpoint;
    __asan_report_load2(endpoint);
    goto LABEL_21;
  }
  M_p = msg->_M_dataplus._M_p;
  *(_DWORD *)(v4 + 64) = 0;
  *(_BYTE *)(v4 + 68) = 0;
  *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
  p_implementation = (unsigned __int64)&this->udp_socket_.impl_.implementation_;
  *(_QWORD *)(v4 + 96) = M_p;
  *(_QWORD *)(v4 + 104) = M_string_length;
  *(_QWORD *)(v4 + 112) = M_string_length;
  v10 = *(_BYTE *)(((unsigned __int64)endpoint >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)endpoint & 7) + 1) >= v10 && v10 )
    goto LABEL_20;
  if ( endpoint->impl_.data_.base.sa_family == 2 )
  {
LABEL_21:
    v31 = 16;
    goto LABEL_8;
  }
  v31 = 28;
LABEL_8:
  endpointa = endpoint;
  v11 = *(_BYTE *)(((p_implementation + 4) >> 3) + 0x7FFF8000);
  if ( v11 <= (char)((p_implementation + 4) & 7) && v11 )
  {
    p_implementation += 4LL;
    __asan_report_load1(p_implementation);
LABEL_23:
    __asan_report_load4(p_implementation);
    goto LABEL_24;
  }
  v30 = *(_BYTE *)(p_implementation + 4);
  v12 = *(_BYTE *)((p_implementation >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_23;
  socket = p_udp_socket->impl_.implementation_.socket_;
  if ( socket != -1 )
  {
    while ( 1 )
    {
      v14 = (unsigned __int64)__errno_location();
      v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
      if ( (char)((v14 & 7) + 3) >= v15 && v15 )
      {
        v16 = __asan_report_store4(v14);
      }
      else
      {
        *(_DWORD *)v14 = 0;
        *(_QWORD *)(v4 + 168) = 0LL;
        *(_QWORD *)(v4 + 192) = 0LL;
        *(_QWORD *)(v4 + 200) = 0LL;
        *(_QWORD *)(v4 + 208) = 0LL;
        *(_QWORD *)(v4 + 160) = endpointa;
        *(_DWORD *)(v4 + 168) = v31;
        *(_QWORD *)(v4 + 176) = v4 + 96;
        *(_QWORD *)(v4 + 184) = 1LL;
        v16 = sendmsg(socket, (const struct msghdr *)(v4 + 160), 0x4000);
      }
      p_implementation = v14;
      v18 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
      if ( (char)((v14 & 7) + 3) >= v18 && v18 )
      {
        v19 = __asan_report_load4(v14);
      }
      else
      {
        *(_QWORD *)(v4 + 64) = ((unsigned __int64)(*(_DWORD *)v14 != 0) << 32) | *(unsigned int *)v14 | v32 & 0xFFFFFF0000000000LL;
        *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
        if ( v16 >= 0 )
          *(_QWORD *)(v4 + 64) = v33 & 0xFFFFFF0000000000LL;
        if ( v16 >= 0 || (v30 & 1) != 0 )
          goto LABEL_34;
        v19 = *(_DWORD *)(v4 + 64);
        if ( v19 != 11 )
          goto LABEL_33;
      }
      v20 = *(_QWORD *)(v4 + 72);
      p_implementation = v20 + 8;
      if ( !*(_BYTE *)(((unsigned __int64)(v20 + 8) >> 3) + 0x7FFF8000) )
      {
        if ( *(_QWORD *)(v20 + 8) == 0x8FAFD21E25C5E09BLL )
          goto LABEL_40;
LABEL_33:
        if ( v19 != 11 )
          goto LABEL_34;
        goto LABEL_44;
      }
      __asan_report_load8(p_implementation);
LABEL_44:
      v24 = *(_QWORD *)(v4 + 72);
      p_implementation = v24 + 8;
      if ( *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_implementation);
        *(_QWORD *)(v4 + 64) = v37 & 0xFFFFFF0000000000LL | 0x100000009LL;
        *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
        v23 = socket;
        goto LABEL_53;
      }
      if ( *(_QWORD *)(v24 + 8) != 0x8FAFD21E25C5E09BLL )
        goto LABEL_34;
LABEL_40:
      *(_DWORD *)(v4 + 32) = socket;
      *(_WORD *)(v4 + 36) = 4;
      *(_WORD *)(v4 + 38) = 0;
      v21 = (unsigned __int64)__errno_location();
      v22 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
      if ( (char)((v21 & 7) + 3) >= v22 && v22 )
      {
        v23 = __asan_report_store4(v21);
      }
      else
      {
        *(_DWORD *)v21 = 0;
        v23 = poll((struct pollfd *)(v4 + 32), 1uLL, -1);
      }
      p_implementation = v21;
      v25 = *(_BYTE *)((v21 >> 3) + 0x7FFF8000);
      if ( (char)((v21 & 7) + 3) >= v25 && v25 )
      {
        v23 = __asan_report_load4(v21);
LABEL_56:
        if ( !(v27 ^ v28 | v26) )
        {
          *(_QWORD *)(v4 + 64) = v36 & 0xFFFFFF0000000000LL;
          *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
        }
        goto LABEL_53;
      }
      *(_QWORD *)(v4 + 64) = ((unsigned __int64)(*(_DWORD *)v21 != 0) << 32) | *(unsigned int *)v21 | v34 & 0xFFFFFF0000000000LL;
      *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
      v28 = 0;
      v26 = v23 == 0;
      v27 = v23 < 0;
      if ( v23 )
        goto LABEL_56;
      *(_QWORD *)(v4 + 64) = v35 & 0xFFFFFF0000000000LL;
LABEL_53:
      if ( v23 < 0 )
        goto LABEL_34;
    }
  }
LABEL_24:
  *(_QWORD *)(v4 + 64) = 0x100000009LL;
  *(_QWORD *)(v4 + 72) = &boost::system::detail::cat_holder<void>::system_category_instance;
LABEL_34:
  if ( *(_DWORD *)(v4 + 64) )
  {
    __asan_handle_no_return(p_implementation);
    boost::asio::detail::do_throw_error((const boost::system::error_code *)(v4 + 64), "send_to");
  }
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 497: range 000000000CDE7A3A-000000000CDE7A51
void __cdecl GLOBAL__sub_I_kcp_conn_mgr_base_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 497: range 000000000CDDB886-000000000CDDBAD8
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  _BYTE *v2; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/kcp_conn_mgr_base.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_[0] = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_[0] )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_[0] = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id )
    {
      `guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
        &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] )
    {
      `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_[0] = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
        &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
        &_dso_handle);
    }
    if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
    {
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) )
      {
        v2 = (_BYTE *)__asan_report_store8();
        goto LABEL_25;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
    if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] )
    {
LABEL_18:
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id[0] = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::udp>>::id,
          &_dso_handle);
      }
      goto LABEL_3;
    }
LABEL_25:
    *v2 = 1;
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
      &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
      &_dso_handle);
    goto LABEL_18;
  }
};

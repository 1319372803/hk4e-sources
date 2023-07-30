// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/include/kcp_conn_mgr.hpp

// Line 9: range 000000000C890392-000000000C890550
common::minet::KcpConnMgr<PlayerSession> *__fastcall common::minet::KcpConnMgr<PlayerSession>::createSession(
        common::minet::KcpConnMgr<PlayerSession> *const this,
        common::minet::KcpConnMgrBasePtr *p_kcp_conn_mgr_ptr,
        unsigned int *session_id,
        uint32_t token,
        const boost::asio::ip::udp::endpoint *udp_remote_endpoint,
        unsigned int *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::minet::KcpSession *v9; // rax
  int v12; // [rsp+10h] [rbp-B0h]
  std::shared_ptr<common::minet::KcpConnMgrBase> v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v12 = (int)udp_remote_endpoint;
  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 12 session_id:9 64 4 7 token:9";
  *(_QWORD *)(v6 + 16) = common::minet::KcpConnMgr<PlayerSession>::createSession;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 48) = token;
  *(_DWORD *)(v6 + 64) = v12;
  common::tools::perf::make_shared<PlayerSession,std::shared_ptr<common::minet::KcpConnMgrBase> &,unsigned int &,unsigned int &>(
    &v15,
    session_id,
    (unsigned int *)(v6 + 48),
    (std::shared_ptr<common::minet::KcpConnMgrBase> *)(v6 + 64),
    (unsigned int *)&udp_remote_endpoint->impl_.data_.base.sa_family,
    a6);
  std::shared_ptr<common::minet::KcpSession>::shared_ptr<PlayerSession,void>(
    (std::shared_ptr<common::minet::KcpSession> *const)this,
    (std::shared_ptr<PlayerSession> *)&v15);
  std::shared_ptr<PlayerSession>::~shared_ptr((std::shared_ptr<PlayerSession> *const)&v15);
  if ( std::operator!=<common::minet::KcpSession>((const std::shared_ptr<common::minet::KcpSession> *)this, 0LL) )
  {
    v9 = std::__shared_ptr_access<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::KcpSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    common::minet::KcpSession::set_udp_remote_endpoint(v9, (const boost::asio::ip::udp::endpoint *)a6);
  }
  if ( v16 == (char *)v6 )
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
  return this;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/include/kcp_server_mgr.hpp

// Line 9: range 000000000C860914-000000000C86095F
common::minet::KcpConnMgrBasePtr __cdecl common::minet::KcpServerMgr<PlayerSession>::createConnMgr(
        common::minet::KcpServerMgr<PlayerSession> *const this,
        common::minet::KcpServerMgrBasePtr *p_kcp_server_mgr_ptr)
{
  std::shared_ptr<common::minet::KcpServerMgrBase> *v2; // rdx
  common::minet::KcpConnMgrBasePtr result; // rax
  std::shared_ptr<common::minet::KcpServerMgrBase> v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<common::minet::KcpConnMgr<PlayerSession>,std::shared_ptr<common::minet::KcpServerMgrBase> &>(
    &v4,
    v2);
  std::shared_ptr<common::minet::KcpConnMgrBase>::shared_ptr<common::minet::KcpConnMgr<PlayerSession>,void>(
    (std::shared_ptr<common::minet::KcpConnMgrBase> *const)this,
    (std::shared_ptr<common::minet::KcpConnMgr<PlayerSession> > *)&v4);
  std::shared_ptr<common::minet::KcpConnMgr<PlayerSession>>::~shared_ptr((std::shared_ptr<common::minet::KcpConnMgr<PlayerSession> > *const)&v4);
  result._M_ptr = (std::__shared_ptr<common::minet::KcpConnMgrBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

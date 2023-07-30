// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/include/kcp_conn_mgr.h

// Line 8: range 000000000C88F43A-000000000C88F487
void __cdecl common::minet::KcpConnMgr<PlayerSession>::~KcpConnMgr(
        common::minet::KcpConnMgr<PlayerSession> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'common::minet::KcpConnMgr<PlayerSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpConnMgrBase = v1;
  common::minet::KcpConnMgrBase::~KcpConnMgrBase(this);
};

// Line 8: range 000000000C88F488-000000000C88F4B2
void __cdecl common::minet::KcpConnMgr<PlayerSession>::~KcpConnMgr(
        common::minet::KcpConnMgr<PlayerSession> *const this)
{
  common::minet::KcpConnMgr<PlayerSession>::~KcpConnMgr(this);
  operator delete(this, 0x100180uLL);
};

// Line 11: range 000000000C88D032-000000000C88D0CC
void __cdecl common::minet::KcpConnMgr<PlayerSession>::KcpConnMgr(
        common::minet::KcpConnMgr<PlayerSession> *const this,
        common::minet::KcpServerMgrBasePtr *p_kcp_server_ptr)
{
  unsigned __int64 v2; // rdx
  int (**v3)(...); // rdx
  std::shared_ptr<common::minet::KcpServerMgrBase> kcp_server_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::shared_ptr<common::minet::KcpServerMgrBase>::shared_ptr(&kcp_server_ptr, p_kcp_server_ptr);
  common::minet::KcpConnMgrBase::KcpConnMgrBase(
    this,
    (common::minet::KcpServerMgrBasePtr)__PAIR128__(v2, &kcp_server_ptr));
  std::shared_ptr<common::minet::KcpServerMgrBase>::~shared_ptr(&kcp_server_ptr);
  v3 = (int (**)(...))(&`vtable for'common::minet::KcpConnMgr<PlayerSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpConnMgrBase = v3;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_server/include/kcp_server_mgr.h

// Line 8: range 000000000C83941C-000000000C839469
void __cdecl common::minet::KcpServerMgr<PlayerSession>::KcpServerMgr(
        common::minet::KcpServerMgr<PlayerSession> *const this)
{
  int (**v1)(...); // rdx

  common::minet::KcpServerMgrBase::KcpServerMgrBase(this);
  v1 = (int (**)(...))(&`vtable for'common::minet::KcpServerMgr<PlayerSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpServerMgrBase = v1;
};

// Line 8: range 000000000C84C86E-000000000C84C8BB
void __cdecl common::minet::KcpServerMgr<PlayerSession>::~KcpServerMgr(
        common::minet::KcpServerMgr<PlayerSession> *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'common::minet::KcpServerMgr<PlayerSession> + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_KcpServerMgrBase = v1;
  common::minet::KcpServerMgrBase::~KcpServerMgrBase(this);
};

// Line 8: range 000000000C84C8BC-000000000C84C8E6
void __cdecl common::minet::KcpServerMgr<PlayerSession>::~KcpServerMgr(
        common::minet::KcpServerMgr<PlayerSession> *const this)
{
  common::minet::KcpServerMgr<PlayerSession>::~KcpServerMgr(this);
  operator delete(this, 0xF0uLL);
};

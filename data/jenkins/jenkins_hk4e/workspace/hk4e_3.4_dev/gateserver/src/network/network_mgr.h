// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/network_mgr.h

// Line 28: range 000000000C84C7A4-000000000C84C841
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NetworkMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_NetworkMgrBase = v1;
  std::shared_ptr<common::minet::AClientMgr<TothemoonserverConnect>>::~shared_ptr(&this->tothemoon_ptr_);
  std::shared_ptr<common::minet::AClientMgr<PathfindingserverConnect>>::~shared_ptr(&this->pathfinding_ptr_);
  std::shared_ptr<common::minet::AClientBase>::~shared_ptr(&this->dispatch_ptr_);
  std::shared_ptr<common::minet::AClientMgr<GameserverConnect>>::~shared_ptr(&this->gameserver_ptr_);
  std::shared_ptr<common::minet::KcpServerMgrBase>::~shared_ptr(&this->player_server_ptr_);
  NetworkMgrBase::~NetworkMgrBase(this);
};

// Line 28: range 000000000C84C842-000000000C84C86C
void __cdecl NetworkMgr::~NetworkMgr(NetworkMgr *const this)
{
  NetworkMgr::~NetworkMgr(this);
  operator delete(this, 0x58uLL);
};

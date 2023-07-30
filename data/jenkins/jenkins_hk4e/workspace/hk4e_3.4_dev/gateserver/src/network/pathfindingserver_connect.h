// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/pathfindingserver_connect.h

// Line 22: range 000000000C7A418A-000000000C7A41E2
void __cdecl PathfindingserverConnect::PathfindingserverConnect(
        PathfindingserverConnect *const this,
        boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AClientConnect::AClientConnect(this, ioc);
  v2 = (int (**)(...))(&`vtable for'PathfindingserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v2;
};

// Line 23: range 000000000C84C72A-000000000C84C777
void __cdecl PathfindingserverConnect::~PathfindingserverConnect(PathfindingserverConnect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PathfindingserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v1;
  common::minet::AClientConnect::~AClientConnect(this);
};

// Line 23: range 000000000C84C778-000000000C84C7A2
void __cdecl PathfindingserverConnect::~PathfindingserverConnect(PathfindingserverConnect *const this)
{
  PathfindingserverConnect::~PathfindingserverConnect(this);
  operator delete(this, 0x1C8uLL);
};

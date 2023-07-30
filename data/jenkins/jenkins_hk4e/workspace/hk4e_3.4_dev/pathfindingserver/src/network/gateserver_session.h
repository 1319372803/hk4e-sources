// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/network/gateserver_session.h

// Line 22: range 000000000CD6CE20-000000000CD6CE78
void __cdecl GateserverSession::GateserverSession(GateserverSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v2;
};

// Line 23: range 000000000D0C2CDE-000000000D0C2D2B
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v1;
  common::minet::AServerSession::~AServerSession(this);
};

// Line 23: range 000000000D0C2D2C-000000000D0C2D56
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  GateserverSession::~GateserverSession(this);
  operator delete(this, 0x218uLL);
};

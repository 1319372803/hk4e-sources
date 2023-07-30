// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/network/gateserver_session.h

// Line 24: range 000000000C652820-000000000C652878
void __cdecl GateserverSession::GateserverSession(GateserverSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ioc);
  this->_vptr_AServerSession = v2;
};

// Line 25: range 000000000C65287A-000000000C6528C7
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AServerSession = v2;
  common::minet::AServerSession::~AServerSession(this);
};

// Line 25: range 000000000C6528C8-000000000C6528F2
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  GateserverSession::~GateserverSession(this);
  operator delete(this, 0x218uLL);
};

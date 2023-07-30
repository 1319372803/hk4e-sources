// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/network/gateserver_session.h

// Line 22: range 000000000CCC3732-000000000CCC378A
void __cdecl GateserverSession::GateserverSession(GateserverSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v2;
};

// Line 23: range 000000000CFFC788-000000000CFFC7D5
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AServerSession = v1;
  common::minet::AServerSession::~AServerSession(this);
};

// Line 23: range 000000000CFFC7D6-000000000CFFC800
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  GateserverSession::~GateserverSession(this);
  operator delete(this, 0x218uLL);
};

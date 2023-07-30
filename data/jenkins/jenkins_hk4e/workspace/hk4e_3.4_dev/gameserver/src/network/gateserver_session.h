// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/gateserver_session.h

// Line 22: range 00000000176AF276-00000000176AF2CE
void __cdecl GateserverSession::GateserverSession(GateserverSession *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AServerSession::AServerSession(this, ioc);
  v2 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AServerSession = v2;
};

// Line 23: range 000000001788762C-0000000017887679
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GateserverSession + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AServerSession = v1;
  common::minet::AServerSession::~AServerSession(this);
};

// Line 23: range 000000001788767A-00000000178876A4
void __cdecl GateserverSession::~GateserverSession(GateserverSession *const this)
{
  GateserverSession::~GateserverSession(this);
  operator delete(this, 0x218uLL);
};

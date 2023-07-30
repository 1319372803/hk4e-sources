// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/gameserver_connect.h

// Line 22: range 000000000C7A4130-000000000C7A4188
void __cdecl GameserverConnect::GameserverConnect(GameserverConnect *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AClientConnect::AClientConnect(this, ioc);
  v2 = (int (**)(...))(&`vtable for'GameserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v2;
};

// Line 23: range 000000000C84C8E8-000000000C84C935
void __cdecl GameserverConnect::~GameserverConnect(GameserverConnect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GameserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v1;
  common::minet::AClientConnect::~AClientConnect(this);
};

// Line 23: range 000000000C84C936-000000000C84C960
void __cdecl GameserverConnect::~GameserverConnect(GameserverConnect *const this)
{
  GameserverConnect::~GameserverConnect(this);
  operator delete(this, 0x1C8uLL);
};

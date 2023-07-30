// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/tothemoonserver_connect.h

// Line 22: range 000000000C7A41E4-000000000C7A423C
void __cdecl TothemoonserverConnect::TothemoonserverConnect(
        TothemoonserverConnect *const this,
        boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AClientConnect::AClientConnect(this, ioc);
  v2 = (int (**)(...))(&`vtable for'TothemoonserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v2;
};

// Line 23: range 000000000C84C4D2-000000000C84C51F
void __cdecl TothemoonserverConnect::~TothemoonserverConnect(TothemoonserverConnect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TothemoonserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v1;
  common::minet::AClientConnect::~AClientConnect(this);
};

// Line 23: range 000000000C84C520-000000000C84C54A
void __cdecl TothemoonserverConnect::~TothemoonserverConnect(TothemoonserverConnect *const this)
{
  TothemoonserverConnect::~TothemoonserverConnect(this);
  operator delete(this, 0x1C8uLL);
};

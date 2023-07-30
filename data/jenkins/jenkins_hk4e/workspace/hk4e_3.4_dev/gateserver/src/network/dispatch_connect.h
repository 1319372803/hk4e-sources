// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/network/dispatch_connect.h

// Line 22: range 000000000C7A4912-000000000C7A496A
void __cdecl DispatchConnect::DispatchConnect(DispatchConnect *const this, boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AClientConnect::AClientConnect(this, ioc);
  v2 = (int (**)(...))(&`vtable for'DispatchConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v2;
};

// Line 23: range 000000000C7A496C-000000000C7A49B9
void __cdecl DispatchConnect::~DispatchConnect(DispatchConnect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DispatchConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v1;
  common::minet::AClientConnect::~AClientConnect(this);
};

// Line 23: range 000000000C7A49BA-000000000C7A49E4
void __cdecl DispatchConnect::~DispatchConnect(DispatchConnect *const this)
{
  DispatchConnect::~DispatchConnect(this);
  operator delete(this, 0x1C8uLL);
};

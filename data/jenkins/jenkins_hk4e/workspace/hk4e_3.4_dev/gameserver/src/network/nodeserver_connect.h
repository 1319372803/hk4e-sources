// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/nodeserver_connect.h

// Line 18: range 00000000178875B2-00000000178875FF
void __cdecl NodeserverConnect::~NodeserverConnect(NodeserverConnect *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NodeserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AClientConnect = v1;
  NodeserverConnectBase::~NodeserverConnectBase(this);
};

// Line 18: range 0000000017887600-000000001788762A
void __cdecl NodeserverConnect::~NodeserverConnect(NodeserverConnect *const this)
{
  NodeserverConnect::~NodeserverConnect(this);
  operator delete(this, 0x1D0uLL);
};

// Line 21: range 00000000178FC226-00000000178FC27E
void __cdecl ZN17NodeserverConnectCI221NodeserverConnectBaseERN5boost4asio10io_contextE(
        NodeserverConnect *const this,
        boost::asio::io_context *a2)
{
  int (**v2)(...); // rdx

  NodeserverConnectBase::NodeserverConnectBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'NodeserverConnect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_AClientConnect = v2;
};

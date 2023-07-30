// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/nodeserver_connect_base.h

// Line 23: range 000000000CC974D8-000000000CC9755E
void __cdecl NodeserverConnectBase::NodeserverConnectBase(
        NodeserverConnectBase *const this,
        boost::asio::io_context *ioc)
{
  int (**v2)(...); // rdx

  common::minet::AClientConnect::AClientConnect(this, ioc);
  v2 = (int (**)(...))(&`vtable for'NodeserverConnectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v2;
  std::atomic<bool>::atomic(&this->is_start_func_finish_, 0);
  std::atomic<bool>::atomic(&this->is_register_succ_, 0);
};

// Line 24: range 000000000D4D7716-000000000D4D7763
void __cdecl NodeserverConnectBase::~NodeserverConnectBase(NodeserverConnectBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'NodeserverConnectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_AClientConnect = v1;
  common::minet::AClientConnect::~AClientConnect(this);
};

// Line 24: range 000000000D4D7764-000000000D4D778E
void __cdecl NodeserverConnectBase::~NodeserverConnectBase(NodeserverConnectBase *const this)
{
  NodeserverConnectBase::~NodeserverConnectBase(this);
  operator delete(this, 0x1D0uLL);
};

// Line 41: range 000000000D4D7790-000000000D4D779E
int32_t __cdecl NodeserverConnectBase::onRegisterSucc(NodeserverConnectBase *const this)
{
  return 0;
};

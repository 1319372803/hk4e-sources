// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/http_client/include/async_http_client_mgr_base.h

// Line 26: range 000000000C7C1BFE-000000000C7C1C3F
void __cdecl common::minet::http_client::HttpClientMgrBase::HttpClientMgrBase(
        common::minet::http_client::HttpClientMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClientMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HttpClientMgrBase = v1;
};

// Line 29: range 000000000C7C1C40-000000000C7C1C81
void __cdecl common::minet::http_client::HttpClientMgrBase::~HttpClientMgrBase(
        common::minet::http_client::HttpClientMgrBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'common::minet::http_client::HttpClientMgrBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_HttpClientMgrBase = v1;
};

// Line 29: range 000000000C7C1C82-000000000C7C1CAC
void __cdecl common::minet::http_client::HttpClientMgrBase::~HttpClientMgrBase(
        common::minet::http_client::HttpClientMgrBase *const this)
{
  common::minet::http_client::HttpClientMgrBase::~HttpClientMgrBase(this);
  operator delete(this, 8uLL);
};

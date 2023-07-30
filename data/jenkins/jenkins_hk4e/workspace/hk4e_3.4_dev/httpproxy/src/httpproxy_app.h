// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/httpproxy_app.h

// Line 18: range 000000000C72C694-000000000C72C6ED
void __cdecl HttpProxyApp::HttpProxyApp(HttpProxyApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<HttpProxyApp>::Singleton(this);
  v1 = &`vtable for'HttpProxyApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
};

// Line 18: range 000000000C73B16A-000000000C73B1B7
void __cdecl HttpProxyApp::~HttpProxyApp(HttpProxyApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'HttpProxyApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 18: range 000000000C73B1B8-000000000C73B1E2
void __cdecl HttpProxyApp::~HttpProxyApp(HttpProxyApp *const this)
{
  HttpProxyApp::~HttpProxyApp(this);
  operator delete(this, 0x1F0uLL);
};

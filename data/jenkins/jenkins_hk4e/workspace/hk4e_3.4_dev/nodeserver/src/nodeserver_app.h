// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/nodeserver_app.h

// Line 21: range 000000000387ECDC-000000000387ED35
void __cdecl NodeserverApp::NodeserverApp(NodeserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<NodeserverApp>::Singleton(this);
  v2 = &`vtable for'NodeserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
};

// Line 22: range 000000000387ED36-000000000387ED83
void __cdecl NodeserverApp::~NodeserverApp(NodeserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'NodeserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 22: range 000000000387ED84-000000000387EDAE
void __cdecl NodeserverApp::~NodeserverApp(NodeserverApp *const this)
{
  NodeserverApp::~NodeserverApp(this);
  operator delete(this, 0x1F0uLL);
};

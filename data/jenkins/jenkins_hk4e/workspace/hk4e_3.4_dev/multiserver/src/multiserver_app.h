// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/multiserver_app.h

// Line 18: range 000000000D927868-000000000D9278B5
void __cdecl MultiserverApp::~MultiserverApp(MultiserverApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'MultiserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 18: range 000000000D9278B6-000000000D9278E0
void __cdecl MultiserverApp::~MultiserverApp(MultiserverApp *const this)
{
  MultiserverApp::~MultiserverApp(this);
  operator delete(this, 0x1F0uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/dispatch_app.h

// Line 22: range 000000000C638030-000000000C638089
void __cdecl DispatchApp::DispatchApp(DispatchApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<DispatchApp>::Singleton(this);
  v2 = &`vtable for'DispatchApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
};

// Line 23: range 000000000C63808A-000000000C6380D7
void __cdecl DispatchApp::~DispatchApp(DispatchApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'DispatchApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 23: range 000000000C6380D8-000000000C638102
void __cdecl DispatchApp::~DispatchApp(DispatchApp *const this)
{
  DispatchApp::~DispatchApp(this);
  operator delete(this, 0x1F0uLL);
};

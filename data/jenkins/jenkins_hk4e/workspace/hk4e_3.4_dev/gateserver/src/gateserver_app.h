// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gateserver/src/gateserver_app.h

// Line 18: range 000000000C7AD718-000000000C7AD771
void __cdecl GateserverApp::GateserverApp(GateserverApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<GateserverApp>::Singleton(this);
  v1 = &`vtable for'GateserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
};

// Line 18: range 000000000C7CBFB0-000000000C7CBFFD
void __cdecl GateserverApp::~GateserverApp(GateserverApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'GateserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 18: range 000000000C7CBFFE-000000000C7CC028
void __cdecl GateserverApp::~GateserverApp(GateserverApp *const this)
{
  GateserverApp::~GateserverApp(this);
  operator delete(this, 0x1F0uLL);
};

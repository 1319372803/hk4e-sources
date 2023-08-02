// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/muipserver_app.h

// Line 19: range 000000000CCBDB6A-000000000CCBDBC3
void __cdecl MuipserverApp::MuipserverApp(MuipserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<MuipserverApp>::Singleton(this);
  v2 = &`vtable for'MuipserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
};

// Line 19: range 000000000CD4CEFE-000000000CD4CF4B
void __cdecl MuipserverApp::~MuipserverApp(MuipserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'MuipserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 19: range 000000000CD4CF4C-000000000CD4CF76
void __cdecl MuipserverApp::~MuipserverApp(MuipserverApp *const this)
{
  MuipserverApp::~MuipserverApp(this);
  operator delete(this, 0x1F0uLL);
};

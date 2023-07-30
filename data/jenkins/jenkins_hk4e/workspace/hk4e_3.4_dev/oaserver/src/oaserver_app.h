// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/oaserver_app.h

// Line 18: range 000000000CB103F0-000000000CB10449
void __cdecl OaserverApp::OaserverApp(OaserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<OaserverApp>::Singleton(this);
  v2 = &`vtable for'OaserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
};

// Line 18: range 000000000CB849B4-000000000CB84A01
void __cdecl OaserverApp::~OaserverApp(OaserverApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'OaserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 18: range 000000000CB84A02-000000000CB84A2C
void __cdecl OaserverApp::~OaserverApp(OaserverApp *const this)
{
  OaserverApp::~OaserverApp(this);
  operator delete(this, 0x1F0uLL);
};

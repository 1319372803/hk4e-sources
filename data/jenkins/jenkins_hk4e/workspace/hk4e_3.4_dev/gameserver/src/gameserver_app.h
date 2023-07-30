// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gameserver_app.h

// Line 18: range 000000001770DFFA-000000001770E047
void __cdecl GameserverApp::~GameserverApp(GameserverApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'GameserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 18: range 000000001770E048-000000001770E072
void __cdecl GameserverApp::~GameserverApp(GameserverApp *const this)
{
  GameserverApp::~GameserverApp(this);
  operator delete(this, 0x1F0uLL);
};

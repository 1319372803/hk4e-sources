// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/dbgate_app.h

// Line 24: range 000000000C5E9310-000000000C5E9369
void __cdecl DbgateApp::DbgateApp(DbgateApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<DbgateApp>::Singleton(this);
  v2 = &`vtable for'DbgateApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
};

// Line 25: range 000000000C5E936A-000000000C5E93B7
void __cdecl DbgateApp::~DbgateApp(DbgateApp *const this)
{
  __int64 v1; // rsi
  __int64 *v2; // rdx

  v2 = &`vtable for'DbgateApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  *(_QWORD *)this->gap0 = v2;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 25: range 000000000C5E93B8-000000000C5E93E2
void __cdecl DbgateApp::~DbgateApp(DbgateApp *const this)
{
  DbgateApp::~DbgateApp(this);
  operator delete(this, 0x1F0uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoonserver_app.h

// Line 19: range 000000000CCF0E88-000000000CCF0F2C
void __cdecl TothemoonserverApp::TothemoonserverApp(TothemoonserverApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<TothemoonserverApp>::Singleton(this);
  v1 = &`vtable for'TothemoonserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_report_tile_memory_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->next_report_tile_memory_);
  }
  this->next_report_tile_memory_ = 0;
};

// Line 19: range 000000000CD7E8C8-000000000CD7E915
void __cdecl TothemoonserverApp::~TothemoonserverApp(TothemoonserverApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'TothemoonserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 19: range 000000000CD7E916-000000000CD7E940
void __cdecl TothemoonserverApp::~TothemoonserverApp(TothemoonserverApp *const this)
{
  TothemoonserverApp::~TothemoonserverApp(this);
  operator delete(this, 0x1F0uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfindingserver_app.h

// Line 19: range 000000000CDA5232-000000000CDA52D6
void __cdecl PathfindingserverApp::PathfindingserverApp(PathfindingserverApp *const this)
{
  __int64 *v1; // rdx

  AppBase::AppBase((AppBase *const)this);
  Singleton<PathfindingserverApp>::Singleton(this);
  v1 = &`vtable for'PathfindingserverApp + 2;
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

// Line 19: range 000000000CE382C4-000000000CE38311
void __cdecl PathfindingserverApp::~PathfindingserverApp(PathfindingserverApp *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'PathfindingserverApp + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->gap0 = v1;
  AppBase::~AppBase((AppBase *const)this);
};

// Line 19: range 000000000CE38312-000000000CE3833C
void __cdecl PathfindingserverApp::~PathfindingserverApp(PathfindingserverApp *const this)
{
  PathfindingserverApp::~PathfindingserverApp(this);
  operator delete(this, 0x1F0uLL);
};

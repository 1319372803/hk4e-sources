// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_main.h

// Line 22: range 000000000DD85974-000000000DD859D3
void __cdecl GCGPhaseMain::~GCGPhaseMain(GCGPhaseMain *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseMain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGActionQueue::~GCGActionQueue(&this->preview_action_queue_);
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 22: range 000000000DD859D4-000000000DD859FE
void __cdecl GCGPhaseMain::~GCGPhaseMain(GCGPhaseMain *const this)
{
  GCGPhaseMain::~GCGPhaseMain(this);
  operator delete(this, 0x1F0uLL);
};

// Line 26: range 000000000DD148EE-000000000DD149BE
void __cdecl ZN12GCGPhaseMainCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseMain *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseMain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
  GCGActionQueue::GCGActionQueue(&this->preview_action_queue_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_preview_snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_preview_snapshot_id_);
  }
  this->last_preview_snapshot_id_ = 0;
};

// Line 29: range 000000000D82D8E2-000000000D82D8F0
GCGPhaseType __cdecl GCGPhaseMain::getPhaseType(GCGPhaseMain *const this)
{
  return 5;
};

// Line 36: range 000000000E36EF82-000000000E36EFA1
bool *__cdecl GCGPhaseMain::getPreviewQueueRunningState(GCGPhaseMain *const this)
{
  return GCGActionQueue::getRunningState((GCGActionQueue_0 *const)&this->preview_action_queue_);
};

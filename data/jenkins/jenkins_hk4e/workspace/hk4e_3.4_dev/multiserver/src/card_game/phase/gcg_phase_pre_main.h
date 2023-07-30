// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_pre_main.h

// Line 16: range 000000000DD8549A-000000000DD854E7
void __cdecl GCGPhasePreMain::~GCGPhasePreMain(GCGPhasePreMain *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhasePreMain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 16: range 000000000DD854E8-000000000DD85512
void __cdecl GCGPhasePreMain::~GCGPhasePreMain(GCGPhasePreMain *const this)
{
  GCGPhasePreMain::~GCGPhasePreMain(this);
  operator delete(this, 0x140uLL);
};

// Line 20: range 000000000DD1462A-000000000DD14682
void __cdecl ZN15GCGPhasePreMainCI212GCGPhaseBaseER11GCGGameMode(GCGPhasePreMain *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhasePreMain + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 22: range 000000000D832DEE-000000000D832DFC
GCGPhaseType __cdecl GCGPhasePreMain::getPhaseType(GCGPhasePreMain *const this)
{
  return 9;
};

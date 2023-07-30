// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_reroll.h

// Line 23: range 000000000DD85420-000000000DD8546D
void __cdecl GCGPhaseReroll::~GCGPhaseReroll(GCGPhaseReroll *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseDice::~GCGPhaseDice(this);
};

// Line 23: range 000000000DD8546E-000000000DD85498
void __cdecl GCGPhaseReroll::~GCGPhaseReroll(GCGPhaseReroll *const this)
{
  GCGPhaseReroll::~GCGPhaseReroll(this);
  operator delete(this, 0x140uLL);
};

// Line 27: range 000000000DD15524-000000000DD1557C
void __cdecl ZN14GCGPhaseRerollCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseReroll *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  ZN12GCGPhaseDiceCI212GCGPhaseBaseER11GCGGameMode(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseReroll + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 28: range 000000000D832DFE-000000000D832E08
void __cdecl GCGPhaseReroll::onInit(GCGPhaseReroll *const this)
{
  ;
};

// Line 30: range 000000000D832E0A-000000000D832E18
GCGPhaseType __cdecl GCGPhaseReroll::getPhaseType(GCGPhaseReroll *const this)
{
  return 10;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_dice.h

// Line 19: range 000000000DD154AA-000000000DD154F7
void __cdecl GCGPhaseDice::~GCGPhaseDice(GCGPhaseDice *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 19: range 000000000DD154F8-000000000DD15522
void __cdecl GCGPhaseDice::~GCGPhaseDice(GCGPhaseDice *const this)
{
  GCGPhaseDice::~GCGPhaseDice(this);
  operator delete(this, 0x140uLL);
};

// Line 23: range 000000000DD14366-000000000DD143BE
void __cdecl ZN12GCGPhaseDiceCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseDice *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseDice + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 129: range 000000000D82D63A-000000000D82D648
GCGPhaseType __cdecl GCGPhaseDice::getPhaseType(GCGPhaseDice *const this)
{
  return 4;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_draw.h

// Line 21: range 000000000DD85AF4-000000000DD85B41
void __cdecl GCGPhaseDraw::~GCGPhaseDraw(GCGPhaseDraw *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 21: range 000000000DD85B42-000000000DD85B6C
void __cdecl GCGPhaseDraw::~GCGPhaseDraw(GCGPhaseDraw *const this)
{
  GCGPhaseDraw::~GCGPhaseDraw(this);
  operator delete(this, 0x140uLL);
};

// Line 25: range 000000000DD13D64-000000000DD13DBC
void __cdecl ZN12GCGPhaseDrawCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseDraw *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseDraw + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 28: range 000000000D82D7C2-000000000D82D7D0
GCGPhaseType __cdecl GCGPhaseDraw::getPhaseType(GCGPhaseDraw *const this)
{
  return 2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_fin.h

// Line 16: range 000000000DD85A00-000000000DD85A4D
void __cdecl GCGPhaseFin::~GCGPhaseFin(GCGPhaseFin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseFin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 16: range 000000000DD85A4E-000000000DD85A78
void __cdecl GCGPhaseFin::~GCGPhaseFin(GCGPhaseFin *const this)
{
  GCGPhaseFin::~GCGPhaseFin(this);
  operator delete(this, 0x140uLL);
};

// Line 20: range 000000000DD151E6-000000000DD1523E
void __cdecl ZN11GCGPhaseFinCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseFin *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseFin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 21: range 000000000D82D896-000000000D82D8A4
GCGPhaseType __cdecl GCGPhaseFin::getPhaseType(GCGPhaseFin *const this)
{
  return 8;
};

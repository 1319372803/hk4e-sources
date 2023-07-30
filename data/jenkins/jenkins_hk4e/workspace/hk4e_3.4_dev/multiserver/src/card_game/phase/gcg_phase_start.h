// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_start.h

// Line 19: range 000000000DD853A6-000000000DD853F3
void __cdecl GCGPhaseStart::~GCGPhaseStart(GCGPhaseStart *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 19: range 000000000DD853F4-000000000DD8541E
void __cdecl GCGPhaseStart::~GCGPhaseStart(GCGPhaseStart *const this)
{
  GCGPhaseStart::~GCGPhaseStart(this);
  operator delete(this, 0x140uLL);
};

// Line 23: range 000000000DD13AA0-000000000DD13AF8
void __cdecl ZN13GCGPhaseStartCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseStart *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseStart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 26: range 000000000D832DCE-000000000D832DDC
GCGPhaseType __cdecl GCGPhaseStart::getPhaseType(GCGPhaseStart *const this)
{
  return 1;
};

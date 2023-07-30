// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_end.h

// Line 16: range 000000000DD85A7A-000000000DD85AC7
void __cdecl GCGPhaseEnd::~GCGPhaseEnd(GCGPhaseEnd *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 16: range 000000000DD85AC8-000000000DD85AF2
void __cdecl GCGPhaseEnd::~GCGPhaseEnd(GCGPhaseEnd *const this)
{
  GCGPhaseEnd::~GCGPhaseEnd(this);
  operator delete(this, 0x140uLL);
};

// Line 20: range 000000000DD14C18-000000000DD14C70
void __cdecl ZN11GCGPhaseEndCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseEnd *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseEnd + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
};

// Line 22: range 000000000D82D886-000000000D82D894
GCGPhaseType __cdecl GCGPhaseEnd::getPhaseType(GCGPhaseEnd *const this)
{
  return 6;
};

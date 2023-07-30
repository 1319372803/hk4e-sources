// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_die.h

// Line 18: range 000000000DD85B6E-000000000DD85BCD
void __cdecl GCGPhaseDie::~GCGPhaseDie(GCGPhaseDie *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::~map(&this->trigger_map_);
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 18: range 000000000DD85BCE-000000000DD85BF8
void __cdecl GCGPhaseDie::~GCGPhaseDie(GCGPhaseDie *const this)
{
  GCGPhaseDie::~GCGPhaseDie(this);
  operator delete(this, 0x178uLL);
};

// Line 22: range 000000000DD14EDC-000000000DD14F89
void __cdecl ZN11GCGPhaseDieCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseDie *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseDie + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::map(&this->trigger_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_die_controller_id);
  }
  this->first_die_controller_id = GCG_CONTROLLER_A;
};

// Line 26: range 000000000D82D6FE-000000000D82D70C
GCGPhaseType __cdecl GCGPhaseDie::getPhaseType(GCGPhaseDie *const this)
{
  return 7;
};

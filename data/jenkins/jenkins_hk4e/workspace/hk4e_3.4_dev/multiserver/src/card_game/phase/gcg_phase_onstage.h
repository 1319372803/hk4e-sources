// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_onstage.h

// Line 20: range 000000000DD85514-000000000DD85573
void __cdecl GCGPhaseOnStage::~GCGPhaseOnStage(GCGPhaseOnStage *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::~map(&this->trigger_map_);
  GCGPhaseBase::~GCGPhaseBase(this);
};

// Line 20: range 000000000DD85574-000000000DD8559E
void __cdecl GCGPhaseOnStage::~GCGPhaseOnStage(GCGPhaseOnStage *const this)
{
  GCGPhaseOnStage::~GCGPhaseOnStage(this);
  operator delete(this, 0x170uLL);
};

// Line 24: range 000000000DD14098-000000000DD14102
void __cdecl ZN15GCGPhaseOnStageCI212GCGPhaseBaseER11GCGGameMode(GCGPhaseOnStage *const this, GCGGameMode *a2)
{
  int (**v2)(...); // rdx

  GCGPhaseBase::GCGPhaseBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseOnStage + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
  std::map<proto::GCGControllerValue,std::shared_ptr<GCGSkillUseParam>>::map(&this->trigger_map_);
};

// Line 30: range 000000000D832DDE-000000000D832DEC
GCGPhaseType __cdecl GCGPhaseOnStage::getPhaseType(GCGPhaseOnStage *const this)
{
  return 3;
};

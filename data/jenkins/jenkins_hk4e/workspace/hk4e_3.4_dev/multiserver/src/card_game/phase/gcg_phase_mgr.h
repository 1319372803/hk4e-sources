// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase_mgr.h

// Line 21: range 000000000D828C80-000000000D828CAE
void __cdecl GCGPhaseMgr::~GCGPhaseMgr(GCGPhaseMgr *const this)
{
  std::stack<std::shared_ptr<GCGPhaseBase>>::~stack(&this->phase_stack_);
  std::shared_ptr<GCGPhaseBase>::~shared_ptr(&this->cur_phase_ptr_);
};

// Line 24: range 000000000D8271DE-000000000D8272A1
void __cdecl GCGPhaseMgr::GCGPhaseMgr(GCGPhaseMgr *const this, GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_phase_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_phase_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_phase_type);
  }
  this->pre_phase_type = GCG_PHASE_INVALID;
  std::shared_ptr<GCGPhaseBase>::shared_ptr(&this->cur_phase_ptr_);
  std::stack<std::shared_ptr<GCGPhaseBase>>::stack<std::deque<std::shared_ptr<GCGPhaseBase>>,void>(&this->phase_stack_);
};

// Line 26: range 000000000D827346-000000000D827372
GCGPhaseBasePtr __cdecl GCGPhaseMgr::getCurPhase(GCGPhaseMgr *const this)
{
  const std::shared_ptr<GCGPhaseBase> *v1; // rsi
  GCGPhaseBasePtr result; // rax

  std::shared_ptr<GCGPhaseBase>::shared_ptr((std::shared_ptr<GCGPhaseBase> *const)this, v1 + 1);
  result._M_ptr = (std::__shared_ptr<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

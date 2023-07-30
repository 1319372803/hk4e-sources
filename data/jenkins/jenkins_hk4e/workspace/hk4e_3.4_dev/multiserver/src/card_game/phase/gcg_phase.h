// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/phase/gcg_phase.h

// Line 20: range 000000000DD01FAA-000000000DD02002
void __cdecl GCGPhaseParam::GCGPhaseParam(GCGPhaseParam *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->controller_id_2_action_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_die_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_die_controller_id);
  }
  this->first_die_controller_id = GCG_CONTROLLER_A;
};

// Line 20: range 000000000DDE965E-000000000DDE9678
void __cdecl GCGPhaseParam::~GCGPhaseParam(GCGPhaseParam *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->controller_id_2_action_count_map_);
};

// Line 32: range 000000000D829728-000000000D829913
void __cdecl GCGPhaseBase::GCGPhaseBase(GCGPhaseBase *const this, GCGGameMode *game_mode)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<GCGPhaseBase>::enable_shared_from_this(&this->std::enable_shared_from_this<GCGPhaseBase>);
  v2 = (int (**)(...))(&`vtable for'GCGPhaseBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  GCGActionQueue::GCGActionQueue(&this->action_queue_);
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 0;
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->allow_controller_map_);
  if ( *(char *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_init_);
  this->is_init_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_enter_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_phase_enter_);
  }
  this->is_phase_enter_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 2) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_phase_exit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_phase_exit_);
  }
  this->is_phase_exit_ = 0;
  std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::unordered_map(&this->cur_phase_last_operation_info_map_);
};

// Line 35: range 000000000DD13A74-000000000DD13A9E
void __cdecl GCGPhaseBase::~GCGPhaseBase(GCGPhaseBase *const this)
{
  GCGPhaseBase::~GCGPhaseBase(this);
  operator delete(this, 0x140uLL);
};

// Line 36: range 000000000D829914-000000000D829922
void __cdecl GCGPhaseBase::setPhaseParam(GCGPhaseBase *const this, const GCGPhaseParam *param)
{
  ;
};

// Line 42: range 000000000D829960-000000000D829986
GCGOperationBasePtr __cdecl GCGPhaseBase::defaultOperation(GCGPhaseBase *const this)
{
  GCGOperationBasePtr result; // rax

  std::shared_ptr<GCGOperationBase>::shared_ptr((std::shared_ptr<GCGOperationBase> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<GCGOperationBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 50: range 000000000D82999C-000000000D8299AD
GCGActionQueue *__cdecl GCGPhaseBase::getActionQueue(GCGPhaseBase *const this)
{
  return &this->action_queue_;
};

// Line 50: range 000000000D829988-000000000D82999B
const std::map<proto::GCGControllerValue,unsigned int> *__cdecl GCGPhaseBase::getAllowControllerMap(
        const GCGPhaseBase *const this)
{
  return &this->allow_controller_map_;
};

// Line 67: range 000000000E1D4C1E-000000000E1D4C3B
bool *__cdecl GCGPhaseBase::getQueueRunningState(GCGPhaseBase *const this)
{
  return GCGActionQueue::getRunningState((GCGActionQueue_0 *const)&this->action_queue_);
};

// Line 77: range 000000000D8299AE-000000000D8299B8
void __cdecl GCGPhaseBase::onInit(GCGPhaseBase *const this)
{
  ;
};

// Line 78: range 000000000D8299BA-000000000D8299C4
void __cdecl GCGPhaseBase::onPhaseEnter(GCGPhaseBase *const this)
{
  ;
};

// Line 79: range 000000000D8299C6-000000000D8299D0
void __cdecl GCGPhaseBase::onPhaseExit(GCGPhaseBase *const this)
{
  ;
};

// Line 185: range 000000000DD139EE-000000000DD13A73
void __cdecl GCGPhaseBase::~GCGPhaseBase(GCGPhaseBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGPhaseBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGPhaseBase = v1;
  std::unordered_map<proto::GCGControllerValue,GCGControllerOpInfo>::~unordered_map(&this->cur_phase_last_operation_info_map_);
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->allow_controller_map_);
  GCGActionQueue::~GCGActionQueue(&this->action_queue_);
  std::enable_shared_from_this<GCGPhaseBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<GCGPhaseBase>);
};

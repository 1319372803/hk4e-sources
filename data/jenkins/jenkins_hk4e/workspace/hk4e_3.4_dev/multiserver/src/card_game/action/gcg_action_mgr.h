// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/action/gcg_action_mgr.h

// Line 20: range 000000000D82946A-000000000D8294F5
void __cdecl GCGActionQueue::GCGActionQueue(GCGActionQueue *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_running_ = 0;
  std::deque<std::shared_ptr<GCGActionBase>>::deque(&this->action_queue_);
  std::deque<std::shared_ptr<GCGActionBase>>::deque(&this->sub_action_queue_);
};

// Line 20: range 000000000D8294F6-000000000D829524
void __cdecl GCGActionQueue::~GCGActionQueue(GCGActionQueue *const this)
{
  std::deque<std::shared_ptr<GCGActionBase>>::~deque(&this->sub_action_queue_);
  std::deque<std::shared_ptr<GCGActionBase>>::~deque(&this->action_queue_);
};

// Line 30: range 000000000E1D3ECC-000000000E1D3ED9
bool *__cdecl GCGActionQueue::getRunningState(GCGActionQueue_0 *const this)
{
  return &this->is_running_;
};

// Line 37: range 000000000D828CB0-000000000D828CCE
void __cdecl GCGActionMgr::~GCGActionMgr(GCGActionMgr *const this)
{
  std::vector<std::shared_ptr<GCGActionBase>>::~vector(&this->history_action_vec_);
};

// Line 37: range 000000000D8276C6-000000000D8276F4
void __cdecl GCGActionQueue::clear(GCGActionQueue *const this)
{
  std::deque<std::shared_ptr<GCGActionBase>>::clear(&this->action_queue_);
  std::deque<std::shared_ptr<GCGActionBase>>::clear(&this->sub_action_queue_);
};

// Line 41: range 000000000D82774A-000000000D827819
void __cdecl GCGActionMgr::GCGActionMgr(GCGActionMgr *const this, GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  std::vector<std::shared_ptr<GCGActionBase>>::vector(&this->history_action_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->global_action_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->global_action_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->global_action_seq);
  }
  this->global_action_seq = 0;
};

// Line 63: range 000000000D86BB0A-000000000D86BC32
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<ActionBeforeNextOperation> __cdecl GCGActionMgr::createAction<ActionBeforeNextOperation>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<ActionBeforeNextOperation> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<ActionBeforeNextOperation,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<ActionBeforeNextOperation,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86C9DE-000000000D86CB06
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionAttack> __cdecl GCGActionMgr::createAction<GCGActionAttack>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionAttack> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionAttack,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86AE6E-000000000D86AF96
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionDraw> __cdecl GCGActionMgr::createAction<GCGActionDraw>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionDraw> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionDraw,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionDraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionDraw,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionDraw,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D864438-000000000D864560
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionGameOver> __cdecl GCGActionMgr::createAction<GCGActionGameOver>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionGameOver> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionGameOver,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionGameOver,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D87AADA-000000000D87AC02
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionNextPhase> __cdecl GCGActionMgr::createAction<GCGActionNextPhase>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionNextPhase> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionNextPhase,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionNextPhase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86D980-000000000D86DAA8
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionNotifySkillPreview> __cdecl GCGActionMgr::createAction<GCGActionNotifySkillPreview>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionNotifySkillPreview> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionNotifySkillPreview,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionNotifySkillPreview,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86D3EE-000000000D86D516
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionPass> __cdecl GCGActionMgr::createAction<GCGActionPass>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionPass,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionPass> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionPass,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionPass,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPass,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionPass,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPass,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionPass,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionPass,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D87A950-000000000D87AA78
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionPhaseExit> __cdecl GCGActionMgr::createAction<GCGActionPhaseExit>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionPhaseExit> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionPhaseExit,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionPhaseExit,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86CDB2-000000000D86CEDA
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionPlayCard> __cdecl GCGActionMgr::createAction<GCGActionPlayCard>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionPlayCard> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionPlayCard,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionPlayCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000E3768D6-000000000E3769FE
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionPreviewAfterAttack> __cdecl GCGActionMgr::createAction<GCGActionPreviewAfterAttack>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionPreviewAfterAttack> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionPreviewAfterAttack,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionPreviewAfterAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000E37674C-000000000E376874
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionPreviewAttack> __cdecl GCGActionMgr::createAction<GCGActionPreviewAttack>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionPreviewAttack> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionPreviewAttack,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionPreviewAttack,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86A236-000000000D86A35E
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionReroll> __cdecl GCGActionMgr::createAction<GCGActionReroll>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionReroll> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionReroll,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReroll,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionReroll,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionReroll,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D869060-000000000D869188
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionSendMessage> __cdecl GCGActionMgr::createAction<GCGActionSendMessage>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionSendMessage> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionSendMessage,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionSendMessage,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D87A7C6-000000000D87A8EE
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionSpecialPhase> __cdecl GCGActionMgr::createAction<GCGActionSpecialPhase>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionSpecialPhase> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionSpecialPhase,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionSpecialPhase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000E3735BC-000000000E3736E4
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionTrigger> __cdecl GCGActionMgr::createAction<GCGActionTrigger>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionTrigger> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionTrigger,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000E1DCFDA-000000000E1DD102
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionTriggerSkill> __cdecl GCGActionMgr::createAction<GCGActionTriggerSkill>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionTriggerSkill> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionTriggerSkill,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 63: range 000000000D86A868-000000000D86A990
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionWaitingCharacter> __cdecl GCGActionMgr::createAction<GCGActionWaitingCharacter>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionWaitingCharacter> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionWaitingCharacter,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionWaitingCharacter,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 74: range 000000000D86B99A-000000000D86BAC2
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionAfterOperation> __cdecl GCGActionMgr::createAction<GCGActionAfterOperation>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionAfterOperation> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionAfterOperation,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionAfterOperation,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 74: range 000000000D86B1EC-000000000D86B314
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionRedraw> __cdecl GCGActionMgr::createAction<GCGActionRedraw>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionRedraw> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionRedraw,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionRedraw,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 74: range 000000000D86AC8A-000000000D86ADB2
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionSelectOnStage> __cdecl GCGActionMgr::createAction<GCGActionSelectOnStage>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionSelectOnStage> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionSelectOnStage,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionSelectOnStage,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 264: range 000000000D86D810-000000000D86D938
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionNotifyCost> __cdecl GCGActionMgr::createAction<GCGActionNotifyCost>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionNotifyCost> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionNotifyCost,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionNotifyCost,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 440: range 000000000D86D216-000000000D86D33E
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionReboot> __cdecl GCGActionMgr::createAction<GCGActionReboot>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionReboot> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionReboot,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionReboot,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionReboot,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionReboot,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 820: range 000000000D869B4E-000000000D869C76
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionRoll> __cdecl GCGActionMgr::createAction<GCGActionRoll>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionRoll,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionRoll> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionRoll,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionRoll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionRoll,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionRoll,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionRoll,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionRoll,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionRoll,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 000000000E1EB66E-000000000E1EB796
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<GCGActionUseSkill> __cdecl GCGActionMgr::createAction<GCGActionUseSkill>(
        GCGActionMgr *const this,
        GCGControllerValue controller_id)
{
  GCGControllerValue v2; // edx
  GCGGameMode *v3; // rdx
  std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ebx
  std::shared_ptr<GCGActionUseSkill> result; // rax
  GCGControllerValue controller_ida; // [rsp+Ch] [rbp-24h]

  controller_ida = v2;
  if ( *(_BYTE *)((*(_QWORD *)&controller_id >> 3) + 0x7FFF8000LL) )
    __asan_report_load8(controller_id);
  v3 = **(GCGGameMode ***)&controller_id;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, *(_QWORD *)&controller_id);
  common::tools::perf::make_shared<GCGActionUseSkill,GCGGameMode &>((GCGGameMode *)this, v3);
  v4 = std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  GCGActionBase::setControllerId(v4, controller_ida);
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((controller_id + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&controller_id + 36LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&controller_id + 36LL);
  }
  v5 = ++*(_DWORD *)(*(_QWORD *)&controller_id + 36LL);
  result._M_ptr = std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
  result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)((*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3)
                                                                                             + 0x7FFF8000) != 0) & (unsigned __int8)(*(_BYTE *)(((unsigned __int64)&result._M_ptr->seq_ >> 3) + 0x7FFF8000) <= 3));
  if ( LOBYTE(result._M_refcount._M_pi) )
    result._M_ptr = (std::__shared_ptr<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)__asan_report_store4(&result._M_ptr->seq_);
  result._M_ptr->seq_ = v5;
  result._M_ptr = (std::__shared_ptr<GCGActionUseSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

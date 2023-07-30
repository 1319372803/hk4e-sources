// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_operation_timer.h

// Line 21: range 000000000D82626E-000000000D82629C
void __cdecl GCGOperationTimer::~GCGOperationTimer(GCGOperationTimer *const this)
{
  std::shared_ptr<common::tools::MiTimer>::~shared_ptr(&this->timer_ptr_);
  std::function<void ()(proto::GCGControllerValue)>::~function(&this->cb_func_);
};

// Line 26: range 000000000D8260CE-000000000D826193
void __cdecl GCGOperationTimer::setTime(GCGOperationTimer *const this, uint32_t base_time, uint32_t bonus_time)
{
  uint64_t v3; // rcx
  uint64_t v4; // rcx
  uint64_t v5; // rdx

  v3 = SAFE_MULTIPLY<unsigned int,int>(base_time, 1000);
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->base_time_);
  this->base_time_ = v3;
  v4 = SAFE_MULTIPLY<unsigned int,int>(bonus_time, 1000);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->bonus_time_);
  this->bonus_time_ = v4;
  v5 = this->bonus_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_bonus_time_);
  this->last_bonus_time_ = v5;
};

// Line 32: range 000000000D826194-000000000D8261FC
void __cdecl GCGOperationTimer::resetBonusTime(GCGOperationTimer *const this)
{
  uint64_t bonus_time; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->bonus_time_);
  bonus_time = this->bonus_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_bonus_time_);
  this->last_bonus_time_ = bonus_time;
};

// Line 44: range 000000000DF37C7A-000000000DF37CE4
uint64_t __cdecl GCGOperationTimer::getTotalTime(GCGOperationTimer *const this)
{
  uint64_t last_bonus_time; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->last_bonus_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_bonus_time_);
  last_bonus_time = this->last_bonus_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->base_time_);
  return last_bonus_time + this->base_time_;
};

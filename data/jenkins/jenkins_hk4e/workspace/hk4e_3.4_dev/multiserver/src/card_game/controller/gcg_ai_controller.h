// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_ai_controller.h

// Line 17: range 000000000DDE9376-000000000DDE93F5
void __cdecl GCGAIController::~GCGAIController(GCGAIController *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGAIController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v1;
  data::GCGRuleExcelConfig::~GCGRuleExcelConfig(&this->rule_config_);
  std::shared_ptr<BT::BehaviorTree>::~shared_ptr(&this->behavior_tree_ptr_);
  std::enable_shared_from_this<GCGAIController>::~enable_shared_from_this(&this->std::enable_shared_from_this<GCGAIController>);
  GCGControllerBase::~GCGControllerBase(this);
};

// Line 20: range 000000000DD03C22-000000000DD03E4C
void __fastcall ZN15GCGAIControllerCI217GCGControllerBaseER11GCGGameModeN5proto18GCGControllerValueE(
        GCGAIController *const this,
        GCGGameMode *a2,
        GCGControllerValue a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN15GCGAIControllerCI217GCGControllerBaseER11GCGGameModeN5proto18GCGControllerValueE;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  GCGControllerBase::GCGControllerBase(this, a2, *(GCGControllerValue *)(v3 + 32));
  std::enable_shared_from_this<GCGAIController>::enable_shared_from_this(&this->std::enable_shared_from_this<GCGAIController>);
  v6 = (int (**)(...))(&`vtable for'GCGAIController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v6;
  std::shared_ptr<BT::BehaviorTree>::shared_ptr(&this->behavior_tree_ptr_);
  data::GCGRuleExcelConfig::GCGRuleExcelConfig(&this->rule_config_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_dirven_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_dirven_count_);
  }
  this->total_dirven_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_dirven_us_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->total_dirven_us_);
  this->total_dirven_us_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_finish_think_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ai_finish_think_time_ms_);
  this->ai_finish_think_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_main_phase_round_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_main_phase_round_num_);
  }
  this->last_main_phase_round_num_ = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

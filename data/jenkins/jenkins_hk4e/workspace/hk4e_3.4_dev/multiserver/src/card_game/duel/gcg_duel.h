// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/duel/gcg_duel.h

// Line 25: range 000000000DF37D3A-000000000DF37EA0
GCGSkillTriggerVarMgr *__cdecl GCGSkillTriggerVarMgr::operator=(
        GCGSkillTriggerVarMgr *const this,
        const GCGSkillTriggerVarMgr *a2)
{
  uint32_t kill_character_count; // ecx
  uint32_t reaction_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  kill_character_count = a2->kill_character_count_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->kill_character_count_ = kill_character_count;
  std::set<unsigned int>::operator=(&this->damage_element_type_set_, &a2->damage_element_type_set_);
  std::map<unsigned int,std::set<unsigned int>>::operator=(
    &this->character_being_hurt_damage_element_type_set_,
    &a2->character_being_hurt_damage_element_type_set_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reaction_count_);
  }
  reaction_count = a2->reaction_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reaction_count_);
  }
  this->reaction_count_ = reaction_count;
  std::map<unsigned int,unsigned int>::operator=(&this->reaction_count_map_, &a2->reaction_count_map_);
  std::map<proto::GCGControllerValue,unsigned int>::operator=(
    &this->before_operation_controller_dice_num_map_,
    &a2->before_operation_controller_dice_num_map_);
  return this;
};

// Line 25: range 000000000D85EACC-000000000D85EB93
void __cdecl GCGSkillTriggerVarMgr::GCGSkillTriggerVarMgr(GCGSkillTriggerVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->kill_character_count_ = 0;
  std::set<unsigned int>::set(&this->damage_element_type_set_);
  std::map<unsigned int,std::set<unsigned int>>::map(&this->character_being_hurt_damage_element_type_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reaction_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reaction_count_);
  }
  this->reaction_count_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->reaction_count_map_);
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->before_operation_controller_dice_num_map_);
};

// Line 25: range 000000000D8262BA-000000000D82630A
void __cdecl GCGSkillTriggerVarMgr::~GCGSkillTriggerVarMgr(GCGSkillTriggerVarMgr *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->before_operation_controller_dice_num_map_);
  std::map<unsigned int,unsigned int>::~map(&this->reaction_count_map_);
  std::map<unsigned int,std::set<unsigned int>>::~map(&this->character_being_hurt_damage_element_type_set_);
  std::set<unsigned int>::~set(&this->damage_element_type_set_);
};

// Line 69: range 000000000D85EB94-000000000D85EBAE
void __cdecl GCGOperationVarMgr::GCGOperationVarMgr(GCGOperationVarMgr *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::map(&this->controller_id_kill_count_map_);
};

// Line 69: range 000000000D82630C-000000000D826326
void __cdecl GCGOperationVarMgr::~GCGOperationVarMgr(GCGOperationVarMgr *const this)
{
  std::map<proto::GCGControllerValue,unsigned int>::~map(&this->controller_id_kill_count_map_);
};

// Line 92: range 000000000D85EBB0-000000000D85EBDC
void __cdecl GCGDuelRuntimeData::GCGDuelRuntimeData(GCGDuelRuntimeData *const this)
{
  GCGSkillTriggerVarMgr::GCGSkillTriggerVarMgr(&this->skill_trigger_var_mgr_);
  GCGOperationVarMgr::GCGOperationVarMgr(&this->phase_main_var_mgr_);
};

// Line 92: range 000000000D826328-000000000D826354
void __cdecl GCGDuelRuntimeData::~GCGDuelRuntimeData(GCGDuelRuntimeData *const this)
{
  GCGOperationVarMgr::~GCGOperationVarMgr(&this->phase_main_var_mgr_);
  GCGSkillTriggerVarMgr::~GCGSkillTriggerVarMgr(&this->skill_trigger_var_mgr_);
};

// Line 96: range 000000000DF37EA2-000000000DF37ECA
GCGDuelRuntimeData *__cdecl GCGDuelRuntimeData::operator=(
        GCGDuelRuntimeData *const this,
        const GCGDuelRuntimeData *copy_data)
{
  GCGSkillTriggerVarMgr::operator=(&this->skill_trigger_var_mgr_, &copy_data->skill_trigger_var_mgr_);
  return this;
};

// Line 113: range 000000000D828C0A-000000000D828C7E
void __cdecl GCGDuel::~GCGDuel(GCGDuel *const this)
{
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->rule_zone_ptr_);
  GCGOperationTimer::~GCGOperationTimer(&this->op_timer_2);
  GCGOperationTimer::~GCGOperationTimer(&this->op_timer_1);
  GCGField::~GCGField(&this->field_2);
  GCGField::~GCGField(&this->field_1);
  GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(this);
};

// Line 117: range 000000000D826388-000000000D826672
void __cdecl GCGDuel::GCGDuel(GCGDuel *const this, GCGGameMode *game_mode)
{
  GCGField *p_field_2; // rcx
  GCGOperationTimer *p_op_timer_1; // rcx
  GCGOperationTimer *p_op_timer_2; // rcx
  GCGGameMode *v5; // rsi
  proto::GCGZoneType *v6; // rax
  int v7; // [rsp+1Ch] [rbp-14h] BYREF

  GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(this, game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  GCGField::GCGField(&this->field_1, this->game_mode_, GCG_CONTROLLER_A);
  p_field_2 = &this->field_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGField::GCGField(p_field_2, this->game_mode_, GCG_CONTROLLER_B);
  p_op_timer_1 = &this->op_timer_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGOperationTimer::GCGOperationTimer(p_op_timer_1, this->game_mode_, GCG_CONTROLLER_A);
  p_op_timer_2 = &this->op_timer_2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v5 = this->game_mode_;
  GCGOperationTimer::GCGOperationTimer(p_op_timer_2, v5, GCG_CONTROLLER_B);
  if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_);
  }
  this->round_ = 1;
  v7 = 9;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v6 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->rule_zone_ptr_ >> 3) + 0x7FFF8000) )
    v6 = (proto::GCGZoneType *)__asan_report_store16(&this->rule_zone_ptr_, v5);
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->rule_zone_ptr_,
    v6,
    (GCGGameMode *)&v7,
    (proto::GCGZoneType *)&this->rule_zone_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_controller_id_);
  }
  this->cur_controller_id_ = GCG_CONTROLLER_A;
};

// Line 128: range 000000000D826674-000000000D8266B9
bool __cdecl GCGDuel::isAllPassed(GCGDuel *const this)
{
  return GCGField::isPassed(&this->field_1) && GCGField::isPassed(&this->field_2);
};

// Line 131: range 000000000D8266BA-000000000D8266F6
void __cdecl GCGDuel::clearPassState(GCGDuel *const this)
{
  GCGField::setPass(&this->field_1, 0);
  GCGField::setPass(&this->field_2, 0);
};

// Line 140: range 000000000D8266F8-000000000D826744
uint32_t __cdecl GCGDuel::getRound(const GCGDuel *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->round_);
  }
  return this->round_;
};

// Line 188: range 000000000D826746-000000000D82676A
bool __cdecl GCGDuel::isControllerIdValid(const GCGDuel *const this, GCGControllerValue controller_id)
{
  return controller_id == GCG_CONTROLLER_A || controller_id == GCG_CONTROLLER_B;
};

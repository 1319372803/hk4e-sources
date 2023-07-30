// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/controller/gcg_monster_controller.h

// Line 20: range 000000000DDE92B4-000000000DDE9347
void __cdecl GCGMonsterController::~GCGMonsterController(GCGMonsterController *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGMonsterController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v1;
  std::map<data::GCGVirtualDiceType,unsigned int>::~map(&this->dice_map_);
  std::set<unsigned int>::~set(&this->gen_intention_card_guid_set_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::~unordered_map(&this->operation_priority_map_);
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::~map(&this->operation_map_);
  GCGControllerBase::~GCGControllerBase(this);
};

// Line 24: range 000000000D82AE74-000000000D82AFAE
void __cdecl GCGMonsterController::GCGMonsterController(
        GCGMonsterController *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  int (**v3)(...); // rdx

  GCGControllerBase::GCGControllerBase(this, game_mode, controller_id);
  v3 = (int (**)(...))(&`vtable for'GCGMonsterController + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGControllerBase = v3;
  std::map<unsigned int,std::list<std::shared_ptr<GCGOperationAttack>>>::map(&this->operation_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,int>>::unordered_map(&this->operation_priority_map_);
  std::set<unsigned int>::set(&this->gen_intention_card_guid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_advanture_rule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_advanture_rule_id_);
  }
  this->config_advanture_rule_id_ = 0;
  PVEIntentionMgr::PVEIntentionMgr(&this->pve_intention_mgr_, game_mode, controller_id);
  std::map<data::GCGVirtualDiceType,unsigned int>::map(&this->dice_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_think_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_think_time_ms_);
  this->last_think_time_ms_ = 0LL;
};

// Line 46: range 000000000DF466CE-000000000DF466E1
PVEIntentionMgr *__cdecl GCGMonsterController::getPVEIntentionMgr(GCGMonsterController *const this)
{
  return &this->pve_intention_mgr_;
};

// Line 47: range 000000000DF466E2-000000000DF466F5
const PVEIntentionMgr *__cdecl GCGMonsterController::getPVEIntentionMgr(const GCGMonsterController *const this)
{
  return &this->pve_intention_mgr_;
};

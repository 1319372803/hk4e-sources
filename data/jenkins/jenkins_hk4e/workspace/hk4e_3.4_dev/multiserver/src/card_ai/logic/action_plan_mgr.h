// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/logic/action_plan_mgr.h

// Line 46: range 000000000E1D3302-000000000E1D3375
void __cdecl BT::CharacterCardInfoComparer::CharacterCardInfoComparer(
        BT::CharacterCardInfoComparer *const this,
        const data::GCGChooseExcelConfig *choose_config,
        GCGField *field)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->choose_config_ = choose_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->field_);
  this->field_ = field;
};

// Line 57: range 000000000E1D3376-000000000E1D33E9
void __cdecl BT::SummonCardInfoComparer::SummonCardInfoComparer(
        BT::SummonCardInfoComparer *const this,
        const data::GCGChooseExcelConfig *choose_config,
        GCGField *field)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->choose_config_ = choose_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->field_);
  this->field_ = field;
};

// Line 65: range 000000000DDE2E0C-000000000DDE2E2A
void __cdecl BT::ActionPlanMgr::~ActionPlanMgr(BT::ActionPlanMgr *const this)
{
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::~vector(&this->action_plan_vec_);
};

// Line 68: range 000000000D82A224-000000000D82A2B2
void __cdecl BT::ActionPlanMgr::ActionPlanMgr(
        BT::ActionPlanMgr *const this,
        GCGGameMode *game_mode,
        GCGControllerValue controller_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_controller_id_);
  }
  this->cur_controller_id_ = controller_id;
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(&this->action_plan_vec_);
};

// Line 72: range 000000000DF37574-000000000DF375A0
std::vector<std::shared_ptr<BT::ActionPlanBase>> *__cdecl BT::ActionPlanMgr::getPlans(
        std::vector<std::shared_ptr<BT::ActionPlanBase>> *retstr,
        const BT::ActionPlanMgr *const this)
{
  std::vector<std::shared_ptr<BT::ActionPlanBase>>::vector(retstr, &this->action_plan_vec_);
  return retstr;
};

// Line 110: range 000000000E1D33EA-000000000E1D341F
GCGGameMode *__cdecl BT::ActionPlanMgr::getGameMode(BT::ActionPlanMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  return this->game_mode_;
};

// Line 111: range 000000000E1D3420-000000000E1D3467
GCGControllerValue __cdecl BT::ActionPlanMgr::getControllerId(const BT::ActionPlanMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_controller_id_);
  }
  return this->cur_controller_id_;
};

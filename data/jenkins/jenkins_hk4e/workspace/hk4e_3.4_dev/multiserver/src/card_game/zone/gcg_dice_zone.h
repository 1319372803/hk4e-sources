// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/zone/gcg_dice_zone.h

// Line 24: range 000000000DF8B590-000000000DF8B62D
GCGDiceZoneRuntimeData *__cdecl GCGDiceZoneRuntimeData::operator=(
        GCGDiceZoneRuntimeData *const this,
        const GCGDiceZoneRuntimeData *a2)
{
  uint32_t reroll_idx; // ecx

  std::vector<proto::GCGDiceSideType>::operator=(&this->dice_vec_, &a2->dice_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reroll_idx_);
  }
  reroll_idx = a2->reroll_idx_;
  if ( *(_BYTE *)(((unsigned __int64)&this->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reroll_idx_);
  }
  this->reroll_idx_ = reroll_idx;
  return this;
};

// Line 24: range 000000000DF5286A-000000000DF528C2
void __cdecl GCGDiceZoneRuntimeData::GCGDiceZoneRuntimeData(GCGDiceZoneRuntimeData *const this)
{
  std::vector<proto::GCGDiceSideType>::vector(&this->dice_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reroll_idx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reroll_idx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reroll_idx_);
  }
  this->reroll_idx_ = 0;
};

// Line 24: range 000000000D8254EA-000000000D825504
void __cdecl GCGDiceZoneRuntimeData::~GCGDiceZoneRuntimeData(GCGDiceZoneRuntimeData *const this)
{
  std::vector<proto::GCGDiceSideType>::~vector(&this->dice_vec_);
};

// Line 35: range 000000000D825536-000000000D825560
void __cdecl GCGDiceZone::~GCGDiceZone(GCGDiceZone *const this)
{
  std::vector<proto::GCGDiceSideType>::~vector(&this->candidate_side_vec_);
  GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(this);
};

// Line 43: range 000000000DF37A36-000000000DF37A7D
GCGControllerValue __cdecl GCGDiceZone::getControllerId(const GCGDiceZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 48: range 000000000DF37A7E-000000000DF37ACD
uint32_t __cdecl GCGDiceZone::getMaxDiceSize(const GCGDiceZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_dice_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_dice_num_);
  }
  return this->max_dice_num_;
};

// Line 57: range 000000000D8253BA-000000000D825405
bool __cdecl GCGDiceZone::isNoNeedCost(GCGDiceZone *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_no_need_cost_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_no_need_cost_);
  return this->is_no_need_cost_;
};

// Line 57: range 000000000D825366-000000000D8253B9
void __cdecl GCGDiceZone::setNoNeedCost(GCGDiceZone *const this, bool is_no_need_cost)
{
  if ( *(char *)(((unsigned __int64)&this->is_no_need_cost_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_no_need_cost_);
  this->is_no_need_cost_ = is_no_need_cost;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/duel/gcg_field.h

// Line 25: range 000000000DFA9330-000000000DFA95BF
GCGRoundVarMgr *__cdecl GCGRoundVarMgr::operator=(GCGRoundVarMgr *const this, const GCGRoundVarMgr *a2)
{
  GCGControllerValue controller_id; // ecx
  uint32_t round_reboot_times; // ecx
  uint32_t die_character_count; // ecx
  uint32_t change_on_stage_character_guid; // ecx
  uint32_t ai_direct_use_skill_total_num; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  controller_id = a2->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->controller_id_ = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->round_reboot_times_);
  }
  round_reboot_times = a2->round_reboot_times_;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_reboot_times_);
  }
  this->round_reboot_times_ = round_reboot_times;
  std::unordered_map<unsigned int,unsigned int>::operator=(
    &this->round_play_card_count_map_,
    &a2->round_play_card_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->die_character_count_);
  }
  die_character_count = a2->die_character_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_character_count_);
  }
  this->die_character_count_ = die_character_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->change_on_stage_character_guid_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->change_on_stage_character_guid_);
  }
  change_on_stage_character_guid = a2->change_on_stage_character_guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_on_stage_character_guid_);
  }
  this->change_on_stage_character_guid_ = change_on_stage_character_guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ai_direct_use_skill_total_num_);
  }
  ai_direct_use_skill_total_num = a2->ai_direct_use_skill_total_num_;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_direct_use_skill_total_num_);
  }
  this->ai_direct_use_skill_total_num_ = ai_direct_use_skill_total_num;
  return this;
};

// Line 25: range 000000000D85DD40-000000000D85DE9F
void __cdecl GCGRoundVarMgr::GCGRoundVarMgr(GCGRoundVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_reboot_times_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_reboot_times_);
  }
  this->round_reboot_times_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->round_play_card_count_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->die_character_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->die_character_count_);
  }
  this->die_character_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_on_stage_character_guid_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_on_stage_character_guid_);
  }
  this->change_on_stage_character_guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_direct_use_skill_total_num_);
  }
  this->ai_direct_use_skill_total_num_ = 0;
};

// Line 25: range 000000000D8255DA-000000000D8255F8
void __cdecl GCGRoundVarMgr::~GCGRoundVarMgr(GCGRoundVarMgr *const this)
{
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->round_play_card_count_map_);
};

// Line 48: range 000000000DF37ACE-000000000DF37ADF
const std::unordered_map<unsigned int,unsigned int> *__cdecl GCGRoundVarMgr::getRoundPlayCardCountMap(
        const GCGRoundVarMgr *const this)
{
  return &this->round_play_card_count_map_;
};

// Line 71: range 000000000D82569A-000000000D8256F1
void __cdecl GCGCharacterWaitingZone::GCGCharacterWaitingZone(GCGCharacterWaitingZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->cur_index = 0;
  std::vector<data::GCGWaitingCharacterInfo>::vector(&this->waiting_queue);
};

// Line 71: range 000000000D8256F2-000000000D825710
void __cdecl GCGCharacterWaitingZone::~GCGCharacterWaitingZone(GCGCharacterWaitingZone *const this)
{
  std::vector<data::GCGWaitingCharacterInfo>::~vector(&this->waiting_queue);
};

// Line 76: range 000000000D825406-000000000D825466
bool __cdecl GCGCharacterWaitingZone::empty(GCGCharacterWaitingZone *const this)
{
  std::vector<data::GCGWaitingCharacterInfo>::size_type cur_index; // rbx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  cur_index = this->cur_index;
  return cur_index >= std::vector<data::GCGWaitingCharacterInfo>::size(&this->waiting_queue);
};

// Line 77: range 000000000DF37AE0-000000000DF37B38
GCGWaitingCharacterInfo *__cdecl GCGCharacterWaitingZone::front(GCGCharacterWaitingZone *const this)
{
  std::vector<data::GCGWaitingCharacterInfo> *p_waiting_queue; // rcx

  p_waiting_queue = &this->waiting_queue;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return std::vector<data::GCGWaitingCharacterInfo>::operator[](p_waiting_queue, this->cur_index);
};

// Line 78: range 000000000DF37B3A-000000000DF37B98
void __cdecl GCGCharacterWaitingZone::pop(GCGCharacterWaitingZone *const this)
{
  if ( !GCGCharacterWaitingZone::empty(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    ++this->cur_index;
  }
};

// Line 79: range 000000000D825468-000000000D825490
void __cdecl GCGCharacterWaitingZone::add(
        GCGCharacterWaitingZone *const this,
        const GCGWaitingCharacterInfo *waiting_info)
{
  std::vector<data::GCGWaitingCharacterInfo>::push_back(&this->waiting_queue, waiting_info);
};

// Line 80: range 000000000D825492-000000000D8254E8
void __cdecl GCGCharacterWaitingZone::clear(GCGCharacterWaitingZone *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->cur_index = 0;
  std::vector<data::GCGWaitingCharacterInfo>::clear(&this->waiting_queue);
};

// Line 92: range 000000000DFA95C0-000000000DFA95E8
GCGFieldRuntimeData *__cdecl GCGFieldRuntimeData::operator=(
        GCGFieldRuntimeData *const this,
        const GCGFieldRuntimeData *a2)
{
  GCGRoundVarMgr::operator=(&this->round_var_mgr_, &a2->round_var_mgr_);
  return this;
};

// Line 92: range 000000000D85DEA0-000000000D85DEBA
void __cdecl GCGFieldRuntimeData::GCGFieldRuntimeData(GCGFieldRuntimeData *const this)
{
  GCGRoundVarMgr::GCGRoundVarMgr(&this->round_var_mgr_);
};

// Line 92: range 000000000D8255FA-000000000D825614
void __cdecl GCGFieldRuntimeData::~GCGFieldRuntimeData(GCGFieldRuntimeData *const this)
{
  GCGRoundVarMgr::~GCGRoundVarMgr(&this->round_var_mgr_);
};

// Line 109: range 000000000D825922-000000000D825E30
void __cdecl GCGField::GCGField(GCGField *const this, GCGGameMode *game_mode, GCGControllerValue controller_id)
{
  int (**v3)(...); // rdx
  GCGGameMode *v4; // rsi
  proto::GCGZoneType *v5; // rax
  proto::GCGZoneType *v6; // rsi
  proto::GCGZoneType *v7; // rax
  proto::GCGZoneType *v8; // rsi
  proto::GCGZoneType *v9; // rax
  proto::GCGZoneType *v10; // rsi
  proto::GCGZoneType *v11; // rax
  proto::GCGZoneType *v12; // rsi
  proto::GCGZoneType *v13; // rax
  proto::GCGZoneType *v14; // rsi
  proto::GCGZoneType *v15; // rax
  int v17; // [rsp+28h] [rbp-28h] BYREF
  int v18; // [rsp+2Ch] [rbp-24h] BYREF
  int v19; // [rsp+30h] [rbp-20h] BYREF
  int v20; // [rsp+34h] [rbp-1Ch] BYREF
  int v21; // [rsp+38h] [rbp-18h] BYREF
  int v22; // [rsp+3Ch] [rbp-14h] BYREF

  GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>,
    game_mode);
  v3 = (int (**)(...))(&`vtable for'GCGField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGField = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_field_init_);
  }
  this->is_field_init_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_show_id_);
  }
  this->field_show_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_back_show_id_);
  }
  this->card_back_show_id_ = 0;
  v4 = this->game_mode_;
  GCGDiceZone::GCGDiceZone(&this->dice_zone_, v4);
  v17 = 2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v5 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->hand_zone_ptr_ >> 3) + 0x7FFF8000) )
    v5 = (proto::GCGZoneType *)__asan_report_store16(&this->hand_zone_ptr_, v4);
  v6 = v5;
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->hand_zone_ptr_,
    v5,
    (GCGGameMode *)&v17,
    (proto::GCGZoneType *)&this->hand_zone_ptr_);
  v18 = 3;
  v7 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->character_zone_ptr_ >> 3) + 0x7FFF8000) )
    v7 = (proto::GCGZoneType *)__asan_report_store16(&this->character_zone_ptr_, v6);
  v8 = v7;
  common::tools::perf::make_shared<GCGCharacterZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->character_zone_ptr_,
    v7,
    (GCGGameMode *)&v18,
    (proto::GCGZoneType *)&this->character_zone_ptr_);
  v19 = 1;
  v9 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->deck_zone_ptr_ >> 3) + 0x7FFF8000) )
    v9 = (proto::GCGZoneType *)__asan_report_store16(&this->deck_zone_ptr_, v8);
  v10 = v9;
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->deck_zone_ptr_,
    v9,
    (GCGGameMode *)&v19,
    (proto::GCGZoneType *)&this->deck_zone_ptr_);
  v20 = 7;
  v11 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->assist_zone_ptr_ >> 3) + 0x7FFF8000) )
    v11 = (proto::GCGZoneType *)__asan_report_store16(&this->assist_zone_ptr_, v10);
  v12 = v11;
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->assist_zone_ptr_,
    v11,
    (GCGGameMode *)&v20,
    (proto::GCGZoneType *)&this->assist_zone_ptr_);
  v21 = 5;
  v13 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->summon_zone_ptr_ >> 3) + 0x7FFF8000) )
    v13 = (proto::GCGZoneType *)__asan_report_store16(&this->summon_zone_ptr_, v12);
  v14 = v13;
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->summon_zone_ptr_,
    v13,
    (GCGGameMode *)&v21,
    (proto::GCGZoneType *)&this->summon_zone_ptr_);
  v22 = 8;
  v15 = (proto::GCGZoneType *)this->game_mode_;
  if ( *(_WORD *)(((unsigned __int64)&this->on_stage_zone_ptr_ >> 3) + 0x7FFF8000) )
    v15 = (proto::GCGZoneType *)__asan_report_store16(&this->on_stage_zone_ptr_, v14);
  common::tools::perf::make_shared<GCGCardZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->on_stage_zone_ptr_,
    v15,
    (GCGGameMode *)&v22,
    (proto::GCGZoneType *)&this->on_stage_zone_ptr_);
  GCGCharacterWaitingZone::GCGCharacterWaitingZone(&this->waiting_zone_);
  GCGCostReviseInfo::GCGCostReviseInfo(&this->cost_revise_);
  if ( *(char *)(((unsigned __int64)&this->is_passed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_passed_);
  this->is_passed_ = 0;
};

// Line 116: range 000000000DD873F2-000000000DD8741C
void __cdecl GCGField::~GCGField(GCGField *const this)
{
  GCGField::~GCGField(this);
  operator delete(this, 0x250uLL);
};

// Line 116: range 000000000DD872FE-000000000DD873F1
void __cdecl GCGField::~GCGField(GCGField *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGField + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGField = v1;
  GCGCostReviseInfo::~GCGCostReviseInfo(&this->cost_revise_);
  GCGCharacterWaitingZone::~GCGCharacterWaitingZone(&this->waiting_zone_);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->on_stage_zone_ptr_);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->summon_zone_ptr_);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->assist_zone_ptr_);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->deck_zone_ptr_);
  std::shared_ptr<GCGCharacterZone>::~shared_ptr(&this->character_zone_ptr_);
  std::shared_ptr<GCGCardZone>::~shared_ptr(&this->hand_zone_ptr_);
  GCGDiceZone::~GCGDiceZone(&this->dice_zone_);
  GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(&this->GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>);
};

// Line 120: range 000000000D825E32-000000000D825E84
void __cdecl GCGField::setFieldShowId(GCGField *const this, uint32_t field_show_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_show_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_show_id_);
  }
  this->field_show_id_ = field_show_id;
};

// Line 121: range 000000000D825E86-000000000D825EE0
void __cdecl GCGField::setCardBackShowId(GCGField *const this, uint32_t card_back_show_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_back_show_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_back_show_id_);
  }
  this->card_back_show_id_ = card_back_show_id;
};

// Line 124: range 000000000D825F30-000000000D825F7C
GCGControllerValue __cdecl GCGField::getControllerId(GCGField *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 124: range 000000000D825EE2-000000000D825F2F
bool __cdecl GCGField::isPassed(GCGField *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_passed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_passed_);
  return this->is_passed_;
};

// Line 128: range 000000000D825F7E-000000000D825FD0
bool __cdecl GCGField::isFieldInit(const GCGField *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_field_init_);
  }
  return this->is_field_init_;
};

// Line 129: range 000000000D825FD2-000000000D826024
void __cdecl GCGField::setFieldInit(GCGField *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_field_init_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_field_init_);
  }
  this->is_field_init_ = 1;
};

// Line 141: range 000000000D826026-000000000D826039
GCGDiceZone *__cdecl GCGField::getDiceZone(GCGField *const this)
{
  return &this->dice_zone_;
};

// Line 142: range 000000000D82603A-000000000D826059
GCGCardZone *__cdecl GCGField::getHandZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hand_zone_ptr_);
};

// Line 143: range 000000000D82607A-000000000D826099
GCGCardZone *__cdecl GCGField::getDeckZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->deck_zone_ptr_);
};

// Line 143: range 000000000D82605A-000000000D826079
GCGCharacterZone *__cdecl GCGField::getCharacterZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->character_zone_ptr_);
};

// Line 144: range 000000000D82609A-000000000D8260AD
GCGCharacterWaitingZone *__cdecl GCGField::getWaitingZone(GCGField *const this)
{
  return &this->waiting_zone_;
};

// Line 145: range 000000000DF37B9A-000000000DF37BB9
GCGCardZone *__cdecl GCGField::getAssistZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->assist_zone_ptr_);
};

// Line 146: range 000000000DF37BBA-000000000DF37BD9
GCGCardZone *__cdecl GCGField::getSummonZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->summon_zone_ptr_);
};

// Line 147: range 000000000DF37BDA-000000000DF37BF9
GCGCardZone *__cdecl GCGField::getOnStageZone(GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->on_stage_zone_ptr_);
};

// Line 147: range 000000000DF37BFA-000000000DF37C19
const GCGCharacterZone *__cdecl GCGField::getCharacterZone(const GCGField *const this)
{
  return std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCharacterZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->character_zone_ptr_);
};

// Line 148: range 000000000D8260AE-000000000D8260CD
void __cdecl GCGField::clearCostRevise(GCGField *const this)
{
  GCGCostReviseInfo::clear(&this->cost_revise_);
};

// Line 152: range 000000000E1D354A-000000000E1D3591
uint32_t __cdecl GCGRoundVarMgr::getAIDirectUseSkillTotalNum(const GCGRoundVarMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_direct_use_skill_total_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ai_direct_use_skill_total_num_);
  }
  return this->ai_direct_use_skill_total_num_;
};

// Line 155: range 000000000DF37C1A-000000000DF37C39
const GCGCardZone *__cdecl GCGField::getAssistZone(const GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->assist_zone_ptr_);
};

// Line 156: range 000000000DF37C3A-000000000DF37C59
const GCGCardZone *__cdecl GCGField::getSummonZone(const GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->summon_zone_ptr_);
};

// Line 157: range 000000000DF37C5A-000000000DF37C79
const GCGCardZone *__cdecl GCGField::getOnStageZone(const GCGField *const this)
{
  return std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->on_stage_zone_ptr_);
};

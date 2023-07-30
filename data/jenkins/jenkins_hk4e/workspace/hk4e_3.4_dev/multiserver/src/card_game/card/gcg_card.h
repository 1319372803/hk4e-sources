// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/card/gcg_card.h

// Line 32: range 000000000D99AEC0-000000000D99B19A
void __cdecl GCGCardDetailInfo::GCGCardDetailInfo(GCGCardDetailInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGCardDetailInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardDetailInfo = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid_);
  }
  this->guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type_);
  }
  this->card_type_ = GCG_CARD_INVALID;
  std::map<data::GCGTokenType,unsigned int>::map(&this->tokens_map_);
  std::set<data::GCGTagType>::set(&this->tag_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_state_);
  }
  this->show_state_ = SHOW_STATE_HIDDEN;
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->face_type_);
  }
  this->face_type_ = GCG_CARD_FACE_NORMAL;
  std::vector<unsigned int>::vector(&this->skill_id_vec_);
  std::vector<GCGSkillLimitsInfo>::vector(&this->skill_limits_info_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_has_notify_limits_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_notify_limits_);
  this->is_has_notify_limits_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zone_type_);
  }
  this->zone_type_ = GCG_ZONE_INVALID;
  if ( *(char *)(((unsigned __int64)&this->is_play_card_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_card_);
  this->is_play_card_ = 0;
};

// Line 32: range 000000000DD01A2E-000000000DD01F61
void __cdecl GCGCardDetailInfo::GCGCardDetailInfo(GCGCardDetailInfo *const this, GCGCardDetailInfo *a2)
{
  int (**v2)(...); // rdx
  uint32_t card_id; // ecx
  uint32_t guid; // ecx
  GCGControllerValue controller_id; // ecx
  GCGCardType card_type; // ecx
  GCGCardShowState show_state; // ecx
  GCGCardFaceType face_type; // ecx
  bool is_has_notify_limits; // cl
  GCGZoneType zone_type; // ecx
  bool is_play_card; // cl

  v2 = (int (**)(...))(&`vtable for'GCGCardDetailInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardDetailInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->card_id_);
  }
  card_id = a2->card_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = card_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->guid_);
  }
  guid = a2->guid_;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid_);
  }
  this->guid_ = guid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->controller_id_);
  }
  controller_id = a2->controller_id_;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->card_type_);
  }
  card_type = a2->card_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type_);
  }
  this->card_type_ = card_type;
  std::map<data::GCGTokenType,unsigned int>::map(&this->tokens_map_, &a2->tokens_map_);
  std::set<data::GCGTagType>::set(&this->tag_set_, &a2->tag_set_);
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->show_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->show_state_);
  }
  show_state = a2->show_state_;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_state_);
  }
  this->show_state_ = show_state;
  if ( *(_BYTE *)(((unsigned __int64)&a2->face_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->face_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->face_type_);
  }
  face_type = a2->face_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->face_type_);
  }
  this->face_type_ = face_type;
  std::vector<unsigned int>::vector(&this->skill_id_vec_, &a2->skill_id_vec_);
  std::vector<GCGSkillLimitsInfo>::vector(&this->skill_limits_info_vec_, &a2->skill_limits_info_vec_);
  if ( *(char *)(((unsigned __int64)&a2->is_has_notify_limits_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_has_notify_limits_);
  is_has_notify_limits = a2->is_has_notify_limits_;
  if ( *(char *)(((unsigned __int64)&this->is_has_notify_limits_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_has_notify_limits_);
  this->is_has_notify_limits_ = is_has_notify_limits;
  if ( *(_BYTE *)(((unsigned __int64)&a2->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->zone_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->zone_type_);
  }
  zone_type = a2->zone_type_;
  if ( *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->zone_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->zone_type_);
  }
  this->zone_type_ = zone_type;
  if ( *(char *)(((unsigned __int64)&a2->is_play_card_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_play_card_);
  is_play_card = a2->is_play_card_;
  if ( *(char *)(((unsigned __int64)&this->is_play_card_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_play_card_);
  this->is_play_card_ = is_play_card;
};

// Line 32: range 000000000DA5E9FC-000000000DA5EA7F
void __cdecl GCGCardDetailInfo::~GCGCardDetailInfo(GCGCardDetailInfo *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGCardDetailInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGCardDetailInfo = v1;
  std::vector<GCGSkillLimitsInfo>::~vector(&this->skill_limits_info_vec_);
  std::vector<unsigned int>::~vector(&this->skill_id_vec_);
  std::set<data::GCGTagType>::~set(&this->tag_set_);
  std::map<data::GCGTokenType,unsigned int>::~map(&this->tokens_map_);
};

// Line 57: range 000000000E1F6DBE-000000000E1F6F30
GCGCardRuntimeData *__cdecl GCGCardRuntimeData::operator=(GCGCardRuntimeData *const this, const GCGCardRuntimeData *a2)
{
  bool is_active; // cl
  GCGCardShowState show_state; // ecx

  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_active = a2->is_active_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_active_ = is_active;
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->show_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->show_state_);
  }
  show_state = a2->show_state_;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_state_);
  }
  this->show_state_ = show_state;
  std::map<data::GCGTokenType,unsigned int>::operator=(&this->tokens_map_, &a2->tokens_map_);
  std::weak_ptr<GCGCard>::operator=(&this->owner_card_wtr_, &a2->owner_card_wtr_);
  std::weak_ptr<GCGCardZone>::operator=(&this->zone_wtr_, &a2->zone_wtr_);
  std::map<proto::GCGDiceSideType,unsigned int>::operator=(&this->absorb_unused_dice_map_, &a2->absorb_unused_dice_map_);
  return this;
};

// Line 57: range 000000000E1DA932-000000000E1DA9FC
void __cdecl GCGCardRuntimeData::GCGCardRuntimeData(GCGCardRuntimeData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_active_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_state_);
  }
  this->show_state_ = SHOW_STATE_HIDDEN;
  std::map<data::GCGTokenType,unsigned int>::map(&this->tokens_map_);
  std::weak_ptr<GCGCard>::weak_ptr(&this->owner_card_wtr_);
  std::weak_ptr<GCGCardZone>::weak_ptr(&this->zone_wtr_);
  std::map<proto::GCGDiceSideType,unsigned int>::map(&this->absorb_unused_dice_map_);
};

// Line 57: range 000000000E1D3632-000000000E1D3680
void __cdecl GCGCardRuntimeData::~GCGCardRuntimeData(GCGCardRuntimeData *const this)
{
  std::map<proto::GCGDiceSideType,unsigned int>::~map(&this->absorb_unused_dice_map_);
  std::weak_ptr<GCGCardZone>::~weak_ptr(&this->zone_wtr_);
  std::weak_ptr<GCGCard>::~weak_ptr(&this->owner_card_wtr_);
  std::map<data::GCGTokenType,unsigned int>::~map(&this->tokens_map_);
};

// Line 73: range 000000000E2E846E-000000000E2E8528
void __cdecl GCGCard::~GCGCard(GCGCard *const this)
{
  std::unordered_set<data::GCGTriggerType>::~unordered_set(&this->card_skill_trigger_set_);
  std::unordered_multiset<GCGEffectCategoryType>::~unordered_multiset(&this->card_skill_category_set_);
  std::vector<data::GCGChooseExcelConfig>::~vector(&this->choose_cond_vec_);
  std::map<data::GCGCostType,unsigned int>::~map(&this->cost_map_);
  std::vector<std::shared_ptr<GCGSkill>>::~vector(&this->skill_vec_);
  std::shared_ptr<GCGModifyZone>::~shared_ptr(&this->modify_card_zone_ptr_);
  std::set<data::GCGTagType>::~set(&this->tag_set_);
  std::string::~string(&this->desc_);
  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(&this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>);
  std::enable_shared_from_this<GCGCard>::~enable_shared_from_this(this);
};

// Line 81: range 000000000E1D35CD-000000000E1D3631
std::string *__cdecl GCGCard::getTypeDesc[abi:cxx11](std::string *retstr)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "Card", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 83: range 000000000E1D3708-000000000E1D3B81
void __cdecl GCGCard::GCGCard(GCGCard *const this, GCGGameMode *game_mode, uint32_t id)
{
  proto::GCGZoneType *v3; // rax
  int v5; // [rsp+2Ch] [rbp-14h] BYREF

  std::enable_shared_from_this<GCGCard>::enable_shared_from_this(this);
  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>,
    game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode);
  this->game_mode = game_mode;
  std::string::basic_string(&this->desc_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid_);
  }
  this->guid_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_type_);
  }
  this->card_type_ = GCG_CARD_INVALID;
  std::set<data::GCGTagType>::set(&this->tag_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->face_type_);
  }
  this->face_type_ = GCG_CARD_FACE_NORMAL;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_token_type_);
  }
  this->show_token_type_ = GCG_TOKEN_NONE;
  v5 = 4;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode);
  v3 = (proto::GCGZoneType *)this->game_mode;
  if ( *(_WORD *)(((unsigned __int64)&this->modify_card_zone_ptr_ >> 3) + 0x7FFF8000) )
    v3 = (proto::GCGZoneType *)__asan_report_store16(&this->modify_card_zone_ptr_, (((_BYTE)this - 100) & 7u) + 3);
  common::tools::perf::make_shared<GCGModifyZone,GCGGameMode &,proto::GCGZoneType>(
    (GCGGameMode *)&this->modify_card_zone_ptr_,
    v3,
    (GCGGameMode *)&v5,
    (proto::GCGZoneType *)&this->modify_card_zone_ptr_);
  std::vector<std::shared_ptr<GCGSkill>>::vector(&this->skill_vec_);
  std::map<data::GCGCostType,unsigned int>::map(&this->cost_map_);
  std::vector<data::GCGChooseExcelConfig>::vector(&this->choose_cond_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->element_type_);
  }
  this->element_type_ = GCG_ELEMENT_PHYSIC;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_remove_after_die_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_remove_after_die_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_remove_after_die_);
  }
  this->is_remove_after_die_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_preview_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_preview_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_need_preview_);
  }
  this->is_need_preview_ = 0;
  std::unordered_multiset<GCGEffectCategoryType>::unordered_multiset(&this->card_skill_category_set_);
  std::unordered_set<data::GCGTriggerType>::unordered_set(&this->card_skill_trigger_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id_);
  }
  this->card_id_ = id;
};

// Line 92: range 000000000D826BE4-000000000D826C13
std::string *__cdecl GCGCard::getDesc[abi:cxx11](std::string *retstr, const GCGCard *const this)
{
  std::string::basic_string(retstr, &this->desc_);
  return retstr;
};

// Line 93: range 000000000D826C14-000000000D826C60
uint32_t __cdecl GCGCard::getId(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_id_);
  }
  return this->card_id_;
};

// Line 94: range 000000000D826C62-000000000D826CB6
uint32_t __cdecl GCGCard::getGuid(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->guid_);
  }
  return this->guid_;
};

// Line 95: range 000000000D826CB8-000000000D826D0C
GCGCardType __cdecl GCGCard::getCardType(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->card_type_);
  }
  return this->card_type_;
};

// Line 96: range 000000000D826D0E-000000000D826D5A
GCGControllerValue __cdecl GCGCard::getControllerId(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->controller_id_);
  }
  return this->controller_id_;
};

// Line 97: range 000000000E1D3B82-000000000E1D3BD4
void __cdecl GCGCard::setFaceType(GCGCard *const this, GCGCardFaceType face_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->face_type_);
  }
  this->face_type_ = face_type;
};

// Line 98: range 000000000DF37F78-000000000DF37FC4
GCGCardFaceType __cdecl GCGCard::getFaceType(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->face_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->face_type_);
  }
  return this->face_type_;
};

// Line 99: range 000000000D826D5C-000000000D826DAE
bool __cdecl GCGCard::isRemoveAfterDie(GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_remove_after_die_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_remove_after_die_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_remove_after_die_);
  }
  return this->is_remove_after_die_;
};

// Line 104: range 000000000D826DB0-000000000D826DC3
const std::vector<data::GCGChooseExcelConfig> *__cdecl GCGCard::getChooseConfig(const GCGCard *const this)
{
  return &this->choose_cond_vec_;
};

// Line 108: range 000000000E1D3BD6-000000000E1D3C02
void __cdecl GCGCard::setChooseConfig(GCGCard *const this, std::vector<data::GCGChooseExcelConfig> *p_choose_cond_vec)
{
  std::vector<data::GCGChooseExcelConfig>::operator=(&this->choose_cond_vec_, p_choose_cond_vec);
};

// Line 132: range 000000000D826DC4-000000000D826DE3
GCGModifyZone *__cdecl GCGCard::getModifyZone(GCGCard *const this)
{
  return std::__shared_ptr_access<GCGModifyZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGModifyZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->modify_card_zone_ptr_);
};

// Line 133: range 000000000DF37FC6-000000000DF37FE5
const GCGModifyZone *__cdecl GCGCard::getModifyZone(const GCGCard *const this)
{
  return std::__shared_ptr_access<GCGModifyZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGModifyZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->modify_card_zone_ptr_);
};

// Line 133: range 000000000DF37FE6-000000000DF37FF9
const std::unordered_multiset<GCGEffectCategoryType> *__cdecl GCGCard::getEffectCategorySet(const GCGCard *const this)
{
  return &this->card_skill_category_set_;
};

// Line 148: range 000000000D826DE4-000000000D826EE7
bool __fastcall GCGCard::isHasTag(const GCGCard *const this, GCGTagType tag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<data::GCGTagType>::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_const_iterator<data::GCGTagType>::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 tag:148";
  *(_QWORD *)(v2 + 16) = GCGCard::isHasTag;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = tag;
  __y._M_node = std::set<data::GCGTagType>::cend(&this->tag_set_)._M_node;
  __x._M_node = std::set<data::GCGTagType>::find(
                  &this->tag_set_,
                  (const std::set<data::GCGTagType>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 149: range 000000000E1D3C04-000000000E1D3C17
const std::set<data::GCGTagType> *__cdecl GCGCard::getTags(const GCGCard *const this)
{
  return &this->tag_set_;
};

// Line 155: range 000000000D826EE8-000000000D826F0B
bool __cdecl GCGCard::isAlive(const GCGCard *const this)
{
  return (unsigned int)GCGCard::getToken(this, GCG_TOKEN_HP) != 0;
};

// Line 157: range 000000000D826F0C-000000000D826F58
GCGEffectElementType __cdecl GCGCard::getElementType(GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->element_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->element_type_);
  }
  return this->element_type_;
};

// Line 201: range 000000000E1D3C18-000000000E1D3CEF
bool __fastcall GCGCard::isHasEffect(const GCGCard *const this, GCGEffectCategoryType effect_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 effect_type:201";
  *(_QWORD *)(v2 + 16) = GCGCard::isHasEffect;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = effect_type;
  result = std::unordered_multiset<GCGEffectCategoryType>::count(
             &this->card_skill_category_set_,
             (const std::unordered_multiset<GCGEffectCategoryType>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 204: range 000000000E1D3CF0-000000000E1D3D4B
void __cdecl GCGCard::setShowTokenType(GCGCard *const this, GCGTokenType show_token_type__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_token_type_);
  }
  this->show_token_type_ = show_token_type__out;
};

// Line 206: range 000000000E36EE56-000000000E36EF2D
bool __fastcall GCGCard::isHasTrigger(GCGCard *const this, GCGTriggerType trigger_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 trigger_type:206";
  *(_QWORD *)(v2 + 16) = GCGCard::isHasTrigger;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = trigger_type;
  result = std::unordered_set<data::GCGTriggerType>::count(
             &this->card_skill_trigger_set_,
             (const std::unordered_set<data::GCGTriggerType>::key_type *)(v2 + 32)) != 0;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 216: range 000000000E36EF2E-000000000E36EF80
bool __cdecl GCGCard::isConfigNeedPreview(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_need_preview_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_preview_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_need_preview_);
  }
  return this->is_need_preview_;
};

// Line 243: range 000000000DF37FFA-000000000DF3804E
GCGTokenType __cdecl GCGCard::getShowTokenType(const GCGCard *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_token_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->show_token_type_);
  }
  return this->show_token_type_;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/common/gcg_common.h

// Line 48: range 000000000DAF5998-000000000DAF59D2
void __cdecl GCGBeingHurtResult::~GCGBeingHurtResult(GCGBeingHurtResult *const this)
{
  std::shared_ptr<GCGCard>::~shared_ptr(&this->target_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->source_card_ptr);
  std::shared_ptr<GCGSkill>::~shared_ptr(&this->skill_ptr);
};

// Line 48: range 000000000DAE42CA-000000000DAE42E8
void __cdecl GCGPlayCardCostInfo::~GCGPlayCardCostInfo(GCGPlayCardCostInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->cost_map);
};

// Line 48: range 000000000DAE4312-000000000DAE4330
void __cdecl GCGSelectOnStageCostInfo::~GCGSelectOnStageCostInfo(GCGSelectOnStageCostInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->cost_map);
};

// Line 75: range 000000000DD2E042-000000000DD2E082
void __cdecl GCGSkillInfo::GCGSkillInfo(GCGSkillInfo *const this, GCGSkillInfo *a2)
{
  std::shared_ptr<GCGCard>::shared_ptr(&this->card_ptr, &a2->card_ptr);
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
};

// Line 129: range 000000000DF37478-000000000DF374A4
data::ConfigGCGEffectPtr __cdecl GCGEffectBase::getConfig(const GCGEffectBase *const this)
{
  __int64 v1; // rsi
  data::ConfigGCGEffectPtr result; // rax

  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    (const std::shared_ptr<data::ConfigGCGEffect> *)(v1 + 40));
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000000DF46548-000000000DF46685
GCGControllerShowData *__cdecl GCGControllerShowData::operator=(
        GCGControllerShowData *const this,
        const GCGControllerShowData *a2)
{
  uint32_t score; // ecx
  uint32_t level; // ecx

  std::string::operator=(this, a2);
  proto::ProfilePicture::operator=(&this->profile_picture, &a2->profile_picture);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->score);
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->level);
  }
  level = a2->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level);
  }
  this->level = level;
  return this;
};

// Line 136: range 000000000D8278BE-000000000D82798F
void __cdecl GCGControllerShowData::GCGControllerShowData(GCGControllerShowData *const this)
{
  std::string::basic_string(this);
  proto::ProfilePicture::ProfilePicture(&this->profile_picture);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level);
  }
  this->level = 0;
};

// Line 136: range 000000000D827990-000000000D8279BA
void __cdecl GCGControllerShowData::~GCGControllerShowData(GCGControllerShowData *const this)
{
  proto::ProfilePicture::~ProfilePicture(&this->profile_picture);
  std::string::~string(this);
};

// Line 144: range 000000000E1D45CE-000000000E1D47A5
void __cdecl GCGControllerParam::GCGControllerParam(GCGControllerParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_group_id = 0;
  std::vector<unsigned int>::vector(&this->card_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_back_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_back_id);
  }
  this->card_back_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->field_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->field_id);
  }
  this->field_id = 0;
  std::map<unsigned int,data::GCGCardFaceType>::map(&this->card_face_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = 0;
  GCGControllerShowData::GCGControllerShowData(&this->show_data);
  std::vector<std::shared_ptr<GCGChallenge>>::vector(&this->challenge_vec);
  std::vector<unsigned int>::vector(&this->forbid_finish_challenge_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_version);
  }
  this->client_version = 0;
};

// Line 144: range 000000000E1D47A6-000000000E1D4808
void __cdecl GCGControllerParam::~GCGControllerParam(GCGControllerParam *const this)
{
  std::vector<unsigned int>::~vector(&this->forbid_finish_challenge_vec);
  std::vector<std::shared_ptr<GCGChallenge>>::~vector(&this->challenge_vec);
  GCGControllerShowData::~GCGControllerShowData(&this->show_data);
  std::map<unsigned int,data::GCGCardFaceType>::~map(&this->card_face_map);
  std::vector<unsigned int>::~vector(&this->card_vec);
};

// Line 166: range 000000000E1D480A-000000000E1D4961
void __cdecl GCGGameModeParam::GCGGameModeParam(GCGGameModeParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->game_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->seed);
  }
  this->seed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->business_type);
  }
  this->business_type = GCG_GAME_NONE;
  GCGControllerParam::GCGControllerParam(&this->controller_a);
  GCGControllerParam::GCGControllerParam(&this->controller_b);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_create_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->try_create_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->try_create_time);
  }
  this->try_create_time = 0;
};

// Line 166: range 000000000E1D4962-000000000E1D4992
void __cdecl GCGGameModeParam::~GCGGameModeParam(GCGGameModeParam *const this)
{
  GCGControllerParam::~GCGControllerParam(&this->controller_b);
  GCGControllerParam::~GCGControllerParam(&this->controller_a);
};

// Line 183: range 000000000D82EAAE-000000000D82EB3A
void __cdecl GCGSkillUseParam::~GCGSkillUseParam(GCGSkillUseParam *const this)
{
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->reaction_source_skill_wtr);
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&this->trigger_window_param_ptr);
  std::vector<unsigned int>::~vector(&this->param_guid_vec);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->die_card_owner_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->die_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->target_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->source_card_ptr);
  std::shared_ptr<GCGSkill>::~shared_ptr(&this->skill_ptr);
};

// Line 185: range 000000000D82E88C-000000000D82EAAD
void __cdecl GCGSkillUseParam::GCGSkillUseParam(GCGSkillUseParam *const this)
{
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type);
  }
  this->trigger_type = GCG_TRIGGER_ON_USE;
  std::shared_ptr<GCGCard>::shared_ptr(&this->source_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->target_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->die_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->die_card_owner_ptr);
  std::vector<unsigned int>::vector(&this->param_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_category_type);
  }
  this->effect_category_type = ACTIVE_CATEGORY;
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->trigger_window_param_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_result_seq);
  }
  this->from_result_seq = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_element_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_element_type);
  }
  this->damage_element_type = GCG_ELEMENT_PHYSIC;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_damage);
  this->is_ignore_damage = 0;
  std::weak_ptr<GCGSkill>::weak_ptr(&this->reaction_source_skill_wtr);
};

// Line 186: range 000000000E36F280-000000000E36F6C7
void __cdecl GCGSkillUseParam::GCGSkillUseParam(GCGSkillUseParam *const this, const GCGSkillUseParam *a2)
{
  GCGTriggerType trigger_type; // ecx
  GCGControllerValue controller_id; // ecx
  GCGEffectCategoryType effect_category_type; // ecx
  uint32_t from_result_seq; // ecx
  GCGEffectElementType damage_element_type; // ecx
  bool is_ignore_damage; // cl

  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->trigger_type);
  }
  trigger_type = a2->trigger_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_type);
  }
  this->trigger_type = trigger_type;
  std::shared_ptr<GCGCard>::shared_ptr(&this->source_card_ptr, &a2->source_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->target_card_ptr, &a2->target_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->die_card_ptr, &a2->die_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->die_card_owner_ptr, &a2->die_card_owner_ptr);
  std::vector<unsigned int>::vector(&this->param_guid_vec, &a2->param_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->controller_id);
  }
  controller_id = a2->controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->controller_id);
  }
  this->controller_id = controller_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->effect_category_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->effect_category_type);
  }
  effect_category_type = a2->effect_category_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_category_type);
  }
  this->effect_category_type = effect_category_type;
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->trigger_window_param_ptr, &a2->trigger_window_param_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->from_result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->from_result_seq);
  }
  from_result_seq = a2->from_result_seq;
  if ( *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_result_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_result_seq);
  }
  this->from_result_seq = from_result_seq;
  if ( *(_BYTE *)(((unsigned __int64)&a2->damage_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->damage_element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->damage_element_type);
  }
  damage_element_type = a2->damage_element_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_element_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_element_type);
  }
  this->damage_element_type = damage_element_type;
  if ( *(char *)(((unsigned __int64)&a2->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ignore_damage);
  is_ignore_damage = a2->is_ignore_damage;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_damage);
  this->is_ignore_damage = is_ignore_damage;
  std::weak_ptr<GCGSkill>::weak_ptr(&this->reaction_source_skill_wtr, &a2->reaction_source_skill_wtr);
};

// Line 190: range 000000000E1D2C02-000000000E1D2C2B
void __cdecl GCGSkillUseParam::setTriggerWindowParam(
        GCGSkillUseParam *const this,
        const GCGSkillUseParamPtr *param_ptr)
{
  std::shared_ptr<GCGSkillUseParam>::operator=(&this->trigger_window_param_ptr, param_ptr);
};

// Line 201: range 000000000D824772-000000000D8247C8
void __cdecl GCGSkillUseParam::setEffectCategroyType(GCGSkillUseParam *const this, GCGEffectCategoryType category_type)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_category_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_category_type);
  }
  this->effect_category_type = category_type;
};

// Line 233: range 000000000E3FB0FE-000000000E3FB141
GCGSkillInfo *__cdecl GCGSkillInfo::operator=(GCGSkillInfo *const this, GCGSkillInfo *a2)
{
  std::shared_ptr<GCGCard>::operator=(&this->card_ptr, &a2->card_ptr);
  std::shared_ptr<GCGSkill>::operator=(&this->skill_ptr, &a2->skill_ptr);
  return this;
};

// Line 233: range 000000000E3FB1A2-000000000E3FB1E5
GCGSkillInfo *__cdecl GCGSkillInfo::operator=(GCGSkillInfo *const this, const GCGSkillInfo *a2)
{
  std::shared_ptr<GCGCard>::operator=(&this->card_ptr, &a2->card_ptr);
  std::shared_ptr<GCGSkill>::operator=(&this->skill_ptr, &a2->skill_ptr);
  return this;
};

// Line 233: range 000000000D9CBEB0-000000000D9CBEDA
void __cdecl GCGSkillInfo::GCGSkillInfo(GCGSkillInfo *const this)
{
  std::shared_ptr<GCGCard>::shared_ptr(&this->card_ptr);
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr);
};

// Line 233: range 000000000E3FB23C-000000000E3FB27C
void __cdecl GCGSkillInfo::GCGSkillInfo(GCGSkillInfo *const this, const GCGSkillInfo *a2)
{
  std::shared_ptr<GCGCard>::shared_ptr(&this->card_ptr, &a2->card_ptr);
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
};

// Line 233: range 000000000DA94D0A-000000000DA94D34
void __cdecl GCGSkillInfo::~GCGSkillInfo(GCGSkillInfo *const this)
{
  std::shared_ptr<GCGSkill>::~shared_ptr(&this->skill_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->card_ptr);
};

// Line 240: range 000000000E1D88A2-000000000E1D89A4
void __cdecl GCGDamageParam::GCGDamageParam(GCGDamageParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->element_type);
  }
  this->element_type = GCG_ELEMENT_PHYSIC;
  if ( *(char *)(((unsigned __int64)&this->is_real_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_real_damage);
  this->is_real_damage = 0;
  std::vector<GCGSkillInfo>::vector(&this->damage_detail_vec);
  std::shared_ptr<GCGCard>::shared_ptr(&this->damage_src_card_ptr, 0LL);
  std::shared_ptr<GCGCard>::shared_ptr(&this->damage_target_card_ptr, 0LL);
};

// Line 240: range 000000000E1D89A6-000000000E1D89E4
void __cdecl GCGDamageParam::~GCGDamageParam(GCGDamageParam *const this)
{
  std::shared_ptr<GCGCard>::~shared_ptr(&this->damage_target_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->damage_src_card_ptr);
  std::vector<GCGSkillInfo>::~vector(&this->damage_detail_vec);
};

// Line 268: range 000000000E02D52C-000000000E02D5C7
GCGAttackCostInfo *__cdecl GCGAttackCostInfo::operator=(GCGAttackCostInfo *const this, const GCGAttackCostInfo *a2)
{
  uint32_t skill_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = skill_id;
  std::map<unsigned int,unsigned int>::operator=(&this->cost_map, &a2->cost_map);
  return this;
};

// Line 268: range 000000000DFDAB64-000000000DFDABBB
void __cdecl GCGAttackCostInfo::GCGAttackCostInfo(GCGAttackCostInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = 0;
  std::map<unsigned int,unsigned int>::map(&this->cost_map);
};

// Line 268: range 000000000E0B5FCE-000000000E0B6066
void __cdecl GCGAttackCostInfo::GCGAttackCostInfo(GCGAttackCostInfo *const this, GCGAttackCostInfo *a2)
{
  uint32_t skill_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = skill_id;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 268: range 000000000E02D7C0-000000000E02D858
void __cdecl GCGAttackCostInfo::GCGAttackCostInfo(GCGAttackCostInfo *const this, const GCGAttackCostInfo *a2)
{
  uint32_t skill_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = skill_id;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 268: range 000000000DAE4282-000000000DAE42A0
void __cdecl GCGAttackCostInfo::~GCGAttackCostInfo(GCGAttackCostInfo *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->cost_map);
};

// Line 276: range 000000000E02DAD4-000000000E02DB6F
GCGPlayCardCostInfo *__cdecl GCGPlayCardCostInfo::operator=(
        GCGPlayCardCostInfo *const this,
        const GCGPlayCardCostInfo *a2)
{
  uint32_t card_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  std::map<unsigned int,unsigned int>::operator=(&this->cost_map, &a2->cost_map);
  return this;
};

// Line 276: range 000000000DFDAFE0-000000000DFDB037
void __cdecl GCGPlayCardCostInfo::GCGPlayCardCostInfo(GCGPlayCardCostInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = 0;
  std::map<unsigned int,unsigned int>::map(&this->cost_map);
};

// Line 276: range 000000000E0B60BE-000000000E0B6156
void __cdecl GCGPlayCardCostInfo::GCGPlayCardCostInfo(GCGPlayCardCostInfo *const this, GCGPlayCardCostInfo *a2)
{
  uint32_t card_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 276: range 000000000E02DD68-000000000E02DE00
void __cdecl GCGPlayCardCostInfo::GCGPlayCardCostInfo(GCGPlayCardCostInfo *const this, const GCGPlayCardCostInfo *a2)
{
  uint32_t card_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_id = a2->card_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_id = card_id;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 284: range 000000000E02E07C-000000000E02E117
GCGSelectOnStageCostInfo *__cdecl GCGSelectOnStageCostInfo::operator=(
        GCGSelectOnStageCostInfo *const this,
        const GCGSelectOnStageCostInfo *a2)
{
  uint32_t card_guid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = card_guid;
  std::map<unsigned int,unsigned int>::operator=(&this->cost_map, &a2->cost_map);
  return this;
};

// Line 284: range 000000000DFDB45C-000000000DFDB4B3
void __cdecl GCGSelectOnStageCostInfo::GCGSelectOnStageCostInfo(GCGSelectOnStageCostInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = 0;
  std::map<unsigned int,unsigned int>::map(&this->cost_map);
};

// Line 284: range 000000000E0B61AE-000000000E0B6246
void __cdecl GCGSelectOnStageCostInfo::GCGSelectOnStageCostInfo(
        GCGSelectOnStageCostInfo *const this,
        GCGSelectOnStageCostInfo *a2)
{
  uint32_t card_guid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = card_guid;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 284: range 000000000E02E310-000000000E02E3A8
void __cdecl GCGSelectOnStageCostInfo::GCGSelectOnStageCostInfo(
        GCGSelectOnStageCostInfo *const this,
        const GCGSelectOnStageCostInfo *a2)
{
  uint32_t card_guid; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = card_guid;
  std::map<unsigned int,unsigned int>::map(&this->cost_map, &a2->cost_map);
};

// Line 292: range 000000000DF4698C-000000000DF46AEE
GCGCostReviseInfo *__cdecl GCGCostReviseInfo::operator=(GCGCostReviseInfo *const this, const GCGCostReviseInfo *a2)
{
  uint32_t operation_seq; // ecx
  bool is_can_attack; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  operation_seq = a2->operation_seq;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->operation_seq = operation_seq;
  std::vector<GCGAttackCostInfo>::operator=(&this->attack_cost_vec, &a2->attack_cost_vec);
  std::vector<GCGPlayCardCostInfo>::operator=(&this->play_card_cost_vec, &a2->play_card_cost_vec);
  std::vector<GCGSelectOnStageCostInfo>::operator=(&this->select_on_stage_cost_vec, &a2->select_on_stage_cost_vec);
  std::vector<unsigned int>::operator=(&this->can_use_hand_card_id_vec, &a2->can_use_hand_card_id_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_can_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_can_attack);
  is_can_attack = a2->is_can_attack;
  if ( *(char *)(((unsigned __int64)&this->is_can_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_attack);
  this->is_can_attack = is_can_attack;
  return this;
};

// Line 292: range 000000000D82580E-000000000D8258D0
void __cdecl GCGCostReviseInfo::GCGCostReviseInfo(GCGCostReviseInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->operation_seq = 0;
  std::vector<GCGAttackCostInfo>::vector(&this->attack_cost_vec);
  std::vector<GCGPlayCardCostInfo>::vector(&this->play_card_cost_vec);
  std::vector<GCGSelectOnStageCostInfo>::vector(&this->select_on_stage_cost_vec);
  std::vector<unsigned int>::vector(&this->can_use_hand_card_id_vec);
  if ( *(char *)(((unsigned __int64)&this->is_can_attack >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_attack);
  this->is_can_attack = 0;
};

// Line 292: range 000000000D8258D2-000000000D825920
void __cdecl GCGCostReviseInfo::~GCGCostReviseInfo(GCGCostReviseInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->can_use_hand_card_id_vec);
  std::vector<GCGSelectOnStageCostInfo>::~vector(&this->select_on_stage_cost_vec);
  std::vector<GCGPlayCardCostInfo>::~vector(&this->play_card_cost_vec);
  std::vector<GCGAttackCostInfo>::~vector(&this->attack_cost_vec);
};

// Line 305: range 000000000D8358D8-000000000D8358F6
void __cdecl LogContext::~LogContext(LogContext *const this)
{
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream(&this->data);
};

// Line 307: range 000000000D82483E-000000000D824897
void __cdecl LogContext::LogContext(LogContext *const this, uint32_t skill_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = skill_id;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream(&this->data);
};

// Line 320: range 000000000D824898-000000000D824AC8
void __cdecl GCGEffectContext::GCGEffectContext(
        GCGEffectContext *const this,
        const GCGSkillUseParam *skill_param,
        const LogContext *log_context,
        bool is_ignore_log)
{
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v4; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->skill_param = skill_param;
  std::any::any(&this->cur_context);
  if ( *(char *)(((unsigned __int64)&this->is_trigger_condition >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trigger_condition);
  this->is_trigger_condition = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_context >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->log_context);
  this->log_context = log_context;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_log);
  }
  this->is_ignore_log = is_ignore_log;
  if ( !is_ignore_log )
  {
    v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           &log_context->data,
           "checkCondition ");
    if ( *(char *)(((unsigned __int64)&this->is_trigger_condition >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_trigger_condition);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, this->is_trigger_condition);
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, " skill:");
    if ( *(_BYTE *)(((unsigned __int64)log_context >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)log_context >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(log_context);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, log_context->skill_id);
  }
};

// Line 329: range 000000000E1D2C2C-000000000E1D2E36
void __cdecl GCGEffectContext::GCGEffectContext(GCGEffectContext *const this, const GCGEffectContext *other_context)
{
  const GCGSkillUseParam *skill_param; // rdx
  const LogContext *log_context; // rdx
  uint32_t v4; // ecx
  bool is_ignore_log; // cl

  if ( *(_BYTE *)(((unsigned __int64)other_context >> 3) + 0x7FFF8000) )
    __asan_report_load8(other_context);
  skill_param = other_context->skill_param;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->skill_param = skill_param;
  std::any::any(&this->cur_context, &other_context->cur_context);
  if ( *(char *)(((unsigned __int64)&this->is_trigger_condition >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_trigger_condition);
  this->is_trigger_condition = 0;
  if ( *(_BYTE *)(((unsigned __int64)&other_context->log_context >> 3) + 0x7FFF8000) )
    __asan_report_load8(&other_context->log_context);
  log_context = other_context->log_context;
  if ( *(_BYTE *)(((unsigned __int64)&this->log_context >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->log_context);
  this->log_context = log_context;
  if ( *(_BYTE *)(((unsigned __int64)&other_context->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other_context->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&other_context->level);
  }
  v4 = other_context->level + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level);
  }
  this->level = v4;
  if ( *(_BYTE *)(((unsigned __int64)&other_context->is_ignore_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)other_context + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&other_context->is_ignore_log >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&other_context->is_ignore_log);
  }
  is_ignore_log = other_context->is_ignore_log;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_log);
  }
  this->is_ignore_log = is_ignore_log;
};

// Line 334: range 000000000DC3224E-000000000DC32369
void __cdecl GCGControllerOpInfo::GCGControllerOpInfo(GCGControllerOpInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->last_global_op_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_op_dup >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_op_dup >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_op_dup);
  }
  this->last_op_dup = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_global_op_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_global_op_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_global_op_id);
  }
  this->cur_global_op_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_op >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_op >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_first_op);
  }
  this->is_first_op = 1;
};

// Line 338: range 000000000D824ACA-000000000D824C0C
void __cdecl GCGEffectContext::~GCGEffectContext(GCGEffectContext *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-40h] BYREF
  std::string val; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level);
  }
  if ( !this->level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_log >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_ignore_log);
    }
    if ( !this->is_ignore_log )
    {
      common::milog::MiLogStream::create(
        &v1,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/card_game/common/gcg_common.h",
        "~GCGEffectContext",
        342);
      if ( *(_BYTE *)(((unsigned __int64)&this->log_context >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->log_context);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](&val, &this->log_context->data);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v1, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v1);
    }
  }
  std::any::~any(&this->cur_context);
};

// Line 346: range 000000000E1D2E38-000000000E1D2E61
void __cdecl GCGEffectContext::resetCurContext(GCGEffectContext *const this, const std::any *current_context)
{
  std::any::operator=(&this->cur_context, current_context);
};

// Line 351: range 000000000E1D2E62-000000000E1D2E9C
const LogContext *__cdecl GCGEffectContext::getLogContext(const GCGEffectContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->log_context >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->log_context);
  return this->log_context;
};

// Line 362: range 000000000E393FA6-000000000E3940C8
GCGSkillPreviewUseInfo *__cdecl GCGSkillPreviewUseInfo::operator=(
        GCGSkillPreviewUseInfo *const this,
        GCGSkillPreviewUseInfo *a2)
{
  uint32_t cost_num; // ecx
  uint32_t increase_num; // ecx

  std::weak_ptr<GCGSkill>::operator=(&this->skill_wtr, &a2->skill_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_num);
  }
  cost_num = a2->cost_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_num);
  }
  this->cost_num = cost_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->increase_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->increase_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->increase_num);
  }
  increase_num = a2->increase_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->increase_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->increase_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->increase_num);
  }
  this->increase_num = increase_num;
  return this;
};

// Line 362: range 000000000DAF5810-000000000DAF582A
void __cdecl GCGSkillPreviewUseInfo::~GCGSkillPreviewUseInfo(GCGSkillPreviewUseInfo *const this)
{
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->skill_wtr);
};

// Line 371: range 000000000DD71062-000000000DD7108C
void __cdecl GCGSkillPreviewCostPayInfo::~GCGSkillPreviewCostPayInfo(GCGSkillPreviewCostPayInfo *const this)
{
  std::shared_ptr<GCGCard>::~shared_ptr(&this->cost_card_ptr);
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->skill_wtr);
};

// Line 379: range 000000000D82DEB6-000000000D82DF54
void __cdecl GCGSelectOnstageResult::GCGSelectOnstageResult(GCGSelectOnstageResult *const this)
{
  std::vector<GCGSkillPreviewUseInfo>::vector(&this->select_onstage_cost_preview_skill_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->select_onstage_cost_revise_result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->select_onstage_cost_revise_result >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->select_onstage_cost_revise_result);
  }
  this->select_onstage_cost_revise_result = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_onstage_increase_cost_result >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_onstage_increase_cost_result >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->select_onstage_increase_cost_result);
  }
  this->select_onstage_increase_cost_result = 0;
};

// Line 379: range 000000000D82DF56-000000000D82DF70
void __cdecl GCGSelectOnstageResult::~GCGSelectOnstageResult(GCGSelectOnstageResult *const this)
{
  std::vector<GCGSkillPreviewUseInfo>::~vector(&this->select_onstage_cost_preview_skill_vec);
};

// Line 386: range 000000000E36EFDE-000000000E36F065
void __cdecl GCGBeingHurtResult::GCGBeingHurtResult(GCGBeingHurtResult *const this)
{
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, 0LL);
  std::shared_ptr<GCGCard>::shared_ptr(&this->source_card_ptr, 0LL);
  std::shared_ptr<GCGCard>::shared_ptr(&this->target_card_ptr, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_card_guid);
  }
  this->target_card_guid = 0;
};

// Line 386: range 000000000E3A28FE-000000000E3A29CE
void __cdecl GCGBeingHurtResult::GCGBeingHurtResult(GCGBeingHurtResult *const this, GCGBeingHurtResult *a2)
{
  uint32_t target_card_guid; // ecx

  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->source_card_ptr, &a2->source_card_ptr);
  std::shared_ptr<GCGCard>::shared_ptr(&this->target_card_ptr, &a2->target_card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_card_guid);
  }
  target_card_guid = a2->target_card_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_card_guid);
  }
  this->target_card_guid = target_card_guid;
};

// Line 396: range 000000000D82E0FA-000000000D82E388
void __cdecl GCGSkillResult::GCGSkillResult(GCGSkillResult *const this)
{
  std::vector<GCGSkillInfo>::vector(&this->skill_info_vec);
  std::optional<int>::optional(&this->damage_revise_result_opt);
  std::optional<int>::optional(&this->reroll_times_revise_opt);
  std::optional<bool>::optional(&this->select_on_stage_is_quick_revise_result_opt);
  std::vector<proto::GCGDiceSideType>::vector(&this->fix_dice_vec_result);
  std::optional<data::GCGEffectElementType>::optional(&this->attach_element_result_opt);
  if ( *(_BYTE *)(((unsigned __int64)&this->shield_deduction_damage_result >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shield_deduction_damage_result >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shield_deduction_damage_result);
  }
  this->shield_deduction_damage_result = 0;
  std::optional<unsigned int>::optional(&this->damage_multiple_revise_opt);
  std::optional<int>::optional(&this->being_hit_damage_revise_result_opt);
  std::optional<unsigned int>::optional(&this->damage_reduce_to_half_revise_opt);
  GCGSelectOnstageResult::GCGSelectOnstageResult(&this->select_onstage_result);
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::map(&this->dice_cost_revise_preview_skills_map);
  std::optional<data::GCGEffectElementType>::optional(&this->cost_element_type_opt);
  std::optional<unsigned int>::optional(&this->assign_use_skill_id_opt);
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::map(&this->pay_card_replace_pay_preview_map);
  std::vector<std::shared_ptr<GCGSkill>>::vector(&this->cur_real_take_effect_skill_ptr_vec);
  std::vector<std::function<int ()(void)>>::vector(&this->cur_real_task_effect_delay_func_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->final_damage);
  }
  this->final_damage = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_after_effect >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_after_effect >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ignore_after_effect);
  }
  this->is_ignore_after_effect = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_seq >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_seq >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_seq);
  }
  this->effect_seq = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->result_seq >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->result_seq);
  }
  this->result_seq = 0;
  std::vector<unsigned int>::vector(&this->die_character_vec);
  std::vector<GCGBeingHurtResult>::vector(&this->being_hurt_result_vec);
};

// Line 396: range 000000000D82E38A-000000000D82E430
void __cdecl GCGSkillResult::~GCGSkillResult(GCGSkillResult *const this)
{
  std::vector<GCGBeingHurtResult>::~vector(&this->being_hurt_result_vec);
  std::vector<unsigned int>::~vector(&this->die_character_vec);
  std::vector<std::function<int ()(void)>>::~vector(&this->cur_real_task_effect_delay_func_vec);
  std::vector<std::shared_ptr<GCGSkill>>::~vector(&this->cur_real_take_effect_skill_ptr_vec);
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewCostPayInfo>>::~map(&this->pay_card_replace_pay_preview_map);
  std::map<data::GCGEffectCostType,std::vector<GCGSkillPreviewUseInfo>>::~map(&this->dice_cost_revise_preview_skills_map);
  GCGSelectOnstageResult::~GCGSelectOnstageResult(&this->select_onstage_result);
  std::vector<proto::GCGDiceSideType>::~vector(&this->fix_dice_vec_result);
  std::vector<GCGSkillInfo>::~vector(&this->skill_info_vec);
};

// Line 450: range 000000000E36D82D-000000000E36D8A1
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)11,int>::getSkillResult(
        const GCGSkillResult *result,
        int32_t *damage)
{
  int v2; // ecx
  int __u; // [rsp+1Ch] [rbp-4h] BYREF

  __u = 0;
  v2 = std::optional<int>::value_or<int>(&result->being_hit_damage_revise_result_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(damage);
  }
  *damage = v2;
  return 0;
};

// Line 461: range 000000000E1D30A8-000000000E1D3165
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)1,int>::addSkillResult(
        GCGSkillResult *result,
        const int32_t *damage)
{
  int v2; // ecx
  int __u; // [rsp+10h] [rbp-10h] BYREF
  int __t; // [rsp+14h] [rbp-Ch] BYREF
  std::optional<int> v6; // [rsp+18h] [rbp-8h] BYREF

  __u = 0;
  v2 = std::optional<int>::value_or<int>(&result->damage_revise_result_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(damage);
  }
  __t = v2 + *damage;
  std::optional<int>::optional<int,true>(&v6, &__t);
  if ( *(_BYTE *)(((unsigned __int64)&result->damage_revise_result_opt >> 3) + 0x7FFF8000) )
    __asan_report_store8(&result->damage_revise_result_opt);
  result->damage_revise_result_opt = v6;
  return 0;
};

// Line 467: range 000000000E36D8A2-000000000E36D916
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)1,int>::getSkillResult(
        const GCGSkillResult *result,
        int32_t *damage)
{
  int v2; // ecx
  int __u; // [rsp+1Ch] [rbp-4h] BYREF

  __u = 0;
  v2 = std::optional<int>::value_or<int>(&result->damage_revise_result_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(damage);
  }
  *damage = v2;
  return 0;
};

// Line 478: range 000000000E1D3166-000000000E1D326D
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)12,int>::addSkillResult(
        GCGSkillResult *result,
        const int32_t *damage)
{
  unsigned int v2; // ecx
  int __u; // [rsp+10h] [rbp-10h] BYREF
  unsigned int __t; // [rsp+14h] [rbp-Ch] BYREF
  std::optional<unsigned int> v6; // [rsp+18h] [rbp-8h] BYREF

  __u = 0;
  v2 = std::optional<unsigned int>::value_or<int>(&result->damage_reduce_to_half_revise_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(damage);
  }
  __t = v2 + *damage;
  std::optional<unsigned int>::optional<unsigned int,true>(&v6, &__t);
  if ( (((unsigned __int8)result + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&result->damage_reduce_to_half_revise_opt >> 3)
                                                         + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->damage_reduce_to_half_revise_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&result->damage_reduce_to_half_revise_opt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 107) & 7) >= *(_BYTE *)(((unsigned __int64)(&result->damage_reduce_to_half_revise_opt._M_payload._M_engaged
                                                                             + 3) >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store_n(&result->damage_reduce_to_half_revise_opt, 8LL);
  }
  result->damage_reduce_to_half_revise_opt = v6;
  return 0;
};

// Line 484: range 000000000E36D917-000000000E36D98A
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)12,int>::getSkillResult(
        const GCGSkillResult *result,
        int32_t *damage)
{
  unsigned int v2; // edi
  int __u; // [rsp+1Ch] [rbp-4h] BYREF

  __u = 0;
  v2 = std::optional<unsigned int>::value_or<int>(&result->damage_reduce_to_half_revise_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    v2 = (unsigned int)damage;
    __asan_report_store4(damage);
  }
  *damage = v2;
  return 0;
};

// Line 505: range 000000000E0C00F4-000000000E0C011E
void __cdecl GCGEffectBase::~GCGEffectBase(GCGEffectBase *const this)
{
  GCGEffectBase::~GCGEffectBase(this);
  operator delete(this, 0x38uLL);
};

// Line 505: range 000000000E0C0082-000000000E0C00F3
void __cdecl GCGEffectBase::~GCGEffectBase(GCGEffectBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GCGEffectBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGEffectBase = v1;
  std::shared_ptr<data::ConfigGCGEffect>::~shared_ptr(&this->config_effect_ptr_);
  std::weak_ptr<GCGSkill>::~weak_ptr(&this->skill_wtr_);
  std::enable_shared_from_this<GCGEffectBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<GCGEffectBase>);
};

// Line 508: range 000000000DF3739C-000000000DF373AA
GCGEffectCategoryType __cdecl GCGEffectBase::getCategroyType(GCGEffectBase *const this)
{
  return 0;
};

// Line 511: range 000000000DF373AC-000000000DF373BA
bool __cdecl GCGEffectBase::isPreviewEffect(const GCGEffectBase *const this)
{
  return 0;
};

// Line 513: range 000000000DF373BC-000000000DF373D2
int32_t __cdecl GCGEffectBase::doEffect(
        GCGEffectBase *const this,
        const GCGSkillUseParam *skill_param,
        GCGSkillResult *result)
{
  return 0;
};

// Line 519: range 000000000DF374A6-000000000DF374F4
GCGSkillPtr __cdecl GCGEffectBase::getSkill(const GCGEffectBase *const this)
{
  __int64 v1; // rsi
  GCGSkillPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)this);
  result._M_ptr = (std::__shared_ptr<GCGSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 521: range 000000000DF374F6-000000000DF37544
GCGSkillPtr __cdecl GCGEffectBase::getSkill(GCGEffectBase *const this)
{
  __int64 v1; // rsi
  GCGSkillPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)this);
  result._M_ptr = (std::__shared_ptr<GCGSkill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 545: range 000000000E1D8F0A-000000000E1D8F7B
void __cdecl EffectHealHpParam::EffectHealHpParam(EffectHealHpParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->heal_amount = 0;
  std::shared_ptr<GCGCard>::shared_ptr(&this->heal_src_card_ptr, 0LL);
  std::shared_ptr<GCGCard>::shared_ptr(&this->heal_target_card_ptr, 0LL);
};

// Line 545: range 000000000E1D8F7C-000000000E1D8FAA
void __cdecl EffectHealHpParam::~EffectHealHpParam(EffectHealHpParam *const this)
{
  std::shared_ptr<GCGCard>::~shared_ptr(&this->heal_target_card_ptr);
  std::shared_ptr<GCGCard>::~shared_ptr(&this->heal_src_card_ptr);
};

// Line 569: range 000000000D835A30-000000000D835A87
void __cdecl GCGSkillLimitsInfo::GCGSkillLimitsInfo(GCGSkillLimitsInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = 0;
  std::vector<GCGLimitsInfo>::vector(&this->limits_info_vec);
};

// Line 575: range 000000000D826FCA-000000000D826FF8
void __cdecl GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode> *const this)
{
  GCGCardMgrRuntimeData::~GCGCardMgrRuntimeData(&this->snapshot_data_);
  GCGCardMgrRuntimeData::~GCGCardMgrRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000E1D3682-000000000E1D36B2
void __cdecl GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const this)
{
  GCGCardRuntimeData::~GCGCardRuntimeData(&this->snapshot_data_);
  GCGCardRuntimeData::~GCGCardRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000DF37A06-000000000DF37A34
void __cdecl GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode> *const this)
{
  GCGCharacterZoneRuntimeData::~GCGCharacterZoneRuntimeData(&this->snapshot_data_);
  GCGCharacterZoneRuntimeData::~GCGCharacterZoneRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000D825506-000000000D825534
void __cdecl GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode> *const this)
{
  GCGDiceZoneRuntimeData::~GCGDiceZoneRuntimeData(&this->snapshot_data_);
  GCGDiceZoneRuntimeData::~GCGDiceZoneRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000D826356-000000000D826386
void __cdecl GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode> *const this)
{
  GCGDuelRuntimeData::~GCGDuelRuntimeData(&this->snapshot_data_);
  GCGDuelRuntimeData::~GCGDuelRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000D825616-000000000D825644
void __cdecl GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode> *const this)
{
  GCGFieldRuntimeData::~GCGFieldRuntimeData(&this->snapshot_data_);
  GCGFieldRuntimeData::~GCGFieldRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000DF3760A-000000000DF37638
void __cdecl GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode> *const this)
{
  GCGSCardZoneRuntimeData::~GCGSCardZoneRuntimeData(&this->snapshot_data_);
  GCGSCardZoneRuntimeData::~GCGSCardZoneRuntimeData(&this->normal_data_);
};

// Line 575: range 000000000DF3EB02-000000000DF3EB30
void __cdecl GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode> *const this)
{
  GCGSkillRuntimeData::~GCGSkillRuntimeData(&this->snapshot_data_);
  GCGSkillRuntimeData::~GCGSkillRuntimeData(&this->normal_data_);
};

// Line 580: range 000000000D85F324-000000000D85F3C0
void __cdecl GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGCardMgrRuntimeData::GCGCardMgrRuntimeData(&this->normal_data_);
  GCGCardMgrRuntimeData::GCGCardMgrRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000E1DA9FE-000000000E1DAA9C
void __cdecl GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGCardRuntimeData::GCGCardRuntimeData(&this->normal_data_);
  GCGCardRuntimeData::GCGCardRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000D85D6FE-000000000D85D79A
void __cdecl GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGCharacterZoneRuntimeData::GCGCharacterZoneRuntimeData(&this->normal_data_);
  GCGCharacterZoneRuntimeData::GCGCharacterZoneRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000DF528C4-000000000DF52960
void __cdecl GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGDiceZoneRuntimeData::GCGDiceZoneRuntimeData(&this->normal_data_);
  GCGDiceZoneRuntimeData::GCGDiceZoneRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000D85EBDE-000000000D85EC7C
void __cdecl GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGDuelRuntimeData::GCGDuelRuntimeData(&this->normal_data_);
  GCGDuelRuntimeData::GCGDuelRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000D85DEBC-000000000D85DF58
void __cdecl GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGFieldRuntimeData::GCGFieldRuntimeData(&this->normal_data_);
  GCGFieldRuntimeData::GCGFieldRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000D8610AC-000000000D86114A
void __cdecl GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGGameModeRuntimeData::GCGGameModeRuntimeData(&this->normal_data_);
  GCGGameModeRuntimeData::GCGGameModeRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000D85CEB0-000000000D85CF4C
void __cdecl GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGSCardZoneRuntimeData::GCGSCardZoneRuntimeData(&this->normal_data_);
  GCGSCardZoneRuntimeData::GCGSCardZoneRuntimeData(&this->snapshot_data_);
};

// Line 580: range 000000000DF4FBCA-000000000DF4FC8D
void __cdecl GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
        GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode> *const this,
        GCGGameMode *game_mode)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->inner_game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->snapshot_id_);
  }
  this->snapshot_id_ = 0;
  GCGSkillRuntimeData::GCGSkillRuntimeData(&this->normal_data_);
  GCGSkillRuntimeData::GCGSkillRuntimeData(&this->snapshot_data_);
};

// Line 583: range 000000000E1FA64A-000000000E1FA79C
void __cdecl GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGCardMgrRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000E1F6F32-000000000E1F7086
void __cdecl GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGCardRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000DF88550-000000000DF886A2
void __cdecl GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGCharacterZoneRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000DF8B62E-000000000DF8B780
void __cdecl GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGDiceZoneRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000DFA8A0E-000000000DFA8B62
void __cdecl GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGDuelRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000DFA95EA-000000000DFA973C
void __cdecl GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGFieldRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000D9101FA-000000000D910423
void __cdecl GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    if ( *(char *)(((unsigned __int64)&this->snapshot_data_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->snapshot_data_.random_gen_._M_p + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->snapshot_data_.random_gen_._M_p + 7) >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->snapshot_data_, 5000LL);
    }
    if ( *(char *)(((unsigned __int64)&this->normal_data_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->normal_data_.random_gen_._M_p + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 105) & 7) >= *(_BYTE *)((((unsigned __int64)&this->normal_data_.random_gen_._M_p + 7) >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->normal_data_, 5000LL);
    }
    qmemcpy(&this->snapshot_data_, &this->normal_data_, sizeof(this->snapshot_data_));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000DF8669C-000000000DF867EE
void __cdecl GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGSCardZoneRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 583: range 000000000D93FBC0-000000000D93FD12
void __cdecl GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::refreshSnapshot(
        const GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode> *const this)
{
  uint32_t snapshot_id; // ebx
  char v2; // al
  uint32_t SnapshotVersionId; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( !GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->snapshot_id_);
  }
  snapshot_id = this->snapshot_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( snapshot_id == GCGGameMode::getSnapshotVersionId(this->inner_game_mode_) )
LABEL_10:
    v2 = 0;
  else
    v2 = 1;
  if ( v2 )
  {
    GCGSkillRuntimeData::operator=(&this->snapshot_data_, &this->normal_data_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    SnapshotVersionId = GCGGameMode::getSnapshotVersionId(this->inner_game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->snapshot_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->snapshot_id_);
    }
    this->snapshot_id_ = SnapshotVersionId;
  }
};

// Line 602: range 000000000E1E06A2-000000000E1E0701
const GCGCardMgrRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000E1DDD60-000000000E1DDDC1
const GCGCardRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000DF51E68-000000000DF51EC7
const GCGCharacterZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000DF54380-000000000DF543DF
const GCGDiceZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000DF76454-000000000DF764B5
const GCGDuelRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000DF76AA4-000000000DF76B03
const GCGFieldRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000DF50856-000000000DF508B5
const GCGSCardZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 602: range 000000000D888EA4-000000000D888F03
const GCGSkillRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(
        const GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000E1E0702-000000000E1E0761
GCGCardMgrRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCardMgrRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000E1DDDC2-000000000E1DDE23
GCGCardRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCardRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000DF51EC8-000000000DF51F27
GCGCharacterZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGCharacterZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000DF543E0-000000000DF5443F
GCGDiceZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGDiceZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000DF763F2-000000000DF76453
GCGDuelRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGDuelRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000DF76A44-000000000DF76AA3
GCGFieldRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGFieldRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000D861844-000000000D8618A5
GCGGameModeRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGGameModeRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000DF507F6-000000000DF50855
GCGSCardZoneRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGSCardZoneRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 617: range 000000000D887F52-000000000D887FB1
GCGSkillRuntimeData *__cdecl GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::getRuntimeData(
        GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode> *const this)
{
  GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::refreshSnapshot(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( GCGGameMode::isDuringSnapshot(this->inner_game_mode_) )
    return &this->snapshot_data_;
  else
    return &this->normal_data_;
};

// Line 645: range 000000000E36FB4E-000000000E36FBE0
void __cdecl GCGCardBriefInfo::GCGCardBriefInfo(GCGCardBriefInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = 0;
  std::map<data::GCGTokenType,unsigned int>::map(&this->token_map);
  if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_active);
  this->is_active = 0;
};

// Line 645: range 000000000E43370A-000000000E433818
void __cdecl GCGCardBriefInfo::GCGCardBriefInfo(GCGCardBriefInfo *const this, GCGCardBriefInfo *a2)
{
  uint32_t card_guid; // ecx
  bool is_active; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = card_guid;
  std::map<data::GCGTokenType,unsigned int>::map(&this->token_map, &a2->token_map);
  if ( *(char *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_active);
  is_active = a2->is_active;
  if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_active);
  this->is_active = is_active;
};

// Line 645: range 000000000E3A84F8-000000000E3A8606
void __cdecl GCGCardBriefInfo::GCGCardBriefInfo(GCGCardBriefInfo *const this, const GCGCardBriefInfo *a2)
{
  uint32_t card_guid; // ecx
  bool is_active; // cl

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  card_guid = a2->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->card_guid = card_guid;
  std::map<data::GCGTokenType,unsigned int>::map(&this->token_map, &a2->token_map);
  if ( *(char *)(((unsigned __int64)&a2->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_active);
  is_active = a2->is_active;
  if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_active);
  this->is_active = is_active;
};

// Line 645: range 000000000E36FBE2-000000000E36FC00
void __cdecl GCGCardBriefInfo::~GCGCardBriefInfo(GCGCardBriefInfo *const this)
{
  std::map<data::GCGTokenType,unsigned int>::~map(&this->token_map);
};

// Line 651: range 000000000E36D98C-000000000E36E36F
bool __cdecl GCGCardBriefInfo::checkEqual(const GCGCardBriefInfo *const this, const GCGCardBriefInfo *other)
{
  uint32_t card_guid; // ecx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  bool is_active; // cl
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type v15; // ebx
  const std::map<data::GCGTokenType,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type v28; // ebx
  const std::map<data::GCGTokenType,unsigned int>::mapped_type *v29; // rax
  _DWORD *v30; // rdx
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rbx
  const unsigned int *v36; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<data::GCGTokenType,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const std::map<data::GCGTokenType,unsigned int> *__for_range; // [rsp+30h] [rbp-70h]
  const std::map<data::GCGTokenType,unsigned int> *__for_range_0; // [rsp+38h] [rbp-68h]
  const std::pair<const data::GCGTokenType,unsigned int> *v42; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<const data::GCGTokenType,unsigned int> >::type *token_0; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *count_0; // [rsp+50h] [rbp-50h]
  const std::pair<const data::GCGTokenType,unsigned int> *v45; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<const data::GCGTokenType,unsigned int> >::type *token; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *count; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v48; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  card_guid = this->card_guid;
  if ( *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)other >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(other);
  }
  if ( card_guid == other->card_guid )
  {
    if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_active);
    is_active = this->is_active;
    if ( *(char *)(((unsigned __int64)&other->is_active >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&other->is_active);
    if ( is_active == other->is_active )
    {
      __for_range = &this->token_map;
      __for_begin._M_node = std::map<data::GCGTokenType,unsigned int>::begin(&this->token_map)._M_node;
      __for_end._M_node = std::map<data::GCGTokenType,unsigned int>::end(&this->token_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v45 = std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator*(&__for_begin);
        token = std::get<0ul,data::GCGTokenType const,unsigned int>(v45);
        count = (std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *)std::get<1ul,data::GCGTokenType const,unsigned int>(v45);
        if ( !std::map<data::GCGTokenType,unsigned int>::count(&other->token_map, token) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_common.h",
            "checkEqual",
            667);
          v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v48, (const char (*)[11])off_1BD91660);
          if ( *(_BYTE *)(((unsigned __int64)token >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)token & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(token);
          }
          val = *token;
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" count:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, count);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v14, (const char (*)[19])" not find in other");
          common::milog::MiLogStream::~MiLogStream(&v48);
          return 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        v15 = *count;
        v16 = std::map<data::GCGTokenType,unsigned int>::at(&other->token_map, token);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        if ( v15 != *v17 )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_common.h",
            "checkEqual",
            672);
          v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v48, (const char (*)[7])"token:");
          if ( *(_BYTE *)(((unsigned __int64)token >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)token & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(token);
          }
          val = *token;
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" count:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, count);
          v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v21,
                  (const char (*)[15])", other count:");
          v23 = std::map<data::GCGTokenType,unsigned int>::at(&other->token_map, token);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
          common::milog::MiLogStream::~MiLogStream(&v48);
          return 0;
        }
        std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator++(&__for_begin);
      }
      __for_range_0 = &other->token_map;
      __for_begin._M_node = std::map<data::GCGTokenType,unsigned int>::begin(&other->token_map)._M_node;
      __for_end._M_node = std::map<data::GCGTokenType,unsigned int>::end(__for_range_0)._M_node;
      while ( 1 )
      {
        if ( !std::operator!=(&__for_begin, &__for_end) )
          return 1;
        v42 = std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator*(&__for_begin);
        token_0 = std::get<0ul,data::GCGTokenType const,unsigned int>(v42);
        count_0 = (std::tuple_element<1,const std::pair<const data::GCGTokenType,unsigned int> >::type *)std::get<1ul,data::GCGTokenType const,unsigned int>(v42);
        if ( !std::map<data::GCGTokenType,unsigned int>::count(&this->token_map, token_0) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/common/gcg_common.h",
            "checkEqual",
            681);
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v48,
                  (const char (*)[13])"other token:");
          if ( *(_BYTE *)(((unsigned __int64)token_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)token_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(token_0);
          }
          val = *token_0;
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
          v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])" count:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, count_0);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v27, (const char (*)[17])" not find in cur");
          common::milog::MiLogStream::~MiLogStream(&v48);
          return 0;
        }
        if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count_0);
        }
        v28 = *count_0;
        v29 = std::map<data::GCGTokenType,unsigned int>::at(&this->token_map, token_0);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        if ( v28 != *v30 )
          break;
        std::_Rb_tree_const_iterator<std::pair<data::GCGTokenType const,unsigned int>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.h",
        "checkEqual",
        686);
      v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v48, (const char (*)[7])"token:");
      if ( *(_BYTE *)(((unsigned __int64)token_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)token_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)token_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(token_0);
      }
      val = *token_0;
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
      v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" other count:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, count_0);
      v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])", cur count:");
      v36 = std::map<data::GCGTokenType,unsigned int>::at(&this->token_map, token_0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, v36);
      common::milog::MiLogStream::~MiLogStream(&v48);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.h",
        "checkEqual",
        660);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v48, (const char (*)[15])off_1BD91620);
      if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_active);
      v9 = common::milog::MiLogStream::operator<<(v8, this->is_active);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", other:");
      if ( *(char *)(((unsigned __int64)&other->is_active >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&other->is_active);
      common::milog::MiLogStream::operator<<(v10, other->is_active);
      common::milog::MiLogStream::~MiLogStream(&v48);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.h",
      "checkEqual",
      655);
    v3 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v48, (const char (*)[10])off_1BD915A0);
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->card_guid);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])", other:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &other->card_guid);
    common::milog::MiLogStream::~MiLogStream(&v48);
    return 0;
  }
};

// Line 694: range 000000000E36FC02-000000000E36FC2C
void __cdecl GCGCharacterBriefInfo::GCGCharacterBriefInfo(GCGCharacterBriefInfo *const this)
{
  GCGCardBriefInfo::GCGCardBriefInfo(this);
  std::vector<unsigned int>::vector(&this->modify_vec);
};

// Line 694: range 000000000E43381A-000000000E43385A
void __cdecl GCGCharacterBriefInfo::GCGCharacterBriefInfo(GCGCharacterBriefInfo *const this, GCGCharacterBriefInfo *a2)
{
  GCGCardBriefInfo::GCGCardBriefInfo(this, a2);
  std::vector<unsigned int>::vector(&this->modify_vec, &a2->modify_vec);
};

// Line 694: range 000000000E3A8608-000000000E3A866B
void __cdecl GCGCharacterBriefInfo::GCGCharacterBriefInfo(
        GCGCharacterBriefInfo *const this,
        const GCGCharacterBriefInfo *a2)
{
  GCGCardBriefInfo::GCGCardBriefInfo(this, a2);
  std::vector<unsigned int>::vector(&this->modify_vec, &a2->modify_vec);
};

// Line 694: range 000000000E36FC2E-000000000E36FC58
void __cdecl GCGCharacterBriefInfo::~GCGCharacterBriefInfo(GCGCharacterBriefInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->modify_vec);
  GCGCardBriefInfo::~GCGCardBriefInfo(this);
};

// Line 697: range 000000000E36E370-000000000E36E48D
bool __cdecl GCGCharacterBriefInfo::checkEqual(
        const GCGCharacterBriefInfo *const this,
        const GCGCharacterBriefInfo *other)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( !GCGCardBriefInfo::checkEqual(this, other) )
    return 0;
  if ( !std::operator!=<unsigned int,std::allocator<unsigned int>>(&this->modify_vec, &other->modify_vec) )
    return 1;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/common/gcg_common.h",
    "checkEqual",
    705);
  v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v7, (const char (*)[12])off_1BD918A0);
  v4 = common::milog::MiLogStream::operator<<<unsigned int>(v3, &this->modify_vec);
  v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])", other:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, &other->modify_vec);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not equal");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return 0;
};

// Line 712: range 000000000E36F9CC-000000000E36FA16
void __cdecl GCGFieldBriefInfo::GCGFieldBriefInfo(GCGFieldBriefInfo *const this)
{
  std::vector<GCGCharacterBriefInfo>::vector(&this->character_vec);
  std::vector<GCGCardBriefInfo>::vector(&this->summon_vec);
  std::vector<GCGCardBriefInfo>::vector(&this->onstage_vec);
  std::vector<GCGCardBriefInfo>::vector(&this->hand_vec);
};

// Line 712: range 000000000E36FA18-000000000E36FA62
void __cdecl GCGFieldBriefInfo::~GCGFieldBriefInfo(GCGFieldBriefInfo *const this)
{
  std::vector<GCGCardBriefInfo>::~vector(&this->hand_vec);
  std::vector<GCGCardBriefInfo>::~vector(&this->onstage_vec);
  std::vector<GCGCardBriefInfo>::~vector(&this->summon_vec);
  std::vector<GCGCharacterBriefInfo>::~vector(&this->character_vec);
};

// Line 719: range 000000000E36E7D2-000000000E36ED1A
bool __cdecl GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo *const this, const GCGFieldBriefInfo *other)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<GCGCharacterBriefInfo>::size_type v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  bool result; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-A8h] BYREF
  GCGCharacterBriefInfo *cur; // [rsp+20h] [rbp-A0h]
  const GCGCharacterBriefInfo *compare; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 func:736";
  *(_QWORD *)(v2 + 16) = GCGFieldBriefInfo::checkEqual;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v5 = std::vector<GCGCharacterBriefInfo>::size(&this->character_vec);
  if ( v5 == std::vector<GCGCharacterBriefInfo>::size(&other->character_vec) )
  {
    for ( *(_QWORD *)(v2 + 32) = 0LL;
          std::vector<GCGCharacterBriefInfo>::size(&this->character_vec) > *(_QWORD *)(v2 + 32)
       && std::vector<GCGCharacterBriefInfo>::size(&other->character_vec) > *(_QWORD *)(v2 + 32);
          ++*(_QWORD *)(v2 + 32) )
    {
      cur = std::vector<GCGCharacterBriefInfo>::operator[](&this->character_vec, *(_QWORD *)(v2 + 32));
      compare = std::vector<GCGCharacterBriefInfo>::operator[](&other->character_vec, *(_QWORD *)(v2 + 32));
      if ( !GCGCharacterBriefInfo::checkEqual(cur, compare) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_common.h",
          "checkEqual",
          732);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v17,
                (const char (*)[17])"character index:");
        v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v12,
                (const unsigned __int64 *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" not euqal");
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0;
        goto LABEL_22;
      }
    }
    *(_QWORD *)(v2 + 32) = this;
    if ( !GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo const&)::{lambda(std::vector<GCGCardBriefInfo> const&,std::vector<GCGCardBriefInfo> const&)#1}::operator()(
            (const GCGFieldBriefInfo::checkEqual::<lambda(const std::vector<GCGCardBriefInfo>&, const std::vector<GCGCardBriefInfo>&)> *const)(v2 + 32),
            &this->summon_vec,
            &other->summon_vec) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.h",
        "checkEqual",
        757);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v17, (const char (*)[17])"summon not equal");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
    }
    else if ( !GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo const&)::{lambda(std::vector<GCGCardBriefInfo> const&,std::vector<GCGCardBriefInfo> const&)#1}::operator()(
                 (const GCGFieldBriefInfo::checkEqual::<lambda(const std::vector<GCGCardBriefInfo>&, const std::vector<GCGCardBriefInfo>&)> *const)(v2 + 32),
                 &this->onstage_vec,
                 &other->onstage_vec) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.h",
        "checkEqual",
        762);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v17, (const char (*)[22])"onstage_vec not equal");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
    }
    else if ( !GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo const&)::{lambda(std::vector<GCGCardBriefInfo> const&,std::vector<GCGCardBriefInfo> const&)#1}::operator()(
                 (const GCGFieldBriefInfo::checkEqual::<lambda(const std::vector<GCGCardBriefInfo>&, const std::vector<GCGCardBriefInfo>&)> *const)(v2 + 32),
                 &this->hand_vec,
                 &other->hand_vec) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/common/gcg_common.h",
        "checkEqual",
        767);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v17, (const char (*)[19])"hand_vec not equal");
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
    }
    else
    {
      result = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.h",
      "checkEqual",
      723);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v17, (const char (*)[20])off_1BD91A60);
    val = std::vector<GCGCharacterBriefInfo>::size(&this->character_vec);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", other:");
    *(_QWORD *)(v2 + 32) = std::vector<GCGCharacterBriefInfo>::size(&other->character_vec);
    v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v8,
           (const unsigned __int64 *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" not equal");
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
LABEL_22:
  if ( v18 == (char *)v2 )
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

// Line 736: range 000000000E36E48E-000000000E36E7D0
bool __cdecl GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo const&)::{lambda(std::vector<GCGCardBriefInfo> const&,std::vector<GCGCardBriefInfo> const&)#1}::operator()(
        const GCGFieldBriefInfo::checkEqual::<lambda(const std::vector<GCGCardBriefInfo>&, const std::vector<GCGCardBriefInfo>&)> *const __closure,
        const std::vector<GCGCardBriefInfo> *left,
        const std::vector<GCGCardBriefInfo> *right)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::vector<GCGCardBriefInfo>::size_type v6; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  bool result; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 val; // [rsp+28h] [rbp-A8h] BYREF
  const GCGCardBriefInfo *cur; // [rsp+30h] [rbp-A0h]
  const GCGCardBriefInfo *compare; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 i:743";
  *(_QWORD *)(v3 + 16) = GCGFieldBriefInfo::checkEqual(GCGFieldBriefInfo const&)::{lambda(std::vector<GCGCardBriefInfo> const&,std::vector<GCGCardBriefInfo> const&)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  v6 = std::vector<GCGCardBriefInfo>::size(left);
  if ( v6 == std::vector<GCGCardBriefInfo>::size(right) )
  {
    for ( *(_QWORD *)(v3 + 32) = 0LL;
          std::vector<GCGCardBriefInfo>::size(left) > *(_QWORD *)(v3 + 32)
       && std::vector<GCGCardBriefInfo>::size(right) > *(_QWORD *)(v3 + 32);
          ++*(_QWORD *)(v3 + 32) )
    {
      cur = std::vector<GCGCardBriefInfo>::operator[](left, *(_QWORD *)(v3 + 32));
      compare = std::vector<GCGCardBriefInfo>::operator[](right, *(_QWORD *)(v3 + 32));
      if ( !GCGCardBriefInfo::checkEqual(cur, compare) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/common/gcg_common.h",
          "operator()",
          749);
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v19, (const char (*)[12])"card index:");
        v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v13,
                (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" not euqal");
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0;
        goto LABEL_16;
      }
    }
    result = 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.h",
      "operator()",
      740);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v19, (const char (*)[20])off_1BD91980);
    val = std::vector<GCGCardBriefInfo>::size(left);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])", other:");
    *(_QWORD *)(v3 + 32) = std::vector<GCGCardBriefInfo>::size(right);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v9,
            (const unsigned __int64 *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" not equal");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0;
  }
LABEL_16:
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 774: range 000000000E36FA64-000000000E36FA8E
void __cdecl GCGGameBriefInfo::GCGGameBriefInfo(GCGGameBriefInfo *const this)
{
  GCGFieldBriefInfo::GCGFieldBriefInfo(&this->field1);
  GCGFieldBriefInfo::GCGFieldBriefInfo(&this->field2);
};

// Line 774: range 000000000E36FA90-000000000E36FABA
void __cdecl GCGGameBriefInfo::~GCGGameBriefInfo(GCGGameBriefInfo *const this)
{
  GCGFieldBriefInfo::~GCGFieldBriefInfo(&this->field2);
  GCGFieldBriefInfo::~GCGFieldBriefInfo(&this->field1);
};

// Line 779: range 000000000E36ED1C-000000000E36EE55
bool __cdecl GCGGameBriefInfo::checkEqual(GCGGameBriefInfo *const this, const GCGGameBriefInfo *other)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( !GCGFieldBriefInfo::checkEqual(&this->field1, &other->field1) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.h",
      "checkEqual",
      783);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"field1 data change!");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0;
  }
  else if ( !GCGFieldBriefInfo::checkEqual(&this->field2, &other->field2) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/common/gcg_common.h",
      "checkEqual",
      788);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v3, (const char (*)[20])"field2 data change!");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0;
  }
  else
  {
    return 1;
  }
};

// Line 830: range 000000000D824D88-000000000D824E36
void __cdecl GCGLimitsInfo::GCGLimitsInfo(GCGLimitsInfo *const this, uint32_t type, uint32_t value)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->limit_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_value);
  }
  this->limit_value = 0;
  this->limit_type = type;
  this->limit_value = value;
};

// Line 837: range 000000000D9CA55A-000000000D9CA5F2
void __cdecl GCGSkillLimitsInfo::GCGSkillLimitsInfo(GCGSkillLimitsInfo *const this, GCGSkillLimitsInfo *a2)
{
  uint32_t skill_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  skill_id = a2->skill_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->skill_id = skill_id;
  std::vector<GCGLimitsInfo>::vector(&this->limits_info_vec, &a2->limits_info_vec);
};

// Line 837: range 000000000D835A88-000000000D835AA6
void __cdecl GCGSkillLimitsInfo::~GCGSkillLimitsInfo(GCGSkillLimitsInfo *const this)
{
  std::vector<GCGLimitsInfo>::~vector(&this->limits_info_vec);
};

// Line 844: range 000000000D82D10A-000000000D82D1E5
void __cdecl GCGChallengeUpdateParam::GCGChallengeUpdateParam(GCGChallengeUpdateParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->param1 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param2);
  }
  this->param2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param3);
  }
  this->param3 = 0;
  std::set<unsigned int>::set(&this->param_set);
};

// Line 844: range 000000000D82D1E6-000000000D82D204
void __cdecl GCGChallengeUpdateParam::~GCGChallengeUpdateParam(GCGChallengeUpdateParam *const this)
{
  std::set<unsigned int>::~set(&this->param_set);
};

// Line 959: range 000000000E1D2FA0-000000000E1D30A7
int32_t __cdecl TraitSkillResult<(GCGEffectCategoryType)11,int>::addSkillResult(
        GCGSkillResult *result,
        const int32_t *damage)
{
  int v2; // ecx
  int __u; // [rsp+10h] [rbp-10h] BYREF
  int __t; // [rsp+14h] [rbp-Ch] BYREF
  std::optional<int> v6; // [rsp+18h] [rbp-8h] BYREF

  __u = 0;
  v2 = std::optional<int>::value_or<int>(&result->being_hit_damage_revise_result_opt, &__u);
  if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(damage);
  }
  __t = v2 + *damage;
  std::optional<int>::optional<int,true>(&v6, &__t);
  if ( (((unsigned __int8)result + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&result->being_hit_damage_revise_result_opt >> 3)
                                                        + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->being_hit_damage_revise_result_opt >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&result->being_hit_damage_revise_result_opt._M_payload._M_engaged + 3) >> 3)
                + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&result->being_hit_damage_revise_result_opt._M_payload._M_engaged
                                                                            + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(&result->being_hit_damage_revise_result_opt, 8LL);
  }
  result->being_hit_damage_revise_result_opt = v6;
  return 0;
};

// Line 1156: range 000000000E23D536-000000000E23D660
void __cdecl GCGSkillPreviewCostPayInfo::GCGSkillPreviewCostPayInfo(
        GCGSkillPreviewCostPayInfo *const this,
        GCGSkillPreviewCostPayInfo *a2)
{
  uint32_t token_num; // ecx
  GCGTokenType token_type; // ecx

  std::weak_ptr<GCGSkill>::weak_ptr(&this->skill_wtr, &a2->skill_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_num);
  }
  token_num = a2->token_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_num);
  }
  this->token_num = token_num;
  std::shared_ptr<GCGCard>::shared_ptr(&this->cost_card_ptr, &a2->cost_card_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->token_type);
  }
  token_type = a2->token_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_type);
  }
  this->token_type = token_type;
};

// Line 1156: range 000000000E23C990-000000000E23CAAF
void __cdecl GCGSkillPreviewUseInfo::GCGSkillPreviewUseInfo(
        GCGSkillPreviewUseInfo *const this,
        GCGSkillPreviewUseInfo *a2)
{
  uint32_t cost_num; // ecx
  uint32_t increase_num; // ecx

  std::weak_ptr<GCGSkill>::weak_ptr(&this->skill_wtr, &a2->skill_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->cost_num);
  }
  cost_num = a2->cost_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_num);
  }
  this->cost_num = cost_num;
  if ( *(_BYTE *)(((unsigned __int64)&a2->increase_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->increase_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->increase_num);
  }
  increase_num = a2->increase_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->increase_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->increase_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->increase_num);
  }
  this->increase_num = increase_num;
};

// Line 4845: range 000000000E36D7E4-000000000E36D82C
void __cdecl GCGSkillUseParam::setTriggerWindowParam(GCGSkillUseParam *const this, const GCGSkillUseParam *param)
{
  std::shared_ptr<GCGSkillUseParam> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GCGSkillUseParam,GCGSkillUseParam const&>((const GCGSkillUseParam *)&__r, param);
  std::shared_ptr<GCGSkillUseParam>::operator=(&this->trigger_window_param_ptr, &__r);
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&__r);
};

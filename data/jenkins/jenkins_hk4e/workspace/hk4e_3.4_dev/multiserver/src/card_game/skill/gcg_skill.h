// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill.h

// Line 20: range 000000000DD72A20-000000000DD72A63
ElementReactionParam *__cdecl ElementReactionParam::operator=(
        ElementReactionParam *const this,
        ElementReactionParam *a2)
{
  std::shared_ptr<GCGSkill>::operator=(&this->skill_ptr, &a2->skill_ptr);
  std::shared_ptr<GCGSkillUseParam>::operator=(&this->skill_param_ptr, &a2->skill_param_ptr);
  return this;
};

// Line 20: range 000000000DCDA73C-000000000DCDA77F
ElementReactionParam *__cdecl ElementReactionParam::operator=(
        ElementReactionParam *const this,
        const ElementReactionParam *a2)
{
  std::shared_ptr<GCGSkill>::operator=(&this->skill_ptr, &a2->skill_ptr);
  std::shared_ptr<GCGSkillUseParam>::operator=(&this->skill_param_ptr, &a2->skill_param_ptr);
  return this;
};

// Line 20: range 000000000DA94D56-000000000DA94D96
void __cdecl ElementReactionParam::ElementReactionParam(ElementReactionParam *const this, ElementReactionParam *a2)
{
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->skill_param_ptr, &a2->skill_param_ptr);
};

// Line 20: range 000000000DCDAA64-000000000DCDAAA4
void __cdecl ElementReactionParam::ElementReactionParam(
        ElementReactionParam *const this,
        const ElementReactionParam *a2)
{
  std::shared_ptr<GCGSkill>::shared_ptr(&this->skill_ptr, &a2->skill_ptr);
  std::shared_ptr<GCGSkillUseParam>::shared_ptr(&this->skill_param_ptr, &a2->skill_param_ptr);
};

// Line 20: range 000000000D835BAC-000000000D835BD6
void __cdecl ElementReactionParam::~ElementReactionParam(ElementReactionParam *const this)
{
  std::shared_ptr<GCGSkillUseParam>::~shared_ptr(&this->skill_param_ptr);
  std::shared_ptr<GCGSkill>::~shared_ptr(&this->skill_ptr);
};

// Line 27: range 000000000D93FA28-000000000D93FBBE
GCGSkillRuntimeData *__cdecl GCGSkillRuntimeData::operator=(
        GCGSkillRuntimeData *const this,
        const GCGSkillRuntimeData *a2)
{
  bool is_activated; // cl
  uint32_t round_used_count; // ecx
  uint32_t total_used_count; // ecx

  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2);
  is_activated = a2->is_activated_;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_activated_ = is_activated;
  if ( *(_BYTE *)(((unsigned __int64)&a2->round_used_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->round_used_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->round_used_count_);
  }
  round_used_count = a2->round_used_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_used_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_used_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_used_count_);
  }
  this->round_used_count_ = round_used_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->total_used_count_);
  }
  total_used_count = a2->total_used_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_count_);
  }
  this->total_used_count_ = total_used_count;
  std::deque<ElementReactionParam>::operator=(&this->reaction_deque_, &a2->reaction_deque_);
  return this;
};

// Line 27: range 000000000DF4FAF0-000000000DF4FBC8
void __cdecl GCGSkillRuntimeData::GCGSkillRuntimeData(GCGSkillRuntimeData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_activated_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_used_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->round_used_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->round_used_count_);
  }
  this->round_used_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_count_);
  }
  this->total_used_count_ = 0;
  std::deque<ElementReactionParam>::deque(&this->reaction_deque_);
};

// Line 27: range 000000000DF3EAE2-000000000DF3EB00
void __cdecl GCGSkillRuntimeData::~GCGSkillRuntimeData(GCGSkillRuntimeData *const this)
{
  std::deque<ElementReactionParam>::~deque(&this->reaction_deque_);
};

// Line 47: range 000000000E0EC8F8-000000000E0EC9B2
void __cdecl GCGSkill::~GCGSkill(GCGSkill *const this)
{
  std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::~vector(&this->refresh_limit_to_token_func_vec_);
  std::unordered_set<unsigned int>::~unordered_set(&this->config_ai_block_card_id_set_);
  std::weak_ptr<GCGCard>::~weak_ptr(&this->card_wtr_);
  std::unordered_multiset<GCGEffectCategoryType>::~unordered_multiset(&this->effect_category_set_);
  std::map<data::GCGCostType,unsigned int>::~map(&this->cost_map_);
  std::vector<std::shared_ptr<GCGEffectBase>>::~vector(&this->effect_ptr_vec_);
  data::ConfigGCGSkill::~ConfigGCGSkill(&this->skill_config_);
  std::string::~string(&this->skill_config_name_);
  GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::~GCGRuntimeDataMgrBase(&this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>);
  std::enable_shared_from_this<GCGSkill>::~enable_shared_from_this(this);
};

// Line 53: range 000000000DF3EE10-000000000DF3F1D7
void __cdecl GCGSkill::GCGSkill(
        GCGSkill *const this,
        GCGGameMode *game_mode,
        uint32_t skill_id,
        const data::ConfigGCGSkill *skill_config,
        const std::string *skill_config_name)
{
  std::enable_shared_from_this<GCGSkill>::enable_shared_from_this(this);
  GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>::GCGRuntimeDataMgrBase(
    &this->GCGRuntimeDataMgrBase<GCGSkillRuntimeData,GCGGameMode>,
    game_mode);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id_);
  }
  this->skill_id_ = skill_id;
  std::string::basic_string(&this->skill_config_name_, skill_config_name);
  data::ConfigGCGSkill::ConfigGCGSkill(&this->skill_config_, skill_config);
  std::vector<std::shared_ptr<GCGEffectBase>>::vector(&this->effect_ptr_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_recharge_);
  }
  this->energy_recharge_ = 0;
  std::map<data::GCGCostType,unsigned int>::map(&this->cost_map_);
  std::unordered_multiset<GCGEffectCategoryType>::unordered_multiset(&this->effect_category_set_);
  if ( *(char *)(((unsigned __int64)&this->is_hidden_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_hidden_);
  this->is_hidden_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 65) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_add_ai_direct_use_skill_num_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_add_ai_direct_use_skill_num_);
  }
  this->is_add_ai_direct_use_skill_num_ = 0;
  std::weak_ptr<GCGCard>::weak_ptr(&this->card_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_reaction_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_reaction_skill_);
  this->is_reaction_skill_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_block_ai_summon_num_);
  }
  this->config_block_ai_summon_num_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->config_ai_block_card_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_block_ai_card_sum_num_);
  }
  this->config_block_ai_card_sum_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_config_need_limits_notify_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_config_need_limits_notify_);
  }
  this->is_config_need_limits_notify_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_round_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_round_limit_);
  }
  this->has_round_limit_ = 0;
  std::vector<std::function<void ()(std::shared_ptr<GCGCard> &,GCGSkill &)>>::vector(&this->refresh_limit_to_token_func_vec_);
};

// Line 60: range 000000000D829B64-000000000D829BB0
uint32_t __cdecl GCGSkill::getSkillId(const GCGSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id_);
  }
  return this->skill_id_;
};

// Line 61: range 000000000E1D4B90-000000000E1D4BBB
void __cdecl GCGSkill::setOwnerCard(GCGSkill *const this, GCGCardWtr *p_card_wtr)
{
  std::weak_ptr<GCGCard>::operator=(&this->card_wtr_, p_card_wtr);
};

// Line 62: range 000000000D829BB2-000000000D829C03
GCGCardPtr __cdecl GCGSkill::getOwnerCard(const GCGSkill *const this)
{
  __int64 v1; // rsi
  GCGCardPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<GCGCard>::lock((const std::weak_ptr<GCGCard> *const)this);
  result._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 62: range 000000000D829C04-000000000D829C43
GCGGameMode *__cdecl GCGSkill::getGameMode(const GCGSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  return this->game_mode_;
};

// Line 67: range 000000000E1D4BBC-000000000E1D4C08
uint32_t __cdecl GCGSkill::getEnergyRecharge(GCGSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_recharge_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->energy_recharge_);
  }
  return this->energy_recharge_;
};

// Line 102: range 000000000DF3F1D8-000000000DF3F22C
uint32_t __cdecl GCGSkill::getBlockAIMaxSummonNum(const GCGSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_block_ai_summon_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_block_ai_summon_num_);
  }
  return this->config_block_ai_summon_num_;
};

// Line 104: range 000000000DF3F22E-000000000DF3F27A
uint32_t __cdecl GCGSkill::getMaxBlockCardSumNum(const GCGSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_block_ai_card_sum_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->config_block_ai_card_sum_num_);
  }
  return this->config_block_ai_card_sum_num_;
};

// Line 113: range 000000000D829C44-000000000D829C91
bool __cdecl GCGSkill::isReaction(const GCGSkill *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_reaction_skill_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reaction_skill_);
  return this->is_reaction_skill_;
};

// Line 125: range 000000000E1D4C0A-000000000E1D4C1D
const std::unordered_multiset<GCGEffectCategoryType> *__cdecl GCGSkill::getEffectCategorySet(
        const GCGSkill *const this)
{
  return &this->effect_category_set_;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill_logic.h

// Line 31: range 000000000D828D22-000000000D828D4C
void __cdecl GCGSkillLogic::~GCGSkillLogic(GCGSkillLogic *const this)
{
  std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::~map(&this->element_reaction_skill_map);
  std::string::~string(this);
};

// Line 35: range 000000000D827C70-000000000D827CCF
void __cdecl GCGSkillLogic::GCGSkillLogic(GCGSkillLogic *const this, GCGGameMode *game_mode)
{
  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
  std::map<data::GCGEffectElementType,std::map<data::GCGEffectElementType,std::shared_ptr<GCGSkill>>>::map(&this->element_reaction_skill_map);
};

// Line 51: range 000000000D827BEC-000000000D827BFE
bool __cdecl ZZN13GCGSkillLogic25foreachCardOnControllerIdEN5proto18GCGControllerValueESt8functionIFvR7GCGCardEES2_IFbR11GCGCardZoneEEEd_NKUlS8_E_clES8_(
        const GCGSkillLogic::<lambda(GCGCardZone&)> *const __closure,
        GCGCardZone *zone)
{
  return 1;
};

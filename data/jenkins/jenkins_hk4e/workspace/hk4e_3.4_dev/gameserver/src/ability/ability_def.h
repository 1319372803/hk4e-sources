// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_def.h

// Line 31: range 0000000013845534-0000000013845622
ActionParam *__cdecl ActionParam::operator=(ActionParam *const this, const ActionParam *a2)
{
  const proto::AbilityInvokeEntry *entry_ptr; // rdx

  std::shared_ptr<ActorAbility>::operator=(&this->ability_ptr, &a2->ability_ptr);
  std::shared_ptr<ActorModifier>::operator=(&this->modifier_ptr, &a2->modifier_ptr);
  std::shared_ptr<Creature>::operator=(&this->source_ptr, &a2->source_ptr);
  std::shared_ptr<Creature>::operator=(&this->target_ptr, &a2->target_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->entry_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->entry_ptr);
  entry_ptr = a2->entry_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->entry_ptr);
  this->entry_ptr = entry_ptr;
  std::shared_ptr<Player>::operator=(&this->from_player_ptr, &a2->from_player_ptr);
  return this;
};

// Line 31: range 000000001384527C-00000000138452D6
void __cdecl ActionParam::~ActionParam(ActionParam *const this)
{
  std::shared_ptr<Player>::~shared_ptr(&this->from_player_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->target_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->source_ptr);
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->modifier_ptr);
  std::shared_ptr<ActorAbility>::~shared_ptr(&this->ability_ptr);
};

// Line 43: range 00000000138479D6-0000000013847A00
void __cdecl MixinParam::~MixinParam(MixinParam *const this)
{
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->modifier_ptr);
  std::shared_ptr<ActorAbility>::~shared_ptr(&this->ability_ptr);
};

// Line 51: range 00000000138496B4-00000000138496FE
void __cdecl PredicateParam::PredicateParam(PredicateParam *const this)
{
  std::shared_ptr<ActorAbility>::shared_ptr(&this->ability_ptr);
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->target_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->source_ptr);
};

// Line 51: range 0000000013847904-00000000138479D4
void __cdecl PredicateParam::PredicateParam(PredicateParam *const this, const PredicateParam *a2)
{
  AttackResult *attack_result_ptr; // rdx

  std::shared_ptr<ActorAbility>::shared_ptr(&this->ability_ptr, &a2->ability_ptr);
  std::shared_ptr<ActorModifier>::shared_ptr(&this->modifier_ptr, &a2->modifier_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->target_ptr, &a2->target_ptr);
  std::shared_ptr<Creature>::shared_ptr(&this->source_ptr, &a2->source_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->attack_result_ptr);
  attack_result_ptr = a2->attack_result_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_result_ptr >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->attack_result_ptr);
  this->attack_result_ptr = attack_result_ptr;
};

// Line 51: range 00000000138478B8-0000000013847902
void __cdecl PredicateParam::~PredicateParam(PredicateParam *const this)
{
  std::shared_ptr<Creature>::~shared_ptr(&this->source_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&this->target_ptr);
  std::shared_ptr<ActorModifier>::~shared_ptr(&this->modifier_ptr);
  std::shared_ptr<ActorAbility>::~shared_ptr(&this->ability_ptr);
};

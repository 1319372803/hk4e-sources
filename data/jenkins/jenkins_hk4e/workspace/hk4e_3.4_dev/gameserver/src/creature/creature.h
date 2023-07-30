// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/creature.h

// Line 30: range 00000000131E47EC-00000000131E4A25
void __cdecl ChangeHpContext::ChangeHpContext(ChangeHpContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->reason = CHANGE_HP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_type);
  }
  this->die_type = PLAYER_DIE_NONE;
  std::shared_ptr<Creature>::shared_ptr(&this->attacker_ptr);
  std::string::basic_string(&this->attack_tag);
  if ( *(char *)(((unsigned __int64)&this->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_drop);
  this->is_ban_drop = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_use_spring);
  }
  this->is_auto_use_spring = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_hp_percetage_drop);
  }
  this->is_ban_hp_percetage_drop = 0;
  std::weak_ptr<ActorAbility>::weak_ptr(&this->ability_wtr);
  if ( *(char *)(((unsigned __int64)&this->is_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_die);
  this->is_die = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_self_type);
  }
  this->kill_self_type = None_17;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_hp);
  }
  this->delta_hp = 0.0;
};

// Line 30: range 00000000139438AE-0000000013943CEA
void __cdecl ChangeHpContext::ChangeHpContext(ChangeHpContext *const this, ChangeHpContext *a2)
{
  double v2; // xmm0_8
  proto::ChangHpReason reason; // ecx
  proto::PlayerDieType die_type; // ecx
  bool is_ban_drop; // cl
  bool is_auto_use_spring; // cl
  bool is_ban_hp_percetage_drop; // cl
  bool is_die; // cl
  data::KillSelfType kill_self_type; // ecx
  float delta_hp; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    v2 = __asan_report_load4(a2);
  }
  reason = a2->reason;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->die_type >> 3) + 0x7FFF8000) )
  {
    v2 = __asan_report_load4(&a2->die_type);
  }
  die_type = a2->die_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_type);
  }
  this->die_type = die_type;
  std::shared_ptr<Creature>::shared_ptr(&this->attacker_ptr, &a2->attacker_ptr);
  std::string::basic_string(&this->attack_tag, &a2->attack_tag, v2);
  if ( *(char *)(((unsigned __int64)&a2->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ban_drop);
  is_ban_drop = a2->is_ban_drop;
  if ( *(char *)(((unsigned __int64)&this->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_drop);
  this->is_ban_drop = is_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_auto_use_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_auto_use_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_auto_use_spring);
  }
  is_auto_use_spring = a2->is_auto_use_spring;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_use_spring);
  }
  this->is_auto_use_spring = is_auto_use_spring;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_ban_hp_percetage_drop);
  }
  is_ban_hp_percetage_drop = a2->is_ban_hp_percetage_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_hp_percetage_drop);
  }
  this->is_ban_hp_percetage_drop = is_ban_hp_percetage_drop;
  std::weak_ptr<ActorAbility>::weak_ptr(&this->ability_wtr, &a2->ability_wtr);
  if ( *(char *)(((unsigned __int64)&a2->is_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_die);
  is_die = a2->is_die;
  if ( *(char *)(((unsigned __int64)&this->is_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_die);
  this->is_die = is_die;
  if ( *(_BYTE *)(((unsigned __int64)&a2->kill_self_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->kill_self_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->kill_self_type);
  }
  kill_self_type = a2->kill_self_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_self_type);
  }
  this->kill_self_type = kill_self_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delta_hp);
  }
  delta_hp = a2->delta_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_hp);
  }
  this->delta_hp = delta_hp;
};

// Line 30: range 00000000138470F4-0000000013847557
void __cdecl ChangeHpContext::ChangeHpContext(ChangeHpContext *const this, const ChangeHpContext *a2)
{
  proto::ChangHpReason reason; // ecx
  proto::PlayerDieType die_type; // ecx
  bool is_ban_drop; // cl
  bool is_auto_use_spring; // cl
  bool is_ban_hp_percetage_drop; // cl
  bool is_die; // cl
  data::KillSelfType kill_self_type; // ecx
  float delta_hp; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  reason = a2->reason;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->die_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->die_type);
  }
  die_type = a2->die_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_type);
  }
  this->die_type = die_type;
  std::shared_ptr<Creature>::shared_ptr(&this->attacker_ptr, &a2->attacker_ptr);
  std::string::basic_string(&this->attack_tag, &a2->attack_tag);
  if ( *(char *)(((unsigned __int64)&a2->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_ban_drop);
  is_ban_drop = a2->is_ban_drop;
  if ( *(char *)(((unsigned __int64)&this->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_drop);
  this->is_ban_drop = is_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_auto_use_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_auto_use_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_auto_use_spring);
  }
  is_auto_use_spring = a2->is_auto_use_spring;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 57) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_use_spring >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_use_spring);
  }
  this->is_auto_use_spring = is_auto_use_spring;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_ban_hp_percetage_drop);
  }
  is_ban_hp_percetage_drop = a2->is_ban_hp_percetage_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_hp_percetage_drop >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_hp_percetage_drop);
  }
  this->is_ban_hp_percetage_drop = is_ban_hp_percetage_drop;
  std::weak_ptr<ActorAbility>::weak_ptr(&this->ability_wtr, &a2->ability_wtr);
  if ( *(char *)(((unsigned __int64)&a2->is_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_die);
  is_die = a2->is_die;
  if ( *(char *)(((unsigned __int64)&this->is_die >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_die);
  this->is_die = is_die;
  if ( *(_BYTE *)(((unsigned __int64)&a2->kill_self_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->kill_self_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->kill_self_type);
  }
  kill_self_type = a2->kill_self_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_self_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->kill_self_type);
  }
  this->kill_self_type = kill_self_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delta_hp);
  }
  delta_hp = a2->delta_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_hp);
  }
  this->delta_hp = delta_hp;
};

// Line 30: range 00000000131E4A26-00000000131E4A64
void __cdecl ChangeHpContext::~ChangeHpContext(ChangeHpContext *const this)
{
  std::weak_ptr<ActorAbility>::~weak_ptr(&this->ability_wtr);
  std::string::~string(&this->attack_tag);
  std::shared_ptr<Creature>::~shared_ptr(&this->attacker_ptr);
};

// Line 49: range 00000000150249D0-0000000015024ABD
void __cdecl HurtContext::HurtContext(HurtContext *const this)
{
  AttackResult::AttackResult(&this->attack_result);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = CHANGE_HP_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_damage);
  }
  this->final_damage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frame_num);
  }
  this->frame_num = 0;
};

// Line 49: range 00000000133D6C64-00000000133D6E19
void __cdecl HurtContext::HurtContext(HurtContext *const this, HurtContext *a2)
{
  proto::ChangHpReason reason; // ecx
  float final_damage; // xmm0_4
  uint32_t frame_num; // ecx

  AttackResult::AttackResult(&this->attack_result, &a2->attack_result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reason);
  }
  reason = a2->reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&a2->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->final_damage);
  }
  final_damage = a2->final_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_damage);
  }
  this->final_damage = final_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->frame_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->frame_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->frame_num);
  }
  frame_num = a2->frame_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frame_num);
  }
  this->frame_num = frame_num;
};

// Line 49: range 00000000150244CE-0000000015024683
void __cdecl HurtContext::HurtContext(HurtContext *const this, const HurtContext *a2)
{
  proto::ChangHpReason reason; // ecx
  float final_damage; // xmm0_4
  uint32_t frame_num; // ecx

  AttackResult::AttackResult(&this->attack_result, &a2->attack_result);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reason);
  }
  reason = a2->reason;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason);
  }
  this->reason = reason;
  if ( *(_BYTE *)(((unsigned __int64)&a2->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->final_damage);
  }
  final_damage = a2->final_damage;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_damage);
  }
  this->final_damage = final_damage;
  if ( *(_BYTE *)(((unsigned __int64)&a2->frame_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->frame_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->frame_num);
  }
  frame_num = a2->frame_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->frame_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->frame_num);
  }
  this->frame_num = frame_num;
};

// Line 49: range 00000000131E311E-00000000131E3138
void __cdecl HurtContext::~HurtContext(HurtContext *const this)
{
  AttackResult::~AttackResult(&this->attack_result);
};

// Line 56: range 00000000131C7AF6-00000000131C7B45
data::ElementType __cdecl HurtContext::getElementType(const HurtContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_result.element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_result.element_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_result.element_type);
  }
  return this->attack_result.element_type;
};

// Line 58: range 0000000014F747DC-0000000014F74828
data::ElementReactionType __cdecl HurtContext::getAmplifyingReactionType(const HurtContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_result.amplify_reaction_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_result.amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_result.amplify_reaction_type);
  }
  return this->attack_result.amplify_reaction_type;
};

// Line 59: range 000000001720939C-00000000172093B5
data::StrikeType __cdecl HurtContext::getStrikeType(const HurtContext *const this)
{
  return AttackResult::getStrikeType(&this->attack_result);
};

// Line 60: range 0000000014F7482A-0000000014F74872
bool __cdecl HurtContext::getIsCritical(const HurtContext *const this)
{
  if ( *(char *)(((unsigned __int64)&this->attack_result.is_critical >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->attack_result.is_critical);
  return this->attack_result.is_critical;
};

// Line 63: range 0000000015BD5B16-0000000015BD5B30
void __cdecl DieCreatureRecord::DieCreatureRecord(DieCreatureRecord *const this)
{
  std::unordered_map<std::string,float>::unordered_map(&this->global_value_map_);
};

// Line 63: range 0000000015C2E602-0000000015C2E61C
void __cdecl DieCreatureRecord::~DieCreatureRecord(DieCreatureRecord *const this)
{
  std::unordered_map<std::string,float>::~unordered_map(&this->global_value_map_);
};

// Line 69: range 0000000015A19EF8-0000000015A19F1A
uint32_t __cdecl DieCreatureRecord::isEmpty(DieCreatureRecord *const this)
{
  return std::unordered_map<std::string,float>::size(&this->global_value_map_) == 0;
};

// Line 77: range 000000001461458E-0000000014614BB6
void __cdecl Creature::Creature(Creature *const this)
{
  __int64 *v1; // rdx

  Entity::Entity((Entity *const)this);
  v1 = &`vtable for'Creature + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_level_);
  }
  this->config_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_entity_id_);
  }
  this->target_entity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_state_);
  }
  this->life_state_ = LIFE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_non_humanoid_move_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_non_humanoid_move_);
  this->is_non_humanoid_move_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->authority_peer_id_);
  }
  this->authority_peer_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_created_by_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_created_by_gm_);
  this->is_created_by_gm_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_alive_by_owner_);
  }
  this->is_alive_by_owner_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 10) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_gadget_);
  }
  this->is_client_gadget_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_change_special_sgv_time_);
  }
  this->last_change_special_sgv_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_local_gadget_owner_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_local_gadget_owner_);
  this->is_local_gadget_owner_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_type_);
  }
  this->die_type_ = PLAYER_DIE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_force_refresh_auth_to_host_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force_refresh_auth_to_host_);
  this->is_force_refresh_auth_to_host_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auth_prefer_closest_player_);
  }
  this->is_auth_prefer_closest_player_ = 0;
  std::weak_ptr<Creature>::weak_ptr(&this->owner_wtr_);
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set(&this->sub_creature_set_);
  std::shared_ptr<HurtContext>::shared_ptr(&this->hurt_context_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->origin_owner_group_id_);
  }
  this->origin_owner_group_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->origin_owner_config_id_);
  }
  this->origin_owner_config_id_ = 0;
  ZN11AbilityCompCI216CreatureCompBaseER8Creature(&this->ability_comp_, this);
  ZN13FightPropCompCI216CreatureCompBaseER8Creature(&this->fight_prop_comp_, this);
  if ( *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subfield_drop_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->subfield_drop_num_);
  }
  this->subfield_drop_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_config_hash_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_config_hash_);
  }
  this->combat_config_hash_ = 0;
  std::set<std::string>::set(&this->tag_set_);
  ZN16CreatureBuffCompCI216CreatureCompBaseER8Creature(&this->creature_buff_comp_, this);
  std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::map(&this->modified_property_map_);
};

// Line 77: range 0000000014614C96-0000000014614CC0
void __cdecl Creature::~Creature(Creature *const this)
{
  Creature::~Creature(this);
  operator delete(this, 0xA40uLL);
};

// Line 77: range 0000000014614BB8-0000000014614C95
void __cdecl Creature::~Creature(Creature *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'Creature + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  *(_QWORD *)this->baseclass_0 = v1;
  std::map<unsigned int,std::unordered_map<unsigned long,ModifiedAttackProperty>>::~map(&this->modified_property_map_);
  CreatureBuffComp::~CreatureBuffComp(&this->creature_buff_comp_);
  std::set<std::string>::~set(&this->tag_set_);
  FightPropComp::~FightPropComp(&this->fight_prop_comp_);
  AbilityComp::~AbilityComp(&this->ability_comp_);
  std::shared_ptr<HurtContext>::~shared_ptr(&this->hurt_context_ptr_);
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::~set(&this->sub_creature_set_);
  std::weak_ptr<Creature>::~weak_ptr(&this->owner_wtr_);
  Entity::~Entity((Entity *const)this);
};

// Line 81: range 00000000131C7B82-00000000131C7B95
AbilityComp *__cdecl Creature::getAbilityComp(Creature *const this)
{
  return &this->ability_comp_;
};

// Line 84: range 00000000131C7B96-00000000131C7BA9
FightPropComp *__cdecl Creature::getFightPropComp(Creature *const this)
{
  return &this->fight_prop_comp_;
};

// Line 87: range 00000000138418E2-00000000138418F5
CreatureBuffComp *__cdecl Creature::getCreatureBuffComp(Creature *const this)
{
  return &this->creature_buff_comp_;
};

// Line 119: range 00000000146139FC-0000000014613A22
data::ConfigCharacterPtr __cdecl Creature::getCharacterConfig(const Creature *const this)
{
  data::ConfigCharacterPtr result; // rax

  std::shared_ptr<data::ConfigCharacter>::shared_ptr((std::shared_ptr<data::ConfigCharacter> *const)this, 0LL);
  result._M_ptr = (std::__shared_ptr<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 128: range 0000000014613A24-0000000014613A32
data::ElementType __cdecl Creature::getElemType(const Creature *const this)
{
  return 0;
};

// Line 149: range 0000000014613A34-0000000014613A42
const data::CreatureExcelConfig *__cdecl Creature::getConfig(const Creature *const this)
{
  return 0LL;
};

// Line 152: range 0000000014F748B0-0000000014F748C4
const data::GrowCurveInfo *__cdecl Creature::findCurveInfo(
        const Creature *const this,
        data::GrowCurveType type,
        uint32_t level)
{
  return 0LL;
};

// Line 185: range 00000000172093B6-0000000017209410
void __cdecl Creature::setConfigLevel(Creature *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_level_);
  }
  this->config_level_ = level;
};

// Line 186: range 0000000014F748C6-0000000014F7491A
uint32_t __cdecl Creature::getConfigLevel(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_level_);
  }
  return this->config_level_;
};

// Line 188: range 0000000017209412-0000000017209464
void __cdecl Creature::setReviseLevel(Creature *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level_);
  }
  this->revise_level_ = level;
};

// Line 189: range 0000000014F7491C-0000000014F74968
uint32_t __cdecl Creature::getReviseLevel(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->revise_level_);
  }
  return this->revise_level_;
};

// Line 191: range 0000000015D30948-0000000015D309A2
void __cdecl Creature::setLevel(Creature *const this, uint32_t level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = level;
};

// Line 192: range 00000000131C7BAA-00000000131C7BFE
uint32_t __cdecl Creature::getLevel(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 196: range 0000000014613A44-0000000014613A53
void __cdecl Creature::onChangeEnergy(Creature *const this, bool is_notify)
{
  ;
};

// Line 248: range 00000000138418F6-0000000013841950
void __cdecl Creature::setAuthorityPeerId(Creature *const this, uint32_t peer_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->authority_peer_id_);
  }
  this->authority_peer_id_ = peer_id;
};

// Line 261: range 0000000013841952-0000000013841964
int32_t __cdecl Creature::dropSubfield(Creature *const this, const std::string *subfield_name)
{
  return 0;
};

// Line 296: range 00000000138419A8-00000000138419D7
std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *__cdecl Creature::getSubCreatureSet(
        std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature> >,std::allocator<std::weak_ptr<Creature> > > *retstr,
        Creature *const this)
{
  std::set<std::weak_ptr<Creature>,std::owner_less<std::weak_ptr<Creature>>,std::allocator<std::weak_ptr<Creature>>>::set(
    retstr,
    &this->sub_creature_set_);
  return retstr;
};

// Line 325: range 0000000015189CFC-0000000015189D2B
HurtContextPtr __cdecl Creature::getHurtContext(const Creature *const this)
{
  const std::shared_ptr<HurtContext> *v1; // rsi
  HurtContextPtr result; // rax

  std::shared_ptr<HurtContext>::shared_ptr((std::shared_ptr<HurtContext> *const)this, v1 + 54);
  result._M_ptr = (std::__shared_ptr<HurtContext,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 359: range 0000000014613A90-0000000014613A9E
const FightPropMap *__cdecl Creature::getBaseLevelProp(const Creature *const this)
{
  return 0LL;
};

// Line 367: range 00000000138419D8-00000000138419EA
bool __cdecl Creature::isDeathAllowableOrDoAntiCheat(Creature *const this, const ChangeHpContext *context)
{
  return 1;
};

// Line 383: range 00000000131C7C00-00000000131C7C54
data::LifeState __cdecl Creature::getLifeState(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->life_state_);
  }
  return this->life_state_;
};

// Line 384: range 00000000138419EC-0000000013841A39
bool __cdecl Creature::getIsNonHumanoidMove(const Creature *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_non_humanoid_move_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_non_humanoid_move_);
  return this->is_non_humanoid_move_;
};

// Line 385: range 00000000131C7C56-00000000131C7CAA
uint32_t __cdecl Creature::getAuthorityPeerId(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->authority_peer_id_);
  }
  return this->authority_peer_id_;
};

// Line 387: range 0000000014F74A0E-0000000014F74A60
bool __cdecl Creature::getIsAliveByOwner(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_alive_by_owner_);
  }
  return this->is_alive_by_owner_;
};

// Line 387: range 0000000013841A3A-0000000013841A95
void __cdecl Creature::setIsAliveByOwner(Creature *const this, bool is_alive_by_owner__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive_by_owner_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_alive_by_owner_);
  }
  this->is_alive_by_owner_ = is_alive_by_owner__out;
};

// Line 388: range 00000000131C7CAC-00000000131C7CFE
bool __cdecl Creature::getIsClientGadget(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 10) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_client_gadget_);
  }
  return this->is_client_gadget_;
};

// Line 389: range 00000000169058DE-0000000016905932
uint32_t __cdecl Creature::getLastChangeSpecialSgvTime(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_change_special_sgv_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_change_special_sgv_time_);
  }
  return this->last_change_special_sgv_time_;
};

// Line 390: range 0000000014F74A62-0000000014F74AAF
bool __cdecl Creature::getIsLocalGadgetOwner(const Creature *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_local_gadget_owner_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_local_gadget_owner_);
  return this->is_local_gadget_owner_;
};

// Line 390: range 00000000131C7D00-00000000131C7D56
void __cdecl Creature::setIsLocalGadgetOwner(Creature *const this, bool is_local_gadget_owner__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_local_gadget_owner_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_local_gadget_owner_);
  this->is_local_gadget_owner_ = is_local_gadget_owner__out;
};

// Line 391: range 000000001666B53C-000000001666B590
proto::PlayerDieType __cdecl Creature::getDieType(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_type_);
  }
  return this->die_type_;
};

// Line 392: range 0000000014F74AB0-0000000014F74AFD
bool __cdecl Creature::getIsForceRefreshAuthToSceneOwner(const Creature *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_force_refresh_auth_to_host_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_force_refresh_auth_to_host_);
  return this->is_force_refresh_auth_to_host_;
};

// Line 392: range 0000000017209466-00000000172094BC
void __cdecl Creature::setIsForceRefreshAuthToSceneOwner(Creature *const this, bool is_force_refresh_auth_to_host__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_force_refresh_auth_to_host_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force_refresh_auth_to_host_);
  this->is_force_refresh_auth_to_host_ = is_force_refresh_auth_to_host__out;
};

// Line 393: range 0000000014F74AFE-0000000014F74B50
bool __cdecl Creature::getIsAuthPreferClosestPlayer(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_auth_prefer_closest_player_);
  }
  return this->is_auth_prefer_closest_player_;
};

// Line 393: range 00000000172094BE-0000000017209519
void __cdecl Creature::setIsAuthPreferClosestPlayer(Creature *const this, bool is_auth_prefer_closest_player__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 25) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auth_prefer_closest_player_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auth_prefer_closest_player_);
  }
  this->is_auth_prefer_closest_player_ = is_auth_prefer_closest_player__out;
};

// Line 397: range 000000001666B592-000000001666B5DE
uint32_t __cdecl Creature::getOriginOwnerGroupId(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->origin_owner_group_id_);
  }
  return this->origin_owner_group_id_;
};

// Line 397: range 000000001666B5E0-000000001666B633
void __cdecl Creature::setOriginOwnerGroupId(Creature *const this, uint32_t origin_owner_group_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->origin_owner_group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->origin_owner_group_id_);
  }
  this->origin_owner_group_id_ = origin_owner_group_id__out;
};

// Line 398: range 000000001666B634-000000001666B688
uint32_t __cdecl Creature::getOriginOwnerConfigId(const Creature *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->origin_owner_config_id_);
  }
  return this->origin_owner_config_id_;
};

// Line 398: range 000000001666B68A-000000001666B6E5
void __cdecl Creature::setOriginOwnerConfigId(Creature *const this, uint32_t origin_owner_config_id__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->origin_owner_config_id_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->origin_owner_config_id_);
  }
  this->origin_owner_config_id_ = origin_owner_config_id__out;
};

// Line 411: range 0000000013860B18-0000000013860C28
std::shared_ptr<Avatar> __cdecl Creature::getOwner<Avatar>(const Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::shared_ptr<Avatar> result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 owner_ptr:413";
  *(_QWORD *)(v1 + 16) = Creature::getOwner<Avatar>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Creature::getOwner((const Creature *const)(v1 + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<Avatar,Creature>((const std::shared_ptr<Creature> *)this);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 411: range 000000001721D6AC-000000001721D7BC
std::shared_ptr<Monster> __cdecl Creature::getOwner<Monster>(const Creature *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::shared_ptr<Monster> result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 owner_ptr:413";
  *(_QWORD *)(v1 + 16) = Creature::getOwner<Monster>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Creature::getOwner((const Creature *const)(v1 + 32));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)this);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 3627: range 0000000016905890-00000000169058DD
bool __cdecl Creature::getIsCreatedByGm(const Creature *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_created_by_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_created_by_gm_);
  return this->is_created_by_gm_;
};

// Line 13970: range 0000000017D6737C-0000000017D673D2
void __cdecl Creature::setIsCreatedByGm(Creature *const this, bool is_created_by_gm__out)
{
  if ( *(char *)(((unsigned __int64)&this->is_created_by_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_created_by_gm_);
  this->is_created_by_gm_ = is_created_by_gm__out;
};

// Line 15827: range 000000001666B4E0-000000001666B53B
void __cdecl Creature::setIsClientGadget(Creature *const this, bool is_client_gadget__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 10) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_gadget_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_client_gadget_);
  }
  this->is_client_gadget_ = is_client_gadget__out;
};

// Line 116329: range 0000000016238DAE-0000000016238E09
void __cdecl Creature::setLifeState(Creature *const this, data::LifeState life_state__out)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_state_);
  }
  this->life_state_ = life_state__out;
};

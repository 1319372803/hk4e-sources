// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/stat_log_reporter.cpp

// Line 34: range 00000000150B2C50-00000000150B2DDF
std::size_t __cdecl std::hash<CombatStatHurtLogHead>::operator()(
        const std::hash<CombatStatHurtLogHead> *const this,
        const CombatStatHurtLogHead *head)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::size_t result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 hash_code:35";
  *(_QWORD *)(v2 + 16) = std::hash<CombatStatHurtLogHead>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = 0LL;
  boost::hash_combine<proto_log::TargetType>((std::size_t *)(v2 + 32), &head->target_type);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->target_id);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->ability_name_hash);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->modifier_name_hash);
  boost::hash_combine<std::string>((std::size_t *)(v2 + 32), &head->attack_tag);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->element_type);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->anim_event_id_hash);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->source_type);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->source_id);
  result = *(_QWORD *)(v2 + 32);
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

// Line 49: range 000000001518F252-000000001518F6B0
bool __cdecl std::equal_to<CombatStatHurtLogHead>::operator()(
        const std::equal_to<CombatStatHurtLogHead> *const this,
        const CombatStatHurtLogHead *lhs,
        const CombatStatHurtLogHead *rhs)
{
  proto_log::TargetType target_type; // ecx
  uint32_t target_id; // ecx
  uint32_t ability_name_hash; // ecx
  uint32_t modifier_name_hash; // ecx
  uint32_t element_type; // ecx
  uint32_t anim_event_id_hash; // ecx
  uint32_t source_type; // ecx
  uint32_t source_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(lhs);
  }
  target_type = lhs->target_type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(rhs);
  }
  if ( target_type != rhs->target_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->target_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->target_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->target_id);
  }
  target_id = lhs->target_id;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->target_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->target_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->target_id);
  }
  if ( target_id != rhs->target_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->ability_name_hash);
  }
  ability_name_hash = lhs->ability_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->ability_name_hash);
  }
  if ( ability_name_hash != rhs->ability_name_hash )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->modifier_name_hash);
  }
  modifier_name_hash = lhs->modifier_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->modifier_name_hash);
  }
  if ( modifier_name_hash != rhs->modifier_name_hash || !std::operator==<char>(&lhs->attack_tag, &rhs->attack_tag) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->element_type);
  }
  element_type = lhs->element_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->element_type);
  }
  if ( element_type != rhs->element_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->anim_event_id_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->anim_event_id_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->anim_event_id_hash);
  }
  anim_event_id_hash = lhs->anim_event_id_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->anim_event_id_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->anim_event_id_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->anim_event_id_hash);
  }
  if ( anim_event_id_hash != rhs->anim_event_id_hash )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->source_type);
  }
  source_type = lhs->source_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->source_type);
  }
  if ( source_type != rhs->source_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->source_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->source_id);
  }
  source_id = lhs->source_id;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->source_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->source_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->source_id);
  }
  return source_id == rhs->source_id;
};

// Line 62: range 00000000150B2DE0-00000000150B2EE5
std::size_t __cdecl std::hash<CombatStatHealLogHead>::operator()(
        const std::hash<CombatStatHealLogHead> *const this,
        const CombatStatHealLogHead *head)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::size_t result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 hash_code:63";
  *(_QWORD *)(v2 + 16) = std::hash<CombatStatHealLogHead>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = 0LL;
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->avatar_id);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->ability_name_hash);
  boost::hash_combine<unsigned int>((std::size_t *)(v2 + 32), &head->modifier_name_hash);
  result = *(_QWORD *)(v2 + 32);
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

// Line 71: range 000000001518F6B2-000000001518F86C
bool __cdecl std::equal_to<CombatStatHealLogHead>::operator()(
        const std::equal_to<CombatStatHealLogHead> *const this,
        const CombatStatHealLogHead *lhs,
        const CombatStatHealLogHead *rhs)
{
  uint32_t avatar_id; // ecx
  uint32_t ability_name_hash; // ecx
  uint32_t modifier_name_hash; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  avatar_id = lhs->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( avatar_id != rhs->avatar_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->ability_name_hash);
  }
  ability_name_hash = lhs->ability_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->ability_name_hash);
  }
  if ( ability_name_hash != rhs->ability_name_hash )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->modifier_name_hash);
  }
  modifier_name_hash = lhs->modifier_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->modifier_name_hash);
  }
  return modifier_name_hash == rhs->modifier_name_hash;
};

// Line 80: range 00000000150B2EE6-00000000150B3655
void __cdecl StatLogReporter::onCreatureDoHurt(Creature *target, const ChangeHpContext *change_hp_context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  double v6; // xmm0_8
  Player *v7; // rax
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // eax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rdx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  StatLogReporter *StatLogReporter; // r14
  Creature *v20; // r15
  Creature *v21; // rax
  uint32_t monster_id; // [rsp+24h] [rbp-12Ch]
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *attack_result; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Creature> __r; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-110h] BYREF
  char v26[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 19 hurt_context_ptr:85 64 16 13 player_ptr:97 96 16 16 attacker_ptr:104 128 16 14 target"
                        "_ptr:105 160 16 15 monster_ptr:129";
  *(_QWORD *)(v2 + 16) = StatLogReporter::onCreatureDoHurt;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( !std::operator==<Creature>(0LL, &change_hp_context->attacker_ptr) )
  {
    Creature::getHurtContext((const Creature *const)(v2 + 32));
    if ( std::operator==<HurtContext>(0LL, (const std::shared_ptr<HurtContext> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/stat_log_reporter.cpp",
        "onCreatureDoHurt",
        88);
      v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v25,
             (const char (*)[39])"hurt_context_ptr is nullptr, creature:");
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v5, target);
      common::milog::MiLogStream::~MiLogStream(&v25);
LABEL_51:
      std::shared_ptr<HurtContext>::~shared_ptr((std::shared_ptr<HurtContext> *const)(v2 + 32));
      goto LABEL_52;
    }
    attack_result = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.ori_server_damage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&attack_result->attack_result.ori_server_damage);
    }
    *(_QWORD *)&v6 = LODWORD(attack_result->attack_result.ori_server_damage);
    if ( *(float *)&v6 == 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.block_shield_hurt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)attack_result + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.block_shield_hurt >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&attack_result->attack_result.block_shield_hurt);
      }
      *(_QWORD *)&v6 = LODWORD(attack_result->attack_result.block_shield_hurt);
      if ( *(float *)&v6 == 0.0 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.server_damage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)attack_result + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->attack_result.server_damage >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&attack_result->attack_result.server_damage);
        }
        *(_QWORD *)&v6 = LODWORD(attack_result->attack_result.server_damage);
        if ( *(float *)&v6 == 0.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&change_hp_context->delta_hp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&change_hp_context->delta_hp >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&change_hp_context->delta_hp);
          }
          *(_QWORD *)&v6 = LODWORD(change_hp_context->delta_hp);
          if ( *(float *)&v6 == 0.0 )
            goto LABEL_51;
        }
      }
    }
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&change_hp_context->attacker_ptr);
    Entity::findSceneOwnPlayer((const Entity *const)(v2 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64))
      || (v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          MpComp = Player::getMpComp(v7),
          PlayerMpComp::isInMpMode(MpComp)) )
    {
LABEL_50:
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      goto LABEL_51;
    }
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&change_hp_context->attacker_ptr);
    Creature::findTopOwnerOrSelf((Creature *const)(v2 + 96));
    Creature::findTopOwnerOrSelf((Creature *const)(v2 + 128));
    if ( !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 96))
      && !std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 128)) )
    {
      v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v11);
      v12 = *(_QWORD *)v11->baseclass_0 + 24LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(*(_QWORD *)v11->baseclass_0 + 24LL);
      v13 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, double))v12)(
              v11,
              v6);
      if ( v13 > 2 )
      {
        if ( v13 != 4 )
          goto LABEL_49;
        v14 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8(v14);
        v15 = *(_QWORD *)v14->baseclass_0 + 32LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8(*(_QWORD *)v14->baseclass_0 + 32LL);
        if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, double))v15)(
               v14,
               v6) != 54 )
          goto LABEL_49;
      }
      else if ( v13 <= 0 )
      {
        goto LABEL_49;
      }
      monster_id = 0;
      std::dynamic_pointer_cast<Monster,Creature>((const std::shared_ptr<Creature> *)(v2 + 160));
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 160)) )
      {
        std::dynamic_pointer_cast<Monster,Creature>(&__r);
        std::shared_ptr<Monster>::operator=(
          (std::shared_ptr<Monster> *const)(v2 + 160),
          (std::shared_ptr<Monster> *)&__r);
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)&__r);
      }
      if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 160)) )
      {
        v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        monster_id = Monster::getMonsterId(v16);
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 160));
      v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BasicComp = Player::getBasicComp(v17);
      StatLogReporter = PlayerBasicComp::getStatLogReporter(BasicComp);
      v20 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v21 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      StatLogReporter::recordCombatStatLogOnCreatureDoHurt(
        StatLogReporter,
        v21,
        v20,
        monster_id,
        &attack_result->attack_result,
        change_hp_context);
    }
LABEL_49:
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
    goto LABEL_50;
  }
LABEL_52:
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 00000000150B3656-00000000150B3948
void __cdecl StatLogReporter::onCreatureBeHealed(
        Creature *creature,
        const ActionParam *action_param,
        const ChangeHpContext *change_hp_context,
        float hp_amount)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  StatLogReporter *StatLogReporter; // r14
  Avatar *v14; // rsi
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 avatar_ptr:146 64 16 14 player_ptr:152";
  *(_QWORD *)(v4 + 16) = StatLogReporter::onCreatureBeHealed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  toPtr<Avatar,Creature>((Creature *)(v4 + 32));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(_QWORD *)v7->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v8)(
      v4 + 64,
      v7);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/stat_log_reporter.cpp",
        "onCreatureBeHealed",
        155);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v18,
             (const char (*)[24])"getPlayer fail, avatar:");
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, v10);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      BasicComp = Player::getBasicComp(v11);
      StatLogReporter = PlayerBasicComp::getStatLogReporter(BasicComp);
      v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      StatLogReporter::recordCombatStatLogOnAvatarBeHeal(
        StatLogReporter,
        v14,
        action_param,
        change_hp_context,
        hp_amount);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 163: range 00000000150B394A-00000000150B3AF6
void __cdecl StatLogReporter::onChangeAvatarEvent(StatLogReporter *const this, const ChangeAvatarEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerAvatarComp *AvatarComp; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t avatar_id; // [rsp+1Ch] [rbp-64h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:170";
  *(_QWORD *)(v2 + 16) = StatLogReporter::onChangeAvatarEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( StatLogReporter::hasCombatStatLogTransaction(this) )
  {
    avatar_id = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&event->old_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(&event->old_guid);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)AvatarComp, event->old_guid);
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
    {
      v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      avatar_id = Avatar::getAvatarId(v6);
    }
    StatLogReporter::tryRecordCurAvatarPresentTime(this, avatar_id);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 179: range 00000000150B3AF8-00000000150B3B12
void __cdecl StatLogReporter::onCombatStateChange(StatLogReporter *const this)
{
  StatLogReporter::checkAndUpdateCombatStatLogTransaction(this);
};

// Line 184: range 00000000150B3B14-00000000150B3B2E
void __cdecl StatLogReporter::onChallengeStateChange(StatLogReporter *const this)
{
  StatLogReporter::checkAndUpdateCombatStatLogTransaction(this);
};

// Line 189: range 00000000150B3B30-00000000150B3DB9
bool __cdecl StatLogReporter::getCurrentCombatStatLogTransaction(
        const StatLogReporter *const this,
        proto_log::TransType *trans_type,
        std::string *transaction)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  std::string *p_trans_no; // rdx
  bool v8; // r15
  PlayerAvatarComp *AvatarComp; // rax
  __int64 v10; // rdx
  bool result; // al
  const std::string *combat_transaction; // [rsp+28h] [rbp-78h]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 challenge_ptr:190";
  *(_QWORD *)(v3 + 16) = StatLogReporter::getCurrentCombatStatLogTransaction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurrentCombatStatChallenge((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator!=<Challenge>(0LL, (const std::shared_ptr<Challenge> *)(v3 + 32)) )
  {
    v6 = (*(_BYTE *)(((unsigned __int64)trans_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)trans_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trans_type >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(trans_type, ((unsigned __int8)trans_type & 7u) + 3, v6);
    *trans_type = TRANS_CHALLENGE;
    p_trans_no = &std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Challenge,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->trans_no;
    std::string::operator=(transaction, p_trans_no);
    v8 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    AvatarComp = Player::getAvatarComp(this->player_);
    combat_transaction = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp);
    if ( (unsigned __int8)std::string::empty(combat_transaction) != 1 )
    {
      v10 = (*(_BYTE *)(((unsigned __int64)trans_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)trans_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)trans_type >> 3) + 0x7FFF8000));
      if ( (_BYTE)v10 )
        __asan_report_store4(trans_type, ((unsigned __int8)trans_type & 7u) + 3, v10);
      *trans_type = TRANS_COMBAT;
      std::string::operator=(transaction, combat_transaction);
      v8 = 1;
    }
    else
    {
      v8 = 0;
    }
  }
  std::shared_ptr<Challenge>::~shared_ptr((std::shared_ptr<Challenge> *const)(v3 + 32));
  result = v8;
  if ( v14 == (char *)v3 )
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

// Line 208: range 00000000150B3DBA-00000000150B41DB
void __cdecl StatLogReporter::checkAndUpdateCombatStatLogTransaction(StatLogReporter *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::string *p_transaction; // rsi
  char v5; // al
  proto_log::TransType v6; // ecx
  char v7; // al
  std::remove_reference<std::string&>::type *v8; // rsi
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 trans_type:209 64 32 15 transaction:210";
  *(_QWORD *)(v1 + 16) = StatLogReporter::checkAndUpdateCombatStatLogTransaction;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  *(_DWORD *)(v1 + 48) = 0;
  std::string::basic_string(v1 + 64);
  p_transaction = (std::string *)(v1 + 48);
  if ( !StatLogReporter::getCurrentCombatStatLogTransaction(
          this,
          (proto_log::TransType *)(v1 + 48),
          (std::string *)(v1 + 64)) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trans_type_);
  }
  if ( this->trans_type_ == *(_DWORD *)(v1 + 48)
    && (p_transaction = &this->transaction_, std::operator==<char>((const std::string *)(v1 + 64), &this->transaction_)) )
  {
    v5 = 1;
  }
  else
  {
LABEL_10:
    v5 = 0;
  }
  if ( !v5 )
  {
    StatLogReporter::flushCombatStatLogs(this);
    now = common::tools::TimeUtils::getNow();
    v6 = *(_DWORD *)(v1 + 48);
    v7 = *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(p_transaction) = v7 != 0;
      __asan_report_store4(&this->trans_type_, p_transaction, &this->trans_type_);
    }
    this->trans_type_ = v6;
    v8 = std::move<std::string &>((std::string *)(v1 + 64));
    std::string::operator=(&this->transaction_, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->transaction_start_time_, v8, &this->transaction_start_time_);
    }
    this->transaction_start_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->avatar_present_start_time_, v8, &this->avatar_present_start_time_);
    }
    this->avatar_present_start_time_ = now;
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/stat_log_reporter.cpp",
      "checkAndUpdateCombatStatLogTransaction",
      225);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v16, (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = operator<<(v9, this->player_);
    v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" trans_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->trans_type_);
    }
    val = this->trans_type_;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" transaction:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &this->transaction_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  std::string::~string((void *)(v1 + 64));
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 230: range 00000000150B44E8-00000000150B66DA
// local variable allocation has failed, the output may be wrong!
void __cdecl StatLogReporter::flushCombatStatLogs(StatLogReporter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  DungeonScene *v4; // rax
  const std::string *v5; // rax
  std::shared_ptr<google::protobuf::Message> *p_for_end; // rsi
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  const std::string *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  uint32_t modifier_name_hash; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  const std::string *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  float ori_hurt; // xmm0_4
  unsigned __int64 v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  float block_shield_hurt; // xmm0_4
  unsigned __int64 v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  float ratio_hurt; // xmm0_4
  unsigned __int64 v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  float real_hurt; // xmm0_4
  unsigned __int64 v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  google::protobuf::RepeatedPtrField<proto_log::DamageExtraLog> *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  Player *v36; // r14
  PlayerBasicComp *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  const std::string *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  uint32_t v46; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  const std::string *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rcx
  float v54; // xmm0_4
  unsigned __int64 v55; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rcx
  float v57; // xmm0_4
  unsigned __int64 v58; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rcx
  float v60; // xmm0_4
  unsigned __int64 v61; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rcx
  float v63; // xmm0_4
  unsigned __int64 v64; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rax
  google::protobuf::RepeatedPtrField<proto_log::DamageExtraLog> *v66; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rcx
  Player *v68; // r14
  PlayerBasicComp *v70; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // r14
  const std::string *v76; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // r14
  uint32_t v78; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // r14
  std::tuple_element<0,std::pair<float,float> >::type *v80; // rax
  float *v81; // rdx
  float v82; // xmm0_4
  unsigned __int64 v83; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // r14
  std::tuple_element<1,std::pair<float,float> >::type *v85; // rax
  float *v86; // rdx
  float v87; // xmm0_4
  unsigned __int64 v88; // rax
  Player *v89; // r14
  PlayerAvatarComp *AvatarComp; // r14
  PlayerAvatarComp *v91; // rax
  uint32_t CurAvatarId; // eax
  PlayerBasicComp *v93; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rcx
  google::protobuf::uint32 v98; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v99; // rax
  std::pair<unsigned int const,unsigned int> *v100; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v101; // rax
  Player *v102; // r14
  std::string v103; // [rsp+0h] [rbp-210h] OVERLAPPED BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+20h] [rbp-1F0h] BYREF
  const JsonConfigMgr *json_config_mgr; // [rsp+28h] [rbp-1E8h]
  const StatLogFilterExcelConfigMgr *stat_log_filter_config_mgr; // [rsp+30h] [rbp-1E0h]
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *__for_range; // [rsp+38h] [rbp-1D8h]
  const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> *v108; // [rsp+40h] [rbp-1D0h]
  std::tuple_element<0,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *head; // [rsp+48h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *t; // [rsp+50h] [rbp-1C0h]
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *__for_range_0; // [rsp+58h] [rbp-1B8h]
  const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> *v112; // [rsp+60h] [rbp-1B0h]
  std::tuple_element<0,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *head_0; // [rsp+68h] [rbp-1A8h]
  std::tuple_element<1,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *t_0; // [rsp+70h] [rbp-1A0h]
  std::unordered_map<CombatStatHealLogHead,std::pair<float,float>> *__for_range_1; // [rsp+78h] [rbp-198h]
  const std::pair<const CombatStatHealLogHead,std::pair<float,float> > *v116; // [rsp+80h] [rbp-190h]
  std::tuple_element<0,const std::pair<const CombatStatHealLogHead,std::pair<float,float> > >::type *head_1; // [rsp+88h] [rbp-188h]
  std::tuple_element<1,const std::pair<const CombatStatHealLogHead,std::pair<float,float> > >::type *t_1; // [rsp+90h] [rbp-180h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+98h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *avatar_id; // [rsp+A0h] [rbp-170h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *total_time; // [rsp+A8h] [rbp-168h]
  proto_log::AvatarPresentTimeLog *time_log; // [rsp+B0h] [rbp-160h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+B8h] [rbp-158h] BYREF
  std::shared_ptr<google::protobuf::Message> v124; // [rsp+C0h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v125; // [rsp+D0h] [rbp-140h] BYREF
  std::string value; // [rsp+E0h] [rbp-130h] BYREF
  char v127[272]; // [rsp+100h] [rbp-110h] BYREF

  v103._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v127;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 10 holder:340 64 8 33 compose_damage_extra_log_list:240 96 16 15 dungeon_ptr:232 128 16 1"
                        "1 log_ptr:341 160 32 23 dungeon_transaction:231";
  *(_QWORD *)(v1 + 16) = StatLogReporter::flushCombatStatLogs;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862726] = -202116109;
  std::string::basic_string(v1 + 160);
  if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8(v103._M_string_length);
  Player::getSceneComp(*(Player *const *)v103._M_string_length);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v1 + 96));
  if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 96)) )
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    v5 = DungeonScene::getTransaction[abi:cxx11](v4);
    std::string::operator=(v1 + 160, v5);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v124);
  json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v124)->design_config.json_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v124);
  p_for_end = (std::shared_ptr<google::protobuf::Message> *)ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v125);
  stat_log_filter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v125)->design_config.txt_config_mgr.stat_log_filter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v125);
  *(_QWORD *)(v1 + 64) = stat_log_filter_config_mgr;
  v103._anon_0._M_local_buf[3] = 0;
  if ( !std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::empty((const std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 56)) )
  {
    if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v103._M_string_length);
    BasicComp = Player::getBasicComp(*(Player *const *)v103._M_string_length);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x522u, v103);
    std::string::~string(&value);
    __for_range = (std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *)(v103._M_string_length + 56);
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::begin((std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 56))._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::end((std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 56))._M_cur;
    while ( 1 )
    {
      p_for_end = (std::shared_ptr<google::protobuf::Message> *)&__for_end;
      if ( !std::__detail::operator!=<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false> *)&__for_end_0,
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false> *)&__for_end) )
        break;
      v108 = std::__detail::_Node_iterator<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false,false> *const)&__for_end_0);
      head = std::get<0ul,CombatStatHurtLogHead const,CombatStatAccumulatedDamage>(v108);
      t = (std::tuple_element<1,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *)std::get<1ul,CombatStatHurtLogHead const,CombatStatAccumulatedDamage>(v108);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyDoHurt>();
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v103._M_string_length + 8);
      }
      proto_log::PlayerLogBodyDoHurt::set_trans_type(v8, *(_DWORD *)(v103._M_string_length + 8));
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyDoHurt::set_transaction(v9, (const std::string *)(v103._M_string_length + 16));
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyDoHurt::set_dungeon_transaction(v10, (const std::string *)(v1 + 160));
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(head);
      }
      proto_log::PlayerLogBodyDoHurt::set_target_type(v11, head->target_type);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&head->target_id);
      }
      proto_log::PlayerLogBodyDoHurt::set_target_id(v12, head->target_id);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head->ability_name_hash);
      }
      v14 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](json_config_mgr, head->ability_name_hash);
      proto_log::PlayerLogBodyDoHurt::set_ability_name(v13, v14);
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head->modifier_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->modifier_name_hash >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&head->modifier_name_hash);
      }
      modifier_name_hash = head->modifier_name_hash;
      if ( *(_BYTE *)(((unsigned __int64)&head->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head->ability_name_hash);
      }
      JsonConfigMgr::findModifierName[abi:cxx11](&value, json_config_mgr, head->ability_name_hash, modifier_name_hash);
      proto_log::PlayerLogBodyDoHurt::set_modifier_name(v15, &value);
      std::string::~string(&value);
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyDoHurt::set_attack_tag(v17, &head->attack_tag);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head->element_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->element_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head->element_type);
      }
      proto_log::PlayerLogBodyDoHurt::set_element_type(v18, head->element_type);
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head->anim_event_id_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->anim_event_id_hash >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&head->anim_event_id_hash);
      }
      v20 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](json_config_mgr, head->anim_event_id_hash);
      proto_log::PlayerLogBodyDoHurt::set_anim_event_id(v19, v20);
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(t);
      }
      ori_hurt = t->ori_hurt;
      if ( t->ori_hurt >= 9.223372e18 )
        v23 = (unsigned int)(int)(float)(ori_hurt - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v23 = (unsigned int)(int)ori_hurt;
      proto_log::PlayerLogBodyDoHurt::set_ori_hurt(v21, v23);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t->block_shield_hurt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t->block_shield_hurt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&t->block_shield_hurt);
      }
      block_shield_hurt = t->block_shield_hurt;
      if ( block_shield_hurt >= 9.223372e18 )
        v26 = (unsigned int)(int)(float)(block_shield_hurt - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v26 = (unsigned int)(int)block_shield_hurt;
      proto_log::PlayerLogBodyDoHurt::set_block_shield_hurt(v24, v26);
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t->ratio_hurt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&t->ratio_hurt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&t->ratio_hurt);
      }
      ratio_hurt = t->ratio_hurt;
      if ( ratio_hurt >= 9.223372e18 )
        v29 = (unsigned int)(int)(float)(ratio_hurt - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v29 = (unsigned int)(int)ratio_hurt;
      proto_log::PlayerLogBodyDoHurt::set_ratio_hurt(v27, v29);
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t->real_hurt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t->real_hurt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&t->real_hurt);
      }
      real_hurt = t->real_hurt;
      if ( real_hurt >= 9.223372e18 )
        v32 = (unsigned int)(int)(float)(real_hurt - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v32 = (unsigned int)(int)real_hurt;
      proto_log::PlayerLogBodyDoHurt::set_real_hurt(v30, v32);
      v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      v34 = proto_log::PlayerLogBodyDoHurt::mutable_ori_hurt_from_damage_extra(v33);
      StatLogReporter::flushCombatStatLogs::_lambda_const_CombatStatAccumulatedDamage___auto_23___::operator()_google::protobuf::RepeatedPtrField_proto_log::DamageExtraLog___(
        (const StatLogReporter::flushCombatStatLogs::<lambda(const CombatStatAccumulatedDamage&, auto:23&)> *const)(v1 + 64),
        t,
        v34);
      v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDoHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t->hurt_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&t->hurt_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&t->hurt_count);
      }
      proto_log::PlayerLogBodyDoHurt::set_hurt_count(v35, t->hurt_count);
      if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v103._M_string_length);
      v36 = *(Player **)v103._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v125, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDoHurt,void>(
        &v124,
        (const std::shared_ptr<proto_log::PlayerLogBodyDoHurt> *)(v1 + 128));
      Player::printStatLog(v36, &v124, &v125, 0x1Au);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v124);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v125);
      std::shared_ptr<proto_log::PlayerLogBodyDoHurt>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDoHurt> *const)(v1 + 128));
      std::__detail::_Node_iterator<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false,false> *const)&__for_end_0);
    }
    v103._anon_0._M_local_buf[3] = 1;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  if ( !std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::empty((const std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 112)) )
  {
    if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v103._M_string_length);
    v37 = Player::getBasicComp(*(Player *const *)v103._M_string_length);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&value, v37);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x523u, v103);
    std::string::~string(&value);
    __for_range_0 = (std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *)(v103._M_string_length + 112);
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::begin((std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 112))._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::end(__for_range_0)._M_cur;
    while ( 1 )
    {
      p_for_end = (std::shared_ptr<google::protobuf::Message> *)&__for_end;
      if ( !std::__detail::operator!=<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false> *)&__for_end_0,
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false> *)&__for_end) )
        break;
      v112 = std::__detail::_Node_iterator<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false,false> *const)&__for_end_0);
      head_0 = std::get<0ul,CombatStatHurtLogHead const,CombatStatAccumulatedDamage>(v112);
      t_0 = (std::tuple_element<1,const std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage> >::type *)std::get<1ul,CombatStatHurtLogHead const,CombatStatAccumulatedDamage>(v112);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBeHurt>();
      v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v103._M_string_length + 8);
      }
      proto_log::PlayerLogBodyBeHurt::set_trans_type(v38, *(_DWORD *)(v103._M_string_length + 8));
      v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyBeHurt::set_transaction(v39, (const std::string *)(v103._M_string_length + 16));
      v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyBeHurt::set_dungeon_transaction(v40, (const std::string *)(v1 + 160));
      v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)head_0 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)head_0 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(head_0);
      }
      proto_log::PlayerLogBodyBeHurt::set_target_type(v41, head_0->target_type);
      v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->target_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_0->target_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&head_0->target_id);
      }
      proto_log::PlayerLogBodyBeHurt::set_target_id(v42, head_0->target_id);
      v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head_0->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head_0->ability_name_hash);
      }
      v44 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](json_config_mgr, head_0->ability_name_hash);
      proto_log::PlayerLogBodyBeHurt::set_ability_name(v43, v44);
      v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->modifier_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_0->modifier_name_hash >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&head_0->modifier_name_hash);
      }
      v46 = head_0->modifier_name_hash;
      if ( *(_BYTE *)(((unsigned __int64)&head_0->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head_0->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head_0->ability_name_hash);
      }
      JsonConfigMgr::findModifierName[abi:cxx11](&value, json_config_mgr, head_0->ability_name_hash, v46);
      proto_log::PlayerLogBodyBeHurt::set_modifier_name(v45, &value);
      std::string::~string(&value);
      v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyBeHurt::set_attack_tag(v47, &head_0->attack_tag);
      v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->element_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head_0->element_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head_0->element_type);
      }
      proto_log::PlayerLogBodyBeHurt::set_element_type(v48, head_0->element_type);
      v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->anim_event_id_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_0 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_0->anim_event_id_hash >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&head_0->anim_event_id_hash);
      }
      v50 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](json_config_mgr, head_0->anim_event_id_hash);
      proto_log::PlayerLogBodyBeHurt::set_anim_event_id(v49, v50);
      v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->source_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head_0->source_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&head_0->source_type);
      }
      proto_log::PlayerLogBodyBeHurt::set_source_type(v51, head_0->source_type);
      v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_0->source_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_0 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_0->source_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&head_0->source_id);
      }
      proto_log::PlayerLogBodyBeHurt::set_source_id(v52, head_0->source_id);
      v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)t_0 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)t_0 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(t_0);
      }
      v54 = t_0->ori_hurt;
      if ( t_0->ori_hurt >= 9.223372e18 )
        v55 = (unsigned int)(int)(float)(v54 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v55 = (unsigned int)(int)v54;
      proto_log::PlayerLogBodyBeHurt::set_ori_hurt(v53, v55);
      v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t_0->block_shield_hurt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t_0->block_shield_hurt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&t_0->block_shield_hurt);
      }
      v57 = t_0->block_shield_hurt;
      if ( v57 >= 9.223372e18 )
        v58 = (unsigned int)(int)(float)(v57 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v58 = (unsigned int)(int)v57;
      proto_log::PlayerLogBodyBeHurt::set_block_shield_hurt(v56, v58);
      v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t_0->ratio_hurt >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&t_0->ratio_hurt >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&t_0->ratio_hurt);
      }
      v60 = t_0->ratio_hurt;
      if ( v60 >= 9.223372e18 )
        v61 = (unsigned int)(int)(float)(v60 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v61 = (unsigned int)(int)v60;
      proto_log::PlayerLogBodyBeHurt::set_ratio_hurt(v59, v61);
      v62 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t_0->real_hurt >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)t_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t_0->real_hurt >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&t_0->real_hurt);
      }
      v63 = t_0->real_hurt;
      if ( v63 >= 9.223372e18 )
        v64 = (unsigned int)(int)(float)(v63 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v64 = (unsigned int)(int)v63;
      proto_log::PlayerLogBodyBeHurt::set_real_hurt(v62, v64);
      v65 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      v66 = proto_log::PlayerLogBodyBeHurt::mutable_ori_hurt_from_damage_extra(v65);
      StatLogReporter::flushCombatStatLogs::_lambda_const_CombatStatAccumulatedDamage___auto_23___::operator()_google::protobuf::RepeatedPtrField_proto_log::DamageExtraLog___(
        (const StatLogReporter::flushCombatStatLogs::<lambda(const CombatStatAccumulatedDamage&, auto:23&)> *const)(v1 + 64),
        t_0,
        v66);
      v67 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHurt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&t_0->hurt_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&t_0->hurt_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&t_0->hurt_count);
      }
      proto_log::PlayerLogBodyBeHurt::set_hurt_count(v67, t_0->hurt_count);
      if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v103._M_string_length);
      v68 = *(Player **)v103._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v125, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBeHurt,void>(
        &v124,
        (const std::shared_ptr<proto_log::PlayerLogBodyBeHurt> *)(v1 + 128));
      Player::printStatLog(v68, &v124, &v125, 0x1Au);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v124);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v125);
      std::shared_ptr<proto_log::PlayerLogBodyBeHurt>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBeHurt> *const)(v1 + 128));
      std::__detail::_Node_iterator<std::pair<CombatStatHurtLogHead const,CombatStatAccumulatedDamage>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const CombatStatHurtLogHead,CombatStatAccumulatedDamage>,false,false> *const)&__for_end_0);
    }
    v103._anon_0._M_local_buf[3] = 1;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  if ( v103._anon_0._M_local_buf[3]
    && !std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::empty((const std::unordered_map<CombatStatHealLogHead,std::pair<float,float>> *const)(v103._M_string_length + 168)) )
  {
    if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v103._M_string_length);
    v70 = Player::getBasicComp(*(Player *const *)v103._M_string_length);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&value, v70);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x524u, v103);
    std::string::~string(&value);
    __for_range_1 = (std::unordered_map<CombatStatHealLogHead,std::pair<float,float>> *)(v103._M_string_length + 168);
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::begin((std::unordered_map<CombatStatHealLogHead,std::pair<float,float>> *const)(v103._M_string_length + 168))._M_cur;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::end(__for_range_1)._M_cur;
    while ( 1 )
    {
      p_for_end = (std::shared_ptr<google::protobuf::Message> *)&__for_end;
      if ( !std::__detail::operator!=<std::pair<CombatStatHealLogHead const,std::pair<float,float>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHealLogHead,std::pair<float,float> >,false> *)&__for_end_0,
              (const std::__detail::_Node_iterator_base<std::pair<const CombatStatHealLogHead,std::pair<float,float> >,false> *)&__for_end) )
        break;
      v116 = std::__detail::_Node_iterator<std::pair<CombatStatHealLogHead const,std::pair<float,float>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const CombatStatHealLogHead,std::pair<float,float> >,false,false> *const)&__for_end_0);
      head_1 = std::get<0ul,CombatStatHealLogHead const,std::pair<float,float>>(v116);
      t_1 = (std::tuple_element<1,const std::pair<const CombatStatHealLogHead,std::pair<float,float> > >::type *)std::get<1ul,CombatStatHealLogHead const,std::pair<float,float>>(v116);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBeHeal>();
      v71 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v103._M_string_length + 8);
      }
      proto_log::PlayerLogBodyBeHeal::set_trans_type(v71, *(_DWORD *)(v103._M_string_length + 8));
      v72 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyBeHeal::set_transaction(v72, (const std::string *)(v103._M_string_length + 16));
      v73 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyBeHeal::set_dungeon_transaction(v73, (const std::string *)(v1 + 160));
      v74 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)head_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)head_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)head_1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(head_1);
      }
      proto_log::PlayerLogBodyBeHeal::set_avatar_id(v74, head_1->avatar_id);
      v75 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_1->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_1->ability_name_hash >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&head_1->ability_name_hash);
      }
      v76 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](json_config_mgr, head_1->ability_name_hash);
      proto_log::PlayerLogBodyBeHeal::set_ability_name(v75, v76);
      v77 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&head_1->modifier_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_1 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_1->modifier_name_hash >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&head_1->modifier_name_hash);
      }
      v78 = head_1->modifier_name_hash;
      if ( *(_BYTE *)(((unsigned __int64)&head_1->ability_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)head_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head_1->ability_name_hash >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&head_1->ability_name_hash);
      }
      JsonConfigMgr::findModifierName[abi:cxx11](&value, json_config_mgr, head_1->ability_name_hash, v78);
      proto_log::PlayerLogBodyBeHeal::set_modifier_name(v77, &value);
      std::string::~string(&value);
      v79 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      v80 = (std::tuple_element<0,std::pair<float,float> >::type *)std::get<0ul,float,float>(t_1);
      v81 = v80;
      if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v80 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v80);
      }
      v82 = *v81;
      if ( *v81 >= 9.223372e18 )
        v83 = (unsigned int)(int)(float)(v82 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v83 = (unsigned int)(int)v82;
      proto_log::PlayerLogBodyBeHeal::set_real_heal(v79, v83);
      v84 = std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBeHeal,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      v85 = (std::tuple_element<1,std::pair<float,float> >::type *)std::get<1ul,float,float>(t_1);
      v86 = v85;
      if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v85);
      }
      v87 = *v86;
      if ( *v86 >= 9.223372e18 )
        v88 = (unsigned int)(int)(float)(v87 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v88 = (unsigned int)(int)v87;
      proto_log::PlayerLogBodyBeHeal::set_total_heal(v84, v88);
      if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v103._M_string_length);
      v89 = *(Player **)v103._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v125, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBeHeal,void>(
        &v124,
        (const std::shared_ptr<proto_log::PlayerLogBodyBeHeal> *)(v1 + 128));
      Player::printStatLog(v89, &v124, &v125, 0x1Au);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v124);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v125);
      std::shared_ptr<proto_log::PlayerLogBodyBeHeal>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBeHeal> *const)(v1 + 128));
      std::__detail::_Node_iterator<std::pair<CombatStatHealLogHead const,std::pair<float,float>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const CombatStatHealLogHead,std::pair<float,float> >,false,false> *const)&__for_end_0);
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  if ( v103._anon_0._M_local_buf[3] )
  {
    if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v103._M_string_length);
    AvatarComp = Player::getAvatarComp(*(Player *const *)v103._M_string_length);
    std::function<ForeachPolicy ()(Avatar &)>::function<StatLogReporter::flushCombatStatLogs(void)::{lambda(Avatar &)#2},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&value,
      (StatLogReporter::flushCombatStatLogs::<lambda(Avatar&)>)v103._M_string_length);
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&value);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&value);
    if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
      __asan_report_load8(v103._M_string_length);
    v91 = Player::getAvatarComp(*(Player *const *)v103._M_string_length);
    CurAvatarId = PlayerAvatarComp::getCurAvatarId(v91);
    p_for_end = (std::shared_ptr<google::protobuf::Message> *)CurAvatarId;
    StatLogReporter::tryRecordCurAvatarPresentTime((StatLogReporter *const)v103._M_string_length, CurAvatarId);
    if ( !std::unordered_map<unsigned int,unsigned int>::empty((const std::unordered_map<unsigned int,unsigned int> *const)(v103._M_string_length + 224)) )
    {
      if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v103._M_string_length);
      v93 = Player::getBasicComp(*(Player *const *)v103._M_string_length);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&value, v93);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x525u, v103);
      std::string::~string(&value);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarPresentTime>();
      v94 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v103._M_string_length + 8);
      }
      proto_log::PlayerLogBodyAvatarPresentTime::set_trans_type(v94, *(_DWORD *)(v103._M_string_length + 8));
      v95 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyAvatarPresentTime::set_transaction(v95, (const std::string *)(v103._M_string_length + 16));
      v96 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      proto_log::PlayerLogBodyAvatarPresentTime::set_dungeon_transaction(v96, (const std::string *)(v1 + 160));
      HIDWORD(v103._anon_0._M_allocated_capacity) = common::tools::TimeUtils::getNow();
      v97 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      if ( *(_BYTE *)(((v103._M_string_length + 48) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v103._M_string_length + 48) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(v103._M_string_length + 48);
      }
      if ( HIDWORD(v103._anon_0._M_allocated_capacity) < *(_DWORD *)(v103._M_string_length + 48) )
        v98 = 0;
      else
        v98 = HIDWORD(v103._anon_0._M_allocated_capacity) - *(_DWORD *)(v103._M_string_length + 48);
      proto_log::PlayerLogBodyAvatarPresentTime::set_combat_time(v97, v98);
      __for_range_2 = (std::unordered_map<unsigned int,unsigned int> *)(v103._M_string_length + 224);
      *((std::unordered_map<unsigned int,unsigned int>::iterator *)&v103._anon_0._M_allocated_capacity + 1) = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v103._M_string_length + 224));
      __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&v103._anon_0._M_allocated_capacity
              + 1,
                &__for_end_0) )
      {
        v99 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(
                (const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&v103._anon_0._M_allocated_capacity
              + 1);
        v100 = v99;
        if ( ((unsigned __int8)v99 & 7) >= *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v99->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v99 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v99->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v99, 8LL);
        }
        __for_end = *v100;
        avatar_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
        total_time = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
        v101 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarPresentTime,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        time_log = proto_log::PlayerLogBodyAvatarPresentTime::add_time_list(v101);
        if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(avatar_id);
        }
        proto_log::AvatarPresentTimeLog::set_avatar_id(time_log, *avatar_id);
        if ( *(_BYTE *)(((unsigned __int64)total_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)total_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(total_time);
        }
        proto_log::AvatarPresentTimeLog::set_time(time_log, *total_time);
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(
          (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&v103._anon_0._M_allocated_capacity
        + 1);
      }
      if ( *(_BYTE *)((v103._M_string_length >> 3) + 0x7FFF8000) )
        __asan_report_load8(v103._M_string_length);
      v102 = *(Player **)v103._M_string_length;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v125, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarPresentTime,void>(
        &v124,
        (const std::shared_ptr<proto_log::PlayerLogBodyAvatarPresentTime> *)(v1 + 128));
      p_for_end = &v124;
      Player::printStatLog(v102, &v124, &v125, 0x1Au);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v124);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v125);
      std::shared_ptr<proto_log::PlayerLogBodyAvatarPresentTime>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarPresentTime> *const)(v1 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
  }
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::clear((std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 56));
  std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::clear((std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage> *const)(v103._M_string_length + 112));
  std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::clear((std::unordered_map<CombatStatHealLogHead,std::pair<float,float>> *const)(v103._M_string_length + 168));
  std::unordered_map<unsigned int,unsigned int>::clear((std::unordered_map<unsigned int,unsigned int> *const)(v103._M_string_length + 224));
  if ( *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v103._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(v103._M_string_length + 8, p_for_end, v103._M_string_length + 8);
  }
  *(_DWORD *)(v103._M_string_length + 8) = 0;
  std::string::clear(v103._M_string_length + 16);
  if ( *(_BYTE *)(((v103._M_string_length + 48) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v103._M_string_length + 48) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(v103._M_string_length + 48, p_for_end, v103._M_string_length + 48);
  }
  *(_DWORD *)(v103._M_string_length + 48) = 0;
  if ( *(_BYTE *)(((v103._M_string_length + 280) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v103._M_string_length + 280) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(v103._M_string_length + 280, p_for_end, v103._M_string_length + 280);
  }
  *(_DWORD *)(v103._M_string_length + 280) = 0;
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
  std::string::~string((void *)(v1 + 160));
  if ( v127 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 240: range 00000000150B41DC-00000000150B447D
void __cdecl StatLogReporter::flushCombatStatLogs::_lambda_const_CombatStatAccumulatedDamage___auto_23___::operator()_google::protobuf::RepeatedPtrField_proto_log::DamageExtraLog___(
        const StatLogReporter::flushCombatStatLogs::<lambda(const CombatStatAccumulatedDamage&, auto:23&)> *const __closure,
        const CombatStatAccumulatedDamage *t,
        google::protobuf::RepeatedPtrField<proto_log::DamageExtraLog> *proto_log_list)
{
  std::pair<unsigned int const,float> *v3; // rax
  std::pair<unsigned int const,float> *v4; // rdx
  const StatLogFilterExcelConfigMgr *stat_log_filter_config_mgr; // rcx
  std::map<unsigned int,float>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,float>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto_log::DamageExtraLog *damage_extra_log; // [rsp+30h] [rbp-60h]
  const std::map<unsigned int,float> *__for_range; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *filter_hash; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,std::pair<unsigned int const,float> >::type *damage; // [rsp+48h] [rbp-48h]
  proto_log::DamageExtraLog *damage_extra_log_0; // [rsp+50h] [rbp-40h]
  std::pair<unsigned int const,float> __in; // [rsp+58h] [rbp-38h] BYREF
  std::string value; // [rsp+60h] [rbp-30h] BYREF

  damage_extra_log = google::protobuf::RepeatedPtrField<proto_log::DamageExtraLog>::Add(proto_log_list);
  proto_log::DamageExtraLog::set_name(damage_extra_log, "total");
  if ( *(_BYTE *)(((unsigned __int64)&t->total_damage_extra >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&t->total_damage_extra >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&t->total_damage_extra);
  }
  proto_log::DamageExtraLog::set_value(damage_extra_log, t->total_damage_extra);
  __for_range = &t->damage_extra_map;
  __for_begin._M_node = std::map<unsigned int,float>::begin(&t->damage_extra_map)._M_node;
  __for_end._M_node = std::map<unsigned int,float>::end(&t->damage_extra_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (std::pair<unsigned int const,float> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*(&__for_begin);
    v4 = v3;
    if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v3, 8LL);
    }
    __in = *v4;
    filter_hash = std::get<0ul,unsigned int const,float>(&__in);
    damage = std::get<1ul,unsigned int const,float>(&__in);
    damage_extra_log_0 = google::protobuf::RepeatedPtrField<proto_log::DamageExtraLog>::Add(proto_log_list);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    stat_log_filter_config_mgr = __closure->__stat_log_filter_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)filter_hash >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)filter_hash & 7) + 3) >= *(_BYTE *)(((unsigned __int64)filter_hash >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(filter_hash);
    }
    StatLogFilterExcelConfigMgr::getFilterNameByHash[abi:cxx11](&value, stat_log_filter_config_mgr, *filter_hash);
    proto_log::DamageExtraLog::set_name(damage_extra_log_0, &value);
    std::string::~string(&value);
    if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(damage);
    }
    proto_log::DamageExtraLog::set_value(damage_extra_log_0, *damage);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++(&__for_begin);
  }
};

// Line 332: range 00000000150B447E-00000000150B44E7
ForeachPolicy __cdecl StatLogReporter::flushCombatStatLogs(void)::{lambda(Avatar &)#2}::operator()(
        const StatLogReporter::flushCombatStatLogs::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::unordered_map<unsigned int,unsigned int> *p_avatar_present_time_map; // rbx
  std::unordered_map<unsigned int,unsigned int>::key_type __k[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_avatar_present_time_map = &__closure->__this->avatar_present_time_map_;
  __k[0] = Avatar::getAvatarId(avatar);
  std::unordered_map<unsigned int,unsigned int>::operator[](p_avatar_present_time_map, __k);
  return 0;
};

// Line 369: range 00000000150B66DC-00000000150B6AFB
void __cdecl StatLogReporter::getCombatStatLogEntityInfo(
        const StatLogReporter *const this,
        Creature *creature,
        CombatStatHurtLogHead *head)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Creature *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  char *v10; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarId; // ecx
  char v13; // dl
  __int64 v14; // rdx
  char *v15; // rsi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t MonsterId; // ecx
  char v18; // dl
  __int64 v19; // rdx
  char *v20; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t GadgetId; // ecx
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v28[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 gadget_ptr:395";
  *(_QWORD *)(v3 + 16) = StatLogReporter::getCombatStatLogEntityInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    __asan_report_load8(creature);
  v7 = *(_QWORD *)creature->baseclass_0 + 24LL;
  v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v8 )
    __asan_report_load8(*(_QWORD *)creature->baseclass_0 + 24LL);
  v9 = (*(__int64 (__fastcall **)(Creature *))v7)(v6);
  if ( v9 == 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(head, v8, head);
    }
    head->target_type = TARGET_GADGET;
    toPtr<Gadget,Creature>((Creature *)(v3 + 32));
    v20 = (char *)(v3 + 32);
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
    {
      v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GadgetId = Gadget::getGadgetId(v21);
      v23 = *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v23 != 0;
      v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)head + 4) & 7) + 3) >= v23);
      if ( (_BYTE)v24 )
        __asan_report_store4(&head->target_id, v20, v24);
      head->target_id = GadgetId;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  }
  else
  {
    if ( v9 > 4 )
    {
LABEL_34:
      if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(head, v8, head);
      }
      head->target_type = TARGET_NONE;
      v25 = (*(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)head + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v25 )
        __asan_report_store4(&head->target_id, (((_BYTE)head + 4) & 7u) + 3, v25);
      head->target_id = 0;
      goto LABEL_39;
    }
    if ( v9 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(head, v8, head);
      }
      head->target_type = TARGET_AVATAR;
      toPtr<Avatar,Creature>((Creature *)(v3 + 32));
      v10 = (char *)(v3 + 32);
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
      {
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        AvatarId = Avatar::getAvatarId(v11);
        v13 = *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v13 != 0;
        v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)head + 4) & 7) + 3) >= v13);
        if ( (_BYTE)v14 )
          __asan_report_store4(&head->target_id, v10, v14);
        head->target_id = AvatarId;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    }
    else
    {
      if ( v9 != 2 )
        goto LABEL_34;
      if ( *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)head >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(head, v8, head);
      }
      head->target_type = TARGET_MONSTER;
      toPtr<Monster,Creature>((Creature *)(v3 + 32));
      v15 = (char *)(v3 + 32);
      if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 32)) )
      {
        v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        MonsterId = Monster::getMonsterId(v16);
        v18 = *(_BYTE *)(((unsigned __int64)&head->target_id >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)head + 4) & 7) + 3) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store4(&head->target_id, v15, v19);
        head->target_id = MonsterId;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 32));
    }
  }
LABEL_39:
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 412: range 00000000150B6AFC-00000000150B6EEA
void __cdecl StatLogReporter::getCombatStatLogSourceId(
        const StatLogReporter *const this,
        Creature *creature,
        CombatStatHurtLogHead *head)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Creature *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  char *v10; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t AvatarId; // ecx
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  char *v16; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t GadgetId; // ecx
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v24[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 gadget_ptr:434";
  *(_QWORD *)(v3 + 16) = StatLogReporter::getCombatStatLogSourceId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = creature;
  if ( *(_BYTE *)(((unsigned __int64)creature >> 3) + 0x7FFF8000) )
    __asan_report_load8(creature);
  v7 = *(_QWORD *)creature->baseclass_0 + 24LL;
  v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
  if ( (_BYTE)v8 )
    __asan_report_load8(*(_QWORD *)creature->baseclass_0 + 24LL);
  v9 = (*(__int64 (__fastcall **)(Creature *))v7)(v6);
  if ( v9 == 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&head->source_type, v8, &head->source_type);
    }
    head->source_type = 3;
    toPtr<Gadget,Creature>((Creature *)(v3 + 32));
    v16 = (char *)(v3 + 32);
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
    {
      v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      GadgetId = Gadget::getGadgetId(v17);
      v19 = *(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v19 != 0;
      v20 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)head + 60) & 7) + 3) >= v19);
      if ( (_BYTE)v20 )
        __asan_report_store4(&head->source_id, v16, v20);
      head->source_id = GadgetId;
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
  }
  else
  {
    if ( v9 > 4 )
    {
LABEL_32:
      if ( *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&head->source_type, v8, &head->source_type);
      }
      head->source_type = 0;
      v21 = (*(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)head + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v21 )
        __asan_report_store4(&head->source_id, (((_BYTE)head + 60) & 7u) + 3, v21);
      head->source_id = 0;
      goto LABEL_37;
    }
    if ( v9 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&head->source_type, v8, &head->source_type);
      }
      head->source_type = 1;
      toPtr<Avatar,Creature>((Creature *)(v3 + 32));
      v10 = (char *)(v3 + 32);
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
      {
        v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        AvatarId = Avatar::getAvatarId(v11);
        v13 = *(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000);
        LOBYTE(v10) = v13 != 0;
        v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)head + 60) & 7) + 3) >= v13);
        if ( (_BYTE)v14 )
          __asan_report_store4(&head->source_id, v10, v14);
        head->source_id = AvatarId;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    }
    else
    {
      if ( v9 != 2 )
        goto LABEL_32;
      if ( *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&head->source_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&head->source_type, v8, &head->source_type);
      }
      head->source_type = 2;
      v15 = (*(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)head + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&head->source_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_store4(&head->source_id, (((_BYTE)head + 60) & 7u) + 3, v15);
      head->source_id = 0;
    }
  }
LABEL_37:
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 451: range 00000000150B772C-00000000150B7D52
void __cdecl StatLogReporter::recordCombatStatLogOnCreatureDoHurt(
        StatLogReporter *const this,
        Creature *attacker,
        Creature *target,
        uint32_t monster_id,
        const AttackResult *attack_result,
        const ChangeHpContext *change_hp_context)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rbx
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Creature *v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  CombatStatAccumulatedDamage *v16; // rax
  CombatStatAccumulatedDamage *v17; // rax
  unsigned __int64 val; // [rsp+30h] [rbp-120h] BYREF
  const StatLogFilterExcelConfigMgr *stat_log_filter_config_mgr; // [rsp+38h] [rbp-118h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-100h] BYREF
  char v26[224]; // [rsp+70h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 24 21 accumulate_damage:488 96 64 8 head:475";
  *(_QWORD *)(v6 + 16) = StatLogReporter::recordCombatStatLogOnCreatureDoHurt;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234881024;
  v8[536862722] = -218959118;
  v8[536862725] = -202116109;
  if ( std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::size(&this->combined_do_hurt_stat_log_map_) > 0x3E8 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/stat_log_reporter.cpp",
      "recordCombatStatLogOnCreatureDoHurt",
      454);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v25,
           (const char (*)[49])"combined_do_hurt_stat_log_map_ is too big, size:");
    val = std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::size(&this->combined_do_hurt_stat_log_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_28;
  }
  if ( std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::size(&this->combined_be_hurt_stat_log_map_) > 0x3E8 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/stat_log_reporter.cpp",
      "recordCombatStatLogOnCreatureDoHurt",
      459);
    v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v25,
            (const char (*)[49])"combined_be_hurt_stat_log_map_ is too big, size:");
    val = std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::size(&this->combined_be_hurt_stat_log_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_28;
  }
  if ( !StatLogReporter::hasCombatStatLogTransaction(this) )
    goto LABEL_28;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  stat_log_filter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.stat_log_filter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( !StatLogReporter::isNeedRecordCombatStatLogWithMonster(this, stat_log_filter_config_mgr, monster_id) )
    goto LABEL_28;
  CombatStatHurtLogHead::CombatStatHurtLogHead((CombatStatHurtLogHead *const)(v6 + 96));
  if ( std::operator!=<ActorAbility>(0LL, &attack_result->ability_ptr) )
  {
    v11 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->ability_ptr);
    *(_DWORD *)(v6 + 104) = ActorAbility::getAbilityNameHash(v11);
  }
  if ( std::operator!=<ActorModifier>(0LL, &attack_result->modifier_ptr) )
  {
    v12 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&attack_result->modifier_ptr);
    *(_DWORD *)(v6 + 108) = ActorModifier::getModifierNameHash(v12);
  }
  std::string::operator=(v6 + 112, &attack_result->attack_tag);
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)attack_result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_result->element_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&attack_result->element_type);
  }
  *(_DWORD *)(v6 + 144) = attack_result->element_type;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&attack_result->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&attack_result->hashed_anim_event_id);
  }
  *(_DWORD *)(v6 + 148) = attack_result->hashed_anim_event_id;
  *(_QWORD *)(v6 + 32) = stat_log_filter_config_mgr;
  *(_QWORD *)(v6 + 40) = attack_result;
  *(_QWORD *)(v6 + 48) = change_hp_context;
  v13 = attacker;
  if ( *(_BYTE *)(((unsigned __int64)attacker >> 3) + 0x7FFF8000) )
    __asan_report_load8(attacker);
  v14 = *(_QWORD *)attacker->baseclass_0 + 24LL;
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(_QWORD *)attacker->baseclass_0 + 24LL);
  v15 = (*(__int64 (__fastcall **)(Creature *))v14)(v13);
  if ( v15 <= 2 )
  {
    if ( v15 <= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  if ( v15 == 4 )
  {
LABEL_26:
    StatLogReporter::getCombatStatLogEntityInfo(this, attacker, (CombatStatHurtLogHead *)(v6 + 96));
    *(_DWORD *)(v6 + 152) = 0;
    *(_DWORD *)(v6 + 156) = 0;
    v16 = std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::operator[](
            &this->combined_do_hurt_stat_log_map_,
            (const std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::key_type *)(v6 + 96));
    StatLogReporter::recordCombatStatLogOnCreatureDoHurt(Creature &,Creature &,unsigned int,AttackResult const&,ChangeHpContext const&)::{lambda(CombatStatAccumulatedDamage &)#1}::operator()(
      (const StatLogReporter::recordCombatStatLogOnCreatureDoHurt::<lambda(CombatStatAccumulatedDamage&)> *const)(v6 + 32),
      v16);
  }
LABEL_27:
  StatLogReporter::getCombatStatLogEntityInfo(this, target, (CombatStatHurtLogHead *)(v6 + 96));
  StatLogReporter::getCombatStatLogSourceId(this, attacker, (CombatStatHurtLogHead *)(v6 + 96));
  v17 = std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::operator[](
          &this->combined_be_hurt_stat_log_map_,
          (const std::unordered_map<CombatStatHurtLogHead,CombatStatAccumulatedDamage>::key_type *)(v6 + 96));
  StatLogReporter::recordCombatStatLogOnCreatureDoHurt(Creature &,Creature &,unsigned int,AttackResult const&,ChangeHpContext const&)::{lambda(CombatStatAccumulatedDamage &)#1}::operator()(
    (const StatLogReporter::recordCombatStatLogOnCreatureDoHurt::<lambda(CombatStatAccumulatedDamage&)> *const)(v6 + 32),
    v17);
  CombatStatHurtLogHead::~CombatStatHurtLogHead((CombatStatHurtLogHead *const)(v6 + 96));
LABEL_28:
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 488: range 00000000150B6EEC-00000000150B772A
void __cdecl StatLogReporter::recordCombatStatLogOnCreatureDoHurt(Creature &,Creature &,unsigned int,AttackResult const&,ChangeHpContext const&)::{lambda(CombatStatAccumulatedDamage &)#1}::operator()(
        const StatLogReporter::recordCombatStatLogOnCreatureDoHurt::<lambda(CombatStatAccumulatedDamage&)> *const __closure,
        CombatStatAccumulatedDamage *t)
{
  float ori_hurt; // xmm1_4
  const AttackResult *attack_result; // rax
  float block_shield_hurt; // xmm1_4
  const AttackResult *v5; // rdx
  float ratio_hurt; // xmm1_4
  const AttackResult *v7; // rdx
  const ChangeHpContext *change_hp_context; // rax
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm1_4
  const AttackResult *v12; // rax
  const AttackResult *v13; // rax
  float ori_server_damage; // xmm0_4
  const AttackResult *v15; // rax
  float total_damage_extra; // xmm1_4
  const AttackResult *v17; // rdx
  const StatLogFilterExcelConfigMgr *stat_log_filter_config_mgr; // rax
  char v19; // dl
  const AttackResult *v20; // rax
  unsigned __int64 v21; // rax
  float v22; // xmm1_4
  const AttackResult *v23; // rdx
  std::pair<unsigned int const,float> *v24; // rax
  std::pair<unsigned int const,float> *v25; // rdx
  unsigned __int64 v26; // rax
  float v27; // xmm1_4
  float __a; // [rsp+14h] [rbp-3Ch] BYREF
  float __b; // [rsp+18h] [rbp-38h] BYREF
  float coef; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,float>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,float>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,float> *__for_range; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,float> >::type *filter_hash; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,float> >::type *damage; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,float> __in; // [rsp+48h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(t);
  }
  ori_hurt = t->ori_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__attack_result);
  attack_result = __closure->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&attack_result->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
  {
    attack_result = (const AttackResult *)__asan_report_load4(&attack_result->ori_server_damage);
  }
  t->ori_hurt = attack_result->ori_server_damage + ori_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&t->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)t + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&t->block_shield_hurt);
  }
  block_shield_hurt = t->block_shield_hurt;
  v5 = __closure->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&v5->block_shield_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v5 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->block_shield_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v5->block_shield_hurt);
  }
  t->block_shield_hurt = v5->block_shield_hurt + block_shield_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&t->ratio_hurt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&t->ratio_hurt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&t->ratio_hurt);
  }
  ratio_hurt = t->ratio_hurt;
  v7 = __closure->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&v7->server_damage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->server_damage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->server_damage);
  }
  t->ratio_hurt = v7->server_damage + ratio_hurt;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__change_hp_context >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__change_hp_context);
  change_hp_context = __closure->__change_hp_context;
  if ( *(_BYTE *)(((unsigned __int64)&change_hp_context->delta_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&change_hp_context->delta_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    change_hp_context = (const ChangeHpContext *)__asan_report_load4(&change_hp_context->delta_hp);
  }
  __b = -change_hp_context->delta_hp;
  __a = 0.0;
  v9 = (float *)std::max<float>(&__a, &__b);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  v11 = *v10;
  if ( *(_BYTE *)(((unsigned __int64)&t->real_hurt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)t + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&t->real_hurt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&t->real_hurt);
  }
  t->real_hurt = t->real_hurt + v11;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__attack_result >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__attack_result);
  v12 = __closure->__attack_result;
  if ( *(_BYTE *)(((unsigned __int64)&v12->damage_base >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->damage_base >> 3) + 0x7FFF8000) <= 3 )
  {
    v12 = (const AttackResult *)__asan_report_load4(&v12->damage_base);
  }
  if ( v12->damage_base != 0.0 )
  {
    v13 = __closure->__attack_result;
    if ( *(_BYTE *)(((unsigned __int64)&v13->ori_server_damage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v13->ori_server_damage >> 3) + 0x7FFF8000) <= 3 )
    {
      v13 = (const AttackResult *)__asan_report_load4(&v13->ori_server_damage);
    }
    ori_server_damage = v13->ori_server_damage;
    v15 = __closure->__attack_result;
    if ( *(_BYTE *)(((unsigned __int64)&v15->damage_base >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->damage_base >> 3) + 0x7FFF8000) <= 3 )
    {
      v15 = (const AttackResult *)__asan_report_load4(&v15->damage_base);
    }
    coef = ori_server_damage / v15->damage_base;
    if ( *(_BYTE *)(((unsigned __int64)&t->total_damage_extra >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&t->total_damage_extra >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&t->total_damage_extra);
    }
    total_damage_extra = t->total_damage_extra;
    v17 = __closure->__attack_result;
    if ( *(_BYTE *)(((unsigned __int64)&v17->total_damage_extra >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->total_damage_extra >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v17->total_damage_extra);
    }
    t->total_damage_extra = (float)(v17->total_damage_extra * coef) + total_damage_extra;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    stat_log_filter_config_mgr = __closure->__stat_log_filter_config_mgr;
    v19 = *(_BYTE *)(((unsigned __int64)&__closure->__stat_log_filter_config_mgr->overdose_filter_hash >> 3) + 0x7FFF8000);
    if ( v19 != 0 && v19 <= 3 )
      stat_log_filter_config_mgr = (const StatLogFilterExcelConfigMgr *)__asan_report_load4(&__closure->__stat_log_filter_config_mgr->overdose_filter_hash);
    if ( stat_log_filter_config_mgr->overdose_filter_hash )
    {
      v20 = __closure->__attack_result;
      if ( *(_BYTE *)(((unsigned __int64)&v20->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v20->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
      {
        v20 = (const AttackResult *)__asan_report_load4(&v20->damage_extra_overdose);
      }
      if ( v20->damage_extra_overdose != 0.0 )
      {
        v21 = (unsigned __int64)std::map<unsigned int,float>::operator[](
                                  &t->damage_extra_map,
                                  &__closure->__stat_log_filter_config_mgr->overdose_filter_hash);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0 && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load4(v21);
        v22 = *(float *)v21;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__attack_result >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__attack_result);
        v23 = __closure->__attack_result;
        if ( *(_BYTE *)(((unsigned __int64)&v23->damage_extra_overdose >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v23->damage_extra_overdose >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = __asan_report_load4(&v23->damage_extra_overdose);
        }
        *(float *)v21 = (float)(v23->damage_extra_overdose * coef) + v22;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__attack_result >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__attack_result);
    __for_range = AttackResult::getStatLogDamageExtraMap(__closure->__attack_result);
    __for_begin._M_node = std::map<unsigned int,float>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,float>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = (std::pair<unsigned int const,float> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*(&__for_begin);
      v25 = v24;
      if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v24, 8LL);
      }
      __in = *v25;
      filter_hash = std::get<0ul,unsigned int const,float>(&__in);
      damage = std::get<1ul,unsigned int const,float>(&__in);
      v26 = (unsigned __int64)std::map<unsigned int,float>::operator[](&t->damage_extra_map, filter_hash);
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0 && (char)((v26 & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v26 = __asan_report_load4(v26);
      v27 = *(float *)v26;
      if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
      {
        v26 = __asan_report_load4(damage);
      }
      *(float *)v26 = (float)(*damage * coef) + v27;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++(&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&t->hurt_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&t->hurt_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&t->hurt_count);
  }
  ++t->hurt_count;
};

// Line 534: range 00000000150B7D54-00000000150B8128
void __cdecl StatLogReporter::recordCombatStatLogOnAvatarBeHeal(
        StatLogReporter *const this,
        Avatar *avatar,
        const ActionParam *action_param,
        const ChangeHpContext *change_hp_context,
        float hp_amount)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  common::milog::MiLogStream *v8; // r12
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  float *v11; // rax
  float *v12; // rdx
  float v13; // xmm1_4
  float __a; // [rsp+3Ch] [rbp-A4h] BYREF
  unsigned __int64 val; // [rsp+40h] [rbp-A0h] BYREF
  std::pair<float,float> *__in; // [rsp+48h] [rbp-98h]
  std::tuple_element<0,std::pair<float,float> >::type *real_heal; // [rsp+50h] [rbp-90h]
  std::tuple_element<1,std::pair<float,float> >::type *total_heal; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-80h] BYREF
  char v22[96]; // [rsp+80h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 12 8 head:552";
  *(_QWORD *)(v5 + 16) = StatLogReporter::recordCombatStatLogOnAvatarBeHeal;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202177536;
  if ( std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::size(&this->combined_be_heal_stat_log_map_) <= 0x3E8 )
  {
    if ( StatLogReporter::hasCombatStatLogTransaction(this)
      && StatLogReporter::isNeedRecordCombatStatLogWithoutMonster(this) )
    {
      *(_DWORD *)(v5 + 32) = 0;
      *(_DWORD *)(v5 + 36) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 32) = Avatar::getAvatarId(avatar);
      if ( std::operator!=<ActorAbility>(0LL, &action_param->ability_ptr) )
      {
        v9 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)action_param);
        *(_DWORD *)(v5 + 36) = ActorAbility::getAbilityNameHash(v9);
      }
      if ( std::operator!=<ActorModifier>(0LL, &action_param->modifier_ptr) )
      {
        v10 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&action_param->modifier_ptr);
        *(_DWORD *)(v5 + 40) = ActorModifier::getModifierNameHash(v10);
      }
      __in = std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::operator[](
               &this->combined_be_heal_stat_log_map_,
               (const std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::key_type *)(v5 + 32));
      real_heal = std::get<0ul,float,float>(__in);
      total_heal = std::get<1ul,float,float>(__in);
      __a = 0.0;
      v11 = (float *)std::max<float>(&__a, &change_hp_context->delta_hp);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      if ( *(_BYTE *)(((unsigned __int64)real_heal >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)real_heal & 7) + 3) >= *(_BYTE *)(((unsigned __int64)real_heal >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(real_heal);
      }
      *real_heal = *real_heal + v13;
      if ( *(_BYTE *)(((unsigned __int64)total_heal >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)total_heal & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_heal >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(total_heal);
      }
      *total_heal = *total_heal + hp_amount;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/stat_log_reporter.cpp",
      "recordCombatStatLogOnAvatarBeHeal",
      537);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v21,
           (const char (*)[49])"combined_be_heal_stat_log_map_ is too big, size:");
    val = std::unordered_map<CombatStatHealLogHead,std::pair<float,float>>::size(&this->combined_be_heal_stat_log_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 569: range 00000000150B812A-00000000150B83A4
void __fastcall StatLogReporter::tryRecordCurAvatarPresentTime(StatLogReporter *const this, char *avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int v5; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rax
  unsigned int *v7; // rdx
  SelectType v8; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  SelectType *v10; // rdx
  char v11; // cl
  uint32_t now; // [rsp+1Ch] [rbp-74h]
  char v13[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 avatar_id:568";
  *(_QWORD *)(v2 + 16) = StatLogReporter::tryRecordCurAvatarPresentTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = (_DWORD)avatar_id;
  if ( StatLogReporter::isNeedRecordCombatStatLogWithoutMonster(this) )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_present_start_time_);
    }
    if ( this->avatar_present_start_time_ && *(_DWORD *)(v2 + 32) && now > this->avatar_present_start_time_ )
    {
      v5 = now - this->avatar_present_start_time_;
      v6 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->avatar_present_time_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v8 = SAFE_ADD<unsigned int,unsigned int>(*v7, v5);
      avatar_id = (char *)(v2 + 32);
      v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->avatar_present_time_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      LOBYTE(avatar_id) = v11 != 0;
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
        __asan_report_store4(v9, avatar_id, v9);
      *v10 = v8;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->avatar_present_start_time_, avatar_id, &this->avatar_present_start_time_);
    }
    this->avatar_present_start_time_ = now;
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 586: range 00000000150B83A6-00000000150B86E7
bool __cdecl StatLogReporter::isNeedRecordCombatStatLogWithoutMonster(const StatLogReporter *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t now; // [rsp+14h] [rbp-BCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<unsigned int> *filter_config_vec_ptr; // [rsp+28h] [rbp-A8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const CombatStatLogFilterConfig *filter_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 filter_id:593";
  *(_QWORD *)(v1 + 16) = StatLogReporter::isNeedRecordCombatStatLogWithoutMonster;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  filter_config_vec_ptr = StatLogFilterExcelConfigMgr::findFilterConfigsByTime(
                            &v4->design_config.txt_config_mgr.stat_log_filter_config_mgr,
                            now);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( filter_config_vec_ptr )
  {
    __for_range = filter_config_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(filter_config_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(filter_config_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v1 + 32) = *v7;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      filter_config_ptr = StatLogFilterExcelConfigMgr::findFilterConfig(
                            &v8->design_config.txt_config_mgr.stat_log_filter_config_mgr,
                            *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( filter_config_ptr )
      {
        if ( StatLogReporter::isNeedRecordByNonMonsterFilterConfig(this, filter_config_ptr) )
        {
          result = 1;
          goto LABEL_16;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/basic/stat_log_reporter.cpp",
          "isNeedRecordCombatStatLogWithoutMonster",
          598);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v17,
               (const char (*)[34])"findFilterConfig fail, filter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_16:
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 611: range 00000000150B86E8-00000000150B8A13
__int64 __fastcall StatLogReporter::isNeedRecordCombatStatLogWithMonster(
        const StatLogReporter *const this,
        const StatLogFilterExcelConfigMgr *stat_log_filter_config_mgr,
        uint32_t monster_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const std::unordered_set<unsigned int> *v10; // rax
  uint32_t now; // [rsp+24h] [rbp-CCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *filter_config_vec_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  const CombatStatLogFilterConfig *filter_config_ptr; // [rsp+48h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+70h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 filter_id:618 64 4 14 monster_id:610";
  *(_QWORD *)(v3 + 16) = StatLogReporter::isNeedRecordCombatStatLogWithMonster;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = monster_id;
  now = common::tools::TimeUtils::getNow();
  filter_config_vec_ptr = StatLogFilterExcelConfigMgr::findFilterConfigsByTime(stat_log_filter_config_mgr, now);
  if ( filter_config_vec_ptr )
  {
    __for_range = filter_config_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(filter_config_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(filter_config_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v3 + 48) = *v8;
      filter_config_ptr = StatLogFilterExcelConfigMgr::findFilterConfig(
                            stat_log_filter_config_mgr,
                            *(_DWORD *)(v3 + 48));
      if ( filter_config_ptr )
      {
        if ( StatLogReporter::isNeedRecordByNonMonsterFilterConfig(this, filter_config_ptr) )
        {
          if ( !std::optional<std::unordered_set<unsigned int>>::operator bool(&filter_config_ptr->monster_id_set)
            || (v10 = std::optional<std::unordered_set<unsigned int>>::value(&filter_config_ptr->monster_id_set),
                common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                  v10,
                  (const unsigned int *)(v3 + 64))) )
          {
            result = 1LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/basic/stat_log_reporter.cpp",
          "isNeedRecordCombatStatLogWithMonster",
          623);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v19,
               (const char (*)[34])"findFilterConfig fail, filter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    result = 0LL;
  }
LABEL_21:
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 641: range 00000000150B8B0A-00000000150B90BC
bool __cdecl StatLogReporter::isNeedRecordByNonMonsterFilterConfig(
        const StatLogReporter *const this,
        const CombatStatLogFilterConfig *filter_config)
{
  bool v2; // r14
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const CombatStatLogUidFilter *M_current; // r15
  const CombatStatLogUidFilter *v7; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  data::SceneType SceneType; // eax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const std::unordered_set<unsigned int> *v12; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  int v18; // r15d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::unordered_set<unsigned int> *v20; // rax
  bool result; // al
  uint32_t v22; // [rsp+28h] [rbp-C8h] BYREF
  unsigned int value; // [rsp+2Ch] [rbp-C4h] BYREF
  uint32_t uid; // [rsp+30h] [rbp-C0h]
  uint32_t player_level; // [rsp+34h] [rbp-BCh]
  const StatLogReporter::isNeedRecordByNonMonsterFilterConfig::<lambda(const CombatStatLogUidFilter&)> *uid_predicate; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:656 64 16 15 dungeon_ptr:672";
  *(_QWORD *)(v3 + 16) = StatLogReporter::isNeedRecordByNonMonsterFilterConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  uid = Player::getUid(this->player_);
  v22 = uid;
  uid_predicate = (const StatLogReporter::isNeedRecordByNonMonsterFilterConfig::<lambda(const CombatStatLogUidFilter&)> *)&v22;
  M_current = std::vector<CombatStatLogUidFilter>::end(&filter_config->uid_filter_vec)._M_current;
  v7 = std::vector<CombatStatLogUidFilter>::begin(&filter_config->uid_filter_vec)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)uid_predicate >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uid_predicate & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_predicate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(uid_predicate);
  }
  if ( !std::any_of<__gnu_cxx::__normal_iterator<CombatStatLogUidFilter const*,std::vector<CombatStatLogUidFilter>>,StatLogReporter::isNeedRecordByNonMonsterFilterConfig(CombatStatLogFilterConfig const&)::{lambda(CombatStatLogUidFilter const&)#1}>(
          (__gnu_cxx::__normal_iterator<const CombatStatLogUidFilter*,std::vector<CombatStatLogUidFilter> >)v7,
          (__gnu_cxx::__normal_iterator<const CombatStatLogUidFilter*,std::vector<CombatStatLogUidFilter> >)M_current,
          (StatLogReporter::isNeedRecordByNonMonsterFilterConfig::<lambda(const CombatStatLogUidFilter&)>)uid_predicate->__uid) )
  {
    v2 = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  player_level = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&filter_config->min_player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&filter_config->min_player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&filter_config->min_player_level);
  }
  if ( player_level < filter_config->min_player_level )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&filter_config->max_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)filter_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&filter_config->max_player_level >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&filter_config->max_player_level);
  }
  if ( player_level > filter_config->max_player_level )
  {
LABEL_18:
    v2 = 0;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneType = Scene::getSceneType(v9);
    if ( SceneType == SCENE_WORLD )
    {
      if ( std::optional<std::unordered_set<unsigned int>>::operator bool(&filter_config->world_id_set) )
      {
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        value = Scene::getSceneId(v11);
        v12 = std::optional<std::unordered_set<unsigned int>>::value(&filter_config->world_id_set);
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(v12, &value) )
        {
          v2 = 0;
          goto LABEL_42;
        }
      }
    }
    else
    {
      if ( SceneType != SCENE_DUNGEON )
      {
        v2 = 0;
        goto LABEL_42;
      }
      if ( std::optional<std::unordered_set<unsigned int>>::operator bool(&filter_config->dungeon_id_set) )
      {
        std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 64));
        if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/basic/stat_log_reporter.cpp",
            "isNeedRecordByNonMonsterFilterConfig",
            675);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v27,
                  (const char (*)[29])"scene is not dungeon! scene:");
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v16 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v14, v15);
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v27);
          v2 = 0;
          v18 = 0;
        }
        else
        {
          v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          value = DungeonScene::getDungeonId(v19);
          v20 = std::optional<std::unordered_set<unsigned int>>::value(&filter_config->dungeon_id_set);
          if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(v20, &value) )
          {
            v2 = 0;
            v18 = 0;
          }
          else
          {
            v18 = 1;
          }
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
        if ( v18 != 1 )
          goto LABEL_42;
      }
    }
    v2 = 1;
    goto LABEL_42;
  }
  v2 = 0;
LABEL_42:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
LABEL_43:
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 644: range 00000000150B8A14-00000000150B8B08
bool __cdecl StatLogReporter::isNeedRecordByNonMonsterFilterConfig(CombatStatLogFilterConfig const&)const::{lambda(CombatStatLogUidFilter const&)#1}::operator()(
        const StatLogReporter::isNeedRecordByNonMonsterFilterConfig::<lambda(const CombatStatLogUidFilter&)> *const __closure,
        const CombatStatLogUidFilter *uid_filter)
{
  uint32_t v2; // edi

  if ( *(_BYTE *)(((unsigned __int64)uid_filter >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)uid_filter & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_filter >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(uid_filter);
  }
  if ( !uid_filter->uid_modulo )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v2 = __closure->__uid % uid_filter->uid_modulo;
  if ( *(_BYTE *)(((unsigned __int64)&uid_filter->uid_remainder >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)uid_filter + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&uid_filter->uid_remainder >> 3)
                                                             + 0x7FFF8000) )
  {
    v2 = (_DWORD)uid_filter + 4;
    __asan_report_load4(&uid_filter->uid_remainder);
  }
  return v2 == uid_filter->uid_remainder;
};

// Line 691: range 00000000150B90BE-00000000150B92EE
// local variable allocation has failed, the output may be wrong!
void __cdecl StatLogReporter::setTransStateByGm(
        StatLogReporter *const this,
        proto_log::TransType trans_type,
        std::string *p_transaction)
{
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+28h] [rbp-38h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( trans_type )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->trans_type_, *(_QWORD *)&trans_type, &this->trans_type_);
    }
    this->trans_type_ = trans_type;
    std::string::operator=(&this->transaction_, p_transaction);
    if ( *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->transaction_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->transaction_start_time_, p_transaction, &this->transaction_start_time_);
    }
    this->transaction_start_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_present_start_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->avatar_present_start_time_, p_transaction, &this->avatar_present_start_time_);
    }
    this->avatar_present_start_time_ = now;
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/stat_log_reporter.cpp",
      "setTransStateByGm",
      701);
    v3 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v11, (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v4 = operator<<(v3, this->player_);
    v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" trans_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->trans_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->trans_type_);
    }
    val = this->trans_type_;
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" transaction:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->transaction_);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    StatLogReporter::checkAndUpdateCombatStatLogTransaction(this);
  }
};

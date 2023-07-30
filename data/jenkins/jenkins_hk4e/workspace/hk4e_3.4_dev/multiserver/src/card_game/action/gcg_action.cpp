// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/action/gcg_action.cpp

// Line 21: range 000000000E109D8C-000000000E109E86
void __cdecl GCGActionBase::GCGActionBase(GCGActionBase *const this, GCGGameMode *game_mode)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGActionBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GCGActionBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->seq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seq_);
  }
  this->seq_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->controller_id_);
  }
  this->controller_id_ = GCG_CONTROLLER_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->game_mode_);
  this->game_mode_ = game_mode;
};

// Line 29: range 000000000E109E88-000000000E10A443
int32_t __cdecl GCGActionUseSkill::exec(GCGActionUseSkill *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGField *Field; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGSkillLogic *SkillLogic; // r14
  GCGCard *v12; // rax
  GCGSkill *v13; // rax
  GCGCard *v14; // rax
  int32_t result; // eax
  uint32_t energy_recharge; // [rsp+1Ch] [rbp-2B4h]
  GCGDuel *duel; // [rsp+20h] [rbp-2B0h]
  std::shared_ptr<GCGSkill> p_skill_ptr; // [rsp+30h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-290h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-270h] BYREF
  char v21[592]; // [rsp+80h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 11 card_ptr:32 80 16 12 skill_ptr:38 112 368 9 result:44";
  *(_QWORD *)(v1 + 16) = GCGActionUseSkill::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862735] = -202116109;
  v3[536862736] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  Field = GCGDuel::getField(duel, this->controller_id_);
  GCGField::getCharacterZone(Field);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 48));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      35);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v20, (const char (*)[39])off_1BC71C00);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  else
  {
    v7 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->skill_id);
    }
    GCGCard::getSkill((GCGCard *const)(v1 + 80), v7);
    if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        41);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v19,
             (const char (*)[31])"card getSkill fail. skill_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->skill_id);
      v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      GCGCard::getDesc[abi:cxx11]((std::string *)&v20, v10);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v20);
      std::string::~string(&v20);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v1 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
      std::shared_ptr<GCGSkill>::shared_ptr(&p_skill_ptr, (const std::shared_ptr<GCGSkill> *)(v1 + 80));
      v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      GCGSkillLogic::useCardSkill(SkillLogic, v12, &p_skill_ptr, (GCGSkillResult *)(v1 + 112));
      std::shared_ptr<GCGSkill>::~shared_ptr(&p_skill_ptr);
      v13 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      energy_recharge = GCGSkill::getEnergyRecharge(v13);
      if ( energy_recharge )
      {
        v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GCGCard::addEnergy(v14, energy_recharge, GCG_REASON_EFFECT);
      }
      v6 = 0;
      GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v1 + 112));
    }
    std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v1 + 80));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 48));
  result = v6;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 55: range 000000000E10A444-000000000E10AED7
int32_t __cdecl GCGActionAttack::exec(GCGActionAttack *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGField *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  uint32_t v7; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGDuel *v11; // rcx
  GCGDiceZone *DiceZone; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  GCGCard *p_cost_energy; // rdi
  GCGCard *v22; // rax
  GCGSkill *v23; // rax
  GCGCard *v24; // rax
  GCGField *v25; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t SkillId; // ecx
  int32_t result; // eax
  uint32_t costa; // [rsp+10h] [rbp-300h]
  GCGSkillLogic *costb; // [rsp+10h] [rbp-300h]
  GCGStatistics *cost; // [rsp+10h] [rbp-300h]
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-2E5h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-2E4h] BYREF
  uint32_t energy_recharge; // [rsp+30h] [rbp-2E0h]
  proto::GCGControllerValue opponent_controller_id; // [rsp+34h] [rbp-2DCh]
  GCGDuel *duel; // [rsp+38h] [rbp-2D8h]
  GCGField *field; // [rsp+40h] [rbp-2D0h]
  GCGCharacterZone *opponent_character_zone; // [rsp+48h] [rbp-2C8h]
  std::shared_ptr<GCGSkill> p_skill_ptr; // [rsp+50h] [rbp-2C0h] BYREF
  std::vector<unsigned int> p_param_list; // [rsp+60h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-290h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-270h] BYREF
  char v44[592]; // [rsp+C0h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 11 card_ptr:57 80 16 12 skill_ptr:63 112 368 9 result:84";
  *(_QWORD *)(v1 + 16) = GCGActionAttack::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862735] = -202116109;
  v3[536862736] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  v4 = GCGDuel::getField(duel, this->controller_id_);
  GCGField::getCharacterZone(v4);
  GCGCharacterZone::getOnStageCard((GCGCharacterZone *const)(v1 + 48));
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      60);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v43, (const char (*)[39])off_1BC71C00);
    common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
      v5,
      &this->controller_id_);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v6 = -1;
    goto LABEL_38;
  }
  v7 = (unsigned int)std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_id);
  }
  GCGCard::getSkill((GCGCard *const)(v1 + 80), v7);
  if ( !std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v1 + 80), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v11 = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    field = GCGDuel::getField(v11, this->controller_id_);
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::costDice(DiceZone, &this->cost_dice_set, GCG_REASON_COST);
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cost_energy);
    }
    if ( this->cost_energy )
    {
      costa = this->cost_energy;
      v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( !GCGUtils::isEnergyCostValid(v13, costa) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          77);
        v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v42,
                (const char (*)[26])"energy not enough. card: ");
        v15 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GCGCard::getDesc[abi:cxx11]((std::string *)&v43, v15);
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v43);
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" token: ");
        v18 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        val = GCGCard::getToken(v18, GCG_TOKEN_ENERGY);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" need: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->cost_energy);
        std::string::~string(&v43);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v6 = -1;
        goto LABEL_37;
      }
      p_cost_energy = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
      {
        p_cost_energy = (GCGCard *)&this->cost_energy;
        __asan_report_load4(&this->cost_energy);
      }
      GCGCard::subToken(p_cost_energy, GCG_TOKEN_ENERGY, this->cost_energy, GCG_REASON_COST);
    }
    GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v1 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    costb = GCGGameMode::getSkillLogic(this->game_mode_);
    std::shared_ptr<GCGSkill>::shared_ptr(&p_skill_ptr, (const std::shared_ptr<GCGSkill> *)(v1 + 80));
    v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    GCGSkillLogic::useCardSkill(costb, v22, &p_skill_ptr, (GCGSkillResult *)(v1 + 112));
    std::shared_ptr<GCGSkill>::~shared_ptr(&p_skill_ptr);
    v23 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    energy_recharge = GCGSkill::getEnergyRecharge(v23);
    if ( energy_recharge )
    {
      v24 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      GCGCard::addEnergy(v24, energy_recharge, GCG_REASON_ATTACK);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    opponent_controller_id = GCGDuel::getOtherControllerId(duel, this->controller_id_);
    v25 = GCGDuel::getField(duel, opponent_controller_id);
    opponent_character_zone = GCGField::getCharacterZone(v25);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    cost = GCGGameMode::getStatistics(this->game_mode_);
    val = GCGCharacterZone::getOnStageCardId(opponent_character_zone);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&p_param_list, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
    v26 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    SkillId = GCGSkill::getSkillId(v26);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    GCGStatistics::reportStatisticOperationData(
      cost,
      GCG_OPERATION_TYPE_ATTACK,
      this->controller_id_,
      SkillId,
      &p_param_list);
    std::vector<unsigned int>::~vector(&p_param_list);
    std::allocator<unsigned int>::~allocator(&__a);
    v6 = 0;
    GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v1 + 112));
    goto LABEL_37;
  }
  common::milog::MiLogStream::create(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/card_game/action/gcg_action.cpp",
    "exec",
    66);
  v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v42,
         (const char (*)[31])"card getSkill fail. skill_id: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->skill_id);
  v10 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  GCGCard::getDesc[abi:cxx11]((std::string *)&v43, v10);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)&v43);
  std::string::~string(&v43);
  common::milog::MiLogStream::~MiLogStream(&v42);
  v6 = -1;
LABEL_37:
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v1 + 80));
LABEL_38:
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 48));
  result = v6;
  if ( v44 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 99: range 000000000E10AED8-000000000E10B0C1
int32_t __cdecl GCGActionDraw::exec(GCGActionDraw *const this)
{
  GCGDuel *Duel; // rcx
  uint32_t count; // ebx
  GCGCardZone *HandZone; // r12
  GCGCardZone *DeckZone; // rax
  GCGStatistics *Statistics; // rbx
  GCGCardZone *v6; // rax
  GCGField *field; // [rsp+18h] [rbp-38h]
  std::vector<unsigned int> p_param_list; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count);
  }
  count = this->count;
  HandZone = GCGField::getHandZone(field);
  DeckZone = GCGField::getDeckZone(field);
  GCGUtils::moveCard(DeckZone, HandZone, count, GCG_REASON_DEFAULT);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Statistics = GCGGameMode::getStatistics(this->game_mode_);
  v6 = GCGField::getHandZone(field);
  GCGCardZone::getCardIdVec(&p_param_list, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGStatistics::reportStatisticOperationData(
    Statistics,
    GCG_OPERATION_TYPE_DRAW,
    this->controller_id_,
    0,
    &p_param_list);
  std::vector<unsigned int>::~vector(&p_param_list);
  return 0;
};

// Line 108: range 000000000E10B0C2-000000000E10B1BA
int32_t __cdecl GCGActionGameOver::exec(GCGActionGameOver *const this)
{
  GCGPhaseMgr *PhaseMgr; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/action/gcg_action.cpp",
    "exec",
    109);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v3, (const char (*)[9])"GameOver");
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::enterPhase(PhaseMgr, GCG_PHASE_FIN);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::stop(this->game_mode_);
  return 0;
};

// Line 116: range 000000000E10B1BC-000000000E10B434
int32_t __cdecl GCGActionPass::exec(GCGActionPass *const this)
{
  GCGControllerValue OtherControllerId; // edx
  GCGField *v2; // rax
  GCGStatistics *Statistics; // rbx
  GCGDiceZone *DiceZone; // rax
  uint32_t is_first; // [rsp+18h] [rbp-68h]
  GCGDuel *duel; // [rsp+20h] [rbp-60h]
  GCGField *field; // [rsp+28h] [rbp-58h]
  std::vector<unsigned int> p_param_list; // [rsp+30h] [rbp-50h] BYREF
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(duel, this->controller_id_);
  GCGField::setPass(field, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  is_first = 1;
  OtherControllerId = GCGDuel::getOtherControllerId(duel, this->controller_id_);
  v2 = GCGDuel::getField(duel, OtherControllerId);
  if ( GCGField::isPassed(v2) )
    is_first = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Statistics = GCGGameMode::getStatistics(this->game_mode_);
  DiceZone = GCGField::getDiceZone(field);
  GCGDiceZone::getAllDiceTypeCountVec(&p_param_list, DiceZone);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGStatistics::reportStatisticOperationData(
    Statistics,
    GCG_OPERATION_TYPE_PASS,
    this->controller_id_,
    is_first,
    &p_param_list);
  std::vector<unsigned int>::~vector(&p_param_list);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/action/gcg_action.cpp",
    "exec",
    129);
  common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v10, (const char (*)[6])"pass.");
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 134: range 000000000E10B436-000000000E10C546
int32_t __cdecl GCGActionPlayCard::exec(GCGActionPlayCard *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGDuel *Duel; // rcx
  GCGDiceZone *DiceZone; // rax
  std::vector<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  uint32_t CardMgr; // eax
  common::milog::MiLogStream *v9; // rax
  uint32_t cost_energy; // r14d
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  GCGCard *p_cost_energy; // rdi
  common::milog::MiLogStream *v20; // rax
  int32_t v21; // r14d
  GCGCard *v22; // rax
  GCGCard *v23; // rax
  std::vector<unsigned int>::reference v24; // rax
  _DWORD *v25; // rdx
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t CardType; // eax
  GCGCardZone *p_replace_card_guid; // rdi
  GCGCardZone *v29; // r14
  GCGStatistics *Statistics; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t Id; // ecx
  GCGStatistics *p_controller_id; // rdi
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  data::GCGTagType *v36; // rax
  data::GCGTagType *v37; // rdx
  GCGGameMode *game_mode; // rdi
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  GCGSkillLogic *SkillLogic; // r15
  GCGCard *v47; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-1F0h] BYREF
  data::GCGTagType tag_type; // [rsp+14h] [rbp-1ECh]
  std::set<data::GCGTagType>::iterator __for_begin; // [rsp+18h] [rbp-1E8h] BYREF
  std::set<data::GCGTagType>::iterator __for_end; // [rsp+20h] [rbp-1E0h] BYREF
  GCGField *field; // [rsp+28h] [rbp-1D8h]
  GCGCardZone *hand_zone; // [rsp+30h] [rbp-1D0h]
  const std::set<data::GCGTagType> *__for_range; // [rsp+38h] [rbp-1C8h]
  std::tuple<int&,std::shared_ptr<GCGCard>&> v57; // [rsp+40h] [rbp-1C0h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __in; // [rsp+50h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-190h] BYREF
  common::milog::MiLogStream v60; // [rsp+90h] [rbp-170h] BYREF
  char v61[336]; // [rsp+B0h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 9 param:186 48 4 7 ret:191 64 16 12 card_ptr:169 96 16 16 ret_card_ptr:192 128 16 12 zone"
                        "_ptr:193 160 16 19 target_card_ptr:152 192 64 19 challenge_param:211";
  *(_QWORD *)(v1 + 16) = GCGActionPlayCard::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  if ( !std::set<unsigned int>::empty(&this->cost_dice_set) )
  {
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::costDice(DiceZone, &this->cost_dice_set, GCG_REASON_COST);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cost_energy);
  }
  if ( this->cost_energy )
  {
    if ( std::vector<unsigned int>::empty(&this->target_param_vec) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        148);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v60,
        (const char (*)[24])"target size not enough.");
      common::milog::MiLogStream::~MiLogStream(&v60);
    }
    else
    {
      v6 = std::vector<unsigned int>::operator[](&this->target_param_vec, 0LL);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v1 + 48) = *v7;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      CardMgr = (unsigned int)GCGGameMode::getCardMgr(this->game_mode_);
      GCGCardMgr::findCard((GCGCardMgr *const)(v1 + 160), CardMgr);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          155);
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v60,
               (const char (*)[48])"op target param invalid. find card fail. guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v60);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cost_energy);
        }
        cost_energy = this->cost_energy;
        v11 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        if ( !GCGUtils::isEnergyCostValid(v11, cost_energy) )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/card_game/action/gcg_action.cpp",
            "exec",
            160);
          v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v59,
                  (const char (*)[26])"energy not enough. card: ");
          v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          GCGCard::getDesc[abi:cxx11]((std::string *)&v60, v13);
          v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v60);
          v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" token: ");
          v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          val = GCGCard::getToken(v16, GCG_TOKEN_ENERGY);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" need: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->cost_energy);
          std::string::~string(&v60);
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        p_cost_energy = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cost_energy >> 3) + 0x7FFF8000) <= 3 )
        {
          p_cost_energy = (GCGCard *)&this->cost_energy;
          __asan_report_load4(&this->cost_energy);
        }
        GCGCard::subToken(p_cost_energy, GCG_TOKEN_ENERGY, this->cost_energy, GCG_REASON_COST);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 160));
    }
  }
  hand_zone = GCGField::getHandZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&this->hand_card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hand_card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hand_card_guid);
  }
  GCGCardZone::findCard((GCGCardZone *const)(v1 + 64), (uint32_t)hand_zone);
  if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      172);
    v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v60,
            (const char (*)[25])"card not in hand. guid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->hand_card_guid);
    common::milog::MiLogStream::~MiLogStream(&v60);
    v21 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
    {
      v22 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      GCGCard::setShowState(v22, SHOW_STATE_SHOW_BOTH);
      v23 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      GCGCard::notifyUpdate(v23, 1);
    }
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)(v1 + 160),
      (const std::shared_ptr<GCGCard> *)(v1 + 64));
    GCGCardZone::delCard(hand_zone, (GCGCardPtr *)(v1 + 160), GCG_REASON_PLAY_CARD, 1);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 160));
    *(_DWORD *)(v1 + 32) = 0;
    if ( !std::vector<unsigned int>::empty(&this->target_param_vec) )
    {
      v24 = std::vector<unsigned int>::operator[](&this->target_param_vec, 0LL);
      v25 = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      *(_DWORD *)(v1 + 32) = *v25;
    }
    *(_DWORD *)(v1 + 48) = 0;
    std::shared_ptr<GCGCard>::shared_ptr(
      (std::shared_ptr<GCGCard> *const)(v1 + 96),
      (const std::shared_ptr<GCGCard> *)(v1 + 64));
    v26 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    CardType = GCGCard::getCardType(v26);
    GCGField::getZoneByCardType((GCGField *const)(v1 + 128), (GCGCardType)field, CardType);
    if ( std::operator!=<GCGCardZone>((const std::shared_ptr<GCGCardZone> *)(v1 + 128), 0LL) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->replace_card_guid);
      }
      if ( this->replace_card_guid )
      {
        p_replace_card_guid = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->replace_card_guid >> 3) + 0x7FFF8000) <= 3 )
        {
          p_replace_card_guid = (GCGCardZone *)&this->replace_card_guid;
          __asan_report_load4(&this->replace_card_guid);
        }
        GCGCardZone::delCard(p_replace_card_guid, this->replace_card_guid, GCG_REASON_PLAY_CARD, 1);
      }
      v29 = std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCardZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
      std::shared_ptr<GCGCard>::shared_ptr(
        (std::shared_ptr<GCGCard> *const)(v1 + 160),
        (const std::shared_ptr<GCGCard> *)(v1 + 64));
      GCGCardZone::addCard(&__in, v29, (GCGCardPtr *)(v1 + 160), GCG_REASON_PLAY_CARD, 1, 0);
      std::tie<int,std::shared_ptr<GCGCard>>(
        (int *)&v57,
        (std::shared_ptr<GCGCard> *)(v1 + 48),
        (int *)(v1 + 96),
        (std::shared_ptr<GCGCard> *)(v1 + 48));
      std::tuple<int &,std::shared_ptr<GCGCard> &>::operator=<int,std::shared_ptr<GCGCard>>(&v57, &__in);
      std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__in);
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 160));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    if ( !GCGGameMode::isDuringSnapshot(this->game_mode_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      Statistics = GCGGameMode::getStatistics(this->game_mode_);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)&__in, &this->target_param_vec);
      v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Id = GCGCard::getId(v31);
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->controller_id_);
      }
      GCGStatistics::reportStatisticOperationData(
        Statistics,
        GCG_OPERATION_TYPE_PLAY_CARD,
        this->controller_id_,
        Id,
        (std::vector<unsigned int> *)&__in);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)&__in);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      p_controller_id = GCGGameMode::getStatistics(this->game_mode_);
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
      {
        p_controller_id = (GCGStatistics *)&this->controller_id_;
        __asan_report_load4(&this->controller_id_);
      }
      GCGStatistics::reportStatisticSpecifyDataUint(p_controller_id, this->controller_id_, PLAY_CARD_TIMES, 1u, 1);
      GCGChallengeUpdateParam::GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 192));
      v34 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      *(_DWORD *)(v1 + 192) = GCGCard::getCardType(v34);
      v35 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      __for_range = GCGCard::getTags(v35);
      __for_begin._M_node = std::set<data::GCGTagType>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<data::GCGTagType>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v36 = (data::GCGTagType *)std::_Rb_tree_const_iterator<data::GCGTagType>::operator*(&__for_begin);
        v37 = v36;
        if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v36);
        }
        tag_type = *v37;
        val = tag_type;
        std::set<unsigned int>::emplace<unsigned int>(
          (std::set<unsigned int> *const)(v1 + 208),
          &val,
          (unsigned int *)(v1 + 208));
        std::_Rb_tree_const_iterator<data::GCGTagType>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      game_mode = this->game_mode_;
      if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
      {
        game_mode = (GCGGameMode *)&this->controller_id_;
        __asan_report_load4(&this->controller_id_);
      }
      GCGGameMode::updatePlayerControllerChallengeByType(
        game_mode,
        this->controller_id_,
        GCG_CHALLENGE_PLAY_CARD_WITH_TAG_AND_TYPE_TIMES,
        (const GCGChallengeUpdateParam *)(v1 + 192));
      GCGChallengeUpdateParam::~GCGChallengeUpdateParam((GCGChallengeUpdateParam *const)(v1 + 192));
    }
    v39 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    GCGField::recordPlayCard(field, v39);
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      222);
    v40 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v59, (const char (*)[15])"playCard card:");
    v41 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    GCGCard::getDesc[abi:cxx11]((std::string *)&v60, v41);
    v42 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, (const std::string *)&v60);
    v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])", param:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v1 + 32));
    std::string::~string(&v60);
    common::milog::MiLogStream::~MiLogStream(&v59);
    if ( !*(_DWORD *)(v1 + 48) && std::operator!=<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 96), 0LL) )
    {
      v45 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( GCGCard::isActivated(v45) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->game_mode_);
        SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
        v47 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        GCGSkillLogic::useCardAllSkill(SkillLogic, v47, &this->target_param_vec);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          234);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v60, (const char (*)[20])"card not activated.");
        common::milog::MiLogStream::~MiLogStream(&v60);
      }
    }
    v21 = *(_DWORD *)(v1 + 48);
    std::shared_ptr<GCGCardZone>::~shared_ptr((std::shared_ptr<GCGCardZone> *const)(v1 + 128));
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 96));
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 64));
  result = v21;
  if ( v61 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 241: range 000000000E10C672-000000000E10D8F3
int32_t __cdecl GCGActionRedraw::exec(GCGActionRedraw *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGDuel *Duel; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  GCGCard *v8; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  GCGZoneType ZoneType; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  GCGZoneType *p_from; // rax
  GCGZoneType v13; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  GCGControllerValue ControllerId; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::vector<unsigned int> *v17; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::vector<unsigned int> *v19; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  GCGGameMode *game_mode; // r14
  unsigned int *M_current; // r15
  unsigned int *v24; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v25; // rax
  _DWORD *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  int v28; // r14d
  GCGCard *v29; // r14
  GCGCardShowState CardShowStateByZoneType; // eax
  GCGCard *v31; // rax
  GCGZoneType v32; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rdx
  GCGZoneType *v34; // rax
  GCGZoneType v35; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  GCGControllerValue v37; // r14d
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::vector<unsigned int> *v39; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::vector<unsigned int> *v41; // r14
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  GCGGameMode *v44; // r14
  GCGStatistics *Statistics; // r14
  GCGCardZone *HandZone; // rax
  int32_t result; // eax
  GCGActionRedraw::exec::<lambda(GCGCard&)> v48; // [rsp-20h] [rbp-320h]
  uint32_t redraw_num; // [rsp+1Ch] [rbp-2E4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-2E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-2D8h] BYREF
  GCGField *field; // [rsp+30h] [rbp-2D0h]
  GCGCardZone *hand_zone; // [rsp+38h] [rbp-2C8h]
  GCGCardZone *deck_zone; // [rsp+40h] [rbp-2C0h]
  const GCGRule *rule; // [rsp+48h] [rbp-2B8h]
  std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-2B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-2A8h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret_0; // [rsp+60h] [rbp-2A0h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr_0; // [rsp+68h] [rbp-298h]
  std::tuple_element<0,std::tuple<int,std::shared_ptr<GCGCard> > >::type *ret; // [rsp+70h] [rbp-290h]
  std::tuple_element<0,std::tuple<std::shared_ptr<GCGCard> > >::type *ret_card_ptr; // [rsp+78h] [rbp-288h]
  std::shared_ptr<GCGCard> p_card_ptr; // [rsp+80h] [rbp-280h] BYREF
  std::tuple<int,std::shared_ptr<GCGCard> > __t; // [rsp+90h] [rbp-270h] BYREF
  common::milog::MiLogStream v64; // [rsp+B0h] [rbp-250h] BYREF
  char v65[560]; // [rsp+D0h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 48 4 13 card_guid:251 64 4 13 card_guid:309 80 16 15 message_ptr:330 112 24 15 include_vec:288"
                        " 176 24 15 exclude_vec:289 240 24 17 card_guid_vec:307 304 24 22 fail_card_guid_vec:308 368 24 2"
                        "2 fail_card_guid_vec:250 432 48 18 exclude_id_set:247";
  *(_QWORD *)(v1 + 16) = GCGActionRedraw::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862726] = -218959360;
  v3[536862727] = 62194;
  v3[536862728] = -218959360;
  v3[536862729] = 62194;
  v3[536862730] = -218959360;
  v3[536862731] = 62194;
  v3[536862732] = -218959360;
  v3[536862733] = 62194;
  v3[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  hand_zone = GCGField::getHandZone(field);
  deck_zone = GCGField::getDeckZone(field);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  rule = GCGGameMode::rule(this->game_mode_);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 432));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 304));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 368));
  __for_range = &this->selected_card_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->selected_card_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->selected_card_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 48) = *v6;
    GCGCardZone::popCard((GCGCardZone *const)(v1 + 80), (uint32_t)hand_zone, *(GCGReason *)(v1 + 48), 0);
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        256);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v64,
             (const char (*)[33])"card ptr is nullptr. card_guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v64);
    }
    else
    {
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 304),
        (const std::vector<unsigned int>::value_type *)(v1 + 48));
      std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v1 + 80));
      GCGCardZone::addCard(&__t, deck_zone, &p_card_ptr, GCG_REASON_DEFAULT, 0, 0);
      std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
      ret = std::get<0ul,int,std::shared_ptr<GCGCard>>(&__t);
      ret_card_ptr = std::get<1ul,int,std::shared_ptr<GCGCard>>(&__t);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(ret);
      }
      if ( *ret )
      {
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v1 + 368),
          (const std::vector<unsigned int>::value_type *)(v1 + 48));
      }
      else
      {
        v8 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        GCGCard::notifyUpdate(v8, 0);
      }
      v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      *(_DWORD *)(v1 + 64) = GCGCard::getId(v9);
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v1 + 432),
        (std::set<unsigned int>::value_type *)(v1 + 64));
      std::tuple<int,std::shared_ptr<GCGCard>>::~tuple(&__t);
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 80));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::tools::perf::make_shared<GCGMsgMoveCard>();
  ZoneType = GCGCardZone::getZoneType(hand_zone);
  v11 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  p_from = &v11->from;
  if ( *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_from & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_from >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_from);
  }
  v11->from = ZoneType;
  v13 = GCGCardZone::getZoneType(deck_zone);
  v14 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v14->to >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->to >> 3) + 0x7FFF8000) <= 3 )
  {
    v14 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v14->to);
  }
  v14->to = v13;
  ControllerId = GCGActionBase::getControllerId(this);
  v16 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v16 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->controller_id);
  }
  v16->controller_id = ControllerId;
  v17 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v1 + 304));
  v18 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  std::vector<unsigned int>::operator=(&v18->card_guid_vec, v17);
  v19 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v1 + 368));
  v20 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  std::vector<unsigned int>::operator=(&v20->fail_guid_vec, v19);
  v21 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v21->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    v21 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->reason);
  }
  v21->reason = GCG_REASON_DEFAULT;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  game_mode = this->game_mode_;
  std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgMoveCard,void>(
    (std::shared_ptr<GCGMessage> *const)&p_card_ptr,
    (const std::shared_ptr<GCGMsgMoveCard> *)(v1 + 80));
  GCGGameMode::sendMessage(game_mode, (GCGMessagePtr *)&p_card_ptr);
  std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)&p_card_ptr);
  std::shared_ptr<GCGMsgMoveCard>::~shared_ptr((std::shared_ptr<GCGMsgMoveCard> *const)(v1 + 80));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 368));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 304));
  redraw_num = std::set<unsigned int>::size(&this->selected_card_set);
  GCGCardZone::shuffle(deck_zone);
  if ( *(_BYTE *)(((unsigned __int64)&rule->is_redraw_same >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rule + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&rule->is_redraw_same >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&rule->is_redraw_same);
  }
  if ( rule->is_redraw_same )
  {
    GCGUtils::moveCard(deck_zone, hand_zone, redraw_num, GCG_REASON_DEFAULT);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 112));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 176));
    __t.std::_Tuple_impl<0,int,std::shared_ptr<GCGCard> >::std::_Tuple_impl<1,std::shared_ptr<GCGCard> >::std::_Head_base<1,std::shared_ptr<GCGCard>,false>::_M_head_impl._M_ptr = (std::__shared_ptr<GCGCard,(__gnu_cxx::_Lock_policy)2>::element_type *)(v1 + 432);
    __t.std::_Tuple_impl<0,int,std::shared_ptr<GCGCard> >::std::_Tuple_impl<1,std::shared_ptr<GCGCard> >::std::_Head_base<1,std::shared_ptr<GCGCard>,false>::_M_head_impl._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v1 + 112);
    *(_QWORD *)&__t.std::_Tuple_impl<0,int,std::shared_ptr<GCGCard> >::std::_Head_base<0,int,false>::_M_head_impl = v1 + 176;
    v48.__exclude_vec = (std::vector<unsigned int> *)(v1 + 176);
    v48.__include_vec = (std::vector<unsigned int> *)(v1 + 112);
    v48.__exclude_id_set = (std::set<unsigned int> *)(v1 + 432);
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGActionRedraw::exec(void)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&v64,
      v48);
    GCGCardZone::foreachCard(deck_zone, (std::function<ForeachPolicy(GCGCard&)> *)&v64);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v64);
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 112)) < redraw_num )
    {
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 176))._M_current;
      v24 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 176))._M_current;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 112))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v1 + 112),
        (std::vector<unsigned int>::const_iterator)__for_end._M_node,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v24,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 240));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 304));
    __for_range_0 = (std::vector<unsigned int> *)(v1 + 112);
    __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 112))._M_current;
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
    {
      v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      *(_DWORD *)(v1 + 64) = *v26;
      GCGCardZone::popCard((GCGCardZone *const)(v1 + 80), (uint32_t)deck_zone, *(GCGReason *)(v1 + 64), 0);
      if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v64,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          314);
        v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v64,
                (const char (*)[33])"card ptr is nullptr. card_guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v1 + 64));
        common::milog::MiLogStream::~MiLogStream(&v64);
        v28 = 0;
      }
      else
      {
        v29 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        CardShowStateByZoneType = GCGUtils::getCardShowStateByZoneType(GCG_ZONE_HAND);
        GCGCard::setShowState(v29, CardShowStateByZoneType);
        v31 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        GCGCard::notifyUpdate(v31, 0);
        std::shared_ptr<GCGCard>::shared_ptr(&p_card_ptr, (const std::shared_ptr<GCGCard> *)(v1 + 80));
        GCGCardZone::addCard(
          (std::tuple<int,std::shared_ptr<GCGCard> > *)(v1 + 368),
          hand_zone,
          &p_card_ptr,
          GCG_REASON_DEFAULT,
          0,
          0);
        std::shared_ptr<GCGCard>::~shared_ptr(&p_card_ptr);
        ret_0 = std::get<0ul,int,std::shared_ptr<GCGCard>>((std::tuple<int,std::shared_ptr<GCGCard> > *)(v1 + 368));
        ret_card_ptr_0 = std::get<1ul,int,std::shared_ptr<GCGCard>>((std::tuple<int,std::shared_ptr<GCGCard> > *)(v1 + 368));
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v1 + 240),
          (const std::vector<unsigned int>::value_type *)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret_0);
        }
        if ( *ret_0 )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v1 + 304),
            (const std::vector<unsigned int>::value_type *)(v1 + 64));
        --redraw_num;
        std::tuple<int,std::shared_ptr<GCGCard>>::~tuple((std::tuple<int,std::shared_ptr<GCGCard> > *const)(v1 + 368));
        v28 = redraw_num != 0 ? 2 : 1;
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 80));
      if ( v28 )
      {
        if ( v28 != 2 )
          break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    }
    common::tools::perf::make_shared<GCGMsgMoveCard>();
    v32 = GCGCardZone::getZoneType(deck_zone);
    v33 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    v34 = &v33->from;
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v34);
    }
    v33->from = v32;
    v35 = GCGCardZone::getZoneType(hand_zone);
    v36 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v36->to >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v36->to >> 3) + 0x7FFF8000) <= 3 )
    {
      v36 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v36->to);
    }
    v36->to = v35;
    v37 = GCGActionBase::getControllerId(this);
    v38 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v38->controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v38->controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v38 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v38->controller_id);
    }
    v38->controller_id = v37;
    v39 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v1 + 240));
    v40 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    std::vector<unsigned int>::operator=(&v40->card_guid_vec, v39);
    v41 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v1 + 304));
    v42 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    std::vector<unsigned int>::operator=(&v42->fail_guid_vec, v41);
    v43 = std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v43->reason >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v43->reason >> 3) + 0x7FFF8000) <= 3 )
    {
      v43 = (std::__shared_ptr_access<GCGMsgMoveCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v43->reason);
    }
    v43->reason = GCG_REASON_DEFAULT;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v44 = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr<GCGMsgMoveCard,void>(
      (std::shared_ptr<GCGMessage> *const)&p_card_ptr,
      (const std::shared_ptr<GCGMsgMoveCard> *)(v1 + 80));
    GCGGameMode::sendMessage(v44, (GCGMessagePtr *)&p_card_ptr);
    std::shared_ptr<GCGMessage>::~shared_ptr((std::shared_ptr<GCGMessage> *const)&p_card_ptr);
    std::shared_ptr<GCGMsgMoveCard>::~shared_ptr((std::shared_ptr<GCGMsgMoveCard> *const)(v1 + 80));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 304));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 240));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 176));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 112));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Statistics = GCGGameMode::getStatistics(this->game_mode_);
  HandZone = GCGField::getHandZone(field);
  GCGCardZone::getCardIdVec((std::vector<unsigned int> *)(v1 + 368), HandZone);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGStatistics::reportStatisticOperationData(
    Statistics,
    GCG_OPERATION_TYPE_REDRAW,
    this->controller_id_,
    0,
    (std::vector<unsigned int> *)(v1 + 368));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 368));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 432));
  result = 0;
  if ( v65 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 000000000E10C548-000000000E10C670
ForeachPolicy __cdecl GCGActionRedraw::exec(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGActionRedraw::exec::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  std::set<unsigned int> *exclude_id_set; // rbx
  std::vector<unsigned int> *include_vec; // rbx
  std::vector<unsigned int> *exclude_vec; // rbx
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-24h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self v7; // [rsp+20h] [rbp-20h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __y._M_node = std::set<unsigned int>::end(__closure->__exclude_id_set)._M_node;
  exclude_id_set = __closure->__exclude_id_set;
  __x = GCGCard::getId(card);
  v7._M_node = std::set<unsigned int>::find(exclude_id_set, &__x)._M_node;
  if ( std::operator==(&v7, &__y) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__include_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__include_vec);
    include_vec = __closure->__include_vec;
    __x = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(include_vec, &__x);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__exclude_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__exclude_vec);
    exclude_vec = __closure->__exclude_vec;
    __x = GCGCard::getGuid(card);
    std::vector<unsigned int>::push_back(exclude_vec, &__x);
  }
  return 0;
};

// Line 346: range 000000000E10D8F4-000000000E10D9EB
int32_t __cdecl GCGActionReroll::exec(GCGActionReroll *const this)
{
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  GCGDiceZone *DiceZone; // rbx
  std::set<unsigned int> p_index_set; // [rsp+10h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  Field = GCGDuel::getField(Duel, this->controller_id_);
  DiceZone = GCGField::getDiceZone(Field);
  std::set<unsigned int>::set(&p_index_set, &this->selected_dice_set);
  LODWORD(DiceZone) = GCGDiceZone::reroll(DiceZone, &p_index_set);
  std::set<unsigned int>::~set(&p_index_set);
  return (int)DiceZone;
};

// Line 351: range 000000000E10D9EC-000000000E10E528
int32_t __cdecl GCGActionReboot::exec(GCGActionReboot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  GCGDuel *Duel; // rcx
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  uint32_t HandZone; // eax
  bool v8; // r14
  int32_t v9; // r14d
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  uint32_t v12; // eax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GCGCardZone *v15; // rax
  GCGCardZone *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(GCGCardZone *, std::vector<unsigned int> *, __int64); // r15
  std::_Rb_tree_const_iterator<unsigned int>::reference v19; // rax
  _DWORD *v20; // rdx
  GCGDiceSideType dice_side; // r14d
  std::map<unsigned int,proto::GCGDiceSideType>::mapped_type *v22; // rax
  GCGDiceSideType *v23; // rdx
  GCGDiceZone *DiceZone; // rax
  GCGStatistics *Statistics; // r14
  GCGCharacterZone *CharacterZone; // rax
  uint32_t v27; // ecx
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first; // [rsp+8h] [rbp-1E8h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last; // [rsp+10h] [rbp-1E0h]
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-1C5h] BYREF
  uint32_t card_guid; // [rsp+2Ch] [rbp-1C4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-1B8h] BYREF
  GCGField *field; // [rsp+40h] [rbp-1B0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-1A8h]
  std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-1A0h]
  std::set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-198h]
  std::vector<unsigned int> p_param_list; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v43; // [rsp+80h] [rbp-170h] BYREF
  common::milog::MiLogStream v44; // [rsp+A0h] [rbp-150h] BYREF
  char v45[304]; // [rsp+C0h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 card_guid:368 64 4 14 dice_index:382 80 16 12 card_ptr:370 112 24 15 card_id_vec:367 1"
                        "76 48 12 dice_map:381";
  *(_QWORD *)(v1 + 16) = GCGActionReboot::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = -218959360;
  v3[536862725] = 62194;
  v3[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  __for_range = &this->cost_card_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->cost_card_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->cost_card_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    card_guid = *v6;
    HandZone = (unsigned int)GCGField::getHandZone(field);
    GCGCardZone::findCard((GCGCardZone *const)(v1 + 80), HandZone);
    v8 = std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 80), 0LL);
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 80));
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        358);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v44, (const char (*)[17])" find card fail.");
      common::milog::MiLogStream::~MiLogStream(&v44);
      v9 = -1;
      goto LABEL_45;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dice_side);
  }
  if ( this->dice_side )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 112));
    __for_range_0 = &this->cost_card_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->cost_card_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v1 + 48) = *v11;
      v12 = (unsigned int)GCGField::getHandZone(field);
      GCGCardZone::popCard((GCGCardZone *const)(v1 + 80), v12, *(GCGReason *)(v1 + 48), 5);
      if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v1 + 80)) )
      {
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        *(_DWORD *)(v1 + 64) = GCGCard::getId(v13);
        std::vector<unsigned int>::emplace_back<unsigned int>(
          (std::vector<unsigned int> *const)(v1 + 112),
          (unsigned int *)(v1 + 64),
          (unsigned int *)(v1 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          377);
        v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v44, (const char (*)[26])off_1BC72300);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 80));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    v15 = GCGField::getHandZone(field);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15);
    v17 = (unsigned __int64)(v16->_vptr_GCGCardZone + 4);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v16->_vptr_GCGCardZone + 4);
    v18 = *(void (__fastcall **)(GCGCardZone *, std::vector<unsigned int> *, __int64))v17;
    __first = std::set<unsigned int>::begin(&this->cost_card_set)._M_node;
    __last = std::set<unsigned int>::end(&this->cost_card_set)._M_node;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      &p_param_list,
      (std::_Rb_tree_const_iterator<unsigned int>)__first,
      (std::_Rb_tree_const_iterator<unsigned int>)__last,
      &__a);
    v18(v16, &p_param_list, 5LL);
    std::vector<unsigned int>::~vector(&p_param_list);
    std::allocator<unsigned int>::~allocator(&__a);
    std::map<unsigned int,proto::GCGDiceSideType>::map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v1 + 176));
    __for_range_1 = &this->select_dice_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->select_dice_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      *(_DWORD *)(v1 + 64) = *v20;
      if ( *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->dice_side >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->dice_side);
      }
      dice_side = this->dice_side;
      v22 = std::map<unsigned int,proto::GCGDiceSideType>::operator[](
              (std::map<unsigned int,proto::GCGDiceSideType> *const)(v1 + 176),
              (const std::map<unsigned int,proto::GCGDiceSideType>::key_type *)(v1 + 64));
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v22);
      }
      *v23 = dice_side;
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::setDice(DiceZone, (const std::map<unsigned int,proto::GCGDiceSideType> *)(v1 + 176), GCG_REASON_REBOOT);
    GCGField::recordRebootTimes(field);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Statistics = GCGGameMode::getStatistics(this->game_mode_);
    std::vector<unsigned int>::vector(&p_param_list, (const std::vector<unsigned int> *)(v1 + 112));
    CharacterZone = GCGField::getCharacterZone(field);
    v27 = GCGCharacterZone::getOnStageCardId(CharacterZone);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    GCGStatistics::reportStatisticOperationData(
      Statistics,
      GCG_OPERATION_TYPE_REBOOT,
      this->controller_id_,
      v27,
      &p_param_list);
    std::vector<unsigned int>::~vector(&p_param_list);
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      391);
    v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v43, (const char (*)[8])"reboot:");
    GCGActionBase::getDesc[abi:cxx11]((std::string *)&v44, this);
    v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, (const std::string *)&v44);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v29, (const char (*)[16])", reboot times:");
    *(_DWORD *)(v1 + 64) = GCGField::getRoundRobootTimes(field);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v1 + 64));
    std::string::~string(&v44);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v9 = 0;
    std::map<unsigned int,proto::GCGDiceSideType>::~map((std::map<unsigned int,proto::GCGDiceSideType> *const)(v1 + 176));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      364);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v44, (const char (*)[18])"dice side invalid");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v9 = -1;
  }
LABEL_45:
  result = v9;
  if ( v45 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 396: range 000000000E10E52A-000000000E10E5D1
int32_t __cdecl GCGActionRoll::exec(GCGActionRoll *const this)
{
  GCGDuel *Duel; // rcx
  GCGField *Field; // rax
  GCGDiceZone *DiceZone; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  Field = GCGDuel::getField(Duel, this->controller_id_);
  DiceZone = GCGField::getDiceZone(Field);
  GCGDiceZone::roll(DiceZone);
  return 0;
};

// Line 402: range 000000000E10E676-000000000E10EBCD
int32_t __cdecl GCGActionSelectOnStage::exec(GCGActionSelectOnStage *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  GCGDuel *Duel; // rcx
  GCGDiceZone *DiceZone; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  GCGCharacterZone *CharacterZone; // r14
  GCGCharacterZone *v10; // rax
  GCGCharacterZone *v11; // rax
  uint32_t v12; // eax
  GCGStatistics *Statistics; // r14
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Id; // ecx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-DCh]
  GCGField *field; // [rsp+18h] [rbp-D8h]
  std::vector<unsigned int> p_param_list; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 guid:413 64 16 12 card_ptr:435";
  *(_QWORD *)(v1 + 16) = GCGActionSelectOnStage::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  field = GCGDuel::getField(Duel, this->controller_id_);
  if ( !std::set<unsigned int>::empty(&this->select_dice_set) )
  {
    DiceZone = GCGField::getDiceZone(field);
    GCGDiceZone::costDice(DiceZone, &this->select_dice_set, GCG_REASON_COST);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      410);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v20,
           (const char (*)[51])"GCGActionSelectOnStage by no cost, controller_id_:");
    v7 = common::milog::MiLogStream::operator<<<proto::GCGControllerValue,(proto::GCGControllerValue*)0>(
           v6,
           &this->controller_id_);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" card_guid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->card_guid);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->card_guid);
  }
  *(_DWORD *)(v1 + 48) = this->card_guid;
  if ( !*(_DWORD *)(v1 + 48) )
  {
    CharacterZone = GCGField::getCharacterZone(field);
    std::function<ForeachPolicy ()(GCGCard &)>::function<GCGActionSelectOnStage::exec(void)::{lambda(GCGCard &)#1},void,void>(
      (std::function<ForeachPolicy(GCGCard&)> *const)&v20,
      (GCGActionSelectOnStage::exec::<lambda(GCGCard&)>)(v1 + 48));
    GCGCharacterZone::foreachCharacter(CharacterZone, (std::function<ForeachPolicy(GCGCard&)> *)&v20);
    std::function<ForeachPolicy ()(GCGCard &)>::~function((std::function<ForeachPolicy(GCGCard&)> *const)&v20);
  }
  if ( *(char *)(((unsigned __int64)&this->is_quickly >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_quickly);
  if ( this->is_quickly )
  {
    v10 = GCGField::getCharacterZone(field);
    ret = GCGCharacterZone::setOnStage(v10, *(_DWORD *)(v1 + 48), GCG_REASON_QUICKLY_ONSTAGE, 1);
  }
  else
  {
    v11 = GCGField::getCharacterZone(field);
    ret = GCGCharacterZone::setOnStage(v11, *(_DWORD *)(v1 + 48), GCG_REASON_DEFAULT, 1);
  }
  v12 = (unsigned int)GCGField::getCharacterZone(field);
  GCGCardZone::findCard((GCGCardZone *const)(v1 + 64), v12);
  if ( std::operator!=<GCGCard>(0LL, (const std::shared_ptr<GCGCard> *)(v1 + 64)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    Statistics = GCGGameMode::getStatistics(this->game_mode_);
    memset(&p_param_list, 0, sizeof(p_param_list));
    std::vector<unsigned int>::vector(&p_param_list);
    v14 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Id = GCGCard::getId(v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->controller_id_);
    }
    GCGStatistics::reportStatisticOperationData(
      Statistics,
      GCG_OPERATION_TYPE_SELECT_ON_STAGE,
      this->controller_id_,
      Id,
      &p_param_list);
    std::vector<unsigned int>::~vector(&p_param_list);
  }
  std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 64));
  result = ret;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 416: range 000000000E10E5D2-000000000E10E674
ForeachPolicy __cdecl GCGActionSelectOnStage::exec(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGActionSelectOnStage::exec::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  uint32_t *guid; // rbx
  uint32_t v3; // ecx

  if ( !GCGCard::isAlive(card) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  guid = __closure->__guid;
  v3 = GCGCard::getGuid(card);
  if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(guid);
  }
  *guid = v3;
  return 1;
};

// Line 445: range 000000000E10EBCE-000000000E10EFB6
int32_t __cdecl GCGActionPhaseExit::exec(GCGActionPhaseExit *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  GCGPhaseBase *v11; // rax
  int32_t result; // eax
  unsigned int v13; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  proto::GCGPhaseType real_phase_type; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 cur_phase_ptr:446";
  *(_QWORD *)(v1 + 16) = GCGActionPhaseExit::exec;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      449);
    v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v16, (const char (*)[37])off_1BC724C0);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_phase_type);
    }
    val = this->cur_phase_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_GCGPhaseBase + 3);
    real_phase_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_phase_type);
    }
    if ( real_phase_type == this->cur_phase_type )
    {
      v11 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      GCGPhaseBase::phaseExit(v11);
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        455);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v16,
             (const char (*)[30])"phase not match. real phase: ");
      v13 = real_phase_type;
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v13);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" expect phase: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_phase_type);
      }
      val = this->cur_phase_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v5 = -1;
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  result = v5;
  if ( v17 == (char *)v1 )
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

// Line 463: range 000000000E10EFB8-000000000E10F478
int32_t __cdecl GCGActionNextPhase::exec(GCGActionNextPhase *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  GCGPhaseBase *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::map<proto::GCGControllerValue,unsigned int> *AllowControllerMap; // rax
  GCGPhaseMgr *PhaseMgr; // rax
  int32_t result; // eax
  unsigned int v17; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  proto::GCGPhaseType real_phase_type; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-90h] BYREF
  char v21[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 cur_phase_ptr:464";
  *(_QWORD *)(v1 + 16) = GCGActionNextPhase::exec;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      467);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v20,
           (const char (*)[41])"cur_phase_ptr is nullptr. expect phase: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_phase_type);
    }
    val = this->cur_phase_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6);
    v7 = (unsigned __int64)(v6->_vptr_GCGPhaseBase + 3);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v6->_vptr_GCGPhaseBase + 3);
    real_phase_type = (*(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v7)(v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_phase_type);
    }
    if ( real_phase_type == this->cur_phase_type )
    {
      v11 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( !GCGPhaseBase::isAllowControllerAllDone(v11) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          478);
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v20, (const char (*)[31])off_1BC72620);
        v13 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        AllowControllerMap = GCGPhaseBase::getAllowControllerMap(v13);
        common::milog::MiLogStream::operator<<<proto::GCGControllerValue,unsigned int>(v12, AllowControllerMap);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
      GCGPhaseMgr::enterNext(PhaseMgr);
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        473);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v20,
             (const char (*)[30])"phase not match. real phase: ");
      v17 = real_phase_type;
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v17);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" expect phase: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_phase_type);
      }
      val = this->cur_phase_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = -1;
    }
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  result = v5;
  if ( v21 == (char *)v1 )
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

// Line 486: range 000000000E10F47A-000000000E10F6CE
int32_t __cdecl GCGActionSpecialPhase::exec(GCGActionSpecialPhase *const this)
{
  GCGPhaseMgr *PhaseMgr; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  GCGPhaseMgr *v6; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  unsigned int cur_phase_type; // [rsp+18h] [rbp-48h] BYREF
  proto::GCGPhaseType real_phase_type; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<GCGPhaseParam> p_phase_param_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  PhaseMgr = GCGGameMode::getPhaseMgr(this->game_mode_);
  real_phase_type = GCGPhaseMgr::getCurPhaseType(PhaseMgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_phase_type);
  }
  if ( real_phase_type == this->cur_phase_type )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    v6 = GCGGameMode::getPhaseMgr(this->game_mode_);
    std::shared_ptr<GCGPhaseParam>::shared_ptr(&p_phase_param_ptr, &this->phase_param_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_phase_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_phase_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_phase_type);
    }
    GCGPhaseMgr::enterSpecialPhase(v6, this->target_phase_type, &p_phase_param_ptr);
    std::shared_ptr<GCGPhaseParam>::~shared_ptr(&p_phase_param_ptr);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      490);
    v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v11,
           (const char (*)[30])"phase not match. real phase: ");
    val = real_phase_type;
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])" expect phase: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_phase_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_phase_type);
    }
    cur_phase_type = this->cur_phase_type;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &cur_phase_type);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
};

// Line 498: range 000000000E10F6D0-000000000E10FD07
int32_t __cdecl GCGActionTriggerSkill::exec(GCGActionTriggerSkill *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGSkill *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-370h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-350h] BYREF
  char v13[816]; // [rsp+50h] [rbp-330h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(768LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 13 skill_ptr:500 64 16 12 card_ptr:507 96 168 19 cur_skill_param:519 336 368 16 skill_result:518";
  *(_QWORD *)(v1 + 16) = GCGActionTriggerSkill::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862728] = -218959360;
  v3[536862729] = -218959118;
  v3[536862730] = 62194;
  v3[536862742] = -202116109;
  v3[536862743] = -202116109;
  std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v1 + 32));
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      504);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v12, (const char (*)[23])"skill already nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GCGSkill::getOwnerCard((const GCGSkill *const)(v1 + 64));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        510);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v12, (const char (*)[21])"card_ptr is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( !GCGCard::isActivated(v4) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          515);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v12,
          (const char (*)[26])"card already deactivated.");
        common::milog::MiLogStream::~MiLogStream(&v12);
      }
      else
      {
        GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v1 + 336));
        GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->trigger_type);
        }
        *(_DWORD *)(v1 + 112) = this->trigger_type;
        *(_DWORD *)(v1 + 212) = 0;
        v5 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        *(_DWORD *)(v1 + 208) = GCGCard::getControllerId(v5);
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v1 + 120),
          (const std::shared_ptr<GCGCard> *)(v1 + 64));
        std::shared_ptr<GCGSkill>::operator=(
          (std::shared_ptr<GCGSkill> *const)(v1 + 96),
          (const std::shared_ptr<GCGSkill> *)(v1 + 32));
        GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v1 + 96), &this->trigger_windows_param_ptr);
        v6 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( GCGSkill::checkSkillCondition(v6, (const GCGSkillUseParam *)(v1 + 96)) )
        {
          v7 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          GCGSkill::directUseSkill(v7, (const GCGSkillUseParam *)(v1 + 96), (GCGSkillResult *)(v1 + 336));
          common::milog::MiLogStream::create(
            &v11,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/card_game/action/gcg_action.cpp",
            "exec",
            534);
          v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                 &v11,
                 (const char (*)[20])"directUseSkill cur:");
          v9 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          GCGSkill::getName[abi:cxx11]((std::string *)&v12, v9);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)&v12);
          std::string::~string(&v12);
          common::milog::MiLogStream::~MiLogStream(&v11);
        }
        GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v1 + 96));
        GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v1 + 336));
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 64));
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v1 + 32));
  result = 0;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 539: range 000000000E10FD08-000000000E10FD9F
int32_t __cdecl GCGActionPreviewAfterAttack::exec(GCGActionPreviewAfterAttack *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/action/gcg_action.cpp",
    "exec",
    540);
  v1 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v3,
         (const char (*)[42])"GCGActionPreviewAfterAttack end skill_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->skill_id);
  common::milog::MiLogStream::~MiLogStream(&v3);
  return 0;
};

// Line 545: range 000000000E10FDA0-000000000E110566
int32_t __cdecl GCGActionPreviewAttack::exec(GCGActionPreviewAttack *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::map<data::GCGCostType,unsigned int>::mapped_type *v6; // rax
  int *v7; // rdx
  int v8; // eax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  const unsigned int *v10; // rax
  _DWORD *v11; // rdx
  GCGCard *v12; // rax
  std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  GCGSkill *v14; // rax
  GCGSkill *v15; // rax
  GCGCard *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  int32_t result; // eax
  std::map<data::GCGCostType,unsigned int>::key_type __x; // [rsp+14h] [rbp-3DCh] BYREF
  std::map<data::GCGCostType,unsigned int>::key_type __k; // [rsp+18h] [rbp-3D8h] BYREF
  uint32_t energy_recharge; // [rsp+1Ch] [rbp-3D4h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-3D0h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-3B0h] BYREF
  char v25[912]; // [rsp+60h] [rbp-390h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(864LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 15 cost_energy:564 48 16 13 skill_ptr:546 80 16 12 card_ptr:552 112 48 12 cost_map:563 19"
                        "2 168 19 cur_skill_param:575 432 368 16 skill_result:574";
  *(_QWORD *)(v1 + 16) = GCGActionPreviewAttack::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862731] = -218959360;
  v3[536862732] = -218959118;
  v3[536862733] = 62194;
  v3[536862745] = -202116109;
  v3[536862746] = -202116109;
  std::weak_ptr<GCGSkill>::lock((const std::weak_ptr<GCGSkill> *const)(v1 + 48));
  if ( std::operator==<GCGSkill>((const std::shared_ptr<GCGSkill> *)(v1 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      549);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v24, (const char (*)[23])"skill already nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    GCGSkill::getOwnerCard((const GCGSkill *const)(v1 + 80));
    if ( std::operator==<GCGCard>((const std::shared_ptr<GCGCard> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        555);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v24, (const char (*)[21])"card_ptr is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v4 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      if ( !GCGCard::isActivated(v4) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          560);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v24,
          (const char (*)[26])"card already deactivated.");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v5 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GCGSkill::getCost((std::map<data::GCGCostType,unsigned int> *)(v1 + 112), v5);
        __x = GCG_COST_ENERGY;
        if ( std::map<data::GCGCostType,unsigned int>::count(
               (const std::map<data::GCGCostType,unsigned int> *const)(v1 + 112),
               &__x) )
        {
          __k = GCG_COST_ENERGY;
          v6 = std::map<data::GCGCostType,unsigned int>::operator[](
                 (std::map<data::GCGCostType,unsigned int> *const)(v1 + 112),
                 &__k);
          v7 = (int *)v6;
          if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v6);
          }
          v8 = *v7;
        }
        else
        {
          v8 = 0;
        }
        *(_DWORD *)(v1 + 32) = v8;
        if ( *(_DWORD *)(v1 + 32) )
        {
          v9 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          __k = GCGCard::getToken(v9, GCG_TOKEN_ENERGY);
          v10 = std::min<unsigned int>((const unsigned int *)(v1 + 32), (const unsigned int *)&__k);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v1 + 32) = *v11;
          v12 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          GCGCard::subToken(v12, GCG_TOKEN_ENERGY, *(_DWORD *)(v1 + 32), GCG_REASON_COST);
        }
        GCGSkillResult::GCGSkillResult((GCGSkillResult *const)(v1 + 432));
        GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v1 + 192));
        GCGSkillUseParam::setEffectCategroyType((GCGSkillUseParam *const)(v1 + 192), ACTIVE_CATEGORY);
        v13 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        *(_DWORD *)(v1 + 304) = GCGCard::getControllerId(v13);
        std::shared_ptr<GCGCard>::operator=(
          (std::shared_ptr<GCGCard> *const)(v1 + 216),
          (const std::shared_ptr<GCGCard> *)(v1 + 80));
        std::shared_ptr<GCGSkill>::operator=(
          (std::shared_ptr<GCGSkill> *const)(v1 + 192),
          (const std::shared_ptr<GCGSkill> *)(v1 + 48));
        v14 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GCGSkill::directUseSkill(v14, (const GCGSkillUseParam *)(v1 + 192), (GCGSkillResult *)(v1 + 432));
        v15 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        energy_recharge = GCGSkill::getEnergyRecharge(v15);
        if ( energy_recharge )
        {
          v16 = std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGCard,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          GCGCard::addEnergy(v16, energy_recharge, GCG_REASON_ATTACK);
        }
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          587);
        v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v23,
                (const char (*)[28])"GCGActionPreviewAttack cur:");
        v18 = std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        GCGSkill::getName[abi:cxx11]((std::string *)&v24, v18);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v24);
        std::string::~string(&v24);
        common::milog::MiLogStream::~MiLogStream(&v23);
        GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v1 + 192));
        GCGSkillResult::~GCGSkillResult((GCGSkillResult *const)(v1 + 432));
        std::map<data::GCGCostType,unsigned int>::~map((std::map<data::GCGCostType,unsigned int> *const)(v1 + 112));
      }
    }
    std::shared_ptr<GCGCard>::~shared_ptr((std::shared_ptr<GCGCard> *const)(v1 + 80));
  }
  std::shared_ptr<GCGSkill>::~shared_ptr((std::shared_ptr<GCGSkill> *const)(v1 + 48));
  result = 0;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8064) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 592: range 000000000E110568-000000000E11074C
int32_t __cdecl GCGActionNotifyCost::exec(GCGActionNotifyCost *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 controller_ptr:602";
  *(_QWORD *)(v1 + 16) = GCGActionNotifyCost::exec;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v1 + 32), (GCGControllerValue)this->game_mode_);
  if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GCGPlayerController::notifyCostRevise(v4);
  }
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getController<GCGPlayerController>((GCGGameMode *const)(v1 + 32), (GCGControllerValue)this->game_mode_);
  if ( std::operator!=<GCGPlayerController>((const std::shared_ptr<GCGPlayerController> *)(v1 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPlayerController,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GCGPlayerController::notifyCostRevise(v5);
  }
  std::shared_ptr<GCGPlayerController>::~shared_ptr((std::shared_ptr<GCGPlayerController> *const)(v1 + 32));
  result = 0;
  if ( v7 == (char *)v1 )
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

// Line 613: range 000000000E11074E-000000000E11079D
int32_t __cdecl GCGActionNotifySkillPreview::exec(GCGActionNotifySkillPreview *const this)
{
  GCGSkillLogic *SkillLogic; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  GCGSkillLogic::doSkillPreview(SkillLogic);
  return 0;
};

// Line 621: range 000000000E11079E-000000000E110822
int32_t __cdecl GCGActionAfterOperation::exec(GCGActionAfterOperation *const this)
{
  GCGDuel *Duel; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::resetSkillTriggerVars(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  GCGDuel::resetOperationVars(Duel);
  return 0;
};

// Line 630: range 000000000E110824-000000000E1108D2
int32_t __cdecl GCGActionSendMessage::exec(GCGActionSendMessage *const this)
{
  GCGGameMode *game_mode; // rbx
  std::shared_ptr<GCGMessage> p_msg; // [rsp+10h] [rbp-20h] BYREF

  if ( std::operator!=<GCGMessage>(&this->msg_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    game_mode = this->game_mode_;
    std::shared_ptr<GCGMessage>::shared_ptr(&p_msg, &this->msg_ptr);
    GCGGameMode::sendMessage(game_mode, &p_msg);
    std::shared_ptr<GCGMessage>::~shared_ptr(&p_msg);
  }
  return 0;
};

// Line 639: range 000000000E1108D4-000000000E110A94
int32_t __cdecl GCGActionWaitingCharacter::exec(GCGActionWaitingCharacter *const this)
{
  GCGField *Field; // rax
  GCGField *v3; // rax
  GCGControllerValue second_controller_id; // [rsp+14h] [rbp-3Ch]
  GCGDuel *duel; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->first_controller_id);
  }
  if ( this->first_controller_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->game_mode_);
    duel = GCGGameMode::getDuel(this->game_mode_);
    if ( *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->first_controller_id);
    }
    second_controller_id = GCGDuel::getOtherControllerId(duel, this->first_controller_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->first_controller_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->first_controller_id);
    }
    Field = GCGDuel::getField(duel, this->first_controller_id);
    GCGField::processWaitingCharacter(Field, GCG_REASON_DEFAULT);
    v3 = GCGDuel::getField(duel, second_controller_id);
    GCGField::processWaitingCharacter(v3, GCG_REASON_DEFAULT);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      643);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"first_controller_id is NONE");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 654: range 000000000E110E5E-000000000E11193D
int32_t __cdecl GCGActionTrigger::exec(GCGActionTrigger *const this)
{
  int32_t v1; // r15d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGDuel *Duel; // rcx
  GCGSkillLogic *SkillLogic; // r14
  GCGSkillLogic *v7; // r14
  signed int ActionMgr; // eax
  int v9; // r14d
  std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  GCGTriggerType trigger_type; // r14d
  std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  int32_t result; // eax
  void (__fastcall *v18)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *); // [rsp+10h] [rbp-2C0h]
  GCGControllerValue opponent_controller_id; // [rsp+2Ch] [rbp-2A4h]
  std::vector<std::weak_ptr<GCGSkill>>::iterator __for_begin; // [rsp+30h] [rbp-2A0h] BYREF
  std::vector<std::weak_ptr<GCGSkill>>::iterator __for_end; // [rsp+38h] [rbp-298h] BYREF
  std::vector<std::weak_ptr<GCGSkill>> *__for_range; // [rsp+40h] [rbp-290h]
  std::weak_ptr<GCGSkill> *skill_wtr; // [rsp+48h] [rbp-288h]
  std::shared_ptr<GCGActionBase> v24; // [rsp+50h] [rbp-280h] BYREF
  std::function<void(GCGCard&)> p_func; // [rsp+60h] [rbp-270h] BYREF
  std::function<bool(GCGCardZone&)> p_zone_filter_func; // [rsp+80h] [rbp-250h] BYREF
  char v27[560]; // [rsp+A0h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 20 zone_filter_func:691 48 16 6 ss:666 80 16 17 cur_phase_ptr:707 112 16 14 action_ptr:71"
                        "5 144 24 13 skill_vec:656 208 24 16 search_skill:669 272 168 9 param:657";
  *(_QWORD *)(v2 + 16) = GCGActionTrigger::exec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  Duel = GCGGameMode::getDuel(this->game_mode_);
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  opponent_controller_id = GCGDuel::getOtherControllerId(Duel, this->controller_id_);
  std::vector<std::weak_ptr<GCGSkill>>::vector((std::vector<std::weak_ptr<GCGSkill>> *const)(v2 + 144));
  GCGSkillUseParam::GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 272));
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->trigger_type);
  }
  *(_DWORD *)(v2 + 288) = this->trigger_type;
  *(_DWORD *)(v2 + 388) = 0;
  *(_DWORD *)(v2 + 384) = 0;
  if ( std::operator!=<GCGSkillUseParam>(&this->trigger_windows_param_ptr, 0LL) )
    GCGSkillUseParam::setTriggerWindowParam((GCGSkillUseParam *const)(v2 + 272), &this->trigger_windows_param_ptr);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48),
    "trigger skill:[");
  *(_QWORD *)(v2 + 208) = v2 + 272;
  *(_QWORD *)(v2 + 216) = v2 + 48;
  *(_QWORD *)(v2 + 224) = v2 + 144;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 388);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  SkillLogic = GCGGameMode::getSkillLogic(this->game_mode_);
  std::function<bool ()(GCGCardZone &)>::function<GCGActionTrigger::exec(void)::{lambda(GCGCardZone &)#2},void,void>(
    &p_zone_filter_func,
    *(GCGActionTrigger::exec::<lambda(GCGCardZone&)> *)(v2 + 32));
  std::function<void ()(GCGCard &)>::function<GCGActionTrigger::exec(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    *(GCGActionTrigger::exec::<lambda(GCGCard&)> *)(v2 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->controller_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->controller_id_);
  }
  GCGSkillLogic::foreachCardOnControllerId(SkillLogic, this->controller_id_, &p_func, &p_zone_filter_func);
  std::function<void ()(GCGCard &)>::~function(&p_func);
  std::function<bool ()(GCGCardZone &)>::~function(&p_zone_filter_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  v7 = GCGGameMode::getSkillLogic(this->game_mode_);
  std::function<bool ()(GCGCardZone &)>::function<GCGActionTrigger::exec(void)::{lambda(GCGCardZone &)#2},void,void>(
    &p_zone_filter_func,
    *(GCGActionTrigger::exec::<lambda(GCGCardZone&)> *)(v2 + 32));
  std::function<void ()(GCGCard &)>::function<GCGActionTrigger::exec(void)::{lambda(GCGCard &)#1},void,void>(
    &p_func,
    *(GCGActionTrigger::exec::<lambda(GCGCard&)> *)(v2 + 208));
  GCGSkillLogic::foreachCardOnControllerId(v7, opponent_controller_id, &p_func, &p_zone_filter_func);
  std::function<void ()(GCGCard &)>::~function(&p_func);
  std::function<bool ()(GCGCardZone &)>::~function(&p_zone_filter_func);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48),
    "]");
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&p_func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/card_game/action/gcg_action.cpp",
    "exec",
    704);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    (std::string *)&p_zone_filter_func,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
    (common::milog::MiLogStream *const)&p_func,
    (const std::string *)&p_zone_filter_func);
  std::string::~string(&p_zone_filter_func);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v2 + 80));
  if ( std::operator==<GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v2 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_zone_filter_func,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      710);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&p_zone_filter_func,
      (const char (*)[26])"cur_phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_zone_filter_func);
    v1 = -1;
  }
  else
  {
    __for_range = (std::vector<std::weak_ptr<GCGSkill>> *)(v2 + 144);
    __for_begin._M_current = std::vector<std::weak_ptr<GCGSkill>>::begin((std::vector<std::weak_ptr<GCGSkill>> *const)(v2 + 144))._M_current;
    __for_end._M_current = std::vector<std::weak_ptr<GCGSkill>>::end((std::vector<std::weak_ptr<GCGSkill>> *const)(v2 + 144))._M_current;
    while ( __gnu_cxx::operator!=<std::weak_ptr<GCGSkill> *,std::vector<std::weak_ptr<GCGSkill>>>(
              &__for_begin,
              &__for_end) )
    {
      skill_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<GCGSkill> *,std::vector<std::weak_ptr<GCGSkill>>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->game_mode_);
      ActionMgr = (unsigned int)GCGGameMode::getActionMgr(this->game_mode_);
      GCGActionMgr::createAction<GCGActionTriggerSkill>((GCGActionMgr *const)(v2 + 112), (GCGControllerValue)ActionMgr);
      if ( std::operator==<GCGActionTriggerSkill>((const std::shared_ptr<GCGActionTriggerSkill> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_zone_filter_func,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/card_game/action/gcg_action.cpp",
          "exec",
          718);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)&p_zone_filter_func,
          (const char (*)[19])"createAction fail.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_zone_filter_func);
        v1 = -1;
        v9 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        std::weak_ptr<GCGSkill>::operator=(&v10->skill_wtr, skill_wtr);
        if ( *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->trigger_type);
        }
        trigger_type = this->trigger_type;
        v12 = std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v12->trigger_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->trigger_type >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->trigger_type);
        }
        v12->trigger_type = trigger_type;
        v13 = std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGActionTriggerSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        std::shared_ptr<GCGSkillUseParam>::operator=(&v13->trigger_windows_param_ptr, &this->trigger_windows_param_ptr);
        v14 = std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v14);
        v16 = (unsigned __int64)(v15->_vptr_GCGPhaseBase + 5);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_GCGPhaseBase + 5);
        v18 = *(void (__fastcall **)(std::__shared_ptr_access<GCGPhaseBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<GCGActionBase> *))v16;
        std::shared_ptr<GCGActionBase>::shared_ptr<GCGActionTriggerSkill,void>(
          &v24,
          (const std::shared_ptr<GCGActionTriggerSkill> *)(v2 + 112));
        v18(v15, &v24);
        std::shared_ptr<GCGActionBase>::~shared_ptr(&v24);
        v9 = 1;
      }
      std::shared_ptr<GCGActionTriggerSkill>::~shared_ptr((std::shared_ptr<GCGActionTriggerSkill> *const)(v2 + 112));
      if ( v9 != 1 )
        goto LABEL_40;
      __gnu_cxx::__normal_iterator<std::weak_ptr<GCGSkill> *,std::vector<std::weak_ptr<GCGSkill>>>::operator++(&__for_begin);
    }
    v1 = 0;
  }
LABEL_40:
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v2 + 80));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 48));
  GCGSkillUseParam::~GCGSkillUseParam((GCGSkillUseParam *const)(v2 + 272));
  std::vector<std::weak_ptr<GCGSkill>>::~vector((std::vector<std::weak_ptr<GCGSkill>> *const)(v2 + 144));
  result = v1;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 669: range 000000000E110BFE-000000000E110DEC
ForeachPolicy __cdecl GCGActionTrigger::exec(void)::{lambda(GCGCard &)#1}::operator()(
        const GCGActionTrigger::exec::<lambda(GCGCard&)> *const __closure,
        GCGCard *card)
{
  GCGSkillUseParam *param; // rdx
  char v3; // cl
  GCGSkillUseParam *v5; // rbx
  GCGControllerValue ControllerId; // edx
  GCGActionTrigger::exec::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> v7; // [rsp-20h] [rbp-80h]
  __int128 __f; // [rsp+10h] [rbp-50h]
  std::function<ForeachPolicy(GCGSkill&)> p_func; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  param = __closure->__param;
  v3 = *(_BYTE *)(((unsigned __int64)&__closure->__param->effect_category_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && (char)(((LOBYTE(__closure->__param) + 116) & 7) + 3) >= v3 )
    __asan_report_load4(&__closure->__param->effect_category_type);
  if ( !GCGCard::isHasEffect(card, param->effect_category_type) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v5 = __closure->__param;
  ControllerId = GCGCard::getControllerId(card);
  if ( *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->controller_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&v5->controller_id);
  }
  v5->controller_id = ControllerId;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  *(_QWORD *)&__f = __closure->__param;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__ss >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__ss);
  *((_QWORD *)&__f + 1) = __closure->__ss;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_vec >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__skill_vec);
  v7.__skill_vec = __closure->__skill_vec;
  *(_OWORD *)&v7.__param = __f;
  std::function<ForeachPolicy ()(GCGSkill &)>::function<GCGActionTrigger::exec(void)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGSkill &)#1},void,void>(
    &p_func,
    v7);
  GCGCard::foreachSkill(card, &p_func);
  std::function<ForeachPolicy ()(GCGSkill &)>::~function(&p_func);
  return 0;
};

// Line 678: range 000000000E110A96-000000000E110BFD
ForeachPolicy __cdecl GCGActionTrigger::exec(void)::{lambda(GCGCard &)#1}::operator() const(GCGCard &)::{lambda(GCGSkill &)#1}::operator()(
        const GCGActionTrigger::exec::<lambda(GCGCard&)>::operator()::<lambda(GCGSkill&)> *const __closure,
        GCGSkill *skill)
{
  GCGSkillUseParam *param; // rsi
  GCGSkillUseParam *v3; // rax
  char v4; // dl
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rbx
  unsigned int SkillId; // eax
  std::vector<std::weak_ptr<GCGSkill>> *skill_vec; // rbx
  std::enable_shared_from_this<GCGSkill> v10; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  param = __closure->__param;
  v3 = __closure->__param;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__param->trigger_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    v3 = (GCGSkillUseParam *)__asan_report_load4(&__closure->__param->trigger_type);
  if ( GCGSkill::isPreCanTriggerSkill(skill, v3->trigger_type, param) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__ss >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__ss);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(__closure->__ss, "|");
    SkillId = GCGSkill::getSkillId(skill);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, SkillId);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__skill_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__skill_vec);
    skill_vec = __closure->__skill_vec;
    std::enable_shared_from_this<GCGSkill>::weak_from_this(&v10);
    std::vector<std::weak_ptr<GCGSkill>>::push_back(skill_vec, &v10._M_weak_this);
    std::weak_ptr<GCGSkill>::~weak_ptr(&v10._M_weak_this);
  }
  return 0;
};

// Line 691: range 000000000E110DEE-000000000E110E5D
bool __cdecl GCGActionTrigger::exec(void)::{lambda(GCGCardZone &)#2}::operator()(
        const GCGActionTrigger::exec::<lambda(GCGCardZone&)> *const __closure,
        GCGCardZone *zone)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return GCGCardZone::isHasEffect(zone, __closure->__category_type);
};

// Line 731: range 000000000E11193E-000000000E111BFB
int32_t __cdecl ActionBeforeNextOperation::exec(ActionBeforeNextOperation *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 17 cur_phase_ptr:732 64 16 22 cur_main_phase_ptr:738";
  *(_QWORD *)(v1 + 16) = ActionBeforeNextOperation::exec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_mode_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->game_mode_);
  GCGGameMode::getPhaseMgr(this->game_mode_);
  GCGPhaseMgr::getCurPhase((GCGPhaseMgr *const)(v1 + 32));
  if ( std::operator==<GCGPhaseBase>(0LL, (const std::shared_ptr<GCGPhaseBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/card_game/action/gcg_action.cpp",
      "exec",
      735);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v7,
      (const char (*)[26])"cur_phase_ptr is nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v4 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<GCGPhaseMain,GCGPhaseBase>((const std::shared_ptr<GCGPhaseBase> *)(v1 + 64));
    if ( std::operator==<GCGPhaseMain>(0LL, (const std::shared_ptr<GCGPhaseMain> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_game/action/gcg_action.cpp",
        "exec",
        741);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v7,
        (const char (*)[25])"cur_phase_ptr cast fail.");
      common::milog::MiLogStream::~MiLogStream(&v7);
      v4 = -1;
    }
    else
    {
      v5 = std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGPhaseMain,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      GCGPhaseMain::onBeforeOperation(v5);
      v4 = 0;
    }
    std::shared_ptr<GCGPhaseMain>::~shared_ptr((std::shared_ptr<GCGPhaseMain> *const)(v1 + 64));
  }
  std::shared_ptr<GCGPhaseBase>::~shared_ptr((std::shared_ptr<GCGPhaseBase> *const)(v1 + 32));
  result = v4;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

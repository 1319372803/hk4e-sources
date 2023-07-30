// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_action_impl.cpp

// Line 23: range 00000000130D4F18-00000000130D5075
void __cdecl AvatarSkillStartImpl::doAction(AvatarSkillStartImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      26);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::avatarSkillStartHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      30);
    v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v6,
           (const char (*)[37])"[ACTION] AvatarSkillStart, skill_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->skill_id);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 34: range 00000000130D5076-00000000130D51BB
void __cdecl DebugLogImpl::doAction(DebugLogImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      37);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::debugLogHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      41);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"[ACTION] DebugLog");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 45: range 00000000130D51BC-00000000130D5301
void __cdecl HealHPImpl::doAction(HealHPImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      48);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::healHPHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      52);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"[ACTION] HealHP");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 56: range 00000000130D5302-00000000130D5505
void __cdecl ReviveAvatarImpl::doAction(ReviveAvatarImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      59);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"source_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        64);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"target_ptr is null");
    }
    else
    {
      v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
      AbilityComp = Creature::getAbilityComp(v2);
      AbilityComp::reviveAvatarHandler(AbilityComp, this, param);
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        68);
      v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v9,
             (const char (*)[29])"[ACTION] ReviveAvatar, from:");
      v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
      v6 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v4, v5);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])", to:");
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v7, v8);
    }
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};

// Line 72: range 00000000130D5506-00000000130D564B
void __cdecl ReviveDeadAvatarImpl::doAction(ReviveDeadAvatarImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      75);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::reviveDeadAvatarHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      79);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v5,
           (const char (*)[27])"[ACTION] ReviveDeadAvatar:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 83: range 00000000130D564C-00000000130D5791
void __cdecl CreateGadgetImpl::doAction(CreateGadgetImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      86);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::createGadgetHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      90);
    v4 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v5,
           (const char (*)[22])"[ACTION] CreateGadget");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 94: range 00000000130D5792-00000000130D58D7
void __cdecl CreateMovingPlatformImpl::doAction(CreateMovingPlatformImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      97);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::createMovingPlatformHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      101);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v5,
           (const char (*)[30])"[ACTION] createMovingPlatform");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 105: range 00000000130D58D8-00000000130D5A1D
void __cdecl KillSelfImpl::doAction(KillSelfImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      108);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::killSelfHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      112);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"[ACTION] KillSelf");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 116: range 00000000130D5A1E-00000000130D5B63
void __cdecl TriggerDropEquipPartsImpl::doAction(TriggerDropEquipPartsImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      119);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::triggerDropEquipPartsHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      123);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v5,
           (const char (*)[31])"[ACTION] TriggerDropEquipParts");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 127: range 00000000130D5B64-00000000130D5CA9
void __cdecl TriggerThrowEquipPartImpl::doAction(TriggerThrowEquipPartImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      130);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::triggerThrowEquipPartHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      134);
    v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v5,
           (const char (*)[31])"[ACTION] TriggerThrowEquipPart");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 138: range 00000000130D5CAA-00000000130D5DEF
void __cdecl TriggerCreateGadgetToEquipPartImpl::doAction(
        TriggerCreateGadgetToEquipPartImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      141);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::triggerCreateGadgetToEquipPartHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      145);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v5,
           (const char (*)[40])"[ACTION] TriggerCreateGadgetToEquipPart");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 149: range 00000000130D5DF0-00000000130D5F35
void __cdecl SummonImpl::doAction(SummonImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      152);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::summonHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      156);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"[ACTION] Summon");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 160: range 00000000130D5F36-00000000130D607B
void __cdecl AddServerBuffImpl::doAction(AddServerBuffImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      163);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::addServerBuffHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      167);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v5,
           (const char (*)[23])"[ACTION] AddServerBuff");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 171: range 00000000130D607C-00000000130D61C1
void __cdecl RemoveServerBuffImpl::doAction(RemoveServerBuffImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      174);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::removeServerBuffHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      178);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"[ACTION] RemoveServerBuff");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 182: range 00000000130D61C2-00000000130D6307
void __cdecl ModifyAvatarSkillCDImpl::doAction(ModifyAvatarSkillCDImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      185);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::modifyAvatarSkillCDHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      189);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v5,
           (const char (*)[29])"[ACTION] ModifyAvatarSkillCD");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 193: range 00000000130D6308-00000000130D649B
void __cdecl UseItemImpl::doAction(UseItemImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      196);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::useItemHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      200);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])"[ACTION] UseItem");
    v5 = operator<<(v4, param);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])", item_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->item_id);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])", item_num");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->item_num);
  }
  common::milog::MiLogStream::~MiLogStream(&v9);
};

// Line 204: range 00000000130D649C-00000000130D65E1
void __cdecl LoseHPImpl::doAction(LoseHPImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      207);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::loseHPHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      211);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"[ACTION] LoseHP");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 215: range 00000000130D65E2-00000000130D6727
void __cdecl GenerateElemBallImpl::doAction(GenerateElemBallImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      218);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::generateElemBallHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      222);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"[ACTION] generateElemBall");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 226: range 00000000130D6728-00000000130D6E2C
void __cdecl AttachAbilityStateResistanceImpl::doAction(
        AttachAbilityStateResistanceImpl *const this,
        ActionParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> >::reference v8; // rax
  std::vector<data::AbilityState> *v9; // r14
  std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  float *p_duration_ratio; // rax
  BaseActorActionContext *v14; // r14
  Creature *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  float duration_ratio; // [rsp+Ch] [rbp-154h]
  std::vector<data::AbilityState>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<data::AbilityState>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const data::AbilityStateResistanceByIDExcelConfig *ability_state_resistance_by_id_excel_config_ptr; // [rsp+30h] [rbp-130h]
  const std::vector<data::AbilityState> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<data::ConfigBuffDebuffResistance> v22; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-110h] BYREF
  char v24[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 17 ability_state:247 64 16 15 context_ptr:232 96 16 18 resistance_ptr:255 128 24 21 abili"
                        "ty_state_vec:242";
  *(_QWORD *)(v2 + 16) = AttachAbilityStateResistanceImpl::doAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      229);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])"target_ptr is null");
    operator<<(v5, param);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    std::shared_ptr<BaseActorActionContext>::shared_ptr<ActorModifier,void>(
      (std::shared_ptr<BaseActorActionContext> *const)(v2 + 64),
      &param->modifier_ptr);
    if ( std::operator==<BaseActorActionContext>((const std::shared_ptr<BaseActorActionContext> *)(v2 + 64), 0LL) )
      std::shared_ptr<BaseActorActionContext>::operator=<ActorAbility>(
        (std::shared_ptr<BaseActorActionContext> *const)(v2 + 64),
        &param->ability_ptr);
    if ( std::operator==<BaseActorActionContext>((const std::shared_ptr<BaseActorActionContext> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        239);
      v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v23,
             (const char (*)[20])"context_ptr is null");
      operator<<(v6, param);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      std::vector<data::AbilityState>::vector(
        (std::vector<data::AbilityState> *const)(v2 + 128),
        &this->resistance_buff_debuffs);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.avatar_skill_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->resistance_list_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->resistance_list_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->resistance_list_id);
      }
      ability_state_resistance_by_id_excel_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAbilityStateResistanceByIDExcelConfig(
                                                          p_avatar_skill_config_mgr,
                                                          this->resistance_list_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
      if ( ability_state_resistance_by_id_excel_config_ptr )
      {
        __for_range = &ability_state_resistance_by_id_excel_config_ptr->ability_states;
        __for_begin._M_current = std::vector<data::AbilityState>::begin(&ability_state_resistance_by_id_excel_config_ptr->ability_states)._M_current;
        __for_end._M_current = std::vector<data::AbilityState>::end(&ability_state_resistance_by_id_excel_config_ptr->ability_states)._M_current;
        while ( __gnu_cxx::operator!=<data::AbilityState const*,std::vector<data::AbilityState>>(
                  &__for_begin,
                  &__for_end) )
        {
          v8 = __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            v8 = (__gnu_cxx::__normal_iterator<const data::AbilityState*,std::vector<data::AbilityState> >::reference)__asan_report_load8(v8);
          *(data::AbilityState *)(v2 + 32) = *v8;
          if ( !common::tools::MiscUtils::isContains<data::AbilityState>(
                  (std::vector<data::AbilityState> *)(v2 + 128),
                  (const data::AbilityState *)(v2 + 32)) )
            std::vector<data::AbilityState>::push_back(
              (std::vector<data::AbilityState> *const)(v2 + 128),
              (const std::vector<data::AbilityState>::value_type *)(v2 + 32));
          __gnu_cxx::__normal_iterator<data::AbilityState const*,std::vector<data::AbilityState>>::operator++(&__for_begin);
        }
      }
      common::tools::perf::make_shared<data::ConfigBuffDebuffResistance>();
      v9 = std::move<std::vector<data::AbilityState> &>((std::vector<data::AbilityState> *)(v2 + 128));
      v10 = std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::vector<data::AbilityState>::operator=(&v10->resistance_buff_debuffs, v9);
      v11 = std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v11->resistance_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->resistance_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = (std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v11->resistance_ratio);
      }
      v11->resistance_ratio = 1.0;
      if ( *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->duration_ratio);
      }
      duration_ratio = this->duration_ratio;
      v12 = std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBuffDebuffResistance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_duration_ratio = &v12->duration_ratio;
      if ( *(_BYTE *)(((unsigned __int64)p_duration_ratio >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_duration_ratio & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_duration_ratio >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(p_duration_ratio);
      }
      v12->duration_ratio = duration_ratio;
      v14 = std::__shared_ptr_access<BaseActorActionContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActorActionContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::shared_ptr<data::ConfigBuffDebuffResistance>::shared_ptr(
        &v22,
        (const std::shared_ptr<data::ConfigBuffDebuffResistance> *)(v2 + 96));
      v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      BaseActorActionContext::attachBuffDebuffResistance(v14, v15, &v22);
      std::shared_ptr<data::ConfigBuffDebuffResistance>::~shared_ptr(&v22);
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        260);
      v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v23,
              (const char (*)[38])"[ACTION] AttachAbilityStateResistance");
      operator<<(v16, param);
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::shared_ptr<data::ConfigBuffDebuffResistance>::~shared_ptr((std::shared_ptr<data::ConfigBuffDebuffResistance> *const)(v2 + 96));
      std::vector<data::AbilityState>::~vector((std::vector<data::AbilityState> *const)(v2 + 128));
    }
    std::shared_ptr<BaseActorActionContext>::~shared_ptr((std::shared_ptr<BaseActorActionContext> *const)(v2 + 64));
  }
  if ( v24 == (char *)v2 )
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

// Line 264: range 00000000130D6E2E-00000000130D7337
void __cdecl AttachElementTypeResistanceImpl::doAction(AttachElementTypeResistanceImpl *const this, ActionParam *param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  data::ElementType element_type; // r14d
  std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  BaseActorActionContext *v10; // r14
  Creature *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  float duration_ratio; // [rsp+Ch] [rbp-D4h]
  std::shared_ptr<data::AttachElementTypeResistance> p_element_type_resistance_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 context_ptr:270 64 16 31 element_type_resistance_ptr:280";
  *(_QWORD *)(v2 + 16) = AttachElementTypeResistanceImpl::doAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      267);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"target_ptr is null");
    operator<<(v5, param);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    std::shared_ptr<BaseActorActionContext>::shared_ptr<ActorModifier,void>(
      (std::shared_ptr<BaseActorActionContext> *const)(v2 + 32),
      &param->modifier_ptr);
    if ( std::operator==<BaseActorActionContext>((const std::shared_ptr<BaseActorActionContext> *)(v2 + 32), 0LL) )
      std::shared_ptr<BaseActorActionContext>::operator=<ActorAbility>(
        (std::shared_ptr<BaseActorActionContext> *const)(v2 + 32),
        &param->ability_ptr);
    if ( std::operator==<BaseActorActionContext>((const std::shared_ptr<BaseActorActionContext> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x13u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        277);
      v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v15,
             (const char (*)[20])"context_ptr is null");
      operator<<(v6, param);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      common::tools::perf::make_shared<data::AttachElementTypeResistance>();
      if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->element_type);
      }
      element_type = this->element_type;
      v8 = std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->element_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->element_type >> 3) + 0x7FFF8000) <= 3 )
      {
        v8 = (std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->element_type);
      }
      v8->element_type = element_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_ratio >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->duration_ratio);
      }
      duration_ratio = this->duration_ratio;
      v9 = std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AttachElementTypeResistance,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->duration_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->duration_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&v9->duration_ratio);
      }
      v9->duration_ratio = duration_ratio;
      v10 = std::__shared_ptr_access<BaseActorActionContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActorActionContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::shared_ptr<data::AttachElementTypeResistance>::shared_ptr(
        &p_element_type_resistance_ptr,
        (const std::shared_ptr<data::AttachElementTypeResistance> *)(v2 + 64));
      v11 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
      BaseActorActionContext::attachElementTypeResistance(v10, v11, &p_element_type_resistance_ptr);
      std::shared_ptr<data::AttachElementTypeResistance>::~shared_ptr(&p_element_type_resistance_ptr);
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        0x11u,
        "./src/ability/config_impl/config_ability_action_impl.cpp",
        "doAction",
        284);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v15,
              (const char (*)[37])"[ACTION] AttachElementTypeResistance");
      operator<<(v12, param);
      common::milog::MiLogStream::~MiLogStream(&v15);
      std::shared_ptr<data::AttachElementTypeResistance>::~shared_ptr((std::shared_ptr<data::AttachElementTypeResistance> *const)(v2 + 64));
    }
    std::shared_ptr<BaseActorActionContext>::~shared_ptr((std::shared_ptr<BaseActorActionContext> *const)(v2 + 32));
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 288: range 00000000130D7338-00000000130D747D
void __cdecl ExecuteGadgetLuaImpl::doAction(ExecuteGadgetLuaImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      291);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::executeGadgetLuaHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      295);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v5,
           (const char (*)[27])"[ACTION] executeGadgetLua:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 299: range 00000000130D747E-00000000130D75C3
void __cdecl ReviveElemEnergyImpl::doAction(ReviveElemEnergyImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      302);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::reviveElemEnergyHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      306);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v5,
           (const char (*)[27])"[ACTION] reviveElemEnergy:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 310: range 00000000130D75C4-00000000130D7709
void __cdecl ChangeEnviroWeatherImpl::doAction(ChangeEnviroWeatherImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      313);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::changeEnviroWeatherHander(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      317);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v5,
           (const char (*)[30])"[ACTION] changeEnviroWeather:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 321: range 00000000130D770A-00000000130D784F
void __cdecl AddClimateMeterImpl::doAction(AddClimateMeterImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      324);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::addClimateMeterHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      328);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v5,
           (const char (*)[26])"[ACTION] AddClimateMeter:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 332: range 00000000130D7850-00000000130D7995
void __cdecl ResetClimateMeterImpl::doAction(ResetClimateMeterImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      335);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::resetClimateMeterHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      339);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v5,
           (const char (*)[28])"[ACTION] ResetClimateMeter:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 343: range 00000000130D7996-00000000130D7AF3
void __cdecl EquipAffixStartImpl::doAction(EquipAffixStartImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      346);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::equipAffixStartHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      350);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v6,
           (const char (*)[36])"[ACTION] EquipAffixStart, affix_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->equip_affix_data_id);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 354: range 00000000130D7AF4-00000000130D7C51
void __cdecl ServerLuaCallImpl::doAction(ServerLuaCallImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      357);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"player_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::serverLuaCallHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      361);
    v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v6,
           (const char (*)[30])"[ACTION] ServerLuaCall, func:");
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->func_name);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 365: range 00000000130D7C52-00000000130D7D93
void __cdecl KillPlayTeamEntityImpl::doAction(KillPlayTeamEntityImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rdx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      368);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"player_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::killPlayTeamEntityHandler(AbilityComp, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      372);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v5,
           (const char (*)[40])"[ACTION] KillPlayTeamEntityImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 376: range 00000000130D7D94-00000000130D7E5D
void __cdecl SetGlobalValueToOverrideMapImpl::doAction(SetGlobalValueToOverrideMapImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      379);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v4, (const char (*)[19])"source_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setGlobalValueToOverrideMapHandler(AbilityComp, this, param);
  }
};

// Line 389: range 00000000130D7E5E-00000000130D7FA3
void __cdecl SetRandomOverrideMapValueImpl::doAction(SetRandomOverrideMapValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      392);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setRandomOverrideMapValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      396);
    v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v5,
           (const char (*)[47])"[ACTION] SetRandomOverrideMapValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 400: range 00000000130D7FA4-00000000130D80E9
void __cdecl SetOverrideMapValueImpl::doAction(SetOverrideMapValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      403);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setOverrideMapValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      407);
    v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v5,
           (const char (*)[41])"[ACTION] SetOverrideMapValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 411: range 00000000130D80EA-00000000130D822F
void __cdecl SetCrystalShieldHpToOverrideMapImpl::doAction(
        SetCrystalShieldHpToOverrideMapImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      414);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setCrystalShieldHpToOverrideMapHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      418);
    v4 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v5,
           (const char (*)[53])"[ACTION] SetCrystalShieldHpToOverrideMapImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 422: range 00000000130D8230-00000000130D8375
void __cdecl SetSystemValueToOverrideMapImpl::doAction(SetSystemValueToOverrideMapImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      425);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setSystemValueToOverrideMapHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      430);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v5,
           (const char (*)[49])"[ACTION] SetSystemValueToOverrideMapImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 435: range 00000000130D8376-00000000130D84BB
void __cdecl SetGlobalValueByTargetDistanceImpl::doAction(
        SetGlobalValueByTargetDistanceImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      438);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setGlobalValueByTargetDistanceHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      442);
    v4 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v5,
           (const char (*)[52])"[ACTION] SetGlobalValueByTargetDistanceImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 446: range 00000000130D84BC-00000000130D8601
void __cdecl SetCrashDamageImpl::doAction(SetCrashDamageImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      449);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setCrashDamageHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      453);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v5,
           (const char (*)[36])"[ACTION] SetCrashDamageImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 457: range 00000000130D8602-00000000130D86CB
void __cdecl ResetAbilitySpecialImpl::doAction(ResetAbilitySpecialImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      460);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v4, (const char (*)[19])"source_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::resetAbilitySpecialHandler(AbilityComp, this, param);
  }
};

// Line 467: range 00000000130D86CC-00000000130D8898
void __cdecl ChangeTagImpl::doAction(ChangeTagImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      470);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"target_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::changeTag(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      474);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v9,
           (const char (*)[21])"[ACTION] ChangeTag :");
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->tag);
    v6 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v5, (const char (*)[3])", ");
    if ( *(char *)(((unsigned __int64)&this->is_add >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_add);
    v7 = common::milog::MiLogStream::operator<<(v6, this->is_add);
    v8 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v7, (const char (*)[3])": ");
    operator<<(v8, param);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
};

// Line 478: range 00000000130D889A-00000000130D8DFB
void __cdecl CopyGlobalValueImpl::doAction(CopyGlobalValueImpl *const this, ActionParam *param)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  GameserverService *v6; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const data::ElementDefine *ElementDefine; // rax
  std::string_view v9; // rax
  bool v10; // r14
  uint32_t v11; // r14d
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Creature *v13; // rax
  AbilityComp *AbilityComp; // rax
  Creature *v15; // rax
  AbilityComp *v16; // rax
  SecurityConfig *security_config; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 source_ptr:507";
  *(_QWORD *)(v3 + 16) = CopyGlobalValueImpl::doAction;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->security_config;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)security_config + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_use_server_dynamic_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&security_config->is_use_server_dynamic_value);
  }
  if ( security_config->is_use_server_dynamic_value )
  {
    v6 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 32));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ElementDefine = JsonConfigMgr::getElementDefine(&v7->design_config.json_config_mgr);
    v9._M_len = std::string::operator std::string_view(&ElementDefine->SUFFIX_REACTION_DAMAGE, v6);
    v10 = !common::tools::StringUtils::isEndsWith(&this->dst_key, v9);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    if ( !v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->src_target >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->src_target >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4(&this->src_target);
      }
      if ( this->src_target == Applier )
      {
        if ( std::operator==<ActorModifier>(&param->modifier_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/config_impl/config_ability_action_impl.cpp",
            "doAction",
            499);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v19,
            (const char (*)[21])"modifier_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/ability/config_impl/config_ability_action_impl.cpp",
            "doAction",
            504);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v19,
            (const char (*)[19])"target_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v19);
        }
        else
        {
          v11 = (unsigned int)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
          v12 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->modifier_ptr);
          ActorModifier::getApplyEntityId(v12);
          Entity::findEntityInSameScene<Creature>((const Entity *const)(v3 + 32), v11);
          if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v3 + 32), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v19,
              &common::milog::MiLogDefault::default_log_obj_,
              0x13u,
              "./src/ability/config_impl/config_ability_action_impl.cpp",
              "doAction",
              510);
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v19,
              (const char (*)[19])"source_ptr is null");
            common::milog::MiLogStream::~MiLogStream(&v19);
          }
          else
          {
            v13 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            AbilityComp = Creature::getAbilityComp(v13);
            *(float *)v2.m128i_i32 = AbilityComp::getDynamicValue<float>(AbilityComp, &this->src_key);
            v15 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
            v16 = Creature::getAbilityComp(v15);
            AbilityComp::createOrSetServerDynamicValue<float>(v16, &this->dst_key, COERCE_FLOAT(_mm_cvtsi128_si32(v2)));
          }
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v3 + 32));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/ability/config_impl/config_ability_action_impl.cpp",
          "doAction",
          494);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v19,
          (const char (*)[26])"src_target is not applier");
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 518: range 00000000130D8DFC-00000000130D8F41
void __cdecl ServerMonsterLogImpl::doAction(ServerMonsterLogImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      521);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::serverMonsterLogHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      525);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v5,
           (const char (*)[38])"[ACTION] ServerMonsterLogImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 529: range 00000000130D8F42-00000000130D9087
void __cdecl ReviveStaminaImpl::doAction(ReviveStaminaImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      532);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::reviveStaminaHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      536);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v5,
           (const char (*)[35])"[ACTION] ReviveStaminaImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 540: range 00000000130D9088-00000000130D91CD
void __cdecl DeductStaminaImpl::doAction(DeductStaminaImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      543);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::deductStaminaHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      547);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v5,
           (const char (*)[35])"[ACTION] DeductStaminaImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 551: range 00000000130D91CE-00000000130D9313
void __cdecl KillServerGadgetImpl::doAction(KillServerGadgetImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      554);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::killServerGadgetHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      558);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v5,
           (const char (*)[38])"[ACTION] KillServerGadgetImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 562: range 00000000130D9314-00000000130D9459
void __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::doAction(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      565);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::getTeamTotalMaxEnergyToOverridemapHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      570);
    v4 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v5,
           (const char (*)[56])"[ACTION] GetTeamTotalMaxEnergyToOverridemapImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 574: range 00000000130D945A-00000000130D959F
void __cdecl SetOvergrowDamgeToGlobalValueImpl::doAction(
        SetOvergrowDamgeToGlobalValueImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      577);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setOvergrowDamgeToGlobalValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      581);
    v4 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v5,
           (const char (*)[51])"[ACTION] SetOvergrowDamgeToGlobalValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 586: range 00000000130D95A0-00000000130D96E5
void __cdecl SetRegionalPlayVarValueImpl::doAction(SetRegionalPlayVarValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      589);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setRegionalPlayVarValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      593);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v5,
           (const char (*)[45])"[ACTION] SetRegionalPlayVarValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 597: range 00000000130D96E6-00000000130D982B
void __cdecl AddRegionalPlayVarValueImpl::doAction(AddRegionalPlayVarValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      600);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::addRegionalPlayVarValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      604);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v5,
           (const char (*)[45])"[ACTION] AddRegionalPlayVarValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 608: range 00000000130D982C-00000000130D9971
void __cdecl SetLogicStateValueImpl::doAction(SetLogicStateValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      611);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setLogicStateValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      615);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v5,
           (const char (*)[40])"[ACTION] SetLogicStateValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 619: range 00000000130D9972-00000000130D9AB7
void __cdecl AddLogicStateValueImpl::doAction(AddLogicStateValueImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->source_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      622);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::addLogicStateValueHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      626);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v5,
           (const char (*)[40])"[ACTION] AddLogicStateValueImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 631: range 00000000130D9AB8-00000000130D9BFD
void __cdecl AttackByEnergyImpl::doAction(AttackByEnergyImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      634);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::attackByEnergyHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      638);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v5,
           (const char (*)[24])"[ACTION] AttackByEnergy");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 642: range 00000000130D9BFE-00000000130D9D5B
void __cdecl ServerLuaTriggerEventImpl::doAction(ServerLuaTriggerEventImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->source_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      645);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"player_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->source_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::serverLuaTriggerEventHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      649);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v6,
           (const char (*)[44])"[ACTION] ServerLuaTriggerEvent, sourceName:");
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->source_name);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 653: range 00000000130D9D5C-00000000130D9EB9
void __cdecl AvatarShareCDSkillStartImpl::doAction(AvatarShareCDSkillStartImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      656);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::avatarShareCDSkillStartHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      660);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v6,
           (const char (*)[44])"[ACTION] AvatarShareCDSkillStart, skill_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->skill_id);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 664: range 00000000130D9EBA-00000000130DA017
void __cdecl DropSubfieldImpl::doAction(DropSubfieldImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(&param->target_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      667);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"target_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::dropSubfieldHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      671);
    v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v6,
           (const char (*)[38])"[ACTION] DropSubfield, subfield_name:");
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &this->subfield_name);
    operator<<(v5, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v6);
};

// Line 675: range 00000000130DA018-00000000130DA15D
void __cdecl ChangeGadgetStateImpl::doAction(ChangeGadgetStateImpl *const this, ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->target_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      678);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::changeGadgetStateHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      682);
    v4 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v5,
           (const char (*)[39])"[ACTION] ChangeGadgetStateImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

// Line 686: range 00000000130DA15E-00000000130DA2A3
void __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::doAction(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this,
        ActionParam *param)
{
  Creature *v2; // rax
  AbilityComp *AbilityComp; // rcx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Creature>(0LL, &param->target_ptr) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      689);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"source_ptr is null");
  }
  else
  {
    v2 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->target_ptr);
    AbilityComp = Creature::getAbilityComp(v2);
    AbilityComp::setTeamFightPropertyToOverrideMapKeyHandler(AbilityComp, this, param);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      0x11u,
      "./src/ability/config_impl/config_ability_action_impl.cpp",
      "doAction",
      693);
    v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v5,
           (const char (*)[58])"[ACTION] SetTeamFightPropertyToOverrideMapKeyImpl, param:");
    operator<<(v4, param);
  }
  common::milog::MiLogStream::~MiLogStream(&v5);
};

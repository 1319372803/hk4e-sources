// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_action_impl.h

// Line 21: range 000000001359C92C-000000001359C979
void __cdecl AvatarSkillStartImpl::AvatarSkillStartImpl(AvatarSkillStartImpl *const this)
{
  int (**v1)(...); // rdx

  data::AvatarSkillStart::AvatarSkillStart(this);
  v1 = (int (**)(...))(&`vtable for'AvatarSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 21: range 000000001358A890-000000001358A8E8
void __cdecl AvatarSkillStartImpl::AvatarSkillStartImpl(
        AvatarSkillStartImpl *const this,
        const AvatarSkillStartImpl *a2)
{
  int (**v2)(...); // rdx

  data::AvatarSkillStart::AvatarSkillStart(this, a2);
  v2 = (int (**)(...))(&`vtable for'AvatarSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 21: range 0000000013613FB0-0000000013613FDA
void __cdecl AvatarSkillStartImpl::~AvatarSkillStartImpl(AvatarSkillStartImpl *const this)
{
  AvatarSkillStartImpl::~AvatarSkillStartImpl(this);
  operator delete(this, 0xD0uLL);
};

// Line 21: range 0000000013613F62-0000000013613FAF
void __cdecl AvatarSkillStartImpl::~AvatarSkillStartImpl(AvatarSkillStartImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AvatarSkillStart::~AvatarSkillStart(this);
};

// Line 23: range 00000000131D0666-00000000131D06AE
std::shared_ptr<data::ConfigAbilityAction> __cdecl AvatarSkillStartImpl::clone(AvatarSkillStartImpl *const this)
{
  AvatarSkillStartImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AvatarSkillStartImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AvatarSkillStartImpl,AvatarSkillStartImpl&>((AvatarSkillStartImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AvatarSkillStartImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AvatarSkillStartImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 28: range 000000001358AC74-000000001358ACCC
void __cdecl DebugLogImpl::DebugLogImpl(DebugLogImpl *const this, const DebugLogImpl *a2)
{
  int (**v2)(...); // rdx

  data::DebugLog::DebugLog(this, a2);
  v2 = (int (**)(...))(&`vtable for'DebugLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 28: range 0000000013613F36-0000000013613F60
void __cdecl DebugLogImpl::~DebugLogImpl(DebugLogImpl *const this)
{
  DebugLogImpl::~DebugLogImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 28: range 0000000013613EE8-0000000013613F35
void __cdecl DebugLogImpl::~DebugLogImpl(DebugLogImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DebugLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DebugLog::~DebugLog(this);
};

// Line 30: range 00000000131D06EC-00000000131D0734
std::shared_ptr<data::ConfigAbilityAction> __cdecl DebugLogImpl::clone(DebugLogImpl *const this)
{
  DebugLogImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<DebugLogImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DebugLogImpl,DebugLogImpl&>((DebugLogImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<DebugLogImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<DebugLogImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 35: range 000000001359D0A6-000000001359D0F3
void __cdecl HealHPImpl::HealHPImpl(HealHPImpl *const this)
{
  int (**v1)(...); // rdx

  data::HealHP::HealHP(this);
  v1 = (int (**)(...))(&`vtable for'HealHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 35: range 000000001358B308-000000001358B360
void __cdecl HealHPImpl::HealHPImpl(HealHPImpl *const this, const HealHPImpl *a2)
{
  int (**v2)(...); // rdx

  data::HealHP::HealHP(this, a2);
  v2 = (int (**)(...))(&`vtable for'HealHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 35: range 0000000013613E6E-0000000013613EBB
void __cdecl HealHPImpl::~HealHPImpl(HealHPImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HealHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::HealHP::~HealHP(this);
};

// Line 35: range 0000000013613EBC-0000000013613EE6
void __cdecl HealHPImpl::~HealHPImpl(HealHPImpl *const this)
{
  HealHPImpl::~HealHPImpl(this);
  operator delete(this, 0x138uLL);
};

// Line 37: range 00000000131D0772-00000000131D07BA
std::shared_ptr<data::ConfigAbilityAction> __cdecl HealHPImpl::clone(HealHPImpl *const this)
{
  HealHPImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<HealHPImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<HealHPImpl,HealHPImpl&>((HealHPImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<HealHPImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<HealHPImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 42: range 000000001358B6A0-000000001358B6F8
void __cdecl ReviveAvatarImpl::ReviveAvatarImpl(ReviveAvatarImpl *const this, const ReviveAvatarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ReviveAvatar::ReviveAvatar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReviveAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 42: range 0000000013613E42-0000000013613E6C
void __cdecl ReviveAvatarImpl::~ReviveAvatarImpl(ReviveAvatarImpl *const this)
{
  ReviveAvatarImpl::~ReviveAvatarImpl(this);
  operator delete(this, 0x138uLL);
};

// Line 42: range 0000000013613DF4-0000000013613E41
void __cdecl ReviveAvatarImpl::~ReviveAvatarImpl(ReviveAvatarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviveAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ReviveAvatar::~ReviveAvatar(this);
};

// Line 44: range 00000000131D07F8-00000000131D0840
std::shared_ptr<data::ConfigAbilityAction> __cdecl ReviveAvatarImpl::clone(ReviveAvatarImpl *const this)
{
  ReviveAvatarImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ReviveAvatarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ReviveAvatarImpl,ReviveAvatarImpl&>((ReviveAvatarImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ReviveAvatarImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ReviveAvatarImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 49: range 000000001358BC28-000000001358BC80
void __cdecl ReviveDeadAvatarImpl::ReviveDeadAvatarImpl(
        ReviveDeadAvatarImpl *const this,
        const ReviveDeadAvatarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ReviveDeadAvatar::ReviveDeadAvatar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReviveDeadAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 49: range 0000000013613DC8-0000000013613DF2
void __cdecl ReviveDeadAvatarImpl::~ReviveDeadAvatarImpl(ReviveDeadAvatarImpl *const this)
{
  ReviveDeadAvatarImpl::~ReviveDeadAvatarImpl(this);
  operator delete(this, 0x160uLL);
};

// Line 49: range 0000000013613D7A-0000000013613DC7
void __cdecl ReviveDeadAvatarImpl::~ReviveDeadAvatarImpl(ReviveDeadAvatarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviveDeadAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ReviveDeadAvatar::~ReviveDeadAvatar(this);
};

// Line 51: range 00000000131D087E-00000000131D08C6
std::shared_ptr<data::ConfigAbilityAction> __cdecl ReviveDeadAvatarImpl::clone(ReviveDeadAvatarImpl *const this)
{
  ReviveDeadAvatarImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ReviveDeadAvatarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ReviveDeadAvatarImpl,ReviveDeadAvatarImpl&>((ReviveDeadAvatarImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ReviveDeadAvatarImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ReviveDeadAvatarImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 56: range 000000001359E13C-000000001359E189
void __cdecl CreateGadgetImpl::CreateGadgetImpl(CreateGadgetImpl *const this)
{
  int (**v1)(...); // rdx

  data::CreateGadget::CreateGadget(this);
  v1 = (int (**)(...))(&`vtable for'CreateGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 56: range 000000001358C936-000000001358C98E
void __cdecl CreateGadgetImpl::CreateGadgetImpl(CreateGadgetImpl *const this, const CreateGadgetImpl *a2)
{
  int (**v2)(...); // rdx

  data::CreateGadget::CreateGadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'CreateGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 56: range 0000000013613D4E-0000000013613D78
void __cdecl CreateGadgetImpl::~CreateGadgetImpl(CreateGadgetImpl *const this)
{
  CreateGadgetImpl::~CreateGadgetImpl(this);
  operator delete(this, 0xD0uLL);
};

// Line 56: range 0000000013613D00-0000000013613D4D
void __cdecl CreateGadgetImpl::~CreateGadgetImpl(CreateGadgetImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CreateGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::CreateGadget::~CreateGadget(this);
};

// Line 58: range 00000000131D0904-00000000131D094C
std::shared_ptr<data::ConfigAbilityAction> __cdecl CreateGadgetImpl::clone(CreateGadgetImpl *const this)
{
  CreateGadgetImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<CreateGadgetImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<CreateGadgetImpl,CreateGadgetImpl&>((CreateGadgetImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<CreateGadgetImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<CreateGadgetImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 63: range 000000001359E58A-000000001359E5D7
void __cdecl CreateMovingPlatformImpl::CreateMovingPlatformImpl(CreateMovingPlatformImpl *const this)
{
  int (**v1)(...); // rdx

  data::CreateMovingPlatform::CreateMovingPlatform(this);
  v1 = (int (**)(...))(&`vtable for'CreateMovingPlatformImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 63: range 000000001358CF3E-000000001358CF96
void __cdecl CreateMovingPlatformImpl::CreateMovingPlatformImpl(
        CreateMovingPlatformImpl *const this,
        const CreateMovingPlatformImpl *a2)
{
  int (**v2)(...); // rdx

  data::CreateMovingPlatform::CreateMovingPlatform(this, a2);
  v2 = (int (**)(...))(&`vtable for'CreateMovingPlatformImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 63: range 0000000013613C86-0000000013613CD3
void __cdecl CreateMovingPlatformImpl::~CreateMovingPlatformImpl(CreateMovingPlatformImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CreateMovingPlatformImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::CreateMovingPlatform::~CreateMovingPlatform(this);
};

// Line 63: range 0000000013613CD4-0000000013613CFE
void __cdecl CreateMovingPlatformImpl::~CreateMovingPlatformImpl(CreateMovingPlatformImpl *const this)
{
  CreateMovingPlatformImpl::~CreateMovingPlatformImpl(this);
  operator delete(this, 0xF8uLL);
};

// Line 65: range 00000000131D098A-00000000131D09D2
std::shared_ptr<data::ConfigAbilityAction> __cdecl CreateMovingPlatformImpl::clone(
        CreateMovingPlatformImpl *const this)
{
  CreateMovingPlatformImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<CreateMovingPlatformImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<CreateMovingPlatformImpl,CreateMovingPlatformImpl&>(
    (CreateMovingPlatformImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<CreateMovingPlatformImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<CreateMovingPlatformImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 70: range 000000001359EA8E-000000001359EADB
void __cdecl KillSelfImpl::KillSelfImpl(KillSelfImpl *const this)
{
  int (**v1)(...); // rdx

  data::KillSelf::KillSelf(this);
  v1 = (int (**)(...))(&`vtable for'KillSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 70: range 000000001358D682-000000001358D6DA
void __cdecl KillSelfImpl::KillSelfImpl(KillSelfImpl *const this, const KillSelfImpl *a2)
{
  int (**v2)(...); // rdx

  data::KillSelf::KillSelf(this, a2);
  v2 = (int (**)(...))(&`vtable for'KillSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 70: range 0000000013613C5A-0000000013613C84
void __cdecl KillSelfImpl::~KillSelfImpl(KillSelfImpl *const this)
{
  KillSelfImpl::~KillSelfImpl(this);
  operator delete(this, 0xA0uLL);
};

// Line 70: range 0000000013613C0C-0000000013613C59
void __cdecl KillSelfImpl::~KillSelfImpl(KillSelfImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'KillSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::KillSelf::~KillSelf(this);
};

// Line 72: range 00000000131D0A10-00000000131D0A58
std::shared_ptr<data::ConfigAbilityAction> __cdecl KillSelfImpl::clone(KillSelfImpl *const this)
{
  KillSelfImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<KillSelfImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<KillSelfImpl,KillSelfImpl&>((KillSelfImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<KillSelfImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<KillSelfImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 77: range 000000001358DAEC-000000001358DB44
void __cdecl TriggerDropEquipPartsImpl::TriggerDropEquipPartsImpl(
        TriggerDropEquipPartsImpl *const this,
        const TriggerDropEquipPartsImpl *a2)
{
  int (**v2)(...); // rdx

  data::TriggerDropEquipParts::TriggerDropEquipParts(this, a2);
  v2 = (int (**)(...))(&`vtable for'TriggerDropEquipPartsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 77: range 0000000013613B92-0000000013613BDF
void __cdecl TriggerDropEquipPartsImpl::~TriggerDropEquipPartsImpl(TriggerDropEquipPartsImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TriggerDropEquipPartsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::TriggerDropEquipParts::~TriggerDropEquipParts(this);
};

// Line 77: range 0000000013613BE0-0000000013613C0A
void __cdecl TriggerDropEquipPartsImpl::~TriggerDropEquipPartsImpl(TriggerDropEquipPartsImpl *const this)
{
  TriggerDropEquipPartsImpl::~TriggerDropEquipPartsImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 79: range 00000000131D0A96-00000000131D0ADE
std::shared_ptr<data::ConfigAbilityAction> __cdecl TriggerDropEquipPartsImpl::clone(
        TriggerDropEquipPartsImpl *const this)
{
  TriggerDropEquipPartsImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<TriggerDropEquipPartsImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TriggerDropEquipPartsImpl,TriggerDropEquipPartsImpl&>(
    (TriggerDropEquipPartsImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<TriggerDropEquipPartsImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<TriggerDropEquipPartsImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 84: range 000000001359F1DE-000000001359F22B
void __cdecl TriggerThrowEquipPartImpl::TriggerThrowEquipPartImpl(TriggerThrowEquipPartImpl *const this)
{
  int (**v1)(...); // rdx

  data::TriggerThrowEquipPart::TriggerThrowEquipPart(this);
  v1 = (int (**)(...))(&`vtable for'TriggerThrowEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 84: range 000000001358DF7C-000000001358DFD4
void __cdecl TriggerThrowEquipPartImpl::TriggerThrowEquipPartImpl(
        TriggerThrowEquipPartImpl *const this,
        const TriggerThrowEquipPartImpl *a2)
{
  int (**v2)(...); // rdx

  data::TriggerThrowEquipPart::TriggerThrowEquipPart(this, a2);
  v2 = (int (**)(...))(&`vtable for'TriggerThrowEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 84: range 0000000013613B18-0000000013613B65
void __cdecl TriggerThrowEquipPartImpl::~TriggerThrowEquipPartImpl(TriggerThrowEquipPartImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TriggerThrowEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::TriggerThrowEquipPart::~TriggerThrowEquipPart(this);
};

// Line 84: range 0000000013613B66-0000000013613B90
void __cdecl TriggerThrowEquipPartImpl::~TriggerThrowEquipPartImpl(TriggerThrowEquipPartImpl *const this)
{
  TriggerThrowEquipPartImpl::~TriggerThrowEquipPartImpl(this);
  operator delete(this, 0xC0uLL);
};

// Line 86: range 00000000131D0B1C-00000000131D0B64
std::shared_ptr<data::ConfigAbilityAction> __cdecl TriggerThrowEquipPartImpl::clone(
        TriggerThrowEquipPartImpl *const this)
{
  TriggerThrowEquipPartImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<TriggerThrowEquipPartImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TriggerThrowEquipPartImpl,TriggerThrowEquipPartImpl&>(
    (TriggerThrowEquipPartImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<TriggerThrowEquipPartImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<TriggerThrowEquipPartImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 91: range 000000001359F552-000000001359F59F
void __cdecl TriggerCreateGadgetToEquipPartImpl::TriggerCreateGadgetToEquipPartImpl(
        TriggerCreateGadgetToEquipPartImpl *const this)
{
  int (**v1)(...); // rdx

  data::TriggerCreateGadgetToEquipPart::TriggerCreateGadgetToEquipPart(this);
  v1 = (int (**)(...))(&`vtable for'TriggerCreateGadgetToEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 91: range 000000001358E3E6-000000001358E43E
void __cdecl TriggerCreateGadgetToEquipPartImpl::TriggerCreateGadgetToEquipPartImpl(
        TriggerCreateGadgetToEquipPartImpl *const this,
        const TriggerCreateGadgetToEquipPartImpl *a2)
{
  int (**v2)(...); // rdx

  data::TriggerCreateGadgetToEquipPart::TriggerCreateGadgetToEquipPart(this, a2);
  v2 = (int (**)(...))(&`vtable for'TriggerCreateGadgetToEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 91: range 0000000013613A9E-0000000013613AEB
void __cdecl TriggerCreateGadgetToEquipPartImpl::~TriggerCreateGadgetToEquipPartImpl(
        TriggerCreateGadgetToEquipPartImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TriggerCreateGadgetToEquipPartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::TriggerCreateGadgetToEquipPart::~TriggerCreateGadgetToEquipPart(this);
};

// Line 91: range 0000000013613AEC-0000000013613B16
void __cdecl TriggerCreateGadgetToEquipPartImpl::~TriggerCreateGadgetToEquipPartImpl(
        TriggerCreateGadgetToEquipPartImpl *const this)
{
  TriggerCreateGadgetToEquipPartImpl::~TriggerCreateGadgetToEquipPartImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 93: range 00000000131D0BA2-00000000131D0BEA
std::shared_ptr<data::ConfigAbilityAction> __cdecl TriggerCreateGadgetToEquipPartImpl::clone(
        TriggerCreateGadgetToEquipPartImpl *const this)
{
  TriggerCreateGadgetToEquipPartImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<TriggerCreateGadgetToEquipPartImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TriggerCreateGadgetToEquipPartImpl,TriggerCreateGadgetToEquipPartImpl&>(
    (TriggerCreateGadgetToEquipPartImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<TriggerCreateGadgetToEquipPartImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<TriggerCreateGadgetToEquipPartImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 98: range 000000001359FC2E-000000001359FC7B
void __cdecl SummonImpl::SummonImpl(SummonImpl *const this)
{
  int (**v1)(...); // rdx

  data::Summon::Summon(this);
  v1 = (int (**)(...))(&`vtable for'SummonImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 98: range 000000001358ED0C-000000001358ED64
void __cdecl SummonImpl::SummonImpl(SummonImpl *const this, const SummonImpl *a2)
{
  int (**v2)(...); // rdx

  data::Summon::Summon(this, a2);
  v2 = (int (**)(...))(&`vtable for'SummonImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 98: range 0000000013613A72-0000000013613A9C
void __cdecl SummonImpl::~SummonImpl(SummonImpl *const this)
{
  SummonImpl::~SummonImpl(this);
  operator delete(this, 0x100uLL);
};

// Line 98: range 0000000013613A24-0000000013613A71
void __cdecl SummonImpl::~SummonImpl(SummonImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SummonImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::Summon::~Summon(this);
};

// Line 100: range 00000000131D0C28-00000000131D0C70
std::shared_ptr<data::ConfigAbilityAction> __cdecl SummonImpl::clone(SummonImpl *const this)
{
  SummonImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SummonImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SummonImpl,SummonImpl&>((SummonImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SummonImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SummonImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 105: range 000000001358F1AC-000000001358F204
void __cdecl AddServerBuffImpl::AddServerBuffImpl(AddServerBuffImpl *const this, const AddServerBuffImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddServerBuff::AddServerBuff(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 105: range 00000000136139AA-00000000136139F7
void __cdecl AddServerBuffImpl::~AddServerBuffImpl(AddServerBuffImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AddServerBuff::~AddServerBuff(this);
};

// Line 105: range 00000000136139F8-0000000013613A22
void __cdecl AddServerBuffImpl::~AddServerBuffImpl(AddServerBuffImpl *const this)
{
  AddServerBuffImpl::~AddServerBuffImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 107: range 00000000131D0CAE-00000000131D0CF6
std::shared_ptr<data::ConfigAbilityAction> __cdecl AddServerBuffImpl::clone(AddServerBuffImpl *const this)
{
  AddServerBuffImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AddServerBuffImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddServerBuffImpl,AddServerBuffImpl&>((AddServerBuffImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AddServerBuffImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AddServerBuffImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 112: range 000000001358F644-000000001358F69C
void __cdecl RemoveServerBuffImpl::RemoveServerBuffImpl(
        RemoveServerBuffImpl *const this,
        const RemoveServerBuffImpl *a2)
{
  int (**v2)(...); // rdx

  data::RemoveServerBuff::RemoveServerBuff(this, a2);
  v2 = (int (**)(...))(&`vtable for'RemoveServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 112: range 000000001361397E-00000000136139A8
void __cdecl RemoveServerBuffImpl::~RemoveServerBuffImpl(RemoveServerBuffImpl *const this)
{
  RemoveServerBuffImpl::~RemoveServerBuffImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 112: range 0000000013613930-000000001361397D
void __cdecl RemoveServerBuffImpl::~RemoveServerBuffImpl(RemoveServerBuffImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'RemoveServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::RemoveServerBuff::~RemoveServerBuff(this);
};

// Line 114: range 00000000131D0D34-00000000131D0D7C
std::shared_ptr<data::ConfigAbilityAction> __cdecl RemoveServerBuffImpl::clone(RemoveServerBuffImpl *const this)
{
  RemoveServerBuffImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<RemoveServerBuffImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<RemoveServerBuffImpl,RemoveServerBuffImpl&>((RemoveServerBuffImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<RemoveServerBuffImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<RemoveServerBuffImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 119: range 00000000135A071A-00000000135A0767
void __cdecl ModifyAvatarSkillCDImpl::ModifyAvatarSkillCDImpl(ModifyAvatarSkillCDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifyAvatarSkillCD::ModifyAvatarSkillCD(this);
  v1 = (int (**)(...))(&`vtable for'ModifyAvatarSkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 119: range 000000001358FB3A-000000001358FB92
void __cdecl ModifyAvatarSkillCDImpl::ModifyAvatarSkillCDImpl(
        ModifyAvatarSkillCDImpl *const this,
        const ModifyAvatarSkillCDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifyAvatarSkillCD::ModifyAvatarSkillCD(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifyAvatarSkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 119: range 0000000013613904-000000001361392E
void __cdecl ModifyAvatarSkillCDImpl::~ModifyAvatarSkillCDImpl(ModifyAvatarSkillCDImpl *const this)
{
  ModifyAvatarSkillCDImpl::~ModifyAvatarSkillCDImpl(this);
  operator delete(this, 0xE8uLL);
};

// Line 119: range 00000000136138B6-0000000013613903
void __cdecl ModifyAvatarSkillCDImpl::~ModifyAvatarSkillCDImpl(ModifyAvatarSkillCDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifyAvatarSkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ModifyAvatarSkillCD::~ModifyAvatarSkillCD(this);
};

// Line 121: range 00000000131D0DBA-00000000131D0E02
std::shared_ptr<data::ConfigAbilityAction> __cdecl ModifyAvatarSkillCDImpl::clone(ModifyAvatarSkillCDImpl *const this)
{
  ModifyAvatarSkillCDImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ModifyAvatarSkillCDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifyAvatarSkillCDImpl,ModifyAvatarSkillCDImpl&>(
    (ModifyAvatarSkillCDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ModifyAvatarSkillCDImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ModifyAvatarSkillCDImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 126: range 000000001358FFD8-0000000013590030
void __cdecl UseItemImpl::UseItemImpl(UseItemImpl *const this, const UseItemImpl *a2)
{
  int (**v2)(...); // rdx

  data::UseItem::UseItem(this, a2);
  v2 = (int (**)(...))(&`vtable for'UseItemImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 126: range 000000001361388A-00000000136138B4
void __cdecl UseItemImpl::~UseItemImpl(UseItemImpl *const this)
{
  UseItemImpl::~UseItemImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 126: range 000000001361383C-0000000013613889
void __cdecl UseItemImpl::~UseItemImpl(UseItemImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UseItemImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::UseItem::~UseItem(this);
};

// Line 128: range 00000000131D0E40-00000000131D0E88
std::shared_ptr<data::ConfigAbilityAction> __cdecl UseItemImpl::clone(UseItemImpl *const this)
{
  UseItemImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<UseItemImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<UseItemImpl,UseItemImpl&>((UseItemImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<UseItemImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<UseItemImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 133: range 00000000135907D4-000000001359082C
void __cdecl LoseHPImpl::LoseHPImpl(LoseHPImpl *const this, const LoseHPImpl *a2)
{
  int (**v2)(...); // rdx

  data::LoseHP::LoseHP(this, a2);
  v2 = (int (**)(...))(&`vtable for'LoseHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 133: range 00000000136137C2-000000001361380F
void __cdecl LoseHPImpl::~LoseHPImpl(LoseHPImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LoseHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::LoseHP::~LoseHP(this);
};

// Line 133: range 0000000013613810-000000001361383A
void __cdecl LoseHPImpl::~LoseHPImpl(LoseHPImpl *const this)
{
  LoseHPImpl::~LoseHPImpl(this);
  operator delete(this, 0x150uLL);
};

// Line 135: range 00000000131D0EC6-00000000131D0F0E
std::shared_ptr<data::ConfigAbilityAction> __cdecl LoseHPImpl::clone(LoseHPImpl *const this)
{
  LoseHPImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<LoseHPImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<LoseHPImpl,LoseHPImpl&>((LoseHPImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<LoseHPImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<LoseHPImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 140: range 00000000135A1428-00000000135A1475
void __cdecl GenerateElemBallImpl::GenerateElemBallImpl(GenerateElemBallImpl *const this)
{
  int (**v1)(...); // rdx

  data::GenerateElemBall::GenerateElemBall(this);
  v1 = (int (**)(...))(&`vtable for'GenerateElemBallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 140: range 0000000013590D92-0000000013590DEA
void __cdecl GenerateElemBallImpl::GenerateElemBallImpl(
        GenerateElemBallImpl *const this,
        const GenerateElemBallImpl *a2)
{
  int (**v2)(...); // rdx

  data::GenerateElemBall::GenerateElemBall(this, a2);
  v2 = (int (**)(...))(&`vtable for'GenerateElemBallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 140: range 0000000013613796-00000000136137C0
void __cdecl GenerateElemBallImpl::~GenerateElemBallImpl(GenerateElemBallImpl *const this)
{
  GenerateElemBallImpl::~GenerateElemBallImpl(this);
  operator delete(this, 0xC8uLL);
};

// Line 140: range 0000000013613748-0000000013613795
void __cdecl GenerateElemBallImpl::~GenerateElemBallImpl(GenerateElemBallImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GenerateElemBallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::GenerateElemBall::~GenerateElemBall(this);
};

// Line 142: range 00000000131D0F4C-00000000131D0F94
std::shared_ptr<data::ConfigAbilityAction> __cdecl GenerateElemBallImpl::clone(GenerateElemBallImpl *const this)
{
  GenerateElemBallImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<GenerateElemBallImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GenerateElemBallImpl,GenerateElemBallImpl&>((GenerateElemBallImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<GenerateElemBallImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<GenerateElemBallImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 147: range 0000000013591282-00000000135912DA
void __cdecl AttachAbilityStateResistanceImpl::AttachAbilityStateResistanceImpl(
        AttachAbilityStateResistanceImpl *const this,
        const AttachAbilityStateResistanceImpl *a2)
{
  int (**v2)(...); // rdx

  data::AttachAbilityStateResistance::AttachAbilityStateResistance(this, a2);
  v2 = (int (**)(...))(&`vtable for'AttachAbilityStateResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 147: range 00000000136136CE-000000001361371B
void __cdecl AttachAbilityStateResistanceImpl::~AttachAbilityStateResistanceImpl(
        AttachAbilityStateResistanceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AttachAbilityStateResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AttachAbilityStateResistance::~AttachAbilityStateResistance(this);
};

// Line 147: range 000000001361371C-0000000013613746
void __cdecl AttachAbilityStateResistanceImpl::~AttachAbilityStateResistanceImpl(
        AttachAbilityStateResistanceImpl *const this)
{
  AttachAbilityStateResistanceImpl::~AttachAbilityStateResistanceImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 149: range 00000000131D0FD2-00000000131D101A
std::shared_ptr<data::ConfigAbilityAction> __cdecl AttachAbilityStateResistanceImpl::clone(
        AttachAbilityStateResistanceImpl *const this)
{
  AttachAbilityStateResistanceImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AttachAbilityStateResistanceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AttachAbilityStateResistanceImpl,AttachAbilityStateResistanceImpl&>(
    (AttachAbilityStateResistanceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AttachAbilityStateResistanceImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AttachAbilityStateResistanceImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 154: range 0000000013591722-000000001359177A
void __cdecl AttachElementTypeResistanceImpl::AttachElementTypeResistanceImpl(
        AttachElementTypeResistanceImpl *const this,
        const AttachElementTypeResistanceImpl *a2)
{
  int (**v2)(...); // rdx

  data::AttachElementTypeResistance::AttachElementTypeResistance(this, a2);
  v2 = (int (**)(...))(&`vtable for'AttachElementTypeResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 154: range 00000000136136A2-00000000136136CC
void __cdecl AttachElementTypeResistanceImpl::~AttachElementTypeResistanceImpl(
        AttachElementTypeResistanceImpl *const this)
{
  AttachElementTypeResistanceImpl::~AttachElementTypeResistanceImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 154: range 0000000013613654-00000000136136A1
void __cdecl AttachElementTypeResistanceImpl::~AttachElementTypeResistanceImpl(
        AttachElementTypeResistanceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AttachElementTypeResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AttachElementTypeResistance::~AttachElementTypeResistance(this);
};

// Line 156: range 00000000131D1058-00000000131D10A0
std::shared_ptr<data::ConfigAbilityAction> __cdecl AttachElementTypeResistanceImpl::clone(
        AttachElementTypeResistanceImpl *const this)
{
  AttachElementTypeResistanceImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AttachElementTypeResistanceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AttachElementTypeResistanceImpl,AttachElementTypeResistanceImpl&>(
    (AttachElementTypeResistanceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AttachElementTypeResistanceImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AttachElementTypeResistanceImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 161: range 00000000135A1FBA-00000000135A2007
void __cdecl ExecuteGadgetLuaImpl::ExecuteGadgetLuaImpl(ExecuteGadgetLuaImpl *const this)
{
  int (**v1)(...); // rdx

  data::ExecuteGadgetLua::ExecuteGadgetLua(this);
  v1 = (int (**)(...))(&`vtable for'ExecuteGadgetLuaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 161: range 0000000013591C3E-0000000013591C96
void __cdecl ExecuteGadgetLuaImpl::ExecuteGadgetLuaImpl(
        ExecuteGadgetLuaImpl *const this,
        const ExecuteGadgetLuaImpl *a2)
{
  int (**v2)(...); // rdx

  data::ExecuteGadgetLua::ExecuteGadgetLua(this, a2);
  v2 = (int (**)(...))(&`vtable for'ExecuteGadgetLuaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 161: range 0000000013613628-0000000013613652
void __cdecl ExecuteGadgetLuaImpl::~ExecuteGadgetLuaImpl(ExecuteGadgetLuaImpl *const this)
{
  ExecuteGadgetLuaImpl::~ExecuteGadgetLuaImpl(this);
  operator delete(this, 0x98uLL);
};

// Line 161: range 00000000136135DA-0000000013613627
void __cdecl ExecuteGadgetLuaImpl::~ExecuteGadgetLuaImpl(ExecuteGadgetLuaImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ExecuteGadgetLuaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ExecuteGadgetLua::~ExecuteGadgetLua(this);
};

// Line 163: range 00000000131D10DE-00000000131D1126
std::shared_ptr<data::ConfigAbilityAction> __cdecl ExecuteGadgetLuaImpl::clone(ExecuteGadgetLuaImpl *const this)
{
  ExecuteGadgetLuaImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ExecuteGadgetLuaImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ExecuteGadgetLuaImpl,ExecuteGadgetLuaImpl&>((ExecuteGadgetLuaImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ExecuteGadgetLuaImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ExecuteGadgetLuaImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 168: range 000000001359202A-0000000013592082
void __cdecl ReviveElemEnergyImpl::ReviveElemEnergyImpl(
        ReviveElemEnergyImpl *const this,
        const ReviveElemEnergyImpl *a2)
{
  int (**v2)(...); // rdx

  data::ReviveElemEnergy::ReviveElemEnergy(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReviveElemEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 168: range 0000000013613560-00000000136135AD
void __cdecl ReviveElemEnergyImpl::~ReviveElemEnergyImpl(ReviveElemEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviveElemEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ReviveElemEnergy::~ReviveElemEnergy(this);
};

// Line 168: range 00000000136135AE-00000000136135D8
void __cdecl ReviveElemEnergyImpl::~ReviveElemEnergyImpl(ReviveElemEnergyImpl *const this)
{
  ReviveElemEnergyImpl::~ReviveElemEnergyImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 170: range 00000000131D1164-00000000131D11AC
std::shared_ptr<data::ConfigAbilityAction> __cdecl ReviveElemEnergyImpl::clone(ReviveElemEnergyImpl *const this)
{
  ReviveElemEnergyImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ReviveElemEnergyImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ReviveElemEnergyImpl,ReviveElemEnergyImpl&>((ReviveElemEnergyImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ReviveElemEnergyImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ReviveElemEnergyImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 175: range 00000000135A26DC-00000000135A2729
void __cdecl ChangeEnviroWeatherImpl::ChangeEnviroWeatherImpl(ChangeEnviroWeatherImpl *const this)
{
  int (**v1)(...); // rdx

  data::ChangeEnviroWeather::ChangeEnviroWeather(this);
  v1 = (int (**)(...))(&`vtable for'ChangeEnviroWeatherImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 175: range 0000000013592544-000000001359259C
void __cdecl ChangeEnviroWeatherImpl::ChangeEnviroWeatherImpl(
        ChangeEnviroWeatherImpl *const this,
        const ChangeEnviroWeatherImpl *a2)
{
  int (**v2)(...); // rdx

  data::ChangeEnviroWeather::ChangeEnviroWeather(this, a2);
  v2 = (int (**)(...))(&`vtable for'ChangeEnviroWeatherImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 175: range 00000000136134E6-0000000013613533
void __cdecl ChangeEnviroWeatherImpl::~ChangeEnviroWeatherImpl(ChangeEnviroWeatherImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChangeEnviroWeatherImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ChangeEnviroWeather::~ChangeEnviroWeather(this);
};

// Line 175: range 0000000013613534-000000001361355E
void __cdecl ChangeEnviroWeatherImpl::~ChangeEnviroWeatherImpl(ChangeEnviroWeatherImpl *const this)
{
  ChangeEnviroWeatherImpl::~ChangeEnviroWeatherImpl(this);
  operator delete(this, 0x98uLL);
};

// Line 177: range 00000000131D11EA-00000000131D1232
std::shared_ptr<data::ConfigAbilityAction> __cdecl ChangeEnviroWeatherImpl::clone(ChangeEnviroWeatherImpl *const this)
{
  ChangeEnviroWeatherImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ChangeEnviroWeatherImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ChangeEnviroWeatherImpl,ChangeEnviroWeatherImpl&>(
    (ChangeEnviroWeatherImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ChangeEnviroWeatherImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ChangeEnviroWeatherImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 182: range 00000000135A2A50-00000000135A2A9D
void __cdecl AddClimateMeterImpl::AddClimateMeterImpl(AddClimateMeterImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddClimateMeter::AddClimateMeter(this);
  v1 = (int (**)(...))(&`vtable for'AddClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 182: range 00000000135929B0-0000000013592A08
void __cdecl AddClimateMeterImpl::AddClimateMeterImpl(AddClimateMeterImpl *const this, const AddClimateMeterImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddClimateMeter::AddClimateMeter(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 182: range 000000001361346C-00000000136134B9
void __cdecl AddClimateMeterImpl::~AddClimateMeterImpl(AddClimateMeterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AddClimateMeter::~AddClimateMeter(this);
};

// Line 182: range 00000000136134BA-00000000136134E4
void __cdecl AddClimateMeterImpl::~AddClimateMeterImpl(AddClimateMeterImpl *const this)
{
  AddClimateMeterImpl::~AddClimateMeterImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 184: range 00000000131D1270-00000000131D12B8
std::shared_ptr<data::ConfigAbilityAction> __cdecl AddClimateMeterImpl::clone(AddClimateMeterImpl *const this)
{
  AddClimateMeterImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AddClimateMeterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddClimateMeterImpl,AddClimateMeterImpl&>((AddClimateMeterImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AddClimateMeterImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AddClimateMeterImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 189: range 00000000135A2DB2-00000000135A2DFF
void __cdecl ResetClimateMeterImpl::ResetClimateMeterImpl(ResetClimateMeterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ResetClimateMeter::ResetClimateMeter(this);
  v1 = (int (**)(...))(&`vtable for'ResetClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 189: range 0000000013592DBE-0000000013592E16
void __cdecl ResetClimateMeterImpl::ResetClimateMeterImpl(
        ResetClimateMeterImpl *const this,
        const ResetClimateMeterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ResetClimateMeter::ResetClimateMeter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ResetClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 189: range 00000000136133F2-000000001361343F
void __cdecl ResetClimateMeterImpl::~ResetClimateMeterImpl(ResetClimateMeterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ResetClimateMeterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ResetClimateMeter::~ResetClimateMeter(this);
};

// Line 189: range 0000000013613440-000000001361346A
void __cdecl ResetClimateMeterImpl::~ResetClimateMeterImpl(ResetClimateMeterImpl *const this)
{
  ResetClimateMeterImpl::~ResetClimateMeterImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 191: range 00000000131D12F6-00000000131D133E
std::shared_ptr<data::ConfigAbilityAction> __cdecl ResetClimateMeterImpl::clone(ResetClimateMeterImpl *const this)
{
  ResetClimateMeterImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ResetClimateMeterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ResetClimateMeterImpl,ResetClimateMeterImpl&>((ResetClimateMeterImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ResetClimateMeterImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ResetClimateMeterImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 196: range 00000000135A3126-00000000135A3173
void __cdecl EquipAffixStartImpl::EquipAffixStartImpl(EquipAffixStartImpl *const this)
{
  int (**v1)(...); // rdx

  data::EquipAffixStart::EquipAffixStart(this);
  v1 = (int (**)(...))(&`vtable for'EquipAffixStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 196: range 0000000013593222-000000001359327A
void __cdecl EquipAffixStartImpl::EquipAffixStartImpl(EquipAffixStartImpl *const this, const EquipAffixStartImpl *a2)
{
  int (**v2)(...); // rdx

  data::EquipAffixStart::EquipAffixStart(this, a2);
  v2 = (int (**)(...))(&`vtable for'EquipAffixStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 196: range 0000000013613378-00000000136133C5
void __cdecl EquipAffixStartImpl::~EquipAffixStartImpl(EquipAffixStartImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EquipAffixStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::EquipAffixStart::~EquipAffixStart(this);
};

// Line 196: range 00000000136133C6-00000000136133F0
void __cdecl EquipAffixStartImpl::~EquipAffixStartImpl(EquipAffixStartImpl *const this)
{
  EquipAffixStartImpl::~EquipAffixStartImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 198: range 00000000131D137C-00000000131D13C4
std::shared_ptr<data::ConfigAbilityAction> __cdecl EquipAffixStartImpl::clone(EquipAffixStartImpl *const this)
{
  EquipAffixStartImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<EquipAffixStartImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<EquipAffixStartImpl,EquipAffixStartImpl&>((EquipAffixStartImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<EquipAffixStartImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<EquipAffixStartImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 203: range 00000000135938B2-000000001359390A
void __cdecl ServerLuaCallImpl::ServerLuaCallImpl(ServerLuaCallImpl *const this, const ServerLuaCallImpl *a2)
{
  int (**v2)(...); // rdx

  data::ServerLuaCall::ServerLuaCall(this, a2);
  v2 = (int (**)(...))(&`vtable for'ServerLuaCallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 203: range 00000000136132FE-000000001361334B
void __cdecl ServerLuaCallImpl::~ServerLuaCallImpl(ServerLuaCallImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServerLuaCallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ServerLuaCall::~ServerLuaCall(this);
};

// Line 203: range 000000001361334C-0000000013613376
void __cdecl ServerLuaCallImpl::~ServerLuaCallImpl(ServerLuaCallImpl *const this)
{
  ServerLuaCallImpl::~ServerLuaCallImpl(this);
  operator delete(this, 0x130uLL);
};

// Line 205: range 00000000131D1402-00000000131D144A
std::shared_ptr<data::ConfigAbilityAction> __cdecl ServerLuaCallImpl::clone(ServerLuaCallImpl *const this)
{
  ServerLuaCallImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ServerLuaCallImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ServerLuaCallImpl,ServerLuaCallImpl&>((ServerLuaCallImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ServerLuaCallImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ServerLuaCallImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 209: range 0000000013593C42-0000000013593C9A
void __cdecl KillPlayTeamEntityImpl::KillPlayTeamEntityImpl(
        KillPlayTeamEntityImpl *const this,
        const KillPlayTeamEntityImpl *a2)
{
  int (**v2)(...); // rdx

  data::KillPlayEntity::KillPlayEntity(this, a2);
  v2 = (int (**)(...))(&`vtable for'KillPlayTeamEntityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 209: range 00000000136132D2-00000000136132FC
void __cdecl KillPlayTeamEntityImpl::~KillPlayTeamEntityImpl(KillPlayTeamEntityImpl *const this)
{
  KillPlayTeamEntityImpl::~KillPlayTeamEntityImpl(this);
  operator delete(this, 0x88uLL);
};

// Line 209: range 0000000013613284-00000000136132D1
void __cdecl KillPlayTeamEntityImpl::~KillPlayTeamEntityImpl(KillPlayTeamEntityImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'KillPlayTeamEntityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::KillPlayEntity::~KillPlayEntity(this);
};

// Line 211: range 00000000131D1488-00000000131D14D0
std::shared_ptr<data::ConfigAbilityAction> __cdecl KillPlayTeamEntityImpl::clone(KillPlayTeamEntityImpl *const this)
{
  KillPlayTeamEntityImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<KillPlayTeamEntityImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<KillPlayTeamEntityImpl,KillPlayTeamEntityImpl&>((KillPlayTeamEntityImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<KillPlayTeamEntityImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<KillPlayTeamEntityImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 215: range 000000001359417E-00000000135941D6
void __cdecl SetGlobalValueToOverrideMapImpl::SetGlobalValueToOverrideMapImpl(
        SetGlobalValueToOverrideMapImpl *const this,
        const SetGlobalValueToOverrideMapImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetGlobalValueToOverrideMap::SetGlobalValueToOverrideMap(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetGlobalValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 215: range 000000001361320A-0000000013613257
void __cdecl SetGlobalValueToOverrideMapImpl::~SetGlobalValueToOverrideMapImpl(
        SetGlobalValueToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetGlobalValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetGlobalValueToOverrideMap::~SetGlobalValueToOverrideMap(this);
};

// Line 215: range 0000000013613258-0000000013613282
void __cdecl SetGlobalValueToOverrideMapImpl::~SetGlobalValueToOverrideMapImpl(
        SetGlobalValueToOverrideMapImpl *const this)
{
  SetGlobalValueToOverrideMapImpl::~SetGlobalValueToOverrideMapImpl(this);
  operator delete(this, 0xD0uLL);
};

// Line 217: range 00000000131D150E-00000000131D1556
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetGlobalValueToOverrideMapImpl::clone(
        SetGlobalValueToOverrideMapImpl *const this)
{
  SetGlobalValueToOverrideMapImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetGlobalValueToOverrideMapImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetGlobalValueToOverrideMapImpl,SetGlobalValueToOverrideMapImpl&>(
    (SetGlobalValueToOverrideMapImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetGlobalValueToOverrideMapImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetGlobalValueToOverrideMapImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 221: range 00000000135A40D8-00000000135A4125
void __cdecl SetRandomOverrideMapValueImpl::SetRandomOverrideMapValueImpl(SetRandomOverrideMapValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetRandomOverrideMapValue::SetRandomOverrideMapValue(this);
  v1 = (int (**)(...))(&`vtable for'SetRandomOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 221: range 00000000135946F6-000000001359474E
void __cdecl SetRandomOverrideMapValueImpl::SetRandomOverrideMapValueImpl(
        SetRandomOverrideMapValueImpl *const this,
        const SetRandomOverrideMapValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetRandomOverrideMapValue::SetRandomOverrideMapValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetRandomOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 221: range 0000000013613190-00000000136131DD
void __cdecl SetRandomOverrideMapValueImpl::~SetRandomOverrideMapValueImpl(SetRandomOverrideMapValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetRandomOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetRandomOverrideMapValue::~SetRandomOverrideMapValue(this);
};

// Line 221: range 00000000136131DE-0000000013613208
void __cdecl SetRandomOverrideMapValueImpl::~SetRandomOverrideMapValueImpl(SetRandomOverrideMapValueImpl *const this)
{
  SetRandomOverrideMapValueImpl::~SetRandomOverrideMapValueImpl(this);
  operator delete(this, 0xB8uLL);
};

// Line 223: range 00000000131D1594-00000000131D15DC
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetRandomOverrideMapValueImpl::clone(
        SetRandomOverrideMapValueImpl *const this)
{
  SetRandomOverrideMapValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetRandomOverrideMapValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetRandomOverrideMapValueImpl,SetRandomOverrideMapValueImpl&>(
    (SetRandomOverrideMapValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetRandomOverrideMapValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetRandomOverrideMapValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 227: range 0000000013594B30-0000000013594B88
void __cdecl SetOverrideMapValueImpl::SetOverrideMapValueImpl(
        SetOverrideMapValueImpl *const this,
        const SetOverrideMapValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetOverrideMapValue::SetOverrideMapValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 227: range 0000000013613116-0000000013613163
void __cdecl SetOverrideMapValueImpl::~SetOverrideMapValueImpl(SetOverrideMapValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetOverrideMapValue::~SetOverrideMapValue(this);
};

// Line 227: range 0000000013613164-000000001361318E
void __cdecl SetOverrideMapValueImpl::~SetOverrideMapValueImpl(SetOverrideMapValueImpl *const this)
{
  SetOverrideMapValueImpl::~SetOverrideMapValueImpl(this);
  operator delete(this, 0xC8uLL);
};

// Line 229: range 00000000131D161A-00000000131D1662
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetOverrideMapValueImpl::clone(SetOverrideMapValueImpl *const this)
{
  SetOverrideMapValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetOverrideMapValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetOverrideMapValueImpl,SetOverrideMapValueImpl&>(
    (SetOverrideMapValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetOverrideMapValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetOverrideMapValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 233: range 00000000135A47D6-00000000135A4823
void __cdecl SetCrystalShieldHpToOverrideMapImpl::SetCrystalShieldHpToOverrideMapImpl(
        SetCrystalShieldHpToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetCrystalShieldHpToOverrideMap::SetCrystalShieldHpToOverrideMap(this);
  v1 = (int (**)(...))(&`vtable for'SetCrystalShieldHpToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 233: range 00000000136130EA-0000000013613114
void __cdecl SetCrystalShieldHpToOverrideMapImpl::~SetCrystalShieldHpToOverrideMapImpl(
        SetCrystalShieldHpToOverrideMapImpl *const this)
{
  SetCrystalShieldHpToOverrideMapImpl::~SetCrystalShieldHpToOverrideMapImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 233: range 000000001361309C-00000000136130E9
void __cdecl SetCrystalShieldHpToOverrideMapImpl::~SetCrystalShieldHpToOverrideMapImpl(
        SetCrystalShieldHpToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetCrystalShieldHpToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetCrystalShieldHpToOverrideMap::~SetCrystalShieldHpToOverrideMap(this);
};

// Line 235: range 00000000131D16A0-00000000131D16E8
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetCrystalShieldHpToOverrideMapImpl::clone(
        SetCrystalShieldHpToOverrideMapImpl *const this)
{
  SetCrystalShieldHpToOverrideMapImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<data::SetCrystalShieldHpToOverrideMap> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<data::SetCrystalShieldHpToOverrideMap,SetCrystalShieldHpToOverrideMapImpl &>(
    (SetCrystalShieldHpToOverrideMapImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<data::SetCrystalShieldHpToOverrideMap,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<data::SetCrystalShieldHpToOverrideMap>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 239: range 00000000135A4BEC-00000000135A4C39
void __cdecl SetSystemValueToOverrideMapImpl::SetSystemValueToOverrideMapImpl(
        SetSystemValueToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetSystemValueToOverrideMap::SetSystemValueToOverrideMap(this);
  v1 = (int (**)(...))(&`vtable for'SetSystemValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 239: range 0000000013595296-00000000135952EE
void __cdecl SetSystemValueToOverrideMapImpl::SetSystemValueToOverrideMapImpl(
        SetSystemValueToOverrideMapImpl *const this,
        const SetSystemValueToOverrideMapImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetSystemValueToOverrideMap::SetSystemValueToOverrideMap(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetSystemValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 239: range 0000000013613070-000000001361309A
void __cdecl SetSystemValueToOverrideMapImpl::~SetSystemValueToOverrideMapImpl(
        SetSystemValueToOverrideMapImpl *const this)
{
  SetSystemValueToOverrideMapImpl::~SetSystemValueToOverrideMapImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 239: range 0000000013613022-000000001361306F
void __cdecl SetSystemValueToOverrideMapImpl::~SetSystemValueToOverrideMapImpl(
        SetSystemValueToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetSystemValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetSystemValueToOverrideMap::~SetSystemValueToOverrideMap(this);
};

// Line 241: range 00000000131D1726-00000000131D176E
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetSystemValueToOverrideMapImpl::clone(
        SetSystemValueToOverrideMapImpl *const this)
{
  SetSystemValueToOverrideMapImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetSystemValueToOverrideMapImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetSystemValueToOverrideMapImpl,SetSystemValueToOverrideMapImpl&>(
    (SetSystemValueToOverrideMapImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetSystemValueToOverrideMapImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetSystemValueToOverrideMapImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 245: range 00000000135956FA-0000000013595752
void __cdecl SetGlobalValueByTargetDistanceImpl::SetGlobalValueByTargetDistanceImpl(
        SetGlobalValueByTargetDistanceImpl *const this,
        const SetGlobalValueByTargetDistanceImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetGlobalValueByTargetDistance::SetGlobalValueByTargetDistance(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetGlobalValueByTargetDistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 245: range 0000000013612FF6-0000000013613020
void __cdecl SetGlobalValueByTargetDistanceImpl::~SetGlobalValueByTargetDistanceImpl(
        SetGlobalValueByTargetDistanceImpl *const this)
{
  SetGlobalValueByTargetDistanceImpl::~SetGlobalValueByTargetDistanceImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 245: range 0000000013612FA8-0000000013612FF5
void __cdecl SetGlobalValueByTargetDistanceImpl::~SetGlobalValueByTargetDistanceImpl(
        SetGlobalValueByTargetDistanceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetGlobalValueByTargetDistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetGlobalValueByTargetDistance::~SetGlobalValueByTargetDistance(this);
};

// Line 247: range 00000000131D17AC-00000000131D17F4
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetGlobalValueByTargetDistanceImpl::clone(
        SetGlobalValueByTargetDistanceImpl *const this)
{
  SetGlobalValueByTargetDistanceImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetGlobalValueByTargetDistanceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetGlobalValueByTargetDistanceImpl,SetGlobalValueByTargetDistanceImpl&>(
    (SetGlobalValueByTargetDistanceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetGlobalValueByTargetDistanceImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetGlobalValueByTargetDistanceImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 251: range 0000000013595ADE-0000000013595B36
void __cdecl SetCrashDamageImpl::SetCrashDamageImpl(SetCrashDamageImpl *const this, const SetCrashDamageImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetCrashDamage::SetCrashDamage(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetCrashDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 251: range 0000000013612F7C-0000000013612FA6
void __cdecl SetCrashDamageImpl::~SetCrashDamageImpl(SetCrashDamageImpl *const this)
{
  SetCrashDamageImpl::~SetCrashDamageImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 251: range 0000000013612F2E-0000000013612F7B
void __cdecl SetCrashDamageImpl::~SetCrashDamageImpl(SetCrashDamageImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetCrashDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetCrashDamage::~SetCrashDamage(this);
};

// Line 253: range 00000000131D1832-00000000131D187A
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetCrashDamageImpl::clone(SetCrashDamageImpl *const this)
{
  SetCrashDamageImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetCrashDamageImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetCrashDamageImpl,SetCrashDamageImpl&>((SetCrashDamageImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetCrashDamageImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetCrashDamageImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 257: range 0000000013595F06-0000000013595F5E
void __cdecl ResetAbilitySpecialImpl::ResetAbilitySpecialImpl(
        ResetAbilitySpecialImpl *const this,
        const ResetAbilitySpecialImpl *a2)
{
  int (**v2)(...); // rdx

  data::ResetAbilitySpecial::ResetAbilitySpecial(this, a2);
  v2 = (int (**)(...))(&`vtable for'ResetAbilitySpecialImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 257: range 0000000013612EB4-0000000013612F01
void __cdecl ResetAbilitySpecialImpl::~ResetAbilitySpecialImpl(ResetAbilitySpecialImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ResetAbilitySpecialImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ResetAbilitySpecial::~ResetAbilitySpecial(this);
};

// Line 257: range 0000000013612F02-0000000013612F2C
void __cdecl ResetAbilitySpecialImpl::~ResetAbilitySpecialImpl(ResetAbilitySpecialImpl *const this)
{
  ResetAbilitySpecialImpl::~ResetAbilitySpecialImpl(this);
  operator delete(this, 0xC8uLL);
};

// Line 259: range 00000000131D18B8-00000000131D1900
std::shared_ptr<data::ConfigAbilityAction> __cdecl ResetAbilitySpecialImpl::clone(ResetAbilitySpecialImpl *const this)
{
  ResetAbilitySpecialImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ResetAbilitySpecialImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ResetAbilitySpecialImpl,ResetAbilitySpecialImpl&>(
    (ResetAbilitySpecialImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ResetAbilitySpecialImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ResetAbilitySpecialImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 263: range 0000000013596374-00000000135963CC
void __cdecl ChangeTagImpl::ChangeTagImpl(ChangeTagImpl *const this, const ChangeTagImpl *a2)
{
  int (**v2)(...); // rdx

  data::ChangeTag::ChangeTag(this, a2);
  v2 = (int (**)(...))(&`vtable for'ChangeTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 263: range 0000000013612E88-0000000013612EB2
void __cdecl ChangeTagImpl::~ChangeTagImpl(ChangeTagImpl *const this)
{
  ChangeTagImpl::~ChangeTagImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 263: range 0000000013612E3A-0000000013612E87
void __cdecl ChangeTagImpl::~ChangeTagImpl(ChangeTagImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChangeTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ChangeTag::~ChangeTag(this);
};

// Line 265: range 00000000131D193E-00000000131D1986
std::shared_ptr<data::ConfigAbilityAction> __cdecl ChangeTagImpl::clone(ChangeTagImpl *const this)
{
  ChangeTagImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ChangeTagImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ChangeTagImpl,ChangeTagImpl&>((ChangeTagImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ChangeTagImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ChangeTagImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 269: range 00000000135968B0-0000000013596908
void __cdecl CopyGlobalValueImpl::CopyGlobalValueImpl(CopyGlobalValueImpl *const this, const CopyGlobalValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::CopyGlobalValue::CopyGlobalValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'CopyGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 269: range 0000000013612E0E-0000000013612E38
void __cdecl CopyGlobalValueImpl::~CopyGlobalValueImpl(CopyGlobalValueImpl *const this)
{
  CopyGlobalValueImpl::~CopyGlobalValueImpl(this);
  operator delete(this, 0xD0uLL);
};

// Line 269: range 0000000013612DC0-0000000013612E0D
void __cdecl CopyGlobalValueImpl::~CopyGlobalValueImpl(CopyGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CopyGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::CopyGlobalValue::~CopyGlobalValue(this);
};

// Line 271: range 00000000131D19C4-00000000131D1A0C
std::shared_ptr<data::ConfigAbilityAction> __cdecl CopyGlobalValueImpl::clone(CopyGlobalValueImpl *const this)
{
  CopyGlobalValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<CopyGlobalValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<CopyGlobalValueImpl,CopyGlobalValueImpl&>((CopyGlobalValueImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<CopyGlobalValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<CopyGlobalValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 276: range 0000000013596C94-0000000013596CEC
void __cdecl ServerMonsterLogImpl::ServerMonsterLogImpl(
        ServerMonsterLogImpl *const this,
        const ServerMonsterLogImpl *a2)
{
  int (**v2)(...); // rdx

  data::ServerMonsterLog::ServerMonsterLog(this, a2);
  v2 = (int (**)(...))(&`vtable for'ServerMonsterLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 276: range 0000000013612D94-0000000013612DBE
void __cdecl ServerMonsterLogImpl::~ServerMonsterLogImpl(ServerMonsterLogImpl *const this)
{
  ServerMonsterLogImpl::~ServerMonsterLogImpl(this);
  operator delete(this, 0xA0uLL);
};

// Line 276: range 0000000013612D46-0000000013612D93
void __cdecl ServerMonsterLogImpl::~ServerMonsterLogImpl(ServerMonsterLogImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServerMonsterLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ServerMonsterLog::~ServerMonsterLog(this);
};

// Line 278: range 00000000131D1A4A-00000000131D1A92
std::shared_ptr<data::ConfigAbilityAction> __cdecl ServerMonsterLogImpl::clone(ServerMonsterLogImpl *const this)
{
  ServerMonsterLogImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ServerMonsterLogImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ServerMonsterLogImpl,ServerMonsterLogImpl&>((ServerMonsterLogImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ServerMonsterLogImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ServerMonsterLogImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 282: range 00000000135A6396-00000000135A63E3
void __cdecl ReviveStaminaImpl::ReviveStaminaImpl(ReviveStaminaImpl *const this)
{
  int (**v1)(...); // rdx

  data::ReviveStamina::ReviveStamina(this);
  v1 = (int (**)(...))(&`vtable for'ReviveStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 282: range 000000001359707E-00000000135970D6
void __cdecl ReviveStaminaImpl::ReviveStaminaImpl(ReviveStaminaImpl *const this, const ReviveStaminaImpl *a2)
{
  int (**v2)(...); // rdx

  data::ReviveStamina::ReviveStamina(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReviveStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 282: range 0000000013612D1A-0000000013612D44
void __cdecl ReviveStaminaImpl::~ReviveStaminaImpl(ReviveStaminaImpl *const this)
{
  ReviveStaminaImpl::~ReviveStaminaImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 282: range 0000000013612CCC-0000000013612D19
void __cdecl ReviveStaminaImpl::~ReviveStaminaImpl(ReviveStaminaImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviveStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ReviveStamina::~ReviveStamina(this);
};

// Line 284: range 00000000131D1AD0-00000000131D1B18
std::shared_ptr<data::ConfigAbilityAction> __cdecl ReviveStaminaImpl::clone(ReviveStaminaImpl *const this)
{
  ReviveStaminaImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ReviveStaminaImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ReviveStaminaImpl,ReviveStaminaImpl&>((ReviveStaminaImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ReviveStaminaImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ReviveStaminaImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 288: range 00000000135A672E-00000000135A677B
void __cdecl DeductStaminaImpl::DeductStaminaImpl(DeductStaminaImpl *const this)
{
  int (**v1)(...); // rdx

  data::DeductStamina::DeductStamina(this);
  v1 = (int (**)(...))(&`vtable for'DeductStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 288: range 00000000135974DC-0000000013597534
void __cdecl DeductStaminaImpl::DeductStaminaImpl(DeductStaminaImpl *const this, const DeductStaminaImpl *a2)
{
  int (**v2)(...); // rdx

  data::DeductStamina::DeductStamina(this, a2);
  v2 = (int (**)(...))(&`vtable for'DeductStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 288: range 0000000013612C52-0000000013612C9F
void __cdecl DeductStaminaImpl::~DeductStaminaImpl(DeductStaminaImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DeductStaminaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DeductStamina::~DeductStamina(this);
};

// Line 288: range 0000000013612CA0-0000000013612CCA
void __cdecl DeductStaminaImpl::~DeductStaminaImpl(DeductStaminaImpl *const this)
{
  DeductStaminaImpl::~DeductStaminaImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 290: range 00000000131D1B56-00000000131D1B9E
std::shared_ptr<data::ConfigAbilityAction> __cdecl DeductStaminaImpl::clone(DeductStaminaImpl *const this)
{
  DeductStaminaImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<DeductStaminaImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DeductStaminaImpl,DeductStaminaImpl&>((DeductStaminaImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<DeductStaminaImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<DeductStaminaImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 294: range 00000000135A6AAA-00000000135A6AF7
void __cdecl KillServerGadgetImpl::KillServerGadgetImpl(KillServerGadgetImpl *const this)
{
  int (**v1)(...); // rdx

  data::KillServerGadget::KillServerGadget(this);
  v1 = (int (**)(...))(&`vtable for'KillServerGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 294: range 0000000013597942-000000001359799A
void __cdecl KillServerGadgetImpl::KillServerGadgetImpl(
        KillServerGadgetImpl *const this,
        const KillServerGadgetImpl *a2)
{
  int (**v2)(...); // rdx

  data::KillServerGadget::KillServerGadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'KillServerGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 294: range 0000000013612BD8-0000000013612C25
void __cdecl KillServerGadgetImpl::~KillServerGadgetImpl(KillServerGadgetImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'KillServerGadgetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::KillServerGadget::~KillServerGadget(this);
};

// Line 294: range 0000000013612C26-0000000013612C50
void __cdecl KillServerGadgetImpl::~KillServerGadgetImpl(KillServerGadgetImpl *const this)
{
  KillServerGadgetImpl::~KillServerGadgetImpl(this);
  operator delete(this, 0x98uLL);
};

// Line 296: range 00000000131D1BDC-00000000131D1C24
std::shared_ptr<data::ConfigAbilityAction> __cdecl KillServerGadgetImpl::clone(KillServerGadgetImpl *const this)
{
  KillServerGadgetImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<KillServerGadgetImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<KillServerGadgetImpl,KillServerGadgetImpl&>((KillServerGadgetImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<KillServerGadgetImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<KillServerGadgetImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 300: range 00000000135A6E1E-00000000135A6E6B
void __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::GetTeamTotalMaxEnergyToOverridemapImpl(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this)
{
  int (**v1)(...); // rdx

  data::GetTeamTotalMaxEnergyToOverridemap::GetTeamTotalMaxEnergyToOverridemap(this);
  v1 = (int (**)(...))(&`vtable for'GetTeamTotalMaxEnergyToOverridemapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 300: range 0000000013597DAE-0000000013597E06
void __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::GetTeamTotalMaxEnergyToOverridemapImpl(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this,
        const GetTeamTotalMaxEnergyToOverridemapImpl *a2)
{
  int (**v2)(...); // rdx

  data::GetTeamTotalMaxEnergyToOverridemap::GetTeamTotalMaxEnergyToOverridemap(this, a2);
  v2 = (int (**)(...))(&`vtable for'GetTeamTotalMaxEnergyToOverridemapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 300: range 0000000013612B5E-0000000013612BAB
void __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::~GetTeamTotalMaxEnergyToOverridemapImpl(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GetTeamTotalMaxEnergyToOverridemapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::GetTeamTotalMaxEnergyToOverridemap::~GetTeamTotalMaxEnergyToOverridemap(this);
};

// Line 300: range 0000000013612BAC-0000000013612BD6
void __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::~GetTeamTotalMaxEnergyToOverridemapImpl(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this)
{
  GetTeamTotalMaxEnergyToOverridemapImpl::~GetTeamTotalMaxEnergyToOverridemapImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 302: range 00000000131D1C62-00000000131D1CAA
std::shared_ptr<data::ConfigAbilityAction> __cdecl GetTeamTotalMaxEnergyToOverridemapImpl::clone(
        GetTeamTotalMaxEnergyToOverridemapImpl *const this)
{
  GetTeamTotalMaxEnergyToOverridemapImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GetTeamTotalMaxEnergyToOverridemapImpl,GetTeamTotalMaxEnergyToOverridemapImpl&>(
    (GetTeamTotalMaxEnergyToOverridemapImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<GetTeamTotalMaxEnergyToOverridemapImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 306: range 00000000135A7180-00000000135A71CD
void __cdecl SetOvergrowDamgeToGlobalValueImpl::SetOvergrowDamgeToGlobalValueImpl(
        SetOvergrowDamgeToGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetOvergrowDamgeToGlobalValue::SetOvergrowDamgeToGlobalValue(this);
  v1 = (int (**)(...))(&`vtable for'SetOvergrowDamgeToGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 306: range 00000000135981BC-0000000013598214
void __cdecl SetOvergrowDamgeToGlobalValueImpl::SetOvergrowDamgeToGlobalValueImpl(
        SetOvergrowDamgeToGlobalValueImpl *const this,
        const SetOvergrowDamgeToGlobalValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetOvergrowDamgeToGlobalValue::SetOvergrowDamgeToGlobalValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetOvergrowDamgeToGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 306: range 0000000013612AE4-0000000013612B31
void __cdecl SetOvergrowDamgeToGlobalValueImpl::~SetOvergrowDamgeToGlobalValueImpl(
        SetOvergrowDamgeToGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetOvergrowDamgeToGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetOvergrowDamgeToGlobalValue::~SetOvergrowDamgeToGlobalValue(this);
};

// Line 306: range 0000000013612B32-0000000013612B5C
void __cdecl SetOvergrowDamgeToGlobalValueImpl::~SetOvergrowDamgeToGlobalValueImpl(
        SetOvergrowDamgeToGlobalValueImpl *const this)
{
  SetOvergrowDamgeToGlobalValueImpl::~SetOvergrowDamgeToGlobalValueImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 308: range 00000000131D1CE8-00000000131D1D30
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetOvergrowDamgeToGlobalValueImpl::clone(
        SetOvergrowDamgeToGlobalValueImpl *const this)
{
  SetOvergrowDamgeToGlobalValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetOvergrowDamgeToGlobalValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetOvergrowDamgeToGlobalValueImpl,SetOvergrowDamgeToGlobalValueImpl&>(
    (SetOvergrowDamgeToGlobalValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetOvergrowDamgeToGlobalValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetOvergrowDamgeToGlobalValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 312: range 000000001359865C-00000000135986B4
void __cdecl SetRegionalPlayVarValueImpl::SetRegionalPlayVarValueImpl(
        SetRegionalPlayVarValueImpl *const this,
        const SetRegionalPlayVarValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetRegionalPlayVarValue::SetRegionalPlayVarValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 312: range 0000000013612A6A-0000000013612AB7
void __cdecl SetRegionalPlayVarValueImpl::~SetRegionalPlayVarValueImpl(SetRegionalPlayVarValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetRegionalPlayVarValue::~SetRegionalPlayVarValue(this);
};

// Line 312: range 0000000013612AB8-0000000013612AE2
void __cdecl SetRegionalPlayVarValueImpl::~SetRegionalPlayVarValueImpl(SetRegionalPlayVarValueImpl *const this)
{
  SetRegionalPlayVarValueImpl::~SetRegionalPlayVarValueImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 314: range 00000000131D1D6E-00000000131D1DB6
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetRegionalPlayVarValueImpl::clone(
        SetRegionalPlayVarValueImpl *const this)
{
  SetRegionalPlayVarValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetRegionalPlayVarValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetRegionalPlayVarValueImpl,SetRegionalPlayVarValueImpl&>(
    (SetRegionalPlayVarValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetRegionalPlayVarValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetRegionalPlayVarValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 319: range 0000000013598AFC-0000000013598B54
void __cdecl AddRegionalPlayVarValueImpl::AddRegionalPlayVarValueImpl(
        AddRegionalPlayVarValueImpl *const this,
        const AddRegionalPlayVarValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddRegionalPlayVarValue::AddRegionalPlayVarValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 319: range 0000000013612A3E-0000000013612A68
void __cdecl AddRegionalPlayVarValueImpl::~AddRegionalPlayVarValueImpl(AddRegionalPlayVarValueImpl *const this)
{
  AddRegionalPlayVarValueImpl::~AddRegionalPlayVarValueImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 319: range 00000000136129F0-0000000013612A3D
void __cdecl AddRegionalPlayVarValueImpl::~AddRegionalPlayVarValueImpl(AddRegionalPlayVarValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AddRegionalPlayVarValue::~AddRegionalPlayVarValue(this);
};

// Line 321: range 00000000131D1DF4-00000000131D1E3C
std::shared_ptr<data::ConfigAbilityAction> __cdecl AddRegionalPlayVarValueImpl::clone(
        AddRegionalPlayVarValueImpl *const this)
{
  AddRegionalPlayVarValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AddRegionalPlayVarValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddRegionalPlayVarValueImpl,AddRegionalPlayVarValueImpl&>(
    (AddRegionalPlayVarValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AddRegionalPlayVarValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AddRegionalPlayVarValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 326: range 00000000135A7C58-00000000135A7CA5
void __cdecl SetLogicStateValueImpl::SetLogicStateValueImpl(SetLogicStateValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetLogicStateValue::SetLogicStateValue(this);
  v1 = (int (**)(...))(&`vtable for'SetLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 326: range 0000000013598F2A-0000000013598F82
void __cdecl SetLogicStateValueImpl::SetLogicStateValueImpl(
        SetLogicStateValueImpl *const this,
        const SetLogicStateValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetLogicStateValue::SetLogicStateValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 326: range 00000000136129C4-00000000136129EE
void __cdecl SetLogicStateValueImpl::~SetLogicStateValueImpl(SetLogicStateValueImpl *const this)
{
  SetLogicStateValueImpl::~SetLogicStateValueImpl(this);
  operator delete(this, 0xC8uLL);
};

// Line 326: range 0000000013612976-00000000136129C3
void __cdecl SetLogicStateValueImpl::~SetLogicStateValueImpl(SetLogicStateValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetLogicStateValue::~SetLogicStateValue(this);
};

// Line 328: range 00000000131D1E7A-00000000131D1EC2
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetLogicStateValueImpl::clone(SetLogicStateValueImpl *const this)
{
  SetLogicStateValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetLogicStateValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetLogicStateValueImpl,SetLogicStateValueImpl&>((SetLogicStateValueImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetLogicStateValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetLogicStateValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 333: range 00000000135A806E-00000000135A80BB
void __cdecl AddLogicStateValueImpl::AddLogicStateValueImpl(AddLogicStateValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddLogicStateValue::AddLogicStateValue(this);
  v1 = (int (**)(...))(&`vtable for'AddLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 333: range 0000000013599474-00000000135994CC
void __cdecl AddLogicStateValueImpl::AddLogicStateValueImpl(
        AddLogicStateValueImpl *const this,
        const AddLogicStateValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddLogicStateValue::AddLogicStateValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 333: range 000000001361294A-0000000013612974
void __cdecl AddLogicStateValueImpl::~AddLogicStateValueImpl(AddLogicStateValueImpl *const this)
{
  AddLogicStateValueImpl::~AddLogicStateValueImpl(this);
  operator delete(this, 0x110uLL);
};

// Line 333: range 00000000136128FC-0000000013612949
void __cdecl AddLogicStateValueImpl::~AddLogicStateValueImpl(AddLogicStateValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddLogicStateValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AddLogicStateValue::~AddLogicStateValue(this);
};

// Line 335: range 00000000131D1F00-00000000131D1F48
std::shared_ptr<data::ConfigAbilityAction> __cdecl AddLogicStateValueImpl::clone(AddLogicStateValueImpl *const this)
{
  AddLogicStateValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AddLogicStateValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddLogicStateValueImpl,AddLogicStateValueImpl&>((AddLogicStateValueImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AddLogicStateValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AddLogicStateValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 340: range 000000001359996C-00000000135999C4
void __cdecl AttackByEnergyImpl::AttackByEnergyImpl(AttackByEnergyImpl *const this, const AttackByEnergyImpl *a2)
{
  int (**v2)(...); // rdx

  data::AttackByEnergy::AttackByEnergy(this, a2);
  v2 = (int (**)(...))(&`vtable for'AttackByEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 340: range 0000000013612882-00000000136128CF
void __cdecl AttackByEnergyImpl::~AttackByEnergyImpl(AttackByEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AttackByEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AttackByEnergy::~AttackByEnergy(this);
};

// Line 340: range 00000000136128D0-00000000136128FA
void __cdecl AttackByEnergyImpl::~AttackByEnergyImpl(AttackByEnergyImpl *const this)
{
  AttackByEnergyImpl::~AttackByEnergyImpl(this);
  operator delete(this, 0xB0uLL);
};

// Line 342: range 00000000131D1F86-00000000131D1FCE
std::shared_ptr<data::ConfigAbilityAction> __cdecl AttackByEnergyImpl::clone(AttackByEnergyImpl *const this)
{
  AttackByEnergyImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AttackByEnergyImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AttackByEnergyImpl,AttackByEnergyImpl&>((AttackByEnergyImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AttackByEnergyImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AttackByEnergyImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 346: range 0000000013599FFC-000000001359A054
void __cdecl ServerLuaTriggerEventImpl::ServerLuaTriggerEventImpl(
        ServerLuaTriggerEventImpl *const this,
        const ServerLuaTriggerEventImpl *a2)
{
  int (**v2)(...); // rdx

  data::ServerLuaTriggerEvent::ServerLuaTriggerEvent(this, a2);
  v2 = (int (**)(...))(&`vtable for'ServerLuaTriggerEventImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 346: range 0000000013612856-0000000013612880
void __cdecl ServerLuaTriggerEventImpl::~ServerLuaTriggerEventImpl(ServerLuaTriggerEventImpl *const this)
{
  ServerLuaTriggerEventImpl::~ServerLuaTriggerEventImpl(this);
  operator delete(this, 0x130uLL);
};

// Line 346: range 0000000013612808-0000000013612855
void __cdecl ServerLuaTriggerEventImpl::~ServerLuaTriggerEventImpl(ServerLuaTriggerEventImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServerLuaTriggerEventImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ServerLuaTriggerEvent::~ServerLuaTriggerEvent(this);
};

// Line 348: range 00000000131D200C-00000000131D2054
std::shared_ptr<data::ConfigAbilityAction> __cdecl ServerLuaTriggerEventImpl::clone(
        ServerLuaTriggerEventImpl *const this)
{
  ServerLuaTriggerEventImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ServerLuaTriggerEventImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ServerLuaTriggerEventImpl,ServerLuaTriggerEventImpl&>(
    (ServerLuaTriggerEventImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ServerLuaTriggerEventImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ServerLuaTriggerEventImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 352: range 000000001359A49A-000000001359A4F2
void __cdecl AvatarShareCDSkillStartImpl::AvatarShareCDSkillStartImpl(
        AvatarShareCDSkillStartImpl *const this,
        const AvatarShareCDSkillStartImpl *a2)
{
  int (**v2)(...); // rdx

  data::AvatarShareCDSkillStart::AvatarShareCDSkillStart(this, a2);
  v2 = (int (**)(...))(&`vtable for'AvatarShareCDSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 352: range 00000000136127DC-0000000013612806
void __cdecl AvatarShareCDSkillStartImpl::~AvatarShareCDSkillStartImpl(AvatarShareCDSkillStartImpl *const this)
{
  AvatarShareCDSkillStartImpl::~AvatarShareCDSkillStartImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 352: range 000000001361278E-00000000136127DB
void __cdecl AvatarShareCDSkillStartImpl::~AvatarShareCDSkillStartImpl(AvatarShareCDSkillStartImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarShareCDSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AvatarShareCDSkillStart::~AvatarShareCDSkillStart(this);
};

// Line 354: range 00000000131D2092-00000000131D20DA
std::shared_ptr<data::ConfigAbilityAction> __cdecl AvatarShareCDSkillStartImpl::clone(
        AvatarShareCDSkillStartImpl *const this)
{
  AvatarShareCDSkillStartImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<AvatarShareCDSkillStartImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AvatarShareCDSkillStartImpl,AvatarShareCDSkillStartImpl&>(
    (AvatarShareCDSkillStartImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<AvatarShareCDSkillStartImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<AvatarShareCDSkillStartImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 359: range 000000001359A87E-000000001359A8D6
void __cdecl DropSubfieldImpl::DropSubfieldImpl(DropSubfieldImpl *const this, const DropSubfieldImpl *a2)
{
  int (**v2)(...); // rdx

  data::DropSubfield::DropSubfield(this, a2);
  v2 = (int (**)(...))(&`vtable for'DropSubfieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 359: range 0000000013612714-0000000013612761
void __cdecl DropSubfieldImpl::~DropSubfieldImpl(DropSubfieldImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DropSubfieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DropSubfield::~DropSubfield(this);
};

// Line 359: range 0000000013612762-000000001361278C
void __cdecl DropSubfieldImpl::~DropSubfieldImpl(DropSubfieldImpl *const this)
{
  DropSubfieldImpl::~DropSubfieldImpl(this);
  operator delete(this, 0xA8uLL);
};

// Line 361: range 00000000131D2118-00000000131D2160
std::shared_ptr<data::ConfigAbilityAction> __cdecl DropSubfieldImpl::clone(DropSubfieldImpl *const this)
{
  DropSubfieldImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<DropSubfieldImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DropSubfieldImpl,DropSubfieldImpl&>((DropSubfieldImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<DropSubfieldImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<DropSubfieldImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 366: range 00000000135A9332-00000000135A937F
void __cdecl ChangeGadgetStateImpl::ChangeGadgetStateImpl(ChangeGadgetStateImpl *const this)
{
  int (**v1)(...); // rdx

  data::ChangeGadgetState::ChangeGadgetState(this);
  v1 = (int (**)(...))(&`vtable for'ChangeGadgetStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 366: range 000000001359AC86-000000001359ACDE
void __cdecl ChangeGadgetStateImpl::ChangeGadgetStateImpl(
        ChangeGadgetStateImpl *const this,
        const ChangeGadgetStateImpl *a2)
{
  int (**v2)(...); // rdx

  data::ChangeGadgetState::ChangeGadgetState(this, a2);
  v2 = (int (**)(...))(&`vtable for'ChangeGadgetStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 366: range 000000001361269A-00000000136126E7
void __cdecl ChangeGadgetStateImpl::~ChangeGadgetStateImpl(ChangeGadgetStateImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ChangeGadgetStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ChangeGadgetState::~ChangeGadgetState(this);
};

// Line 366: range 00000000136126E8-0000000013612712
void __cdecl ChangeGadgetStateImpl::~ChangeGadgetStateImpl(ChangeGadgetStateImpl *const this)
{
  ChangeGadgetStateImpl::~ChangeGadgetStateImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 368: range 00000000131D219E-00000000131D21E6
std::shared_ptr<data::ConfigAbilityAction> __cdecl ChangeGadgetStateImpl::clone(ChangeGadgetStateImpl *const this)
{
  ChangeGadgetStateImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<ChangeGadgetStateImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ChangeGadgetStateImpl,ChangeGadgetStateImpl&>((ChangeGadgetStateImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<ChangeGadgetStateImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<ChangeGadgetStateImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 372: range 00000000135A971C-00000000135A9769
void __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::SetTeamFightPropertyToOverrideMapKeyImpl(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetTeamFightPropertyToOverrideMapKey::SetTeamFightPropertyToOverrideMapKey(this);
  v1 = (int (**)(...))(&`vtable for'SetTeamFightPropertyToOverrideMapKeyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 372: range 000000001359B244-000000001359B29C
void __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::SetTeamFightPropertyToOverrideMapKeyImpl(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this,
        const SetTeamFightPropertyToOverrideMapKeyImpl *a2)
{
  int (**v2)(...); // rdx

  data::SetTeamFightPropertyToOverrideMapKey::SetTeamFightPropertyToOverrideMapKey(this, a2);
  v2 = (int (**)(...))(&`vtable for'SetTeamFightPropertyToOverrideMapKeyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 372: range 000000001361266E-0000000013612698
void __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::~SetTeamFightPropertyToOverrideMapKeyImpl(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this)
{
  SetTeamFightPropertyToOverrideMapKeyImpl::~SetTeamFightPropertyToOverrideMapKeyImpl(this);
  operator delete(this, 0x118uLL);
};

// Line 372: range 0000000013612620-000000001361266D
void __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::~SetTeamFightPropertyToOverrideMapKeyImpl(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SetTeamFightPropertyToOverrideMapKeyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::SetTeamFightPropertyToOverrideMapKey::~SetTeamFightPropertyToOverrideMapKey(this);
};

// Line 374: range 00000000131D2224-00000000131D226C
std::shared_ptr<data::ConfigAbilityAction> __cdecl SetTeamFightPropertyToOverrideMapKeyImpl::clone(
        SetTeamFightPropertyToOverrideMapKeyImpl *const this)
{
  SetTeamFightPropertyToOverrideMapKeyImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityAction> result; // rax
  std::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<SetTeamFightPropertyToOverrideMapKeyImpl,SetTeamFightPropertyToOverrideMapKeyImpl&>(
    (SetTeamFightPropertyToOverrideMapKeyImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityAction>::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl,void>(
    (std::shared_ptr<data::ConfigAbilityAction> *const)this,
    &__r);
  std::shared_ptr<SetTeamFightPropertyToOverrideMapKeyImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 851: range 00000000135A8CA0-00000000135A8CED
void __cdecl AvatarShareCDSkillStartImpl::AvatarShareCDSkillStartImpl(AvatarShareCDSkillStartImpl *const this)
{
  int (**v1)(...); // rdx

  data::AvatarShareCDSkillStart::AvatarShareCDSkillStart(this);
  v1 = (int (**)(...))(&`vtable for'AvatarShareCDSkillStartImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2000: range 00000000135A5D0E-00000000135A5D5B
void __cdecl CopyGlobalValueImpl::CopyGlobalValueImpl(CopyGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::CopyGlobalValue::CopyGlobalValue(this);
  v1 = (int (**)(...))(&`vtable for'CopyGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2286: range 00000000135A3CD2-00000000135A3D1F
void __cdecl SetGlobalValueToOverrideMapImpl::SetGlobalValueToOverrideMapImpl(
        SetGlobalValueToOverrideMapImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetGlobalValueToOverrideMap::SetGlobalValueToOverrideMap(this);
  v1 = (int (**)(...))(&`vtable for'SetGlobalValueToOverrideMapImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2382: range 00000000135A441A-00000000135A4467
void __cdecl SetOverrideMapValueImpl::SetOverrideMapValueImpl(SetOverrideMapValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetOverrideMapValue::SetOverrideMapValue(this);
  v1 = (int (**)(...))(&`vtable for'SetOverrideMapValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2512: range 00000000135A4F5C-00000000135A4FA9
void __cdecl SetGlobalValueByTargetDistanceImpl::SetGlobalValueByTargetDistanceImpl(
        SetGlobalValueByTargetDistanceImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetGlobalValueByTargetDistance::SetGlobalValueByTargetDistance(this);
  v1 = (int (**)(...))(&`vtable for'SetGlobalValueByTargetDistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3077: range 00000000135A0FA4-00000000135A0FF1
void __cdecl LoseHPImpl::LoseHPImpl(LoseHPImpl *const this)
{
  int (**v1)(...); // rdx

  data::LoseHP::LoseHP(this);
  v1 = (int (**)(...))(&`vtable for'LoseHPImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3124: range 000000001359D3C4-000000001359D411
void __cdecl ReviveAvatarImpl::ReviveAvatarImpl(ReviveAvatarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ReviveAvatar::ReviveAvatar(this);
  v1 = (int (**)(...))(&`vtable for'ReviveAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3155: range 000000001359D7F8-000000001359D845
void __cdecl ReviveDeadAvatarImpl::ReviveDeadAvatarImpl(ReviveDeadAvatarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ReviveDeadAvatar::ReviveDeadAvatar(this);
  v1 = (int (**)(...))(&`vtable for'ReviveDeadAvatarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3932: range 000000001359CC5C-000000001359CCA9
void __cdecl DebugLogImpl::DebugLogImpl(DebugLogImpl *const this)
{
  int (**v1)(...); // rdx

  data::DebugLog::DebugLog(this);
  v1 = (int (**)(...))(&`vtable for'DebugLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 4561: range 000000001359EDFE-000000001359EE4B
void __cdecl TriggerDropEquipPartsImpl::TriggerDropEquipPartsImpl(TriggerDropEquipPartsImpl *const this)
{
  int (**v1)(...); // rdx

  data::TriggerDropEquipParts::TriggerDropEquipParts(this);
  v1 = (int (**)(...))(&`vtable for'TriggerDropEquipPartsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 5241: range 00000000135A528C-00000000135A52D9
void __cdecl SetCrashDamageImpl::SetCrashDamageImpl(SetCrashDamageImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetCrashDamage::SetCrashDamage(this);
  v1 = (int (**)(...))(&`vtable for'SetCrashDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 6224: range 00000000135A181C-00000000135A1869
void __cdecl AttachAbilityStateResistanceImpl::AttachAbilityStateResistanceImpl(
        AttachAbilityStateResistanceImpl *const this)
{
  int (**v1)(...); // rdx

  data::AttachAbilityStateResistance::AttachAbilityStateResistance(this);
  v1 = (int (**)(...))(&`vtable for'AttachAbilityStateResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 6382: range 00000000135A8FD0-00000000135A901D
void __cdecl DropSubfieldImpl::DropSubfieldImpl(DropSubfieldImpl *const this)
{
  int (**v1)(...); // rdx

  data::DropSubfield::DropSubfield(this);
  v1 = (int (**)(...))(&`vtable for'DropSubfieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 7788: range 000000001359FFDC-00000000135A0029
void __cdecl AddServerBuffImpl::AddServerBuffImpl(AddServerBuffImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddServerBuff::AddServerBuff(this);
  v1 = (int (**)(...))(&`vtable for'AddServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 7826: range 00000000135A0382-00000000135A03CF
void __cdecl RemoveServerBuffImpl::RemoveServerBuffImpl(RemoveServerBuffImpl *const this)
{
  int (**v1)(...); // rdx

  data::RemoveServerBuff::RemoveServerBuff(this);
  v1 = (int (**)(...))(&`vtable for'RemoveServerBuffImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 7983: range 00000000135A55CE-00000000135A561B
void __cdecl ResetAbilitySpecialImpl::ResetAbilitySpecialImpl(ResetAbilitySpecialImpl *const this)
{
  int (**v1)(...); // rdx

  data::ResetAbilitySpecial::ResetAbilitySpecial(this);
  v1 = (int (**)(...))(&`vtable for'ResetAbilitySpecialImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 9186: range 00000000135A0AC6-00000000135A0B13
void __cdecl UseItemImpl::UseItemImpl(UseItemImpl *const this)
{
  int (**v1)(...); // rdx

  data::UseItem::UseItem(this);
  v1 = (int (**)(...))(&`vtable for'UseItemImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 9487: range 00000000135A593E-00000000135A598B
void __cdecl ChangeTagImpl::ChangeTagImpl(ChangeTagImpl *const this)
{
  int (**v1)(...); // rdx

  data::ChangeTag::ChangeTag(this);
  v1 = (int (**)(...))(&`vtable for'ChangeTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 9732: range 00000000135A1BCA-00000000135A1C17
void __cdecl AttachElementTypeResistanceImpl::AttachElementTypeResistanceImpl(
        AttachElementTypeResistanceImpl *const this)
{
  int (**v1)(...); // rdx

  data::AttachElementTypeResistance::AttachElementTypeResistance(this);
  v1 = (int (**)(...))(&`vtable for'AttachElementTypeResistanceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 9810: range 00000000135A22EA-00000000135A2337
void __cdecl ReviveElemEnergyImpl::ReviveElemEnergyImpl(ReviveElemEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  data::ReviveElemEnergy::ReviveElemEnergy(this);
  v1 = (int (**)(...))(&`vtable for'ReviveElemEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 10387: range 00000000135A35EA-00000000135A3637
void __cdecl ServerLuaCallImpl::ServerLuaCallImpl(ServerLuaCallImpl *const this)
{
  int (**v1)(...); // rdx

  data::ServerLuaCall::ServerLuaCall(this);
  v1 = (int (**)(...))(&`vtable for'ServerLuaCallImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 10505: range 00000000135A3908-00000000135A3955
void __cdecl KillPlayTeamEntityImpl::KillPlayTeamEntityImpl(KillPlayTeamEntityImpl *const this)
{
  int (**v1)(...); // rdx

  data::KillPlayEntity::KillPlayEntity(this);
  v1 = (int (**)(...))(&`vtable for'KillPlayTeamEntityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 10858: range 00000000135A603E-00000000135A608B
void __cdecl ServerMonsterLogImpl::ServerMonsterLogImpl(ServerMonsterLogImpl *const this)
{
  int (**v1)(...); // rdx

  data::ServerMonsterLog::ServerMonsterLog(this);
  v1 = (int (**)(...))(&`vtable for'ServerMonsterLogImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 12345: range 00000000135A8430-00000000135A847D
void __cdecl AttackByEnergyImpl::AttackByEnergyImpl(AttackByEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  data::AttackByEnergy::AttackByEnergy(this);
  v1 = (int (**)(...))(&`vtable for'AttackByEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 12421: range 00000000135A752E-00000000135A757B
void __cdecl SetRegionalPlayVarValueImpl::SetRegionalPlayVarValueImpl(SetRegionalPlayVarValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::SetRegionalPlayVarValue::SetRegionalPlayVarValue(this);
  v1 = (int (**)(...))(&`vtable for'SetRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 12459: range 00000000135A78DC-00000000135A7929
void __cdecl AddRegionalPlayVarValueImpl::AddRegionalPlayVarValueImpl(AddRegionalPlayVarValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddRegionalPlayVarValue::AddRegionalPlayVarValue(this);
  v1 = (int (**)(...))(&`vtable for'AddRegionalPlayVarValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 12533: range 00000000135A88F4-00000000135A8941
void __cdecl ServerLuaTriggerEventImpl::ServerLuaTriggerEventImpl(ServerLuaTriggerEventImpl *const this)
{
  int (**v1)(...); // rdx

  data::ServerLuaTriggerEvent::ServerLuaTriggerEvent(this);
  v1 = (int (**)(...))(&`vtable for'ServerLuaTriggerEventImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

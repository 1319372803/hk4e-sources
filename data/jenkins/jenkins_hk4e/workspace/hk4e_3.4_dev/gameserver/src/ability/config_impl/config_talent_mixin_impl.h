// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_talent_mixin_impl.h

// Line 20: range 00000000158C710C-00000000158C7164
void __cdecl AddAbilityImpl::AddAbilityImpl(AddAbilityImpl *const this, const AddAbilityImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddAbility::AddAbility(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 20: range 00000000158FE2B2-00000000158FE2DC
void __cdecl AddAbilityImpl::~AddAbilityImpl(AddAbilityImpl *const this)
{
  AddAbilityImpl::~AddAbilityImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 20: range 00000000158FE264-00000000158FE2B1
void __cdecl AddAbilityImpl::~AddAbilityImpl(AddAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::AddAbility::~AddAbility(this);
};

// Line 26: range 00000000158C7798-00000000158C77F0
void __cdecl ModifyAbilityImpl::ModifyAbilityImpl(ModifyAbilityImpl *const this, const ModifyAbilityImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifyAbility::ModifyAbility(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifyAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 26: range 00000000158FE238-00000000158FE262
void __cdecl ModifyAbilityImpl::~ModifyAbilityImpl(ModifyAbilityImpl *const this)
{
  ModifyAbilityImpl::~ModifyAbilityImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 26: range 00000000158FE1EA-00000000158FE237
void __cdecl ModifyAbilityImpl::~ModifyAbilityImpl(ModifyAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifyAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::ModifyAbility::~ModifyAbility(this);
};

// Line 32: range 00000000158C7DA4-00000000158C7DFC
void __cdecl UnlockTalentParamImpl::UnlockTalentParamImpl(
        UnlockTalentParamImpl *const this,
        const UnlockTalentParamImpl *a2)
{
  int (**v2)(...); // rdx

  data::UnlockTalentParam::UnlockTalentParam(this, a2);
  v2 = (int (**)(...))(&`vtable for'UnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 32: range 00000000158FE1BE-00000000158FE1E8
void __cdecl UnlockTalentParamImpl::~UnlockTalentParamImpl(UnlockTalentParamImpl *const this)
{
  UnlockTalentParamImpl::~UnlockTalentParamImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 32: range 00000000158FE170-00000000158FE1BD
void __cdecl UnlockTalentParamImpl::~UnlockTalentParamImpl(UnlockTalentParamImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::UnlockTalentParam::~UnlockTalentParam(this);
};

// Line 38: range 00000000158C83C8-00000000158C8420
void __cdecl UnlockControllerConditionsImpl::UnlockControllerConditionsImpl(
        UnlockControllerConditionsImpl *const this,
        const UnlockControllerConditionsImpl *a2)
{
  int (**v2)(...); // rdx

  data::UnlockControllerConditions::UnlockControllerConditions(this, a2);
  v2 = (int (**)(...))(&`vtable for'UnlockControllerConditionsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 38: range 00000000158FE0F6-00000000158FE143
void __cdecl UnlockControllerConditionsImpl::~UnlockControllerConditionsImpl(
        UnlockControllerConditionsImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UnlockControllerConditionsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::UnlockControllerConditions::~UnlockControllerConditions(this);
};

// Line 38: range 00000000158FE144-00000000158FE16E
void __cdecl UnlockControllerConditionsImpl::~UnlockControllerConditionsImpl(
        UnlockControllerConditionsImpl *const this)
{
  UnlockControllerConditionsImpl::~UnlockControllerConditionsImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 44: range 00000000158C8B22-00000000158C8B7A
void __cdecl ModifySkillCDImpl::ModifySkillCDImpl(ModifySkillCDImpl *const this, const ModifySkillCDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifySkillCD::ModifySkillCD(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifySkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 44: range 00000000158FE07C-00000000158FE0C9
void __cdecl ModifySkillCDImpl::~ModifySkillCDImpl(ModifySkillCDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifySkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::ModifySkillCD::~ModifySkillCD(this);
};

// Line 44: range 00000000158FE0CA-00000000158FE0F4
void __cdecl ModifySkillCDImpl::~ModifySkillCDImpl(ModifySkillCDImpl *const this)
{
  ModifySkillCDImpl::~ModifySkillCDImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 50: range 00000000158C91FC-00000000158C9254
void __cdecl ModifySkillCostImpl::ModifySkillCostImpl(ModifySkillCostImpl *const this, const ModifySkillCostImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifySkillCost::ModifySkillCost(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifySkillCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 50: range 00000000158FE002-00000000158FE04F
void __cdecl ModifySkillCostImpl::~ModifySkillCostImpl(ModifySkillCostImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifySkillCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::ModifySkillCost::~ModifySkillCost(this);
};

// Line 50: range 00000000158FE050-00000000158FE07A
void __cdecl ModifySkillCostImpl::~ModifySkillCostImpl(ModifySkillCostImpl *const this)
{
  ModifySkillCostImpl::~ModifySkillCostImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 56: range 00000000158C984C-00000000158C98A4
void __cdecl ModifySkillPointImpl::ModifySkillPointImpl(
        ModifySkillPointImpl *const this,
        const ModifySkillPointImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifySkillPoint::ModifySkillPoint(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifySkillPointImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 56: range 00000000158FDF88-00000000158FDFD5
void __cdecl ModifySkillPointImpl::~ModifySkillPointImpl(ModifySkillPointImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifySkillPointImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::ModifySkillPoint::~ModifySkillPoint(this);
};

// Line 56: range 00000000158FDFD6-00000000158FE000
void __cdecl ModifySkillPointImpl::~ModifySkillPointImpl(ModifySkillPointImpl *const this)
{
  ModifySkillPointImpl::~ModifySkillPointImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 62: range 00000000158C9F20-00000000158C9F78
void __cdecl AddTalentExtraLevelImpl::AddTalentExtraLevelImpl(
        AddTalentExtraLevelImpl *const this,
        const AddTalentExtraLevelImpl *a2)
{
  int (**v2)(...); // rdx

  data::AddTalentExtraLevel::AddTalentExtraLevel(this, a2);
  v2 = (int (**)(...))(&`vtable for'AddTalentExtraLevelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v2;
};

// Line 62: range 00000000158FDF0E-00000000158FDF5B
void __cdecl AddTalentExtraLevelImpl::~AddTalentExtraLevelImpl(AddTalentExtraLevelImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AddTalentExtraLevelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
  data::AddTalentExtraLevel::~AddTalentExtraLevel(this);
};

// Line 62: range 00000000158FDF5C-00000000158FDF86
void __cdecl AddTalentExtraLevelImpl::~AddTalentExtraLevelImpl(AddTalentExtraLevelImpl *const this)
{
  AddTalentExtraLevelImpl::~AddTalentExtraLevelImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 66: range 00000000135B7494-00000000135B74E1
void __cdecl AddAbilityImpl::AddAbilityImpl(AddAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddAbility::AddAbility(this);
  v1 = (int (**)(...))(&`vtable for'AddAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 103: range 00000000135B7866-00000000135B78B3
void __cdecl ModifyAbilityImpl::ModifyAbilityImpl(ModifyAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifyAbility::ModifyAbility(this);
  v1 = (int (**)(...))(&`vtable for'ModifyAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 143: range 00000000135B7BC6-00000000135B7C13
void __cdecl UnlockTalentParamImpl::UnlockTalentParamImpl(UnlockTalentParamImpl *const this)
{
  int (**v1)(...); // rdx

  data::UnlockTalentParam::UnlockTalentParam(this);
  v1 = (int (**)(...))(&`vtable for'UnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 181: range 00000000135B7F16-00000000135B7F63
void __cdecl UnlockControllerConditionsImpl::UnlockControllerConditionsImpl(UnlockControllerConditionsImpl *const this)
{
  int (**v1)(...); // rdx

  data::UnlockControllerConditions::UnlockControllerConditions(this);
  v1 = (int (**)(...))(&`vtable for'UnlockControllerConditionsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 218: range 00000000135B8376-00000000135B83C3
void __cdecl ModifySkillCDImpl::ModifySkillCDImpl(ModifySkillCDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifySkillCD::ModifySkillCD(this);
  v1 = (int (**)(...))(&`vtable for'ModifySkillCDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 257: range 00000000135B87A6-00000000135B87F3
void __cdecl ModifySkillCostImpl::ModifySkillCostImpl(ModifySkillCostImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifySkillCost::ModifySkillCost(this);
  v1 = (int (**)(...))(&`vtable for'ModifySkillCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 296: range 00000000135B8B8C-00000000135B8BD9
void __cdecl ModifySkillPointImpl::ModifySkillPointImpl(ModifySkillPointImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifySkillPoint::ModifySkillPoint(this);
  v1 = (int (**)(...))(&`vtable for'ModifySkillPointImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// Line 350: range 00000000135B90E8-00000000135B9135
void __cdecl AddTalentExtraLevelImpl::AddTalentExtraLevelImpl(AddTalentExtraLevelImpl *const this)
{
  int (**v1)(...); // rdx

  data::AddTalentExtraLevel::AddTalentExtraLevel(this);
  v1 = (int (**)(...))(&`vtable for'AddTalentExtraLevelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigTalentMixin = v1;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/talent_mixin.h

// Line 22: range 00000000131E7AF8-00000000131E7B59
void __cdecl BaseTalentMixin::~BaseTalentMixin(BaseTalentMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseTalentMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  std::shared_ptr<data::ConfigTalentMixin>::~shared_ptr(&this->config_talent_mixin_ptr_);
  std::enable_shared_from_this<BaseTalentMixin>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseTalentMixin>);
};

// Line 25: range 00000000131CD198-00000000131CD2AA
void __cdecl BaseTalentMixin::BaseTalentMixin(
        BaseTalentMixin *const this,
        const TalentParam *param,
        data::ConfigTalentMixin *config_talent_mixin)
{
  int (**v3)(...); // rdx
  Avatar *target; // rdx

  std::enable_shared_from_this<BaseTalentMixin>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseTalentMixin>);
  v3 = (int (**)(...))(&`vtable for'BaseTalentMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, param);
  this->_vptr_BaseTalentMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  target = param->target;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_, param);
  this->avatar_ = target;
  if ( *(_WORD *)(((unsigned __int64)&this->config_talent_mixin_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->config_talent_mixin_ptr_, param);
  toThisPtr<data::ConfigTalentMixin>((data::ConfigTalentMixin *)&this->config_talent_mixin_ptr_);
};

// Line 31: range 00000000131CD2AC-00000000131CD2BA
int32_t __cdecl BaseTalentMixin::enable(BaseTalentMixin *const this)
{
  return 0;
};

// Line 32: range 00000000131CD2BC-00000000131CD2CA
int32_t __cdecl BaseTalentMixin::disable(BaseTalentMixin *const this)
{
  return 0;
};

// Line 39: range 000000001591AA3E-000000001591AA8B
void __cdecl TalentAddAbilityMixin::~TalentAddAbilityMixin(TalentAddAbilityMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentAddAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 46: range 00000000131CD2CC-00000000131CD313
int32_t __cdecl TalentAddAbilityMixin::getAbilityNameHash(const TalentAddAbilityMixin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->ability_name_hash_;
};

// Line 49: range 000000001591A9C2-000000001591AA0F
void __cdecl TalentModifyAbilityMixin::~TalentModifyAbilityMixin(TalentModifyAbilityMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentModifyAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 57: range 00000000131CD314-00000000131CD35B
int32_t __cdecl TalentModifyAbilityMixin::getAbilityNameHash(const TalentModifyAbilityMixin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->ability_name_hash_;
};

// Line 58: range 00000000131CD35C-00000000131CD3AB
int32_t __cdecl TalentModifyAbilityMixin::getParamSpecialHash(const TalentModifyAbilityMixin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_special_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_special_hash_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->param_special_hash_;
};

// Line 59: range 0000000013842C14-0000000013842C5D
float __cdecl TalentModifyAbilityMixin::getParamDelta(const TalentModifyAbilityMixin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->param_delta_;
};

// Line 60: range 0000000013842C5E-0000000013842CAF
float __cdecl TalentModifyAbilityMixin::getParamRatio(const TalentModifyAbilityMixin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_ratio_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->param_ratio_;
};

// Line 63: range 000000001591A84E-000000001591A89B
void __cdecl TalentModifySkillCDMixin::~TalentModifySkillCDMixin(TalentModifySkillCDMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentModifySkillCDMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 66: range 00000000158C8CB6-00000000158C8D16
void __cdecl ZN24TalentModifySkillCDMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentModifySkillCDMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentModifySkillCDMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 72: range 000000001591A7D2-000000001591A81F
void __cdecl TalentModifySkillCostMixin::~TalentModifySkillCostMixin(TalentModifySkillCostMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentModifySkillCostMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 75: range 00000000158C9390-00000000158C93F0
void __cdecl ZN26TalentModifySkillCostMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentModifySkillCostMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentModifySkillCostMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 81: range 000000001591A756-000000001591A7A3
void __cdecl TalentModifySkillPointMixin::~TalentModifySkillPointMixin(TalentModifySkillPointMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentModifySkillPointMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 84: range 00000000158C99E0-00000000158C9A40
void __cdecl ZN27TalentModifySkillPointMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentModifySkillPointMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentModifySkillPointMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 90: range 000000001591A8CA-000000001591A917
void __cdecl TalentUnlockControllerConditionsMixin::~TalentUnlockControllerConditionsMixin(
        TalentUnlockControllerConditionsMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentUnlockControllerConditionsMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 93: range 00000000158C85DC-00000000158C863C
void __cdecl ZN37TalentUnlockControllerConditionsMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentUnlockControllerConditionsMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentUnlockControllerConditionsMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 96: range 000000001591A946-000000001591A993
void __cdecl TalentUnlockTalentParamMixin::~TalentUnlockTalentParamMixin(TalentUnlockTalentParamMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentUnlockTalentParamMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 99: range 00000000158C7FB8-00000000158C8018
void __cdecl ZN28TalentUnlockTalentParamMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentUnlockTalentParamMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentUnlockTalentParamMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 102: range 000000001591A6DA-000000001591A727
void __cdecl TalentAddExtraLevelMixin::~TalentAddExtraLevelMixin(TalentAddExtraLevelMixin *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TalentAddExtraLevelMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseTalentMixin = v2;
  BaseTalentMixin::~BaseTalentMixin(this);
};

// Line 105: range 00000000158CA0B4-00000000158CA114
void __cdecl ZN24TalentAddExtraLevelMixinCI215BaseTalentMixinERK11TalentParamRN4data17ConfigTalentMixinE(
        TalentAddExtraLevelMixin *const this,
        const TalentParam *a2,
        data::ConfigTalentMixin *a3)
{
  int (**v3)(...); // rdx

  BaseTalentMixin::BaseTalentMixin(this, a2, a3);
  v3 = (int (**)(...))(&`vtable for'TalentAddExtraLevelMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseTalentMixin = v3;
};

// Line 129: range 00000000155C72AE-00000000155C72DA
data::ConfigTalentMixinPtr __cdecl BaseTalentMixin::getConfig(const BaseTalentMixin *const this)
{
  const std::shared_ptr<data::ConfigTalentMixin> *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax

  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr((std::shared_ptr<data::ConfigTalentMixin> *const)this, v1 + 2);
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

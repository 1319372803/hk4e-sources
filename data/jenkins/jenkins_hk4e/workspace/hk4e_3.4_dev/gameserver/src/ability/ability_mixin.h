// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/ability_mixin.h

// Line 20: range 0000000013CD1CF6-0000000013CD1D20
void __cdecl AbilityDebugMixin::~AbilityDebugMixin(AbilityDebugMixin *const this)
{
  AbilityDebugMixin::~AbilityDebugMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 20: range 0000000013CD1CA8-0000000013CD1CF5
void __cdecl AbilityDebugMixin::~AbilityDebugMixin(AbilityDebugMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityDebugMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 23: range 00000000158BA218-00000000158BA278
void __cdecl ZN17AbilityDebugMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityDebugMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityDebugMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 31: range 0000000013CD1C7C-0000000013CD1CA6
void __cdecl AbilityAvatarSteerByCameraMixin::~AbilityAvatarSteerByCameraMixin(
        AbilityAvatarSteerByCameraMixin *const this)
{
  AbilityAvatarSteerByCameraMixin::~AbilityAvatarSteerByCameraMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 31: range 0000000013CD1C2E-0000000013CD1C7B
void __cdecl AbilityAvatarSteerByCameraMixin::~AbilityAvatarSteerByCameraMixin(
        AbilityAvatarSteerByCameraMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityAvatarSteerByCameraMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 34: range 00000000158BA568-00000000158BA5C8
void __cdecl ZN31AbilityAvatarSteerByCameraMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityAvatarSteerByCameraMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityAvatarSteerByCameraMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 40: range 0000000013CD1BB4-0000000013CD1C01
void __cdecl AbilityCostStaminaMixin::~AbilityCostStaminaMixin(AbilityCostStaminaMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityCostStaminaMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 40: range 0000000013CD1C02-0000000013CD1C2C
void __cdecl AbilityCostStaminaMixin::~AbilityCostStaminaMixin(AbilityCostStaminaMixin *const this)
{
  AbilityCostStaminaMixin::~AbilityCostStaminaMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 43: range 00000000158BA8B8-00000000158BA95C
void __cdecl ZN23AbilityCostStaminaMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityCostStaminaMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityCostStaminaMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->INTERVAL_TIME >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->INTERVAL_TIME);
  }
  this->INTERVAL_TIME = 0.30000001;
};

// Line 52: range 0000000013CD1B3A-0000000013CD1B87
void __cdecl AbilityReviveElemEnergyMixin::~AbilityReviveElemEnergyMixin(AbilityReviveElemEnergyMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityReviveElemEnergyMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 52: range 0000000013CD1B88-0000000013CD1BB2
void __cdecl AbilityReviveElemEnergyMixin::~AbilityReviveElemEnergyMixin(AbilityReviveElemEnergyMixin *const this)
{
  AbilityReviveElemEnergyMixin::~AbilityReviveElemEnergyMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 55: range 00000000158BAC4C-00000000158BACAC
void __cdecl ZN28AbilityReviveElemEnergyMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityReviveElemEnergyMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityReviveElemEnergyMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 61: range 0000000013CD1B0E-0000000013CD1B38
void __cdecl AbilityElementShieldMixin::~AbilityElementShieldMixin(AbilityElementShieldMixin *const this)
{
  AbilityElementShieldMixin::~AbilityElementShieldMixin(this);
  operator delete(this, 0xA0uLL);
};

// Line 61: range 0000000013CD1AA0-0000000013CD1B0D
void __cdecl AbilityElementShieldMixin::~AbilityElementShieldMixin(AbilityElementShieldMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityElementShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::vector<int>::~vector(&this->restraint_vec_);
  std::vector<float>::~vector(&this->element_damage_ratio_vec_);
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 64: range 00000000158BAF9C-00000000158BB12F
void __cdecl ZN25AbilityElementShieldMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityElementShieldMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityElementShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_shield_);
  }
  this->max_shield_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_shield_);
  }
  this->cur_shield_ = 0.0;
  std::vector<float>::vector(&this->element_damage_ratio_vec_);
  std::vector<int>::vector(&this->restraint_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_next_hurt_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_next_hurt_);
  this->is_ignore_next_hurt_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_num_);
  }
  this->player_num_ = 0;
};

// Line 73: range 00000000138492BA-00000000138492C8
bool __cdecl AbilityElementShieldMixin::isNeedRecover(const AbilityElementShieldMixin *const this)
{
  return 1;
};

// Line 85: range 0000000013CD1A26-0000000013CD1A73
void __cdecl AbilityEliteShieldMixin::~AbilityEliteShieldMixin(AbilityEliteShieldMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityEliteShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 85: range 0000000013CD1A74-0000000013CD1A9E
void __cdecl AbilityEliteShieldMixin::~AbilityEliteShieldMixin(AbilityEliteShieldMixin *const this)
{
  AbilityEliteShieldMixin::~AbilityEliteShieldMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 89: range 00000000158BB424-00000000158BB50C
void __cdecl ZN23AbilityEliteShieldMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityEliteShieldMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityEliteShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_shield_);
  }
  this->max_shield_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_shield_);
  }
  this->cur_shield_ = 0.0;
};

// Line 95: range 00000000138492CA-00000000138492D8
bool __cdecl AbilityEliteShieldMixin::isNeedRecover(const AbilityEliteShieldMixin *const this)
{
  return 1;
};

// Line 98: range 00000000158BE292-00000000158BE2F2
void __cdecl ZN25AbilityResistClimateMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityResistClimateMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityResistClimateMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 102: range 0000000013CD19AC-0000000013CD19F9
void __cdecl AbilityGlobalMainShieldMixin::~AbilityGlobalMainShieldMixin(AbilityGlobalMainShieldMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityGlobalMainShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 102: range 0000000013CD19FA-0000000013CD1A24
void __cdecl AbilityGlobalMainShieldMixin::~AbilityGlobalMainShieldMixin(AbilityGlobalMainShieldMixin *const this)
{
  AbilityGlobalMainShieldMixin::~AbilityGlobalMainShieldMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 106: range 00000000158BB7FC-00000000158BB8E4
void __cdecl ZN28AbilityGlobalMainShieldMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityGlobalMainShieldMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityGlobalMainShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shield_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_shield_);
  }
  this->max_shield_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_shield_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_shield_);
  }
  this->cur_shield_ = 0.0;
};

// Line 112: range 00000000138492DA-00000000138492E8
bool __cdecl AbilityGlobalMainShieldMixin::isNeedRecover(const AbilityGlobalMainShieldMixin *const this)
{
  return 1;
};

// Line 119: range 0000000013CD1906-0000000013CD1930
void __cdecl AbilityShieldBarMixin::~AbilityShieldBarMixin(AbilityShieldBarMixin *const this)
{
  AbilityShieldBarMixin::~AbilityShieldBarMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 119: range 0000000013CD18B8-0000000013CD1905
void __cdecl AbilityShieldBarMixin::~AbilityShieldBarMixin(AbilityShieldBarMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityShieldBarMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 122: range 00000000158BBF24-00000000158BBFC2
void __cdecl ZN21AbilityShieldBarMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityShieldBarMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityShieldBarMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_num_);
  }
  this->player_num_ = 0;
};

// Line 126: range 00000000138492EA-00000000138492F8
bool __cdecl AbilityShieldBarMixin::isNeedRecover(const AbilityShieldBarMixin *const this)
{
  return 1;
};

// Line 132: range 0000000013CD1980-0000000013CD19AA
void __cdecl AbilityGlobalSubShieldMixin::~AbilityGlobalSubShieldMixin(AbilityGlobalSubShieldMixin *const this)
{
  AbilityGlobalSubShieldMixin::~AbilityGlobalSubShieldMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 132: range 0000000013CD1932-0000000013CD197F
void __cdecl AbilityGlobalSubShieldMixin::~AbilityGlobalSubShieldMixin(AbilityGlobalSubShieldMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityGlobalSubShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 135: range 00000000158BBBD4-00000000158BBC34
void __cdecl ZN27AbilityGlobalSubShieldMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityGlobalSubShieldMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityGlobalSubShieldMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 141: range 0000000013CD1812-0000000013CD183C
void __cdecl AbilityEntityDefenceMixin::~AbilityEntityDefenceMixin(AbilityEntityDefenceMixin *const this)
{
  AbilityEntityDefenceMixin::~AbilityEntityDefenceMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 141: range 0000000013CD17C4-0000000013CD1811
void __cdecl AbilityEntityDefenceMixin::~AbilityEntityDefenceMixin(AbilityEntityDefenceMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityEntityDefenceMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 144: range 00000000158BC2B2-00000000158BC312
void __cdecl ZN25AbilityEntityDefenceMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityEntityDefenceMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityEntityDefenceMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 150: range 0000000013CD188C-0000000013CD18B6
void __cdecl AbilityMonsterDefendMixin::~AbilityMonsterDefendMixin(AbilityMonsterDefendMixin *const this)
{
  AbilityMonsterDefendMixin::~AbilityMonsterDefendMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 150: range 0000000013CD183E-0000000013CD188B
void __cdecl AbilityMonsterDefendMixin::~AbilityMonsterDefendMixin(AbilityMonsterDefendMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityMonsterDefendMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  AbilityEntityDefenceMixin::~AbilityEntityDefenceMixin(this);
};

// Line 153: range 00000000158BC602-00000000158BC69D
void __cdecl ZN25AbilityMonsterDefendMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityMonsterDefendMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  ZN25AbilityEntityDefenceMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
    this,
    p_,
    a3);
  v3 = (int (**)(...))(&`vtable for'AbilityMonsterDefendMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(char *)(((unsigned __int64)&this->is_ignore_next_hurt_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_next_hurt_);
  this->is_ignore_next_hurt_ = 0;
};

// Line 164: range 0000000013CD174A-0000000013CD1797
void __cdecl AbilityWindSeedSpawnerMixin::~AbilityWindSeedSpawnerMixin(AbilityWindSeedSpawnerMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityWindSeedSpawnerMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 164: range 0000000013CD1798-0000000013CD17C2
void __cdecl AbilityWindSeedSpawnerMixin::~AbilityWindSeedSpawnerMixin(AbilityWindSeedSpawnerMixin *const this)
{
  AbilityWindSeedSpawnerMixin::~AbilityWindSeedSpawnerMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 166: range 00000000158BC98C-00000000158BC9EC
void __cdecl ZN27AbilityWindSeedSpawnerMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityWindSeedSpawnerMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityWindSeedSpawnerMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 176: range 0000000013CD171E-0000000013CD1748
void __cdecl AbilityServerCreateGadgetOnKillMixin::~AbilityServerCreateGadgetOnKillMixin(
        AbilityServerCreateGadgetOnKillMixin *const this)
{
  AbilityServerCreateGadgetOnKillMixin::~AbilityServerCreateGadgetOnKillMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 176: range 0000000013CD16D0-0000000013CD171D
void __cdecl AbilityServerCreateGadgetOnKillMixin::~AbilityServerCreateGadgetOnKillMixin(
        AbilityServerCreateGadgetOnKillMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityServerCreateGadgetOnKillMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 178: range 00000000158BCCDC-00000000158BCD3C
void __cdecl ZN36AbilityServerCreateGadgetOnKillMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityServerCreateGadgetOnKillMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityServerCreateGadgetOnKillMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 182: range 0000000013CD1156-0000000013CD11A3
void __cdecl AbilityModifyDamageMixin::~AbilityModifyDamageMixin(AbilityModifyDamageMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityModifyDamageMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 182: range 0000000013CD11A4-0000000013CD11CE
void __cdecl AbilityModifyDamageMixin::~AbilityModifyDamageMixin(AbilityModifyDamageMixin *const this)
{
  AbilityModifyDamageMixin::~AbilityModifyDamageMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 184: range 00000000158BD02C-00000000158BD08C
void __cdecl ZN24AbilityModifyDamageMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityModifyDamageMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityModifyDamageMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 192: range 0000000013CD16A4-0000000013CD16CE
void __cdecl AbilityResistClimateMixin::~AbilityResistClimateMixin(AbilityResistClimateMixin *const this)
{
  AbilityResistClimateMixin::~AbilityResistClimateMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 192: range 0000000013CD1656-0000000013CD16A3
void __cdecl AbilityResistClimateMixin::~AbilityResistClimateMixin(AbilityResistClimateMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityResistClimateMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 200: range 0000000013CD15DC-0000000013CD1629
void __cdecl AbilityModifySkillCDByModifierCountMixin::~AbilityModifySkillCDByModifierCountMixin(
        AbilityModifySkillCDByModifierCountMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityModifySkillCDByModifierCountMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 200: range 0000000013CD162A-0000000013CD1654
void __cdecl AbilityModifySkillCDByModifierCountMixin::~AbilityModifySkillCDByModifierCountMixin(
        AbilityModifySkillCDByModifierCountMixin *const this)
{
  AbilityModifySkillCDByModifierCountMixin::~AbilityModifySkillCDByModifierCountMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 202: range 00000000158BE5E2-00000000158BE642
void __cdecl ZN40AbilityModifySkillCDByModifierCountMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityModifySkillCDByModifierCountMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityModifySkillCDByModifierCountMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 208: range 0000000013CD15B0-0000000013CD15DA
void __cdecl AbilityServerFinishWatcherMixin::~AbilityServerFinishWatcherMixin(
        AbilityServerFinishWatcherMixin *const this)
{
  AbilityServerFinishWatcherMixin::~AbilityServerFinishWatcherMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 208: range 0000000013CD1562-0000000013CD15AF
void __cdecl AbilityServerFinishWatcherMixin::~AbilityServerFinishWatcherMixin(
        AbilityServerFinishWatcherMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityServerFinishWatcherMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 210: range 00000000158BE932-00000000158BE992
void __cdecl ZN31AbilityServerFinishWatcherMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityServerFinishWatcherMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityServerFinishWatcherMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 214: range 00000000158FFC6E-00000000158FFC98
void __cdecl AbilityMoveStateMixin::~AbilityMoveStateMixin(AbilityMoveStateMixin *const this)
{
  AbilityMoveStateMixin::~AbilityMoveStateMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 214: range 00000000158FFC20-00000000158FFC6D
void __cdecl AbilityMoveStateMixin::~AbilityMoveStateMixin(AbilityMoveStateMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityMoveStateMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 216: range 00000000158BEC82-00000000158BECE2
void __cdecl ZN21AbilityMoveStateMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityMoveStateMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityMoveStateMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 219: range 0000000013CD1536-0000000013CD1560
void __cdecl AbilityFieldEntityCountChangeMixin::~AbilityFieldEntityCountChangeMixin(
        AbilityFieldEntityCountChangeMixin *const this)
{
  AbilityFieldEntityCountChangeMixin::~AbilityFieldEntityCountChangeMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 219: range 0000000013CD14E8-0000000013CD1535
void __cdecl AbilityFieldEntityCountChangeMixin::~AbilityFieldEntityCountChangeMixin(
        AbilityFieldEntityCountChangeMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityFieldEntityCountChangeMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 222: range 00000000158BEFD2-00000000158BF070
void __cdecl ZN34AbilityFieldEntityCountChangeMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityFieldEntityCountChangeMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityFieldEntityCountChangeMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_entity_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_entity_count_);
  }
  this->field_entity_count_ = 0;
};

// Line 225: range 00000000138492FA-0000000013849308
bool __cdecl AbilityFieldEntityCountChangeMixin::isNeedRecover(const AbilityFieldEntityCountChangeMixin *const this)
{
  return 1;
};

// Line 231: range 0000000013CD145E-0000000013CD14BB
void __cdecl AbilityScenePropSyncMixin::~AbilityScenePropSyncMixin(AbilityScenePropSyncMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityScenePropSyncMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::~unordered_map(&this->massive_map_);
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 231: range 0000000013CD14BC-0000000013CD14E6
void __cdecl AbilityScenePropSyncMixin::~AbilityScenePropSyncMixin(AbilityScenePropSyncMixin *const this)
{
  AbilityScenePropSyncMixin::~AbilityScenePropSyncMixin(this);
  operator delete(this, 0x98uLL);
};

// Line 234: range 0000000013B0B514-0000000013B0B56B
void __cdecl AbilityScenePropSyncMixin::MassiveProp::MassiveProp(AbilityScenePropSyncMixin::MassiveProp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->last_sync_time = 0;
  std::unordered_map<int,proto::MassivePropParam>::unordered_map(&this->prop_map);
};

// Line 234: range 0000000013A70BB0-0000000013A70BCE
void __cdecl AbilityScenePropSyncMixin::MassiveProp::~MassiveProp(AbilityScenePropSyncMixin::MassiveProp *const this)
{
  std::unordered_map<int,proto::MassivePropParam>::~unordered_map(&this->prop_map);
};

// Line 239: range 00000000158BF4BA-00000000158BF52A
void __cdecl ZN25AbilityScenePropSyncMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityScenePropSyncMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityScenePropSyncMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::unordered_map(&this->massive_map_);
};

// Line 242: range 000000001384930A-000000001384932A
bool __cdecl AbilityScenePropSyncMixin::isNeedRecover(const AbilityScenePropSyncMixin *const this)
{
  return !std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::empty(&this->massive_map_);
};

// Line 244: range 0000000015A1DBEE-0000000015A1DC0B
void __cdecl AbilityScenePropSyncMixin::clearData(AbilityScenePropSyncMixin *const this)
{
  std::unordered_map<long,AbilityScenePropSyncMixin::MassiveProp>::clear(&this->massive_map_);
};

// Line 250: range 0000000013CD13C8-0000000013CD1415
void __cdecl AbilityClampDamageReceivedMixin::~AbilityClampDamageReceivedMixin(
        AbilityClampDamageReceivedMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityClampDamageReceivedMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 250: range 0000000013CD1416-0000000013CD1440
void __cdecl AbilityClampDamageReceivedMixin::~AbilityClampDamageReceivedMixin(
        AbilityClampDamageReceivedMixin *const this)
{
  AbilityClampDamageReceivedMixin::~AbilityClampDamageReceivedMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 253: range 00000000158BF822-00000000158BF882
void __cdecl ZN31AbilityClampDamageReceivedMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityClampDamageReceivedMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityClampDamageReceivedMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 257: range 0000000013CD139C-0000000013CD13C6
void __cdecl AbilityDoActionBySelfModifierElementDurabilityRatioMixin::~AbilityDoActionBySelfModifierElementDurabilityRatioMixin(
        AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this)
{
  AbilityDoActionBySelfModifierElementDurabilityRatioMixin::~AbilityDoActionBySelfModifierElementDurabilityRatioMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 257: range 0000000013CD134E-0000000013CD139B
void __cdecl AbilityDoActionBySelfModifierElementDurabilityRatioMixin::~AbilityDoActionBySelfModifierElementDurabilityRatioMixin(
        AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityDoActionBySelfModifierElementDurabilityRatioMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 260: range 00000000158BFB72-00000000158BFC55
void __cdecl ZN56AbilityDoActionBySelfModifierElementDurabilityRatioMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityDoActionBySelfModifierElementDurabilityRatioMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(char *)(((unsigned __int64)&this->recv_invoke_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->recv_invoke_);
  this->recv_invoke_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_duability_ratio_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_duability_ratio_);
  }
  this->last_duability_ratio_ = 0.0;
};

// Line 263: range 000000001384932C-0000000013849374
bool __cdecl AbilityDoActionBySelfModifierElementDurabilityRatioMixin::isNeedRecover(
        const AbilityDoActionBySelfModifierElementDurabilityRatioMixin *const this)
{
  if ( *(char *)(((unsigned __int64)&this->recv_invoke_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->recv_invoke_);
  return this->recv_invoke_;
};

// Line 270: range 0000000013CD12C4-0000000013CD1321
void __cdecl AbilityFireworksLauncherMixin::~AbilityFireworksLauncherMixin(AbilityFireworksLauncherMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityFireworksLauncherMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::vector<unsigned int>::~vector(&this->fireworks_config_vec_);
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 270: range 0000000013CD1322-0000000013CD134C
void __cdecl AbilityFireworksLauncherMixin::~AbilityFireworksLauncherMixin(AbilityFireworksLauncherMixin *const this)
{
  AbilityFireworksLauncherMixin::~AbilityFireworksLauncherMixin(this);
  operator delete(this, 0x90uLL);
};

// Line 273: range 00000000158BFF44-00000000158C00FA
void __cdecl ZN29AbilityFireworksLauncherMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityFireworksLauncherMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityFireworksLauncherMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->phase_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->phase_);
  }
  this->phase_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fired_bullet_count_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fired_bullet_count_);
  }
  this->fired_bullet_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invoke_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->invoke_type_);
  }
  this->invoke_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_count_down_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_count_down_time_);
  }
  this->start_count_down_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turn_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turn_index_);
  }
  this->turn_index_ = 0;
  std::vector<unsigned int>::vector(&this->fireworks_config_vec_);
};

// Line 276: range 0000000013849376-0000000013849384
bool __cdecl AbilityFireworksLauncherMixin::isNeedRecover(const AbilityFireworksLauncherMixin *const this)
{
  return 1;
};

// Line 288: range 0000000013CD1298-0000000013CD12C2
void __cdecl AbilityModifyDamageCountMixin::~AbilityModifyDamageCountMixin(AbilityModifyDamageCountMixin *const this)
{
  AbilityModifyDamageCountMixin::~AbilityModifyDamageCountMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 288: range 0000000013CD124A-0000000013CD1297
void __cdecl AbilityModifyDamageCountMixin::~AbilityModifyDamageCountMixin(AbilityModifyDamageCountMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityModifyDamageCountMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  AbilityModifyDamageMixin::~AbilityModifyDamageMixin(this);
};

// Line 291: range 00000000158C03EA-00000000158C04CE
void __cdecl ZN29AbilityModifyDamageCountMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityModifyDamageCountMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  ZN24AbilityModifyDamageMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
    this,
    p_,
    a3);
  v3 = (int (**)(...))(&`vtable for'AbilityModifyDamageCountMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_count_);
  }
  this->damage_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->no_cost_damage_count_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->no_cost_damage_count_);
  }
  this->no_cost_damage_count_ = 0;
};

// Line 296: range 0000000013849386-0000000013849394
bool __cdecl AbilityModifyDamageCountMixin::isNeedRecover(const AbilityModifyDamageCountMixin *const this)
{
  return 1;
};

// Line 302: range 0000000013CD121E-0000000013CD1248
void __cdecl AbilityModifyBeHitDamageMixin::~AbilityModifyBeHitDamageMixin(AbilityModifyBeHitDamageMixin *const this)
{
  AbilityModifyBeHitDamageMixin::~AbilityModifyBeHitDamageMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 302: range 0000000013CD11D0-0000000013CD121D
void __cdecl AbilityModifyBeHitDamageMixin::~AbilityModifyBeHitDamageMixin(AbilityModifyBeHitDamageMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityModifyBeHitDamageMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  AbilityModifyDamageMixin::~AbilityModifyDamageMixin(this);
};

// Line 305: range 00000000158C07BE-00000000158C081E
void __cdecl ZN29AbilityModifyBeHitDamageMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityModifyBeHitDamageMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  ZN24AbilityModifyDamageMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
    this,
    p_,
    a3);
  v3 = (int (**)(...))(&`vtable for'AbilityModifyBeHitDamageMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 308: range 0000000013849396-00000000138493A4
void __cdecl AbilityModifyBeHitDamageMixin::onHittingOther(
        AbilityModifyBeHitDamageMixin *const this,
        AttackResult *attack_result)
{
  ;
};

// Line 312: range 0000000013CD1052-0000000013CD109F
void __cdecl BaseAbilityAfterBeingHitMixin::~BaseAbilityAfterBeingHitMixin(BaseAbilityAfterBeingHitMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseAbilityAfterBeingHitMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 312: range 0000000013CD10A0-0000000013CD10CA
void __cdecl BaseAbilityAfterBeingHitMixin::~BaseAbilityAfterBeingHitMixin(BaseAbilityAfterBeingHitMixin *const this)
{
  BaseAbilityAfterBeingHitMixin::~BaseAbilityAfterBeingHitMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 315: range 00000000158C0B0E-00000000158C0B6E
void __cdecl ZN29BaseAbilityAfterBeingHitMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        BaseAbilityAfterBeingHitMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'BaseAbilityAfterBeingHitMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 321: range 0000000013CD10CC-0000000013CD1129
void __cdecl AbilityDamageStatisticsMixin::~AbilityDamageStatisticsMixin(AbilityDamageStatisticsMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityDamageStatisticsMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::vector<float>::~vector(&this->elememt_type_final_damage_vec_);
  BaseAbilityAfterBeingHitMixin::~BaseAbilityAfterBeingHitMixin(this);
};

// Line 321: range 0000000013CD112A-0000000013CD1154
void __cdecl AbilityDamageStatisticsMixin::~AbilityDamageStatisticsMixin(AbilityDamageStatisticsMixin *const this)
{
  AbilityDamageStatisticsMixin::~AbilityDamageStatisticsMixin(this);
  operator delete(this, 0x78uLL);
};

// Line 324: range 00000000158C0B70-00000000158C0BE0
void __cdecl ZN28AbilityDamageStatisticsMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityDamageStatisticsMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  ZN29BaseAbilityAfterBeingHitMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
    this,
    p_,
    a3);
  v3 = (int (**)(...))(&`vtable for'AbilityDamageStatisticsMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  std::vector<float>::vector(&this->elememt_type_final_damage_vec_);
};

// Line 329: range 00000000138493A6-00000000138493B4
bool __cdecl AbilityDamageStatisticsMixin::isNeedRecover(const AbilityDamageStatisticsMixin *const this)
{
  return 1;
};

// Line 335: range 0000000013CD0FD8-0000000013CD1025
void __cdecl AbilityUGCTimeControlMixin::~AbilityUGCTimeControlMixin(AbilityUGCTimeControlMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityUGCTimeControlMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 335: range 0000000013CD1026-0000000013CD1050
void __cdecl AbilityUGCTimeControlMixin::~AbilityUGCTimeControlMixin(AbilityUGCTimeControlMixin *const this)
{
  AbilityUGCTimeControlMixin::~AbilityUGCTimeControlMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 338: range 00000000158C0ED0-00000000158C0F61
void __cdecl ZN26AbilityUGCTimeControlMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityUGCTimeControlMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityUGCTimeControlMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_move_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_move_time_ms_);
  this->start_move_time_ms_ = 0LL;
};

// Line 341: range 00000000138493B6-00000000138493C4
bool __cdecl AbilityUGCTimeControlMixin::isNeedRecover(const AbilityUGCTimeControlMixin *const this)
{
  return 1;
};

// Line 347: range 0000000013CD0F5E-0000000013CD0FAB
void __cdecl AbilityAvatarCombatMixin::~AbilityAvatarCombatMixin(AbilityAvatarCombatMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityAvatarCombatMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 347: range 0000000013CD0FAC-0000000013CD0FD6
void __cdecl AbilityAvatarCombatMixin::~AbilityAvatarCombatMixin(AbilityAvatarCombatMixin *const this)
{
  AbilityAvatarCombatMixin::~AbilityAvatarCombatMixin(this);
  operator delete(this, 0x68uLL);
};

// Line 350: range 00000000158C1250-00000000158C12EB
void __cdecl ZN24AbilityAvatarCombatMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityAvatarCombatMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityAvatarCombatMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  if ( *(char *)(((unsigned __int64)&this->is_enter_combat_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_combat_);
  this->is_enter_combat_ = 0;
};

// Line 353: range 00000000138493C6-00000000138493D4
bool __cdecl AbilityAvatarCombatMixin::isNeedRecover(const AbilityAvatarCombatMixin *const this)
{
  return 1;
};

// Line 359: range 0000000013CD0F32-0000000013CD0F5C
void __cdecl AbilityDeathZoneRegionalPlayMixin::~AbilityDeathZoneRegionalPlayMixin(
        AbilityDeathZoneRegionalPlayMixin *const this)
{
  AbilityDeathZoneRegionalPlayMixin::~AbilityDeathZoneRegionalPlayMixin(this);
  operator delete(this, 0x60uLL);
};

// Line 359: range 0000000013CD0EE4-0000000013CD0F31
void __cdecl AbilityDeathZoneRegionalPlayMixin::~AbilityDeathZoneRegionalPlayMixin(
        AbilityDeathZoneRegionalPlayMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityDeathZoneRegionalPlayMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 362: range 00000000158C15DA-00000000158C163A
void __cdecl ZN33AbilityDeathZoneRegionalPlayMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityDeathZoneRegionalPlayMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityDeathZoneRegionalPlayMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
};

// Line 369: range 0000000013CD0EB8-0000000013CD0EE2
void __cdecl AbilityEraseBrickActivityMixin::~AbilityEraseBrickActivityMixin(
        AbilityEraseBrickActivityMixin *const this)
{
  AbilityEraseBrickActivityMixin::~AbilityEraseBrickActivityMixin(this);
  operator delete(this, 0x78uLL);
};

// Line 369: range 0000000013CD0E5A-0000000013CD0EB7
void __cdecl AbilityEraseBrickActivityMixin::~AbilityEraseBrickActivityMixin(
        AbilityEraseBrickActivityMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityEraseBrickActivityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::vector<unsigned int>::~vector(&this->data_);
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 372: range 00000000158C192A-00000000158C199A
void __cdecl ZN30AbilityEraseBrickActivityMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityEraseBrickActivityMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityEraseBrickActivityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  std::vector<unsigned int>::vector(&this->data_);
};

// Line 375: range 00000000138493D6-00000000138493E4
bool __cdecl AbilityEraseBrickActivityMixin::isNeedRecover(const AbilityEraseBrickActivityMixin *const this)
{
  return 1;
};

// Line 380: range 0000000013CD0D64-0000000013CD0E2D
void __cdecl AbilityBreakoutMixin::~AbilityBreakoutMixin(AbilityBreakoutMixin *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AbilityBreakoutMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v1;
  std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::~queue(&this->history_snap_shot_);
  std::vector<proto::BreakoutAction>::~vector(&this->action_vec_);
  AbilityBreakoutMixin::BreakoutSnapShot::~BreakoutSnapShot(&this->snap_shot_);
  std::unordered_set<unsigned int>::~unordered_set(&this->had_falling_object_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->ball_idx_set_);
  std::vector<proto::BreakoutSyncConnectUidInfo>::~vector(&this->uid_info_vec_);
  std::unordered_map<unsigned int,bool>::~unordered_map(&this->uid_connected_map_);
  BaseAbilityMixin::~BaseAbilityMixin(this);
};

// Line 380: range 0000000013CD0E2E-0000000013CD0E58
void __cdecl AbilityBreakoutMixin::~AbilityBreakoutMixin(AbilityBreakoutMixin *const this)
{
  AbilityBreakoutMixin::~AbilityBreakoutMixin(this);
  operator delete(this, 0x2B8uLL);
};

// Line 386: range 00000000138493E6-00000000138493F4
bool __cdecl AbilityBreakoutMixin::isNeedRecover(const AbilityBreakoutMixin *const this)
{
  return 1;
};

// Line 389: range 0000000017A0A030-0000000017A0A548
AbilityBreakoutMixin::BreakoutSnapShot *__cdecl AbilityBreakoutMixin::BreakoutSnapShot::operator=(
        AbilityBreakoutMixin::BreakoutSnapShot *const this,
        const AbilityBreakoutMixin::BreakoutSnapShot *a2)
{
  uint64_t client_game_time; // rdx
  uint32_t wave_index; // ecx
  uint32_t score; // ecx
  uint32_t combo; // ecx
  uint32_t max_combo; // ecx
  uint32_t life_count; // ecx
  uint32_t wave_suite_index; // ecx
  uint32_t remaining_boss_hp; // ecx
  int32_t raw_client_game_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  client_game_time = a2->client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->client_game_time = client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wave_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wave_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wave_index);
  }
  wave_index = a2->wave_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_index);
  }
  this->wave_index = wave_index;
  std::vector<proto::BreakoutPhysicalObject>::operator=(&this->ball_vec, &a2->ball_vec);
  std::vector<proto::BreakoutPhysicalObject>::operator=(&this->dynamic_object_vec, &a2->dynamic_object_vec);
  std::map<unsigned int,proto::BreakoutPhysicalObject>::operator=(&this->physical_object_map, &a2->physical_object_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->score);
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->combo);
  }
  combo = a2->combo;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combo);
  }
  this->combo = combo;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_combo);
  }
  max_combo = a2->max_combo;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_combo);
  }
  this->max_combo = max_combo;
  if ( *(_BYTE *)(((unsigned __int64)&a2->life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->life_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->life_count);
  }
  life_count = a2->life_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_count);
  }
  this->life_count = life_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wave_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wave_suite_index);
  }
  wave_suite_index = a2->wave_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_suite_index);
  }
  this->wave_suite_index = wave_suite_index;
  std::map<unsigned int,proto::BreakoutSpawnPoint>::operator=(&this->spawn_point_map, &a2->spawn_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->remaining_boss_hp);
  }
  remaining_boss_hp = a2->remaining_boss_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remaining_boss_hp);
  }
  this->remaining_boss_hp = remaining_boss_hp;
  std::vector<proto::BreakoutElementReactionCounter>::operator=(
    &this->brick_element_reaction_vec,
    &a2->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::operator=(
    &this->ball_element_reaction_vec,
    &a2->ball_element_reaction_vec);
  std::vector<unsigned int>::operator=(&this->id_index_vec, &a2->id_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->raw_client_game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->raw_client_game_time);
  }
  raw_client_game_time = a2->raw_client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->raw_client_game_time);
  }
  this->raw_client_game_time = raw_client_game_time;
  return this;
};

// Line 389: range 00000000158C1D6A-00000000158C2029
void __cdecl AbilityBreakoutMixin::BreakoutSnapShot::BreakoutSnapShot(
        AbilityBreakoutMixin::BreakoutSnapShot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->client_game_time = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_index);
  }
  this->wave_index = 0;
  std::vector<proto::BreakoutPhysicalObject>::vector(&this->ball_vec);
  std::vector<proto::BreakoutPhysicalObject>::vector(&this->dynamic_object_vec);
  std::map<unsigned int,proto::BreakoutPhysicalObject>::map(&this->physical_object_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combo);
  }
  this->combo = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_combo);
  }
  this->max_combo = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_count);
  }
  this->life_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_suite_index);
  }
  this->wave_suite_index = 0;
  std::map<unsigned int,proto::BreakoutSpawnPoint>::map(&this->spawn_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remaining_boss_hp);
  }
  this->remaining_boss_hp = 0;
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->ball_element_reaction_vec);
  std::vector<unsigned int>::vector(&this->id_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->raw_client_game_time);
  }
  this->raw_client_game_time = 0;
};

// Line 389: range 00000000139B4890-00000000139B4E3E
void __cdecl AbilityBreakoutMixin::BreakoutSnapShot::BreakoutSnapShot(
        AbilityBreakoutMixin::BreakoutSnapShot *const this,
        const AbilityBreakoutMixin::BreakoutSnapShot *a2)
{
  uint64_t client_game_time; // rdx
  uint32_t wave_index; // ecx
  uint32_t score; // ecx
  uint32_t combo; // ecx
  uint32_t max_combo; // ecx
  uint32_t life_count; // ecx
  uint32_t wave_suite_index; // ecx
  uint32_t remaining_boss_hp; // ecx
  int32_t raw_client_game_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8(a2);
  client_game_time = a2->client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->client_game_time = client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wave_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wave_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wave_index);
  }
  wave_index = a2->wave_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_index);
  }
  this->wave_index = wave_index;
  std::vector<proto::BreakoutPhysicalObject>::vector(&this->ball_vec, &a2->ball_vec);
  std::vector<proto::BreakoutPhysicalObject>::vector(&this->dynamic_object_vec, &a2->dynamic_object_vec);
  std::map<unsigned int,proto::BreakoutPhysicalObject>::map(&this->physical_object_map, &a2->physical_object_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->score);
  }
  score = a2->score;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&a2->combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->combo);
  }
  combo = a2->combo;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combo);
  }
  this->combo = combo;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_combo);
  }
  max_combo = a2->max_combo;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_combo);
  }
  this->max_combo = max_combo;
  if ( *(_BYTE *)(((unsigned __int64)&a2->life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->life_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->life_count);
  }
  life_count = a2->life_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->life_count);
  }
  this->life_count = life_count;
  if ( *(_BYTE *)(((unsigned __int64)&a2->wave_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->wave_suite_index);
  }
  wave_suite_index = a2->wave_suite_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wave_suite_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wave_suite_index);
  }
  this->wave_suite_index = wave_suite_index;
  std::map<unsigned int,proto::BreakoutSpawnPoint>::map(&this->spawn_point_map, &a2->spawn_point_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->remaining_boss_hp);
  }
  remaining_boss_hp = a2->remaining_boss_hp;
  if ( *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remaining_boss_hp);
  }
  this->remaining_boss_hp = remaining_boss_hp;
  std::vector<proto::BreakoutElementReactionCounter>::vector(
    &this->brick_element_reaction_vec,
    &a2->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::vector(
    &this->ball_element_reaction_vec,
    &a2->ball_element_reaction_vec);
  std::vector<unsigned int>::vector(&this->id_index_vec, &a2->id_index_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->raw_client_game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->raw_client_game_time);
  }
  raw_client_game_time = a2->raw_client_game_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->raw_client_game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->raw_client_game_time);
  }
  this->raw_client_game_time = raw_client_game_time;
};

// Line 389: range 00000000139B465E-00000000139B46E4
void __cdecl AbilityBreakoutMixin::BreakoutSnapShot::~BreakoutSnapShot(
        AbilityBreakoutMixin::BreakoutSnapShot *const this)
{
  std::vector<unsigned int>::~vector(&this->id_index_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->ball_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->brick_element_reaction_vec);
  std::map<unsigned int,proto::BreakoutSpawnPoint>::~map(&this->spawn_point_map);
  std::map<unsigned int,proto::BreakoutPhysicalObject>::~map(&this->physical_object_map);
  std::vector<proto::BreakoutPhysicalObject>::~vector(&this->dynamic_object_vec);
  std::vector<proto::BreakoutPhysicalObject>::~vector(&this->ball_vec);
};

// Line 389: range 00000000158C202A-00000000158C2315
void __cdecl ZN20AbilityBreakoutMixinCI216BaseAbilityMixinESt10shared_ptrIN4data18ConfigAbilityMixinEER10MixinParam(
        AbilityBreakoutMixin *const this,
        data::ConfigAbilityMixinPtr *p_,
        MixinParam *a3)
{
  int (**v3)(...); // rdx

  BaseAbilityMixin::BaseAbilityMixin(this, p_, a3);
  v3 = (int (**)(...))(&`vtable for'AbilityBreakoutMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseAbilityMixin = v3;
  std::unordered_map<unsigned int,bool>::unordered_map(&this->uid_connected_map_);
  std::vector<proto::BreakoutSyncConnectUidInfo>::vector(&this->uid_info_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->start_time_ms_);
  this->start_time_ms_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_);
  this->is_finish_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ball_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ball_index_);
  }
  this->ball_index_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->ball_idx_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->had_falling_object_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->missile_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->missile_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->missile_index_);
  }
  this->missile_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_stop_gallery_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_stop_gallery_);
  }
  this->is_stop_gallery_ = 0;
  AbilityBreakoutMixin::BreakoutSnapShot::BreakoutSnapShot(&this->snap_shot_);
  std::vector<proto::BreakoutAction>::vector(&this->action_vec_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_client_game_time >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_client_game_time);
  this->last_client_game_time = 0LL;
  std::queue<AbilityBreakoutMixin::BreakoutSnapShot>::queue<std::deque<AbilityBreakoutMixin::BreakoutSnapShot>,void>(&this->history_snap_shot_);
};

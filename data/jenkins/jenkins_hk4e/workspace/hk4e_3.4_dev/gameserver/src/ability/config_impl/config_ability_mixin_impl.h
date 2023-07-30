// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_mixin_impl.h

// Line 20: range 00000000158A3F00-00000000158A3F58
void __cdecl DebugMixinImpl::DebugMixinImpl(DebugMixinImpl *const this, const DebugMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::DebugMixin::DebugMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'DebugMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 20: range 00000000158FFBF4-00000000158FFC1E
void __cdecl DebugMixinImpl::~DebugMixinImpl(DebugMixinImpl *const this)
{
  DebugMixinImpl::~DebugMixinImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 20: range 00000000158FFBA6-00000000158FFBF3
void __cdecl DebugMixinImpl::~DebugMixinImpl(DebugMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DebugMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DebugMixin::~DebugMixin(this);
};

// Line 28: range 00000000158A432E-00000000158A4386
void __cdecl AvatarSteerByCameraMixinImpl::AvatarSteerByCameraMixinImpl(
        AvatarSteerByCameraMixinImpl *const this,
        const AvatarSteerByCameraMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::AvatarSteerByCameraMixin::AvatarSteerByCameraMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'AvatarSteerByCameraMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 28: range 00000000158FFB2C-00000000158FFB79
void __cdecl AvatarSteerByCameraMixinImpl::~AvatarSteerByCameraMixinImpl(AvatarSteerByCameraMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarSteerByCameraMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AvatarSteerByCameraMixin::~AvatarSteerByCameraMixin(this);
};

// Line 28: range 00000000158FFB7A-00000000158FFBA4
void __cdecl AvatarSteerByCameraMixinImpl::~AvatarSteerByCameraMixinImpl(AvatarSteerByCameraMixinImpl *const this)
{
  AvatarSteerByCameraMixinImpl::~AvatarSteerByCameraMixinImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 33: range 00000000155B6ABE-00000000155B6B06
std::shared_ptr<data::ConfigAbilityMixin> __cdecl AvatarSteerByCameraMixinImpl::clone(
        AvatarSteerByCameraMixinImpl *const this)
{
  AvatarSteerByCameraMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<AvatarSteerByCameraMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AvatarSteerByCameraMixinImpl,AvatarSteerByCameraMixinImpl&>(
    (AvatarSteerByCameraMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<AvatarSteerByCameraMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<AvatarSteerByCameraMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 36: range 00000000158A46E4-00000000158A473C
void __cdecl CostStaminaMixinImpl::CostStaminaMixinImpl(
        CostStaminaMixinImpl *const this,
        const CostStaminaMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::CostStaminaMixin::CostStaminaMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'CostStaminaMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 36: range 00000000158FFAB2-00000000158FFAFF
void __cdecl CostStaminaMixinImpl::~CostStaminaMixinImpl(CostStaminaMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CostStaminaMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::CostStaminaMixin::~CostStaminaMixin(this);
};

// Line 36: range 00000000158FFB00-00000000158FFB2A
void __cdecl CostStaminaMixinImpl::~CostStaminaMixinImpl(CostStaminaMixinImpl *const this)
{
  CostStaminaMixinImpl::~CostStaminaMixinImpl(this);
  operator delete(this, 0x78uLL);
};

// Line 41: range 00000000155B6B08-00000000155B6B50
std::shared_ptr<data::ConfigAbilityMixin> __cdecl CostStaminaMixinImpl::clone(CostStaminaMixinImpl *const this)
{
  CostStaminaMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<CostStaminaMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<CostStaminaMixinImpl,CostStaminaMixinImpl&>((CostStaminaMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<CostStaminaMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<CostStaminaMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 44: range 00000000135AA60A-00000000135AA657
void __cdecl ReviveElemEnergyMixinImpl::ReviveElemEnergyMixinImpl(ReviveElemEnergyMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ReviveElemEnergyMixin::ReviveElemEnergyMixin(this);
  v1 = (int (**)(...))(&`vtable for'ReviveElemEnergyMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 44: range 00000000158A4B0E-00000000158A4B66
void __cdecl ReviveElemEnergyMixinImpl::ReviveElemEnergyMixinImpl(
        ReviveElemEnergyMixinImpl *const this,
        const ReviveElemEnergyMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ReviveElemEnergyMixin::ReviveElemEnergyMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ReviveElemEnergyMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 44: range 00000000158FFA86-00000000158FFAB0
void __cdecl ReviveElemEnergyMixinImpl::~ReviveElemEnergyMixinImpl(ReviveElemEnergyMixinImpl *const this)
{
  ReviveElemEnergyMixinImpl::~ReviveElemEnergyMixinImpl(this);
  operator delete(this, 0x88uLL);
};

// Line 44: range 00000000158FFA38-00000000158FFA85
void __cdecl ReviveElemEnergyMixinImpl::~ReviveElemEnergyMixinImpl(ReviveElemEnergyMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ReviveElemEnergyMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ReviveElemEnergyMixin::~ReviveElemEnergyMixin(this);
};

// Line 49: range 00000000155B6B52-00000000155B6B9A
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ReviveElemEnergyMixinImpl::clone(
        ReviveElemEnergyMixinImpl *const this)
{
  ReviveElemEnergyMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ReviveElemEnergyMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ReviveElemEnergyMixinImpl,ReviveElemEnergyMixinImpl&>(
    (ReviveElemEnergyMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ReviveElemEnergyMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ReviveElemEnergyMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 52: range 00000000135AAAF0-00000000135AAB3D
void __cdecl ElementShieldMixinImpl::ElementShieldMixinImpl(ElementShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ElementShieldMixin::ElementShieldMixin(this);
  v1 = (int (**)(...))(&`vtable for'ElementShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 52: range 00000000158A51B0-00000000158A5208
void __cdecl ElementShieldMixinImpl::ElementShieldMixinImpl(
        ElementShieldMixinImpl *const this,
        const ElementShieldMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ElementShieldMixin::ElementShieldMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ElementShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 52: range 00000000158FF9BE-00000000158FFA0B
void __cdecl ElementShieldMixinImpl::~ElementShieldMixinImpl(ElementShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ElementShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ElementShieldMixin::~ElementShieldMixin(this);
};

// Line 52: range 00000000158FFA0C-00000000158FFA36
void __cdecl ElementShieldMixinImpl::~ElementShieldMixinImpl(ElementShieldMixinImpl *const this)
{
  ElementShieldMixinImpl::~ElementShieldMixinImpl(this);
  operator delete(this, 0x118uLL);
};

// Line 57: range 00000000155B6B9C-00000000155B6BE4
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ElementShieldMixinImpl::clone(ElementShieldMixinImpl *const this)
{
  ElementShieldMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ElementShieldMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ElementShieldMixinImpl,ElementShieldMixinImpl&>((ElementShieldMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ElementShieldMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ElementShieldMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 60: range 00000000135AAFA0-00000000135AAFED
void __cdecl EliteShieldMixinImpl::EliteShieldMixinImpl(EliteShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::EliteShieldMixin::EliteShieldMixin(this);
  v1 = (int (**)(...))(&`vtable for'EliteShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 60: range 00000000158A581E-00000000158A5876
void __cdecl EliteShieldMixinImpl::EliteShieldMixinImpl(
        EliteShieldMixinImpl *const this,
        const EliteShieldMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::EliteShieldMixin::EliteShieldMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'EliteShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 60: range 00000000158FF992-00000000158FF9BC
void __cdecl EliteShieldMixinImpl::~EliteShieldMixinImpl(EliteShieldMixinImpl *const this)
{
  EliteShieldMixinImpl::~EliteShieldMixinImpl(this);
  operator delete(this, 0x140uLL);
};

// Line 60: range 00000000158FF944-00000000158FF991
void __cdecl EliteShieldMixinImpl::~EliteShieldMixinImpl(EliteShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EliteShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::EliteShieldMixin::~EliteShieldMixin(this);
};

// Line 65: range 00000000155B6BE6-00000000155B6C2E
std::shared_ptr<data::ConfigAbilityMixin> __cdecl EliteShieldMixinImpl::clone(EliteShieldMixinImpl *const this)
{
  EliteShieldMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<EliteShieldMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<EliteShieldMixinImpl,EliteShieldMixinImpl&>((EliteShieldMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<EliteShieldMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<EliteShieldMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 68: range 00000000158A5F66-00000000158A5FBE
void __cdecl GlobalMainShieldMixinImpl::GlobalMainShieldMixinImpl(
        GlobalMainShieldMixinImpl *const this,
        const GlobalMainShieldMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::GlobalMainShieldMixin::GlobalMainShieldMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'GlobalMainShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 68: range 00000000158FF918-00000000158FF942
void __cdecl GlobalMainShieldMixinImpl::~GlobalMainShieldMixinImpl(GlobalMainShieldMixinImpl *const this)
{
  GlobalMainShieldMixinImpl::~GlobalMainShieldMixinImpl(this);
  operator delete(this, 0x1A0uLL);
};

// Line 68: range 00000000158FF8CA-00000000158FF917
void __cdecl GlobalMainShieldMixinImpl::~GlobalMainShieldMixinImpl(GlobalMainShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GlobalMainShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::GlobalMainShieldMixin::~GlobalMainShieldMixin(this);
};

// Line 73: range 00000000155B6C30-00000000155B6C78
std::shared_ptr<data::ConfigAbilityMixin> __cdecl GlobalMainShieldMixinImpl::clone(
        GlobalMainShieldMixinImpl *const this)
{
  GlobalMainShieldMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<GlobalMainShieldMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GlobalMainShieldMixinImpl,GlobalMainShieldMixinImpl&>(
    (GlobalMainShieldMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<GlobalMainShieldMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<GlobalMainShieldMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 76: range 00000000135AB7B8-00000000135AB805
void __cdecl GlobalSubShieldMixinImpl::GlobalSubShieldMixinImpl(GlobalSubShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::GlobalSubShieldMixin::GlobalSubShieldMixin(this);
  v1 = (int (**)(...))(&`vtable for'GlobalSubShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 76: range 00000000158A6312-00000000158A636A
void __cdecl GlobalSubShieldMixinImpl::GlobalSubShieldMixinImpl(
        GlobalSubShieldMixinImpl *const this,
        const GlobalSubShieldMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::GlobalSubShieldMixin::GlobalSubShieldMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'GlobalSubShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 76: range 00000000158FF850-00000000158FF89D
void __cdecl GlobalSubShieldMixinImpl::~GlobalSubShieldMixinImpl(GlobalSubShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GlobalSubShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::GlobalSubShieldMixin::~GlobalSubShieldMixin(this);
};

// Line 76: range 00000000158FF89E-00000000158FF8C8
void __cdecl GlobalSubShieldMixinImpl::~GlobalSubShieldMixinImpl(GlobalSubShieldMixinImpl *const this)
{
  GlobalSubShieldMixinImpl::~GlobalSubShieldMixinImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 81: range 00000000155B6C7A-00000000155B6CC2
std::shared_ptr<data::ConfigAbilityMixin> __cdecl GlobalSubShieldMixinImpl::clone(GlobalSubShieldMixinImpl *const this)
{
  GlobalSubShieldMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<GlobalSubShieldMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<GlobalSubShieldMixinImpl,GlobalSubShieldMixinImpl&>(
    (GlobalSubShieldMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<GlobalSubShieldMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<GlobalSubShieldMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 84: range 00000000158A6878-00000000158A68D0
void __cdecl ShieldBarMixinImpl::ShieldBarMixinImpl(ShieldBarMixinImpl *const this, const ShieldBarMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ShieldBarMixin::ShieldBarMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ShieldBarMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 84: range 00000000158FF7D6-00000000158FF823
void __cdecl ShieldBarMixinImpl::~ShieldBarMixinImpl(ShieldBarMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ShieldBarMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ShieldBarMixin::~ShieldBarMixin(this);
};

// Line 84: range 00000000158FF824-00000000158FF84E
void __cdecl ShieldBarMixinImpl::~ShieldBarMixinImpl(ShieldBarMixinImpl *const this)
{
  ShieldBarMixinImpl::~ShieldBarMixinImpl(this);
  operator delete(this, 0x68uLL);
};

// Line 89: range 00000000155B6CC4-00000000155B6D0C
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ShieldBarMixinImpl::clone(ShieldBarMixinImpl *const this)
{
  ShieldBarMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ShieldBarMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ShieldBarMixinImpl,ShieldBarMixinImpl&>((ShieldBarMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ShieldBarMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ShieldBarMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 92: range 00000000135AC028-00000000135AC075
void __cdecl EntityDefenceMixinImpl::EntityDefenceMixinImpl(EntityDefenceMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::EntityDefenceMixin::EntityDefenceMixin(this);
  v1 = (int (**)(...))(&`vtable for'EntityDefenceMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 92: range 00000000158A6E78-00000000158A6ED0
void __cdecl EntityDefenceMixinImpl::EntityDefenceMixinImpl(
        EntityDefenceMixinImpl *const this,
        const EntityDefenceMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::EntityDefenceMixin::EntityDefenceMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'EntityDefenceMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 92: range 00000000158FF7AA-00000000158FF7D4
void __cdecl EntityDefenceMixinImpl::~EntityDefenceMixinImpl(EntityDefenceMixinImpl *const this)
{
  EntityDefenceMixinImpl::~EntityDefenceMixinImpl(this);
  operator delete(this, 0x100uLL);
};

// Line 92: range 00000000158FF75C-00000000158FF7A9
void __cdecl EntityDefenceMixinImpl::~EntityDefenceMixinImpl(EntityDefenceMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EntityDefenceMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::EntityDefenceMixin::~EntityDefenceMixin(this);
};

// Line 97: range 00000000155B6D0E-00000000155B6D56
std::shared_ptr<data::ConfigAbilityMixin> __cdecl EntityDefenceMixinImpl::clone(EntityDefenceMixinImpl *const this)
{
  EntityDefenceMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<EntityDefenceMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<EntityDefenceMixinImpl,EntityDefenceMixinImpl&>((EntityDefenceMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<EntityDefenceMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<EntityDefenceMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 100: range 00000000158A74EA-00000000158A7542
void __cdecl MonsterDefendMixinImpl::MonsterDefendMixinImpl(
        MonsterDefendMixinImpl *const this,
        const MonsterDefendMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::MonsterDefendMixin::MonsterDefendMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'MonsterDefendMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 100: range 00000000158FF730-00000000158FF75A
void __cdecl MonsterDefendMixinImpl::~MonsterDefendMixinImpl(MonsterDefendMixinImpl *const this)
{
  MonsterDefendMixinImpl::~MonsterDefendMixinImpl(this);
  operator delete(this, 0x150uLL);
};

// Line 100: range 00000000158FF6E2-00000000158FF72F
void __cdecl MonsterDefendMixinImpl::~MonsterDefendMixinImpl(MonsterDefendMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterDefendMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::MonsterDefendMixin::~MonsterDefendMixin(this);
};

// Line 105: range 00000000155B6D58-00000000155B6DA0
std::shared_ptr<data::ConfigAbilityMixin> __cdecl MonsterDefendMixinImpl::clone(MonsterDefendMixinImpl *const this)
{
  MonsterDefendMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<MonsterDefendMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<MonsterDefendMixinImpl,MonsterDefendMixinImpl&>((MonsterDefendMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<MonsterDefendMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<MonsterDefendMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 108: range 00000000158A856A-00000000158A85C2
void __cdecl WindSeedSpawnerMixinImpl::WindSeedSpawnerMixinImpl(
        WindSeedSpawnerMixinImpl *const this,
        const WindSeedSpawnerMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::WindSeedSpawnerMixin::WindSeedSpawnerMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'WindSeedSpawnerMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 108: range 00000000158FF6B6-00000000158FF6E0
void __cdecl WindSeedSpawnerMixinImpl::~WindSeedSpawnerMixinImpl(WindSeedSpawnerMixinImpl *const this)
{
  WindSeedSpawnerMixinImpl::~WindSeedSpawnerMixinImpl(this);
  operator delete(this, 0x118uLL);
};

// Line 108: range 00000000158FF668-00000000158FF6B5
void __cdecl WindSeedSpawnerMixinImpl::~WindSeedSpawnerMixinImpl(WindSeedSpawnerMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'WindSeedSpawnerMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::WindSeedSpawnerMixin::~WindSeedSpawnerMixin(this);
};

// Line 111: range 00000000135A9AE4-00000000135A9B31
void __cdecl DebugMixinImpl::DebugMixinImpl(DebugMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::DebugMixin::DebugMixin(this);
  v1 = (int (**)(...))(&`vtable for'DebugMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 113: range 00000000155B6DA2-00000000155B6DEA
std::shared_ptr<data::ConfigAbilityMixin> __cdecl WindSeedSpawnerMixinImpl::clone(WindSeedSpawnerMixinImpl *const this)
{
  WindSeedSpawnerMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<WindSeedSpawnerMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<WindSeedSpawnerMixinImpl,WindSeedSpawnerMixinImpl&>(
    (WindSeedSpawnerMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<WindSeedSpawnerMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<WindSeedSpawnerMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 116: range 00000000135AD45E-00000000135AD4AB
void __cdecl ServerCreateGadgetOnKillMixinImpl::ServerCreateGadgetOnKillMixinImpl(
        ServerCreateGadgetOnKillMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ServerCreateGadgetOnKillMixin::ServerCreateGadgetOnKillMixin(this);
  v1 = (int (**)(...))(&`vtable for'ServerCreateGadgetOnKillMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 116: range 00000000158A8B10-00000000158A8B68
void __cdecl ServerCreateGadgetOnKillMixinImpl::ServerCreateGadgetOnKillMixinImpl(
        ServerCreateGadgetOnKillMixinImpl *const this,
        const ServerCreateGadgetOnKillMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ServerCreateGadgetOnKillMixin::ServerCreateGadgetOnKillMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ServerCreateGadgetOnKillMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 116: range 00000000158FF5EE-00000000158FF63B
void __cdecl ServerCreateGadgetOnKillMixinImpl::~ServerCreateGadgetOnKillMixinImpl(
        ServerCreateGadgetOnKillMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServerCreateGadgetOnKillMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ServerCreateGadgetOnKillMixin::~ServerCreateGadgetOnKillMixin(this);
};

// Line 116: range 00000000158FF63C-00000000158FF666
void __cdecl ServerCreateGadgetOnKillMixinImpl::~ServerCreateGadgetOnKillMixinImpl(
        ServerCreateGadgetOnKillMixinImpl *const this)
{
  ServerCreateGadgetOnKillMixinImpl::~ServerCreateGadgetOnKillMixinImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 121: range 00000000155B6DEC-00000000155B6E34
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ServerCreateGadgetOnKillMixinImpl::clone(
        ServerCreateGadgetOnKillMixinImpl *const this)
{
  ServerCreateGadgetOnKillMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ServerCreateGadgetOnKillMixinImpl,ServerCreateGadgetOnKillMixinImpl&>(
    (ServerCreateGadgetOnKillMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ServerCreateGadgetOnKillMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ServerCreateGadgetOnKillMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 124: range 00000000135ADCF4-00000000135ADD41
void __cdecl ModifyDamageMixinImpl::ModifyDamageMixinImpl(ModifyDamageMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifyDamageMixin::ModifyDamageMixin(this);
  v1 = (int (**)(...))(&`vtable for'ModifyDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 124: range 00000000158A9296-00000000158A92EE
void __cdecl ModifyDamageMixinImpl::ModifyDamageMixinImpl(
        ModifyDamageMixinImpl *const this,
        const ModifyDamageMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifyDamageMixin::ModifyDamageMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifyDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 124: range 00000000158FF574-00000000158FF5C1
void __cdecl ModifyDamageMixinImpl::~ModifyDamageMixinImpl(ModifyDamageMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifyDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ModifyDamageMixin::~ModifyDamageMixin(this);
};

// Line 124: range 00000000158FF5C2-00000000158FF5EC
void __cdecl ModifyDamageMixinImpl::~ModifyDamageMixinImpl(ModifyDamageMixinImpl *const this)
{
  ModifyDamageMixinImpl::~ModifyDamageMixinImpl(this);
  operator delete(this, 0x160uLL);
};

// Line 129: range 00000000155B6E36-00000000155B6E7E
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ModifyDamageMixinImpl::clone(ModifyDamageMixinImpl *const this)
{
  ModifyDamageMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ModifyDamageMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifyDamageMixinImpl,ModifyDamageMixinImpl&>((ModifyDamageMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ModifyDamageMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ModifyDamageMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 132: range 00000000158A96C0-00000000158A9718
void __cdecl ElementHittingOtherPredicatedMixinImpl::ElementHittingOtherPredicatedMixinImpl(
        ElementHittingOtherPredicatedMixinImpl *const this,
        const ElementHittingOtherPredicatedMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ElementHittingOtherPredicatedMixin::ElementHittingOtherPredicatedMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ElementHittingOtherPredicatedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 132: range 00000000158FF4FA-00000000158FF547
void __cdecl ElementHittingOtherPredicatedMixinImpl::~ElementHittingOtherPredicatedMixinImpl(
        ElementHittingOtherPredicatedMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ElementHittingOtherPredicatedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ElementHittingOtherPredicatedMixin::~ElementHittingOtherPredicatedMixin(this);
};

// Line 132: range 00000000158FF548-00000000158FF572
void __cdecl ElementHittingOtherPredicatedMixinImpl::~ElementHittingOtherPredicatedMixinImpl(
        ElementHittingOtherPredicatedMixinImpl *const this)
{
  ElementHittingOtherPredicatedMixinImpl::~ElementHittingOtherPredicatedMixinImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 134: range 00000000155B6E80-00000000155B6EC8
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ElementHittingOtherPredicatedMixinImpl::clone(
        ElementHittingOtherPredicatedMixinImpl *const this)
{
  ElementHittingOtherPredicatedMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ElementHittingOtherPredicatedMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ElementHittingOtherPredicatedMixinImpl,ElementHittingOtherPredicatedMixinImpl&>(
    (ElementHittingOtherPredicatedMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ElementHittingOtherPredicatedMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ElementHittingOtherPredicatedMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 138: range 00000000158A9BA4-00000000158A9BFC
void __cdecl ResistClimateMixinImpl::ResistClimateMixinImpl(
        ResistClimateMixinImpl *const this,
        const ResistClimateMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ResistClimateMixin::ResistClimateMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ResistClimateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 138: range 00000000158FF480-00000000158FF4CD
void __cdecl ResistClimateMixinImpl::~ResistClimateMixinImpl(ResistClimateMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ResistClimateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ResistClimateMixin::~ResistClimateMixin(this);
};

// Line 138: range 00000000158FF4CE-00000000158FF4F8
void __cdecl ResistClimateMixinImpl::~ResistClimateMixinImpl(ResistClimateMixinImpl *const this)
{
  ResistClimateMixinImpl::~ResistClimateMixinImpl(this);
  operator delete(this, 0x68uLL);
};

// Line 143: range 00000000155B6ECA-00000000155B6F12
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ResistClimateMixinImpl::clone(ResistClimateMixinImpl *const this)
{
  ResistClimateMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ResistClimateMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ResistClimateMixinImpl,ResistClimateMixinImpl&>((ResistClimateMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ResistClimateMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ResistClimateMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 147: range 00000000158AA004-00000000158AA05C
void __cdecl ModifySkillCDByModifierCountMixinImpl::ModifySkillCDByModifierCountMixinImpl(
        ModifySkillCDByModifierCountMixinImpl *const this,
        const ModifySkillCDByModifierCountMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifySkillCDByModifierCountMixin::ModifySkillCDByModifierCountMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifySkillCDByModifierCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 147: range 00000000158FF454-00000000158FF47E
void __cdecl ModifySkillCDByModifierCountMixinImpl::~ModifySkillCDByModifierCountMixinImpl(
        ModifySkillCDByModifierCountMixinImpl *const this)
{
  ModifySkillCDByModifierCountMixinImpl::~ModifySkillCDByModifierCountMixinImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 147: range 00000000158FF406-00000000158FF453
void __cdecl ModifySkillCDByModifierCountMixinImpl::~ModifySkillCDByModifierCountMixinImpl(
        ModifySkillCDByModifierCountMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifySkillCDByModifierCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ModifySkillCDByModifierCountMixin::~ModifySkillCDByModifierCountMixin(this);
};

// Line 152: range 00000000155B6F14-00000000155B6F5C
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ModifySkillCDByModifierCountMixinImpl::clone(
        ModifySkillCDByModifierCountMixinImpl *const this)
{
  ModifySkillCDByModifierCountMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifySkillCDByModifierCountMixinImpl,ModifySkillCDByModifierCountMixinImpl&>(
    (ModifySkillCDByModifierCountMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ModifySkillCDByModifierCountMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ModifySkillCDByModifierCountMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 155: range 00000000158AA3AE-00000000158AA406
void __cdecl ServerFinishWatcherMixinImpl::ServerFinishWatcherMixinImpl(
        ServerFinishWatcherMixinImpl *const this,
        const ServerFinishWatcherMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ServerFinishWatcherMixin::ServerFinishWatcherMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ServerFinishWatcherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 155: range 00000000158FF3DA-00000000158FF404
void __cdecl ServerFinishWatcherMixinImpl::~ServerFinishWatcherMixinImpl(ServerFinishWatcherMixinImpl *const this)
{
  ServerFinishWatcherMixinImpl::~ServerFinishWatcherMixinImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 155: range 00000000158FF38C-00000000158FF3D9
void __cdecl ServerFinishWatcherMixinImpl::~ServerFinishWatcherMixinImpl(ServerFinishWatcherMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ServerFinishWatcherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ServerFinishWatcherMixin::~ServerFinishWatcherMixin(this);
};

// Line 158: range 00000000155B6F5E-00000000155B6FA6
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ServerFinishWatcherMixinImpl::clone(
        ServerFinishWatcherMixinImpl *const this)
{
  ServerFinishWatcherMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ServerFinishWatcherMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ServerFinishWatcherMixinImpl,ServerFinishWatcherMixinImpl&>(
    (ServerFinishWatcherMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ServerFinishWatcherMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ServerFinishWatcherMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 161: range 00000000158AA70A-00000000158AA762
void __cdecl MoveStateMixinImpl::MoveStateMixinImpl(MoveStateMixinImpl *const this, const MoveStateMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::MoveStateMixin::MoveStateMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'MoveStateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 161: range 00000000158FF360-00000000158FF38A
void __cdecl MoveStateMixinImpl::~MoveStateMixinImpl(MoveStateMixinImpl *const this)
{
  MoveStateMixinImpl::~MoveStateMixinImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 161: range 00000000158FF312-00000000158FF35F
void __cdecl MoveStateMixinImpl::~MoveStateMixinImpl(MoveStateMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MoveStateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::MoveStateMixin::~MoveStateMixin(this);
};

// Line 166: range 00000000155B6FA8-00000000155B6FF0
std::shared_ptr<data::ConfigAbilityMixin> __cdecl MoveStateMixinImpl::clone(MoveStateMixinImpl *const this)
{
  MoveStateMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<MoveStateMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<MoveStateMixinImpl,MoveStateMixinImpl&>((MoveStateMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<MoveStateMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<MoveStateMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 169: range 00000000135AEF4E-00000000135AEF9B
void __cdecl FieldEntityCountChangeMixinImpl::FieldEntityCountChangeMixinImpl(
        FieldEntityCountChangeMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::FieldEntityCountChangeMixin::FieldEntityCountChangeMixin(this);
  v1 = (int (**)(...))(&`vtable for'FieldEntityCountChangeMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 169: range 00000000158AAD7E-00000000158AADD6
void __cdecl FieldEntityCountChangeMixinImpl::FieldEntityCountChangeMixinImpl(
        FieldEntityCountChangeMixinImpl *const this,
        const FieldEntityCountChangeMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::FieldEntityCountChangeMixin::FieldEntityCountChangeMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'FieldEntityCountChangeMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 169: range 00000000158FF298-00000000158FF2E5
void __cdecl FieldEntityCountChangeMixinImpl::~FieldEntityCountChangeMixinImpl(
        FieldEntityCountChangeMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FieldEntityCountChangeMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::FieldEntityCountChangeMixin::~FieldEntityCountChangeMixin(this);
};

// Line 169: range 00000000158FF2E6-00000000158FF310
void __cdecl FieldEntityCountChangeMixinImpl::~FieldEntityCountChangeMixinImpl(
        FieldEntityCountChangeMixinImpl *const this)
{
  FieldEntityCountChangeMixinImpl::~FieldEntityCountChangeMixinImpl(this);
  operator delete(this, 0xE0uLL);
};

// Line 173: range 00000000155B6FF2-00000000155B703A
std::shared_ptr<data::ConfigAbilityMixin> __cdecl FieldEntityCountChangeMixinImpl::clone(
        FieldEntityCountChangeMixinImpl *const this)
{
  FieldEntityCountChangeMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<FieldEntityCountChangeMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<FieldEntityCountChangeMixinImpl,FieldEntityCountChangeMixinImpl&>(
    (FieldEntityCountChangeMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<FieldEntityCountChangeMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<FieldEntityCountChangeMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 176: range 00000000135AF2B8-00000000135AF305
void __cdecl ScenePropSyncMixinImpl::ScenePropSyncMixinImpl(ScenePropSyncMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ScenePropSyncMixin::ScenePropSyncMixin(this);
  v1 = (int (**)(...))(&`vtable for'ScenePropSyncMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 176: range 00000000158AB12A-00000000158AB182
void __cdecl ScenePropSyncMixinImpl::ScenePropSyncMixinImpl(
        ScenePropSyncMixinImpl *const this,
        const ScenePropSyncMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ScenePropSyncMixin::ScenePropSyncMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ScenePropSyncMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 176: range 00000000158FF26C-00000000158FF296
void __cdecl ScenePropSyncMixinImpl::~ScenePropSyncMixinImpl(ScenePropSyncMixinImpl *const this)
{
  ScenePropSyncMixinImpl::~ScenePropSyncMixinImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 176: range 00000000158FF21E-00000000158FF26B
void __cdecl ScenePropSyncMixinImpl::~ScenePropSyncMixinImpl(ScenePropSyncMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ScenePropSyncMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ScenePropSyncMixin::~ScenePropSyncMixin(this);
};

// Line 180: range 00000000155B703C-00000000155B7084
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ScenePropSyncMixinImpl::clone(ScenePropSyncMixinImpl *const this)
{
  ScenePropSyncMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ScenePropSyncMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ScenePropSyncMixinImpl,ScenePropSyncMixinImpl&>((ScenePropSyncMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ScenePropSyncMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ScenePropSyncMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 183: range 00000000158AB514-00000000158AB56C
void __cdecl ClampDamageReceivedMixinImpl::ClampDamageReceivedMixinImpl(
        ClampDamageReceivedMixinImpl *const this,
        const ClampDamageReceivedMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ClampDamageReceivedMixin::ClampDamageReceivedMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ClampDamageReceivedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 183: range 00000000158FF1F2-00000000158FF21C
void __cdecl ClampDamageReceivedMixinImpl::~ClampDamageReceivedMixinImpl(ClampDamageReceivedMixinImpl *const this)
{
  ClampDamageReceivedMixinImpl::~ClampDamageReceivedMixinImpl(this);
  operator delete(this, 0x68uLL);
};

// Line 183: range 00000000158FF1A4-00000000158FF1F1
void __cdecl ClampDamageReceivedMixinImpl::~ClampDamageReceivedMixinImpl(ClampDamageReceivedMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ClampDamageReceivedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ClampDamageReceivedMixin::~ClampDamageReceivedMixin(this);
};

// Line 188: range 00000000155B7086-00000000155B70CE
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ClampDamageReceivedMixinImpl::clone(
        ClampDamageReceivedMixinImpl *const this)
{
  ClampDamageReceivedMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ClampDamageReceivedMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ClampDamageReceivedMixinImpl,ClampDamageReceivedMixinImpl&>(
    (ClampDamageReceivedMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ClampDamageReceivedMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ClampDamageReceivedMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 191: range 00000000158AB8CA-00000000158AB922
void __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::DoActionBySelfModifierElementDurabilityRatioMixinImpl(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this,
        const DoActionBySelfModifierElementDurabilityRatioMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::DoActionBySelfModifierElementDurabilityRatioMixin::DoActionBySelfModifierElementDurabilityRatioMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'DoActionBySelfModifierElementDurabilityRatioMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 191: range 00000000158FF178-00000000158FF1A2
void __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::~DoActionBySelfModifierElementDurabilityRatioMixinImpl(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this)
{
  DoActionBySelfModifierElementDurabilityRatioMixinImpl::~DoActionBySelfModifierElementDurabilityRatioMixinImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 191: range 00000000158FF12A-00000000158FF177
void __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::~DoActionBySelfModifierElementDurabilityRatioMixinImpl(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DoActionBySelfModifierElementDurabilityRatioMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DoActionBySelfModifierElementDurabilityRatioMixin::~DoActionBySelfModifierElementDurabilityRatioMixin(this);
};

// Line 196: range 00000000155B70D0-00000000155B7118
std::shared_ptr<data::ConfigAbilityMixin> __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::clone(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this)
{
  DoActionBySelfModifierElementDurabilityRatioMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DoActionBySelfModifierElementDurabilityRatioMixinImpl,DoActionBySelfModifierElementDurabilityRatioMixinImpl&>(
    (DoActionBySelfModifierElementDurabilityRatioMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<DoActionBySelfModifierElementDurabilityRatioMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 199: range 00000000158ABE76-00000000158ABECE
void __cdecl FireworksLauncherMixinImpl::FireworksLauncherMixinImpl(
        FireworksLauncherMixinImpl *const this,
        const FireworksLauncherMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::FireworksLauncherMixin::FireworksLauncherMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'FireworksLauncherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 199: range 00000000158FF0FE-00000000158FF128
void __cdecl FireworksLauncherMixinImpl::~FireworksLauncherMixinImpl(FireworksLauncherMixinImpl *const this)
{
  FireworksLauncherMixinImpl::~FireworksLauncherMixinImpl(this);
  operator delete(this, 0x150uLL);
};

// Line 199: range 00000000158FF0B0-00000000158FF0FD
void __cdecl FireworksLauncherMixinImpl::~FireworksLauncherMixinImpl(FireworksLauncherMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FireworksLauncherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::FireworksLauncherMixin::~FireworksLauncherMixin(this);
};

// Line 204: range 00000000155B711A-00000000155B7162
std::shared_ptr<data::ConfigAbilityMixin> __cdecl FireworksLauncherMixinImpl::clone(
        FireworksLauncherMixinImpl *const this)
{
  FireworksLauncherMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<FireworksLauncherMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<FireworksLauncherMixinImpl,FireworksLauncherMixinImpl&>(
    (FireworksLauncherMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<FireworksLauncherMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<FireworksLauncherMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 207: range 00000000158AC30E-00000000158AC366
void __cdecl ModifyDamageCountMixinImpl::ModifyDamageCountMixinImpl(
        ModifyDamageCountMixinImpl *const this,
        const ModifyDamageCountMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifyDamageCountMixin::ModifyDamageCountMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifyDamageCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 207: range 00000000158FF036-00000000158FF083
void __cdecl ModifyDamageCountMixinImpl::~ModifyDamageCountMixinImpl(ModifyDamageCountMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifyDamageCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ModifyDamageCountMixin::~ModifyDamageCountMixin(this);
};

// Line 207: range 00000000158FF084-00000000158FF0AE
void __cdecl ModifyDamageCountMixinImpl::~ModifyDamageCountMixinImpl(ModifyDamageCountMixinImpl *const this)
{
  ModifyDamageCountMixinImpl::~ModifyDamageCountMixinImpl(this);
  operator delete(this, 0x1D0uLL);
};

// Line 212: range 00000000155B7164-00000000155B71AC
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ModifyDamageCountMixinImpl::clone(
        ModifyDamageCountMixinImpl *const this)
{
  ModifyDamageCountMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ModifyDamageCountMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifyDamageCountMixinImpl,ModifyDamageCountMixinImpl&>(
    (ModifyDamageCountMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ModifyDamageCountMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ModifyDamageCountMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 215: range 00000000158AC8DE-00000000158AC936
void __cdecl ModifyBeHitDamageMixinImpl::ModifyBeHitDamageMixinImpl(
        ModifyBeHitDamageMixinImpl *const this,
        const ModifyBeHitDamageMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::ModifyBeHitDamageMixin::ModifyBeHitDamageMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'ModifyBeHitDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 215: range 00000000158FF00A-00000000158FF034
void __cdecl ModifyBeHitDamageMixinImpl::~ModifyBeHitDamageMixinImpl(ModifyBeHitDamageMixinImpl *const this)
{
  ModifyBeHitDamageMixinImpl::~ModifyBeHitDamageMixinImpl(this);
  operator delete(this, 0x2A0uLL);
};

// Line 215: range 00000000158FEFBC-00000000158FF009
void __cdecl ModifyBeHitDamageMixinImpl::~ModifyBeHitDamageMixinImpl(ModifyBeHitDamageMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ModifyBeHitDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::ModifyBeHitDamageMixin::~ModifyBeHitDamageMixin(this);
};

// Line 220: range 00000000155B71AE-00000000155B71F6
std::shared_ptr<data::ConfigAbilityMixin> __cdecl ModifyBeHitDamageMixinImpl::clone(
        ModifyBeHitDamageMixinImpl *const this)
{
  ModifyBeHitDamageMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<ModifyBeHitDamageMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifyBeHitDamageMixinImpl,ModifyBeHitDamageMixinImpl&>(
    (ModifyBeHitDamageMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<ModifyBeHitDamageMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<ModifyBeHitDamageMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 223: range 00000000158ACD14-00000000158ACD6C
void __cdecl DamageStatisticsMixinImpl::DamageStatisticsMixinImpl(
        DamageStatisticsMixinImpl *const this,
        const DamageStatisticsMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::DamageStatisticsMixin::DamageStatisticsMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'DamageStatisticsMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 223: range 00000000158FEF90-00000000158FEFBA
void __cdecl DamageStatisticsMixinImpl::~DamageStatisticsMixinImpl(DamageStatisticsMixinImpl *const this)
{
  DamageStatisticsMixinImpl::~DamageStatisticsMixinImpl(this);
  operator delete(this, 0x78uLL);
};

// Line 223: range 00000000158FEF42-00000000158FEF8F
void __cdecl DamageStatisticsMixinImpl::~DamageStatisticsMixinImpl(DamageStatisticsMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DamageStatisticsMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DamageStatisticsMixin::~DamageStatisticsMixin(this);
};

// Line 228: range 00000000155B71F8-00000000155B7240
std::shared_ptr<data::ConfigAbilityMixin> __cdecl DamageStatisticsMixinImpl::clone(
        DamageStatisticsMixinImpl *const this)
{
  DamageStatisticsMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<DamageStatisticsMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DamageStatisticsMixinImpl,DamageStatisticsMixinImpl&>(
    (DamageStatisticsMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<DamageStatisticsMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<DamageStatisticsMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 231: range 00000000158ACFFC-00000000158AD054
void __cdecl UGCTimeControlMixinImpl::UGCTimeControlMixinImpl(
        UGCTimeControlMixinImpl *const this,
        const UGCTimeControlMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::UGCTimeControlMixin::UGCTimeControlMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'UGCTimeControlMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 231: range 00000000158FEEC8-00000000158FEF15
void __cdecl UGCTimeControlMixinImpl::~UGCTimeControlMixinImpl(UGCTimeControlMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'UGCTimeControlMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::UGCTimeControlMixin::~UGCTimeControlMixin(this);
};

// Line 231: range 00000000158FEF16-00000000158FEF40
void __cdecl UGCTimeControlMixinImpl::~UGCTimeControlMixinImpl(UGCTimeControlMixinImpl *const this)
{
  UGCTimeControlMixinImpl::~UGCTimeControlMixinImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 236: range 00000000155B7242-00000000155B728A
std::shared_ptr<data::ConfigAbilityMixin> __cdecl UGCTimeControlMixinImpl::clone(UGCTimeControlMixinImpl *const this)
{
  UGCTimeControlMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<UGCTimeControlMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<UGCTimeControlMixinImpl,UGCTimeControlMixinImpl&>(
    (UGCTimeControlMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<UGCTimeControlMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<UGCTimeControlMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 239: range 00000000158AD2F2-00000000158AD34A
void __cdecl AvatarCombatMixinImpl::AvatarCombatMixinImpl(
        AvatarCombatMixinImpl *const this,
        const AvatarCombatMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::AvatarCombatMixin::AvatarCombatMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'AvatarCombatMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 239: range 00000000158FEE9C-00000000158FEEC6
void __cdecl AvatarCombatMixinImpl::~AvatarCombatMixinImpl(AvatarCombatMixinImpl *const this)
{
  AvatarCombatMixinImpl::~AvatarCombatMixinImpl(this);
  operator delete(this, 0x50uLL);
};

// Line 239: range 00000000158FEE4E-00000000158FEE9B
void __cdecl AvatarCombatMixinImpl::~AvatarCombatMixinImpl(AvatarCombatMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarCombatMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::AvatarCombatMixin::~AvatarCombatMixin(this);
};

// Line 244: range 00000000155B728C-00000000155B72D4
std::shared_ptr<data::ConfigAbilityMixin> __cdecl AvatarCombatMixinImpl::clone(AvatarCombatMixinImpl *const this)
{
  AvatarCombatMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<AvatarCombatMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AvatarCombatMixinImpl,AvatarCombatMixinImpl&>((AvatarCombatMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<AvatarCombatMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<AvatarCombatMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 246: range 00000000155B6A74-00000000155B6ABC
std::shared_ptr<data::ConfigAbilityMixin> __cdecl DebugMixinImpl::clone(DebugMixinImpl *const this)
{
  DebugMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<DebugMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DebugMixinImpl,DebugMixinImpl&>((DebugMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<DebugMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<DebugMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 247: range 00000000158AD5DA-00000000158AD632
void __cdecl DeathZoneRegionalPlayMixinImpl::DeathZoneRegionalPlayMixinImpl(
        DeathZoneRegionalPlayMixinImpl *const this,
        const DeathZoneRegionalPlayMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::DeathZoneRegionalPlayMixin::DeathZoneRegionalPlayMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'DeathZoneRegionalPlayMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 247: range 00000000158FEE22-00000000158FEE4C
void __cdecl DeathZoneRegionalPlayMixinImpl::~DeathZoneRegionalPlayMixinImpl(
        DeathZoneRegionalPlayMixinImpl *const this)
{
  DeathZoneRegionalPlayMixinImpl::~DeathZoneRegionalPlayMixinImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 247: range 00000000158FEDD4-00000000158FEE21
void __cdecl DeathZoneRegionalPlayMixinImpl::~DeathZoneRegionalPlayMixinImpl(
        DeathZoneRegionalPlayMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DeathZoneRegionalPlayMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::DeathZoneRegionalPlayMixin::~DeathZoneRegionalPlayMixin(this);
};

// Line 252: range 00000000155B72D6-00000000155B731E
std::shared_ptr<data::ConfigAbilityMixin> __cdecl DeathZoneRegionalPlayMixinImpl::clone(
        DeathZoneRegionalPlayMixinImpl *const this)
{
  DeathZoneRegionalPlayMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<DeathZoneRegionalPlayMixinImpl,DeathZoneRegionalPlayMixinImpl&>(
    (DeathZoneRegionalPlayMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<DeathZoneRegionalPlayMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<DeathZoneRegionalPlayMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 255: range 00000000135B1D3A-00000000135B1D87
void __cdecl EraseBrickActivityMixinImpl::EraseBrickActivityMixinImpl(EraseBrickActivityMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::EraseBrickActivityMixin::EraseBrickActivityMixin(this);
  v1 = (int (**)(...))(&`vtable for'EraseBrickActivityMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 255: range 00000000158ADEF2-00000000158ADF4A
void __cdecl EraseBrickActivityMixinImpl::EraseBrickActivityMixinImpl(
        EraseBrickActivityMixinImpl *const this,
        const EraseBrickActivityMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::EraseBrickActivityMixin::EraseBrickActivityMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'EraseBrickActivityMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 255: range 00000000158FEDA8-00000000158FEDD2
void __cdecl EraseBrickActivityMixinImpl::~EraseBrickActivityMixinImpl(EraseBrickActivityMixinImpl *const this)
{
  EraseBrickActivityMixinImpl::~EraseBrickActivityMixinImpl(this);
  operator delete(this, 0x2F8uLL);
};

// Line 255: range 00000000158FED5A-00000000158FEDA7
void __cdecl EraseBrickActivityMixinImpl::~EraseBrickActivityMixinImpl(EraseBrickActivityMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EraseBrickActivityMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::EraseBrickActivityMixin::~EraseBrickActivityMixin(this);
};

// Line 260: range 00000000155B7320-00000000155B7368
std::shared_ptr<data::ConfigAbilityMixin> __cdecl EraseBrickActivityMixinImpl::clone(
        EraseBrickActivityMixinImpl *const this)
{
  EraseBrickActivityMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<EraseBrickActivityMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<EraseBrickActivityMixinImpl,EraseBrickActivityMixinImpl&>(
    (EraseBrickActivityMixinImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<EraseBrickActivityMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<EraseBrickActivityMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 263: range 00000000158AE63C-00000000158AE694
void __cdecl BreakoutMixinImpl::BreakoutMixinImpl(BreakoutMixinImpl *const this, const BreakoutMixinImpl *a2)
{
  int (**v2)(...); // rdx

  data::BreakoutMixin::BreakoutMixin(this, a2);
  v2 = (int (**)(...))(&`vtable for'BreakoutMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v2;
};

// Line 263: range 00000000158FED2E-00000000158FED58
void __cdecl BreakoutMixinImpl::~BreakoutMixinImpl(BreakoutMixinImpl *const this)
{
  BreakoutMixinImpl::~BreakoutMixinImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 263: range 00000000158FECE0-00000000158FED2D
void __cdecl BreakoutMixinImpl::~BreakoutMixinImpl(BreakoutMixinImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BreakoutMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
  data::BreakoutMixin::~BreakoutMixin(this);
};

// Line 268: range 00000000155B736A-00000000155B73B2
std::shared_ptr<data::ConfigAbilityMixin> __cdecl BreakoutMixinImpl::clone(BreakoutMixinImpl *const this)
{
  BreakoutMixinImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityMixin> result; // rax
  std::shared_ptr<BreakoutMixinImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<BreakoutMixinImpl,BreakoutMixinImpl&>((BreakoutMixinImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr<BreakoutMixinImpl,void>(
    (std::shared_ptr<data::ConfigAbilityMixin> *const)this,
    &__r);
  std::shared_ptr<BreakoutMixinImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 911: range 00000000135A9F9E-00000000135A9FEB
void __cdecl AvatarSteerByCameraMixinImpl::AvatarSteerByCameraMixinImpl(AvatarSteerByCameraMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::AvatarSteerByCameraMixin::AvatarSteerByCameraMixin(this);
  v1 = (int (**)(...))(&`vtable for'AvatarSteerByCameraMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 1156: range 00000000135ABBCE-00000000135ABC1B
void __cdecl ShieldBarMixinImpl::ShieldBarMixinImpl(ShieldBarMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ShieldBarMixin::ShieldBarMixin(this);
  v1 = (int (**)(...))(&`vtable for'ShieldBarMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 1953: range 00000000135ACFF0-00000000135AD03D
void __cdecl WindSeedSpawnerMixinImpl::WindSeedSpawnerMixinImpl(WindSeedSpawnerMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::WindSeedSpawnerMixin::WindSeedSpawnerMixin(this);
  v1 = (int (**)(...))(&`vtable for'WindSeedSpawnerMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2432: range 00000000135AA2B8-00000000135AA305
void __cdecl CostStaminaMixinImpl::CostStaminaMixinImpl(CostStaminaMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::CostStaminaMixin::CostStaminaMixin(this);
  v1 = (int (**)(...))(&`vtable for'CostStaminaMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2534: range 00000000135AC490-00000000135AC4DD
void __cdecl MonsterDefendMixinImpl::MonsterDefendMixinImpl(MonsterDefendMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::MonsterDefendMixin::MonsterDefendMixin(this);
  v1 = (int (**)(...))(&`vtable for'MonsterDefendMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2936: range 00000000135B0076-00000000135B00C3
void __cdecl ModifyDamageCountMixinImpl::ModifyDamageCountMixinImpl(ModifyDamageCountMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifyDamageCountMixin::ModifyDamageCountMixin(this);
  v1 = (int (**)(...))(&`vtable for'ModifyDamageCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 2977: range 00000000135B0448-00000000135B0495
void __cdecl ModifyBeHitDamageMixinImpl::ModifyBeHitDamageMixinImpl(ModifyBeHitDamageMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifyBeHitDamageMixin::ModifyBeHitDamageMixin(this);
  v1 = (int (**)(...))(&`vtable for'ModifyBeHitDamageMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3065: range 00000000135AE79E-00000000135AE7EB
void __cdecl ModifySkillCDByModifierCountMixinImpl::ModifySkillCDByModifierCountMixinImpl(
        ModifySkillCDByModifierCountMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ModifySkillCDByModifierCountMixin::ModifySkillCDByModifierCountMixin(this);
  v1 = (int (**)(...))(&`vtable for'ModifySkillCDByModifierCountMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 3828: range 00000000135AFD56-00000000135AFDA3
void __cdecl FireworksLauncherMixinImpl::FireworksLauncherMixinImpl(FireworksLauncherMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::FireworksLauncherMixin::FireworksLauncherMixin(this);
  v1 = (int (**)(...))(&`vtable for'FireworksLauncherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 4523: range 00000000135AB44E-00000000135AB49B
void __cdecl GlobalMainShieldMixinImpl::GlobalMainShieldMixinImpl(GlobalMainShieldMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::GlobalMainShieldMixin::GlobalMainShieldMixin(this);
  v1 = (int (**)(...))(&`vtable for'GlobalMainShieldMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 5752: range 00000000135AE0B8-00000000135AE105
void __cdecl ElementHittingOtherPredicatedMixinImpl::ElementHittingOtherPredicatedMixinImpl(
        ElementHittingOtherPredicatedMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ElementHittingOtherPredicatedMixin::ElementHittingOtherPredicatedMixin(this);
  v1 = (int (**)(...))(&`vtable for'ElementHittingOtherPredicatedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 5824: range 00000000135AE46A-00000000135AE4B7
void __cdecl ResistClimateMixinImpl::ResistClimateMixinImpl(ResistClimateMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ResistClimateMixin::ResistClimateMixin(this);
  v1 = (int (**)(...))(&`vtable for'ResistClimateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 6153: range 00000000135AEA74-00000000135AEAC1
void __cdecl MoveStateMixinImpl::MoveStateMixinImpl(MoveStateMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::MoveStateMixin::MoveStateMixin(this);
  v1 = (int (**)(...))(&`vtable for'MoveStateMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 6190: range 00000000135AD7A6-00000000135AD7F3
void __cdecl ServerFinishWatcherMixinImpl::ServerFinishWatcherMixinImpl(ServerFinishWatcherMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ServerFinishWatcherMixin::ServerFinishWatcherMixin(this);
  v1 = (int (**)(...))(&`vtable for'ServerFinishWatcherMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 7888: range 00000000135AF654-00000000135AF6A1
void __cdecl ClampDamageReceivedMixinImpl::ClampDamageReceivedMixinImpl(ClampDamageReceivedMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::ClampDamageReceivedMixin::ClampDamageReceivedMixin(this);
  v1 = (int (**)(...))(&`vtable for'ClampDamageReceivedMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 8378: range 00000000135AFA12-00000000135AFA5F
void __cdecl DoActionBySelfModifierElementDurabilityRatioMixinImpl::DoActionBySelfModifierElementDurabilityRatioMixinImpl(
        DoActionBySelfModifierElementDurabilityRatioMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::DoActionBySelfModifierElementDurabilityRatioMixin::DoActionBySelfModifierElementDurabilityRatioMixin(this);
  v1 = (int (**)(...))(&`vtable for'DoActionBySelfModifierElementDurabilityRatioMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 8644: range 00000000135B0E74-00000000135B0EC1
void __cdecl AvatarCombatMixinImpl::AvatarCombatMixinImpl(AvatarCombatMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::AvatarCombatMixin::AvatarCombatMixin(this);
  v1 = (int (**)(...))(&`vtable for'AvatarCombatMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 8784: range 00000000135B0A6E-00000000135B0ABB
void __cdecl UGCTimeControlMixinImpl::UGCTimeControlMixinImpl(UGCTimeControlMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::UGCTimeControlMixin::UGCTimeControlMixin(this);
  v1 = (int (**)(...))(&`vtable for'UGCTimeControlMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 10447: range 00000000135B117E-00000000135B11CB
void __cdecl DeathZoneRegionalPlayMixinImpl::DeathZoneRegionalPlayMixinImpl(DeathZoneRegionalPlayMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::DeathZoneRegionalPlayMixin::DeathZoneRegionalPlayMixin(this);
  v1 = (int (**)(...))(&`vtable for'DeathZoneRegionalPlayMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 10483: range 00000000135B07D6-00000000135B0823
void __cdecl DamageStatisticsMixinImpl::DamageStatisticsMixinImpl(DamageStatisticsMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::DamageStatisticsMixin::DamageStatisticsMixin(this);
  v1 = (int (**)(...))(&`vtable for'DamageStatisticsMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

// Line 11120: range 00000000135B22B2-00000000135B22FF
void __cdecl BreakoutMixinImpl::BreakoutMixinImpl(BreakoutMixinImpl *const this)
{
  int (**v1)(...); // rdx

  data::BreakoutMixin::BreakoutMixin(this);
  v1 = (int (**)(...))(&`vtable for'BreakoutMixinImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActionContainer = v1;
};

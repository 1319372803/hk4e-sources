// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_predicate_impl.h

// Line 22: range 00000000158C291A-00000000158C2972
void __cdecl ByHitElementImpl::ByHitElementImpl(ByHitElementImpl *const this, const ByHitElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHitElement::ByHitElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHitElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 22: range 00000000158FECB4-00000000158FECDE
void __cdecl ByHitElementImpl::~ByHitElementImpl(ByHitElementImpl *const this)
{
  ByHitElementImpl::~ByHitElementImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 22: range 00000000158FEC66-00000000158FECB3
void __cdecl ByHitElementImpl::~ByHitElementImpl(ByHitElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHitElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHitElement::~ByHitElement(this);
};

// Line 24: range 00000000155C6BF8-00000000155C6C40
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHitElementImpl::clone(ByHitElementImpl *const this)
{
  ByHitElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHitElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHitElementImpl,ByHitElementImpl&>((ByHitElementImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHitElementImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHitElementImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 28: range 00000000158C2D18-00000000158C2D70
void __cdecl ByTargetHPRatioImpl::ByTargetHPRatioImpl(ByTargetHPRatioImpl *const this, const ByTargetHPRatioImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetHPRatio::ByTargetHPRatio(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetHPRatioImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 28: range 00000000158FEC3A-00000000158FEC64
void __cdecl ByTargetHPRatioImpl::~ByTargetHPRatioImpl(ByTargetHPRatioImpl *const this)
{
  ByTargetHPRatioImpl::~ByTargetHPRatioImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 28: range 00000000158FEBEC-00000000158FEC39
void __cdecl ByTargetHPRatioImpl::~ByTargetHPRatioImpl(ByTargetHPRatioImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetHPRatioImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetHPRatio::~ByTargetHPRatio(this);
};

// Line 30: range 00000000155C6C42-00000000155C6C8A
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetHPRatioImpl::clone(ByTargetHPRatioImpl *const this)
{
  ByTargetHPRatioImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetHPRatioImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetHPRatioImpl,ByTargetHPRatioImpl&>((ByTargetHPRatioImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetHPRatioImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetHPRatioImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 34: range 00000000158C304E-00000000158C30A6
void __cdecl ByNotImpl::ByNotImpl(ByNotImpl *const this, const ByNotImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByNot::ByNot(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 34: range 00000000158FEB72-00000000158FEBBF
void __cdecl ByNotImpl::~ByNotImpl(ByNotImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByNot::~ByNot(this);
};

// Line 34: range 00000000158FEBC0-00000000158FEBEA
void __cdecl ByNotImpl::~ByNotImpl(ByNotImpl *const this)
{
  ByNotImpl::~ByNotImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 36: range 00000000155C6C8C-00000000155C6CD4
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByNotImpl::clone(ByNotImpl *const this)
{
  ByNotImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByNotImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByNotImpl,ByNotImpl&>((ByNotImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByNotImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByNotImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 40: range 00000000158C3384-00000000158C33DC
void __cdecl ByAnyImpl::ByAnyImpl(ByAnyImpl *const this, const ByAnyImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByAny::ByAny(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByAnyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 40: range 00000000158FE9D8-00000000158FEA02
void __cdecl ByAnyImpl::~ByAnyImpl(ByAnyImpl *const this)
{
  ByAnyImpl::~ByAnyImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 40: range 00000000158FE98A-00000000158FE9D7
void __cdecl ByAnyImpl::~ByAnyImpl(ByAnyImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByAnyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByAny::~ByAny(this);
};

// Line 42: range 00000000155C6CD6-00000000155C6D1E
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByAnyImpl::clone(ByAnyImpl *const this)
{
  ByAnyImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByAnyImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByAnyImpl,ByAnyImpl&>((ByAnyImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByAnyImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByAnyImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 46: range 00000000158C36BA-00000000158C3712
void __cdecl ByAndImpl::ByAndImpl(ByAndImpl *const this, const ByAndImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByAnd::ByAnd(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByAndImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 46: range 00000000158FEB46-00000000158FEB70
void __cdecl ByAndImpl::~ByAndImpl(ByAndImpl *const this)
{
  ByAndImpl::~ByAndImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 46: range 00000000158FEAF8-00000000158FEB45
void __cdecl ByAndImpl::~ByAndImpl(ByAndImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByAndImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByAnd::~ByAnd(this);
};

// Line 48: range 00000000155C6D20-00000000155C6D68
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByAndImpl::clone(ByAndImpl *const this)
{
  ByAndImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByAndImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByAndImpl,ByAndImpl&>((ByAndImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByAndImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByAndImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 52: range 00000000158C39F0-00000000158C3A48
void __cdecl ByAttackTagsImpl::ByAttackTagsImpl(ByAttackTagsImpl *const this, const ByAttackTagsImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByAttackTags::ByAttackTags(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByAttackTagsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 52: range 00000000158FEA7E-00000000158FEACB
void __cdecl ByAttackTagsImpl::~ByAttackTagsImpl(ByAttackTagsImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByAttackTagsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByAttackTags::~ByAttackTags(this);
};

// Line 52: range 00000000158FEACC-00000000158FEAF6
void __cdecl ByAttackTagsImpl::~ByAttackTagsImpl(ByAttackTagsImpl *const this)
{
  ByAttackTagsImpl::~ByAttackTagsImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 54: range 00000000155C6D6A-00000000155C6DB2
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByAttackTagsImpl::clone(ByAttackTagsImpl *const this)
{
  ByAttackTagsImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByAttackTagsImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByAttackTagsImpl,ByAttackTagsImpl&>((ByAttackTagsImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByAttackTagsImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByAttackTagsImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 58: range 00000000158C3DCC-00000000158C3E24
void __cdecl ByCompareWithTargetImpl::ByCompareWithTargetImpl(
        ByCompareWithTargetImpl *const this,
        const ByCompareWithTargetImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByCompareWithTarget::ByCompareWithTarget(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByCompareWithTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 58: range 00000000158FEA04-00000000158FEA51
void __cdecl ByCompareWithTargetImpl::~ByCompareWithTargetImpl(ByCompareWithTargetImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByCompareWithTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByCompareWithTarget::~ByCompareWithTarget(this);
};

// Line 58: range 00000000158FEA52-00000000158FEA7C
void __cdecl ByCompareWithTargetImpl::~ByCompareWithTargetImpl(ByCompareWithTargetImpl *const this)
{
  ByCompareWithTargetImpl::~ByCompareWithTargetImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 60: range 00000000155C6DB4-00000000155C6DFC
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByCompareWithTargetImpl::clone(
        ByCompareWithTargetImpl *const this)
{
  ByCompareWithTargetImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByCompareWithTargetImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByCompareWithTargetImpl,ByCompareWithTargetImpl&>(
    (ByCompareWithTargetImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByCompareWithTargetImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByCompareWithTargetImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 64: range 00000000158C41FE-00000000158C4256
void __cdecl ByEntityTypesImpl::ByEntityTypesImpl(ByEntityTypesImpl *const this, const ByEntityTypesImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByEntityTypes::ByEntityTypes(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByEntityTypesImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 64: range 00000000158FE95E-00000000158FE988
void __cdecl ByEntityTypesImpl::~ByEntityTypesImpl(ByEntityTypesImpl *const this)
{
  ByEntityTypesImpl::~ByEntityTypesImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 64: range 00000000158FE910-00000000158FE95D
void __cdecl ByEntityTypesImpl::~ByEntityTypesImpl(ByEntityTypesImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByEntityTypesImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByEntityTypes::~ByEntityTypes(this);
};

// Line 66: range 00000000155C6DFE-00000000155C6E46
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByEntityTypesImpl::clone(ByEntityTypesImpl *const this)
{
  ByEntityTypesImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByEntityTypesImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByEntityTypesImpl,ByEntityTypesImpl&>((ByEntityTypesImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByEntityTypesImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByEntityTypesImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 70: range 00000000135B48A6-00000000135B48F3
void __cdecl ByHasAbilityStateImpl::ByHasAbilityStateImpl(ByHasAbilityStateImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHasAbilityState::ByHasAbilityState(this);
  v1 = (int (**)(...))(&`vtable for'ByHasAbilityStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 70: range 00000000158C4540-00000000158C4598
void __cdecl ByHasAbilityStateImpl::ByHasAbilityStateImpl(
        ByHasAbilityStateImpl *const this,
        const ByHasAbilityStateImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHasAbilityState::ByHasAbilityState(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHasAbilityStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 70: range 00000000158FE8E4-00000000158FE90E
void __cdecl ByHasAbilityStateImpl::~ByHasAbilityStateImpl(ByHasAbilityStateImpl *const this)
{
  ByHasAbilityStateImpl::~ByHasAbilityStateImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 70: range 00000000158FE896-00000000158FE8E3
void __cdecl ByHasAbilityStateImpl::~ByHasAbilityStateImpl(ByHasAbilityStateImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHasAbilityStateImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHasAbilityState::~ByHasAbilityState(this);
};

// Line 72: range 00000000155C6E48-00000000155C6E90
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHasAbilityStateImpl::clone(ByHasAbilityStateImpl *const this)
{
  ByHasAbilityStateImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHasAbilityStateImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHasAbilityStateImpl,ByHasAbilityStateImpl&>((ByHasAbilityStateImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHasAbilityStateImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHasAbilityStateImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 76: range 00000000158C481C-00000000158C4874
void __cdecl ByHasElementImpl::ByHasElementImpl(ByHasElementImpl *const this, const ByHasElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHasElement::ByHasElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHasElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 76: range 00000000158FE86A-00000000158FE894
void __cdecl ByHasElementImpl::~ByHasElementImpl(ByHasElementImpl *const this)
{
  ByHasElementImpl::~ByHasElementImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 76: range 00000000158FE81C-00000000158FE869
void __cdecl ByHasElementImpl::~ByHasElementImpl(ByHasElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHasElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHasElement::~ByHasElement(this);
};

// Line 78: range 00000000155C6E92-00000000155C6EDA
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHasElementImpl::clone(ByHasElementImpl *const this)
{
  ByHasElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHasElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHasElementImpl,ByHasElementImpl&>((ByHasElementImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHasElementImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHasElementImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 82: range 00000000158C4AD2-00000000158C4B2A
void __cdecl ByHasFeatureTagImpl::ByHasFeatureTagImpl(ByHasFeatureTagImpl *const this, const ByHasFeatureTagImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHasFeatureTag::ByHasFeatureTag(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHasFeatureTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 82: range 00000000158FE728-00000000158FE775
void __cdecl ByHasFeatureTagImpl::~ByHasFeatureTagImpl(ByHasFeatureTagImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHasFeatureTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHasFeatureTag::~ByHasFeatureTag(this);
};

// Line 82: range 00000000158FE776-00000000158FE7A0
void __cdecl ByHasFeatureTagImpl::~ByHasFeatureTagImpl(ByHasFeatureTagImpl *const this)
{
  ByHasFeatureTagImpl::~ByHasFeatureTagImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 84: range 00000000155C6EDC-00000000155C6F24
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHasFeatureTagImpl::clone(ByHasFeatureTagImpl *const this)
{
  ByHasFeatureTagImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHasFeatureTagImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHasFeatureTagImpl,ByHasFeatureTagImpl&>((ByHasFeatureTagImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHasFeatureTagImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHasFeatureTagImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 88: range 00000000158C4F24-00000000158C4F7C
void __cdecl ByHasShieldImpl::ByHasShieldImpl(ByHasShieldImpl *const this, const ByHasShieldImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHasShield::ByHasShield(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHasShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 88: range 00000000158FE7F0-00000000158FE81A
void __cdecl ByHasShieldImpl::~ByHasShieldImpl(ByHasShieldImpl *const this)
{
  ByHasShieldImpl::~ByHasShieldImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 88: range 00000000158FE7A2-00000000158FE7EF
void __cdecl ByHasShieldImpl::~ByHasShieldImpl(ByHasShieldImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHasShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHasShield::~ByHasShield(this);
};

// Line 90: range 00000000155C6F26-00000000155C6F6E
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHasShieldImpl::clone(ByHasShieldImpl *const this)
{
  ByHasShieldImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHasShieldImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHasShieldImpl,ByHasShieldImpl&>((ByHasShieldImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHasShieldImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHasShieldImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 94: range 00000000158C520C-00000000158C5264
void __cdecl ByTargetIsSelfImpl::ByTargetIsSelfImpl(ByTargetIsSelfImpl *const this, const ByTargetIsSelfImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetIsSelf::ByTargetIsSelf(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetIsSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 94: range 00000000158FE6AE-00000000158FE6FB
void __cdecl ByTargetIsSelfImpl::~ByTargetIsSelfImpl(ByTargetIsSelfImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetIsSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetIsSelf::~ByTargetIsSelf(this);
};

// Line 94: range 00000000158FE6FC-00000000158FE726
void __cdecl ByTargetIsSelfImpl::~ByTargetIsSelfImpl(ByTargetIsSelfImpl *const this)
{
  ByTargetIsSelfImpl::~ByTargetIsSelfImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 96: range 00000000155C6F70-00000000155C6FB8
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetIsSelfImpl::clone(ByTargetIsSelfImpl *const this)
{
  ByTargetIsSelfImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetIsSelfImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetIsSelfImpl,ByTargetIsSelfImpl&>((ByTargetIsSelfImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetIsSelfImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetIsSelfImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 96: range 00000000135B2734-00000000135B2781
void __cdecl ByTargetHPRatioImpl::ByTargetHPRatioImpl(ByTargetHPRatioImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetHPRatio::ByTargetHPRatio(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetHPRatioImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 100: range 00000000135B34E2-00000000135B352F
void __cdecl ByTargetGlobalValueImpl::ByTargetGlobalValueImpl(ByTargetGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetGlobalValue::ByTargetGlobalValue(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 100: range 00000000158C564C-00000000158C56A4
void __cdecl ByTargetGlobalValueImpl::ByTargetGlobalValueImpl(
        ByTargetGlobalValueImpl *const this,
        const ByTargetGlobalValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetGlobalValue::ByTargetGlobalValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 100: range 00000000158FE682-00000000158FE6AC
void __cdecl ByTargetGlobalValueImpl::~ByTargetGlobalValueImpl(ByTargetGlobalValueImpl *const this)
{
  ByTargetGlobalValueImpl::~ByTargetGlobalValueImpl(this);
  operator delete(this, 0x88uLL);
};

// Line 100: range 00000000158FE634-00000000158FE681
void __cdecl ByTargetGlobalValueImpl::~ByTargetGlobalValueImpl(ByTargetGlobalValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetGlobalValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetGlobalValue::~ByTargetGlobalValue(this);
};

// Line 102: range 00000000155C6FBA-00000000155C7002
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetGlobalValueImpl::clone(
        ByTargetGlobalValueImpl *const this)
{
  ByTargetGlobalValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetGlobalValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetGlobalValueImpl,ByTargetGlobalValueImpl&>(
    (ByTargetGlobalValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetGlobalValueImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetGlobalValueImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 106: range 00000000158C59A8-00000000158C5A00
void __cdecl ByHitBoxTypeImpl::ByHitBoxTypeImpl(ByHitBoxTypeImpl *const this, const ByHitBoxTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByHitBoxType::ByHitBoxType(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByHitBoxTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 106: range 00000000158FE608-00000000158FE632
void __cdecl ByHitBoxTypeImpl::~ByHitBoxTypeImpl(ByHitBoxTypeImpl *const this)
{
  ByHitBoxTypeImpl::~ByHitBoxTypeImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 106: range 00000000158FE5BA-00000000158FE607
void __cdecl ByHitBoxTypeImpl::~ByHitBoxTypeImpl(ByHitBoxTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByHitBoxTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByHitBoxType::~ByHitBoxType(this);
};

// Line 108: range 00000000155C7004-00000000155C704C
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByHitBoxTypeImpl::clone(ByHitBoxTypeImpl *const this)
{
  ByHitBoxTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByHitBoxTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByHitBoxTypeImpl,ByHitBoxTypeImpl&>((ByHitBoxTypeImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByHitBoxTypeImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByHitBoxTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 112: range 00000000158C5D7E-00000000158C5DD6
void __cdecl ByTargetLayoutAreaImpl::ByTargetLayoutAreaImpl(
        ByTargetLayoutAreaImpl *const this,
        const ByTargetLayoutAreaImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetLayoutArea::ByTargetLayoutArea(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetLayoutAreaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 112: range 00000000158FE540-00000000158FE58D
void __cdecl ByTargetLayoutAreaImpl::~ByTargetLayoutAreaImpl(ByTargetLayoutAreaImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetLayoutAreaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetLayoutArea::~ByTargetLayoutArea(this);
};

// Line 112: range 00000000158FE58E-00000000158FE5B8
void __cdecl ByTargetLayoutAreaImpl::~ByTargetLayoutAreaImpl(ByTargetLayoutAreaImpl *const this)
{
  ByTargetLayoutAreaImpl::~ByTargetLayoutAreaImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 114: range 00000000155C704E-00000000155C7096
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetLayoutAreaImpl::clone(ByTargetLayoutAreaImpl *const this)
{
  ByTargetLayoutAreaImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetLayoutAreaImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetLayoutAreaImpl,ByTargetLayoutAreaImpl&>((ByTargetLayoutAreaImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetLayoutAreaImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetLayoutAreaImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 118: range 00000000158C605A-00000000158C60B2
void __cdecl ByAttackTypeImpl::ByAttackTypeImpl(ByAttackTypeImpl *const this, const ByAttackTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByAttackType::ByAttackType(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByAttackTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 118: range 00000000158FE4C6-00000000158FE513
void __cdecl ByAttackTypeImpl::~ByAttackTypeImpl(ByAttackTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByAttackTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByAttackType::~ByAttackType(this);
};

// Line 118: range 00000000158FE514-00000000158FE53E
void __cdecl ByAttackTypeImpl::~ByAttackTypeImpl(ByAttackTypeImpl *const this)
{
  ByAttackTypeImpl::~ByAttackTypeImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 120: range 00000000155C7098-00000000155C70E0
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByAttackTypeImpl::clone(ByAttackTypeImpl *const this)
{
  ByAttackTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByAttackTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByAttackTypeImpl,ByAttackTypeImpl&>((ByAttackTypeImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByAttackTypeImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByAttackTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 124: range 00000000135B5EFC-00000000135B5F49
void __cdecl ByTargetForwardAndSelfPositionImpl::ByTargetForwardAndSelfPositionImpl(
        ByTargetForwardAndSelfPositionImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetForwardAndSelfPosition::ByTargetForwardAndSelfPosition(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetForwardAndSelfPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 124: range 00000000158C6386-00000000158C63DE
void __cdecl ByTargetForwardAndSelfPositionImpl::ByTargetForwardAndSelfPositionImpl(
        ByTargetForwardAndSelfPositionImpl *const this,
        const ByTargetForwardAndSelfPositionImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetForwardAndSelfPosition::ByTargetForwardAndSelfPosition(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetForwardAndSelfPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 124: range 00000000158FE49A-00000000158FE4C4
void __cdecl ByTargetForwardAndSelfPositionImpl::~ByTargetForwardAndSelfPositionImpl(
        ByTargetForwardAndSelfPositionImpl *const this)
{
  ByTargetForwardAndSelfPositionImpl::~ByTargetForwardAndSelfPositionImpl(this);
  operator delete(this, 0x50uLL);
};

// Line 124: range 00000000158FE44C-00000000158FE499
void __cdecl ByTargetForwardAndSelfPositionImpl::~ByTargetForwardAndSelfPositionImpl(
        ByTargetForwardAndSelfPositionImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetForwardAndSelfPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetForwardAndSelfPosition::~ByTargetForwardAndSelfPosition(this);
};

// Line 126: range 00000000155C70E2-00000000155C712A
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetForwardAndSelfPositionImpl::clone(
        ByTargetForwardAndSelfPositionImpl *const this)
{
  ByTargetForwardAndSelfPositionImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetForwardAndSelfPositionImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetForwardAndSelfPositionImpl,ByTargetForwardAndSelfPositionImpl&>(
    (ByTargetForwardAndSelfPositionImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetForwardAndSelfPositionImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetForwardAndSelfPositionImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 130: range 00000000158C66BC-00000000158C6714
void __cdecl ByUnlockTalentParamImpl::ByUnlockTalentParamImpl(
        ByUnlockTalentParamImpl *const this,
        const ByUnlockTalentParamImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByUnlockTalentParam::ByUnlockTalentParam(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByUnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 130: range 00000000158FE420-00000000158FE44A
void __cdecl ByUnlockTalentParamImpl::~ByUnlockTalentParamImpl(ByUnlockTalentParamImpl *const this)
{
  ByUnlockTalentParamImpl::~ByUnlockTalentParamImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 130: range 00000000158FE3D2-00000000158FE41F
void __cdecl ByUnlockTalentParamImpl::~ByUnlockTalentParamImpl(ByUnlockTalentParamImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByUnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByUnlockTalentParam::~ByUnlockTalentParam(this);
};

// Line 132: range 00000000155C712C-00000000155C7174
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByUnlockTalentParamImpl::clone(
        ByUnlockTalentParamImpl *const this)
{
  ByUnlockTalentParamImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByUnlockTalentParamImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByUnlockTalentParamImpl,ByUnlockTalentParamImpl&>(
    (ByUnlockTalentParamImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByUnlockTalentParamImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByUnlockTalentParamImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 136: range 00000000158C6A18-00000000158C6A70
void __cdecl ByElementReactionTypeImpl::ByElementReactionTypeImpl(
        ByElementReactionTypeImpl *const this,
        const ByElementReactionTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByElementReactionType::ByElementReactionType(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByElementReactionTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 136: range 00000000158FE3A6-00000000158FE3D0
void __cdecl ByElementReactionTypeImpl::~ByElementReactionTypeImpl(ByElementReactionTypeImpl *const this)
{
  ByElementReactionTypeImpl::~ByElementReactionTypeImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 136: range 00000000158FE358-00000000158FE3A5
void __cdecl ByElementReactionTypeImpl::~ByElementReactionTypeImpl(ByElementReactionTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByElementReactionTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByElementReactionType::~ByElementReactionType(this);
};

// Line 138: range 00000000155C7176-00000000155C71BE
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByElementReactionTypeImpl::clone(
        ByElementReactionTypeImpl *const this)
{
  ByElementReactionTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByElementReactionTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByElementReactionTypeImpl,ByElementReactionTypeImpl&>(
    (ByElementReactionTypeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByElementReactionTypeImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByElementReactionTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 142: range 00000000158C6D00-00000000158C6D58
void __cdecl ByTargetIsCasterImpl::ByTargetIsCasterImpl(
        ByTargetIsCasterImpl *const this,
        const ByTargetIsCasterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ByTargetIsCaster::ByTargetIsCaster(this, a2);
  v2 = (int (**)(...))(&`vtable for'ByTargetIsCasterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v2;
};

// Line 142: range 00000000158FE2DE-00000000158FE32B
void __cdecl ByTargetIsCasterImpl::~ByTargetIsCasterImpl(ByTargetIsCasterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ByTargetIsCasterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
  data::ByTargetIsCaster::~ByTargetIsCaster(this);
};

// Line 142: range 00000000158FE32C-00000000158FE356
void __cdecl ByTargetIsCasterImpl::~ByTargetIsCasterImpl(ByTargetIsCasterImpl *const this)
{
  ByTargetIsCasterImpl::~ByTargetIsCasterImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 144: range 00000000155C71C0-00000000155C7208
std::shared_ptr<data::ConfigAbilityPredicate> __cdecl ByTargetIsCasterImpl::clone(ByTargetIsCasterImpl *const this)
{
  ByTargetIsCasterImpl *v1; // rsi
  std::shared_ptr<data::ConfigAbilityPredicate> result; // rax
  std::shared_ptr<ByTargetIsCasterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ByTargetIsCasterImpl,ByTargetIsCasterImpl&>((ByTargetIsCasterImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbilityPredicate>::shared_ptr<ByTargetIsCasterImpl,void>(
    (std::shared_ptr<data::ConfigAbilityPredicate> *const)this,
    &__r);
  std::shared_ptr<ByTargetIsCasterImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityPredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 503: range 00000000135B573E-00000000135B578B
void __cdecl ByHitBoxTypeImpl::ByHitBoxTypeImpl(ByHitBoxTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHitBoxType::ByHitBoxType(this);
  v1 = (int (**)(...))(&`vtable for'ByHitBoxTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 540: range 00000000135B4CAA-00000000135B4CF7
void __cdecl ByHasElementImpl::ByHasElementImpl(ByHasElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHasElement::ByHasElement(this);
  v1 = (int (**)(...))(&`vtable for'ByHasElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 614: range 00000000135B2A3E-00000000135B2A8B
void __cdecl ByNotImpl::ByNotImpl(ByNotImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByNot::ByNot(this);
  v1 = (int (**)(...))(&`vtable for'ByNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 651: range 00000000135B378A-00000000135B37D7
void __cdecl ByAnyImpl::ByAnyImpl(ByAnyImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByAny::ByAny(this);
  v1 = (int (**)(...))(&`vtable for'ByAnyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 688: range 00000000135B2D28-00000000135B2D75
void __cdecl ByAndImpl::ByAndImpl(ByAndImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByAnd::ByAnd(this);
  v1 = (int (**)(...))(&`vtable for'ByAndImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 797: range 00000000135B3042-00000000135B308F
void __cdecl ByTargetIsSelfImpl::ByTargetIsSelfImpl(ByTargetIsSelfImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetIsSelf::ByTargetIsSelf(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetIsSelfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 1249: range 00000000135B458A-00000000135B45D7
void __cdecl ByEntityTypesImpl::ByEntityTypesImpl(ByEntityTypesImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByEntityTypes::ByEntityTypes(this);
  v1 = (int (**)(...))(&`vtable for'ByEntityTypesImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 1326: range 00000000135B653E-00000000135B658B
void __cdecl ByHitElementImpl::ByHitElementImpl(ByHitElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHitElement::ByHitElement(this);
  v1 = (int (**)(...))(&`vtable for'ByHitElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 1436: range 00000000135B3A74-00000000135B3AC1
void __cdecl ByAttackTagsImpl::ByAttackTagsImpl(ByAttackTagsImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByAttackTags::ByAttackTags(this);
  v1 = (int (**)(...))(&`vtable for'ByAttackTagsImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 1552: range 00000000135B6216-00000000135B6263
void __cdecl ByUnlockTalentParamImpl::ByUnlockTalentParamImpl(ByUnlockTalentParamImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByUnlockTalentParam::ByUnlockTalentParam(this);
  v1 = (int (**)(...))(&`vtable for'ByUnlockTalentParamImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 2105: range 00000000135B50A0-00000000135B50ED
void __cdecl ByHasFeatureTagImpl::ByHasFeatureTagImpl(ByHasFeatureTagImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHasFeatureTag::ByHasFeatureTag(this);
  v1 = (int (**)(...))(&`vtable for'ByHasFeatureTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 2793: range 00000000135B3D8C-00000000135B3DD9
void __cdecl ByAttackTypeImpl::ByAttackTypeImpl(ByAttackTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByAttackType::ByAttackType(this);
  v1 = (int (**)(...))(&`vtable for'ByAttackTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 2843: range 00000000135B41F0-00000000135B423D
void __cdecl ByCompareWithTargetImpl::ByCompareWithTargetImpl(ByCompareWithTargetImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByCompareWithTarget::ByCompareWithTarget(this);
  v1 = (int (**)(...))(&`vtable for'ByCompareWithTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 2993: range 00000000135B6962-00000000135B69AF
void __cdecl ByElementReactionTypeImpl::ByElementReactionTypeImpl(ByElementReactionTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByElementReactionType::ByElementReactionType(this);
  v1 = (int (**)(...))(&`vtable for'ByElementReactionTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 3193: range 00000000135B5436-00000000135B5483
void __cdecl ByHasShieldImpl::ByHasShieldImpl(ByHasShieldImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByHasShield::ByHasShield(this);
  v1 = (int (**)(...))(&`vtable for'ByHasShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 3509: range 00000000135B5BE6-00000000135B5C33
void __cdecl ByTargetLayoutAreaImpl::ByTargetLayoutAreaImpl(ByTargetLayoutAreaImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetLayoutArea::ByTargetLayoutArea(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetLayoutAreaImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

// Line 3770: range 00000000135B6D88-00000000135B6DD5
void __cdecl ByTargetIsCasterImpl::ByTargetIsCasterImpl(ByTargetIsCasterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ByTargetIsCaster::ByTargetIsCaster(this);
  v1 = (int (**)(...))(&`vtable for'ByTargetIsCasterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityPredicate = v1;
};

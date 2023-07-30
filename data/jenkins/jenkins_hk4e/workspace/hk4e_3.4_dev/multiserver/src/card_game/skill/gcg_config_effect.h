// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_config_effect.h

// Line 19: range 000000000DD3161C-000000000DD31669
void __cdecl ConfigGCGExecEffectDamageImpl::ConfigGCGExecEffectDamageImpl(ConfigGCGExecEffectDamageImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDamage::ConfigGCGExecEffectDamage(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 19: range 000000000DD1804E-000000000DD180A6
void __cdecl ConfigGCGExecEffectDamageImpl::ConfigGCGExecEffectDamageImpl(
        ConfigGCGExecEffectDamageImpl *const this,
        const ConfigGCGExecEffectDamageImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDamage::ConfigGCGExecEffectDamage(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 19: range 000000000DD8537A-000000000DD853A4
void __cdecl ConfigGCGExecEffectDamageImpl::~ConfigGCGExecEffectDamageImpl(ConfigGCGExecEffectDamageImpl *const this)
{
  ConfigGCGExecEffectDamageImpl::~ConfigGCGExecEffectDamageImpl(this);
  operator delete(this, 0x90uLL);
};

// Line 19: range 000000000DD8532C-000000000DD85379
void __cdecl ConfigGCGExecEffectDamageImpl::~ConfigGCGExecEffectDamageImpl(ConfigGCGExecEffectDamageImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDamage::~ConfigGCGExecEffectDamage(this);
};

// Line 22: range 000000000D83387E-000000000D8338C6
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDamageImpl::clone(
        ConfigGCGExecEffectDamageImpl *const this)
{
  ConfigGCGExecEffectDamageImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDamageImpl,ConfigGCGExecEffectDamageImpl&>(
    (ConfigGCGExecEffectDamageImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDamageImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDamageImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 26: range 000000000DD186CC-000000000DD18724
void __cdecl ConfigGCGExecEffectCreateCardImpl::ConfigGCGExecEffectCreateCardImpl(
        ConfigGCGExecEffectCreateCardImpl *const this,
        const ConfigGCGExecEffectCreateCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectCreateCard::ConfigGCGExecEffectCreateCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 26: range 000000000DD85300-000000000DD8532A
void __cdecl ConfigGCGExecEffectCreateCardImpl::~ConfigGCGExecEffectCreateCardImpl(
        ConfigGCGExecEffectCreateCardImpl *const this)
{
  ConfigGCGExecEffectCreateCardImpl::~ConfigGCGExecEffectCreateCardImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 26: range 000000000DD852B2-000000000DD852FF
void __cdecl ConfigGCGExecEffectCreateCardImpl::~ConfigGCGExecEffectCreateCardImpl(
        ConfigGCGExecEffectCreateCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectCreateCard::~ConfigGCGExecEffectCreateCard(this);
};

// Line 29: range 000000000D833904-000000000D83394C
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectCreateCardImpl::clone(
        ConfigGCGExecEffectCreateCardImpl *const this)
{
  ConfigGCGExecEffectCreateCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectCreateCardImpl,ConfigGCGExecEffectCreateCardImpl&>(
    (ConfigGCGExecEffectCreateCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectCreateCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectCreateCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 33: range 000000000DD18CD0-000000000DD18D28
void __cdecl ConfigGCGExecEffectCreateModifyCardImpl::ConfigGCGExecEffectCreateModifyCardImpl(
        ConfigGCGExecEffectCreateModifyCardImpl *const this,
        const ConfigGCGExecEffectCreateModifyCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectCreateModifyCard::ConfigGCGExecEffectCreateModifyCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 33: range 000000000DD85238-000000000DD85285
void __cdecl ConfigGCGExecEffectCreateModifyCardImpl::~ConfigGCGExecEffectCreateModifyCardImpl(
        ConfigGCGExecEffectCreateModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectCreateModifyCard::~ConfigGCGExecEffectCreateModifyCard(this);
};

// Line 33: range 000000000DD85286-000000000DD852B0
void __cdecl ConfigGCGExecEffectCreateModifyCardImpl::~ConfigGCGExecEffectCreateModifyCardImpl(
        ConfigGCGExecEffectCreateModifyCardImpl *const this)
{
  ConfigGCGExecEffectCreateModifyCardImpl::~ConfigGCGExecEffectCreateModifyCardImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 36: range 000000000D83398A-000000000D8339D2
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectCreateModifyCardImpl::clone(
        ConfigGCGExecEffectCreateModifyCardImpl *const this)
{
  ConfigGCGExecEffectCreateModifyCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectCreateModifyCardImpl,ConfigGCGExecEffectCreateModifyCardImpl&>(
    (ConfigGCGExecEffectCreateModifyCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectCreateModifyCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 41: range 000000000DD19200-000000000DD19258
void __cdecl ConfigGCGExecEffectGenDiceImpl::ConfigGCGExecEffectGenDiceImpl(
        ConfigGCGExecEffectGenDiceImpl *const this,
        const ConfigGCGExecEffectGenDiceImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectGenDice::ConfigGCGExecEffectGenDice(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 41: range 000000000DD8520C-000000000DD85236
void __cdecl ConfigGCGExecEffectGenDiceImpl::~ConfigGCGExecEffectGenDiceImpl(
        ConfigGCGExecEffectGenDiceImpl *const this)
{
  ConfigGCGExecEffectGenDiceImpl::~ConfigGCGExecEffectGenDiceImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 41: range 000000000DD851BE-000000000DD8520B
void __cdecl ConfigGCGExecEffectGenDiceImpl::~ConfigGCGExecEffectGenDiceImpl(
        ConfigGCGExecEffectGenDiceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectGenDice::~ConfigGCGExecEffectGenDice(this);
};

// Line 44: range 000000000D833A10-000000000D833A58
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectGenDiceImpl::clone(
        ConfigGCGExecEffectGenDiceImpl *const this)
{
  ConfigGCGExecEffectGenDiceImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectGenDiceImpl,ConfigGCGExecEffectGenDiceImpl&>(
    (ConfigGCGExecEffectGenDiceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectGenDiceImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectGenDiceImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 49: range 000000000DD198CC-000000000DD19924
void __cdecl ConfigGCGExecEffectChangeCardVarImpl::ConfigGCGExecEffectChangeCardVarImpl(
        ConfigGCGExecEffectChangeCardVarImpl *const this,
        const ConfigGCGExecEffectChangeCardVarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectChangeCardVar::ConfigGCGExecEffectChangeCardVar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 49: range 000000000DD85144-000000000DD85191
void __cdecl ConfigGCGExecEffectChangeCardVarImpl::~ConfigGCGExecEffectChangeCardVarImpl(
        ConfigGCGExecEffectChangeCardVarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectChangeCardVar::~ConfigGCGExecEffectChangeCardVar(this);
};

// Line 49: range 000000000DD85192-000000000DD851BC
void __cdecl ConfigGCGExecEffectChangeCardVarImpl::~ConfigGCGExecEffectChangeCardVarImpl(
        ConfigGCGExecEffectChangeCardVarImpl *const this)
{
  ConfigGCGExecEffectChangeCardVarImpl::~ConfigGCGExecEffectChangeCardVarImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 52: range 000000000D833A96-000000000D833ADE
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectChangeCardVarImpl::clone(
        ConfigGCGExecEffectChangeCardVarImpl *const this)
{
  ConfigGCGExecEffectChangeCardVarImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectChangeCardVarImpl,ConfigGCGExecEffectChangeCardVarImpl&>(
    (ConfigGCGExecEffectChangeCardVarImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectChangeCardVarImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 56: range 000000000DD19D14-000000000DD19D6C
void __cdecl ConfigGCGExecEffectDamageReviseImpl::ConfigGCGExecEffectDamageReviseImpl(
        ConfigGCGExecEffectDamageReviseImpl *const this,
        const ConfigGCGExecEffectDamageReviseImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDamageRevise::ConfigGCGExecEffectDamageRevise(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 56: range 000000000DD850CA-000000000DD85117
void __cdecl ConfigGCGExecEffectDamageReviseImpl::~ConfigGCGExecEffectDamageReviseImpl(
        ConfigGCGExecEffectDamageReviseImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDamageRevise::~ConfigGCGExecEffectDamageRevise(this);
};

// Line 56: range 000000000DD85118-000000000DD85142
void __cdecl ConfigGCGExecEffectDamageReviseImpl::~ConfigGCGExecEffectDamageReviseImpl(
        ConfigGCGExecEffectDamageReviseImpl *const this)
{
  ConfigGCGExecEffectDamageReviseImpl::~ConfigGCGExecEffectDamageReviseImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 59: range 000000000D833B1C-000000000D833B64
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDamageReviseImpl::clone(
        ConfigGCGExecEffectDamageReviseImpl *const this)
{
  ConfigGCGExecEffectDamageReviseImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDamageReviseImpl,ConfigGCGExecEffectDamageReviseImpl&>(
    (ConfigGCGExecEffectDamageReviseImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDamageReviseImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDamageReviseImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 64: range 000000000DD1A19E-000000000DD1A1F6
void __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::ConfigGCGEffectFixRerollDiceToSpecialTypeImpl(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this,
        const ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectFixRerollDiceToSpecialType::ConfigGCGEffectFixRerollDiceToSpecialType(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceToSpecialTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 64: range 000000000DD8509E-000000000DD850C8
void __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::~ConfigGCGEffectFixRerollDiceToSpecialTypeImpl(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this)
{
  ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::~ConfigGCGEffectFixRerollDiceToSpecialTypeImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 64: range 000000000DD85050-000000000DD8509D
void __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::~ConfigGCGEffectFixRerollDiceToSpecialTypeImpl(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceToSpecialTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectFixRerollDiceToSpecialType::~ConfigGCGEffectFixRerollDiceToSpecialType(this);
};

// Line 67: range 000000000D833BA2-000000000D833BEA
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::clone(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this)
{
  ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl,ConfigGCGEffectFixRerollDiceToSpecialTypeImpl&>(
    (ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceToSpecialTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 71: range 000000000DD1A6F0-000000000DD1A748
void __cdecl ConfigGCGExecEffectChargeImpl::ConfigGCGExecEffectChargeImpl(
        ConfigGCGExecEffectChargeImpl *const this,
        const ConfigGCGExecEffectChargeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectCharge::ConfigGCGExecEffectCharge(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChargeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 71: range 000000000DD85024-000000000DD8504E
void __cdecl ConfigGCGExecEffectChargeImpl::~ConfigGCGExecEffectChargeImpl(ConfigGCGExecEffectChargeImpl *const this)
{
  ConfigGCGExecEffectChargeImpl::~ConfigGCGExecEffectChargeImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 71: range 000000000DD84FD6-000000000DD85023
void __cdecl ConfigGCGExecEffectChargeImpl::~ConfigGCGExecEffectChargeImpl(ConfigGCGExecEffectChargeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChargeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectCharge::~ConfigGCGExecEffectCharge(this);
};

// Line 74: range 000000000D833C28-000000000D833C70
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectChargeImpl::clone(
        ConfigGCGExecEffectChargeImpl *const this)
{
  ConfigGCGExecEffectChargeImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectChargeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectChargeImpl,ConfigGCGExecEffectChargeImpl&>(
    (ConfigGCGExecEffectChargeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectChargeImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectChargeImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 78: range 000000000DD1AAEA-000000000DD1AB42
void __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::ConfigGCGExecEffectChangeOnstageCharaterImpl(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this,
        const ConfigGCGExecEffectChangeOnstageCharaterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectChangeOnstageCharater::ConfigGCGExecEffectChangeOnstageCharater(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeOnstageCharaterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 78: range 000000000DD84FAA-000000000DD84FD4
void __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::~ConfigGCGExecEffectChangeOnstageCharaterImpl(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this)
{
  ConfigGCGExecEffectChangeOnstageCharaterImpl::~ConfigGCGExecEffectChangeOnstageCharaterImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 78: range 000000000DD84F5C-000000000DD84FA9
void __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::~ConfigGCGExecEffectChangeOnstageCharaterImpl(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeOnstageCharaterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectChangeOnstageCharater::~ConfigGCGExecEffectChangeOnstageCharater(this);
};

// Line 81: range 000000000D833CAE-000000000D833CF6
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::clone(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this)
{
  ConfigGCGExecEffectChangeOnstageCharaterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectChangeOnstageCharaterImpl,ConfigGCGExecEffectChangeOnstageCharaterImpl&>(
    (ConfigGCGExecEffectChangeOnstageCharaterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectChangeOnstageCharaterImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 85: range 000000000DD1AE48-000000000DD1AEA0
void __cdecl ConfigGCGExecEffectDrawImpl::ConfigGCGExecEffectDrawImpl(
        ConfigGCGExecEffectDrawImpl *const this,
        const ConfigGCGExecEffectDrawImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDraw::ConfigGCGExecEffectDraw(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDrawImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 85: range 000000000DD84F30-000000000DD84F5A
void __cdecl ConfigGCGExecEffectDrawImpl::~ConfigGCGExecEffectDrawImpl(ConfigGCGExecEffectDrawImpl *const this)
{
  ConfigGCGExecEffectDrawImpl::~ConfigGCGExecEffectDrawImpl(this);
  operator delete(this, 0x58uLL);
};

// Line 85: range 000000000DD84EE2-000000000DD84F2F
void __cdecl ConfigGCGExecEffectDrawImpl::~ConfigGCGExecEffectDrawImpl(ConfigGCGExecEffectDrawImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDrawImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDraw::~ConfigGCGExecEffectDraw(this);
};

// Line 88: range 000000000D833D34-000000000D833D7C
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDrawImpl::clone(
        ConfigGCGExecEffectDrawImpl *const this)
{
  ConfigGCGExecEffectDrawImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDrawImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDrawImpl,ConfigGCGExecEffectDrawImpl&>(
    (ConfigGCGExecEffectDrawImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDrawImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDrawImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 92: range 000000000DD1B262-000000000DD1B2BA
void __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::ConfigGCGEffectAttachPhysicDamageToElementImpl(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this,
        const ConfigGCGEffectAttachPhysicDamageToElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectAttachPhysicDamageToElement::ConfigGCGEffectAttachPhysicDamageToElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectAttachPhysicDamageToElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 92: range 000000000DD84EB6-000000000DD84EE0
void __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::~ConfigGCGEffectAttachPhysicDamageToElementImpl(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this)
{
  ConfigGCGEffectAttachPhysicDamageToElementImpl::~ConfigGCGEffectAttachPhysicDamageToElementImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 92: range 000000000DD84E68-000000000DD84EB5
void __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::~ConfigGCGEffectAttachPhysicDamageToElementImpl(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectAttachPhysicDamageToElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectAttachPhysicDamageToElement::~ConfigGCGEffectAttachPhysicDamageToElement(this);
};

// Line 95: range 000000000D833DBA-000000000D833E02
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::clone(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this)
{
  ConfigGCGEffectAttachPhysicDamageToElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectAttachPhysicDamageToElementImpl,ConfigGCGEffectAttachPhysicDamageToElementImpl&>(
    (ConfigGCGEffectAttachPhysicDamageToElementImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectAttachPhysicDamageToElementImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 99: range 000000000DD34374-000000000DD343C1
void __cdecl ConfigGCGEffectAddShieldImpl::ConfigGCGEffectAddShieldImpl(ConfigGCGEffectAddShieldImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectAddShield::ConfigGCGEffectAddShield(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectAddShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 99: range 000000000DD1B856-000000000DD1B8AE
void __cdecl ConfigGCGEffectAddShieldImpl::ConfigGCGEffectAddShieldImpl(
        ConfigGCGEffectAddShieldImpl *const this,
        const ConfigGCGEffectAddShieldImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectAddShield::ConfigGCGEffectAddShield(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectAddShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 99: range 000000000DD84DEE-000000000DD84E3B
void __cdecl ConfigGCGEffectAddShieldImpl::~ConfigGCGEffectAddShieldImpl(ConfigGCGEffectAddShieldImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectAddShieldImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectAddShield::~ConfigGCGEffectAddShield(this);
};

// Line 99: range 000000000DD84E3C-000000000DD84E66
void __cdecl ConfigGCGEffectAddShieldImpl::~ConfigGCGEffectAddShieldImpl(ConfigGCGEffectAddShieldImpl *const this)
{
  ConfigGCGEffectAddShieldImpl::~ConfigGCGEffectAddShieldImpl(this);
  operator delete(this, 0x48uLL);
};

// Line 102: range 000000000D833E40-000000000D833E88
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectAddShieldImpl::clone(
        ConfigGCGEffectAddShieldImpl *const this)
{
  ConfigGCGEffectAddShieldImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectAddShieldImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectAddShieldImpl,ConfigGCGEffectAddShieldImpl&>(
    (ConfigGCGEffectAddShieldImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectAddShieldImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectAddShieldImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 106: range 000000000DD1BBBA-000000000DD1BC12
void __cdecl ConfigGCGExecEffectDamageMultipleImpl::ConfigGCGExecEffectDamageMultipleImpl(
        ConfigGCGExecEffectDamageMultipleImpl *const this,
        const ConfigGCGExecEffectDamageMultipleImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDamageMultiple::ConfigGCGExecEffectDamageMultiple(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageMultipleImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 106: range 000000000DD84D74-000000000DD84DC1
void __cdecl ConfigGCGExecEffectDamageMultipleImpl::~ConfigGCGExecEffectDamageMultipleImpl(
        ConfigGCGExecEffectDamageMultipleImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageMultipleImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDamageMultiple::~ConfigGCGExecEffectDamageMultiple(this);
};

// Line 106: range 000000000DD84DC2-000000000DD84DEC
void __cdecl ConfigGCGExecEffectDamageMultipleImpl::~ConfigGCGExecEffectDamageMultipleImpl(
        ConfigGCGExecEffectDamageMultipleImpl *const this)
{
  ConfigGCGExecEffectDamageMultipleImpl::~ConfigGCGExecEffectDamageMultipleImpl(this);
  operator delete(this, 0x58uLL);
};

// Line 109: range 000000000D833EC6-000000000D833F0E
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDamageMultipleImpl::clone(
        ConfigGCGExecEffectDamageMultipleImpl *const this)
{
  ConfigGCGExecEffectDamageMultipleImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDamageMultipleImpl,ConfigGCGExecEffectDamageMultipleImpl&>(
    (ConfigGCGExecEffectDamageMultipleImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDamageMultipleImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 113: range 000000000DD1BFD4-000000000DD1C02C
void __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::ConfigGCGEffectBeingHitDamageReduceToHalfImpl(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this,
        const ConfigGCGEffectBeingHitDamageReduceToHalfImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectBeingHitDamageReduceToHalf::ConfigGCGEffectBeingHitDamageReduceToHalf(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReduceToHalfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 113: range 000000000DD84CFA-000000000DD84D47
void __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::~ConfigGCGEffectBeingHitDamageReduceToHalfImpl(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReduceToHalfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectBeingHitDamageReduceToHalf::~ConfigGCGEffectBeingHitDamageReduceToHalf(this);
};

// Line 113: range 000000000DD84D48-000000000DD84D72
void __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::~ConfigGCGEffectBeingHitDamageReduceToHalfImpl(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this)
{
  ConfigGCGEffectBeingHitDamageReduceToHalfImpl::~ConfigGCGEffectBeingHitDamageReduceToHalfImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 116: range 000000000D833F4C-000000000D833F94
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::clone(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this)
{
  ConfigGCGEffectBeingHitDamageReduceToHalfImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectBeingHitDamageReduceToHalfImpl,ConfigGCGEffectBeingHitDamageReduceToHalfImpl&>(
    (ConfigGCGEffectBeingHitDamageReduceToHalfImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReduceToHalfImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 120: range 000000000DD1C496-000000000DD1C4EE
void __cdecl ConfigGCGExecEffectRandomCreateCardImpl::ConfigGCGExecEffectRandomCreateCardImpl(
        ConfigGCGExecEffectRandomCreateCardImpl *const this,
        const ConfigGCGExecEffectRandomCreateCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectRandomCreateCard::ConfigGCGExecEffectRandomCreateCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 120: range 000000000DD84B60-000000000DD84B8A
void __cdecl ConfigGCGExecEffectRandomCreateCardImpl::~ConfigGCGExecEffectRandomCreateCardImpl(
        ConfigGCGExecEffectRandomCreateCardImpl *const this)
{
  ConfigGCGExecEffectRandomCreateCardImpl::~ConfigGCGExecEffectRandomCreateCardImpl(this);
  operator delete(this, 0x58uLL);
};

// Line 120: range 000000000DD84B12-000000000DD84B5F
void __cdecl ConfigGCGExecEffectRandomCreateCardImpl::~ConfigGCGExecEffectRandomCreateCardImpl(
        ConfigGCGExecEffectRandomCreateCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectRandomCreateCard::~ConfigGCGExecEffectRandomCreateCard(this);
};

// Line 123: range 000000000D833FD2-000000000D83401A
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectRandomCreateCardImpl::clone(
        ConfigGCGExecEffectRandomCreateCardImpl *const this)
{
  ConfigGCGExecEffectRandomCreateCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectRandomCreateCardImpl,ConfigGCGExecEffectRandomCreateCardImpl&>(
    (ConfigGCGExecEffectRandomCreateCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectRandomCreateCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 127: range 000000000DD1C82C-000000000DD1C884
void __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::ConfigGCGEffectChangeCharacterSetQuickImpl(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this,
        const ConfigGCGEffectChangeCharacterSetQuickImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectChangeCharacterSetQuick::ConfigGCGEffectChangeCharacterSetQuick(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterSetQuickImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 127: range 000000000DD84CCE-000000000DD84CF8
void __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::~ConfigGCGEffectChangeCharacterSetQuickImpl(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this)
{
  ConfigGCGEffectChangeCharacterSetQuickImpl::~ConfigGCGEffectChangeCharacterSetQuickImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 127: range 000000000DD84C80-000000000DD84CCD
void __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::~ConfigGCGEffectChangeCharacterSetQuickImpl(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterSetQuickImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectChangeCharacterSetQuick::~ConfigGCGEffectChangeCharacterSetQuick(this);
};

// Line 130: range 000000000D834058-000000000D8340A0
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::clone(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this)
{
  ConfigGCGEffectChangeCharacterSetQuickImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterSetQuickImpl,ConfigGCGEffectChangeCharacterSetQuickImpl&>(
    (ConfigGCGEffectChangeCharacterSetQuickImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectChangeCharacterSetQuickImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 134: range 000000000DD1CB80-000000000DD1CBD8
void __cdecl ConfigGCGExecEffectHealImpl::ConfigGCGExecEffectHealImpl(
        ConfigGCGExecEffectHealImpl *const this,
        const ConfigGCGExecEffectHealImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectHeal::ConfigGCGExecEffectHeal(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectHealImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 134: range 000000000DD84C06-000000000DD84C53
void __cdecl ConfigGCGExecEffectHealImpl::~ConfigGCGExecEffectHealImpl(ConfigGCGExecEffectHealImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectHealImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectHeal::~ConfigGCGExecEffectHeal(this);
};

// Line 134: range 000000000DD84C54-000000000DD84C7E
void __cdecl ConfigGCGExecEffectHealImpl::~ConfigGCGExecEffectHealImpl(ConfigGCGExecEffectHealImpl *const this)
{
  ConfigGCGExecEffectHealImpl::~ConfigGCGExecEffectHealImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 137: range 000000000D8340DE-000000000D834126
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectHealImpl::clone(
        ConfigGCGExecEffectHealImpl *const this)
{
  ConfigGCGExecEffectHealImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectHealImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectHealImpl,ConfigGCGExecEffectHealImpl&>(
    (ConfigGCGExecEffectHealImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectHealImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectHealImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 141: range 000000000DD1CF94-000000000DD1CFEC
void __cdecl ConfigGCGEffectRerollReviseCostImpl::ConfigGCGEffectRerollReviseCostImpl(
        ConfigGCGEffectRerollReviseCostImpl *const this,
        const ConfigGCGEffectRerollReviseCostImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectRerollReviseCost::ConfigGCGEffectRerollReviseCost(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectRerollReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 141: range 000000000DD84BDA-000000000DD84C04
void __cdecl ConfigGCGEffectRerollReviseCostImpl::~ConfigGCGEffectRerollReviseCostImpl(
        ConfigGCGEffectRerollReviseCostImpl *const this)
{
  ConfigGCGEffectRerollReviseCostImpl::~ConfigGCGEffectRerollReviseCostImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 141: range 000000000DD84B8C-000000000DD84BD9
void __cdecl ConfigGCGEffectRerollReviseCostImpl::~ConfigGCGEffectRerollReviseCostImpl(
        ConfigGCGEffectRerollReviseCostImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectRerollReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectRerollReviseCost::~ConfigGCGEffectRerollReviseCost(this);
};

// Line 144: range 000000000D834164-000000000D8341AC
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectRerollReviseCostImpl::clone(
        ConfigGCGEffectRerollReviseCostImpl *const this)
{
  ConfigGCGEffectRerollReviseCostImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectRerollReviseCostImpl,ConfigGCGEffectRerollReviseCostImpl&>(
    (ConfigGCGEffectRerollReviseCostImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectRerollReviseCostImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectRerollReviseCostImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 148: range 000000000DD1D394-000000000DD1D3EC
void __cdecl ConfigGCGEffectSkillUseCostReviseImpl::ConfigGCGEffectSkillUseCostReviseImpl(
        ConfigGCGEffectSkillUseCostReviseImpl *const this,
        const ConfigGCGEffectSkillUseCostReviseImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectSkillUseCostRevise::ConfigGCGEffectSkillUseCostRevise(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectSkillUseCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 148: range 000000000DD84AE6-000000000DD84B10
void __cdecl ConfigGCGEffectSkillUseCostReviseImpl::~ConfigGCGEffectSkillUseCostReviseImpl(
        ConfigGCGEffectSkillUseCostReviseImpl *const this)
{
  ConfigGCGEffectSkillUseCostReviseImpl::~ConfigGCGEffectSkillUseCostReviseImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 148: range 000000000DD84A98-000000000DD84AE5
void __cdecl ConfigGCGEffectSkillUseCostReviseImpl::~ConfigGCGEffectSkillUseCostReviseImpl(
        ConfigGCGEffectSkillUseCostReviseImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectSkillUseCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectSkillUseCostRevise::~ConfigGCGEffectSkillUseCostRevise(this);
};

// Line 151: range 000000000D8341EA-000000000D834232
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectSkillUseCostReviseImpl::clone(
        ConfigGCGEffectSkillUseCostReviseImpl *const this)
{
  ConfigGCGEffectSkillUseCostReviseImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectSkillUseCostReviseImpl,ConfigGCGEffectSkillUseCostReviseImpl&>(
    (ConfigGCGEffectSkillUseCostReviseImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectSkillUseCostReviseImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 155: range 000000000DD1D79E-000000000DD1D7F6
void __cdecl ConfigGCGEffectPlayCardCostReviseImpl::ConfigGCGEffectPlayCardCostReviseImpl(
        ConfigGCGEffectPlayCardCostReviseImpl *const this,
        const ConfigGCGEffectPlayCardCostReviseImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectPlayCardCostRevise::ConfigGCGEffectPlayCardCostRevise(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectPlayCardCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 155: range 000000000DD84A1E-000000000DD84A6B
void __cdecl ConfigGCGEffectPlayCardCostReviseImpl::~ConfigGCGEffectPlayCardCostReviseImpl(
        ConfigGCGEffectPlayCardCostReviseImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectPlayCardCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectPlayCardCostRevise::~ConfigGCGEffectPlayCardCostRevise(this);
};

// Line 155: range 000000000DD84A6C-000000000DD84A96
void __cdecl ConfigGCGEffectPlayCardCostReviseImpl::~ConfigGCGEffectPlayCardCostReviseImpl(
        ConfigGCGEffectPlayCardCostReviseImpl *const this)
{
  ConfigGCGEffectPlayCardCostReviseImpl::~ConfigGCGEffectPlayCardCostReviseImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 158: range 000000000D834270-000000000D8342B8
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectPlayCardCostReviseImpl::clone(
        ConfigGCGEffectPlayCardCostReviseImpl *const this)
{
  ConfigGCGEffectPlayCardCostReviseImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectPlayCardCostReviseImpl,ConfigGCGEffectPlayCardCostReviseImpl&>(
    (ConfigGCGEffectPlayCardCostReviseImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectPlayCardCostReviseImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 162: range 000000000DD1DBA8-000000000DD1DC00
void __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::ConfigGCGEffectChangeCharacterReviseCostImpl(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this,
        const ConfigGCGEffectChangeCharacterReviseCostImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectChangeCharacterReviseCost::ConfigGCGEffectChangeCharacterReviseCost(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 162: range 000000000DD849F2-000000000DD84A1C
void __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::~ConfigGCGEffectChangeCharacterReviseCostImpl(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this)
{
  ConfigGCGEffectChangeCharacterReviseCostImpl::~ConfigGCGEffectChangeCharacterReviseCostImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 162: range 000000000DD849A4-000000000DD849F1
void __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::~ConfigGCGEffectChangeCharacterReviseCostImpl(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectChangeCharacterReviseCost::~ConfigGCGEffectChangeCharacterReviseCost(this);
};

// Line 165: range 000000000D8342F6-000000000D83433E
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::clone(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this)
{
  ConfigGCGEffectChangeCharacterReviseCostImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterReviseCostImpl,ConfigGCGEffectChangeCharacterReviseCostImpl&>(
    (ConfigGCGEffectChangeCharacterReviseCostImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectChangeCharacterReviseCostImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 169: range 000000000DD1DFB2-000000000DD1E00A
void __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::ConfigGCGEffectChangeCharacterIncreCostImpl(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this,
        const ConfigGCGEffectChangeCharacterIncreCostImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectChangeCharacterIncreCost::ConfigGCGEffectChangeCharacterIncreCost(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 169: range 000000000DD8492A-000000000DD84977
void __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::~ConfigGCGEffectChangeCharacterIncreCostImpl(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectChangeCharacterIncreCost::~ConfigGCGEffectChangeCharacterIncreCost(this);
};

// Line 169: range 000000000DD84978-000000000DD849A2
void __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::~ConfigGCGEffectChangeCharacterIncreCostImpl(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this)
{
  ConfigGCGEffectChangeCharacterIncreCostImpl::~ConfigGCGEffectChangeCharacterIncreCostImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 172: range 000000000D83437C-000000000D8343C4
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::clone(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this)
{
  ConfigGCGEffectChangeCharacterIncreCostImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectChangeCharacterIncreCostImpl,ConfigGCGEffectChangeCharacterIncreCostImpl&>(
    (ConfigGCGEffectChangeCharacterIncreCostImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectChangeCharacterIncreCostImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 176: range 000000000DD1E3BC-000000000DD1E414
void __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::ConfigGCGEffectOpponentChangeCharacterIncreCostImpl(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this,
        const ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectOpponentChangeCharacterIncreCost::ConfigGCGEffectOpponentChangeCharacterIncreCost(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectOpponentChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 176: range 000000000DD848B0-000000000DD848FD
void __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::~ConfigGCGEffectOpponentChangeCharacterIncreCostImpl(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectOpponentChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectOpponentChangeCharacterIncreCost::~ConfigGCGEffectOpponentChangeCharacterIncreCost(this);
};

// Line 176: range 000000000DD848FE-000000000DD84928
void __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::~ConfigGCGEffectOpponentChangeCharacterIncreCostImpl(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this)
{
  ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::~ConfigGCGEffectOpponentChangeCharacterIncreCostImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 179: range 000000000D834402-000000000D83444A
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::clone(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this)
{
  ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl,ConfigGCGEffectOpponentChangeCharacterIncreCostImpl&>(
    (ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectOpponentChangeCharacterIncreCostImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 183: range 000000000DD1E90E-000000000DD1E966
void __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::ConfigGCGExecEffectChangeCardShowTokenVarImpl(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this,
        const ConfigGCGExecEffectChangeCardShowTokenVarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectChangeCardShowTokenVar::ConfigGCGExecEffectChangeCardShowTokenVar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardShowTokenVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 183: range 000000000DD84836-000000000DD84883
void __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::~ConfigGCGExecEffectChangeCardShowTokenVarImpl(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardShowTokenVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectChangeCardShowTokenVar::~ConfigGCGExecEffectChangeCardShowTokenVar(this);
};

// Line 183: range 000000000DD84884-000000000DD848AE
void __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::~ConfigGCGExecEffectChangeCardShowTokenVarImpl(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this)
{
  ConfigGCGExecEffectChangeCardShowTokenVarImpl::~ConfigGCGExecEffectChangeCardShowTokenVarImpl(this);
  operator delete(this, 0x68uLL);
};

// Line 186: range 000000000D834488-000000000D8344D0
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::clone(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this)
{
  ConfigGCGExecEffectChangeCardShowTokenVarImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectChangeCardShowTokenVarImpl,ConfigGCGExecEffectChangeCardShowTokenVarImpl&>(
    (ConfigGCGExecEffectChangeCardShowTokenVarImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectChangeCardShowTokenVarImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 190: range 000000000DD1ED22-000000000DD1ED7A
void __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::ConfigGCGExecEffectOnStageCharacterUseSkillImpl(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this,
        const ConfigGCGExecEffectOnStageCharacterUseSkillImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectOnStageCharacterUseSkill::ConfigGCGExecEffectOnStageCharacterUseSkill(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectOnStageCharacterUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 190: range 000000000DD8480A-000000000DD84834
void __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::~ConfigGCGExecEffectOnStageCharacterUseSkillImpl(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this)
{
  ConfigGCGExecEffectOnStageCharacterUseSkillImpl::~ConfigGCGExecEffectOnStageCharacterUseSkillImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 190: range 000000000DD847BC-000000000DD84809
void __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::~ConfigGCGExecEffectOnStageCharacterUseSkillImpl(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectOnStageCharacterUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectOnStageCharacterUseSkill::~ConfigGCGExecEffectOnStageCharacterUseSkill(this);
};

// Line 193: range 000000000D83450E-000000000D834556
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::clone(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this)
{
  ConfigGCGExecEffectOnStageCharacterUseSkillImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectOnStageCharacterUseSkillImpl,ConfigGCGExecEffectOnStageCharacterUseSkillImpl&>(
    (ConfigGCGExecEffectOnStageCharacterUseSkillImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectOnStageCharacterUseSkillImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 197: range 000000000DD1F0EA-000000000DD1F142
void __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::ConfigGCGEffectBeingHitDamageReviseImpl(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this,
        const ConfigGCGEffectBeingHitDamageReviseImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectBeingHitDamageRevise::ConfigGCGEffectBeingHitDamageRevise(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 197: range 000000000DD84790-000000000DD847BA
void __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::~ConfigGCGEffectBeingHitDamageReviseImpl(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this)
{
  ConfigGCGEffectBeingHitDamageReviseImpl::~ConfigGCGEffectBeingHitDamageReviseImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 197: range 000000000DD84742-000000000DD8478F
void __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::~ConfigGCGEffectBeingHitDamageReviseImpl(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectBeingHitDamageRevise::~ConfigGCGEffectBeingHitDamageRevise(this);
};

// Line 200: range 000000000D834594-000000000D8345DC
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::clone(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this)
{
  ConfigGCGEffectBeingHitDamageReviseImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectBeingHitDamageReviseImpl,ConfigGCGEffectBeingHitDamageReviseImpl&>(
    (ConfigGCGEffectBeingHitDamageReviseImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectBeingHitDamageReviseImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 204: range 000000000DD1F5F8-000000000DD1F650
void __cdecl ConfigGCGExecEffectDestroyCardImpl::ConfigGCGExecEffectDestroyCardImpl(
        ConfigGCGExecEffectDestroyCardImpl *const this,
        const ConfigGCGExecEffectDestroyCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDestroyCard::ConfigGCGExecEffectDestroyCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 204: range 000000000DD84716-000000000DD84740
void __cdecl ConfigGCGExecEffectDestroyCardImpl::~ConfigGCGExecEffectDestroyCardImpl(
        ConfigGCGExecEffectDestroyCardImpl *const this)
{
  ConfigGCGExecEffectDestroyCardImpl::~ConfigGCGExecEffectDestroyCardImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 204: range 000000000DD846C8-000000000DD84715
void __cdecl ConfigGCGExecEffectDestroyCardImpl::~ConfigGCGExecEffectDestroyCardImpl(
        ConfigGCGExecEffectDestroyCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDestroyCard::~ConfigGCGExecEffectDestroyCard(this);
};

// Line 207: range 000000000D83461A-000000000D834662
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDestroyCardImpl::clone(
        ConfigGCGExecEffectDestroyCardImpl *const this)
{
  ConfigGCGExecEffectDestroyCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDestroyCardImpl,ConfigGCGExecEffectDestroyCardImpl&>(
    (ConfigGCGExecEffectDestroyCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDestroyCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDestroyCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 211: range 000000000DD1FA86-000000000DD1FADE
void __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::ConfigGCGExecEffectDestroyModifyCardImpl(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this,
        const ConfigGCGExecEffectDestroyModifyCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectDestroyModifyCard::ConfigGCGExecEffectDestroyModifyCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 211: range 000000000DD8469C-000000000DD846C6
void __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::~ConfigGCGExecEffectDestroyModifyCardImpl(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this)
{
  ConfigGCGExecEffectDestroyModifyCardImpl::~ConfigGCGExecEffectDestroyModifyCardImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 211: range 000000000DD8464E-000000000DD8469B
void __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::~ConfigGCGExecEffectDestroyModifyCardImpl(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectDestroyModifyCard::~ConfigGCGExecEffectDestroyModifyCard(this);
};

// Line 214: range 000000000D8346A0-000000000D8346E8
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::clone(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this)
{
  ConfigGCGExecEffectDestroyModifyCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectDestroyModifyCardImpl,ConfigGCGExecEffectDestroyModifyCardImpl&>(
    (ConfigGCGExecEffectDestroyModifyCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectDestroyModifyCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 218: range 000000000DD1FF52-000000000DD1FFAA
void __cdecl ConfigGCGExecEffectTransferEnergyImpl::ConfigGCGExecEffectTransferEnergyImpl(
        ConfigGCGExecEffectTransferEnergyImpl *const this,
        const ConfigGCGExecEffectTransferEnergyImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectTransferEnergy::ConfigGCGExecEffectTransferEnergy(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 218: range 000000000DD845D4-000000000DD84621
void __cdecl ConfigGCGExecEffectTransferEnergyImpl::~ConfigGCGExecEffectTransferEnergyImpl(
        ConfigGCGExecEffectTransferEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectTransferEnergy::~ConfigGCGExecEffectTransferEnergy(this);
};

// Line 218: range 000000000DD84622-000000000DD8464C
void __cdecl ConfigGCGExecEffectTransferEnergyImpl::~ConfigGCGExecEffectTransferEnergyImpl(
        ConfigGCGExecEffectTransferEnergyImpl *const this)
{
  ConfigGCGExecEffectTransferEnergyImpl::~ConfigGCGExecEffectTransferEnergyImpl(this);
  operator delete(this, 0x70uLL);
};

// Line 221: range 000000000D834726-000000000D83476E
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectTransferEnergyImpl::clone(
        ConfigGCGExecEffectTransferEnergyImpl *const this)
{
  ConfigGCGExecEffectTransferEnergyImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectTransferEnergyImpl,ConfigGCGExecEffectTransferEnergyImpl&>(
    (ConfigGCGExecEffectTransferEnergyImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectTransferEnergyImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 225: range 000000000DD2039A-000000000DD203F2
void __cdecl ConfigGCGExecEffectRandomGenDiceImpl::ConfigGCGExecEffectRandomGenDiceImpl(
        ConfigGCGExecEffectRandomGenDiceImpl *const this,
        const ConfigGCGExecEffectRandomGenDiceImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectRandomGenDice::ConfigGCGExecEffectRandomGenDice(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 225: range 000000000DD8455A-000000000DD845A7
void __cdecl ConfigGCGExecEffectRandomGenDiceImpl::~ConfigGCGExecEffectRandomGenDiceImpl(
        ConfigGCGExecEffectRandomGenDiceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectRandomGenDice::~ConfigGCGExecEffectRandomGenDice(this);
};

// Line 225: range 000000000DD845A8-000000000DD845D2
void __cdecl ConfigGCGExecEffectRandomGenDiceImpl::~ConfigGCGExecEffectRandomGenDiceImpl(
        ConfigGCGExecEffectRandomGenDiceImpl *const this)
{
  ConfigGCGExecEffectRandomGenDiceImpl::~ConfigGCGExecEffectRandomGenDiceImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 228: range 000000000D8347AC-000000000D8347F4
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectRandomGenDiceImpl::clone(
        ConfigGCGExecEffectRandomGenDiceImpl *const this)
{
  ConfigGCGExecEffectRandomGenDiceImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectRandomGenDiceImpl,ConfigGCGExecEffectRandomGenDiceImpl&>(
    (ConfigGCGExecEffectRandomGenDiceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectRandomGenDiceImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 232: range 000000000DD207EC-000000000DD20844
void __cdecl ConfigGCGExecEffectSearchCardImpl::ConfigGCGExecEffectSearchCardImpl(
        ConfigGCGExecEffectSearchCardImpl *const this,
        const ConfigGCGExecEffectSearchCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectSearchCard::ConfigGCGExecEffectSearchCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSearchCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 232: range 000000000DD844E0-000000000DD8452D
void __cdecl ConfigGCGExecEffectSearchCardImpl::~ConfigGCGExecEffectSearchCardImpl(
        ConfigGCGExecEffectSearchCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSearchCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectSearchCard::~ConfigGCGExecEffectSearchCard(this);
};

// Line 232: range 000000000DD8452E-000000000DD84558
void __cdecl ConfigGCGExecEffectSearchCardImpl::~ConfigGCGExecEffectSearchCardImpl(
        ConfigGCGExecEffectSearchCardImpl *const this)
{
  ConfigGCGExecEffectSearchCardImpl::~ConfigGCGExecEffectSearchCardImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 235: range 000000000D834832-000000000D83487A
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectSearchCardImpl::clone(
        ConfigGCGExecEffectSearchCardImpl *const this)
{
  ConfigGCGExecEffectSearchCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectSearchCardImpl,ConfigGCGExecEffectSearchCardImpl&>(
    (ConfigGCGExecEffectSearchCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectSearchCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectSearchCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 239: range 000000000DD20CFA-000000000DD20D52
void __cdecl ConfigGCGEffectPayByCardTagImpl::ConfigGCGEffectPayByCardTagImpl(
        ConfigGCGEffectPayByCardTagImpl *const this,
        const ConfigGCGEffectPayByCardTagImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectPayByCardTag::ConfigGCGEffectPayByCardTag(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectPayByCardTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 239: range 000000000DD844B4-000000000DD844DE
void __cdecl ConfigGCGEffectPayByCardTagImpl::~ConfigGCGEffectPayByCardTagImpl(
        ConfigGCGEffectPayByCardTagImpl *const this)
{
  ConfigGCGEffectPayByCardTagImpl::~ConfigGCGEffectPayByCardTagImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 239: range 000000000DD84466-000000000DD844B3
void __cdecl ConfigGCGEffectPayByCardTagImpl::~ConfigGCGEffectPayByCardTagImpl(
        ConfigGCGEffectPayByCardTagImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectPayByCardTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectPayByCardTag::~ConfigGCGEffectPayByCardTag(this);
};

// Line 242: range 000000000D8348B8-000000000D834900
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectPayByCardTagImpl::clone(
        ConfigGCGEffectPayByCardTagImpl *const this)
{
  ConfigGCGEffectPayByCardTagImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectPayByCardTagImpl,ConfigGCGEffectPayByCardTagImpl&>(
    (ConfigGCGEffectPayByCardTagImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectPayByCardTagImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectPayByCardTagImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 246: range 000000000DD21058-000000000DD210B0
void __cdecl ConfigGCGExecEffectAttachElementImpl::ConfigGCGExecEffectAttachElementImpl(
        ConfigGCGExecEffectAttachElementImpl *const this,
        const ConfigGCGExecEffectAttachElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectAttachElement::ConfigGCGExecEffectAttachElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAttachElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 246: range 000000000DD843EC-000000000DD84439
void __cdecl ConfigGCGExecEffectAttachElementImpl::~ConfigGCGExecEffectAttachElementImpl(
        ConfigGCGExecEffectAttachElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAttachElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectAttachElement::~ConfigGCGExecEffectAttachElement(this);
};

// Line 246: range 000000000DD8443A-000000000DD84464
void __cdecl ConfigGCGExecEffectAttachElementImpl::~ConfigGCGExecEffectAttachElementImpl(
        ConfigGCGExecEffectAttachElementImpl *const this)
{
  ConfigGCGExecEffectAttachElementImpl::~ConfigGCGExecEffectAttachElementImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 249: range 000000000D83493E-000000000D834986
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectAttachElementImpl::clone(
        ConfigGCGExecEffectAttachElementImpl *const this)
{
  ConfigGCGExecEffectAttachElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectAttachElementImpl,ConfigGCGExecEffectAttachElementImpl&>(
    (ConfigGCGExecEffectAttachElementImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectAttachElementImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectAttachElementImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 253: range 000000000DD214E2-000000000DD2153A
void __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::ConfigGCGEffectReplaceReactionElementByCardVarImpl(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this,
        const ConfigGCGEffectReplaceReactionElementByCardVarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectReplaceReactionElementByCardVar::ConfigGCGEffectReplaceReactionElementByCardVar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectReplaceReactionElementByCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 253: range 000000000DD84372-000000000DD843BF
void __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::~ConfigGCGEffectReplaceReactionElementByCardVarImpl(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectReplaceReactionElementByCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectReplaceReactionElementByCardVar::~ConfigGCGEffectReplaceReactionElementByCardVar(this);
};

// Line 253: range 000000000DD843C0-000000000DD843EA
void __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::~ConfigGCGEffectReplaceReactionElementByCardVarImpl(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this)
{
  ConfigGCGEffectReplaceReactionElementByCardVarImpl::~ConfigGCGEffectReplaceReactionElementByCardVarImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 256: range 000000000D8349C4-000000000D834A0C
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::clone(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this)
{
  ConfigGCGEffectReplaceReactionElementByCardVarImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectReplaceReactionElementByCardVarImpl,ConfigGCGEffectReplaceReactionElementByCardVarImpl&>(
    (ConfigGCGEffectReplaceReactionElementByCardVarImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectReplaceReactionElementByCardVarImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 260: range 000000000DD21970-000000000DD219C8
void __cdecl ConfigGCGExecEffectTransferModifyCardImpl::ConfigGCGExecEffectTransferModifyCardImpl(
        ConfigGCGExecEffectTransferModifyCardImpl *const this,
        const ConfigGCGExecEffectTransferModifyCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectTransferModifyCard::ConfigGCGExecEffectTransferModifyCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 260: range 000000000DD842F8-000000000DD84345
void __cdecl ConfigGCGExecEffectTransferModifyCardImpl::~ConfigGCGExecEffectTransferModifyCardImpl(
        ConfigGCGExecEffectTransferModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectTransferModifyCard::~ConfigGCGExecEffectTransferModifyCard(this);
};

// Line 260: range 000000000DD84346-000000000DD84370
void __cdecl ConfigGCGExecEffectTransferModifyCardImpl::~ConfigGCGExecEffectTransferModifyCardImpl(
        ConfigGCGExecEffectTransferModifyCardImpl *const this)
{
  ConfigGCGExecEffectTransferModifyCardImpl::~ConfigGCGExecEffectTransferModifyCardImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 263: range 000000000D834A4A-000000000D834A92
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectTransferModifyCardImpl::clone(
        ConfigGCGExecEffectTransferModifyCardImpl *const this)
{
  ConfigGCGExecEffectTransferModifyCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectTransferModifyCardImpl,ConfigGCGExecEffectTransferModifyCardImpl&>(
    (ConfigGCGExecEffectTransferModifyCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectTransferModifyCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 267: range 000000000DD21CCE-000000000DD21D26
void __cdecl ConfigGCGExecEffectRerollImpl::ConfigGCGExecEffectRerollImpl(
        ConfigGCGExecEffectRerollImpl *const this,
        const ConfigGCGExecEffectRerollImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectReroll::ConfigGCGExecEffectReroll(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRerollImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 267: range 000000000DD8427E-000000000DD842CB
void __cdecl ConfigGCGExecEffectRerollImpl::~ConfigGCGExecEffectRerollImpl(ConfigGCGExecEffectRerollImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRerollImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectReroll::~ConfigGCGExecEffectReroll(this);
};

// Line 267: range 000000000DD842CC-000000000DD842F6
void __cdecl ConfigGCGExecEffectRerollImpl::~ConfigGCGExecEffectRerollImpl(ConfigGCGExecEffectRerollImpl *const this)
{
  ConfigGCGExecEffectRerollImpl::~ConfigGCGExecEffectRerollImpl(this);
  operator delete(this, 0x58uLL);
};

// Line 270: range 000000000D834AD0-000000000D834B18
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectRerollImpl::clone(
        ConfigGCGExecEffectRerollImpl *const this)
{
  ConfigGCGExecEffectRerollImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectRerollImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectRerollImpl,ConfigGCGExecEffectRerollImpl&>(
    (ConfigGCGExecEffectRerollImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectRerollImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectRerollImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 274: range 000000000DD221D2-000000000DD2222A
void __cdecl ConfigGCGExecEffectSetDamageElementImpl::ConfigGCGExecEffectSetDamageElementImpl(
        ConfigGCGExecEffectSetDamageElementImpl *const this,
        const ConfigGCGExecEffectSetDamageElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectSetDamageElement::ConfigGCGExecEffectSetDamageElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 274: range 000000000DD84204-000000000DD84251
void __cdecl ConfigGCGExecEffectSetDamageElementImpl::~ConfigGCGExecEffectSetDamageElementImpl(
        ConfigGCGExecEffectSetDamageElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectSetDamageElement::~ConfigGCGExecEffectSetDamageElement(this);
};

// Line 274: range 000000000DD84252-000000000DD8427C
void __cdecl ConfigGCGExecEffectSetDamageElementImpl::~ConfigGCGExecEffectSetDamageElementImpl(
        ConfigGCGExecEffectSetDamageElementImpl *const this)
{
  ConfigGCGExecEffectSetDamageElementImpl::~ConfigGCGExecEffectSetDamageElementImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 277: range 000000000D834B56-000000000D834B9E
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectSetDamageElementImpl::clone(
        ConfigGCGExecEffectSetDamageElementImpl *const this)
{
  ConfigGCGExecEffectSetDamageElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectSetDamageElementImpl,ConfigGCGExecEffectSetDamageElementImpl&>(
    (ConfigGCGExecEffectSetDamageElementImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectSetDamageElementImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 281: range 000000000DD22650-000000000DD226A8
void __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::ConfigGCGExecEffectAbsorbUnusedDiceImpl(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this,
        const ConfigGCGExecEffectAbsorbUnusedDiceImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectAbsorbUnusedDice::ConfigGCGExecEffectAbsorbUnusedDice(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAbsorbUnusedDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 281: range 000000000DD841D8-000000000DD84202
void __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::~ConfigGCGExecEffectAbsorbUnusedDiceImpl(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this)
{
  ConfigGCGExecEffectAbsorbUnusedDiceImpl::~ConfigGCGExecEffectAbsorbUnusedDiceImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 281: range 000000000DD8418A-000000000DD841D7
void __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::~ConfigGCGExecEffectAbsorbUnusedDiceImpl(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAbsorbUnusedDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectAbsorbUnusedDice::~ConfigGCGExecEffectAbsorbUnusedDice(this);
};

// Line 284: range 000000000D834BDC-000000000D834C24
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::clone(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this)
{
  ConfigGCGExecEffectAbsorbUnusedDiceImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectAbsorbUnusedDiceImpl,ConfigGCGExecEffectAbsorbUnusedDiceImpl&>(
    (ConfigGCGExecEffectAbsorbUnusedDiceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectAbsorbUnusedDiceImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 288: range 000000000DD229E4-000000000DD22A3C
void __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::ConfigGCGEffectModifiedCharacterAssignUseSkillImpl(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this,
        const ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectModifiedCharacterAssignUseSkill::ConfigGCGEffectModifiedCharacterAssignUseSkill(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectModifiedCharacterAssignUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 288: range 000000000DD8415E-000000000DD84188
void __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::~ConfigGCGEffectModifiedCharacterAssignUseSkillImpl(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this)
{
  ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::~ConfigGCGEffectModifiedCharacterAssignUseSkillImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 288: range 000000000DD84110-000000000DD8415D
void __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::~ConfigGCGEffectModifiedCharacterAssignUseSkillImpl(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectModifiedCharacterAssignUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectModifiedCharacterAssignUseSkill::~ConfigGCGEffectModifiedCharacterAssignUseSkill(this);
};

// Line 291: range 000000000D834C62-000000000D834CAA
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::clone(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this)
{
  ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl,ConfigGCGEffectModifiedCharacterAssignUseSkillImpl&>(
    (ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectModifiedCharacterAssignUseSkillImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 296: range 000000000DD22E68-000000000DD22EC0
void __cdecl ConfigGCGEffectFixRerollDiceImpl::ConfigGCGEffectFixRerollDiceImpl(
        ConfigGCGEffectFixRerollDiceImpl *const this,
        const ConfigGCGEffectFixRerollDiceImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGEffectFixRerollDice::ConfigGCGEffectFixRerollDice(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 296: range 000000000DD840E4-000000000DD8410E
void __cdecl ConfigGCGEffectFixRerollDiceImpl::~ConfigGCGEffectFixRerollDiceImpl(
        ConfigGCGEffectFixRerollDiceImpl *const this)
{
  ConfigGCGEffectFixRerollDiceImpl::~ConfigGCGEffectFixRerollDiceImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 296: range 000000000DD84096-000000000DD840E3
void __cdecl ConfigGCGEffectFixRerollDiceImpl::~ConfigGCGEffectFixRerollDiceImpl(
        ConfigGCGEffectFixRerollDiceImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGEffectFixRerollDice::~ConfigGCGEffectFixRerollDice(this);
};

// Line 299: range 000000000D834CE8-000000000D834D30
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGEffectFixRerollDiceImpl::clone(
        ConfigGCGEffectFixRerollDiceImpl *const this)
{
  ConfigGCGEffectFixRerollDiceImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGEffectFixRerollDiceImpl,ConfigGCGEffectFixRerollDiceImpl&>(
    (ConfigGCGEffectFixRerollDiceImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGEffectFixRerollDiceImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGEffectFixRerollDiceImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 304: range 000000000DD231C6-000000000DD2321E
void __cdecl ConfigGCGExecEffectReviveCharacterImpl::ConfigGCGExecEffectReviveCharacterImpl(
        ConfigGCGExecEffectReviveCharacterImpl *const this,
        const ConfigGCGExecEffectReviveCharacterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectReviveCharacter::ConfigGCGExecEffectReviveCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectReviveCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 304: range 000000000DD8401C-000000000DD84069
void __cdecl ConfigGCGExecEffectReviveCharacterImpl::~ConfigGCGExecEffectReviveCharacterImpl(
        ConfigGCGExecEffectReviveCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectReviveCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectReviveCharacter::~ConfigGCGExecEffectReviveCharacter(this);
};

// Line 304: range 000000000DD8406A-000000000DD84094
void __cdecl ConfigGCGExecEffectReviveCharacterImpl::~ConfigGCGExecEffectReviveCharacterImpl(
        ConfigGCGExecEffectReviveCharacterImpl *const this)
{
  ConfigGCGExecEffectReviveCharacterImpl::~ConfigGCGExecEffectReviveCharacterImpl(this);
  operator delete(this, 0x60uLL);
};

// Line 307: range 000000000D834D6E-000000000D834DB6
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectReviveCharacterImpl::clone(
        ConfigGCGExecEffectReviveCharacterImpl *const this)
{
  ConfigGCGExecEffectReviveCharacterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectReviveCharacterImpl,ConfigGCGExecEffectReviveCharacterImpl&>(
    (ConfigGCGExecEffectReviveCharacterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectReviveCharacterImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 312: range 000000000DD236C4-000000000DD2371C
void __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this,
        const ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::ConfigGCGExecEffectAdvanceProcessWaitingCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 312: range 000000000DD83FA2-000000000DD83FEF
void __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::~ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::~ConfigGCGExecEffectAdvanceProcessWaitingCharacter(this);
};

// Line 312: range 000000000DD83FF0-000000000DD8401A
void __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::~ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this)
{
  ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::~ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl(this);
  operator delete(this, 0x40uLL);
};

// Line 315: range 000000000D834DF4-000000000D834E3C
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::clone(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this)
{
  ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl,ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl&>(
    (ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 320: range 000000000DD23A58-000000000DD23AB0
void __cdecl ConfigGCGExecEffectFinishDuelImpl::ConfigGCGExecEffectFinishDuelImpl(
        ConfigGCGExecEffectFinishDuelImpl *const this,
        const ConfigGCGExecEffectFinishDuelImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGExecEffectFinishDuel::ConfigGCGExecEffectFinishDuel(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectFinishDuelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v2;
};

// Line 320: range 000000000DD83F76-000000000DD83FA0
void __cdecl ConfigGCGExecEffectFinishDuelImpl::~ConfigGCGExecEffectFinishDuelImpl(
        ConfigGCGExecEffectFinishDuelImpl *const this)
{
  ConfigGCGExecEffectFinishDuelImpl::~ConfigGCGExecEffectFinishDuelImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 320: range 000000000DD83F28-000000000DD83F75
void __cdecl ConfigGCGExecEffectFinishDuelImpl::~ConfigGCGExecEffectFinishDuelImpl(
        ConfigGCGExecEffectFinishDuelImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectFinishDuelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
  data::ConfigGCGExecEffectFinishDuel::~ConfigGCGExecEffectFinishDuel(this);
};

// Line 323: range 000000000D834E7A-000000000D834EC2
std::shared_ptr<data::ConfigGCGEffect> __cdecl ConfigGCGExecEffectFinishDuelImpl::clone(
        ConfigGCGExecEffectFinishDuelImpl *const this)
{
  ConfigGCGExecEffectFinishDuelImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGEffect> result; // rax
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGExecEffectFinishDuelImpl,ConfigGCGExecEffectFinishDuelImpl&>(
    (ConfigGCGExecEffectFinishDuelImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGEffect>::shared_ptr<ConfigGCGExecEffectFinishDuelImpl,void>(
    (std::shared_ptr<data::ConfigGCGEffect> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGExecEffectFinishDuelImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGEffect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 3073: range 000000000DD32C56-000000000DD32CA3
void __cdecl ConfigGCGExecEffectDamageReviseImpl::ConfigGCGExecEffectDamageReviseImpl(
        ConfigGCGExecEffectDamageReviseImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDamageRevise::ConfigGCGExecEffectDamageRevise(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3111: range 000000000DD34702-000000000DD3474F
void __cdecl ConfigGCGExecEffectDamageMultipleImpl::ConfigGCGExecEffectDamageMultipleImpl(
        ConfigGCGExecEffectDamageMultipleImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDamageMultiple::ConfigGCGExecEffectDamageMultiple(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDamageMultipleImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3148: range 000000000DD3346E-000000000DD334BB
void __cdecl ConfigGCGExecEffectChargeImpl::ConfigGCGExecEffectChargeImpl(ConfigGCGExecEffectChargeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectCharge::ConfigGCGExecEffectCharge(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChargeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3189: range 000000000DD355DA-000000000DD35627
void __cdecl ConfigGCGExecEffectHealImpl::ConfigGCGExecEffectHealImpl(ConfigGCGExecEffectHealImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectHeal::ConfigGCGExecEffectHeal(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectHealImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3226: range 000000000DD3844E-000000000DD3849B
void __cdecl ConfigGCGExecEffectTransferEnergyImpl::ConfigGCGExecEffectTransferEnergyImpl(
        ConfigGCGExecEffectTransferEnergyImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectTransferEnergy::ConfigGCGExecEffectTransferEnergy(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferEnergyImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3266: range 000000000DD3927C-000000000DD392C9
void __cdecl ConfigGCGExecEffectAttachElementImpl::ConfigGCGExecEffectAttachElementImpl(
        ConfigGCGExecEffectAttachElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectAttachElement::ConfigGCGExecEffectAttachElement(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAttachElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3303: range 000000000DD3B0FE-000000000DD3B14B
void __cdecl ConfigGCGExecEffectReviveCharacterImpl::ConfigGCGExecEffectReviveCharacterImpl(
        ConfigGCGExecEffectReviveCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectReviveCharacter::ConfigGCGExecEffectReviveCharacter(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectReviveCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3372: range 000000000DD32430-000000000DD3247D
void __cdecl ConfigGCGExecEffectGenDiceImpl::ConfigGCGExecEffectGenDiceImpl(ConfigGCGExecEffectGenDiceImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectGenDice::ConfigGCGExecEffectGenDice(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3410: range 000000000DD337CA-000000000DD33817
void __cdecl ConfigGCGExecEffectChangeOnstageCharaterImpl::ConfigGCGExecEffectChangeOnstageCharaterImpl(
        ConfigGCGExecEffectChangeOnstageCharaterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectChangeOnstageCharater::ConfigGCGExecEffectChangeOnstageCharater(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeOnstageCharaterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3447: range 000000000DD33B38-000000000DD33B85
void __cdecl ConfigGCGExecEffectDrawImpl::ConfigGCGExecEffectDrawImpl(ConfigGCGExecEffectDrawImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDraw::ConfigGCGExecEffectDraw(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDrawImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3484: range 000000000DD38B26-000000000DD38B73
void __cdecl ConfigGCGExecEffectSearchCardImpl::ConfigGCGExecEffectSearchCardImpl(
        ConfigGCGExecEffectSearchCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectSearchCard::ConfigGCGExecEffectSearchCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSearchCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3522: range 000000000DD387BA-000000000DD38807
void __cdecl ConfigGCGExecEffectRandomGenDiceImpl::ConfigGCGExecEffectRandomGenDiceImpl(
        ConfigGCGExecEffectRandomGenDiceImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectRandomGenDice::ConfigGCGExecEffectRandomGenDice(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomGenDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3560: range 000000000DD3A194-000000000DD3A1E1
void __cdecl ConfigGCGExecEffectSetDamageElementImpl::ConfigGCGExecEffectSetDamageElementImpl(
        ConfigGCGExecEffectSetDamageElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectSetDamageElement::ConfigGCGExecEffectSetDamageElement(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3599: range 000000000DD3A5C4-000000000DD3A611
void __cdecl ConfigGCGExecEffectAbsorbUnusedDiceImpl::ConfigGCGExecEffectAbsorbUnusedDiceImpl(
        ConfigGCGExecEffectAbsorbUnusedDiceImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectAbsorbUnusedDice::ConfigGCGExecEffectAbsorbUnusedDice(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAbsorbUnusedDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3638: range 000000000DD3B4DE-000000000DD3B52B
void __cdecl ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl::ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl(
        ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectAdvanceProcessWaitingCharacter::ConfigGCGExecEffectAdvanceProcessWaitingCharacter(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectAdvanceProcessWaitingCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3677: range 000000000DD3B892-000000000DD3B8DF
void __cdecl ConfigGCGExecEffectFinishDuelImpl::ConfigGCGExecEffectFinishDuelImpl(
        ConfigGCGExecEffectFinishDuelImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectFinishDuel::ConfigGCGExecEffectFinishDuel(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectFinishDuelImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3714: range 000000000DD37472-000000000DD374BF
void __cdecl ConfigGCGExecEffectOnStageCharacterUseSkillImpl::ConfigGCGExecEffectOnStageCharacterUseSkillImpl(
        ConfigGCGExecEffectOnStageCharacterUseSkillImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectOnStageCharacterUseSkill::ConfigGCGExecEffectOnStageCharacterUseSkill(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectOnStageCharacterUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3751: range 000000000DD39DB4-000000000DD39E01
void __cdecl ConfigGCGExecEffectRerollImpl::ConfigGCGExecEffectRerollImpl(ConfigGCGExecEffectRerollImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectReroll::ConfigGCGExecEffectReroll(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRerollImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3802: range 000000000DD31AC6-000000000DD31B13
void __cdecl ConfigGCGExecEffectCreateCardImpl::ConfigGCGExecEffectCreateCardImpl(
        ConfigGCGExecEffectCreateCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectCreateCard::ConfigGCGExecEffectCreateCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3844: range 000000000DD34E86-000000000DD34ED3
void __cdecl ConfigGCGExecEffectRandomCreateCardImpl::ConfigGCGExecEffectRandomCreateCardImpl(
        ConfigGCGExecEffectRandomCreateCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectRandomCreateCard::ConfigGCGExecEffectRandomCreateCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectRandomCreateCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3884: range 000000000DD31FD0-000000000DD3201D
void __cdecl ConfigGCGExecEffectCreateModifyCardImpl::ConfigGCGExecEffectCreateModifyCardImpl(
        ConfigGCGExecEffectCreateModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectCreateModifyCard::ConfigGCGExecEffectCreateModifyCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectCreateModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3926: range 000000000DD328EA-000000000DD32937
void __cdecl ConfigGCGExecEffectChangeCardVarImpl::ConfigGCGExecEffectChangeCardVarImpl(
        ConfigGCGExecEffectChangeCardVarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectChangeCardVar::ConfigGCGExecEffectChangeCardVar(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 3969: range 000000000DD3710E-000000000DD3715B
void __cdecl ConfigGCGExecEffectChangeCardShowTokenVarImpl::ConfigGCGExecEffectChangeCardShowTokenVarImpl(
        ConfigGCGExecEffectChangeCardShowTokenVarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectChangeCardShowTokenVar::ConfigGCGExecEffectChangeCardShowTokenVar(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectChangeCardShowTokenVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4047: range 000000000DD37BF6-000000000DD37C43
void __cdecl ConfigGCGExecEffectDestroyCardImpl::ConfigGCGExecEffectDestroyCardImpl(
        ConfigGCGExecEffectDestroyCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDestroyCard::ConfigGCGExecEffectDestroyCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4086: range 000000000DD3801E-000000000DD3806B
void __cdecl ConfigGCGExecEffectDestroyModifyCardImpl::ConfigGCGExecEffectDestroyModifyCardImpl(
        ConfigGCGExecEffectDestroyModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectDestroyModifyCard::ConfigGCGExecEffectDestroyModifyCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectDestroyModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4125: range 000000000DD39A46-000000000DD39A93
void __cdecl ConfigGCGExecEffectTransferModifyCardImpl::ConfigGCGExecEffectTransferModifyCardImpl(
        ConfigGCGExecEffectTransferModifyCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGExecEffectTransferModifyCard::ConfigGCGExecEffectTransferModifyCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGExecEffectTransferModifyCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4206: range 000000000DD33E9C-000000000DD33EE9
void __cdecl ConfigGCGEffectAttachPhysicDamageToElementImpl::ConfigGCGEffectAttachPhysicDamageToElementImpl(
        ConfigGCGEffectAttachPhysicDamageToElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectAttachPhysicDamageToElement::ConfigGCGEffectAttachPhysicDamageToElement(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectAttachPhysicDamageToElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4243: range 000000000DD32FF8-000000000DD33045
void __cdecl ConfigGCGEffectFixRerollDiceToSpecialTypeImpl::ConfigGCGEffectFixRerollDiceToSpecialTypeImpl(
        ConfigGCGEffectFixRerollDiceToSpecialTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectFixRerollDiceToSpecialType::ConfigGCGEffectFixRerollDiceToSpecialType(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceToSpecialTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4295: range 000000000DD35D10-000000000DD35D5D
void __cdecl ConfigGCGEffectSkillUseCostReviseImpl::ConfigGCGEffectSkillUseCostReviseImpl(
        ConfigGCGEffectSkillUseCostReviseImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectSkillUseCostRevise::ConfigGCGEffectSkillUseCostRevise(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectSkillUseCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4333: range 000000000DD360F2-000000000DD3613F
void __cdecl ConfigGCGEffectPlayCardCostReviseImpl::ConfigGCGEffectPlayCardCostReviseImpl(
        ConfigGCGEffectPlayCardCostReviseImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectPlayCardCostRevise::ConfigGCGEffectPlayCardCostRevise(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectPlayCardCostReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4371: range 000000000DD38F0E-000000000DD38F5B
void __cdecl ConfigGCGEffectPayByCardTagImpl::ConfigGCGEffectPayByCardTagImpl(
        ConfigGCGEffectPayByCardTagImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectPayByCardTag::ConfigGCGEffectPayByCardTag(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectPayByCardTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4410: range 000000000DD364D4-000000000DD36521
void __cdecl ConfigGCGEffectChangeCharacterReviseCostImpl::ConfigGCGEffectChangeCharacterReviseCostImpl(
        ConfigGCGEffectChangeCharacterReviseCostImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectChangeCharacterReviseCost::ConfigGCGEffectChangeCharacterReviseCost(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4448: range 000000000DD368B6-000000000DD36903
void __cdecl ConfigGCGEffectChangeCharacterIncreCostImpl::ConfigGCGEffectChangeCharacterIncreCostImpl(
        ConfigGCGEffectChangeCharacterIncreCostImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectChangeCharacterIncreCost::ConfigGCGEffectChangeCharacterIncreCost(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4486: range 000000000DD36C98-000000000DD36CE5
void __cdecl ConfigGCGEffectOpponentChangeCharacterIncreCostImpl::ConfigGCGEffectOpponentChangeCharacterIncreCostImpl(
        ConfigGCGEffectOpponentChangeCharacterIncreCostImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectOpponentChangeCharacterIncreCost::ConfigGCGEffectOpponentChangeCharacterIncreCost(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectOpponentChangeCharacterIncreCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4524: range 000000000DD3593E-000000000DD3598B
void __cdecl ConfigGCGEffectRerollReviseCostImpl::ConfigGCGEffectRerollReviseCostImpl(
        ConfigGCGEffectRerollReviseCostImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectRerollReviseCost::ConfigGCGEffectRerollReviseCost(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectRerollReviseCostImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4561: range 000000000DD3AD90-000000000DD3ADDD
void __cdecl ConfigGCGEffectFixRerollDiceImpl::ConfigGCGEffectFixRerollDiceImpl(
        ConfigGCGEffectFixRerollDiceImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectFixRerollDice::ConfigGCGEffectFixRerollDice(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectFixRerollDiceImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4600: range 000000000DD351A4-000000000DD351F1
void __cdecl ConfigGCGEffectChangeCharacterSetQuickImpl::ConfigGCGEffectChangeCharacterSetQuickImpl(
        ConfigGCGEffectChangeCharacterSetQuickImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectChangeCharacterSetQuick::ConfigGCGEffectChangeCharacterSetQuick(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectChangeCharacterSetQuickImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4636: range 000000000DD34A66-000000000DD34AB3
void __cdecl ConfigGCGEffectBeingHitDamageReduceToHalfImpl::ConfigGCGEffectBeingHitDamageReduceToHalfImpl(
        ConfigGCGEffectBeingHitDamageReduceToHalfImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectBeingHitDamageReduceToHalf::ConfigGCGEffectBeingHitDamageReduceToHalf(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReduceToHalfImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4673: range 000000000DD3780E-000000000DD3785B
void __cdecl ConfigGCGEffectBeingHitDamageReviseImpl::ConfigGCGEffectBeingHitDamageReviseImpl(
        ConfigGCGEffectBeingHitDamageReviseImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectBeingHitDamageRevise::ConfigGCGEffectBeingHitDamageRevise(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectBeingHitDamageReviseImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4711: range 000000000DD3961E-000000000DD3966B
void __cdecl ConfigGCGEffectReplaceReactionElementByCardVarImpl::ConfigGCGEffectReplaceReactionElementByCardVarImpl(
        ConfigGCGEffectReplaceReactionElementByCardVarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectReplaceReactionElementByCardVar::ConfigGCGEffectReplaceReactionElementByCardVar(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectReplaceReactionElementByCardVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// Line 4749: range 000000000DD3A978-000000000DD3A9C5
void __cdecl ConfigGCGEffectModifiedCharacterAssignUseSkillImpl::ConfigGCGEffectModifiedCharacterAssignUseSkillImpl(
        ConfigGCGEffectModifiedCharacterAssignUseSkillImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGEffectModifiedCharacterAssignUseSkill::ConfigGCGEffectModifiedCharacterAssignUseSkill(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGEffectModifiedCharacterAssignUseSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGEffect = v1;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_condition.h

// Line 21: range 000000000E2BF09E-000000000E2BF0F6
void __cdecl ConfigGCGConditionConstIntegerValueImpl::ConfigGCGConditionConstIntegerValueImpl(
        ConfigGCGConditionConstIntegerValueImpl *const this,
        const ConfigGCGConditionConstIntegerValueImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionConstIntegerValue::ConfigGCGConditionConstIntegerValue(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionConstIntegerValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 21: range 000000000E2D50BA-000000000E2D50E4
void __cdecl ConfigGCGConditionConstIntegerValueImpl::~ConfigGCGConditionConstIntegerValueImpl(
        ConfigGCGConditionConstIntegerValueImpl *const this)
{
  ConfigGCGConditionConstIntegerValueImpl::~ConfigGCGConditionConstIntegerValueImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 21: range 000000000E2D506C-000000000E2D50B9
void __cdecl ConfigGCGConditionConstIntegerValueImpl::~ConfigGCGConditionConstIntegerValueImpl(
        ConfigGCGConditionConstIntegerValueImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionConstIntegerValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionConstIntegerValue::~ConfigGCGConditionConstIntegerValue(this);
};

// Line 24: range 000000000E1D584E-000000000E1D58B6
std::string *__cdecl ConfigGCGConditionConstIntegerValueImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionConstIntegerValueImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "ConstIntegerValue", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 25: range 000000000E1D58B8-000000000E1D5900
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionConstIntegerValueImpl::clone(
        ConfigGCGConditionConstIntegerValueImpl *const this)
{
  ConfigGCGConditionConstIntegerValueImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionConstIntegerValueImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionConstIntegerValueImpl,ConfigGCGConditionConstIntegerValueImpl&>(
    (ConfigGCGConditionConstIntegerValueImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionConstIntegerValueImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionConstIntegerValueImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 29: range 000000000E2BF3D8-000000000E2BF430
void __cdecl ConfigGCGLogicConditionImpl::ConfigGCGLogicConditionImpl(
        ConfigGCGLogicConditionImpl *const this,
        const ConfigGCGLogicConditionImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGLogicCondition::ConfigGCGLogicCondition(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGLogicConditionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 29: range 000000000E2D5134-000000000E2D515E
void __cdecl ConfigGCGLogicConditionImpl::~ConfigGCGLogicConditionImpl(ConfigGCGLogicConditionImpl *const this)
{
  ConfigGCGLogicConditionImpl::~ConfigGCGLogicConditionImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 29: range 000000000E2D50E6-000000000E2D5133
void __cdecl ConfigGCGLogicConditionImpl::~ConfigGCGLogicConditionImpl(ConfigGCGLogicConditionImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGLogicConditionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGLogicCondition::~ConfigGCGLogicCondition(this);
};

// Line 32: range 000000000E1D5902-000000000E1D596A
std::string *__cdecl ConfigGCGLogicConditionImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGLogicConditionImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "Logic", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 33: range 000000000E1D596C-000000000E1D59B4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGLogicConditionImpl::clone(
        ConfigGCGLogicConditionImpl *const this)
{
  ConfigGCGLogicConditionImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGLogicConditionImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGLogicConditionImpl,ConfigGCGLogicConditionImpl&>(
    (ConfigGCGLogicConditionImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGLogicConditionImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGLogicConditionImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 37: range 000000000E2BF6C0-000000000E2BF718
void __cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::ConfigGCGConditionGlobalFetchCurSkillImpl(
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this,
        const ConfigGCGConditionGlobalFetchCurSkillImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurSkill::ConfigGCGConditionGlobalFetchCurSkill(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 37: range 000000000E2D4FF2-000000000E2D503F
void __cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::~ConfigGCGConditionGlobalFetchCurSkillImpl(
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurSkill::~ConfigGCGConditionGlobalFetchCurSkill(this);
};

// Line 37: range 000000000E2D5040-000000000E2D506A
void __cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::~ConfigGCGConditionGlobalFetchCurSkillImpl(
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurSkillImpl::~ConfigGCGConditionGlobalFetchCurSkillImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 40: range 000000000E1D59B6-000000000E1D5A1E
std::string *__cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurSkill", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 41: range 000000000E1D5A20-000000000E1D5A68
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::clone(
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurSkillImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurSkillImpl,ConfigGCGConditionGlobalFetchCurSkillImpl&>(
    (ConfigGCGConditionGlobalFetchCurSkillImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 45: range 000000000E2BF928-000000000E2BF980
void __cdecl ConfigGCGConditionGlobalFetchCurCardImpl::ConfigGCGConditionGlobalFetchCurCardImpl(
        ConfigGCGConditionGlobalFetchCurCardImpl *const this,
        const ConfigGCGConditionGlobalFetchCurCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurCard::ConfigGCGConditionGlobalFetchCurCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 45: range 000000000E2D4FC6-000000000E2D4FF0
void __cdecl ConfigGCGConditionGlobalFetchCurCardImpl::~ConfigGCGConditionGlobalFetchCurCardImpl(
        ConfigGCGConditionGlobalFetchCurCardImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurCardImpl::~ConfigGCGConditionGlobalFetchCurCardImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 45: range 000000000E2D4F78-000000000E2D4FC5
void __cdecl ConfigGCGConditionGlobalFetchCurCardImpl::~ConfigGCGConditionGlobalFetchCurCardImpl(
        ConfigGCGConditionGlobalFetchCurCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurCard::~ConfigGCGConditionGlobalFetchCurCard(this);
};

// Line 48: range 000000000E1D5A6A-000000000E1D5AD2
std::string *__cdecl ConfigGCGConditionGlobalFetchCurCardImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurCardImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurCard", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 49: range 000000000E1D5AD4-000000000E1D5B1C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurCardImpl::clone(
        ConfigGCGConditionGlobalFetchCurCardImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurCardImpl,ConfigGCGConditionGlobalFetchCurCardImpl&>(
    (ConfigGCGConditionGlobalFetchCurCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 53: range 000000000E2BFB90-000000000E2BFBE8
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::ConfigGCGConditionGlobalFetchSourceCharacterImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this,
        const ConfigGCGConditionGlobalFetchSourceCharacterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSourceCharacter::ConfigGCGConditionGlobalFetchSourceCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 53: range 000000000E2D4EFE-000000000E2D4F4B
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::~ConfigGCGConditionGlobalFetchSourceCharacterImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchSourceCharacter::~ConfigGCGConditionGlobalFetchSourceCharacter(this);
};

// Line 53: range 000000000E2D4F4C-000000000E2D4F76
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::~ConfigGCGConditionGlobalFetchSourceCharacterImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this)
{
  ConfigGCGConditionGlobalFetchSourceCharacterImpl::~ConfigGCGConditionGlobalFetchSourceCharacterImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 56: range 000000000E1D5B1E-000000000E1D5B86
std::string *__cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchSourceCharacter", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 57: range 000000000E1D5B88-000000000E1D5BD0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::clone(
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this)
{
  ConfigGCGConditionGlobalFetchSourceCharacterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSourceCharacterImpl,ConfigGCGConditionGlobalFetchSourceCharacterImpl&>(
    (ConfigGCGConditionGlobalFetchSourceCharacterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 61: range 000000000E2BFDF8-000000000E2BFE50
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::ConfigGCGConditionGlobalFetchTargetCharacterImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this,
        const ConfigGCGConditionGlobalFetchTargetCharacterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchTargetCharacter::ConfigGCGConditionGlobalFetchTargetCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 61: range 000000000E2D4E84-000000000E2D4ED1
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::~ConfigGCGConditionGlobalFetchTargetCharacterImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchTargetCharacter::~ConfigGCGConditionGlobalFetchTargetCharacter(this);
};

// Line 61: range 000000000E2D4ED2-000000000E2D4EFC
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::~ConfigGCGConditionGlobalFetchTargetCharacterImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this)
{
  ConfigGCGConditionGlobalFetchTargetCharacterImpl::~ConfigGCGConditionGlobalFetchTargetCharacterImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 64: range 000000000E1D5BD2-000000000E1D5C3A
std::string *__cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchTargetCharacter", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 65: range 000000000E1D5C3C-000000000E1D5C84
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::clone(
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this)
{
  ConfigGCGConditionGlobalFetchTargetCharacterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchTargetCharacterImpl,ConfigGCGConditionGlobalFetchTargetCharacterImpl&>(
    (ConfigGCGConditionGlobalFetchTargetCharacterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 69: range 000000000E2C00E4-000000000E2C013C
void __cdecl ConfigCCGConditionCardFetchVarImpl::ConfigCCGConditionCardFetchVarImpl(
        ConfigCCGConditionCardFetchVarImpl *const this,
        const ConfigCCGConditionCardFetchVarImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCCGConditionCardFetchVar::ConfigCCGConditionCardFetchVar(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigCCGConditionCardFetchVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 69: range 000000000E2D4E0A-000000000E2D4E57
void __cdecl ConfigCCGConditionCardFetchVarImpl::~ConfigCCGConditionCardFetchVarImpl(
        ConfigCCGConditionCardFetchVarImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigCCGConditionCardFetchVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigCCGConditionCardFetchVar::~ConfigCCGConditionCardFetchVar(this);
};

// Line 69: range 000000000E2D4E58-000000000E2D4E82
void __cdecl ConfigCCGConditionCardFetchVarImpl::~ConfigCCGConditionCardFetchVarImpl(
        ConfigCCGConditionCardFetchVarImpl *const this)
{
  ConfigCCGConditionCardFetchVarImpl::~ConfigCCGConditionCardFetchVarImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 72: range 000000000E1D5C86-000000000E1D5CEE
std::string *__cdecl ConfigCCGConditionCardFetchVarImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigCCGConditionCardFetchVarImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CardFetchVar", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 73: range 000000000E1D5CF0-000000000E1D5D38
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigCCGConditionCardFetchVarImpl::clone(
        ConfigCCGConditionCardFetchVarImpl *const this)
{
  ConfigCCGConditionCardFetchVarImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigCCGConditionCardFetchVarImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigCCGConditionCardFetchVarImpl,ConfigCCGConditionCardFetchVarImpl&>(
    (ConfigCCGConditionCardFetchVarImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigCCGConditionCardFetchVarImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigCCGConditionCardFetchVarImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 79: range 000000000E2C03D0-000000000E2C0428
void __cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::ConfigGCGConditionCharacterCheckAttachCardImpl(
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this,
        const ConfigGCGConditionCharacterCheckAttachCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCharacterCheckAttachCard::ConfigGCGConditionCharacterCheckAttachCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCharacterCheckAttachCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 79: range 000000000E2D4D90-000000000E2D4DDD
void __cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::~ConfigGCGConditionCharacterCheckAttachCardImpl(
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCharacterCheckAttachCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCharacterCheckAttachCard::~ConfigGCGConditionCharacterCheckAttachCard(this);
};

// Line 79: range 000000000E2D4DDE-000000000E2D4E08
void __cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::~ConfigGCGConditionCharacterCheckAttachCardImpl(
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this)
{
  ConfigGCGConditionCharacterCheckAttachCardImpl::~ConfigGCGConditionCharacterCheckAttachCardImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 82: range 000000000E1D5D3A-000000000E1D5DA2
std::string *__cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CharacterCheckAttachCard", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 83: range 000000000E1D5DA4-000000000E1D5DEC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::clone(
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this)
{
  ConfigGCGConditionCharacterCheckAttachCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCharacterCheckAttachCardImpl,ConfigGCGConditionCharacterCheckAttachCardImpl&>(
    (ConfigGCGConditionCharacterCheckAttachCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCharacterCheckAttachCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 90: range 000000000E2C06BC-000000000E2C0714
void __cdecl ConfigGCGConditionCheckCurCharacterCampImpl::ConfigGCGConditionCheckCurCharacterCampImpl(
        ConfigGCGConditionCheckCurCharacterCampImpl *const this,
        const ConfigGCGConditionCheckCurCharacterCampImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterCamp::ConfigGCGConditionCheckCurCharacterCamp(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 90: range 000000000E2D4D64-000000000E2D4D8E
void __cdecl ConfigGCGConditionCheckCurCharacterCampImpl::~ConfigGCGConditionCheckCurCharacterCampImpl(
        ConfigGCGConditionCheckCurCharacterCampImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterCampImpl::~ConfigGCGConditionCheckCurCharacterCampImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 90: range 000000000E2D4D16-000000000E2D4D63
void __cdecl ConfigGCGConditionCheckCurCharacterCampImpl::~ConfigGCGConditionCheckCurCharacterCampImpl(
        ConfigGCGConditionCheckCurCharacterCampImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterCamp::~ConfigGCGConditionCheckCurCharacterCamp(this);
};

// Line 93: range 000000000E1D5DEE-000000000E1D5E56
std::string *__cdecl ConfigGCGConditionCheckCurCharacterCampImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterCampImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterCamp", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 94: range 000000000E1D5E58-000000000E1D5EA0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterCampImpl::clone(
        ConfigGCGConditionCheckCurCharacterCampImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterCampImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterCampImpl,ConfigGCGConditionCheckCurCharacterCampImpl&>(
    (ConfigGCGConditionCheckCurCharacterCampImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterCampImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 101: range 000000000E2C09A8-000000000E2C0A00
void __cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::ConfigGCGConditionCheckCurCharacterPositionImpl(
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this,
        const ConfigGCGConditionCheckCurCharacterPositionImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterPosition::ConfigGCGConditionCheckCurCharacterPosition(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 101: range 000000000E2D4C9C-000000000E2D4CE9
void __cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::~ConfigGCGConditionCheckCurCharacterPositionImpl(
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterPosition::~ConfigGCGConditionCheckCurCharacterPosition(this);
};

// Line 101: range 000000000E2D4CEA-000000000E2D4D14
void __cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::~ConfigGCGConditionCheckCurCharacterPositionImpl(
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterPositionImpl::~ConfigGCGConditionCheckCurCharacterPositionImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 104: range 000000000E1D5EA2-000000000E1D5F0A
std::string *__cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterPosition", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 105: range 000000000E1D5F0C-000000000E1D5F54
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::clone(
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterPositionImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterPositionImpl,ConfigGCGConditionCheckCurCharacterPositionImpl&>(
    (ConfigGCGConditionCheckCurCharacterPositionImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterPositionImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 112: range 000000000DD3D242-000000000DD3D28F
void __cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::ConfigGCGConditionGlobalFetchCurSkillObjectImpl(
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurSkillObject::ConfigGCGConditionGlobalFetchCurSkillObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 112: range 000000000E2C0C3A-000000000E2C0C92
void __cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::ConfigGCGConditionGlobalFetchCurSkillObjectImpl(
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchCurSkillObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurSkillObject::ConfigGCGConditionGlobalFetchCurSkillObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 112: range 000000000E2D4C70-000000000E2D4C9A
void __cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::~ConfigGCGConditionGlobalFetchCurSkillObjectImpl(
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurSkillObjectImpl::~ConfigGCGConditionGlobalFetchCurSkillObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 112: range 000000000E2D4C22-000000000E2D4C6F
void __cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::~ConfigGCGConditionGlobalFetchCurSkillObjectImpl(
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurSkillObject::~ConfigGCGConditionGlobalFetchCurSkillObject(this);
};

// Line 115: range 000000000E1D5F56-000000000E1D5FBE
std::string *__cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurSkillObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 116: range 000000000E1D5FC0-000000000E1D6008
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurSkillObjectImpl::clone(
        ConfigGCGConditionGlobalFetchCurSkillObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurSkillObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurSkillObjectImpl,ConfigGCGConditionGlobalFetchCurSkillObjectImpl&>(
    (ConfigGCGConditionGlobalFetchCurSkillObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurSkillObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 120: range 000000000DD3D6C2-000000000DD3D70F
void __cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::ConfigGCGConditionGlobalFetchCurCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurCardObject::ConfigGCGConditionGlobalFetchCurCardObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 120: range 000000000E2C0ECC-000000000E2C0F24
void __cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::ConfigGCGConditionGlobalFetchCurCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchCurCardObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurCardObject::ConfigGCGConditionGlobalFetchCurCardObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 120: range 000000000E2D4BA8-000000000E2D4BF5
void __cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::~ConfigGCGConditionGlobalFetchCurCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurCardObject::~ConfigGCGConditionGlobalFetchCurCardObject(this);
};

// Line 120: range 000000000E2D4BF6-000000000E2D4C20
void __cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::~ConfigGCGConditionGlobalFetchCurCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurCardObjectImpl::~ConfigGCGConditionGlobalFetchCurCardObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 123: range 000000000E1D600A-000000000E1D6072
std::string *__cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurCardObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 124: range 000000000E1D6074-000000000E1D60BC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurCardObjectImpl::clone(
        ConfigGCGConditionGlobalFetchCurCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurCardObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurCardObjectImpl,ConfigGCGConditionGlobalFetchCurCardObjectImpl&>(
    (ConfigGCGConditionGlobalFetchCurCardObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurCardObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 128: range 000000000DD3DB42-000000000DD3DB8F
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSourceCharacterObject::ConfigGCGConditionGlobalFetchSourceCharacterObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 128: range 000000000E2C115E-000000000E2C11B6
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSourceCharacterObject::ConfigGCGConditionGlobalFetchSourceCharacterObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 128: range 000000000E2D4B7C-000000000E2D4BA6
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 128: range 000000000E2D4B2E-000000000E2D4B7B
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchSourceCharacterObject::~ConfigGCGConditionGlobalFetchSourceCharacterObject(this);
};

// Line 131: range 000000000E1D60BE-000000000E1D6126
std::string *__cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchSourceCharacterObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 132: range 000000000E1D6128-000000000E1D6170
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl::clone(
        ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl,ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl&>(
    (ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSourceCharacterObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 137: range 000000000DD3DFC2-000000000DD3E00F
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchTargetCharacterObject::ConfigGCGConditionGlobalFetchTargetCharacterObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 137: range 000000000E2C13F0-000000000E2C1448
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchTargetCharacterObject::ConfigGCGConditionGlobalFetchTargetCharacterObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 137: range 000000000E2D4B02-000000000E2D4B2C
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::~ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::~ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 137: range 000000000E2D4AB4-000000000E2D4B01
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::~ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchTargetCharacterObject::~ConfigGCGConditionGlobalFetchTargetCharacterObject(this);
};

// Line 140: range 000000000E1D6172-000000000E1D61DA
std::string *__cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchTargetCharacterObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 141: range 000000000E1D61DC-000000000E1D6224
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl::clone(
        ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl,ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl&>(
    (ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchTargetCharacterObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 145: range 000000000E2C1658-000000000E2C16B0
void __cdecl ConfigGCGConditionGlobalFetchThisCardImpl::ConfigGCGConditionGlobalFetchThisCardImpl(
        ConfigGCGConditionGlobalFetchThisCardImpl *const this,
        const ConfigGCGConditionGlobalFetchThisCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchThisCard::ConfigGCGConditionGlobalFetchThisCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 145: range 000000000E2D4A88-000000000E2D4AB2
void __cdecl ConfigGCGConditionGlobalFetchThisCardImpl::~ConfigGCGConditionGlobalFetchThisCardImpl(
        ConfigGCGConditionGlobalFetchThisCardImpl *const this)
{
  ConfigGCGConditionGlobalFetchThisCardImpl::~ConfigGCGConditionGlobalFetchThisCardImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 145: range 000000000E2D4A3A-000000000E2D4A87
void __cdecl ConfigGCGConditionGlobalFetchThisCardImpl::~ConfigGCGConditionGlobalFetchThisCardImpl(
        ConfigGCGConditionGlobalFetchThisCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchThisCard::~ConfigGCGConditionGlobalFetchThisCard(this);
};

// Line 148: range 000000000E1D6226-000000000E1D628E
std::string *__cdecl ConfigGCGConditionGlobalFetchThisCardImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchThisCardImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchThisCard", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 149: range 000000000E1D6290-000000000E1D62D8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchThisCardImpl::clone(
        ConfigGCGConditionGlobalFetchThisCardImpl *const this)
{
  ConfigGCGConditionGlobalFetchThisCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchThisCardImpl,ConfigGCGConditionGlobalFetchThisCardImpl&>(
    (ConfigGCGConditionGlobalFetchThisCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 153: range 000000000DD3F276-000000000DD3F2C3
void __cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::ConfigGCGConditionGlobalFetchThisCardObjectImpl(
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchThisCardObject::ConfigGCGConditionGlobalFetchThisCardObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 153: range 000000000E2C18EA-000000000E2C1942
void __cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::ConfigGCGConditionGlobalFetchThisCardObjectImpl(
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchThisCardObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchThisCardObject::ConfigGCGConditionGlobalFetchThisCardObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 153: range 000000000E2D49C0-000000000E2D4A0D
void __cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::~ConfigGCGConditionGlobalFetchThisCardObjectImpl(
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchThisCardObject::~ConfigGCGConditionGlobalFetchThisCardObject(this);
};

// Line 153: range 000000000E2D4A0E-000000000E2D4A38
void __cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::~ConfigGCGConditionGlobalFetchThisCardObjectImpl(
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchThisCardObjectImpl::~ConfigGCGConditionGlobalFetchThisCardObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 156: range 000000000E1D62DA-000000000E1D6342
std::string *__cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchThisCardObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 157: range 000000000E1D6344-000000000E1D638C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchThisCardObjectImpl::clone(
        ConfigGCGConditionGlobalFetchThisCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchThisCardObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchThisCardObjectImpl,ConfigGCGConditionGlobalFetchThisCardObjectImpl&>(
    (ConfigGCGConditionGlobalFetchThisCardObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchThisCardObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 161: range 000000000E2C1B52-000000000E2C1BAA
void __cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl(
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this,
        const ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::ConfigGCGConditionGlobalFetchOnStageSummonNumber(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 161: range 000000000E2D4994-000000000E2D49BE
void __cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::~ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl(
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this)
{
  ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::~ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 161: range 000000000E2D4946-000000000E2D4993
void __cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::~ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl(
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::~ConfigGCGConditionGlobalFetchOnStageSummonNumber(this);
};

// Line 164: range 000000000E1D638E-000000000E1D63F6
std::string *__cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchOnStageSummonNumber", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 165: range 000000000E1D63F8-000000000E1D6440
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::clone(
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this)
{
  ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl,ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl&>(
    (ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 169: range 000000000E2C1E3E-000000000E2C1E96
void __cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::ConfigGCGConditionCheckCurSkillHasTagImpl(
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this,
        const ConfigGCGConditionCheckCurSkillHasTagImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillHasTag::ConfigGCGConditionCheckCurSkillHasTag(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 169: range 000000000E2D491A-000000000E2D4944
void __cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::~ConfigGCGConditionCheckCurSkillHasTagImpl(
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this)
{
  ConfigGCGConditionCheckCurSkillHasTagImpl::~ConfigGCGConditionCheckCurSkillHasTagImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 169: range 000000000E2D48CC-000000000E2D4919
void __cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::~ConfigGCGConditionCheckCurSkillHasTagImpl(
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurSkillHasTag::~ConfigGCGConditionCheckCurSkillHasTag(this);
};

// Line 172: range 000000000E1D6442-000000000E1D64AA
std::string *__cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurSkillHasTag", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 173: range 000000000E1D64AC-000000000E1D64F4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::clone(
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this)
{
  ConfigGCGConditionCheckCurSkillHasTagImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillHasTagImpl,ConfigGCGConditionCheckCurSkillHasTagImpl&>(
    (ConfigGCGConditionCheckCurSkillHasTagImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasTagImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 179: range 000000000E2C20A6-000000000E2C20FE
void __cdecl ConfigGCGConditionCheckCurSkillUsedImpl::ConfigGCGConditionCheckCurSkillUsedImpl(
        ConfigGCGConditionCheckCurSkillUsedImpl *const this,
        const ConfigGCGConditionCheckCurSkillUsedImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillUsed::ConfigGCGConditionCheckCurSkillUsed(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillUsedImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 179: range 000000000E2D45F0-000000000E2D463D
void __cdecl ConfigGCGConditionCheckCurSkillUsedImpl::~ConfigGCGConditionCheckCurSkillUsedImpl(
        ConfigGCGConditionCheckCurSkillUsedImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillUsedImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurSkillUsed::~ConfigGCGConditionCheckCurSkillUsed(this);
};

// Line 179: range 000000000E2D463E-000000000E2D4668
void __cdecl ConfigGCGConditionCheckCurSkillUsedImpl::~ConfigGCGConditionCheckCurSkillUsedImpl(
        ConfigGCGConditionCheckCurSkillUsedImpl *const this)
{
  ConfigGCGConditionCheckCurSkillUsedImpl::~ConfigGCGConditionCheckCurSkillUsedImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 182: range 000000000E1D64F6-000000000E1D655E
std::string *__cdecl ConfigGCGConditionCheckCurSkillUsedImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurSkillUsedImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurSkillUsed", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 183: range 000000000E1D6560-000000000E1D65A8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurSkillUsedImpl::clone(
        ConfigGCGConditionCheckCurSkillUsedImpl *const this)
{
  ConfigGCGConditionCheckCurSkillUsedImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillUsedImpl,ConfigGCGConditionCheckCurSkillUsedImpl&>(
    (ConfigGCGConditionCheckCurSkillUsedImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillUsedImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 189: range 000000000E2C2392-000000000E2C23EA
void __cdecl ConfigGCGConditionCurCardHasTagImpl::ConfigGCGConditionCurCardHasTagImpl(
        ConfigGCGConditionCurCardHasTagImpl *const this,
        const ConfigGCGConditionCurCardHasTagImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCardHasTag::ConfigGCGConditionCurCardHasTag(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 189: range 000000000E2D48A0-000000000E2D48CA
void __cdecl ConfigGCGConditionCurCardHasTagImpl::~ConfigGCGConditionCurCardHasTagImpl(
        ConfigGCGConditionCurCardHasTagImpl *const this)
{
  ConfigGCGConditionCurCardHasTagImpl::~ConfigGCGConditionCurCardHasTagImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 189: range 000000000E2D4852-000000000E2D489F
void __cdecl ConfigGCGConditionCurCardHasTagImpl::~ConfigGCGConditionCurCardHasTagImpl(
        ConfigGCGConditionCurCardHasTagImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCardHasTag::~ConfigGCGConditionCurCardHasTag(this);
};

// Line 192: range 000000000E1D65AA-000000000E1D6612
std::string *__cdecl ConfigGCGConditionCurCardHasTagImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCardHasTagImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCardHasTag", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 193: range 000000000E1D6614-000000000E1D665C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCardHasTagImpl::clone(
        ConfigGCGConditionCurCardHasTagImpl *const this)
{
  ConfigGCGConditionCurCardHasTagImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCardHasTagImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCardHasTagImpl,ConfigGCGConditionCurCardHasTagImpl&>(
    (ConfigGCGConditionCurCardHasTagImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCardHasTagImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCardHasTagImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 199: range 000000000E2C25FA-000000000E2C2652
void __cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::ConfigGCGConditionCurCardAttachToCardIDImpl(
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this,
        const ConfigGCGConditionCurCardAttachToCardIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardID::ConfigGCGConditionCurCardAttachToCardID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 199: range 000000000E2D47D8-000000000E2D4825
void __cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::~ConfigGCGConditionCurCardAttachToCardIDImpl(
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCardAttachToCardID::~ConfigGCGConditionCurCardAttachToCardID(this);
};

// Line 199: range 000000000E2D4826-000000000E2D4850
void __cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::~ConfigGCGConditionCurCardAttachToCardIDImpl(
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardIDImpl::~ConfigGCGConditionCurCardAttachToCardIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 202: range 000000000E1D665E-000000000E1D66C6
std::string *__cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCardAttachToCardID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 203: range 000000000E1D66C8-000000000E1D6710
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::clone(
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardIDImpl,ConfigGCGConditionCurCardAttachToCardIDImpl&>(
    (ConfigGCGConditionCurCardAttachToCardIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIDImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 211: range 000000000DD40466-000000000DD404B3
void __cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::ConfigGCGConditionCurCardAttachToCardObjectImpl(
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardObject::ConfigGCGConditionCurCardAttachToCardObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 211: range 000000000E2C288C-000000000E2C28E4
void __cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::ConfigGCGConditionCurCardAttachToCardObjectImpl(
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this,
        const ConfigGCGConditionCurCardAttachToCardObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardObject::ConfigGCGConditionCurCardAttachToCardObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 211: range 000000000E2D47AC-000000000E2D47D6
void __cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::~ConfigGCGConditionCurCardAttachToCardObjectImpl(
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardObjectImpl::~ConfigGCGConditionCurCardAttachToCardObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 211: range 000000000E2D475E-000000000E2D47AB
void __cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::~ConfigGCGConditionCurCardAttachToCardObjectImpl(
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCardAttachToCardObject::~ConfigGCGConditionCurCardAttachToCardObject(this);
};

// Line 214: range 000000000E1D6712-000000000E1D677A
std::string *__cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCardAttachToCardObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 215: range 000000000E1D677C-000000000E1D67C4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCardAttachToCardObjectImpl::clone(
        ConfigGCGConditionCurCardAttachToCardObjectImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardObjectImpl,ConfigGCGConditionCurCardAttachToCardObjectImpl&>(
    (ConfigGCGConditionCurCardAttachToCardObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 222: range 000000000E2C2AF4-000000000E2C2B4C
void __cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::ConfigGCGConditionCurCardAttachToCardIsTargetImpl(
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this,
        const ConfigGCGConditionCurCardAttachToCardIsTargetImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardIsTarget::ConfigGCGConditionCurCardAttachToCardIsTarget(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIsTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 222: range 000000000E2D4732-000000000E2D475C
void __cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::~ConfigGCGConditionCurCardAttachToCardIsTargetImpl(
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardIsTargetImpl::~ConfigGCGConditionCurCardAttachToCardIsTargetImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 222: range 000000000E2D46E4-000000000E2D4731
void __cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::~ConfigGCGConditionCurCardAttachToCardIsTargetImpl(
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIsTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCardAttachToCardIsTarget::~ConfigGCGConditionCurCardAttachToCardIsTarget(this);
};

// Line 225: range 000000000E1D67C6-000000000E1D682E
std::string *__cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCardAttachToCardIsTarget", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 226: range 000000000E1D6830-000000000E1D6878
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::clone(
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this)
{
  ConfigGCGConditionCurCardAttachToCardIsTargetImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCardAttachToCardIsTargetImpl,ConfigGCGConditionCurCardAttachToCardIsTargetImpl&>(
    (ConfigGCGConditionCurCardAttachToCardIsTargetImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCardAttachToCardIsTargetImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 233: range 000000000E2C2DE0-000000000E2C2E38
void __cdecl ConfigGCGConditionCheckCurCardCampImpl::ConfigGCGConditionCheckCurCardCampImpl(
        ConfigGCGConditionCheckCurCardCampImpl *const this,
        const ConfigGCGConditionCheckCurCardCampImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCardCamp::ConfigGCGConditionCheckCurCardCamp(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 233: range 000000000E2D46B8-000000000E2D46E2
void __cdecl ConfigGCGConditionCheckCurCardCampImpl::~ConfigGCGConditionCheckCurCardCampImpl(
        ConfigGCGConditionCheckCurCardCampImpl *const this)
{
  ConfigGCGConditionCheckCurCardCampImpl::~ConfigGCGConditionCheckCurCardCampImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 233: range 000000000E2D466A-000000000E2D46B7
void __cdecl ConfigGCGConditionCheckCurCardCampImpl::~ConfigGCGConditionCheckCurCardCampImpl(
        ConfigGCGConditionCheckCurCardCampImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCardCamp::~ConfigGCGConditionCheckCurCardCamp(this);
};

// Line 236: range 000000000E1D687A-000000000E1D68E2
std::string *__cdecl ConfigGCGConditionCheckCurCardCampImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCardCampImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCardCamp", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 237: range 000000000E1D68E4-000000000E1D692C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCardCampImpl::clone(
        ConfigGCGConditionCheckCurCardCampImpl *const this)
{
  ConfigGCGConditionCheckCurCardCampImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardCampImpl,ConfigGCGConditionCheckCurCardCampImpl&>(
    (ConfigGCGConditionCheckCurCardCampImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCardCampImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 243: range 000000000E2C3048-000000000E2C30A0
void __cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::ConfigGCGConditionGlobalCurCampHurtTotalImpl(
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this,
        const ConfigGCGConditionGlobalCurCampHurtTotalImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampHurtTotal::ConfigGCGConditionGlobalCurCampHurtTotal(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampHurtTotalImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 243: range 000000000E2D4576-000000000E2D45C3
void __cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::~ConfigGCGConditionGlobalCurCampHurtTotalImpl(
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampHurtTotalImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurCampHurtTotal::~ConfigGCGConditionGlobalCurCampHurtTotal(this);
};

// Line 243: range 000000000E2D45C4-000000000E2D45EE
void __cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::~ConfigGCGConditionGlobalCurCampHurtTotalImpl(
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this)
{
  ConfigGCGConditionGlobalCurCampHurtTotalImpl::~ConfigGCGConditionGlobalCurCampHurtTotalImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 246: range 000000000E1D692E-000000000E1D6996
std::string *__cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurCampHurtTotal", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 247: range 000000000E1D6998-000000000E1D69E0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::clone(
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this)
{
  ConfigGCGConditionGlobalCurCampHurtTotalImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampHurtTotalImpl,ConfigGCGConditionGlobalCurCampHurtTotalImpl&>(
    (ConfigGCGConditionGlobalCurCampHurtTotalImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampHurtTotalImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 251: range 000000000E2C32B0-000000000E2C3308
void __cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::ConfigGCGConditionCheckCurCharacterHurtNumImpl(
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this,
        const ConfigGCGConditionCheckCurCharacterHurtNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterHurtNum::ConfigGCGConditionCheckCurCharacterHurtNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHurtNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 251: range 000000000E2D454A-000000000E2D4574
void __cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::~ConfigGCGConditionCheckCurCharacterHurtNumImpl(
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterHurtNumImpl::~ConfigGCGConditionCheckCurCharacterHurtNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 251: range 000000000E2D44FC-000000000E2D4549
void __cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::~ConfigGCGConditionCheckCurCharacterHurtNumImpl(
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHurtNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterHurtNum::~ConfigGCGConditionCheckCurCharacterHurtNum(this);
};

// Line 254: range 000000000E1D69E2-000000000E1D6A4A
std::string *__cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterHurtNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 255: range 000000000E1D6A4C-000000000E1D6A94
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::clone(
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterHurtNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterHurtNumImpl,ConfigGCGConditionCheckCurCharacterHurtNumImpl&>(
    (ConfigGCGConditionCheckCurCharacterHurtNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHurtNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 261: range 000000000DD41EC6-000000000DD41F13
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 261: range 000000000E2C35C8-000000000E2C3620
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 261: range 000000000E2D44D0-000000000E2D44FA
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 261: range 000000000E2D4482-000000000E2D44CF
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObject(this);
};

// Line 264: range 000000000E1D6A96-000000000E1D6AFE
std::string *__cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchSpecifiedCampOnstageCharacterObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 265: range 000000000E1D6B00-000000000E1D6B48
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl::clone(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl,ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl&>(
    (ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 269: range 000000000E2C38B4-000000000E2C390C
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this,
        const ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 269: range 000000000E2D4408-000000000E2D4455
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(this);
};

// Line 269: range 000000000E2D4456-000000000E2D4480
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this)
{
  ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::~ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 272: range 000000000E1D6B4A-000000000E1D6BB2
std::string *__cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchSpecifiedCampOnstageCharacterID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 273: range 000000000E1D6BB4-000000000E1D6BFC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::clone(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this)
{
  ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl,ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl&>(
    (ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 277: range 000000000E2C3B1C-000000000E2C3B74
void __cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl(
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this,
        const ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 277: range 000000000E2D43DC-000000000E2D4406
void __cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl(
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 277: range 000000000E2D438E-000000000E2D43DB
void __cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl(
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::~ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(this);
};

// Line 280: range 000000000E1D6BFE-000000000E1D6C66
std::string *__cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurCampBackStageHurtTotalNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 281: range 000000000E1D6C68-000000000E1D6CB0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::clone(
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl,ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl&>(
    (ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 286: range 000000000E2C3D84-000000000E2C3DDC
void __cdecl ConfigGCGConditionGlobalThisSkillIDImpl::ConfigGCGConditionGlobalThisSkillIDImpl(
        ConfigGCGConditionGlobalThisSkillIDImpl *const this,
        const ConfigGCGConditionGlobalThisSkillIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalThisSkillID::ConfigGCGConditionGlobalThisSkillID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 286: range 000000000E2D4314-000000000E2D4361
void __cdecl ConfigGCGConditionGlobalThisSkillIDImpl::~ConfigGCGConditionGlobalThisSkillIDImpl(
        ConfigGCGConditionGlobalThisSkillIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalThisSkillID::~ConfigGCGConditionGlobalThisSkillID(this);
};

// Line 286: range 000000000E2D4362-000000000E2D438C
void __cdecl ConfigGCGConditionGlobalThisSkillIDImpl::~ConfigGCGConditionGlobalThisSkillIDImpl(
        ConfigGCGConditionGlobalThisSkillIDImpl *const this)
{
  ConfigGCGConditionGlobalThisSkillIDImpl::~ConfigGCGConditionGlobalThisSkillIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 289: range 000000000E1D6CB2-000000000E1D6D1A
std::string *__cdecl ConfigGCGConditionGlobalThisSkillIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalThisSkillIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalThisSkillID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 290: range 000000000E1D6D1C-000000000E1D6D64
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalThisSkillIDImpl::clone(
        ConfigGCGConditionGlobalThisSkillIDImpl *const this)
{
  ConfigGCGConditionGlobalThisSkillIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalThisSkillIDImpl,ConfigGCGConditionGlobalThisSkillIDImpl&>(
    (ConfigGCGConditionGlobalThisSkillIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillIDImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 293: range 000000000DD42C20-000000000DD42C6D
void __cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::ConfigGCGConditionGlobalThisSkillObjectImpl(
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalThisSkillObject::ConfigGCGConditionGlobalThisSkillObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 293: range 000000000E2C4016-000000000E2C406E
void __cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::ConfigGCGConditionGlobalThisSkillObjectImpl(
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this,
        const ConfigGCGConditionGlobalThisSkillObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalThisSkillObject::ConfigGCGConditionGlobalThisSkillObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 293: range 000000000E2D429A-000000000E2D42E7
void __cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::~ConfigGCGConditionGlobalThisSkillObjectImpl(
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalThisSkillObject::~ConfigGCGConditionGlobalThisSkillObject(this);
};

// Line 293: range 000000000E2D42E8-000000000E2D4312
void __cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::~ConfigGCGConditionGlobalThisSkillObjectImpl(
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this)
{
  ConfigGCGConditionGlobalThisSkillObjectImpl::~ConfigGCGConditionGlobalThisSkillObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 296: range 000000000E1D6D66-000000000E1D6DCE
std::string *__cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalThisSkillObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 297: range 000000000E1D6DD0-000000000E1D6E18
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalThisSkillObjectImpl::clone(
        ConfigGCGConditionGlobalThisSkillObjectImpl *const this)
{
  ConfigGCGConditionGlobalThisSkillObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalThisSkillObjectImpl,ConfigGCGConditionGlobalThisSkillObjectImpl&>(
    (ConfigGCGConditionGlobalThisSkillObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalThisSkillObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 300: range 000000000E2C427E-000000000E2C42D6
void __cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::ConfigGCGConditionFetchCurSkillRoundUsedNumImpl(
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this,
        const ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionFetchCurSkillRoundUsedNum::ConfigGCGConditionFetchCurSkillRoundUsedNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillRoundUsedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 300: range 000000000E2D426E-000000000E2D4298
void __cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::~ConfigGCGConditionFetchCurSkillRoundUsedNumImpl(
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this)
{
  ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::~ConfigGCGConditionFetchCurSkillRoundUsedNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 300: range 000000000E2D4220-000000000E2D426D
void __cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::~ConfigGCGConditionFetchCurSkillRoundUsedNumImpl(
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillRoundUsedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionFetchCurSkillRoundUsedNum::~ConfigGCGConditionFetchCurSkillRoundUsedNum(this);
};

// Line 303: range 000000000E1D6E1A-000000000E1D6E82
std::string *__cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "FetchCurSkillRoundUsedNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 304: range 000000000E1D6E84-000000000E1D6ECC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::clone(
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this)
{
  ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl,ConfigGCGConditionFetchCurSkillRoundUsedNumImpl&>(
    (ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionFetchCurSkillRoundUsedNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 309: range 000000000E2C456A-000000000E2C45C2
void __cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::ConfigGCGConditionCheckCurSkillHasSkillIDImpl(
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this,
        const ConfigGCGConditionCheckCurSkillHasSkillIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillHasSkillID::ConfigGCGConditionCheckCurSkillHasSkillID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 309: range 000000000E2D41A6-000000000E2D41F3
void __cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::~ConfigGCGConditionCheckCurSkillHasSkillIDImpl(
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurSkillHasSkillID::~ConfigGCGConditionCheckCurSkillHasSkillID(this);
};

// Line 309: range 000000000E2D41F4-000000000E2D421E
void __cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::~ConfigGCGConditionCheckCurSkillHasSkillIDImpl(
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this)
{
  ConfigGCGConditionCheckCurSkillHasSkillIDImpl::~ConfigGCGConditionCheckCurSkillHasSkillIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 312: range 000000000E1D6ECE-000000000E1D6F36
std::string *__cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurSkillHasSkillID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 313: range 000000000E1D6F38-000000000E1D6F80
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::clone(
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this)
{
  ConfigGCGConditionCheckCurSkillHasSkillIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurSkillHasSkillIDImpl,ConfigGCGConditionCheckCurSkillHasSkillIDImpl&>(
    (ConfigGCGConditionCheckCurSkillHasSkillIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurSkillHasSkillIDImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 318: range 000000000E2C4856-000000000E2C48AE
void __cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::ConfigGCGConditionCheckCurCharacterHasCardIDImpl(
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this,
        const ConfigGCGConditionCheckCurCharacterHasCardIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterHasCardID::ConfigGCGConditionCheckCurCharacterHasCardID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 318: range 000000000E2D417A-000000000E2D41A4
void __cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::~ConfigGCGConditionCheckCurCharacterHasCardIDImpl(
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterHasCardIDImpl::~ConfigGCGConditionCheckCurCharacterHasCardIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 318: range 000000000E2D412C-000000000E2D4179
void __cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::~ConfigGCGConditionCheckCurCharacterHasCardIDImpl(
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterHasCardID::~ConfigGCGConditionCheckCurCharacterHasCardID(this);
};

// Line 321: range 000000000E1D6F82-000000000E1D6FEA
std::string *__cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterHasCardID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 322: range 000000000E1D6FEC-000000000E1D7034
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::clone(
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterHasCardIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterHasCardIDImpl,ConfigGCGConditionCheckCurCharacterHasCardIDImpl&>(
    (ConfigGCGConditionCheckCurCharacterHasCardIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterHasCardIDImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 327: range 000000000E2C4B42-000000000E2C4B9A
void __cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::ConfigGCGConditionCheckCurCardHasCardIDImpl(
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this,
        const ConfigGCGConditionCheckCurCardHasCardIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCardHasCardID::ConfigGCGConditionCheckCurCardHasCardID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 327: range 000000000E2D4100-000000000E2D412A
void __cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::~ConfigGCGConditionCheckCurCardHasCardIDImpl(
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this)
{
  ConfigGCGConditionCheckCurCardHasCardIDImpl::~ConfigGCGConditionCheckCurCardHasCardIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 327: range 000000000E2D40B2-000000000E2D40FF
void __cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::~ConfigGCGConditionCheckCurCardHasCardIDImpl(
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCardHasCardID::~ConfigGCGConditionCheckCurCardHasCardID(this);
};

// Line 330: range 000000000E1D7036-000000000E1D709E
std::string *__cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCardHasCardID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 331: range 000000000E1D70A0-000000000E1D70E8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::clone(
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this)
{
  ConfigGCGConditionCheckCurCardHasCardIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardHasCardIDImpl,ConfigGCGConditionCheckCurCardHasCardIDImpl&>(
    (ConfigGCGConditionCheckCurCardHasCardIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCardHasCardIDImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 337: range 000000000DD43ED4-000000000DD43F21
void __cdecl ConfigGCGConditionGlobalLogicNotImpl::ConfigGCGConditionGlobalLogicNotImpl(
        ConfigGCGConditionGlobalLogicNotImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalLogicNot::ConfigGCGConditionGlobalLogicNot(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalLogicNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 337: range 000000000E2C4DD4-000000000E2C4E2C
void __cdecl ConfigGCGConditionGlobalLogicNotImpl::ConfigGCGConditionGlobalLogicNotImpl(
        ConfigGCGConditionGlobalLogicNotImpl *const this,
        const ConfigGCGConditionGlobalLogicNotImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalLogicNot::ConfigGCGConditionGlobalLogicNot(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalLogicNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 337: range 000000000E2D4086-000000000E2D40B0
void __cdecl ConfigGCGConditionGlobalLogicNotImpl::~ConfigGCGConditionGlobalLogicNotImpl(
        ConfigGCGConditionGlobalLogicNotImpl *const this)
{
  ConfigGCGConditionGlobalLogicNotImpl::~ConfigGCGConditionGlobalLogicNotImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 337: range 000000000E2D4038-000000000E2D4085
void __cdecl ConfigGCGConditionGlobalLogicNotImpl::~ConfigGCGConditionGlobalLogicNotImpl(
        ConfigGCGConditionGlobalLogicNotImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalLogicNotImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalLogicNot::~ConfigGCGConditionGlobalLogicNot(this);
};

// Line 340: range 000000000E1D70EA-000000000E1D7152
std::string *__cdecl ConfigGCGConditionGlobalLogicNotImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalLogicNotImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalLogicNot", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 341: range 000000000E1D7154-000000000E1D719C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalLogicNotImpl::clone(
        ConfigGCGConditionGlobalLogicNotImpl *const this)
{
  ConfigGCGConditionGlobalLogicNotImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalLogicNotImpl,ConfigGCGConditionGlobalLogicNotImpl&>(
    (ConfigGCGConditionGlobalLogicNotImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalLogicNotImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 345: range 000000000DD4815E-000000000DD481AB
void __cdecl ConfigGCGConditionGlobalCheckParitityImpl::ConfigGCGConditionGlobalCheckParitityImpl(
        ConfigGCGConditionGlobalCheckParitityImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCheckParitity::ConfigGCGConditionGlobalCheckParitity(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckParitityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 345: range 000000000E2C50EC-000000000E2C5144
void __cdecl ConfigGCGConditionGlobalCheckParitityImpl::ConfigGCGConditionGlobalCheckParitityImpl(
        ConfigGCGConditionGlobalCheckParitityImpl *const this,
        const ConfigGCGConditionGlobalCheckParitityImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCheckParitity::ConfigGCGConditionGlobalCheckParitity(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckParitityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 345: range 000000000E2D3FBE-000000000E2D400B
void __cdecl ConfigGCGConditionGlobalCheckParitityImpl::~ConfigGCGConditionGlobalCheckParitityImpl(
        ConfigGCGConditionGlobalCheckParitityImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckParitityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCheckParitity::~ConfigGCGConditionGlobalCheckParitity(this);
};

// Line 345: range 000000000E2D400C-000000000E2D4036
void __cdecl ConfigGCGConditionGlobalCheckParitityImpl::~ConfigGCGConditionGlobalCheckParitityImpl(
        ConfigGCGConditionGlobalCheckParitityImpl *const this)
{
  ConfigGCGConditionGlobalCheckParitityImpl::~ConfigGCGConditionGlobalCheckParitityImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 348: range 000000000E1D719E-000000000E1D7206
std::string *__cdecl ConfigGCGConditionGlobalCheckParitityImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCheckParitityImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCheckParitity", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 349: range 000000000E1D7208-000000000E1D7250
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCheckParitityImpl::clone(
        ConfigGCGConditionGlobalCheckParitityImpl *const this)
{
  ConfigGCGConditionGlobalCheckParitityImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckParitityImpl,ConfigGCGConditionGlobalCheckParitityImpl&>(
    (ConfigGCGConditionGlobalCheckParitityImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCheckParitityImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 353: range 000000000E2C54D2-000000000E2C552A
void __cdecl ConfigGCGConditionGlobalAreaContainCardImpl::ConfigGCGConditionGlobalAreaContainCardImpl(
        ConfigGCGConditionGlobalAreaContainCardImpl *const this,
        const ConfigGCGConditionGlobalAreaContainCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalAreaContainCard::ConfigGCGConditionGlobalAreaContainCard(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaContainCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 353: range 000000000E2D3F92-000000000E2D3FBC
void __cdecl ConfigGCGConditionGlobalAreaContainCardImpl::~ConfigGCGConditionGlobalAreaContainCardImpl(
        ConfigGCGConditionGlobalAreaContainCardImpl *const this)
{
  ConfigGCGConditionGlobalAreaContainCardImpl::~ConfigGCGConditionGlobalAreaContainCardImpl(this);
  operator delete(this, 0x28uLL);
};

// Line 353: range 000000000E2D3F44-000000000E2D3F91
void __cdecl ConfigGCGConditionGlobalAreaContainCardImpl::~ConfigGCGConditionGlobalAreaContainCardImpl(
        ConfigGCGConditionGlobalAreaContainCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaContainCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalAreaContainCard::~ConfigGCGConditionGlobalAreaContainCard(this);
};

// Line 356: range 000000000E1D7252-000000000E1D72BA
std::string *__cdecl ConfigGCGConditionGlobalAreaContainCardImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalAreaContainCardImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalAreaContainCard", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 357: range 000000000E1D72BC-000000000E1D7304
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalAreaContainCardImpl::clone(
        ConfigGCGConditionGlobalAreaContainCardImpl *const this)
{
  ConfigGCGConditionGlobalAreaContainCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalAreaContainCardImpl,ConfigGCGConditionGlobalAreaContainCardImpl&>(
    (ConfigGCGConditionGlobalAreaContainCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalAreaContainCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 361: range 000000000E2C573A-000000000E2C5792
void __cdecl ConfigGCGConditionCurCharacterHpNumImpl::ConfigGCGConditionCurCharacterHpNumImpl(
        ConfigGCGConditionCurCharacterHpNumImpl *const this,
        const ConfigGCGConditionCurCharacterHpNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCharacterHpNum::ConfigGCGConditionCurCharacterHpNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterHpNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 361: range 000000000E2D3ECA-000000000E2D3F17
void __cdecl ConfigGCGConditionCurCharacterHpNumImpl::~ConfigGCGConditionCurCharacterHpNumImpl(
        ConfigGCGConditionCurCharacterHpNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterHpNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCharacterHpNum::~ConfigGCGConditionCurCharacterHpNum(this);
};

// Line 361: range 000000000E2D3F18-000000000E2D3F42
void __cdecl ConfigGCGConditionCurCharacterHpNumImpl::~ConfigGCGConditionCurCharacterHpNumImpl(
        ConfigGCGConditionCurCharacterHpNumImpl *const this)
{
  ConfigGCGConditionCurCharacterHpNumImpl::~ConfigGCGConditionCurCharacterHpNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 364: range 000000000E1D7306-000000000E1D736E
std::string *__cdecl ConfigGCGConditionCurCharacterHpNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCharacterHpNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCharacterHpNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 365: range 000000000E1D7370-000000000E1D73B8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCharacterHpNumImpl::clone(
        ConfigGCGConditionCurCharacterHpNumImpl *const this)
{
  ConfigGCGConditionCurCharacterHpNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterHpNumImpl,ConfigGCGConditionCurCharacterHpNumImpl&>(
    (ConfigGCGConditionCurCharacterHpNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCharacterHpNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 371: range 000000000E2C59A2-000000000E2C59FA
void __cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::ConfigGCGConditionCurCharacterEnergyNumImpl(
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this,
        const ConfigGCGConditionCurCharacterEnergyNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCharacterEnergyNum::ConfigGCGConditionCurCharacterEnergyNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterEnergyNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 371: range 000000000E2D3E9E-000000000E2D3EC8
void __cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::~ConfigGCGConditionCurCharacterEnergyNumImpl(
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this)
{
  ConfigGCGConditionCurCharacterEnergyNumImpl::~ConfigGCGConditionCurCharacterEnergyNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 371: range 000000000E2D3E50-000000000E2D3E9D
void __cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::~ConfigGCGConditionCurCharacterEnergyNumImpl(
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterEnergyNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCharacterEnergyNum::~ConfigGCGConditionCurCharacterEnergyNum(this);
};

// Line 374: range 000000000E1D73BA-000000000E1D7422
std::string *__cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCharacterEnergyNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 375: range 000000000E1D7424-000000000E1D746C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::clone(
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this)
{
  ConfigGCGConditionCurCharacterEnergyNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterEnergyNumImpl,ConfigGCGConditionCurCharacterEnergyNumImpl&>(
    (ConfigGCGConditionCurCharacterEnergyNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCharacterEnergyNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 381: range 000000000E2C5C0A-000000000E2C5C62
void __cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this,
        const ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 381: range 000000000E2D3E24-000000000E2D3E4E
void __cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 381: range 000000000E2D3DD6-000000000E2D3E23
void __cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::~ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(this);
};

// Line 384: range 000000000E1D746E-000000000E1D74D6
std::string *__cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurCampOnStageNotChargedTotalNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 385: range 000000000E1D74D8-000000000E1D7520
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::clone(
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl,ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl&>(
    (ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 390: range 000000000E2C5E72-000000000E2C5ECA
void __cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::ConfigGCGConditionGlobalCurSkillKillCharacterImpl(
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this,
        const ConfigGCGConditionGlobalCurSkillKillCharacterImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurSkillKillCharacter::ConfigGCGConditionGlobalCurSkillKillCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurSkillKillCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 390: range 000000000E2D3D5C-000000000E2D3DA9
void __cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::~ConfigGCGConditionGlobalCurSkillKillCharacterImpl(
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurSkillKillCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurSkillKillCharacter::~ConfigGCGConditionGlobalCurSkillKillCharacter(this);
};

// Line 390: range 000000000E2D3DAA-000000000E2D3DD4
void __cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::~ConfigGCGConditionGlobalCurSkillKillCharacterImpl(
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this)
{
  ConfigGCGConditionGlobalCurSkillKillCharacterImpl::~ConfigGCGConditionGlobalCurSkillKillCharacterImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 393: range 000000000E1D7522-000000000E1D758A
std::string *__cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurSkillKillCharacter", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 394: range 000000000E1D758C-000000000E1D75D4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::clone(
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this)
{
  ConfigGCGConditionGlobalCurSkillKillCharacterImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurSkillKillCharacterImpl,ConfigGCGConditionGlobalCurSkillKillCharacterImpl&>(
    (ConfigGCGConditionGlobalCurSkillKillCharacterImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurSkillKillCharacterImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 399: range 000000000E2C615E-000000000E2C61B6
void __cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl(
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this,
        const ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::ConfigGCGConditionGlobalCheckCurSkillDamageElementType(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 399: range 000000000E2D3CE2-000000000E2D3D2F
void __cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::~ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl(
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::~ConfigGCGConditionGlobalCheckCurSkillDamageElementType(this);
};

// Line 399: range 000000000E2D3D30-000000000E2D3D5A
void __cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::~ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl(
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this)
{
  ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::~ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 402: range 000000000E1D75D6-000000000E1D763E
std::string *__cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCheckCurSkillDamageElementType", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 403: range 000000000E1D7640-000000000E1D7688
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::clone(
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this)
{
  ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl,ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl&>(
    (ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 408: range 000000000E2C6414-000000000E2C646C
void __cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl(
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this,
        const ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::ConfigGCGConditionGlobalCheckCurSkillElementReactionId(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 408: range 000000000E2D3C68-000000000E2D3CB5
void __cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::~ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl(
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::~ConfigGCGConditionGlobalCheckCurSkillElementReactionId(this);
};

// Line 408: range 000000000E2D3CB6-000000000E2D3CE0
void __cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::~ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl(
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this)
{
  ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::~ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl(this);
  operator delete(this, 0x38uLL);
};

// Line 411: range 000000000E1D768A-000000000E1D76F2
std::string *__cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCheckCurSkillElementReactionId", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 412: range 000000000E1D76F4-000000000E1D773C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::clone(
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this)
{
  ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl,ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl&>(
    (ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 414: range 000000000DD31068-000000000DD310B5
void __cdecl ConfigGCGLogicConditionImpl::ConfigGCGLogicConditionImpl(ConfigGCGLogicConditionImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGLogicCondition::ConfigGCGLogicCondition(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGLogicConditionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 417: range 000000000E2C6780-000000000E2C67D8
void __cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl(
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this,
        const ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::ConfigGCGConditionGlobalCurRoundHasCharacterDie(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 417: range 000000000E2D3C3C-000000000E2D3C66
void __cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::~ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl(
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this)
{
  ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::~ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 417: range 000000000E2D3BEE-000000000E2D3C3B
void __cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::~ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl(
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::~ConfigGCGConditionGlobalCurRoundHasCharacterDie(this);
};

// Line 420: range 000000000E1D773E-000000000E1D77A6
std::string *__cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurRoundHasCharacterDie", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 421: range 000000000E1D77A8-000000000E1D77F0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::clone(
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this)
{
  ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl,ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl&>(
    (ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 426: range 000000000DD457DE-000000000DD4582B
void __cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::ConfigGCGConditionGlobalAreaTagCardNumImpl(
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalAreaTagCardNum::ConfigGCGConditionGlobalAreaTagCardNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaTagCardNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 426: range 000000000E2C6BDC-000000000E2C6C34
void __cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::ConfigGCGConditionGlobalAreaTagCardNumImpl(
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this,
        const ConfigGCGConditionGlobalAreaTagCardNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalAreaTagCardNum::ConfigGCGConditionGlobalAreaTagCardNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaTagCardNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 426: range 000000000E2D3BC2-000000000E2D3BEC
void __cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::~ConfigGCGConditionGlobalAreaTagCardNumImpl(
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this)
{
  ConfigGCGConditionGlobalAreaTagCardNumImpl::~ConfigGCGConditionGlobalAreaTagCardNumImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 426: range 000000000E2D3B74-000000000E2D3BC1
void __cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::~ConfigGCGConditionGlobalAreaTagCardNumImpl(
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaTagCardNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalAreaTagCardNum::~ConfigGCGConditionGlobalAreaTagCardNum(this);
};

// Line 429: range 000000000E1D77F2-000000000E1D785A
std::string *__cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalAreaTagCardNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 430: range 000000000E1D785C-000000000E1D78A4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalAreaTagCardNumImpl::clone(
        ConfigGCGConditionGlobalAreaTagCardNumImpl *const this)
{
  ConfigGCGConditionGlobalAreaTagCardNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalAreaTagCardNumImpl,ConfigGCGConditionGlobalAreaTagCardNumImpl&>(
    (ConfigGCGConditionGlobalAreaTagCardNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalAreaTagCardNumImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 435: range 000000000E2C6E44-000000000E2C6E9C
void __cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::ConfigGCGConditionFetchCurSkillOriginCostNumImpl(
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this,
        const ConfigGCGConditionFetchCurSkillOriginCostNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionFetchCurSkillOriginCostNum::ConfigGCGConditionFetchCurSkillOriginCostNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillOriginCostNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 435: range 000000000E2D3AFA-000000000E2D3B47
void __cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::~ConfigGCGConditionFetchCurSkillOriginCostNumImpl(
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillOriginCostNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionFetchCurSkillOriginCostNum::~ConfigGCGConditionFetchCurSkillOriginCostNum(this);
};

// Line 435: range 000000000E2D3B48-000000000E2D3B72
void __cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::~ConfigGCGConditionFetchCurSkillOriginCostNumImpl(
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this)
{
  ConfigGCGConditionFetchCurSkillOriginCostNumImpl::~ConfigGCGConditionFetchCurSkillOriginCostNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 438: range 000000000E1D78A6-000000000E1D790E
std::string *__cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "FetchCurSkillOriginCostNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 439: range 000000000E1D7910-000000000E1D7958
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::clone(
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this)
{
  ConfigGCGConditionFetchCurSkillOriginCostNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionFetchCurSkillOriginCostNumImpl,ConfigGCGConditionFetchCurSkillOriginCostNumImpl&>(
    (ConfigGCGConditionFetchCurSkillOriginCostNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionFetchCurSkillOriginCostNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 446: range 000000000E2C7130-000000000E2C7188
void __cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::ConfigGCGConditionCheckCurCardSetDamageElementImpl(
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this,
        const ConfigGCGConditionCheckCurCardSetDamageElementImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCardSetDamageElement::ConfigGCGConditionCheckCurCardSetDamageElement(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 446: range 000000000E2D3A80-000000000E2D3ACD
void __cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::~ConfigGCGConditionCheckCurCardSetDamageElementImpl(
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCardSetDamageElement::~ConfigGCGConditionCheckCurCardSetDamageElement(this);
};

// Line 446: range 000000000E2D3ACE-000000000E2D3AF8
void __cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::~ConfigGCGConditionCheckCurCardSetDamageElementImpl(
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this)
{
  ConfigGCGConditionCheckCurCardSetDamageElementImpl::~ConfigGCGConditionCheckCurCardSetDamageElementImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 449: range 000000000E1D795A-000000000E1D79C2
std::string *__cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCardSetDamageElement", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 450: range 000000000E1D79C4-000000000E1D7A0C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::clone(
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this)
{
  ConfigGCGConditionCheckCurCardSetDamageElementImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardSetDamageElementImpl,ConfigGCGConditionCheckCurCardSetDamageElementImpl&>(
    (ConfigGCGConditionCheckCurCardSetDamageElementImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCardSetDamageElementImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 457: range 000000000E2C7398-000000000E2C73F0
void __cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl(
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this,
        const ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::ConfigGCGConditionFetchCurCardAbsorbDiceNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 457: range 000000000E2D3A54-000000000E2D3A7E
void __cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::~ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl(
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this)
{
  ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::~ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 457: range 000000000E2D3A06-000000000E2D3A53
void __cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::~ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl(
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::~ConfigGCGConditionFetchCurCardAbsorbDiceNum(this);
};

// Line 460: range 000000000E1D7A0E-000000000E1D7A76
std::string *__cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "FetchCurCardAbsorbDiceNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 461: range 000000000E1D7A78-000000000E1D7AC0
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::clone(
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this)
{
  ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl,ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl&>(
    (ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 468: range 000000000E2C7600-000000000E2C7658
void __cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this,
        const ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 468: range 000000000E2D39DA-000000000E2D3A04
void __cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 468: range 000000000E2D398C-000000000E2D39D9
void __cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::~ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(this);
};

// Line 471: range 000000000E1D7AC2-000000000E1D7B2A
std::string *__cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCurCampNearBackStageChargedTotalNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 472: range 000000000E1D7B2C-000000000E1D7B74
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::clone(
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this)
{
  ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl,ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl&>(
    (ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 477: range 000000000E2C7868-000000000E2C78C0
void __cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::ConfigGCGConditionCurCharacterNotChargedNumImpl(
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this,
        const ConfigGCGConditionCurCharacterNotChargedNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCurCharacterNotChargedNum::ConfigGCGConditionCurCharacterNotChargedNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterNotChargedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 477: range 000000000E2D3912-000000000E2D395F
void __cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::~ConfigGCGConditionCurCharacterNotChargedNumImpl(
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterNotChargedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCurCharacterNotChargedNum::~ConfigGCGConditionCurCharacterNotChargedNum(this);
};

// Line 477: range 000000000E2D3960-000000000E2D398A
void __cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::~ConfigGCGConditionCurCharacterNotChargedNumImpl(
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this)
{
  ConfigGCGConditionCurCharacterNotChargedNumImpl::~ConfigGCGConditionCurCharacterNotChargedNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 480: range 000000000E1D7B76-000000000E1D7BDE
std::string *__cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CurCharacterNotChargedNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 481: range 000000000E1D7BE0-000000000E1D7C28
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::clone(
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this)
{
  ConfigGCGConditionCurCharacterNotChargedNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCurCharacterNotChargedNumImpl,ConfigGCGConditionCurCharacterNotChargedNumImpl&>(
    (ConfigGCGConditionCurCharacterNotChargedNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCurCharacterNotChargedNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 488: range 000000000DD46AA8-000000000DD46AF5
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::ConfigGCGConditionGlobalFetchCurDieCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardObject::ConfigGCGConditionGlobalFetchCurDieCardObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 488: range 000000000E2C7AFA-000000000E2C7B52
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::ConfigGCGConditionGlobalFetchCurDieCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardObject::ConfigGCGConditionGlobalFetchCurDieCardObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 488: range 000000000E2D3898-000000000E2D38E5
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurDieCardObject::~ConfigGCGConditionGlobalFetchCurDieCardObject(this);
};

// Line 488: range 000000000E2D38E6-000000000E2D3910
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 491: range 000000000E1D7C2A-000000000E1D7C92
std::string *__cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurDieCardObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 492: range 000000000E1D7C94-000000000E1D7CDC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurDieCardObjectImpl::clone(
        ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl,ConfigGCGConditionGlobalFetchCurDieCardObjectImpl&>(
    (ConfigGCGConditionGlobalFetchCurDieCardObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 497: range 000000000E2C7D62-000000000E2C7DBA
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this,
        const ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::ConfigGCGConditionGlobalFetchCurDieCardOwnerID(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 497: range 000000000E2D381E-000000000E2D386B
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::~ConfigGCGConditionGlobalFetchCurDieCardOwnerID(this);
};

// Line 497: range 000000000E2D386C-000000000E2D3896
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 500: range 000000000E1D7CDE-000000000E1D7D46
std::string *__cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurDieCardOwnerID", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 501: range 000000000E1D7D48-000000000E1D7D90
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::clone(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl,ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl&>(
    (ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 506: range 000000000DD47222-000000000DD4726F
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 506: range 000000000E2C7FF4-000000000E2C804C
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this,
        const ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 506: range 000000000E2D37F2-000000000E2D381C
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl(this);
  operator delete(this, 0x30uLL);
};

// Line 506: range 000000000E2D37A4-000000000E2D37F1
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerObject::~ConfigGCGConditionGlobalFetchCurDieCardOwnerObject(this);
};

// Line 509: range 000000000E1D7D92-000000000E1D7DFA
std::string *__cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurDieCardOwnerObject", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 510: range 000000000E1D7DFC-000000000E1D7E44
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl::clone(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl,ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl&>(
    (ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurDieCardOwnerObjectImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 515: range 000000000E2C825C-000000000E2C82B4
void __cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::ConfigGCGConditionGlobalFetchCurRoundNumImpl(
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this,
        const ConfigGCGConditionGlobalFetchCurRoundNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurRoundNum::ConfigGCGConditionGlobalFetchCurRoundNum(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurRoundNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 515: range 000000000E2D3778-000000000E2D37A2
void __cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::~ConfigGCGConditionGlobalFetchCurRoundNumImpl(
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurRoundNumImpl::~ConfigGCGConditionGlobalFetchCurRoundNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 515: range 000000000E2D372A-000000000E2D3777
void __cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::~ConfigGCGConditionGlobalFetchCurRoundNumImpl(
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurRoundNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurRoundNum::~ConfigGCGConditionGlobalFetchCurRoundNum(this);
};

// Line 518: range 000000000E1D7E46-000000000E1D7EAE
std::string *__cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurRoundNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 519: range 000000000E1D7EB0-000000000E1D7EF8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::clone(
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurRoundNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurRoundNumImpl,ConfigGCGConditionGlobalFetchCurRoundNumImpl&>(
    (ConfigGCGConditionGlobalFetchCurRoundNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurRoundNumImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 524: range 000000000E2C8548-000000000E2C85A0
void __cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl(
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this,
        const ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 524: range 000000000E2D36B0-000000000E2D36FD
void __cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl(
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(this);
};

// Line 524: range 000000000E2D36FE-000000000E2D3728
void __cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl(
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::~ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 527: range 000000000E1D7EFA-000000000E1D7F62
std::string *__cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 528: range 000000000E1D7F64-000000000E1D7FAC
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::clone(
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl,ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl&>(
    (ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 533: range 000000000E2C8834-000000000E2C888C
void __cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl(
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this,
        const ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::ConfigGCGConditionGlobalCheckIsCurRoundOnStage(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 533: range 000000000E2D3636-000000000E2D3683
void __cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::~ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl(
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::~ConfigGCGConditionGlobalCheckIsCurRoundOnStage(this);
};

// Line 533: range 000000000E2D3684-000000000E2D36AE
void __cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::~ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl(
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this)
{
  ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::~ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 536: range 000000000E1D7FAE-000000000E1D8016
std::string *__cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalCheckIsCurRoundOnStage", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 537: range 000000000E1D8018-000000000E1D8060
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::clone(
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this)
{
  ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl,ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl&>(
    (ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 542: range 000000000E2C8B20-000000000E2C8B78
void __cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl(
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this,
        const ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 542: range 000000000E2D360A-000000000E2D3634
void __cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl(
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 542: range 000000000E2D35BC-000000000E2D3609
void __cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl(
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::~ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(this);
};

// Line 545: range 000000000E1D8062-000000000E1D80CA
std::string *__cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchAliveBackStageCharacterNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 546: range 000000000E1D80CC-000000000E1D8114
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::clone(
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl,ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl&>(
    (ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 551: range 000000000E2C8E0C-000000000E2C8E64
void __cdecl ConfigGCGConditionCheckCurCardTypeImpl::ConfigGCGConditionCheckCurCardTypeImpl(
        ConfigGCGConditionCheckCurCardTypeImpl *const this,
        const ConfigGCGConditionCheckCurCardTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCardType::ConfigGCGConditionCheckCurCardType(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 551: range 000000000E2D3542-000000000E2D358F
void __cdecl ConfigGCGConditionCheckCurCardTypeImpl::~ConfigGCGConditionCheckCurCardTypeImpl(
        ConfigGCGConditionCheckCurCardTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCardType::~ConfigGCGConditionCheckCurCardType(this);
};

// Line 551: range 000000000E2D3590-000000000E2D35BA
void __cdecl ConfigGCGConditionCheckCurCardTypeImpl::~ConfigGCGConditionCheckCurCardTypeImpl(
        ConfigGCGConditionCheckCurCardTypeImpl *const this)
{
  ConfigGCGConditionCheckCurCardTypeImpl::~ConfigGCGConditionCheckCurCardTypeImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 554: range 000000000E1D8116-000000000E1D817E
std::string *__cdecl ConfigGCGConditionCheckCurCardTypeImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCardTypeImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCardType", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 555: range 000000000E1D8180-000000000E1D81C8
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCardTypeImpl::clone(
        ConfigGCGConditionCheckCurCardTypeImpl *const this)
{
  ConfigGCGConditionCheckCurCardTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCardTypeImpl,ConfigGCGConditionCheckCurCardTypeImpl&>(
    (ConfigGCGConditionCheckCurCardTypeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCardTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 562: range 000000000E2C90F8-000000000E2C9150
void __cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl(
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this,
        const ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 562: range 000000000E2D34C8-000000000E2D3515
void __cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl(
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(this);
};

// Line 562: range 000000000E2D3516-000000000E2D3540
void __cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl(
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::~ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 565: range 000000000E1D81CA-000000000E1D8232
std::string *__cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "GlobalFetchBeforeOperationCampDiceNum", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 566: range 000000000E1D8234-000000000E1D827C
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::clone(
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this)
{
  ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl,ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl&>(
    (ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 571: range 000000000E2C93E4-000000000E2C943C
void __cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl(
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this,
        const ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 571: range 000000000E2D349C-000000000E2D34C6
void __cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl(
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 571: range 000000000E2D344E-000000000E2D349B
void __cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl(
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::~ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(this);
};

// Line 574: range 000000000E1D827E-000000000E1D82E6
std::string *__cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterBeingHurtDamageElementType", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 575: range 000000000E1D82E8-000000000E1D8330
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::clone(
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl,ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl&>(
    (ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 582: range 000000000E2C96D0-000000000E2C9728
void __cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl(
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this,
        const ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(
    this,
    a2);
  v2 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v2;
};

// Line 582: range 000000000E2D3422-000000000E2D344C
void __cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl(
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl(this);
  operator delete(this, 0x20uLL);
};

// Line 582: range 000000000E2D33D4-000000000E2D3421
void __cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl(
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
  data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::~ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(this);
};

// Line 585: range 000000000E1D8332-000000000E1D839A
std::string *__cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::getShortName[abi:cxx11](
        std::string *retstr,
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, "CheckCurCharacterModifiedAssignTagCard", &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 586: range 000000000E1D839C-000000000E1D83E4
std::shared_ptr<data::ConfigGCGCondition> __cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::clone(
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this)
{
  ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *v1; // rsi
  std::shared_ptr<data::ConfigGCGCondition> result; // rax
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl,ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl&>(
    (ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigGCGCondition>::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl,void>(
    (std::shared_ptr<data::ConfigGCGCondition> *const)this,
    &__r);
  std::shared_ptr<ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigGCGCondition,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 646: range 000000000DD3EBAA-000000000DD3EBF7
void __cdecl ConfigGCGConditionConstIntegerValueImpl::ConfigGCGConditionConstIntegerValueImpl(
        ConfigGCGConditionConstIntegerValueImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionConstIntegerValue::ConfigGCGConditionConstIntegerValue(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionConstIntegerValueImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 721: range 000000000DD3BE84-000000000DD3BED1
void __cdecl ConfigGCGConditionGlobalFetchCurSkillImpl::ConfigGCGConditionGlobalFetchCurSkillImpl(
        ConfigGCGConditionGlobalFetchCurSkillImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurSkill::ConfigGCGConditionGlobalFetchCurSkill(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurSkillImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 794: range 000000000DD3C17E-000000000DD3C1CB
void __cdecl ConfigGCGConditionGlobalFetchCurCardImpl::ConfigGCGConditionGlobalFetchCurCardImpl(
        ConfigGCGConditionGlobalFetchCurCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurCard::ConfigGCGConditionGlobalFetchCurCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 867: range 000000000DD3C478-000000000DD3C4C5
void __cdecl ConfigGCGConditionGlobalFetchSourceCharacterImpl::ConfigGCGConditionGlobalFetchSourceCharacterImpl(
        ConfigGCGConditionGlobalFetchSourceCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSourceCharacter::ConfigGCGConditionGlobalFetchSourceCharacter(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSourceCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 940: range 000000000DD3C772-000000000DD3C7BF
void __cdecl ConfigGCGConditionGlobalFetchTargetCharacterImpl::ConfigGCGConditionGlobalFetchTargetCharacterImpl(
        ConfigGCGConditionGlobalFetchTargetCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchTargetCharacter::ConfigGCGConditionGlobalFetchTargetCharacter(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchTargetCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1013: range 000000000DD3EF22-000000000DD3EF6F
void __cdecl ConfigGCGConditionGlobalFetchThisCardImpl::ConfigGCGConditionGlobalFetchThisCardImpl(
        ConfigGCGConditionGlobalFetchThisCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchThisCard::ConfigGCGConditionGlobalFetchThisCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchThisCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1086: range 000000000DD3F69C-000000000DD3F6E9
void __cdecl ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl::ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl(
        ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchOnStageSummonNumber::ConfigGCGConditionGlobalFetchOnStageSummonNumber(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchOnStageSummonNumberImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1122: range 000000000DD3CAB2-000000000DD3CAFF
void __cdecl ConfigCCGConditionCardFetchVarImpl::ConfigCCGConditionCardFetchVarImpl(
        ConfigCCGConditionCardFetchVarImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigCCGConditionCardFetchVar::ConfigCCGConditionCardFetchVar(this);
  v1 = (int (**)(...))(&`vtable for'ConfigCCGConditionCardFetchVarImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1159: range 000000000DD3CE70-000000000DD3CEBD
void __cdecl ConfigGCGConditionCharacterCheckAttachCardImpl::ConfigGCGConditionCharacterCheckAttachCardImpl(
        ConfigGCGConditionCharacterCheckAttachCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCharacterCheckAttachCard::ConfigGCGConditionCharacterCheckAttachCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCharacterCheckAttachCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1196: range 000000000DD3E42E-000000000DD3E47B
void __cdecl ConfigGCGConditionCheckCurCharacterCampImpl::ConfigGCGConditionCheckCurCharacterCampImpl(
        ConfigGCGConditionCheckCurCharacterCampImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterCamp::ConfigGCGConditionCheckCurCharacterCamp(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1233: range 000000000DD3E7EC-000000000DD3E839
void __cdecl ConfigGCGConditionCheckCurCharacterPositionImpl::ConfigGCGConditionCheckCurCharacterPositionImpl(
        ConfigGCGConditionCheckCurCharacterPositionImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterPosition::ConfigGCGConditionCheckCurCharacterPosition(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterPositionImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1270: range 000000000DD3F9DC-000000000DD3FA29
void __cdecl ConfigGCGConditionCheckCurSkillHasTagImpl::ConfigGCGConditionCheckCurSkillHasTagImpl(
        ConfigGCGConditionCheckCurSkillHasTagImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillHasTag::ConfigGCGConditionCheckCurSkillHasTag(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1325: range 000000000DD3FD9A-000000000DD3FDE7
void __cdecl ConfigGCGConditionCurCardHasTagImpl::ConfigGCGConditionCurCardHasTagImpl(
        ConfigGCGConditionCurCardHasTagImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCardHasTag::ConfigGCGConditionCurCardHasTag(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardHasTagImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1362: range 000000000DD40112-000000000DD4015F
void __cdecl ConfigGCGConditionCurCardAttachToCardIDImpl::ConfigGCGConditionCurCardAttachToCardIDImpl(
        ConfigGCGConditionCurCardAttachToCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardID::ConfigGCGConditionCurCardAttachToCardID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1435: range 000000000DD4088C-000000000DD408D9
void __cdecl ConfigGCGConditionCurCardAttachToCardIsTargetImpl::ConfigGCGConditionCurCardAttachToCardIsTargetImpl(
        ConfigGCGConditionCurCardAttachToCardIsTargetImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCardAttachToCardIsTarget::ConfigGCGConditionCurCardAttachToCardIsTarget(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCardAttachToCardIsTargetImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1471: range 000000000DD40BCC-000000000DD40C19
void __cdecl ConfigGCGConditionCheckCurCardCampImpl::ConfigGCGConditionCheckCurCardCampImpl(
        ConfigGCGConditionCheckCurCardCampImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCardCamp::ConfigGCGConditionCheckCurCardCamp(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardCampImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1508: range 000000000DD4123E-000000000DD4128B
void __cdecl ConfigGCGConditionGlobalCurCampHurtTotalImpl::ConfigGCGConditionGlobalCurCampHurtTotalImpl(
        ConfigGCGConditionGlobalCurCampHurtTotalImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampHurtTotal::ConfigGCGConditionGlobalCurCampHurtTotal(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampHurtTotalImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1544: range 000000000DD41538-000000000DD41585
void __cdecl ConfigGCGConditionCheckCurCharacterHurtNumImpl::ConfigGCGConditionCheckCurCharacterHurtNumImpl(
        ConfigGCGConditionCheckCurCharacterHurtNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterHurtNum::ConfigGCGConditionCheckCurCharacterHurtNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHurtNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1580: range 000000000DD4225A-000000000DD422A7
void __cdecl ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl(
        ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID::ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchSpecifiedCampOnstageCharacterIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1655: range 000000000DD40F44-000000000DD40F91
void __cdecl ConfigGCGConditionCheckCurSkillUsedImpl::ConfigGCGConditionCheckCurSkillUsedImpl(
        ConfigGCGConditionCheckCurSkillUsedImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillUsed::ConfigGCGConditionCheckCurSkillUsed(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillUsedImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1691: range 000000000DD425D2-000000000DD4261F
void __cdecl ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl(
        ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum::ConfigGCGConditionGlobalCurCampBackStageHurtTotalNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampBackStageHurtTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1727: range 000000000DD41832-000000000DD4187F
void __cdecl ConfigGCGConditionCurCharacterHpNumImpl::ConfigGCGConditionCurCharacterHpNumImpl(
        ConfigGCGConditionCurCharacterHpNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCharacterHpNum::ConfigGCGConditionCurCharacterHpNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterHpNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1763: range 000000000DD41B2C-000000000DD41B79
void __cdecl ConfigGCGConditionCurCharacterEnergyNumImpl::ConfigGCGConditionCurCharacterEnergyNumImpl(
        ConfigGCGConditionCurCharacterEnergyNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCharacterEnergyNum::ConfigGCGConditionCurCharacterEnergyNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterEnergyNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1799: range 000000000DD4467E-000000000DD446CB
void __cdecl ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum::ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampOnStageNotChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1835: range 000000000DD4645A-000000000DD464A7
void __cdecl ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl(
        ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum::ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurCampNearBackStageChargedTotalNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1871: range 000000000DD428CC-000000000DD42919
void __cdecl ConfigGCGConditionGlobalThisSkillIDImpl::ConfigGCGConditionGlobalThisSkillIDImpl(
        ConfigGCGConditionGlobalThisSkillIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalThisSkillID::ConfigGCGConditionGlobalThisSkillID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalThisSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1944: range 000000000DD43046-000000000DD43093
void __cdecl ConfigGCGConditionFetchCurSkillRoundUsedNumImpl::ConfigGCGConditionFetchCurSkillRoundUsedNumImpl(
        ConfigGCGConditionFetchCurSkillRoundUsedNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionFetchCurSkillRoundUsedNum::ConfigGCGConditionFetchCurSkillRoundUsedNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillRoundUsedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 1980: range 000000000DD43386-000000000DD433D3
void __cdecl ConfigGCGConditionCheckCurSkillHasSkillIDImpl::ConfigGCGConditionCheckCurSkillHasSkillIDImpl(
        ConfigGCGConditionCheckCurSkillHasSkillIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurSkillHasSkillID::ConfigGCGConditionCheckCurSkillHasSkillID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurSkillHasSkillIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2017: range 000000000DD43744-000000000DD43791
void __cdecl ConfigGCGConditionCheckCurCharacterHasCardIDImpl::ConfigGCGConditionCheckCurCharacterHasCardIDImpl(
        ConfigGCGConditionCheckCurCharacterHasCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterHasCardID::ConfigGCGConditionCheckCurCharacterHasCardID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2054: range 000000000DD43B02-000000000DD43B4F
void __cdecl ConfigGCGConditionCheckCurCardHasCardIDImpl::ConfigGCGConditionCheckCurCardHasCardIDImpl(
        ConfigGCGConditionCheckCurCardHasCardIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCardHasCardID::ConfigGCGConditionCheckCurCardHasCardID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardHasCardIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2091: range 000000000DD46160-000000000DD461AD
void __cdecl ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl::ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl(
        ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionFetchCurCardAbsorbDiceNum::ConfigGCGConditionFetchCurCardAbsorbDiceNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurCardAbsorbDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2127: range 000000000DD45DE8-000000000DD45E35
void __cdecl ConfigGCGConditionCheckCurCardSetDamageElementImpl::ConfigGCGConditionCheckCurCardSetDamageElementImpl(
        ConfigGCGConditionCheckCurCardSetDamageElementImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCardSetDamageElement::ConfigGCGConditionCheckCurCardSetDamageElement(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardSetDamageElementImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2181: range 000000000DD443C4-000000000DD44411
void __cdecl ConfigGCGConditionGlobalAreaContainCardImpl::ConfigGCGConditionGlobalAreaContainCardImpl(
        ConfigGCGConditionGlobalAreaContainCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalAreaContainCard::ConfigGCGConditionGlobalAreaContainCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalAreaContainCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2257: range 000000000DD44978-000000000DD449C5
void __cdecl ConfigGCGConditionGlobalCurSkillKillCharacterImpl::ConfigGCGConditionGlobalCurSkillKillCharacterImpl(
        ConfigGCGConditionGlobalCurSkillKillCharacterImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurSkillKillCharacter::ConfigGCGConditionGlobalCurSkillKillCharacter(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurSkillKillCharacterImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2293: range 000000000DD44CB8-000000000DD44D05
void __cdecl ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl::ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl(
        ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCheckCurSkillDamageElementType::ConfigGCGConditionGlobalCheckCurSkillDamageElementType(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2330: range 000000000DD45040-000000000DD4508D
void __cdecl ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl::ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl(
        ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCheckCurSkillElementReactionId::ConfigGCGConditionGlobalCheckCurSkillElementReactionId(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckCurSkillElementReactionIdImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2367: range 000000000DD45360-000000000DD453AD
void __cdecl ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl::ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl(
        ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCurRoundHasCharacterDie::ConfigGCGConditionGlobalCurRoundHasCharacterDie(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCurRoundHasCharacterDieImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2444: range 000000000DD47648-000000000DD47695
void __cdecl ConfigGCGConditionGlobalFetchCurRoundNumImpl::ConfigGCGConditionGlobalFetchCurRoundNumImpl(
        ConfigGCGConditionGlobalFetchCurRoundNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurRoundNum::ConfigGCGConditionGlobalFetchCurRoundNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurRoundNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2480: range 000000000DD47988-000000000DD479D5
void __cdecl ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl(
        ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum::ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurOnStageCharacterAfterOnStageUseSkillNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2517: range 000000000DD47D46-000000000DD47D93
void __cdecl ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl::ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl(
        ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalCheckIsCurRoundOnStage::ConfigGCGConditionGlobalCheckIsCurRoundOnStage(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalCheckIsCurRoundOnStageImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2554: range 000000000DD45AA8-000000000DD45AF5
void __cdecl ConfigGCGConditionFetchCurSkillOriginCostNumImpl::ConfigGCGConditionFetchCurSkillOriginCostNumImpl(
        ConfigGCGConditionFetchCurSkillOriginCostNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionFetchCurSkillOriginCostNum::ConfigGCGConditionFetchCurSkillOriginCostNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionFetchCurSkillOriginCostNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2590: range 000000000DD46754-000000000DD467A1
void __cdecl ConfigGCGConditionCurCharacterNotChargedNumImpl::ConfigGCGConditionCurCharacterNotChargedNumImpl(
        ConfigGCGConditionCurCharacterNotChargedNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCurCharacterNotChargedNum::ConfigGCGConditionCurCharacterNotChargedNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCurCharacterNotChargedNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2663: range 000000000DD46ECE-000000000DD46F1B
void __cdecl ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl::ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl(
        ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchCurDieCardOwnerID::ConfigGCGConditionGlobalFetchCurDieCardOwnerID(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchCurDieCardOwnerIDImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2774: range 000000000DD484F2-000000000DD4853F
void __cdecl ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl(
        ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum::ConfigGCGConditionGlobalFetchAliveBackStageCharacterNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchAliveBackStageCharacterNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2811: range 000000000DD488B0-000000000DD488FD
void __cdecl ConfigGCGConditionCheckCurCardTypeImpl::ConfigGCGConditionCheckCurCardTypeImpl(
        ConfigGCGConditionCheckCurCardTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCardType::ConfigGCGConditionCheckCurCardType(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCardTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2848: range 000000000DD48C6E-000000000DD48CBB
void __cdecl ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl(
        ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum::ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNum(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionGlobalFetchBeforeOperationCampDiceNumImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2885: range 000000000DD493EA-000000000DD49437
void __cdecl ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl(
        ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard::ConfigGCGConditionCheckCurCharacterModifiedAssignTagCard(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterModifiedAssignTagCardImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

// Line 2922: range 000000000DD4902C-000000000DD49079
void __cdecl ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl(
        ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType::ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementType(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGConditionCheckCurCharacterBeingHurtDamageElementTypeImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGCondition = v1;
};

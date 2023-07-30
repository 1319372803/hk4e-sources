// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_modifier_impl.h

// Line 20: range 0000000013589C16-0000000013589CAE
void __cdecl ConfigAbilityModifierImpl::ConfigAbilityModifierImpl(ConfigAbilityModifierImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigAbilityModifier::ConfigAbilityModifier((data::ConfigAbilityModifier *const)this);
  v1 = (int (**)(...))(&`vtable for'ConfigAbilityModifierImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityModifier = v1;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_local_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_local_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_local_id);
  }
  this->config_local_id = -1;
};

// Line 20: range 0000000013613FDC-0000000013614029
void __cdecl ConfigAbilityModifierImpl::~ConfigAbilityModifierImpl(ConfigAbilityModifierImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigAbilityModifierImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityModifier = v1;
  data::ConfigAbilityModifier::~ConfigAbilityModifier((data::ConfigAbilityModifier *const)this);
};

// Line 20: range 000000001361402A-0000000013614054
void __cdecl ConfigAbilityModifierImpl::~ConfigAbilityModifierImpl(ConfigAbilityModifierImpl *const this)
{
  ConfigAbilityModifierImpl::~ConfigAbilityModifierImpl(this);
  operator delete(this, 0x380uLL);
};

// Line 27: range 00000000131CEDC4-00000000131CEE05
data::ConfigAbilityModifierPtr __cdecl ConfigAbilityModifierFactoryImpl::create(
        ConfigAbilityModifierFactoryImpl *const this)
{
  data::ConfigAbilityModifierPtr result; // rax
  std::shared_ptr<ConfigAbilityModifierImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigAbilityModifierImpl>();
  std::shared_ptr<data::ConfigAbilityModifier>::shared_ptr<ConfigAbilityModifierImpl,void>(
    (std::shared_ptr<data::ConfigAbilityModifier> *const)this,
    &__r);
  std::shared_ptr<ConfigAbilityModifierImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 199: range 00000000135B7162-00000000135B71AF
void __cdecl ConfigAbilityModifierFactoryImpl::ConfigAbilityModifierFactoryImpl(
        ConfigAbilityModifierFactoryImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigAbilityModifierFactory::ConfigAbilityModifierFactory(this);
  v1 = (int (**)(...))(&`vtable for'ConfigAbilityModifierFactoryImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbilityModifierFactory = v1;
};

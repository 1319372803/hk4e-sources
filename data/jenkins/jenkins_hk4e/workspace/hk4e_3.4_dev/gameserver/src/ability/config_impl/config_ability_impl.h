// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_impl.h

// Line 81: range 00000000131CCF32-00000000131CD099
void __cdecl AbilityCommonLocalID::AbilityCommonLocalID(AbilityCommonLocalID *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->type_tag = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->modifier_idx);
  }
  this->modifier_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mixin_idx);
  }
  this->mixin_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_idx);
  }
  this->config_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->action_id);
  }
  this->action_id = 0;
};

// Line 85: range 000000001359C4F8-000000001359C58D
void __cdecl ConfigAbilityImpl::ConfigAbilityImpl(ConfigAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigAbility::ConfigAbility(this);
  v1 = (int (**)(...))(&`vtable for'ConfigAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbility = v1;
  std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::unordered_map(&this->invoke_site_map);
  std::vector<std::shared_ptr<data::ConfigAbilityModifier>>::vector(&this->modifier_vec);
  std::string::basic_string(&this->override_name);
  std::vector<std::tuple<std::string,int,float>>::vector(&this->ability_special_vec);
};

// Line 85: range 0000000013589462-00000000135895A2
void __cdecl ConfigAbilityImpl::ConfigAbilityImpl(ConfigAbilityImpl *const this, const ConfigAbilityImpl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigAbility::ConfigAbility(this, a2);
  v2 = (int (**)(...))(&`vtable for'ConfigAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbility = v2;
  std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::unordered_map(
    &this->invoke_site_map,
    &a2->invoke_site_map);
  std::vector<std::shared_ptr<data::ConfigAbilityModifier>>::vector(&this->modifier_vec, &a2->modifier_vec);
  std::string::basic_string(&this->override_name, &a2->override_name);
  std::vector<std::tuple<std::string,int,float>>::vector(&this->ability_special_vec, &a2->ability_special_vec);
};

// Line 85: range 000000001361255E-00000000136125F3
void __cdecl ConfigAbilityImpl::~ConfigAbilityImpl(ConfigAbilityImpl *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ConfigAbilityImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigAbility = v1;
  std::vector<std::tuple<std::string,int,float>>::~vector(&this->ability_special_vec);
  std::string::~string(&this->override_name);
  std::vector<std::shared_ptr<data::ConfigAbilityModifier>>::~vector(&this->modifier_vec);
  std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::~unordered_map(&this->invoke_site_map);
  data::ConfigAbility::~ConfigAbility(this);
};

// Line 85: range 00000000136125F4-000000001361261E
void __cdecl ConfigAbilityImpl::~ConfigAbilityImpl(ConfigAbilityImpl *const this)
{
  ConfigAbilityImpl::~ConfigAbilityImpl(this);
  operator delete(this, 0x308uLL);
};

// Line 95: range 00000000131CD112-00000000131CD15A
data::ConfigAbilityPtr __cdecl ConfigAbilityImpl::clone(ConfigAbilityImpl *const this)
{
  ConfigAbilityImpl *v1; // rsi
  data::ConfigAbilityPtr result; // rax
  std::shared_ptr<ConfigAbilityImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ConfigAbilityImpl,ConfigAbilityImpl&>((ConfigAbilityImpl *)&__r, v1);
  std::shared_ptr<data::ConfigAbility>::shared_ptr<ConfigAbilityImpl,void>(
    (std::shared_ptr<data::ConfigAbility> *const)this,
    &__r);
  std::shared_ptr<ConfigAbilityImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

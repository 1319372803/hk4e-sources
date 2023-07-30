// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/dynamic_talent.cpp

// Line 20: range 000000001315C0E0-000000001315C14E
const data::BaseTalentConfig *__cdecl DynamicTalent::findBaseTalentConfig(const DynamicTalent *const this)
{
  if ( !(_BYTE)`guard variable for'DynamicTalent::findBaseTalentConfig(void)::EMPTY_BASE_TALENT_CONFIG
    && __cxa_guard_acquire(&`guard variable for'DynamicTalent::findBaseTalentConfig(void)::EMPTY_BASE_TALENT_CONFIG) )
  {
    data::BaseTalentConfig::BaseTalentConfig(&DynamicTalent::findBaseTalentConfig(void)const::EMPTY_BASE_TALENT_CONFIG);
    __cxa_guard_release(&`guard variable for'DynamicTalent::findBaseTalentConfig(void)::EMPTY_BASE_TALENT_CONFIG);
    __cxa_atexit(
      (void (__fastcall *)(void *))data::BaseTalentConfig::~BaseTalentConfig,
      &DynamicTalent::findBaseTalentConfig(void)const::EMPTY_BASE_TALENT_CONFIG,
      &_dso_handle);
  }
  return &DynamicTalent::findBaseTalentConfig(void)const::EMPTY_BASE_TALENT_CONFIG;
};

// Line 26: range 000000001315C150-000000001315C18F
int32_t __cdecl DynamicTalent::initMixins(DynamicTalent *const this)
{
  if ( (unsigned __int8)std::string::empty(&this->open_config_) )
    return -1;
  else
    return BaseTalent::addMixin(this, &this->open_config_);
};

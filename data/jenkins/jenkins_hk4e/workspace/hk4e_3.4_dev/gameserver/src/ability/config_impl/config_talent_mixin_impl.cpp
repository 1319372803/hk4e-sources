// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_talent_mixin_impl.cpp

// Line 19: range 0000000015598734-000000001559877C
data::ConfigTalentMixinPtr __cdecl AddAbilityImpl::clone(AddAbilityImpl *const this)
{
  AddAbilityImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<AddAbilityImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddAbilityImpl,AddAbilityImpl&>((AddAbilityImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<AddAbilityImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<AddAbilityImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 24: range 000000001559877E-00000000155987CE
BaseTalentMixinPtr __cdecl AddAbilityImpl::createTalentMixin(AddAbilityImpl *const this, TalentParam *param)
{
  AddAbilityImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentAddAbilityMixin,TalentParam &,AddAbilityImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentAddAbilityMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentAddAbilityMixin> *)&v4);
  std::shared_ptr<TalentAddAbilityMixin>::~shared_ptr((std::shared_ptr<TalentAddAbilityMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 29: range 00000000155987D0-0000000015598818
data::ConfigTalentMixinPtr __cdecl ModifyAbilityImpl::clone(ModifyAbilityImpl *const this)
{
  ModifyAbilityImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<ModifyAbilityImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifyAbilityImpl,ModifyAbilityImpl&>((ModifyAbilityImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<ModifyAbilityImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<ModifyAbilityImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 34: range 000000001559881A-000000001559886A
BaseTalentMixinPtr __cdecl ModifyAbilityImpl::createTalentMixin(ModifyAbilityImpl *const this, TalentParam *param)
{
  ModifyAbilityImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentModifyAbilityMixin,TalentParam &,ModifyAbilityImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentModifyAbilityMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentModifyAbilityMixin> *)&v4);
  std::shared_ptr<TalentModifyAbilityMixin>::~shared_ptr((std::shared_ptr<TalentModifyAbilityMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 39: range 000000001559886C-00000000155988B4
data::ConfigTalentMixinPtr __cdecl UnlockTalentParamImpl::clone(UnlockTalentParamImpl *const this)
{
  UnlockTalentParamImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<UnlockTalentParamImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<UnlockTalentParamImpl,UnlockTalentParamImpl&>((UnlockTalentParamImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<UnlockTalentParamImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<UnlockTalentParamImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 44: range 00000000155988B6-0000000015598906
BaseTalentMixinPtr __cdecl UnlockTalentParamImpl::createTalentMixin(
        UnlockTalentParamImpl *const this,
        TalentParam *param)
{
  UnlockTalentParamImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentUnlockTalentParamMixin,TalentParam &,UnlockTalentParamImpl &>(
    &v4,
    v2,
    param,
    v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentUnlockTalentParamMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentUnlockTalentParamMixin> *)&v4);
  std::shared_ptr<TalentUnlockTalentParamMixin>::~shared_ptr((std::shared_ptr<TalentUnlockTalentParamMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 49: range 0000000015598908-0000000015598950
data::ConfigTalentMixinPtr __cdecl UnlockControllerConditionsImpl::clone(UnlockControllerConditionsImpl *const this)
{
  UnlockControllerConditionsImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<UnlockControllerConditionsImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<UnlockControllerConditionsImpl,UnlockControllerConditionsImpl&>(
    (UnlockControllerConditionsImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<UnlockControllerConditionsImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<UnlockControllerConditionsImpl>::~shared_ptr(&__r);
  result._M_ptr = this;
  return result;
};

// Line 54: range 0000000015598952-00000000155989A2
BaseTalentMixinPtr __cdecl UnlockControllerConditionsImpl::createTalentMixin(
        UnlockControllerConditionsImpl *const this,
        TalentParam *param)
{
  UnlockControllerConditionsImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentUnlockControllerConditionsMixin,TalentParam &,UnlockControllerConditionsImpl &>(
    &v4,
    v2,
    param,
    v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentUnlockControllerConditionsMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentUnlockControllerConditionsMixin> *)&v4);
  std::shared_ptr<TalentUnlockControllerConditionsMixin>::~shared_ptr((std::shared_ptr<TalentUnlockControllerConditionsMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 59: range 00000000155989A4-00000000155989EC
data::ConfigTalentMixinPtr __cdecl ModifySkillCDImpl::clone(ModifySkillCDImpl *const this)
{
  ModifySkillCDImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<ModifySkillCDImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifySkillCDImpl,ModifySkillCDImpl&>((ModifySkillCDImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<ModifySkillCDImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<ModifySkillCDImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000155989EE-0000000015598A3E
BaseTalentMixinPtr __cdecl ModifySkillCDImpl::createTalentMixin(ModifySkillCDImpl *const this, TalentParam *param)
{
  ModifySkillCDImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentModifySkillCDMixin,TalentParam &,ModifySkillCDImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentModifySkillCDMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentModifySkillCDMixin> *)&v4);
  std::shared_ptr<TalentModifySkillCDMixin>::~shared_ptr((std::shared_ptr<TalentModifySkillCDMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 69: range 0000000015598A40-0000000015598A88
data::ConfigTalentMixinPtr __cdecl ModifySkillCostImpl::clone(ModifySkillCostImpl *const this)
{
  ModifySkillCostImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<ModifySkillCostImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifySkillCostImpl,ModifySkillCostImpl&>((ModifySkillCostImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<ModifySkillCostImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<ModifySkillCostImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 74: range 0000000015598A8A-0000000015598ADA
BaseTalentMixinPtr __cdecl ModifySkillCostImpl::createTalentMixin(ModifySkillCostImpl *const this, TalentParam *param)
{
  ModifySkillCostImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentModifySkillCostMixin,TalentParam &,ModifySkillCostImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentModifySkillCostMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentModifySkillCostMixin> *)&v4);
  std::shared_ptr<TalentModifySkillCostMixin>::~shared_ptr((std::shared_ptr<TalentModifySkillCostMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 79: range 0000000015598ADC-0000000015598B24
data::ConfigTalentMixinPtr __cdecl ModifySkillPointImpl::clone(ModifySkillPointImpl *const this)
{
  ModifySkillPointImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<ModifySkillPointImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<ModifySkillPointImpl,ModifySkillPointImpl&>((ModifySkillPointImpl *)&__r, v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<ModifySkillPointImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<ModifySkillPointImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 84: range 0000000015598B26-0000000015598B76
BaseTalentMixinPtr __cdecl ModifySkillPointImpl::createTalentMixin(
        ModifySkillPointImpl *const this,
        TalentParam *param)
{
  ModifySkillPointImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentModifySkillPointMixin,TalentParam &,ModifySkillPointImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentModifySkillPointMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentModifySkillPointMixin> *)&v4);
  std::shared_ptr<TalentModifySkillPointMixin>::~shared_ptr((std::shared_ptr<TalentModifySkillPointMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 89: range 0000000015598B78-0000000015598BC0
data::ConfigTalentMixinPtr __cdecl AddTalentExtraLevelImpl::clone(AddTalentExtraLevelImpl *const this)
{
  AddTalentExtraLevelImpl *v1; // rsi
  data::ConfigTalentMixinPtr result; // rax
  std::shared_ptr<AddTalentExtraLevelImpl> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<AddTalentExtraLevelImpl,AddTalentExtraLevelImpl&>(
    (AddTalentExtraLevelImpl *)&__r,
    v1);
  std::shared_ptr<data::ConfigTalentMixin>::shared_ptr<AddTalentExtraLevelImpl,void>(
    (std::shared_ptr<data::ConfigTalentMixin> *const)this,
    &__r);
  std::shared_ptr<AddTalentExtraLevelImpl>::~shared_ptr(&__r);
  result._M_ptr = (std::__shared_ptr<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 94: range 0000000015598BC2-0000000015598C12
BaseTalentMixinPtr __cdecl AddTalentExtraLevelImpl::createTalentMixin(
        AddTalentExtraLevelImpl *const this,
        TalentParam *param)
{
  AddTalentExtraLevelImpl *v2; // rdx
  BaseTalentMixinPtr result; // rax
  TalentParam v4; // [rsp+20h] [rbp-10h] BYREF

  common::tools::perf::make_shared<TalentAddExtraLevelMixin,TalentParam &,AddTalentExtraLevelImpl &>(&v4, v2, param, v2);
  std::shared_ptr<BaseTalentMixin>::shared_ptr<TalentAddExtraLevelMixin,void>(
    (std::shared_ptr<BaseTalentMixin> *const)this,
    (std::shared_ptr<TalentAddExtraLevelMixin> *)&v4);
  std::shared_ptr<TalentAddExtraLevelMixin>::~shared_ptr((std::shared_ptr<TalentAddExtraLevelMixin> *const)&v4);
  result._M_ptr = (std::__shared_ptr<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 96: range 000000001559B69C-000000001559B6B0
void __cdecl GLOBAL__sub_I_merge_merge_buff_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 96: range 000000001559A694-000000001559B69B
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  const boost::system::error_category *ssl_category; // rax
  const boost::system::error_category *stream_category; // rax
  std::pair<unsigned int const,std::string > *i; // rbx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  const char *v28; // rcx
  _BYTE *v29; // rcx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  _BYTE *v32; // rcx
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  const char *v35; // rcx
  _BYTE *v36; // rcx
  _BYTE *v37; // rcx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  std::unordered_map<unsigned int,std::string>::hasher __hf; // [rsp+11h] [rbp-2BFh] BYREF
  std::unordered_map<unsigned int,std::string>::key_equal __eql; // [rsp+12h] [rbp-2BEh] BYREF
  std::allocator<std::pair<unsigned int const,std::string > > __a; // [rsp+13h] [rbp-2BDh] BYREF
  proto::LanguageType __x; // [rsp+14h] [rbp-2BCh] BYREF
  proto::LanguageType v48; // [rsp+18h] [rbp-2B8h] BYREF
  proto::LanguageType v49; // [rsp+1Ch] [rbp-2B4h] BYREF
  proto::LanguageType v50; // [rsp+20h] [rbp-2B0h] BYREF
  proto::LanguageType v51; // [rsp+24h] [rbp-2ACh] BYREF
  proto::LanguageType v52; // [rsp+28h] [rbp-2A8h] BYREF
  proto::LanguageType v53; // [rsp+2Ch] [rbp-2A4h] BYREF
  proto::LanguageType v54; // [rsp+30h] [rbp-2A0h] BYREF
  proto::LanguageType v55; // [rsp+34h] [rbp-29Ch] BYREF
  proto::LanguageType v56; // [rsp+38h] [rbp-298h] BYREF
  proto::LanguageType v57; // [rsp+3Ch] [rbp-294h] BYREF
  proto::LanguageType v58; // [rsp+40h] [rbp-290h] BYREF
  proto::LanguageType v59; // [rsp+44h] [rbp-28Ch] BYREF
  proto::LanguageType v60; // [rsp+48h] [rbp-288h] BYREF
  proto::LanguageType v61; // [rsp+4Ch] [rbp-284h] BYREF
  std::pair<unsigned int const,std::string > v62; // [rsp+50h] [rbp-280h] BYREF
  std::pair<unsigned int const,std::string > v63; // [rsp+78h] [rbp-258h] BYREF
  std::pair<unsigned int const,std::string > v64; // [rsp+A0h] [rbp-230h] BYREF
  std::pair<unsigned int const,std::string > v65; // [rsp+C8h] [rbp-208h] BYREF
  std::pair<unsigned int const,std::string > v66; // [rsp+F0h] [rbp-1E0h] BYREF
  std::pair<unsigned int const,std::string > v67; // [rsp+118h] [rbp-1B8h] BYREF
  std::pair<unsigned int const,std::string > v68; // [rsp+140h] [rbp-190h] BYREF
  std::pair<unsigned int const,std::string > v69; // [rsp+168h] [rbp-168h] BYREF
  std::pair<unsigned int const,std::string > v70; // [rsp+190h] [rbp-140h] BYREF
  std::pair<unsigned int const,std::string > v71; // [rsp+1B8h] [rbp-118h] BYREF
  std::pair<unsigned int const,std::string > v72; // [rsp+1E0h] [rbp-F0h] BYREF
  std::pair<unsigned int const,std::string > v73; // [rsp+208h] [rbp-C8h] BYREF
  std::pair<unsigned int const,std::string > v74; // [rsp+230h] [rbp-A0h] BYREF
  std::pair<unsigned int const,std::string > v75; // [rsp+258h] [rbp-78h] BYREF
  std::pair<unsigned int const,std::string > v76; // [rsp+280h] [rbp-50h] BYREF
  __int64 v77; // [rsp+2A8h] [rbp-28h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_buff.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      ssl_category = boost::asio::error::get_ssl_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::ssl_category >> 3) + 0x7FFF8000) )
        ssl_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::ssl_category);
      boost::asio::error::ssl_category = ssl_category;
      stream_category = boost::asio::ssl::error::get_stream_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::stream_category >> 3) + 0x7FFF8000) )
        stream_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::ssl::error::stream_category);
      boost::asio::ssl::error::stream_category = stream_category;
      __x = LANGUAGE_EN;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v62,
        &__x,
        (const char (*)[3])"EN");
      v48 = LANGUAGE_SC;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[4],true>(
        &v63,
        &v48,
        (const char (*)[4])off_258157E0);
      v49 = LANGUAGE_TC;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[4],true>(
        &v64,
        &v49,
        (const char (*)[4])off_25815820);
      v50 = LANGUAGE_FR;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v65,
        &v50,
        (const char (*)[3])"FR");
      v51 = LANGUAGE_DE;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v66,
        &v51,
        (const char (*)[3])"DE");
      v52 = LANGUAGE_ES;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v67,
        &v52,
        (const char (*)[3])"ES");
      v53 = LANGUAGE_PT;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v68,
        &v53,
        (const char (*)[3])"PT");
      v54 = LANGUAGE_RU;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v69,
        &v54,
        (const char (*)[3])"RU");
      v55 = LANGUAGE_JP;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v70,
        &v55,
        (const char (*)[3])"JP");
      v56 = LANGUAGE_KR;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v71,
        &v56,
        (const char (*)[3])"KR");
      v57 = LANGUAGE_TH;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v72,
        &v57,
        (const char (*)[3])"TH");
      v58 = LANGUAGE_VN;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v73,
        &v58,
        (const char (*)[3])"VN");
      v59 = LANGUAGE_ID;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v74,
        &v59,
        (const char (*)[3])"ID");
      v60 = LANGUAGE_TR;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v75,
        &v60,
        (const char (*)[3])"TR");
      v61 = LANGUAGE_IT;
      std::pair<unsigned int const,std::string>::pair<proto::LanguageType,char const(&)[3],true>(
        &v76,
        &v61,
        (const char (*)[3])"IT");
      std::allocator<std::pair<unsigned int const,std::string>>::allocator(&__a);
      std::unordered_map<unsigned int,std::string>::unordered_map(
        &language_desc_map,
        (std::initializer_list<std::pair<unsigned int const,std::string > >)__PAIR128__(15LL, &v62),
        0LL,
        &__hf,
        &__eql,
        &__a);
      std::allocator<std::pair<unsigned int const,std::string>>::~allocator(&__a);
      for ( i = (std::pair<unsigned int const,std::string > *)&v77;
            i != &v62;
            std::pair<unsigned int const,std::string>::~pair(i) )
      {
        --i;
      }
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<unsigned int,std::string>::~unordered_map,
        &language_desc_map,
        &_dso_handle);
      v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v14 )
      {
        v15 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v15 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        }
        *v17 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v18 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        }
        *v21 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v22 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
        }
        *v23 = 1;
        boost::asio::ssl::detail::openssl_init<true>::openssl_init(&boost::asio::ssl::detail::openssl_init<true>::instance_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
          &boost::asio::ssl::detail::openssl_init<true>::instance_,
          &_dso_handle);
      }
      v24 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v24 )
      {
        v25 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v25 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v26 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v27 = 1;
        v28 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v28;
      }
      v29 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v29 )
      {
        v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v30 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v31 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v31 )
      {
        v32 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v32 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v33 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v33 )
      {
        v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v34 = 1;
        v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v35;
      }
      v36 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v36 )
      {
        v37 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        }
        *v37 = 1;
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v38 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v38 )
      {
        v39 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        }
        *v39 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v40 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
      }
      if ( !*v40 )
      {
        v41 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        }
        *v41 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
          &_dso_handle);
      }
      v42 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v42 )
      {
        v43 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        }
        *v43 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
    }
    __asan_after_dynamic_init();
  }
};

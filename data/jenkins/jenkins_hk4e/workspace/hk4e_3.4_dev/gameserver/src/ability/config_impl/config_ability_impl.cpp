// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/config_impl/config_ability_impl.cpp

// Line 20: range 00000000130DA2A4-00000000130DA4F9
void __cdecl ConfigAbilityImpl::onLoaded(ConfigAbilityImpl *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<std::string,data::DynamicArgument>::size_type v5; // rax
  const std::string *v6; // r8
  int *v7; // r9
  float *v8; // [rsp+0h] [rbp-D0h]
  std::unordered_map<std::string,data::DynamicArgument>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<std::string,data::DynamicArgument>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<std::string,data::DynamicArgument> *__for_range; // [rsp+20h] [rbp-B0h]
  std::pair<const std::string,data::DynamicArgument> *__in; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,std::pair<const std::string,data::DynamicArgument> >::type *ability_special_name; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,std::pair<const std::string,data::DynamicArgument> >::type *ability_special_value; // [rsp+38h] [rbp-98h]
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 value:30 64 4 28 ability_special_name_hash:31";
  *(_QWORD *)(v2 + 16) = ConfigAbilityImpl::onLoaded;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  ConfigAbilityImpl::iterateAbilitySubActions(this);
  ConfigAbilityImpl::iterateAbilitySubMixins(this);
  ConfigAbilityImpl::iterateAbilitySubModifiers(this);
  v5 = std::unordered_map<std::string,data::DynamicArgument>::size(&this->ability_specials);
  std::vector<std::tuple<std::string,int,float>>::reserve(&this->ability_special_vec, v5);
  __for_range = &this->ability_specials;
  __for_begin._M_cur = std::unordered_map<std::string,data::DynamicArgument>::begin(&this->ability_specials)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,data::DynamicArgument>::end(&this->ability_specials)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,data::DynamicArgument>,true>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator*(&__for_begin);
    ability_special_name = std::get<0ul,std::string const,data::DynamicArgument>(__in);
    ability_special_value = std::get<1ul,std::string const,data::DynamicArgument>(__in);
    *(float *)v1.m128i_i32 = safeAnyCast<float>(&ability_special_value->value);
    *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
    *(_DWORD *)(v2 + 64) = getStringHash(ability_special_name);
    std::vector<std::tuple<std::string,int,float>>::emplace_back<std::string const&,int &,float &>(
      &this->ability_special_vec,
      ability_special_name,
      (int *)(v2 + 64),
      (float *)(v2 + 48),
      v6,
      v7,
      v8);
    std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 37: range 00000000130DA4FA-00000000130DA73A
const ConfigAbilityImpl *__fastcall ConfigAbilityImpl::getInvokeSite(
        const ConfigAbilityImpl *const this,
        __int64 local_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false,false>::pointer v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 local_id:36 64 8 7 iter:38";
  *(_QWORD *)(v3 + 16) = ConfigAbilityImpl::getInvokeSite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::find((const std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>> *const)(local_id + 640), (const std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::end((const std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>> *const)(local_id + 640))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      0x13u,
      "./src/ability/config_impl/config_ability_impl.cpp",
      "getInvokeSite",
      41);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v13, (const char (*)[18])"invalid local_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])", ability:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(local_id + 24));
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<data::BaseActionContainer>::shared_ptr((std::shared_ptr<data::BaseActionContainer> *const)this, 0LL);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false,false> *const)(v3 + 64));
    std::shared_ptr<data::BaseActionContainer>::shared_ptr(
      (std::shared_ptr<data::BaseActionContainer> *const)this,
      &v9->second);
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 48: range 00000000130DA73C-00000000130DA895
std::vector<std::shared_ptr<data::BaseActionContainer>> *__cdecl ConfigAbilityImpl::getInvokeSites(
        std::vector<std::shared_ptr<data::BaseActionContainer>> *retstr,
        ConfigAbilityImpl *const this)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false,false> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::BaseActionContainer> *p_second; // rdx
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false,false> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false>::__node_type *)"1 32 8 7 iter:50";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false>::__node_type *)ConfigAbilityImpl::getInvokeSites;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::vector<std::shared_ptr<data::BaseActionContainer>>::vector(retstr);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::begin(&this->invoke_site_map)._M_cur;
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::end(&this->invoke_site_map)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer>>,false>(
            v2 + 4,
            &__y) )
      break;
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer>>,false,false>::operator->(v2 + 4)->second;
    std::vector<std::shared_ptr<data::BaseActionContainer>>::push_back(retstr, p_second);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer>>,false,false>::operator++(
      v2 + 4,
      0);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<data::BaseActionContainer> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 58: range 00000000130DA896-00000000130DA8A4
void __cdecl ConfigAbilityImpl::resolveModifierMpBehavior(
        ConfigAbilityImpl *const this,
        data::ConfigAbilityModifier *config_modifier)
{
  ;
};

// Line 63: range 00000000130DA8A6-00000000130DAD45
int32_t __cdecl ConfigAbilityImpl::iterateAbilitySubActions(ConfigAbilityImpl *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  bool fail; // [rsp+1Fh] [rbp-81h]
  bool faila; // [rsp+1Fh] [rbp-81h]
  bool failb; // [rsp+1Fh] [rbp-81h]
  bool failc; // [rsp+1Fh] [rbp-81h]
  bool faild; // [rsp+1Fh] [rbp-81h]
  bool faile; // [rsp+1Fh] [rbp-81h]
  bool failf; // [rsp+1Fh] [rbp-81h]
  bool failg; // [rsp+1Fh] [rbp-81h]
  bool failh; // [rsp+1Fh] [rbp-81h]
  bool faili; // [rsp+1Fh] [rbp-81h]
  bool failj; // [rsp+1Fh] [rbp-81h]
  bool failk; // [rsp+1Fh] [rbp-81h]
  char v17[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 18 common_local_id:65";
  *(_QWORD *)(v1 + 16) = ConfigAbilityImpl::iterateAbilitySubActions;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -217841664;
  v3[536862722] = -202116109;
  AbilityCommonLocalID::AbilityCommonLocalID((AbilityCommonLocalID *const)(v1 + 32));
  *(_DWORD *)(v1 + 32) = 1;
  fail = ConfigAbilityImpl::iterateSubActions(this, &this->on_added, (AbilityCommonLocalID *)(v1 + 32)) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  faila = (fail | ConfigAbilityImpl::iterateSubActions(this, &this->on_removed, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failb = (faila | ConfigAbilityImpl::iterateSubActions(
                     this,
                     &this->on_ability_start,
                     (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failc = (failb | ConfigAbilityImpl::iterateSubActions(this, &this->on_kill, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  faild = (failc | ConfigAbilityImpl::iterateSubActions(this, &this->on_field_enter, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  faile = (faild | ConfigAbilityImpl::iterateSubActions(this, &this->on_field_exit, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failf = (faile | ConfigAbilityImpl::iterateSubActions(this, &this->on_attach, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failg = (failf | ConfigAbilityImpl::iterateSubActions(this, &this->on_detach, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failh = (failg | ConfigAbilityImpl::iterateSubActions(this, &this->on_avatar_in, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  faili = (failh | ConfigAbilityImpl::iterateSubActions(this, &this->on_avatar_out, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failj = (faili | ConfigAbilityImpl::iterateSubActions(
                     this,
                     &this->on_trigger_avatar_ray,
                     (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  failk = (failj | ConfigAbilityImpl::iterateSubActions(this, &this->on_vehicle_in, (AbilityCommonLocalID *)(v1 + 32))) != 0;
  *(_DWORD *)(v1 + 48) = 0;
  ++*(_DWORD *)(v1 + 44);
  if ( failk | ConfigAbilityImpl::iterateSubActions(this, &this->on_vehicle_out, (AbilityCommonLocalID *)(v1 + 32)) )
    result = -1;
  else
    result = 0;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 109: range 00000000130DAD46-00000000130DB60D
int32_t __cdecl ConfigAbilityImpl::iterateSubActions(
        ConfigAbilityImpl *const this,
        data::ConfigAbilityActionArray *config_action_vec,
        AbilityCommonLocalID *common_local_id)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::shared_ptr<data::ConfigAbilityAction> *v7; // rax
  _BOOL4 v8; // r15d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t v16; // r15d
  std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__enable_if_t_2 v18; // rax
  bool v19; // r15
  common::milog::MiLogStream *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  const std::vector<std::shared_ptr<data::ConfigAbilityAction>> *v27; // rax
  common::milog::MiLogStream *v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  common::milog::MiLogStream *v31; // rax
  int v32; // r15d
  int v33; // r15d
  int32_t result; // eax
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityAction>>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  char *val; // [rsp+48h] [rbp-148h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityAction>> *__for_range; // [rsp+50h] [rbp-140h]
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *__for_range_0; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v43; // [rsp+60h] [rbp-130h] BYREF
  char v44[272]; // [rsp+80h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 12 local_id:118 64 16 21 config_action_ptr:110 96 24 18 config_actions:128 160 24 14 config_vec:129";
  *(_QWORD *)(v4 + 16) = ConfigAbilityImpl::iterateSubActions;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  __for_range = config_action_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityAction>>::begin(config_action_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityAction>>::end(config_action_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityAction> *,std::vector<std::shared_ptr<data::ConfigAbilityAction>>>(
            &__for_begin,
            &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityAction> *,std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::operator*(&__for_begin);
    std::shared_ptr<data::ConfigAbilityAction>::shared_ptr(
      (std::shared_ptr<data::ConfigAbilityAction> *const)(v4 + 64),
      v7);
    if ( std::operator==<data::ConfigAbilityAction>(0LL, (const std::shared_ptr<data::ConfigAbilityAction> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/ability/config_impl/config_ability_impl.cpp",
        "iterateSubActions",
        114);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v43,
        (const char (*)[25])"config action is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v43);
      v3 = -1;
      v8 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&common_local_id->action_id);
      }
      ++common_local_id->action_id;
      *(_DWORD *)(v4 + 48) = AbilityCommonLocalID::getLocalID(common_local_id);
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/ability/config_impl/config_ability_impl.cpp",
        "iterateSubActions",
        120);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v43, (const char (*)[12])"[LOCAL_ID]|");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &this->ability_name);
      v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])"|");
      v12 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 40LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 40LL);
      val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v13)(v12);
      v14 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])"|");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v43);
      v16 = *(_DWORD *)(v4 + 48);
      v17 = std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v17->local_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->local_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v17 = (std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->local_id);
      }
      v17->local_id = v16;
      std::make_pair<unsigned int &,std::shared_ptr<data::ConfigAbilityAction> &>(
        (std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityAction> > *)(v4 + 160),
        (unsigned int *)(v4 + 48),
        (std::shared_ptr<data::ConfigAbilityAction> *)(v4 + 64));
      v18 = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::insert<std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityAction>>>(
              &this->invoke_site_map,
              (std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityAction> > *)(v4 + 160));
      v19 = !v18.second;
      std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityAction>>::~pair((std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityAction> > *const)(v4 + 160));
      if ( v19 )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/ability/config_impl/config_ability_impl.cpp",
          "iterateSubActions",
          125);
        v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v43, (const char (*)[8])"action:");
        v21 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(v21);
        v22 = *(_QWORD *)v21 + 40LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8(*(_QWORD *)v21 + 40LL);
        val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v22)(v21);
        v23 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&val);
        v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v23,
                (const char (*)[30])" local id failed repeated id=");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v43);
        v3 = -1;
        v8 = 0;
      }
      else
      {
        v25 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8(v25);
        v26 = *(_QWORD *)v25 + 72LL;
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8(*(_QWORD *)v25 + 72LL);
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v26)(v4 + 96, v25);
        __for_range_0 = (std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *)(v4 + 96);
        __for_begin_0._M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::begin((std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *const)(v4 + 96))._M_current;
        __for_end_0._M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(__for_range_0)._M_current;
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>(
                  &__for_begin_0,
                  &__for_end_0) )
          {
            v33 = 1;
            goto LABEL_39;
          }
          v27 = __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::operator*(&__for_begin_0);
          std::vector<std::shared_ptr<data::ConfigAbilityAction>>::vector(
            (std::vector<std::shared_ptr<data::ConfigAbilityAction>> *const)(v4 + 160),
            v27);
          if ( ConfigAbilityImpl::iterateSubActions(this, (data::ConfigAbilityActionArray *)(v4 + 160), common_local_id) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/ability/config_impl/config_ability_impl.cpp",
              "iterateSubActions",
              133);
            v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v43, (const char (*)[8])"action:");
            v29 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
              v29 = __asan_report_load8(v29);
            v30 = *(_QWORD *)v29 + 40LL;
            if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
              v29 = __asan_report_load8(*(_QWORD *)v29 + 40LL);
            val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v30)(v29);
            v31 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v28, (const char *const *)&val);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v31,
              (const char (*)[20])" sub actions failed");
            common::milog::MiLogStream::~MiLogStream(&v43);
            v3 = -1;
            v32 = 0;
          }
          else
          {
            v32 = 1;
          }
          std::vector<std::shared_ptr<data::ConfigAbilityAction>>::~vector((std::vector<std::shared_ptr<data::ConfigAbilityAction>> *const)(v4 + 160));
          if ( v32 != 1 )
            break;
          __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::operator++(&__for_begin_0);
        }
        v33 = 0;
LABEL_39:
        std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::~vector((std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *const)(v4 + 96));
        v8 = v33 == 1;
      }
    }
    std::shared_ptr<data::ConfigAbilityAction>::~shared_ptr((std::shared_ptr<data::ConfigAbilityAction> *const)(v4 + 64));
    if ( !v8 )
      goto LABEL_43;
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityAction> *,std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::operator++(&__for_begin);
  }
  v3 = 0;
LABEL_43:
  result = v3;
  if ( v44 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 142: range 00000000130DB60E-00000000130DB71D
int32_t __cdecl ConfigAbilityImpl::iterateAbilitySubMixins(ConfigAbilityImpl *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 20 19 common_local_id:143";
  *(_QWORD *)(v1 + 16) = ConfigAbilityImpl::iterateAbilitySubMixins;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -217841664;
  v3[536862722] = -202116109;
  AbilityCommonLocalID::AbilityCommonLocalID((AbilityCommonLocalID *const)(v1 + 32));
  *(_DWORD *)(v1 + 32) = 2;
  result = ConfigAbilityImpl::iterateSubMixins(this, &this->ability_mixins, (AbilityCommonLocalID *)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 149: range 00000000130DB71E-00000000130DBC86
int32_t __cdecl ConfigAbilityImpl::iterateAbilitySubModifiers(ConfigAbilityImpl *const this)
{
  int32_t v1; // r15d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::string *M_current; // r14
  std::vector<std::string>::iterator v6; // rax
  std::vector<std::string>::size_type v7; // rax
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::mapped_type *v8; // rax
  std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  int32_t *p_config_local_id; // rax
  std::shared_ptr<data::ConfigAbilityModifier> *v11; // rax
  data::ConfigAbilityModifier *v12; // rcx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int v15; // r14d
  data::ConfigAbilityModifier *v16; // rdx
  int32_t result; // eax
  uint32_t i; // [rsp+14h] [rbp-16Ch]
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>> *__for_range; // [rsp+28h] [rbp-158h]
  std::string *modifier_name_0; // [rsp+30h] [rbp-150h]
  std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > *__in; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > >::type *modifier_name; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<data::ConfigAbilityModifier> > >::type *config_modifier_ptr; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-130h] BYREF
  char v27[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 23 config_modifier_ptr:162 64 16 28 config_modifier_impl_ptr:163 96 20 19 common_local_i"
                        "d:158 160 24 21 modifier_name_vec:151";
  *(_QWORD *)(v2 + 16) = ConfigAbilityImpl::iterateAbilitySubModifiers;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234618880;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 160));
  __for_range = &this->modifiers;
  __for_begin._M_cur = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::begin(&this->modifiers)._M_cur;
  __for_end._M_cur = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::end(&this->modifiers)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,true>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,false,true>::operator*(&__for_begin);
    modifier_name = std::get<0ul,std::string const,std::shared_ptr<data::ConfigAbilityModifier>>(__in);
    config_modifier_ptr = std::get<1ul,std::string const,std::shared_ptr<data::ConfigAbilityModifier>>(__in);
    std::vector<std::string>::push_back((std::vector<std::string> *const)(v2 + 160), modifier_name);
    std::__detail::_Node_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbilityModifier>>,false,true>::operator++(&__for_begin);
  }
  M_current = std::vector<std::string>::end((std::vector<std::string> *const)(v2 + 160))._M_current;
  v6._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v2 + 160))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>(
    v6,
    (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
  v7 = std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 160));
  std::vector<std::shared_ptr<data::ConfigAbilityModifier>>::resize(&this->modifier_vec, v7);
  AbilityCommonLocalID::AbilityCommonLocalID((AbilityCommonLocalID *const)(v2 + 96));
  for ( i = 0; i < std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 160)); ++i )
  {
    modifier_name_0 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v2 + 160), i);
    v8 = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>::operator[](
           &this->modifiers,
           modifier_name_0);
    std::shared_ptr<data::ConfigAbilityModifier>::shared_ptr(
      (std::shared_ptr<data::ConfigAbilityModifier> *const)(v2 + 32),
      v8);
    std::dynamic_pointer_cast<ConfigAbilityModifierImpl,data::ConfigAbilityModifier>((const std::shared_ptr<data::ConfigAbilityModifier> *)(v2 + 64));
    if ( std::operator!=<ConfigAbilityModifierImpl>((const std::shared_ptr<ConfigAbilityModifierImpl> *)(v2 + 64), 0LL) )
    {
      v9 = std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityModifierImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_config_local_id = &v9->config_local_id;
      if ( *(_BYTE *)(((unsigned __int64)p_config_local_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_config_local_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_local_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(p_config_local_id);
      }
      v9->config_local_id = i;
    }
    v11 = std::vector<std::shared_ptr<data::ConfigAbilityModifier>>::operator[](&this->modifier_vec, i);
    std::shared_ptr<data::ConfigAbilityModifier>::operator=(
      v11,
      (const std::shared_ptr<data::ConfigAbilityModifier> *)(v2 + 32));
    v12 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( ConfigAbilityImpl::iterateAbilityModifier(this, v12, (AbilityCommonLocalID *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/ability/config_impl/config_ability_impl.cpp",
        "iterateAbilitySubModifiers",
        174);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v26,
              (const char (*)[18])"iterate modifier:");
      v14 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &v14->modifier_name);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v1 = -1;
      v15 = 0;
    }
    else
    {
      v16 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      ConfigAbilityImpl::resolveModifierMpBehavior(this, v16);
      ++*(_DWORD *)(v2 + 100);
      v15 = 1;
    }
    std::shared_ptr<ConfigAbilityModifierImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityModifierImpl> *const)(v2 + 64));
    std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)(v2 + 32));
    if ( v15 != 1 )
      goto LABEL_19;
  }
  v1 = 0;
LABEL_19:
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
  result = v1;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 187: range 00000000130DBC88-00000000130DBE9C
int32_t __cdecl ConfigAbilityImpl::iterateAbilityModifier(
        ConfigAbilityImpl *const this,
        data::ConfigAbilityModifier *config_modifier,
        AbilityCommonLocalID *common_local_id)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)common_local_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)common_local_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)common_local_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(common_local_id);
  }
  common_local_id->type_tag = 3;
  if ( ConfigAbilityImpl::iterateModifierSubActions(this, config_modifier, common_local_id) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/ability/config_impl/config_ability_impl.cpp",
      "iterateAbilityModifier",
      191);
    v3 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v9, (const char (*)[10])"modifier:");
    v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &config_modifier->modifier_name);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v4, (const char (*)[20])" sub actions failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)common_local_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)common_local_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)common_local_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_store4(common_local_id);
    }
    common_local_id->type_tag = 4;
    if ( ConfigAbilityImpl::iterateSubMixins(this, &config_modifier->modifier_mixins, common_local_id) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/ability/config_impl/config_ability_impl.cpp",
        "iterateAbilityModifier",
        197);
      v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v9, (const char (*)[10])"modifier:");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &config_modifier->modifier_name);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" sub mixins failed");
      common::milog::MiLogStream::~MiLogStream(&v9);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 204: range 00000000130DBE9E-00000000130DCC1F
int32_t __cdecl ConfigAbilityImpl::iterateModifierSubActions(
        ConfigAbilityImpl *const this,
        data::ConfigAbilityModifier *config_modifier,
        AbilityCommonLocalID *common_local_id)
{
  bool fail; // [rsp+2Fh] [rbp-1h]
  bool faila; // [rsp+2Fh] [rbp-1h]
  bool failb; // [rsp+2Fh] [rbp-1h]
  bool failc; // [rsp+2Fh] [rbp-1h]
  bool faild; // [rsp+2Fh] [rbp-1h]
  bool faile; // [rsp+2Fh] [rbp-1h]
  bool failf; // [rsp+2Fh] [rbp-1h]
  bool failg; // [rsp+2Fh] [rbp-1h]
  bool failh; // [rsp+2Fh] [rbp-1h]
  bool faili; // [rsp+2Fh] [rbp-1h]
  bool failj; // [rsp+2Fh] [rbp-1h]
  bool failk; // [rsp+2Fh] [rbp-1h]
  bool faill; // [rsp+2Fh] [rbp-1h]
  bool failm; // [rsp+2Fh] [rbp-1h]
  bool failn; // [rsp+2Fh] [rbp-1h]
  bool failo; // [rsp+2Fh] [rbp-1h]
  bool failp; // [rsp+2Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->config_idx);
  }
  common_local_id->config_idx = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  fail = ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_added, common_local_id) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  faila = (fail | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_removed, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failb = (faila | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_being_hit, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failc = (failb | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_attack_landed, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  faild = (failc | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_hitting_other, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  faile = (faild | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_think_interval, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failf = (faile | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_kill, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failg = (failf | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_crash, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failh = (failg | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_avatar_in, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  faili = (failh | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_avatar_out, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failj = (faili | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_reconnect, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failk = (failj | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_change_authority, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  faill = (failk | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_vehicle_in, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failm = (faill | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_vehicle_out, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failn = (failm | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_zone_enter, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failo = (failn | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_zone_exit, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  failp = (failo | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_heal, common_local_id)) != 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_store4(&common_local_id->action_id);
  }
  common_local_id->action_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&common_local_id->config_idx);
  }
  ++common_local_id->config_idx;
  if ( failp | ConfigAbilityImpl::iterateSubActions(this, &config_modifier->on_being_healed, common_local_id) )
    return -1;
  else
    return 0;
};

// Line 265: range 00000000130DCC20-00000000130DD4AA
int32_t __cdecl ConfigAbilityImpl::iterateSubMixins(
        ConfigAbilityImpl *const this,
        data::ConfigAbilityMixinArray *mixins,
        AbilityCommonLocalID *common_local_id)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::shared_ptr<data::ConfigAbilityMixin> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r15d
  std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__enable_if_t_2 v17; // rax
  bool v18; // r15
  common::milog::MiLogStream *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  _BOOL4 v24; // r15d
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  common::milog::MiLogStream *v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rax
  int v31; // r15d
  int32_t result; // eax
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator __for_begin_0; // [rsp+30h] [rbp-120h] BYREF
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::iterator __for_end_0; // [rsp+38h] [rbp-118h] BYREF
  char *val; // [rsp+40h] [rbp-110h] BYREF
  std::vector<std::shared_ptr<data::ConfigAbilityMixin>> *__for_range; // [rsp+48h] [rbp-108h]
  std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *__for_range_0; // [rsp+50h] [rbp-100h]
  data::ConfigAbilityActionArray *config_action_vec; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 local_id:270 64 16 20 config_mixin_ptr:266 96 24 17 mixin_actions:280";
  *(_QWORD *)(v4 + 16) = ConfigAbilityImpl::iterateSubMixins;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  __for_range = mixins;
  __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::begin(mixins)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<data::ConfigAbilityMixin>>::end(mixins)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator*(&__for_begin);
    std::shared_ptr<data::ConfigAbilityMixin>::shared_ptr(
      (std::shared_ptr<data::ConfigAbilityMixin> *const)(v4 + 64),
      v7);
    if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&common_local_id->config_idx);
    }
    common_local_id->config_idx = 0;
    if ( *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)common_local_id + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->action_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&common_local_id->action_id);
    }
    common_local_id->action_id = 0;
    *(_DWORD *)(v4 + 48) = AbilityCommonLocalID::getLocalID(common_local_id);
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/ability/config_impl/config_ability_impl.cpp",
      "iterateSubMixins",
      272);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v42, (const char (*)[12])"[LOCAL_ID]|");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &this->ability_name);
    v10 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])"|");
    v11 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = *(_QWORD *)v11 + 40LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)v11 + 40LL);
    val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v12)(v11);
    v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
    v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])"|");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    v15 = *(_DWORD *)(v4 + 48);
    v16 = std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v16->local_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->local_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v16 = (std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->local_id);
    }
    v16->local_id = v15;
    std::make_pair<unsigned int &,std::shared_ptr<data::ConfigAbilityMixin> &>(
      (std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityMixin> > *)(v4 + 96),
      (unsigned int *)(v4 + 48),
      (std::shared_ptr<data::ConfigAbilityMixin> *)(v4 + 64));
    v17 = std::unordered_map<unsigned int,std::shared_ptr<data::BaseActionContainer>>::insert<std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityMixin>>>(
            &this->invoke_site_map,
            (std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityMixin> > *)(v4 + 96));
    v18 = !v17.second;
    std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityMixin>>::~pair((std::pair<unsigned int,std::shared_ptr<data::ConfigAbilityMixin> > *const)(v4 + 96));
    if ( v18 )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/ability/config_impl/config_ability_impl.cpp",
        "iterateSubMixins",
        277);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v42, (const char (*)[7])"mixin:");
      v20 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8(v20);
      v21 = *(_QWORD *)v20 + 40LL;
      if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
        v20 = __asan_report_load8(*(_QWORD *)v20 + 40LL);
      val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v21)(v20);
      v22 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)&val);
      v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v22,
              (const char (*)[30])" local id failed repeated id=");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v3 = -1;
      v24 = 0;
    }
    else
    {
      v25 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(v25);
      v26 = *(_QWORD *)v25 + 72LL;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
        v25 = __asan_report_load8(*(_QWORD *)v25 + 72LL);
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v26)(v4 + 96, v25);
      __for_range_0 = (std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *)(v4 + 96);
      __for_begin_0._M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::begin((std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *const)(v4 + 96))._M_current;
      __for_end_0._M_current = std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        config_action_vec = __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::operator*(&__for_begin_0);
        if ( ConfigAbilityImpl::iterateSubActions(this, config_action_vec, common_local_id) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/ability/config_impl/config_ability_impl.cpp",
            "iterateSubMixins",
            285);
          v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v42, (const char (*)[7])"mixin:");
          v28 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            v28 = __asan_report_load8(v28);
          v29 = *(_QWORD *)v28 + 40LL;
          if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
            v28 = __asan_report_load8(*(_QWORD *)v28 + 40LL);
          val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v29)(v28);
          v30 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v27, (const char *const *)&val);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v30,
            (const char (*)[29])" sub actions local id failed");
          common::milog::MiLogStream::~MiLogStream(&v42);
          v3 = -1;
          v31 = 0;
          goto LABEL_40;
        }
        if ( *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)common_local_id + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->config_idx >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&common_local_id->config_idx);
        }
        ++common_local_id->config_idx;
        __gnu_cxx::__normal_iterator<std::vector<std::shared_ptr<data::ConfigAbilityAction>> *,std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>>::operator++(&__for_begin_0);
      }
      if ( *(_BYTE *)(((unsigned __int64)&common_local_id->mixin_idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)common_local_id + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&common_local_id->mixin_idx >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&common_local_id->mixin_idx);
      }
      ++common_local_id->mixin_idx;
      v31 = 1;
LABEL_40:
      std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>::~vector((std::vector<std::vector<std::shared_ptr<data::ConfigAbilityAction>>> *const)(v4 + 96));
      v24 = v31 == 1;
    }
    std::shared_ptr<data::ConfigAbilityMixin>::~shared_ptr((std::shared_ptr<data::ConfigAbilityMixin> *const)(v4 + 64));
    if ( !v24 )
      goto LABEL_44;
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityMixin> *,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>::operator++(&__for_begin);
  }
  v3 = 0;
LABEL_44:
  result = v3;
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 296: range 00000000130DD4AC-00000000130DDA97
uint32_t __cdecl AbilityCommonLocalID::getLocalID(AbilityCommonLocalID *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  char *v3; // rax
  unsigned __int64 v4; // rcx
  uint32_t type_tag; // edx
  uint32_t result; // eax
  char v7[80]; // [rsp+10h] [rbp-50h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 64);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 temp_local:297";
  *(_QWORD *)(v1 + 16) = AbilityCommonLocalID::getLocalID;
  v4 = v1 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(v3 - 32) = this->type_tag & 7 | *(v3 - 32) & 0xF8;
  type_tag = this->type_tag;
  if ( this->type_tag == 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->modifier_idx);
    }
    *((_WORD *)v3 - 16) = (8 * (this->modifier_idx & 0x3F)) | *((_WORD *)v3 - 16) & 0xFE07;
    if ( *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->mixin_idx);
    }
    *(v3 - 31) = (2 * (this->mixin_idx & 0x3F)) | *(v3 - 31) & 0x81;
    if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->config_idx);
    }
    *((_DWORD *)v3 - 8) = ((this->config_idx & 0x3F) << 15) | *((_DWORD *)v3 - 8) & 0xFFE07FFF;
    if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->action_id);
    }
    *((_WORD *)v3 - 15) = (32 * (this->action_id & 0x7FF)) | *((_WORD *)v3 - 15) & 0x1F;
  }
  else if ( type_tag <= 4 )
  {
    if ( type_tag == 3 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->modifier_idx);
      }
      *((_WORD *)v3 - 16) = (8 * (this->modifier_idx & 0x3F)) | *((_WORD *)v3 - 16) & 0xFE07;
      if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->config_idx);
      }
      *(v3 - 31) = (2 * (this->config_idx & 0x3F)) | *(v3 - 31) & 0x81;
      if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->action_id);
      }
      *((_DWORD *)v3 - 8) = (this->action_id << 15) | *((_DWORD *)v3 - 8) & 0x7FFF;
    }
    else if ( type_tag <= 3 )
    {
      if ( type_tag == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->config_idx);
        }
        *((_WORD *)v3 - 16) = (8 * (this->config_idx & 0x3F)) | *((_WORD *)v3 - 16) & 0xFE07;
        if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->action_id);
        }
        *((_DWORD *)v3 - 8) = (this->action_id << 9) | *((_DWORD *)v3 - 8) & 0x1FF;
      }
      else if ( type_tag == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->mixin_idx);
        }
        *((_WORD *)v3 - 16) = (8 * (this->mixin_idx & 0x3F)) | *((_WORD *)v3 - 16) & 0xFE07;
        if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->config_idx);
        }
        *(v3 - 31) = (2 * (this->config_idx & 0x3F)) | *(v3 - 31) & 0x81;
        if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->action_id);
        }
        *((_DWORD *)v3 - 8) = (this->action_id << 15) | *((_DWORD *)v3 - 8) & 0x7FFF;
      }
    }
  }
  result = *((_DWORD *)v3 - 8);
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)(v4 + 2147450880) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)(v4 + 2147450880) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 338: range 00000000130DDA98-00000000130DDFFB
void __cdecl AbilityCommonLocalID::AbilityCommonLocalID(AbilityCommonLocalID *const this, uint32_t local_id)
{
  uint32_t type_tag; // eax
  uint32_t v3; // ecx
  uint32_t v4; // ecx
  uint32_t v5; // ecx
  uint32_t v6; // ecx
  uint32_t v7; // ecx
  uint32_t v8; // ecx
  uint32_t v9; // ecx
  uint32_t v10; // ecx
  uint32_t v11; // ecx
  uint32_t v12; // ecx
  uint32_t v13; // ecx
  uint32_t v14; // ecx

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
  this->type_tag = local_id & 7;
  type_tag = this->type_tag;
  if ( this->type_tag == 4 )
  {
    v11 = (local_id >> 3) & 0x3F;
    if ( *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->modifier_idx);
    }
    this->modifier_idx = v11;
    v12 = (local_id >> 9) & 0x3F;
    if ( *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->mixin_idx);
    }
    this->mixin_idx = v12;
    v13 = (local_id >> 15) & 0x3F;
    if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->config_idx);
    }
    this->config_idx = v13;
    v14 = local_id >> 21;
    if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->action_id);
    }
    this->action_id = v14;
  }
  else if ( type_tag <= 4 )
  {
    if ( type_tag == 3 )
    {
      v8 = (local_id >> 3) & 0x3F;
      if ( *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->modifier_idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->modifier_idx);
      }
      this->modifier_idx = v8;
      v9 = (local_id >> 9) & 0x3F;
      if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->config_idx);
      }
      this->config_idx = v9;
      v10 = local_id >> 15;
      if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->action_id);
      }
      this->action_id = v10;
    }
    else if ( type_tag <= 3 )
    {
      if ( type_tag == 1 )
      {
        v3 = (local_id >> 3) & 0x3F;
        if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->config_idx);
        }
        this->config_idx = v3;
        v4 = local_id >> 9;
        if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->action_id);
        }
        this->action_id = v4;
      }
      else if ( type_tag == 2 )
      {
        v5 = (local_id >> 3) & 0x3F;
        if ( *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mixin_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->mixin_idx);
        }
        this->mixin_idx = v5;
        v6 = (local_id >> 9) & 0x3F;
        if ( *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_idx >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->config_idx);
        }
        this->config_idx = v6;
        v7 = local_id >> 15;
        if ( *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->action_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->action_id);
        }
        this->action_id = v7;
      }
    }
  }
};

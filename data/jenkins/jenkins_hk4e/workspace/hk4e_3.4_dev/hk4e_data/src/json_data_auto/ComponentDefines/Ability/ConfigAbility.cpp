// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp

// Line 20: range 0000000011FD79B1-0000000011FD7BE6
data::ConfigAbilityPtr __cdecl data::createConfigAbility(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigAbility>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigAbilityPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::_Base_ptr)"2 32 8 5 it:21 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::_Base_ptr)data::createConfigAbility;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigAbility>>::find(
                    &data::g_ConfigAbilityMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigAbility>>::end(&data::g_ConfigAbilityMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigAbility>::shared_ptr((std::shared_ptr<data::ConfigAbility> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 27: range 0000000011FD7BE8-0000000011FD861C
void __cdecl data::ConfigAbility::foreachMember(
        data::ConfigAbility *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[768]; // [rsp+10h] [rbp-300h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "22 32 16 19 ability_name_any:28 64 16 21 ability_mixins_any:30 96 16 23 ability_specials_any:3"
                          "2 128 16 16 modifiers_any:34 160 16 23 default_modifier_any:36 192 16 15 on_added_any:38 224 1"
                          "6 17 on_removed_any:40 256 16 23 on_ability_start_any:42 288 16 14 on_kill_any:44 320 16 21 on"
                          "_field_enter_any:46 352 16 20 on_field_exit_any:48 384 16 16 on_attach_any:50 416 16 16 on_det"
                          "ach_any:52 448 16 19 on_avatar_in_any:54 480 16 20 on_avatar_out_any:56 512 16 20 on_vehicle_i"
                          "n_any:58 544 16 21 on_vehicle_out_any:60 576 16 28 on_trigger_avatar_ray_any:62 608 16 20 on_z"
                          "one_enter_any:64 640 16 19 on_zone_exit_any:66 672 16 25 is_dynamic_ability_any:68 704 16 33 a"
                          "bility_defined_properties_any:70";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigAbility::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862732] = -219021312;
  v4[536862733] = -219021312;
  v4[536862734] = -219021312;
  v4[536862735] = -219021312;
  v4[536862736] = -219021312;
  v4[536862737] = -219021312;
  v4[536862738] = -219021312;
  v4[536862739] = -219021312;
  v4[536862740] = -219021312;
  v4[536862741] = -219021312;
  v4[536862742] = -202178560;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    v2 + 2,
    &this->ability_name);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityMixin>> &,std::vector<std::shared_ptr<data::ConfigAbilityMixin>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityMixin>>>,true,true>(
    v2 + 4,
    &this->ability_mixins);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<std::unordered_map<std::string,data::DynamicArgument> &,std::unordered_map<std::string,data::DynamicArgument>,std::any::_Manager_external<std::unordered_map<std::string,data::DynamicArgument>>,true,true>(
    v2 + 6,
    &this->ability_specials);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::any<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>> &,std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>,std::any::_Manager_external<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbilityModifier>>>,true,true>(
    v2 + 8,
    &this->modifiers);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 8);
  std::any::any<std::shared_ptr<data::ConfigAbilityModifier> &,std::shared_ptr<data::ConfigAbilityModifier>,std::any::_Manager_external<std::shared_ptr<data::ConfigAbilityModifier>>,true,true>(
    v2 + 10,
    &this->default_modifier);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 10);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 12,
    &this->on_added);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 12);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 14,
    &this->on_removed);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 14);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 16,
    &this->on_ability_start);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 16);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 18,
    &this->on_kill);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 18);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 20,
    &this->on_field_enter);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 20);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 22,
    &this->on_field_exit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 22);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 24,
    &this->on_attach);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 24);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 26,
    &this->on_detach);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 26);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 28,
    &this->on_avatar_in);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 28);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 30,
    &this->on_avatar_out);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 30);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 32,
    &this->on_vehicle_in);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 32);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 34,
    &this->on_vehicle_out);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 34);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 36,
    &this->on_trigger_avatar_ray);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 36);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 38,
    &this->on_zone_enter);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 38);
  std::any::any<std::vector<std::shared_ptr<data::ConfigAbilityAction>> &,std::vector<std::shared_ptr<data::ConfigAbilityAction>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigAbilityAction>>>,true,true>(
    v2 + 40,
    &this->on_zone_exit);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 40);
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 42, &this->is_dynamic_ability);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 42);
  std::any::any<std::unordered_map<std::string,data::ConfigAbilityPropertyEntry> &,std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>,std::any::_Manager_external<std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>>,true,true>(
    v2 + 44,
    &this->ability_defined_properties);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 44);
  std::any::~any(v2 + 44);
  std::any::~any(v2 + 42);
  std::any::~any(v2 + 40);
  std::any::~any(v2 + 38);
  std::any::~any(v2 + 36);
  std::any::~any(v2 + 34);
  std::any::~any(v2 + 32);
  std::any::~any(v2 + 30);
  std::any::~any(v2 + 28);
  std::any::~any(v2 + 26);
  std::any::~any(v2 + 24);
  std::any::~any(v2 + 22);
  std::any::~any(v2 + 20);
  std::any::~any(v2 + 18);
  std::any::~any(v2 + 16);
  std::any::~any(v2 + 14);
  std::any::~any(v2 + 12);
  std::any::~any(v2 + 10);
  std::any::~any(v2 + 8);
  std::any::~any(v2 + 6);
  std::any::~any(v2 + 4);
  std::any::~any(v2 + 2);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = -168430091;
  }
};

// Line 75: range 0000000011FD861E-0000000011FD8668
std::shared_ptr<data::ConfigAbility> __cdecl data::ConfigAbility::clone(data::ConfigAbility *const this)
{
  data::ConfigAbility *v1; // rsi
  std::shared_ptr<data::ConfigAbility> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAbility,data::ConfigAbility&>(
    (common::tools::perf::allocator<data::ConfigAbility,data::ConfigAbility> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 79: range 0000000011FD866A-0000000011FDC09F
bool __cdecl data::ConfigAbility::fromJson(data::ConfigAbility *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  unsigned __int64 v6; // rax
  void (__fastcall **v7)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64); // rcx
  std::shared_ptr<data::ConfigAbilityModifier> *v9; // rax
  data::ConfigAbilityModifier *v10; // rdx
  data::ConfigAbilityPropertyEntryMap *p_ability_defined_properties; // rsi
  bool v12; // bl
  bool v14; // [rsp+Fh] [rbp-DB1h]
  const Json::Value *ability_name_ptr; // [rsp+20h] [rbp-DA0h]
  const Json::Value *ability_mixins_ptr; // [rsp+28h] [rbp-D98h]
  const Json::Value *ability_specials_ptr; // [rsp+30h] [rbp-D90h]
  const Json::Value *modifiers_ptr; // [rsp+38h] [rbp-D88h]
  const Json::Value *default_modifier_ptr; // [rsp+40h] [rbp-D80h]
  const Json::Value *on_added_ptr; // [rsp+48h] [rbp-D78h]
  const Json::Value *on_removed_ptr; // [rsp+50h] [rbp-D70h]
  const Json::Value *on_ability_start_ptr; // [rsp+58h] [rbp-D68h]
  const Json::Value *on_kill_ptr; // [rsp+60h] [rbp-D60h]
  const Json::Value *on_field_enter_ptr; // [rsp+68h] [rbp-D58h]
  const Json::Value *on_field_exit_ptr; // [rsp+70h] [rbp-D50h]
  const Json::Value *on_attach_ptr; // [rsp+78h] [rbp-D48h]
  const Json::Value *on_detach_ptr; // [rsp+80h] [rbp-D40h]
  const Json::Value *on_avatar_in_ptr; // [rsp+88h] [rbp-D38h]
  const Json::Value *on_avatar_out_ptr; // [rsp+90h] [rbp-D30h]
  const Json::Value *on_vehicle_in_ptr; // [rsp+98h] [rbp-D28h]
  const Json::Value *on_vehicle_out_ptr; // [rsp+A0h] [rbp-D20h]
  const Json::Value *on_trigger_avatar_ray_ptr; // [rsp+A8h] [rbp-D18h]
  const Json::Value *on_zone_enter_ptr; // [rsp+B0h] [rbp-D10h]
  const Json::Value *on_zone_exit_ptr; // [rsp+B8h] [rbp-D08h]
  const Json::Value *is_dynamic_ability_ptr; // [rsp+C0h] [rbp-D00h]
  const Json::Value *ability_defined_properties_ptr; // [rsp+C8h] [rbp-CF8h]
  char v38[3312]; // [rsp+D0h] [rbp-CF0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3264LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "68 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 16 9 <unknown> 416 16 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <"
                        "unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <u"
                        "nknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9"
                        " <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 "
                        "32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1"
                        "856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknow"
                        "n> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <un"
                        "known> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9"
                        " <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 "
                        "32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbility::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -219021312;
  v4[536862733] = -219021312;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 448),
    "abilityName",
    (const std::allocator<char> *)(v2 + 32));
  ability_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
  std::string::~string((void *)(v2 + 448));
  *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ability_name_ptr && !fromJson<std::string>(ability_name_ptr, &this->ability_name) )
  {
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "fromJson",
      89);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 512),
      (const char (*)[33])"fromJson for: abilityName fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 576),
      "abilityMixins",
      (const std::allocator<char> *)(v2 + 48));
    ability_mixins_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
    std::string::~string((void *)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ability_mixins_ptr && !data::arrFromJson(ability_mixins_ptr, &this->ability_mixins) )
    {
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 640, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 640),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
        "fromJson",
        101);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 640),
        (const char (*)[35])"fromJson for: abilityMixins fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 704),
        "abilitySpecials",
        (const std::allocator<char> *)(v2 + 64));
      ability_specials_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
      std::string::~string((void *)(v2 + 704));
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( ability_specials_ptr && !data::mapFromJson(ability_specials_ptr, &this->ability_specials) )
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "fromJson",
          113);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 768),
          (const char (*)[37])"fromJson for: abilitySpecials fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 832),
          "modifiers",
          (const std::allocator<char> *)(v2 + 80));
        modifiers_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
        std::string::~string((void *)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( modifiers_ptr && !data::mapFromJson(modifiers_ptr, &this->modifiers) )
        {
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 896, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 896),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
            "fromJson",
            125);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 896),
            (const char (*)[31])"fromJson for: modifiers fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 960),
            "defaultModifier",
            (const std::allocator<char> *)(v2 + 96));
          default_modifier_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
          std::string::~string((void *)(v2 + 960));
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( default_modifier_ptr )
          {
            *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
            v6 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityModifierFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifierFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigAbilityModifierFactory::instance_ptr);
            if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
              v6 = __asan_report_load8(v6);
            v7 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v6;
            if ( *(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
              v6 = __asan_report_load8(*(_QWORD *)v6);
            v8 = *v7;
            if ( *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) )
              v6 = __asan_report_store16();
            v8(v2 + 416, v6);
            v9 = std::shared_ptr<data::ConfigAbilityModifier>::operator=(
                   &this->default_modifier,
                   (std::shared_ptr<data::ConfigAbilityModifier> *)(v2 + 416));
            v14 = 1;
            if ( !std::operator==<data::ConfigAbilityModifier>(v9, 0LL) )
            {
              v10 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->default_modifier);
              if ( data::ConfigAbilityModifier::fromJson(v10, default_modifier_ptr) )
                v14 = 0;
            }
            std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)(v2 + 416));
            *(_WORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -1800;
            if ( v14 )
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1024, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1024),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                "fromJson",
                139);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[37])"fromJson for: defaultModifier fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) )
              __asan_report_store16();
            common::tools::perf::make_shared<data::ConfigAbilityModifier>();
            std::shared_ptr<data::ConfigAbilityModifier>::operator=(
              &this->default_modifier,
              (std::shared_ptr<data::ConfigAbilityModifier> *)(v2 + 384));
            std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)(v2 + 384));
            *(_WORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -1800;
          }
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1088),
            "onAdded",
            (const std::allocator<char> *)(v2 + 112));
          on_added_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
          std::string::~string((void *)(v2 + 1088));
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( on_added_ptr && !data::arrFromJson(on_added_ptr, &this->on_added) )
          {
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
              "fromJson",
              150);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 1152),
              (const char (*)[29])"fromJson for: onAdded fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1216),
              "onRemoved",
              (const std::allocator<char> *)(v2 + 128));
            on_removed_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
            std::string::~string((void *)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( on_removed_ptr && !data::arrFromJson(on_removed_ptr, &this->on_removed) )
            {
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1280, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1280),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                "fromJson",
                162);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 1280),
                (const char (*)[31])"fromJson for: onRemoved fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1344),
                "onAbilityStart",
                (const std::allocator<char> *)(v2 + 144));
              on_ability_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
              std::string::~string((void *)(v2 + 1344));
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( on_ability_start_ptr && !data::arrFromJson(on_ability_start_ptr, &this->on_ability_start) )
              {
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1408, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1408),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                  "fromJson",
                  174);
                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)(v2 + 1408),
                  (const char (*)[36])"fromJson for: onAbilityStart fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1472),
                  "onKill",
                  (const std::allocator<char> *)(v2 + 160));
                on_kill_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                std::string::~string((void *)(v2 + 1472));
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( on_kill_ptr && !data::arrFromJson(on_kill_ptr, &this->on_kill) )
                {
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1536, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1536),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                    "fromJson",
                    186);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v2 + 1536),
                    (const char (*)[28])"fromJson for: onKill fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1600),
                    "onFieldEnter",
                    (const std::allocator<char> *)(v2 + 176));
                  on_field_enter_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                  std::string::~string((void *)(v2 + 1600));
                  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( on_field_enter_ptr && !data::arrFromJson(on_field_enter_ptr, &this->on_field_enter) )
                  {
                    *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1664, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1664),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                      "fromJson",
                      198);
                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      (common::milog::MiLogStream *const)(v2 + 1664),
                      (const char (*)[34])"fromJson for: onFieldEnter fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1728),
                      "onFieldExit",
                      (const std::allocator<char> *)(v2 + 192));
                    on_field_exit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                    std::string::~string((void *)(v2 + 1728));
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( on_field_exit_ptr && !data::arrFromJson(on_field_exit_ptr, &this->on_field_exit) )
                    {
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1792, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1792),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                        "fromJson",
                        210);
                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)(v2 + 1792),
                        (const char (*)[33])"fromJson for: onFieldExit fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1856),
                        "onAttach",
                        (const std::allocator<char> *)(v2 + 208));
                      on_attach_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                      std::string::~string((void *)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( on_attach_ptr && !data::arrFromJson(on_attach_ptr, &this->on_attach) )
                      {
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1920, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1920),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                          "fromJson",
                          222);
                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          (common::milog::MiLogStream *const)(v2 + 1920),
                          (const char (*)[30])"fromJson for: onAttach fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1984),
                          "onDetach",
                          (const std::allocator<char> *)(v2 + 224));
                        on_detach_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                        std::string::~string((void *)(v2 + 1984));
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( on_detach_ptr && !data::arrFromJson(on_detach_ptr, &this->on_detach) )
                        {
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2048, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2048),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                            "fromJson",
                            234);
                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            (common::milog::MiLogStream *const)(v2 + 2048),
                            (const char (*)[30])"fromJson for: onDetach fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2112),
                            "onAvatarIn",
                            (const std::allocator<char> *)(v2 + 240));
                          on_avatar_in_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                          std::string::~string((void *)(v2 + 2112));
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( on_avatar_in_ptr && !data::arrFromJson(on_avatar_in_ptr, &this->on_avatar_in) )
                          {
                            *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2176) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2176, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2176),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                              "fromJson",
                              246);
                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                              (common::milog::MiLogStream *const)(v2 + 2176),
                              (const char (*)[32])"fromJson for: onAvatarIn fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2240),
                              "onAvatarOut",
                              (const std::allocator<char> *)(v2 + 256));
                            on_avatar_out_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                            std::string::~string((void *)(v2 + 2240));
                            *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( on_avatar_out_ptr && !data::arrFromJson(on_avatar_out_ptr, &this->on_avatar_out) )
                            {
                              *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2304, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2304),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                "fromJson",
                                258);
                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                (common::milog::MiLogStream *const)(v2 + 2304),
                                (const char (*)[33])"fromJson for: onAvatarOut fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2368),
                                "onVehicleIn",
                                (const std::allocator<char> *)(v2 + 272));
                              on_vehicle_in_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                              std::string::~string((void *)(v2 + 2368));
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( on_vehicle_in_ptr && !data::arrFromJson(on_vehicle_in_ptr, &this->on_vehicle_in) )
                              {
                                *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2432) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2432, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2432),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                  "fromJson",
                                  270);
                                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2432),
                                  (const char (*)[33])"fromJson for: onVehicleIn fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2496),
                                  "onVehicleOut",
                                  (const std::allocator<char> *)(v2 + 288));
                                on_vehicle_out_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                                std::string::~string((void *)(v2 + 2496));
                                *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( on_vehicle_out_ptr && !data::arrFromJson(on_vehicle_out_ptr, &this->on_vehicle_out) )
                                {
                                  *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2560, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2560),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                    "fromJson",
                                    282);
                                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2560),
                                    (const char (*)[34])"fromJson for: onVehicleOut fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2624),
                                    "onTriggerAvatarRay",
                                    (const std::allocator<char> *)(v2 + 304));
                                  on_trigger_avatar_ray_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2624));
                                  std::string::~string((void *)(v2 + 2624));
                                  *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( on_trigger_avatar_ray_ptr
                                    && !data::arrFromJson(on_trigger_avatar_ray_ptr, &this->on_trigger_avatar_ray) )
                                  {
                                    *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2688, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2688),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                      "fromJson",
                                      294);
                                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2688),
                                      (const char (*)[40])"fromJson for: onTriggerAvatarRay fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2752),
                                      "onZoneEnter",
                                      (const std::allocator<char> *)(v2 + 320));
                                    on_zone_enter_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2752));
                                    std::string::~string((void *)(v2 + 2752));
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( on_zone_enter_ptr
                                      && !data::arrFromJson(on_zone_enter_ptr, &this->on_zone_enter) )
                                    {
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2816, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2816),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                        "fromJson",
                                        306);
                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2816),
                                        (const char (*)[33])"fromJson for: onZoneEnter fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2880),
                                        "onZoneExit",
                                        (const std::allocator<char> *)(v2 + 336));
                                      on_zone_exit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2880));
                                      std::string::~string((void *)(v2 + 2880));
                                      *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( on_zone_exit_ptr && !data::arrFromJson(on_zone_exit_ptr, &this->on_zone_exit) )
                                      {
                                        *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2944, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2944),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                          "fromJson",
                                          318);
                                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2944),
                                          (const char (*)[32])"fromJson for: onZoneExit fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3008),
                                          "isDynamicAbility",
                                          (const std::allocator<char> *)(v2 + 352));
                                        is_dynamic_ability_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3008));
                                        std::string::~string((void *)(v2 + 3008));
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( is_dynamic_ability_ptr
                                          && !fromJson<bool>(is_dynamic_ability_ptr, &this->is_dynamic_ability) )
                                        {
                                          *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3072) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3072, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3072),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                            "fromJson",
                                            330);
                                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3072),
                                            (const char (*)[38])"fromJson for: isDynamicAbility fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3136),
                                            "abilityDefinedProperties",
                                            (const std::allocator<char> *)(v2 + 368));
                                          p_ability_defined_properties = (data::ConfigAbilityPropertyEntryMap *)(v2 + 3136);
                                          ability_defined_properties_ptr = jsonValueFind(
                                                                             jval,
                                                                             (const std::string *)(v2 + 3136));
                                          std::string::~string((void *)(v2 + 3136));
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( ability_defined_properties_ptr
                                            && (p_ability_defined_properties = &this->ability_defined_properties,
                                                !data::mapFromJson(
                                                   ability_defined_properties_ptr,
                                                   &this->ability_defined_properties)) )
                                          {
                                            *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3200) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3200, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3200),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
                                              "fromJson",
                                              342);
                                            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3200),
                                              (const char (*)[46])"fromJson for: abilityDefinedProperties fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                              __asan_report_store1(
                                                &this->is_json_loaded,
                                                p_ability_defined_properties,
                                                &this->is_json_loaded);
                                            this->is_json_loaded = 1;
                                            v5 = 1;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v12 = v5;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF810C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8114) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF811C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8124) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF812C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF813C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF814C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF815C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF816C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8174) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF817C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF818C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8194) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3264LL, v38);
  }
  return v12;
};

// Line 349: range 0000000011FDC0A0-0000000011FDC9FB
data::ConfigAbilityPtr __cdecl data::ConfigAbility::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigAbilityPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v14[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:362 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:356 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbility::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
        "parseFromJson",
        359);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[41])"fromJson for: ConfigAbility $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigAbility>::shared_ptr((std::shared_ptr<data::ConfigAbility> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigAbility((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "parseFromJson",
          365);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[39])"create ConfigAbility fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigAbility>::shared_ptr((std::shared_ptr<data::ConfigAbility> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
            "parseFromJson",
            370);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigAbility>::shared_ptr((std::shared_ptr<data::ConfigAbility> *const)jval, 0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 632) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 632, v1, v12);
          *(_BYTE *)(v10 + 632) = 1;
          std::shared_ptr<data::ConfigAbility>::shared_ptr(
            (std::shared_ptr<data::ConfigAbility> *const)jval,
            (std::shared_ptr<data::ConfigAbility> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "parseFromJson",
      353);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[46])"jsonValueFind for: ConfigAbility $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigAbility>::shared_ptr((std::shared_ptr<data::ConfigAbility> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 378: range 0000000011FDC9FC-0000000011FDCE8F
int32_t __cdecl data::ConfigAbility::getHashValue(const data::ConfigAbility *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t MapHashValue; // eax
  int32_t v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t v22; // eax
  int32_t v23; // eax
  int32_t v24; // eax
  int32_t v25; // eax
  int32_t v26; // eax
  int32_t result; // eax
  char v28[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:379";
  *(_QWORD *)(v2 + 16) = data::ConfigAbility::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->ability_name, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->ability_mixins);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->ability_specials);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v7 = data::getMapHashValue(&this->modifiers);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( std::operator!=<data::ConfigAbilityModifier>(0LL, &this->default_modifier) )
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->default_modifier);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 24LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 24LL);
    v10 = (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
    common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  }
  v11 = data::getArrHashValue(&this->on_added);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::getArrHashValue(&this->on_removed);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::getArrHashValue(&this->on_ability_start);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::getArrHashValue(&this->on_kill);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  v15 = data::getArrHashValue(&this->on_field_enter);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::getArrHashValue(&this->on_field_exit);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::getArrHashValue(&this->on_attach);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::getArrHashValue(&this->on_detach);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::getArrHashValue(&this->on_avatar_in);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::getArrHashValue(&this->on_avatar_out);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::getArrHashValue(&this->on_vehicle_in);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  v22 = data::getArrHashValue(&this->on_vehicle_out);
  common::tools::HashUtils::appendHash(v22, (int32_t *)(v2 + 32));
  v23 = data::getArrHashValue(&this->on_trigger_avatar_ray);
  common::tools::HashUtils::appendHash(v23, (int32_t *)(v2 + 32));
  v24 = data::getArrHashValue(&this->on_zone_enter);
  common::tools::HashUtils::appendHash(v24, (int32_t *)(v2 + 32));
  v25 = data::getArrHashValue(&this->on_zone_exit);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_dynamic_ability >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dynamic_ability, v2 + 32, &this->is_dynamic_ability);
  common::tools::HashUtils::appendHash(this->is_dynamic_ability, (int32_t *)(v2 + 32));
  v26 = data::getMapHashValue(&this->ability_defined_properties);
  common::tools::HashUtils::appendHash(v26, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 409: range 0000000011FDCE90-0000000011FDD1F1
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigAbilityArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:415 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigAbility::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v2 + 32), 0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "arrFromJson",
          418);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[40])"elem_ptr is nullptr: ConfigAbilityArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigAbility>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigAbility>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 428: range 0000000011FDD1F2-0000000011FDD4AD
int32_t __cdecl data::getArrHashValue(const data::ConfigAbilityArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigAbility> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:429 64 8 15 __for_begin:430 96 8 13 __for_end:430";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigAbility>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigAbility>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigAbility>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigAbility>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbility> const*,std::vector<std::shared_ptr<data::ConfigAbility>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbility>*,std::vector<std::shared_ptr<data::ConfigAbility>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbility>*,std::vector<std::shared_ptr<data::ConfigAbility>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbility> const*,std::vector<std::shared_ptr<data::ConfigAbility>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbility>*,std::vector<std::shared_ptr<data::ConfigAbility>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigAbility>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 80LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 80LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbility> const*,std::vector<std::shared_ptr<data::ConfigAbility>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbility>*,std::vector<std::shared_ptr<data::ConfigAbility>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 444: range 000000001215ECA0-000000001215EEE1
void __cdecl data::ConfigDummyAbilityRegister::ConfigDummyAbilityRegister(data::ConfigDummyAbilityRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigAbility> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDummyAbilityRegister::ConfigDummyAbilityRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigDummyAbility>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigDummyAbility",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigAbility>>::operator[](
         &data::g_ConfigAbilityMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigAbility>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigAbility>::operator=<data::ConfigDummyAbility>(
    v4,
    (std::shared_ptr<data::ConfigDummyAbility> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigDummyAbility>::~shared_ptr((std::shared_ptr<data::ConfigDummyAbility> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 447: range 0000000011FDD4AE-0000000011FDD5E1
void __cdecl data::ConfigDummyAbility::foreachMember(
        data::ConfigDummyAbility *const this,
        std::function<void(std::any&)> *p_func)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigDummyAbility::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigAbility::foreachMember(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 452: range 0000000011FDD5E2-0000000011FDD6F2
std::shared_ptr<data::ConfigAbility> __cdecl data::ConfigDummyAbility::clone(data::ConfigDummyAbility *const this)
{
  data::ConfigDummyAbility *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigAbility> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDummyAbility::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigDummyAbility,data::ConfigDummyAbility&>(
    (common::tools::perf::allocator<data::ConfigDummyAbility,data::ConfigDummyAbility> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigAbility>::shared_ptr<data::ConfigDummyAbility,void>(
    (std::shared_ptr<data::ConfigAbility> *const)this,
    (std::shared_ptr<data::ConfigDummyAbility> *)(v2 + 32));
  std::shared_ptr<data::ConfigDummyAbility>::~shared_ptr((std::shared_ptr<data::ConfigDummyAbility> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 456: range 0000000011FDD6F4-0000000011FDD737
data::ConfigDummyAbilityPtr __cdecl data::ConfigDummyAbilityFactory::create(
        data::ConfigDummyAbilityFactory *const this)
{
  data::ConfigDummyAbilityPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigDummyAbility>();
  result._M_ptr = (std::__shared_ptr<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 458: range 0000000011FDD738-0000000011FDD950
bool __cdecl data::ConfigDummyAbility::fromJson(data::ConfigDummyAbility *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDummyAbility::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigAbility::fromJson(this, jval) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "fromJson",
      461);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[35])"fromJson for: ConfigAbility fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 468: range 0000000011FDD952-0000000011FDE49E
data::ConfigDummyAbilityPtr __cdecl data::ConfigDummyAbility::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigDummyAbilityPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:481 96 16 7 ptr:487 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:475 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDummyAbility::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
        "parseFromJson",
        478);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[46])"fromJson for: ConfigDummyAbility $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigDummyAbility>::shared_ptr((std::shared_ptr<data::ConfigDummyAbility> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigAbility((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v2 + 64), 0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "parseFromJson",
          484);
        v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[39])"create ConfigAbility fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigDummyAbility>::shared_ptr(
          (std::shared_ptr<data::ConfigDummyAbility> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigDummyAbility,data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v2 + 96));
        if ( std::operator==<data::ConfigDummyAbility>(
               (const std::shared_ptr<data::ConfigDummyAbility> *)(v2 + 96),
               0LL) )
        {
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
            "parseFromJson",
            490);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[37])"cast to ConfigDummyAbilityPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigDummyAbility>::shared_ptr(
            (std::shared_ptr<data::ConfigDummyAbility> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
              "parseFromJson",
              495);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigDummyAbility>::shared_ptr(
              (std::shared_ptr<data::ConfigDummyAbility> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 632) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 632, v1, v12);
            *(_BYTE *)(v10 + 632) = 1;
            std::shared_ptr<data::ConfigDummyAbility>::shared_ptr(
              (std::shared_ptr<data::ConfigDummyAbility> *const)jval,
              (std::shared_ptr<data::ConfigDummyAbility> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigDummyAbility>::~shared_ptr((std::shared_ptr<data::ConfigDummyAbility> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "parseFromJson",
      472);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[51])"jsonValueFind for: ConfigDummyAbility $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigDummyAbility>::shared_ptr((std::shared_ptr<data::ConfigDummyAbility> *const)jval, 0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigDummyAbility,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 503: range 0000000011FDE4A0-0000000011FDE4BF
int32_t __cdecl data::ConfigDummyAbility::getHashValue(const data::ConfigDummyAbility *const this)
{
  return data::ConfigAbility::getHashValue(this);
};

// Line 509: range 0000000011FDE4C0-0000000011FDF0C9
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigAbilityMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  std::shared_ptr<data::ConfigAbility> *v12; // r8
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  char v21[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 7 cit:512 80 16 9 <unknown> 112 16 9 value:522 144 32 7 key:515 208 32 9 <unknown> 272 "
                        "32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 12 tmp_jval:510 544 40 12 key_jval:5"
                        "14 624 40 14 value_jval:521";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 464), jval);
  overrideDefault((Json::Value *)(v3 + 464));
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 464));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 464));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 71) & 7) >= *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 544, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 544));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 544), (std::string *)(v3 + 144)) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
        "mapFromJson",
        518);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 544));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 272));
      std::string::~string((void *)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 624), v11);
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigAbility::parseFromJson((const Json::Value *)(v3 + 112));
      if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v3 + 112), 0LL) )
      {
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "mapFromJson",
          525);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v14 = 0;
      }
      else
      {
        v15 = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::emplace<std::string&,std::shared_ptr<data::ConfigAbility>&>(
                m,
                (std::string *)(v3 + 144),
                (std::shared_ptr<data::ConfigAbility> *)(v3 + 112),
                (std::string *)(v3 + 144),
                v12);
        if ( !v15.second )
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
            "mapFromJson",
            530);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
      v9 = v14 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
    v17 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_34;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v19 = 1;
LABEL_34:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v19 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 464));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v2;
};

// Line 539: range 0000000011FDF0CA-0000000011FDF3D9
int32_t __cdecl data::getMapHashValue(const data::ConfigAbilityMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,false,true>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:540 64 8 15 __for_begin:541 96 8 13 __for_end:541";
  *(_QWORD *)(v2 + 16) = data::getMapHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,true> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::shared_ptr<data::ConfigAbility>>(v9);
    val = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigAbility> > >::type *)std::get<1ul,std::string const,std::shared_ptr<data::ConfigAbility>>(v9);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigAbility>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 80LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 80LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigAbility>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigAbility> >,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 555: range 0000000011FDF3DA-0000000011FDF77A
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigAbilityGroupList *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 56 8 elem:561";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 96) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 6) = 0;
      std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::unordered_map((std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> *const)(v2 + 96));
      if ( !data::mapFromJson(elem_jval, (data::ConfigAbilityMap *)(v2 + 96)) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "vecFromJson",
          564);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> &>((std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> *)(v2 + 96));
        std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>::emplace_back<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>(
          v,
          v8,
          v8);
        v7 = 1;
      }
      std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>::~unordered_map((std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    *(_BYTE *)(v9 + 6) = -8;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 574: range 0000000011FDF77B-0000000011FDF9C7
int32_t __cdecl data::getVecHashValue(const data::ConfigAbilityGroupList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t MapHashValue; // eax
  int32_t result; // eax
  const std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:575 64 8 15 __for_begin:576 96 8 13 __for_end:576";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>::const_iterator *)(v2 + 64) = std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>::const_iterator *)(v2 + 96) = std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>::end(vec);
  while ( __gnu_cxx::operator!=<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> const*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>>(
            (const __gnu_cxx::__normal_iterator<const std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> const*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>>::operator*((const __gnu_cxx::__normal_iterator<const std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>> > *const)(v2 + 64));
    MapHashValue = data::getMapHashValue(elem);
    common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>> const*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>>>::operator++((__gnu_cxx::__normal_iterator<const std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>*,std::vector<std::unordered_map<std::string,std::shared_ptr<data::ConfigAbility>>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 584: range 0000000011FDF9C8-0000000011FDFD29
bool __cdecl data::arrFromJson(const Json::Value *jval, data::AbilityTaskArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:590 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigAbilityTask::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigAbilityTask>((const std::shared_ptr<data::ConfigAbilityTask> *)(v2 + 32), 0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "arrFromJson",
          593);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[38])"elem_ptr is nullptr: AbilityTaskArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigAbilityTask>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigAbilityTask>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigAbilityTask>::~shared_ptr((std::shared_ptr<data::ConfigAbilityTask> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 603: range 0000000011FDFD2A-0000000011FDFFE5
int32_t __cdecl data::getArrHashValue(const data::AbilityTaskArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigAbilityTask> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:604 64 8 15 __for_begin:605 96 8 13 __for_end:605";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigAbilityTask>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigAbilityTask>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigAbilityTask>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigAbilityTask>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigAbilityTask> const*,std::vector<std::shared_ptr<data::ConfigAbilityTask>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbilityTask>*,std::vector<std::shared_ptr<data::ConfigAbilityTask>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbilityTask>*,std::vector<std::shared_ptr<data::ConfigAbilityTask>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityTask> const*,std::vector<std::shared_ptr<data::ConfigAbilityTask>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbilityTask>*,std::vector<std::shared_ptr<data::ConfigAbilityTask>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigAbilityTask>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigAbilityTask,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityTask,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 16LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 16LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigAbilityTask> const*,std::vector<std::shared_ptr<data::ConfigAbilityTask>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigAbilityTask>*,std::vector<std::shared_ptr<data::ConfigAbilityTask>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 617: range 0000000011FDFFE6-0000000011FE05C9
bool __cdecl data::ConfigAbilitySystem::fromJson(data::ConfigAbilitySystem *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::AbilityTaskArray *p_tasks; // rsi
  const Json::Value *should_pre_active_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *tasks_ptr; // [rsp+18h] [rbp-168h]
  char v10[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilitySystem::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "shouldPreActive",
    (const std::allocator<char> *)(v2 + 32));
  should_pre_active_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( should_pre_active_ptr && !fromJson<bool>(should_pre_active_ptr, &this->should_pre_active) )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "fromJson",
      627);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[37])"fromJson for: shouldPreActive fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "tasks",
      (const std::allocator<char> *)(v2 + 48));
    p_tasks = (data::AbilityTaskArray *)(v2 + 192);
    tasks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( tasks_ptr && (p_tasks = &this->tasks, !data::arrFromJson(tasks_ptr, &this->tasks)) )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
        "fromJson",
        639);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[27])"fromJson for: tasks fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_tasks, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 647: range 0000000011FE05CA-0000000011FE0750
int32_t __cdecl data::ConfigAbilitySystem::getHashValue(const data::ConfigAbilitySystem *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:648";
  *(_QWORD *)(v2 + 16) = data::ConfigAbilitySystem::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this, v1, this);
  common::tools::HashUtils::appendHash(this->should_pre_active, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->tasks);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 655: range 0000000011FE0751-0000000011FE0B05
bool __cdecl data::arrFromJson(const Json::Value *jval, data::AbilitySystemArray *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigAbilitySystem *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 8 elem:661";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_BYTE *)(v6 + 4) = 0;
      data::ConfigAbilitySystem::ConfigAbilitySystem((data::ConfigAbilitySystem *const)(v2 + 112));
      if ( !data::ConfigAbilitySystem::fromJson((data::ConfigAbilitySystem *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
          "arrFromJson",
          664);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigAbilitySystem &>((data::ConfigAbilitySystem *)(v2 + 112));
        std::vector<data::ConfigAbilitySystem>::emplace_back<data::ConfigAbilitySystem>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigAbilitySystem::~ConfigAbilitySystem((data::ConfigAbilitySystem *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 674: range 0000000011FE0B06-0000000011FE0D52
int32_t __cdecl data::getArrHashValue(const data::AbilitySystemArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigAbilitySystem*,std::vector<data::ConfigAbilitySystem> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:675 64 8 15 __for_begin:676 96 8 13 __for_end:676";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<data::ConfigAbilitySystem>::const_iterator *)(v2 + 64) = std::vector<data::ConfigAbilitySystem>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigAbilitySystem>::const_iterator *)(v2 + 96) = std::vector<data::ConfigAbilitySystem>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigAbilitySystem const*,std::vector<data::ConfigAbilitySystem>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigAbilitySystem*,std::vector<data::ConfigAbilitySystem> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigAbilitySystem*,std::vector<data::ConfigAbilitySystem> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigAbilitySystem const*,std::vector<data::ConfigAbilitySystem>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigAbilitySystem*,std::vector<data::ConfigAbilitySystem> > *const)(v2 + 64));
    HashValue = data::ConfigAbilitySystem::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigAbilitySystem const*,std::vector<data::ConfigAbilitySystem>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigAbilitySystem*,std::vector<data::ConfigAbilitySystem> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 685: range 0000000011FE0D54-0000000011FE10A9
bool __cdecl data::ConfigEntityAbilitySystem::fromJson(
        data::ConfigEntityAbilitySystem *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigEntityAbilitySystem *v5; // rsi
  bool result; // al
  const Json::Value *on_being_hit_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigEntityAbilitySystem::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "onBeingHit",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigEntityAbilitySystem *)(v2 + 64);
  on_being_hit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( on_being_hit_ptr && (v5 = this, !data::arrFromJson(on_being_hit_ptr, &this->on_being_hit)) )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/Ability/ConfigAbility.cpp",
      "fromJson",
      695);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[32])"fromJson for: onBeingHit fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 703: range 0000000011FE10AA-0000000011FE11E4
int32_t __cdecl data::ConfigEntityAbilitySystem::getHashValue(const data::ConfigEntityAbilitySystem *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:704";
  *(_QWORD *)(v2 + 16) = data::ConfigEntityAbilitySystem::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->on_being_hit);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

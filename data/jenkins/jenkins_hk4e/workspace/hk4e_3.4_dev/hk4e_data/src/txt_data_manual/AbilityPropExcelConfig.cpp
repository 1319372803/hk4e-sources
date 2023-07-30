// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AbilityPropExcelConfig.cpp

// Line 20: range 0000000012AA386C-0000000012AA3F58
int32_t __cdecl AbilityPropExcelConfigMgr::checkConfig(
        AbilityPropExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-15B4h]
  data::AbilityPropExcelConfigMap *__for_range; // [rsp+20h] [rbp-15B0h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::AbilityPropExcelConfig>,false,true>::reference __in; // [rsp+28h] [rbp-15A8h]
  std::tuple_element<0,std::pair<const std::string,data::AbilityPropExcelConfig> >::type *prop_name; // [rsp+30h] [rbp-15A0h]
  char v15[5520]; // [rsp+40h] [rbp-1590h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 14 __for_begin:32 64 8 12 __for_end:32 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unkno"
                        "wn> 224 32 9 <unknown> 288 48 10 key_set:22 368 4840 15 ability_prop:21";
  *(_QWORD *)(v2 + 16) = AbilityPropExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862882] = -218103808;
  v4[536862883] = -202116109;
  v4[536862884] = -202116109;
  v4[536862885] = -202116109;
  v4[536862886] = -202116109;
  v4[536862887] = -202116109;
  v4[536862888] = -202116109;
  v4[536862889] = -202116109;
  v4[536862890] = -202116109;
  data::AbilityProperty::AbilityProperty((data::AbilityProperty *const)(v2 + 368));
  std::set<std::string>::set((std::set<std::string> *const)(v2 + 288));
  std::function<void ()(std::any &)>::function<AbilityPropExcelConfigMgr::checkConfig(TxtConfigMgr const&)::{lambda(std::any &)#1},void,void>(
    (std::function<void(std::any&)> *const)(v2 + 160),
    (AbilityPropExcelConfigMgr::checkConfig::<lambda(std::any&)>)(v2 + 288));
  v5 = (char *)(v2 + 160);
  data::AbilityProperty::foreachMember(
    (data::AbilityProperty *const)(v2 + 368),
    (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  ret = 0;
  __for_range = &this->ability_prop_excel_config_map;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v5);
  *(std::unordered_map<std::string,data::AbilityPropExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::AbilityPropExcelConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_map<std::string,data::AbilityPropExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::AbilityPropExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<std::string const,data::AbilityPropExcelConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AbilityPropExcelConfig>,true> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AbilityPropExcelConfig>,true> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<std::string const,data::AbilityPropExcelConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::AbilityPropExcelConfig>,false,true> *const)(v2 + 32));
    prop_name = std::get<0ul,std::string const,data::AbilityPropExcelConfig>(__in);
    std::get<1ul,std::string const,data::AbilityPropExcelConfig>(__in);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v6);
    *(std::set<std::string>::iterator *)(v2 + 128) = std::set<std::string>::end((const std::set<std::string> *const)(v2 + 288));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v6);
    *(std::set<std::string>::iterator *)(v2 + 96) = std::set<std::string>::find(
                                                      (std::set<std::string> *const)(v2 + 288),
                                                      prop_name);
    v7 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 96),
           (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v7 )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AbilityPropExcelConfig.cpp",
        "checkConfig",
        36);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 224),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v8, (const char (*)[47])byte_1AA18140);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, prop_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::AbilityPropExcelConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::AbilityPropExcelConfig>,false,true> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::set<std::string>::~set((std::set<std::string> *const)(v2 + 288));
  data::AbilityProperty::~AbilityProperty((data::AbilityProperty *const)(v2 + 368));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8288) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8290) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8298) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82A8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5472LL, v15);
  }
  return ret;
};

// Line 23: range 0000000012AA37EC-0000000012AA386A
void __cdecl AbilityPropExcelConfigMgr::checkConfig(TxtConfigMgr const&)::{lambda(std::any &)#1}::operator()(
        const AbilityPropExcelConfigMgr::checkConfig::<lambda(std::any&)> *const __closure,
        std::any *member)
{
  const std::type_info *v2; // rax
  const std::string *prop_key; // [rsp+18h] [rbp-8h]

  v2 = std::any::type(member);
  if ( std::type_info::operator==(v2, (const std::type_info *)&`typeinfo for'std::string) )
  {
    prop_key = std::any_cast<std::string const&>(member);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::set<std::string>::insert(__closure->__key_set, prop_key);
  }
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AbilityOverrideExcelConfig.cpp

// Line 22: range 0000000012AA19EE-0000000012AA1A12
int32_t __cdecl AbilityOverrideExcelConfigMgr::checkConfig(
        AbilityOverrideExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return AbilityOverrideExcelConfigMgr::checkOverrideConfig(this, txt_config_mgr);
};

// Line 27: range 0000000012AA1A14-0000000012AA2BF7
int32_t __cdecl AbilityOverrideExcelConfigMgr::checkOverrideConfig(
        AbilityOverrideExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  _BOOL4 v11; // r14d
  const std::set<std::string>::key_type *p_ability_name; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::string *v18; // rsi
  unsigned __int64 v19; // rax
  char *v20; // rsi
  std::vector<std::string>::size_type v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  _BOOL4 v26; // r14d
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v27; // rsi
  int v28; // r14d
  bool v29; // al
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  int v36; // edx
  unsigned __int64 v37; // rax
  int v38; // edx
  const HK4EDesignConfig *config; // [rsp+20h] [rbp-3E0h]
  data::AbilityOverrideExcelConfigMap *__for_range; // [rsp+28h] [rbp-3D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-3D0h]
  const unsigned int *id; // [rsp+38h] [rbp-3C8h]
  std::tuple_element<1,std::pair<unsigned int const,data::AbilityOverrideExcelConfig> >::type *override_config; // [rsp+40h] [rbp-3C0h]
  data::DynamicArgumentMap *__for_range_0; // [rsp+48h] [rbp-3B8h]
  std::vector<std::string> *__for_range_1; // [rsp+50h] [rbp-3B0h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::DynamicArgument>,false,true>::reference v47; // [rsp+58h] [rbp-3A8h]
  const std::set<std::string>::value_type *ability_special_name; // [rsp+60h] [rbp-3A0h]
  char v49[912]; // [rsp+70h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 8 14 __for_begin:31 64 8 12 __for_end:31 96 8 9 <unknown> 128 8 9 <unknown> 160 8 14 __for"
                        "_begin:47 192 8 12 __for_end:47 224 8 14 __for_begin:56 256 8 12 __for_end:56 288 8 9 <unknown> "
                        "320 8 9 <unknown> 352 16 21 config_ability_ptr:33 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                        " <unknown> 576 32 15 special_name:56 640 32 9 <unknown> 704 48 19 ability_name_set:30 784 48 23 "
                        "ability_specials_set:46";
  *(_QWORD *)(v3 + 16) = AbilityOverrideExcelConfigMgr::checkOverrideConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -219021312;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862746] = -202116109;
  config = TxtConfigMgr::getConfig(txt_config_mgr);
  std::set<std::string>::set((std::set<std::string> *const)(v3 + 704));
  __for_range = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v3 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::AbilityOverrideExcelConfig>(__in);
    override_config = std::get<1ul,unsigned int const,data::AbilityOverrideExcelConfig>(__in);
    *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    p_json_config_mgr = (const std::string *)&config->json_config_mgr;
    if ( *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    JsonConfigMgr::findAbilityConfig((const JsonConfigMgr *const)(v3 + 352), p_json_config_mgr);
    if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v3 + 352), 0LL) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AbilityOverrideExcelConfig.cpp",
        "checkOverrideConfig",
        36);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 384),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v7, (const char (*)[81])byte_1AA14760);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &override_config->ability_name);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, 0LL);
      *(std::set<std::string>::iterator *)(v3 + 128) = std::set<std::string>::end((const std::set<std::string> *const)(v3 + 704));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      p_ability_name = &override_config->ability_name;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, 0LL);
      *(std::set<std::string>::iterator *)(v3 + 96) = std::set<std::string>::find(
                                                        (std::set<std::string> *const)(v3 + 704),
                                                        p_ability_name);
      v13 = std::operator!=(
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 96),
              (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 128));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( v13 )
      {
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/AbilityOverrideExcelConfig.cpp",
          "checkOverrideConfig",
          41);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v14, (const char (*)[50])byte_1AA14820);
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &override_config->ability_name);
        v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])" id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v18 = &override_config->ability_name;
        std::set<std::string>::insert((std::set<std::string> *const)(v3 + 704), &override_config->ability_name);
        v19 = ((v3 + 784) >> 3) + 2147450880;
        *(_DWORD *)v19 = 0;
        *(_WORD *)(v19 + 4) = 0;
        std::set<std::string>::set((std::set<std::string> *const)(v3 + 784));
        __for_range_0 = &std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 352))->ability_specials;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v18);
        *(std::unordered_map<std::string,data::DynamicArgument>::iterator *)(v3 + 160) = std::unordered_map<std::string,data::DynamicArgument>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 192, v18);
        *(std::unordered_map<std::string,data::DynamicArgument>::iterator *)(v3 + 192) = std::unordered_map<std::string,data::DynamicArgument>::end(__for_range_0);
        while ( 1 )
        {
          v20 = (char *)(v3 + 192);
          if ( !std::__detail::operator!=<std::pair<std::string const,data::DynamicArgument>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v3 + 160),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v3 + 192)) )
            break;
          v47 = std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::DynamicArgument>,false,true> *const)(v3 + 160));
          ability_special_name = std::get<0ul,std::string const,data::DynamicArgument>(v47);
          std::get<1ul,std::string const,data::DynamicArgument>(v47);
          std::set<std::string>::insert((std::set<std::string> *const)(v3 + 784), ability_special_name);
          std::__detail::_Node_iterator<std::pair<std::string const,data::DynamicArgument>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::DynamicArgument>,false,true> *const)(v3 + 160));
        }
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        v21 = std::vector<std::string>::size(&override_config->param_name_list);
        if ( v21 == std::vector<float>::size(&override_config->param_value_list) )
        {
          __for_range_1 = &override_config->param_name_list;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v20);
          *(std::vector<std::string>::iterator *)(v3 + 224) = std::vector<std::string>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, v20);
          *(std::vector<std::string>::iterator *)(v3 + 256) = std::vector<std::string>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 224),
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 256)) )
          {
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
            v27 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 224));
            std::string::basic_string(v3 + 576, v27);
            if ( (unsigned __int8)std::string::empty() )
            {
              v28 = 0;
            }
            else
            {
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 320, v27);
              *(std::set<std::string>::iterator *)(v3 + 320) = std::set<std::string>::end((const std::set<std::string> *const)(v3 + 784));
              *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 288, v27);
              *(std::set<std::string>::iterator *)(v3 + 288) = std::set<std::string>::find(
                                                                 (std::set<std::string> *const)(v3 + 784),
                                                                 (const std::set<std::string>::key_type *)(v3 + 576));
              v29 = std::operator==(
                      (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 288),
                      (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v3 + 320));
              *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
              if ( v29 )
              {
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 640, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 640),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/AbilityOverrideExcelConfig.cpp",
                  "checkOverrideConfig",
                  64);
                v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 640),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v31 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        v30,
                        (const char (*)[46])byte_1AA14900);
                v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v31,
                        &override_config->ability_name);
                v33 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        v32,
                        (const char (*)[27])byte_1AA14960);
                v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v33,
                        (const std::string *)(v3 + 576));
                v35 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v34, (const char (*)[5])" id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v28 = 1;
              }
              else
              {
                v28 = 2;
              }
            }
            std::string::~string((void *)(v3 + 576));
            if ( v28 && v28 != 2 )
            {
              v36 = 0;
              goto LABEL_57;
            }
            __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 224));
          }
          v36 = 1;
LABEL_57:
          *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          v26 = v36 == 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AbilityOverrideExcelConfig.cpp",
            "checkOverrideConfig",
            53);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v22, (const char (*)[71])byte_1AA14880);
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &override_config->ability_name);
          v25 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v24, (const char (*)[5])" id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v26 = 0;
        }
        std::set<std::string>::~set((std::set<std::string> *const)(v3 + 784));
        v11 = v26;
      }
    }
    std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v3 + 352));
    *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -1800;
    v37 = ((v3 + 784) >> 3) + 2147450880;
    *(_DWORD *)v37 = -117901064;
    *(_WORD *)(v37 + 4) = -1800;
    if ( !v11 )
    {
      v38 = 0;
      goto LABEL_63;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v3 + 32));
  }
  v38 = 1;
LABEL_63:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v38 == 1 )
    v2 = 0;
  std::set<std::string>::~set((std::set<std::string> *const)(v3 + 704));
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 73: range 0000000012AA2BF8-0000000012AA3429
int32_t __cdecl AbilityOverrideExcelConfigMgr::rewriteConfig(
        AbilityOverrideExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<std::string>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::vector<std::string>::size_type v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::vector<float>::size_type v12; // rax
  int v13; // eax
  std::vector<std::string>::reference v15; // rax
  std::vector<float>::reference v16; // rax
  int *v17; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>> *p_ability_override_param_map; // rcx
  char *v19; // rsi
  std::unordered_map<unsigned int,float> *v20; // rdi
  int32_t v21; // ecx
  char v22; // al
  char *v23; // rsi
  std::unordered_map<unsigned int,float>::mapped_type *v24; // rax
  _DWORD *v25; // rdx
  char v26; // cl
  int32_t result; // eax
  int index; // [rsp+20h] [rbp-1A0h]
  unsigned int ability_name_hash; // [rsp+24h] [rbp-19Ch]
  int special_value; // [rsp+28h] [rbp-198h]
  int32_t ability_special_name_hash; // [rsp+2Ch] [rbp-194h]
  data::AbilityOverrideExcelConfigMap *__for_range; // [rsp+30h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,data::AbilityOverrideExcelConfig> >::type *override_config; // [rsp+48h] [rbp-178h]
  char v36[368]; // [rsp+50h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 9 <unknown> 48 4 9 <unknown> 64 8 14 __for_begin:74 96 8 12 __for_end:74 128 8 9 <unknown"
                        "> 160 8 9 <unknown> 192 32 9 <unknown> 256 32 15 special_name:84";
  *(_QWORD *)(v3 + 16) = AbilityOverrideExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->ability_override_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AbilityOverrideExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false> *)(v3 + 96)) )
    {
      v13 = 1;
      goto LABEL_37;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::AbilityOverrideExcelConfig>(__in);
    override_config = std::get<1ul,unsigned int const,data::AbilityOverrideExcelConfig>(__in);
    ability_name_hash = common::tools::StringUtils::getStringHash(&override_config->ability_name);
    v6 = std::vector<std::string>::size(&override_config->param_name_list);
    if ( v6 != std::vector<float>::size(&override_config->param_value_list) )
      break;
    for ( index = 0;
          index < std::vector<std::string>::size(&override_config->param_name_list)
       && index < std::vector<float>::size(&override_config->param_value_list);
          ++index )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      v15 = std::vector<std::string>::operator[](&override_config->param_name_list, index);
      std::string::basic_string(v3 + 256, v15);
      v16 = std::vector<float>::operator[](&override_config->param_value_list, index);
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      special_value = *v17;
      if ( !(unsigned __int8)std::string::empty() )
      {
        ability_special_name_hash = common::tools::StringUtils::getStringHash((const std::string *)(v3 + 256));
        p_ability_override_param_map = &this->ability_override_param_map_;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 32, ability_name_hash);
        *(_DWORD *)(v3 + 32) = ability_name_hash;
        v19 = (char *)(v3 + 32);
        v20 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::operator[](
                p_ability_override_param_map,
                (std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::key_type *)(v3 + 32));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v21 = ability_special_name_hash;
        v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v22 != 0 && v22 <= 3 )
        {
          v20 = (std::unordered_map<unsigned int,float> *)(v3 + 48);
          LOBYTE(v19) = v22 != 0;
          __asan_report_store4(v3 + 48, v19);
        }
        *(_DWORD *)(v3 + 48) = v21;
        v23 = (char *)(v3 + 48);
        v24 = std::unordered_map<unsigned int,float>::operator[](
                v20,
                (std::unordered_map<unsigned int,float>::key_type *)(v3 + 48));
        v25 = v24;
        v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
        if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
        {
          LOBYTE(v23) = v26 != 0;
          __asan_report_store4(v24, v23);
        }
        *v25 = special_value;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      }
      std::string::~string((void *)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AbilityOverrideExcelConfig>,false,false> *const)(v3 + 64));
  }
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/AbilityOverrideExcelConfig.cpp",
    "rewriteConfig",
    79);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v7, (const char (*)[60])byte_1AA14AA0);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  v9 = std::vector<std::string>::size(&override_config->param_name_list);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    v9 = __asan_report_store8(v3 + 128, byte_1AA14AA0);
  *(_QWORD *)(v3 + 128) = v9;
  v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v8,
          (const unsigned __int64 *)(v3 + 128));
  v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])"!=");
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  v12 = std::vector<float>::size(&override_config->param_value_list);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    v12 = __asan_report_store8(v3 + 160, "!=");
  *(_QWORD *)(v3 + 160) = v12;
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v3 + 160));
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v13 = 0;
LABEL_37:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 99: range 0000000012AA342A-0000000012AA37EA
__int64 __fastcall AbilityOverrideExcelConfigMgr::getParamOverrideValue(
        const AbilityOverrideExcelConfigMgr *const this,
        const uint32_t ability_name_hash,
        const uint32_t ability_special_name_hash,
        unsigned __int64 param_value)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rsi
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>> *p_ability_override_param_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>> *v9; // rdx
  bool v10; // al
  __int64 result; // rax
  std::unordered_map<unsigned int,float> *p_second; // rdx
  std::unordered_map<unsigned int,float> *v13; // rdx
  bool v14; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,float>,false,false>::pointer v15; // rdx
  float *v16; // rax
  float second; // xmm0_4
  char v20[224]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 20 ability_name_hash:98 48 4 28 ability_special_name_hash:98 64 8 8 iter:101 96 8 9 <unkn"
                        "own> 128 8 14 param_iter:106 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = AbilityOverrideExcelConfigMgr::getParamOverrideValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 32) = ability_name_hash;
  *(_DWORD *)(v4 + 48) = ability_special_name_hash;
  v7 = (unsigned int)(param_value & 7) + 3;
  if ( *(_BYTE *)((param_value >> 3) + 0x7FFF8000) != 0
    && (char)((param_value & 7) + 3) >= *(_BYTE *)((param_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(param_value, v7);
  }
  *(_DWORD *)param_value = 0;
  p_ability_override_param_map = &this->ability_override_param_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, v7);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::find(p_ability_override_param_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::key_type *)(v4 + 32));
  v9 = &this->ability_override_param_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,float>>::end(v9);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,float>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,float> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,float> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,float>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,float> >,false,false> *const)(v4 + 64))->second;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v4 + 96);
    *(std::unordered_map<unsigned int,float>::const_iterator *)(v4 + 128) = std::unordered_map<unsigned int,float>::find(
                                                                              p_second,
                                                                              (const std::unordered_map<unsigned int,float>::key_type *)(v4 + 48));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    v13 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,float>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,float> >,false,false> *const)(v4 + 64))->second;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v4 + 48);
    *(std::unordered_map<unsigned int,float>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,float>::end(v13);
    v14 = std::__detail::operator==<std::pair<unsigned int const,float>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false> *)(v4 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false> *)(v4 + 160));
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,float>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,float>,false,false> *const)(v4 + 128));
      v16 = &v15->second;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      second = v15->second;
      if ( *(_BYTE *)((param_value >> 3) + 0x7FFF8000) != 0
        && (char)((param_value & 7) + 3) >= *(_BYTE *)((param_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(param_value, (unsigned int)(param_value & 7) + 3);
      }
      *(float *)param_value = second;
      result = 0LL;
    }
  }
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

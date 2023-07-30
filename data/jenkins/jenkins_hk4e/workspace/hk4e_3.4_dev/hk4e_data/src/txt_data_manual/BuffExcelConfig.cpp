// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BuffExcelConfig.cpp

// Line 19: range 0000000013A45F30-0000000013A46FC0
int32_t __cdecl BuffExcelConfigMgr::checkConfig(BuffExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  _BOOL4 v11; // r15d
  std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // r15d
  const char *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  char v24; // cl
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  data::ModifierStacking *p_stacking; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  int v45; // eax
  const HK4EDesignConfig *config; // [rsp+28h] [rbp-2B8h]
  data::BuffExcelConfigMap *__for_range; // [rsp+30h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-2A8h]
  const unsigned int *server_buff_id; // [rsp+40h] [rbp-2A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::BuffExcelConfig> >::type *buff_excel_config; // [rsp+48h] [rbp-298h]
  char v52[656]; // [rsp+50h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 14 __for_begin:21 64 8 12 __for_end:21 96 16 21 config_ability_ptr:23 128 16 22 config_m"
                        "odifier_ptr:29 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 3"
                        "2 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BuffExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  config = TxtConfigMgr::getConfig(txt_config_mgr);
  __for_range = &this->buff_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuffExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuffExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuffExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuffExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuffExcelConfig>,false> *)(v3 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false> *const)(v3 + 32));
    server_buff_id = std::get<0ul,unsigned int const,data::BuffExcelConfig>(__in);
    buff_excel_config = std::get<1ul,unsigned int const,data::BuffExcelConfig>(__in);
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_json_config_mgr = (const std::string *)&config->json_config_mgr;
    if ( *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    JsonConfigMgr::findAbilityConfig((const JsonConfigMgr *const)(v3 + 96), p_json_config_mgr);
    if ( std::operator==<data::ConfigAbility>((const std::shared_ptr<data::ConfigAbility> *)(v3 + 96), 0LL) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/BuffExcelConfig.cpp",
        "checkConfig",
        26);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v7, (const char (*)[31])byte_1AC5A420);
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &buff_excel_config->ability_name);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])", server_buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, server_buff_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v12 = std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      JsonConfigMgr::findModifierConfig((data::ConfigAbility *)(v3 + 128), (const std::string *)v12);
      if ( std::operator==<data::ConfigAbilityModifier>(
             (const std::shared_ptr<data::ConfigAbilityModifier> *)(v3 + 128),
             0LL) )
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/BuffExcelConfig.cpp",
          "checkConfig",
          32);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1AC5A4A0);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v14,
                &buff_excel_config->modifier_name);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v15,
                (const char (*)[18])", server_buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, server_buff_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v17 = 0;
      }
      else
      {
        v18 = "SERVER_";
        if ( !common::tools::StringUtils::isStartsWith(&buff_excel_config->modifier_name, "SERVER_") )
        {
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/BuffExcelConfig.cpp",
            "checkConfig",
            37);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v19, (const char (*)[42])byte_1AC5A520);
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v20,
                  &buff_excel_config->modifier_name);
          v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v21,
                  (const char (*)[18])", server_buff_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, server_buff_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v17 = 0;
        }
        else
        {
          v23 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v24 = *(_BYTE *)(((unsigned __int64)&v23->is_debuff >> 3) + 0x7FFF8000);
          if ( v24 != 0 && (((unsigned __int8)v23 + 113) & 7) >= v24 )
          {
            LOBYTE(v18) = v24 != 0;
            __asan_report_load1(&v23->is_debuff, v18, v23);
          }
          if ( v23->is_debuff )
          {
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 352, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 352),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/BuffExcelConfig.cpp",
              "checkConfig",
              42);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    v25,
                    (const char (*)[38])byte_1AC5A580);
            v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v26,
                    &buff_excel_config->modifier_name);
            v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v27,
                    (const char (*)[18])", server_buff_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, server_buff_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v17 = 0;
          }
          else
          {
            v29 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&v29->duration >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v29->duration >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&v29->duration);
            }
            if ( v29->duration.fixed_value == 0.0 )
            {
              v34 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&v34->element_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v34->element_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&v34->element_type);
              }
              if ( v34->element_type )
              {
                *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 480, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 480),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/BuffExcelConfig.cpp",
                  "checkConfig",
                  52);
                v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 480),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v36 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        v35,
                        (const char (*)[54])byte_1AC5A640);
                v37 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v36,
                        &buff_excel_config->modifier_name);
                v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v37,
                        (const char (*)[18])", server_buff_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, server_buff_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
                *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v17 = 0;
              }
              else
              {
                v39 = std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigAbilityModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                p_stacking = &v39->stacking;
                if ( *(_BYTE *)(((unsigned __int64)p_stacking >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_stacking & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_stacking >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4(p_stacking);
                }
                if ( v39->stacking == Multiple )
                {
                  v17 = 1;
                }
                else
                {
                  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 544, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 544),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/BuffExcelConfig.cpp",
                    "checkConfig",
                    57);
                  v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 544),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v42 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                          v41,
                          (const char (*)[57])byte_1AC5A6A0);
                  v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v42,
                          &buff_excel_config->modifier_name);
                  v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v43,
                          (const char (*)[18])", server_buff_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, server_buff_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
                  *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v17 = 0;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 416, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 416),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/BuffExcelConfig.cpp",
                "checkConfig",
                47);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      v30,
                      (const char (*)[50])byte_1AC5A5E0);
              v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v31,
                      &buff_excel_config->modifier_name);
              v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v32,
                      (const char (*)[18])", server_buff_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, server_buff_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
              *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v17 = 0;
            }
          }
        }
      }
      std::shared_ptr<data::ConfigAbilityModifier>::~shared_ptr((std::shared_ptr<data::ConfigAbilityModifier> *const)(v3 + 128));
      v11 = v17 == 1;
    }
    std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v3 + 96));
    *(_WORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -1800;
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    if ( !v11 )
    {
      v45 = 0;
      goto LABEL_56;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false> *const)(v3 + 32));
  }
  v45 = 1;
LABEL_56:
  if ( v45 == 1 )
    v2 = 0;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
  }
  return v2;
};

// Line 65: range 0000000013A46FC2-0000000013A47394
int32_t __cdecl BuffExcelConfigMgr::rewriteConfig(BuffExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool *p_is_del_when_leave_scene; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  int32_t result; // eax
  data::BuffExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-E8h]
  const std::unordered_set<unsigned int>::value_type *server_buff_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::BuffExcelConfig> >::type *buff_excel_config; // [rsp+28h] [rbp-D8h]
  char v17[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:66 64 8 12 __for_end:66 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BuffExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->buff_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuffExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BuffExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BuffExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuffExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BuffExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_22;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false> *const)(v3 + 32));
    server_buff_id = std::get<0ul,unsigned int const,data::BuffExcelConfig>(__in);
    buff_excel_config = std::get<1ul,unsigned int const,data::BuffExcelConfig>(__in);
    p_is_del_when_leave_scene = &buff_excel_config->is_del_when_leave_scene;
    v7 = ((_BYTE)buff_excel_config + 93) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_del_when_leave_scene >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_del_when_leave_scene >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_del_when_leave_scene, v7, v8);
    if ( buff_excel_config->is_del_when_leave_scene )
      break;
LABEL_20:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BuffExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&buff_excel_config->server_buff_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)buff_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_excel_config->server_buff_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&buff_excel_config->server_buff_type);
  }
  if ( buff_excel_config->server_buff_type == SERVER_BUFF_TEAM )
  {
    std::unordered_set<unsigned int>::insert(&this->del_when_leave_scene_buff_set_, server_buff_id);
    goto LABEL_20;
  }
  if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 96, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 96),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/BuffExcelConfig.cpp",
    "rewriteConfig",
    72);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v9, (const char (*)[63])byte_1AC5A740);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, server_buff_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_22:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

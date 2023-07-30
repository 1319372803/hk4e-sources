// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/EnvAnimalExcelConfig.cpp

// Line 22: range 0000000013AA1ED7-0000000013AA1EEF
uint32_t __cdecl getKey(uint32_t animal_id, data::EntityType entity_type)
{
  return (animal_id << 8) + entity_type;
};

// Line 27: range 0000000013AA1EF0-0000000013AA2EA2
int32_t __cdecl EnvAnimalExcelConfigMgr::rewriteConfig(
        EnvAnimalExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::EntityType entity_type; // edx
  __int64 v7; // rsi
  uint32_t Key; // edx
  char v9; // al
  data::EnvAnimalGatherExcelConfig *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  _BOOL4 v17; // edx
  unsigned __int64 v18; // rax
  char *v19; // rsi
  bool v20; // r15
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  _BOOL4 v23; // r15d
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  const char *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  uint32_t *p_animal_id; // rsi
  std::set<unsigned int> *v32; // rdi
  int v33; // ecx
  char v34; // al
  int v35; // edx
  unsigned __int64 v36; // rax
  int v37; // edx
  int32_t result; // eax
  data::EnvAnimalGatherExcelConfigVec *__for_range; // [rsp+20h] [rbp-2D0h]
  data::EnvAnimalGatherExcelConfig *gather_config; // [rsp+28h] [rbp-2C8h]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-2C0h]
  const std::string *weather_str; // [rsp+38h] [rbp-2B8h]
  char v44[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 1 9 <unknown> 48 4 6 key:30 64 4 15 climate_type:56 80 4 9 <unknown> 96 8 14 __for_begin:2"
                        "8 128 8 12 __for_end:28 160 8 9 <unknown> 192 8 14 __for_begin:54 224 8 12 __for_end:54 256 24 1"
                        "8 weather_str_vec:40 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>"
                        " 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EnvAnimalExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  __for_range = &this->env_animal_gather_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::EnvAnimalGatherExcelConfig>::iterator *)(v3 + 96) = std::vector<data::EnvAnimalGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::vector<data::EnvAnimalGatherExcelConfig>::iterator *)(v3 + 128) = std::vector<data::EnvAnimalGatherExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::EnvAnimalGatherExcelConfig *,std::vector<data::EnvAnimalGatherExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig*,std::vector<data::EnvAnimalGatherExcelConfig> > *)(v3 + 96),
            (const __gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig*,std::vector<data::EnvAnimalGatherExcelConfig> > *)(v3 + 128)) )
  {
    gather_config = __gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig *,std::vector<data::EnvAnimalGatherExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig*,std::vector<data::EnvAnimalGatherExcelConfig> > *const)(v3 + 96));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gather_config->entity_type);
    }
    entity_type = gather_config->entity_type;
    if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gather_config->animal_id);
    }
    v7 = (unsigned int)entity_type;
    Key = getKey(gather_config->animal_id, entity_type);
    v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 48, v7);
    }
    *(_DWORD *)(v3 + 48) = Key;
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &gather_config->gather_item_list,
      (unsigned int *)8);
    v11 = std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::emplace<unsigned int &,data::EnvAnimalGatherExcelConfig&>(
            &this->animal_gather_config_map_,
            (unsigned int *)(v3 + 48),
            gather_config,
            (unsigned int *)&this->animal_gather_config_map_,
            v10);
    if ( !v11.second )
    {
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
        "rewriteConfig",
        36);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v12, (const char (*)[23])byte_1AC6D520);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &gather_config->animal_id);
      v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" entity_type: ");
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_config->entity_type);
      }
      v16 = (__int64)data::enumValToStr(gather_config->entity_type);
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        v16 = __asan_report_store8(v3 + 160, " entity_type: ");
      *(_QWORD *)(v3 + 160) = v16;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 160));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      v18 = ((v3 + 256) >> 3) + 2147450880;
      *(_WORD *)v18 = 0;
      *(_BYTE *)(v18 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 256));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 384),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      v19 = (char *)(v3 + 384);
      v20 = common::tools::StringUtils::split(
              &gather_config->exclude_weathers,
              (const std::string *)(v3 + 384),
              (std::vector<std::string> *)(v3 + 256),
              0) != 0;
      std::string::~string((void *)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
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
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "rewriteConfig",
          43);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v21,
                (const char (*)[33])"split weathers fails, animal_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &gather_config->animal_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v23 = 0;
      }
      else
      {
        if ( std::vector<std::string>::empty((const std::vector<std::string> *const)(v3 + 256)) )
          goto LABEL_33;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gather_config->entity_type);
        }
        if ( gather_config->entity_type == Monster )
          v24 = 1;
        else
LABEL_33:
          v24 = 0;
        if ( v24 )
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
            "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
            "rewriteConfig",
            50);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v25,
                  (const char (*)[44])"monster should not has weathers, animal_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &gather_config->animal_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v23 = 0;
        }
        else
        {
          __for_range_0 = (std::vector<std::string> *)(v3 + 256);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v19);
          *(std::vector<std::string>::iterator *)(v3 + 192) = std::vector<std::string>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v19);
          *(std::vector<std::string>::iterator *)(v3 + 224) = std::vector<std::string>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 192),
                    (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 224)) )
          {
            weather_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 192));
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 64, v3 + 224);
            *(_DWORD *)(v3 + 64) = 0;
            v27 = (const char *)std::string::c_str(weather_str);
            if ( (unsigned int)data::enumStrToVal(v27, v3 + 64) )
            {
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
                "rewriteConfig",
                59);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v28,
                      (const char (*)[33])"parse weathers fails, animal_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &gather_config->animal_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v30 = 0;
            }
            else
            {
              p_animal_id = &gather_config->animal_id;
              v32 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                      &this->exclude_weathers_map_,
                      &gather_config->animal_id);
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              {
                v32 = (std::set<unsigned int> *)(v3 + 64);
                __asan_report_load4(v3 + 64);
              }
              v33 = *(_DWORD *)(v3 + 64);
              v34 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
              if ( v34 != 0 && v34 <= 3 )
              {
                v32 = (std::set<unsigned int> *)(v3 + 80);
                LOBYTE(p_animal_id) = v34 != 0;
                __asan_report_store4(v3 + 80, p_animal_id);
              }
              *(_DWORD *)(v3 + 80) = v33;
              std::set<unsigned int>::insert(v32, (std::set<unsigned int>::value_type *)(v3 + 80));
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              v30 = 1;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
            if ( v30 != 1 )
            {
              v35 = 0;
              goto LABEL_59;
            }
            __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 192));
          }
          v35 = 1;
LABEL_59:
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          v23 = v35 == 1;
        }
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 256));
      v17 = v23;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    v36 = ((v3 + 256) >> 3) + 2147450880;
    *(_WORD *)v36 = -1800;
    *(_BYTE *)(v36 + 2) = -8;
    if ( !v17 )
    {
      v37 = 0;
      goto LABEL_65;
    }
    __gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig *,std::vector<data::EnvAnimalGatherExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::EnvAnimalGatherExcelConfig*,std::vector<data::EnvAnimalGatherExcelConfig> > *const)(v3 + 96));
  }
  v37 = 1;
LABEL_65:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v37 == 1 )
  {
    std::vector<data::EnvAnimalGatherExcelConfig>::clear(&this->env_animal_gather_excel_config_vec);
    v2 = 0;
  }
  result = v2;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 72: range 0000000013AA2EA4-0000000013AA31C8
int32_t __cdecl EnvAnimalExcelConfigMgr::checkConfig(
        EnvAnimalExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = EnvAnimalExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( EnvAnimalExcelConfigMgr::checkGatherConfig(this, txt_config_mgr) )
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
      4u,
      "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
      "checkConfig",
      75);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkGatherConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( EnvAnimalExcelConfigMgr::checkWeightConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
      "checkConfig",
      80);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v7, (const char (*)[25])"checkWeightConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 87: range 0000000013AA31CA-0000000013AA4EA5
int32_t __cdecl EnvAnimalExcelConfigMgr::checkGatherConfig(
        const EnvAnimalExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // eax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *p_id; // rdi
  uint32_t id; // edx
  common::milog::MiLogStream *p_animal_id; // rdi
  uint32_t v36; // edx
  common::milog::MiLogStream *v37; // rdi
  uint32_t v38; // edx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  const char *v42; // rsi
  common::milog::MiLogStream *v43; // rcx
  data::EntityType entity_type; // edi
  char v45; // al
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rcx
  unsigned __int64 v50; // rdx
  int v51; // eax
  int v53; // [rsp+Ch] [rbp-4B4h]
  std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig> *__for_range; // [rsp+28h] [rbp-498h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false>::reference v56; // [rsp+30h] [rbp-490h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig> >::type *gather_config; // [rsp+40h] [rbp-480h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+48h] [rbp-478h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+50h] [rbp-470h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+60h] [rbp-460h]
  const data::IdCountConfig *id_count_config; // [rsp+68h] [rbp-458h]
  char v62[1104]; // [rsp+70h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 9 <unknown> 48 8 14 __for_begin:88 80 8 12 __for_end:88 112 8 9 <unknown> 144 8 15 __for"
                        "_begin:134 176 8 13 __for_end:134 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 3"
                        "2 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32"
                        " 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 <unknown> 976 48 22 gather_item_id_set:133";
  *(_QWORD *)(v3 + 16) = EnvAnimalExcelConfigMgr::checkGatherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862745] = -219021312;
  v5[536862746] = 62194;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862749] = -219021312;
  v5[536862750] = 62194;
  v5[536862752] = -202116109;
  __for_range = &this->animal_gather_config_map_;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::const_iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false> *)(v3 + 80)) )
  {
    v56 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::EnvAnimalGatherExcelConfig>(v56);
    gather_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::EnvAnimalGatherExcelConfig>(v56);
    if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gather_config->entity_type);
    }
    if ( gather_config->entity_type == Monster )
    {
      p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_config->animal_id);
      }
      monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                             p_monster_config_mgr,
                             gather_config->animal_id);
      if ( !monster_config_ptr )
      {
        *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 208, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 208),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          95);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 208),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])byte_1AC6D920);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &gather_config->animal_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
        *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
      v11 = (((_BYTE)monster_config_ptr - 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&monster_config_ptr->type);
      }
      if ( monster_config_ptr->type != MONSTER_ENV_ANIMAL )
      {
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          100);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])byte_1AC6D920);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &gather_config->animal_id);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v14, (const char (*)[28])byte_1AC6D960);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 272));
        *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_config->entity_type);
      }
      if ( gather_config->entity_type != Gadget )
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          127);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v25, (const char (*)[37])byte_1AC6DA60);
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gather_config->entity_type);
        }
        v27 = (__int64)data::enumValToStr(gather_config->entity_type);
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(v3 + 112, byte_1AC6DA60);
        *(_QWORD *)(v3 + 112) = v27;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)(v3 + 112));
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_config->animal_id);
      }
      gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                            p_gadget_config_mgr,
                            gather_config->animal_id);
      if ( !gadget_config_ptr )
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
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          109);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])byte_1AC6D9A0);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &gather_config->animal_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])byte_1AC59EA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
      v11 = (((_BYTE)gadget_config_ptr + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gadget_config_ptr->type);
      }
      if ( gadget_config_ptr->type != EnvAnimal )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          114);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 400),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v19, (const char (*)[19])byte_1AC6D9A0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &gather_config->animal_id);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v21, (const char (*)[19])byte_1AC6D9E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gather_config->escape_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_config->escape_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_config->escape_radius);
      }
      if ( !gather_config->escape_radius )
      {
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 464, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 464),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          121);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 464),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])byte_1AC6D9A0);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &gather_config->animal_id);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v24, (const char (*)[24])byte_1AC6DA20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
        *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_115;
      }
    }
    v28 = ((v3 + 976) >> 3) + 2147450880;
    *(_DWORD *)v28 = 0;
    *(_WORD *)(v28 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 976));
    __for_range_0 = &gather_config->gather_item_list;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v11);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 144) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v11);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 176) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 144),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 176)) )
      {
        v31 = 1;
        goto LABEL_105;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !id_count_config->id )
      {
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          139);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v29, (const char (*)[43])byte_1AC6DAC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &gather_config->animal_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v31 = 0;
        goto LABEL_105;
      }
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
      {
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          146);
        p_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 656),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_id = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        id = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_id = (common::milog::MiLogStream *)&gather_config->animal_id;
          __asan_report_load4(&gather_config->animal_id);
        }
        common::milog::MiLogStream::operator()(p_id, &byte_1AC6DB20, gather_config->animal_id, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v31 = 0;
        goto LABEL_105;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
      {
        *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 720, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 720),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          153);
        p_animal_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 720),
                        (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_animal_id = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        v36 = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_animal_id = (common::milog::MiLogStream *)&gather_config->animal_id;
          __asan_report_load4(&gather_config->animal_id);
        }
        common::milog::MiLogStream::operator()(p_animal_id, &byte_1AC6DBA0, gather_config->animal_id, v36);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
        *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v31 = 0;
        goto LABEL_105;
      }
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             (std::set<unsigned int> *)(v3 + 976),
             &id_count_config->id) )
      {
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          160);
        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          v37 = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        v38 = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v37 = (common::milog::MiLogStream *)&gather_config->animal_id;
          __asan_report_load4(&gather_config->animal_id);
        }
        common::milog::MiLogStream::operator()(v37, &byte_1AC6DC00, gather_config->animal_id, v38);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v31 = 0;
        goto LABEL_105;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, id_count_config->id, ITEM_LIMIT_ENV_ANIMAL) )
        break;
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 976), &id_count_config->id);
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 144));
    }
    *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 848) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 879) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 848, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 848),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
      "checkGatherConfig",
      167);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 848),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v39, (const char (*)[14])byte_1AC6DC60);
    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &gather_config->animal_id);
    v42 = byte_1AC6DCA0;
    v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v41, (const char (*)[11])byte_1AC6DCA0);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gather_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gather_config->entity_type);
    }
    entity_type = gather_config->entity_type;
    v45 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v45 != 0 && v45 <= 3 )
    {
      entity_type = v3 + 32;
      LOBYTE(v42) = v45 != 0;
      __asan_report_store4(v3 + 32, v42);
    }
    *(_DWORD *)(v3 + 32) = entity_type;
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 32));
    v47 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v46, (const char (*)[9])byte_1AC6DCE0);
    v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &id_count_config->id);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v48, (const char (*)[8])byte_1AC6BF40);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
    *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v31 = 0;
LABEL_105:
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v31 == 1 )
    {
      if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 976)) )
      {
        v53 = 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 912, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 912),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkGatherConfig",
          177);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gather_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gather_config->animal_id);
        }
        common::milog::MiLogStream::operator()(v49, &byte_1AC6DD20, gather_config->animal_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v53 = 0;
      }
    }
    else
    {
      v53 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 976));
    v10 = v53 == 1;
LABEL_115:
    v50 = ((v3 + 976) >> 3) + 2147450880;
    *(_DWORD *)v50 = -117901064;
    *(_WORD *)(v50 + 4) = -1800;
    if ( !v10 )
    {
      v51 = 0;
      goto LABEL_119;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false> *const)(v3 + 48));
  }
  v51 = 1;
LABEL_119:
  if ( v51 == 1 )
    v2 = 0;
  if ( v62 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v62);
  }
  return v2;
};

// Line 186: range 0000000013AA4EA6-0000000013AA61E8
int32_t __cdecl EnvAnimalExcelConfigMgr::checkWeightConfig(
        const EnvAnimalExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  data::EntityType entity_type; // edx
  __int64 animal_id; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const char *v14; // rsi
  common::milog::MiLogStream *v15; // rcx
  data::EntityType v16; // edi
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  const char *v21; // rsi
  common::milog::MiLogStream *v22; // rcx
  int v23; // edi
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  const char *v26; // rsi
  common::milog::MiLogStream *v27; // rcx
  data::EntityType v28; // edi
  char v29; // al
  common::milog::MiLogStream *v30; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v31; // ecx
  common::milog::MiLogStream *v32; // rax
  const char *v33; // rsi
  common::milog::MiLogStream *v34; // rcx
  int v35; // edi
  char v36; // al
  common::milog::MiLogStream *v37; // rax
  int v38; // edx
  common::milog::MiLogStream *v39; // rax
  const char *v40; // rsi
  common::milog::MiLogStream *v41; // rcx
  int v42; // edi
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  int32_t result; // eax
  uint32_t sum; // [rsp+18h] [rbp-308h]
  uint32_t valid; // [rsp+1Ch] [rbp-304h]
  data::EnvAnimalWeightExcelConfigMap *__for_range; // [rsp+20h] [rbp-300h]
  std::__detail::_Node_const_iterator<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false,false>::reference v50; // [rsp+28h] [rbp-2F8h]
  std::tuple_element<0,std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig> >::type *env_type; // [rsp+30h] [rbp-2F0h]
  std::tuple_element<1,const std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig> >::type *animal_config; // [rsp+38h] [rbp-2E8h]
  const std::vector<data::EnvironmentWeightType> *__for_range_0; // [rsp+40h] [rbp-2E0h]
  const data::EnvironmentWeightType *weight_config; // [rsp+48h] [rbp-2D8h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-2D0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v56; // [rsp+58h] [rbp-2C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *from; // [rsp+60h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *to; // [rsp+68h] [rbp-2B8h]
  char v59[688]; // [rsp+70h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 1"
                        "5 __for_begin:187 160 8 13 __for_end:187 192 8 15 __for_begin:196 224 8 13 __for_end:196 256 8 1"
                        "5 __for_begin:214 288 8 13 __for_end:214 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown"
                        "> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EnvAnimalExcelConfigMgr::checkWeightConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -202116109;
  __for_range = &this->env_animal_weight_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::end(__for_range);
  while ( 2 )
  {
    if ( !std::__detail::operator!=<std::pair<data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false> *)(v3 + 160)) )
    {
      v8 = 1;
      goto LABEL_99;
    }
    v50 = std::__detail::_Node_const_iterator<std::pair<data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false,false> *const)(v3 + 128));
    env_type = std::get<0ul,data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>(v50);
    animal_config = (std::tuple_element<1,const std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig> >::type *)std::get<1ul,data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>(v50);
    v6 = ((unsigned __int8)env_type & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)env_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(env_type);
    }
    if ( *env_type == ENVIRONMENT_NONE )
    {
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
        "checkWeightConfig",
        191);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v7, (const char (*)[44])byte_1AC6DF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v8 = 0;
      goto LABEL_99;
    }
    sum = 0;
    valid = 0;
    __for_range_0 = &animal_config->weight_vec;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<data::EnvironmentWeightType>::const_iterator *)(v3 + 192) = std::vector<data::EnvironmentWeightType>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::vector<data::EnvironmentWeightType>::const_iterator *)(v3 + 224) = std::vector<data::EnvironmentWeightType>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>(
              (const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *)(v3 + 192),
              (const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *)(v3 + 224)) )
      {
        v19 = 1;
        goto LABEL_86;
      }
      weight_config = __gnu_cxx::__normal_iterator<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>::operator*((const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&weight_config->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weight_config->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weight_config->weight);
      }
      sum += weight_config->weight;
      if ( *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&weight_config->entity_type);
      }
      if ( weight_config->entity_type != Monster && weight_config->entity_type != Gadget )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&weight_config->entity_type);
      }
      entity_type = weight_config->entity_type;
      if ( *(_BYTE *)(((unsigned __int64)&weight_config->animal_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weight_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weight_config->animal_id);
      }
      animal_id = weight_config->animal_id;
      if ( !EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(this, animal_id, entity_type) )
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
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "checkWeightConfig",
          204);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])byte_1AC6DC60);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &weight_config->animal_id);
        v14 = byte_1AC6DCA0;
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1AC6DCA0);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&weight_config->entity_type);
        }
        v16 = weight_config->entity_type;
        v17 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && v17 <= 3 )
        {
          v16 = v3 + 48;
          LOBYTE(v14) = v17 != 0;
          __asan_report_store4(v3 + 48, v14);
        }
        *(_DWORD *)(v3 + 48) = v16;
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1AC6BF40);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
        goto LABEL_86;
      }
      ++valid;
LABEL_61:
      __for_range_1 = &weight_config->alive_hour_map;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, animal_id);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, animal_id);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 288) = std::map<unsigned int,unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 288)) )
        {
          v38 = 1;
          goto LABEL_82;
        }
        v56 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
        from = std::get<0ul,unsigned int const,unsigned int>(v56);
        to = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v56);
        if ( *(_BYTE *)(((unsigned __int64)from >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)from & 7) + 3) >= *(_BYTE *)(((unsigned __int64)from >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(from);
        }
        v31 = *from;
        if ( *(_BYTE *)(((unsigned __int64)to >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)to & 7) + 3) >= *(_BYTE *)(((unsigned __int64)to >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(to);
        }
        if ( v31 >= *to || *to > 0x18 )
          break;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
      }
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
        "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
        "checkWeightConfig",
        218);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v33 = byte_1AC6DF80;
      v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])byte_1AC6DF80);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)env_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(env_type);
      }
      v35 = *env_type;
      v36 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
      if ( v36 != 0 && v36 <= 3 )
      {
        v35 = v3 + 96;
        LOBYTE(v33) = v36 != 0;
        __asan_report_store4(v3 + 96, v33);
      }
      *(_DWORD *)(v3 + 96) = v35;
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v37, (const char (*)[20])byte_1AC6E040);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v38 = 0;
LABEL_82:
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v38 != 1 )
      {
        v19 = 0;
        goto LABEL_86;
      }
      __gnu_cxx::__normal_iterator<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>::operator++((__gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *const)(v3 + 192));
    }
    if ( *(_BYTE *)(((unsigned __int64)&weight_config->animal_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weight_config->animal_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weight_config->animal_id);
    }
    if ( !weight_config->animal_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&weight_config->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weight_config->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weight_config->weight);
      }
      if ( !weight_config->weight )
      {
        animal_id = (((_BYTE)weight_config + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&weight_config->entity_type);
        }
        if ( weight_config->entity_type == None_10 )
          goto LABEL_61;
      }
    }
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
      "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
      "checkWeightConfig",
      211);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = byte_1AC6DF80;
    v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])byte_1AC6DF80);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)env_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(env_type);
    }
    v23 = *env_type;
    v24 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      v23 = v3 + 64;
      LOBYTE(v21) = v24 != 0;
      __asan_report_store4(v3 + 64, v21);
    }
    *(_DWORD *)(v3 + 64) = v23;
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
    v26 = byte_1AC6DFC0;
    v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])byte_1AC6DFC0);
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config->entity_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&weight_config->entity_type);
    }
    v28 = weight_config->entity_type;
    v29 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
    if ( v29 != 0 && v29 <= 3 )
    {
      v28 = v3 + 80;
      LOBYTE(v26) = v29 != 0;
      __asan_report_store4(v3 + 80, v26);
    }
    *(_DWORD *)(v3 + 80) = v28;
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v30, (const char (*)[14])byte_1AC6E000);
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_86:
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v8 = 0;
      goto LABEL_99;
    }
    if ( sum || !valid )
    {
      std::__detail::_Node_const_iterator<std::pair<data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false,false> *const)(v3 + 128));
      continue;
    }
    break;
  }
  *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 576, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 576),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
    "checkWeightConfig",
    225);
  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 576),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v40 = byte_1AC6DF80;
  v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])byte_1AC6DF80);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)env_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)env_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(env_type);
  }
  v42 = *env_type;
  v43 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    v42 = v3 + 112;
    LOBYTE(v40) = v43 != 0;
    __asan_report_store4(v3 + 112, v40);
  }
  *(_DWORD *)(v3 + 112) = v42;
  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 112));
  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v44, (const char (*)[32])byte_1AC6E080);
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
  v2 = -1;
  v8 = 0;
LABEL_99:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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
  }
  return result;
};

// Line 233: range 0000000013AA61EA-0000000013AA6DF8
__int64 __fastcall EnvAnimalExcelConfigMgr::randomAnimalIdAndType(
        const EnvAnimalExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t climate_type,
        data::EnvironmentType env_type,
        uint32_t hour,
        unsigned __int64 animal_id,
        data::EntityType *entity_type)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  data::EnvAnimalWeightExcelConfigMap *p_env_animal_weight_excel_config_map; // rdx
  data::EnvAnimalWeightExcelConfigMap *v11; // rdx
  char *v12; // rsi
  bool v13; // al
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  __int64 v17; // rsi
  char v18; // al
  char v19; // al
  const char *v20; // rsi
  common::milog::MiLogStream *v21; // rcx
  int v22; // edi
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  std::vector<data::EnvironmentWeightType>::size_type v25; // rsi
  std::vector<data::EnvironmentWeightType>::reference v26; // rax
  uint32_t v27; // ecx
  char v28; // dl
  std::vector<data::EnvironmentWeightType>::size_type v29; // rsi
  std::vector<data::EnvironmentWeightType>::reference v30; // rdx
  data::EntityType *p_entity_type; // rax
  data::EntityType v32; // ecx
  char v33; // dl
  __int64 result; // rax
  std::vector<data::EnvironmentWeightType> *__for_range; // [rsp+30h] [rbp-200h]
  const data::EnvironmentWeightType *config; // [rsp+38h] [rbp-1F8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-1F0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v43; // [rsp+48h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *from; // [rsp+50h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *to; // [rsp+58h] [rbp-1D8h]
  char v46[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v7 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(416LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "11 48 4 7 idx:269 64 4 9 <unknown> 80 4 12 env_type:232 96 8 8 iter:234 128 8 9 <unknown> 160 8 "
                        "15 __for_begin:242 192 8 13 __for_end:242 224 8 15 __for_begin:255 256 8 13 __for_end:255 288 24"
                        " 17 candidate_vec:241 352 32 9 <unknown>";
  *(_QWORD *)(v7 + 16) = EnvAnimalExcelConfigMgr::randomAnimalIdAndType;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -234556924;
  v9[536862723] = -218959360;
  v9[536862724] = -218959360;
  v9[536862725] = -218959360;
  v9[536862726] = -218959360;
  v9[536862727] = -218959360;
  v9[536862728] = -218959360;
  v9[536862729] = -234881024;
  v9[536862730] = -218959118;
  v9[536862732] = -202116109;
  *(_DWORD *)(v7 + 80) = env_type;
  p_env_animal_weight_excel_config_map = &this->env_animal_weight_excel_config_map;
  if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 96, txt_config_mgr);
  *(std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::const_iterator *)(v7 + 96) = std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::find(p_env_animal_weight_excel_config_map, (const std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::key_type *)(v7 + 80));
  v11 = &this->env_animal_weight_excel_config_map;
  if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 128, v7 + 80);
  *(std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::const_iterator *)(v7 + 128) = std::unordered_map<data::EnvironmentType,data::EnvAnimalWeightExcelConfig>::end(v11);
  v12 = (char *)(v7 + 128);
  v13 = std::__detail::operator==<std::pair<data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false> *)(v7 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false> *)(v7 + 128));
  *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v13 )
  {
    v14 = -1;
  }
  else
  {
    v15 = ((v7 + 288) >> 3) + 2147450880;
    *(_WORD *)v15 = 0;
    *(_BYTE *)(v15 + 2) = 0;
    std::vector<data::EnvironmentWeightType>::vector((std::vector<data::EnvironmentWeightType> *const)(v7 + 288));
    __for_range = &std::__detail::_Node_const_iterator<std::pair<data::EnvironmentType const,data::EnvAnimalWeightExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::EnvironmentType,data::EnvAnimalWeightExcelConfig>,false,false> *const)(v7 + 96))->second.weight_vec;
    *(_BYTE *)(((v7 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 160, v12);
    *(std::vector<data::EnvironmentWeightType>::const_iterator *)(v7 + 160) = std::vector<data::EnvironmentWeightType>::begin(__for_range);
    *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 192, v12);
    *(std::vector<data::EnvironmentWeightType>::const_iterator *)(v7 + 192) = std::vector<data::EnvironmentWeightType>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>(
              (const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *)(v7 + 160),
              (const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *)(v7 + 192)) )
    {
      config = __gnu_cxx::__normal_iterator<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>::operator*((const __gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *const)(v7 + 160));
      p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->animal_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->animal_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->animal_id);
      }
      v17 = config->animal_id;
      if ( !MonsterExcelConfigMgr::checkMonsterWeather(p_monster_config_mgr, v17, climate_type) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&config->animal_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->animal_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->animal_id);
      }
      v17 = config->animal_id;
      if ( !EnvAnimalExcelConfigMgr::checkEnvAnimalWeather(this, v17, climate_type) )
LABEL_22:
        v18 = 1;
      else
        v18 = 0;
      if ( !v18 )
      {
        if ( !std::map<unsigned int,unsigned int>::empty(&config->alive_hour_map) )
          goto LABEL_30;
        if ( *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->weight);
        }
        if ( config->weight )
          v19 = 1;
        else
LABEL_30:
          v19 = 0;
        if ( v19 )
        {
          std::vector<data::EnvironmentWeightType>::push_back(
            (std::vector<data::EnvironmentWeightType> *const)(v7 + 288),
            config);
        }
        else
        {
          __for_range_0 = &config->alive_hour_map;
          *(_BYTE *)(((v7 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v7 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v7 + 224, v17);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v7 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v7 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v7 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v7 + 256, v17);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v7 + 256) = std::map<unsigned int,unsigned int>::end(__for_range_0);
          while ( std::operator!=(
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v7 + 224),
                    (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v7 + 256)) )
          {
            v43 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v7 + 224));
            from = std::get<0ul,unsigned int const,unsigned int>(v43);
            to = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v43);
            if ( *(_BYTE *)(((unsigned __int64)from >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)from & 7) + 3) >= *(_BYTE *)(((unsigned __int64)from >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(from);
            }
            if ( hour >= *from )
            {
              if ( *(_BYTE *)(((unsigned __int64)to >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)to & 7) + 3) >= *(_BYTE *)(((unsigned __int64)to >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(to);
              }
              if ( hour < *to )
              {
                if ( *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&config->weight);
                }
                if ( config->weight )
                {
                  std::vector<data::EnvironmentWeightType>::push_back(
                    (std::vector<data::EnvironmentWeightType> *const)(v7 + 288),
                    config);
                  break;
                }
              }
            }
            std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v7 + 224));
          }
          *(_BYTE *)(((v7 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v7 + 256) >> 3) + 0x7FFF8000) = -8;
        }
      }
      __gnu_cxx::__normal_iterator<data::EnvironmentWeightType const*,std::vector<data::EnvironmentWeightType>>::operator++((__gnu_cxx::__normal_iterator<const data::EnvironmentWeightType*,std::vector<data::EnvironmentWeightType> > *const)(v7 + 160));
    }
    *(_BYTE *)(((v7 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<data::EnvironmentWeightType>::empty((const std::vector<data::EnvironmentWeightType> *const)(v7 + 288)) )
    {
      v14 = 0;
    }
    else
    {
      *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v7 + 48, v7 + 192);
      *(_DWORD *)(v7 + 48) = 0;
      if ( common::tools::RandomUtils::weightSelectOne<data::EnvironmentWeightType,unsigned int data::EnvironmentWeightType::*>(
             (const std::vector<data::EnvironmentWeightType> *)(v7 + 288),
             (uint32_t *)(v7 + 48),
             (unsigned int *)0x10,
             0) )
      {
        *(_DWORD *)(((v7 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v7 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v7 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 + 127) & 7) >= *(_BYTE *)(((v7 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v7 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v7 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/EnvAnimalExcelConfig.cpp",
          "randomAnimalIdAndType",
          272);
        v20 = "weightSelectOne env_type: ";
        v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                (common::milog::MiLogStream *const)(v7 + 352),
                (const char (*)[27])"weightSelectOne env_type: ");
        *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) = 4;
        v22 = *(_DWORD *)(v7 + 80);
        v23 = *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000);
        if ( v23 != 0 && v23 <= 3 )
        {
          v22 = v7 + 64;
          LOBYTE(v20) = v23 != 0;
          __asan_report_store4(v7 + 64, v20);
        }
        *(_DWORD *)(v7 + 64) = v22;
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v7 + 64));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" failed");
        *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 352));
        *(_DWORD *)(((v7 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v14 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v7 + 48);
        v25 = *(unsigned int *)(v7 + 48);
        v26 = std::vector<data::EnvironmentWeightType>::operator[](
                (std::vector<data::EnvironmentWeightType> *const)(v7 + 288),
                v25);
        if ( *(_BYTE *)(((unsigned __int64)&v26->animal_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v26->animal_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v26->animal_id);
        }
        v27 = v26->animal_id;
        v28 = *(_BYTE *)((animal_id >> 3) + 0x7FFF8000);
        if ( v28 != 0 && (char)((animal_id & 7) + 3) >= v28 )
        {
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(animal_id, v25);
        }
        *(_DWORD *)animal_id = v27;
        if ( *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v7 + 48);
        v29 = *(unsigned int *)(v7 + 48);
        v30 = std::vector<data::EnvironmentWeightType>::operator[](
                (std::vector<data::EnvironmentWeightType> *const)(v7 + 288),
                v29);
        p_entity_type = &v30->entity_type;
        if ( *(_BYTE *)(((unsigned __int64)p_entity_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_entity_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_entity_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_entity_type);
        }
        v32 = v30->entity_type;
        v33 = *(_BYTE *)(((unsigned __int64)entity_type >> 3) + 0x7FFF8000);
        if ( v33 != 0 && (char)(((unsigned __int8)entity_type & 7) + 3) >= v33 )
        {
          LOBYTE(v29) = v33 != 0;
          __asan_report_store4(entity_type, v29);
        }
        *entity_type = v32;
        v14 = 0;
      }
    }
    std::vector<data::EnvironmentWeightType>::~vector((std::vector<data::EnvironmentWeightType> *const)(v7 + 288));
  }
  result = v14;
  if ( v46 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 286: range 0000000013AA6DFA-0000000013AA6FFC
const data::EnvAnimalGatherExcelConfig *__cdecl EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig(
        const EnvAnimalExcelConfigMgr *const this,
        uint32_t animal_id,
        data::EntityType entity_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t Key; // edx
  char v7; // al
  __int64 v8; // rsi
  std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig> *p_animal_gather_config_map; // rdx
  std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig> *v10; // rdx
  bool v11; // al
  const data::EnvAnimalGatherExcelConfig *result; // rax
  char v15[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 key:287 64 8 8 iter:288 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EnvAnimalExcelConfigMgr::findEnvAnimalGatherConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  v8 = (unsigned int)entity_type;
  Key = getKey(animal_id, entity_type);
  v7 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 48, v8);
  *(_DWORD *)(v3 + 48) = Key;
  p_animal_gather_config_map = &this->animal_gather_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v8);
  *(std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::find(p_animal_gather_config_map, (const std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::key_type *)(v3 + 48));
  v10 = &this->animal_gather_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::EnvAnimalGatherExcelConfig>::end(v10);
  v11 = std::__detail::operator==<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false> *)(v3 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::EnvAnimalGatherExcelConfig>,false,false> *const)(v3 + 64))->second;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 298: range 0000000013AA6FFE-0000000013AA71E0
__int64 __fastcall EnvAnimalExcelConfigMgr::checkEnvAnimalWeather(
        const EnvAnimalExcelConfigMgr *const this,
        __int64 animal_id,
        uint32_t climate_type)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_exclude_weathers_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v10; // rax
  int v11; // eax
  char v13[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 animal_id:297 48 4 16 climate_type:297 64 8 8 iter:299 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = EnvAnimalExcelConfigMgr::checkEnvAnimalWeather;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = animal_id;
  *(_DWORD *)(v3 + 48) = climate_type;
  p_exclude_weathers_map = &this->exclude_weathers_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, animal_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_exclude_weathers_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->exclude_weathers_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 1LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    LOBYTE(v11) = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                    &v10->second,
                    (const unsigned int *)(v3 + 48));
    result = v11 ^ 1u;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

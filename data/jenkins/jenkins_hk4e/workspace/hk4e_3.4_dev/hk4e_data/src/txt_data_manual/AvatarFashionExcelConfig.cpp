// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarFashionExcelConfig.cpp

// Line 20: range 0000000012E74F1C-0000000012E75391
int32_t __cdecl AvatarFashionExcelConfigMgr::checkConfig(
        AvatarFashionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)AvatarFashionExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( AvatarFashionExcelConfigMgr::checkFlyclakExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"checkFlyclakExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( AvatarFashionExcelConfigMgr::checkCostumeExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v7,
      (const char (*)[31])"checkCostumeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( AvatarFashionExcelConfigMgr::checkReplaceCostumeExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
      "checkConfig",
      33);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v8,
      (const char (*)[38])"checkReplaceCostumeExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 40: range 0000000012E75392-0000000012E75758
int32_t __cdecl AvatarFashionExcelConfigMgr::rewriteConfig(
        AvatarFashionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  uint64_t v7; // rax
  uint64_t v8; // rax
  data::AvatarCostumeExcelConfigMap *__for_range; // [rsp+10h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *costume_config; // [rsp+28h] [rbp-C8h]
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 __for_begin:46 64 8 12 __for_end:46 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  if ( AvatarFashionExcelConfigMgr::rewriteAvatarDefaultCostume(this, txt_config_mgr) )
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
      "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
      "rewriteConfig",
      43);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"rewriteAvatarDefaultCostume failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = -1;
  }
  else
  {
    __for_range = &this->avatar_costume_excel_config_map;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 32, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 64)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 32));
      std::get<0ul,unsigned int const,data::AvatarCostumeExcelConfig>(__in);
      costume_config = std::get<1ul,unsigned int const,data::AvatarCostumeExcelConfig>(__in);
      v7 = AvatarExcelConfigMgr::calcPrefabPathHash(
             &costume_config->prefab_path,
             &costume_config->prefab_path_path_decorator);
      if ( *(_BYTE *)(((unsigned __int64)&costume_config->prefab_path_hash >> 3) + 0x7FFF8000) )
        v7 = __asan_report_store8(&costume_config->prefab_path_hash, &costume_config->prefab_path_path_decorator);
      costume_config->prefab_path_hash = v7;
      v8 = AvatarExcelConfigMgr::calcPrefabPathHash(
             &costume_config->prefab_remote_path,
             &costume_config->prefab_remote_path_path_decorator);
      if ( *(_BYTE *)(((unsigned __int64)&costume_config->prefab_path_remote_hash >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8(
               &costume_config->prefab_path_remote_hash,
               &costume_config->prefab_remote_path_path_decorator);
      costume_config->prefab_path_remote_hash = v8;
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 32));
    }
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 55: range 0000000012E7575A-0000000012E75C7F
int32_t __cdecl AvatarFashionExcelConfigMgr::checkFlyclakExcelConfig(
        AvatarFashionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t *p_material_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  data::AvatarFlycloakExcelConfigMap *__for_range; // [rsp+18h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarFlycloakExcelConfig> >::type *flycloak_id; // [rsp+28h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarFlycloakExcelConfig> >::type *flycloak_config; // [rsp+30h] [rbp-120h]
  const data::MaterialExcelConfig *material_confing_ptr; // [rsp+38h] [rbp-118h]
  char v19[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 14 __for_begin:56 64 8 12 __for_end:56 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = AvatarFashionExcelConfigMgr::checkFlyclakExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->avatar_flycloak_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarFlycloakExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::AvatarFlycloakExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarFlycloakExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::AvatarFlycloakExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false,false> *const)(v3 + 32));
    flycloak_id = std::get<0ul,unsigned int const,data::AvatarFlycloakExcelConfig>(v15);
    flycloak_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarFlycloakExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarFlycloakExcelConfig>(v15);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    p_material_id = &flycloak_config->material_id;
    if ( *(_BYTE *)(((unsigned __int64)p_material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_material_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(p_material_id);
    }
    material_confing_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                             p_material_config_mgr,
                             flycloak_config->material_id);
    if ( !material_confing_ptr )
    {
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
        "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
        "checkFlyclakExcelConfig",
        61);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v8, (const char (*)[40])byte_1AABC620);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, flycloak_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)material_confing_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&material_confing_ptr->material_type);
    }
    if ( material_confing_ptr->material_type != MATERIAL_FLYCLOAK )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarFlycloakExcelConfig>,false,false> *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 160, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 160),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
    "checkFlyclakExcelConfig",
    67);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v11, (const char (*)[50])byte_1AABC680);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, flycloak_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 76: range 0000000012E75C80-0000000012E76CA5
int32_t __cdecl AvatarFashionExcelConfigMgr::checkCostumeExcelConfig(
        AvatarFashionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_character_id; // rax
  __int64 v6; // rsi
  uint32_t character_id; // ecx
  char v8; // al
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // edx
  __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  unsigned int v27; // r14d
  MaterialExcelConfigMgr *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-2A4h]
  data::AvatarCostumeExcelConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::reference v37; // [rsp+28h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *costume_id; // [rsp+30h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *costume_config; // [rsp+38h] [rbp-288h]
  const data::MaterialExcelConfig *material_confing_ptr; // [rsp+48h] [rbp-278h]
  char v41[624]; // [rsp+50h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 12 avatar_id:82 48 8 14 __for_begin:79 80 8 12 __for_end:79 112 32 9 <unknown> 176 32 9 "
                        "<unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 48 32 "
                        "default_costume_avatar_id_set:78";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::checkCostumeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862737] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 496));
  __for_range = &this->avatar_costume_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 80)) )
  {
    v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 48));
    costume_id = std::get<0ul,unsigned int const,data::AvatarCostumeExcelConfig>(v37);
    costume_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarCostumeExcelConfig>(v37);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    p_character_id = &costume_config->character_id;
    v6 = (((_BYTE)costume_config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_character_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)costume_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_character_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(p_character_id);
    }
    character_id = costume_config->character_id;
    v8 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v2 + 32, v6);
    }
    *(_DWORD *)(v2 + 32) = character_id;
    v9 = *(unsigned int *)(v2 + 32);
    if ( data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(&txt_config_mgr->avatar_config_mgr, v9) )
    {
      v14 = 1;
    }
    else
    {
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
        "checkCostumeExcelConfig",
        86);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 112),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v10, (const char (*)[44])byte_1AABC820);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, costume_id);
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" avatar id: ");
      v9 = v2 + 32;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(char *)(((unsigned __int64)&costume_config->is_default >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&costume_config->is_default, v9, &costume_config->is_default);
      if ( !costume_config->is_default )
        ret = -1;
      v14 = 0;
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v14 == 1 )
    {
      if ( *(char *)(((unsigned __int64)&costume_config->is_default >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&costume_config->is_default, v9, &costume_config->is_default);
      if ( costume_config->is_default )
      {
        v9 = ((_BYTE)costume_config + 25) & 7;
        v15 = (*(_BYTE *)(((unsigned __int64)&costume_config->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&costume_config->is_default_unlock >> 3) + 0x7FFF8000));
        if ( (_BYTE)v15 )
          __asan_report_load1(&costume_config->is_default_unlock, v9, v15);
        if ( costume_config->is_default_unlock )
        {
          *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 176, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 176),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
            "checkCostumeExcelConfig",
            97);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 176),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v16, (const char (*)[44])byte_1AABC8C0);
          v9 = (__int64)costume_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, costume_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
          *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&costume_config->item_id);
      }
      if ( costume_config->item_id )
      {
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&costume_config->item_id);
        }
        material_confing_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                 p_material_config_mgr,
                                 costume_config->item_id);
        if ( material_confing_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)material_confing_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_confing_ptr->material_type >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&material_confing_ptr->material_type);
          }
          if ( material_confing_ptr->material_type == MATERIAL_COSTUME )
          {
            if ( *(_BYTE *)(((unsigned __int64)costume_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)costume_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)costume_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(costume_id);
            }
            v27 = *costume_id;
            v28 = &txt_config_mgr->material_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&costume_config->item_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&costume_config->item_id);
            }
            if ( v27 != MaterialExcelConfigMgr::findCostumeIdByCostumeMaterial(v28, costume_config->item_id) )
            {
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 432, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 432),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
                "checkCostumeExcelConfig",
                127);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 432),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v30 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(
                      v29,
                      (const char (*)[93])byte_1AABCA80);
              v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, costume_id);
              v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v31,
                      (const char (*)[11])" item_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &costume_config->item_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
              *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 113) & 7) >= *(_BYTE *)(((v2 + 399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
              "checkCostumeExcelConfig",
              121);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v25,
                    (const char (*)[63])byte_1AABCA20);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, costume_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
            *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
            "checkCostumeExcelConfig",
            114);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v21, (const char (*)[38])byte_1AABC980);
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, costume_id);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" item_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &costume_config->item_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&costume_config->is_default >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&costume_config->is_default, v9, &costume_config->is_default);
        if ( !costume_config->is_default )
        {
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 16 + 31) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
            "checkCostumeExcelConfig",
            104);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v18, (const char (*)[50])byte_1AABC920);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, costume_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 496));
  result = ret;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
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
  return result;
};

// Line 137: range 0000000012E76CA6-0000000012E7743D
int32_t __cdecl AvatarFashionExcelConfigMgr::checkReplaceCostumeExcelConfig(
        AvatarFashionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  AvatarFashionExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t character_id; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-16Ch]
  data::AvatarReplaceCostumeExcelConfigMap *__for_range; // [rsp+18h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false,false>::reference v20; // [rsp+20h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig> >::type *avatar_id; // [rsp+28h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig> >::type *replace_costume_config; // [rsp+30h] [rbp-150h]
  data::AvatarCostumeExcelConfig *avatar_costume_config_ptr; // [rsp+38h] [rbp-148h]
  char v24[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:139 64 8 13 __for_end:139 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::checkReplaceCostumeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->avatar_replace_costume_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarReplaceCostumeExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AvatarReplaceCostumeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarReplaceCostumeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarReplaceCostumeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false> *)(v2 + 64)) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false,false> *const)(v2 + 32));
    avatar_id = std::get<0ul,unsigned int const,data::AvatarReplaceCostumeExcelConfig>(v20);
    replace_costume_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarReplaceCostumeExcelConfig>(v20);
    p_avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_id);
    }
    if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, *avatar_id) )
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
        "checkReplaceCostumeExcelConfig",
        143);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             v6,
             (const char (*)[41])"findAvatarExcelConfig fails, avatar_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, avatar_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)&replace_costume_config->replace_costume_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)replace_costume_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&replace_costume_config->replace_costume_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&replace_costume_config->replace_costume_id);
    }
    avatar_costume_config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(
                                  v8,
                                  replace_costume_config->replace_costume_id);
    if ( avatar_costume_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_costume_config_ptr->character_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)avatar_costume_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_costume_config_ptr->character_id >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&avatar_costume_config_ptr->character_id);
      }
      character_id = avatar_costume_config_ptr->character_id;
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(avatar_id);
      }
      if ( character_id != *avatar_id )
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
          "checkReplaceCostumeExcelConfig",
          155);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v12,
                (const char (*)[41])"avatar_costume_config_ptr->character_id[");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &avatar_costume_config_ptr->character_id);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v14,
                (const char (*)[41])"] is not equal to avatar_id, avatar_id:[");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, avatar_id);
        common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])"]");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
        "checkReplaceCostumeExcelConfig",
        149);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              v9,
              (const char (*)[49])"findAvatarCostumeExcelConfig fails, costume_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        &replace_costume_config->replace_costume_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarReplaceCostumeExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 164: range 0000000012E7743E-0000000012E77D24
int32_t __cdecl AvatarFashionExcelConfigMgr::rewriteAvatarDefaultCostume(
        AvatarFashionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *v5; // r8
  __int64 v6; // rsi
  uint32_t character_id; // ecx
  char v8; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  uint32_t *p_character_id; // rsi
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  data::AvatarCostumeExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *costume_id; // [rsp+30h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *costume_config; // [rsp+38h] [rbp-168h]
  char v34[352]; // [rsp+40h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 avatar_id:170 64 8 15 __for_begin:166 96 8 13 __for_end:166 128 32 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::rewriteAvatarDefaultCostume;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->avatar_costume_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::AvatarCostumeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false> *)(v2 + 96)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 64));
    costume_id = std::get<0ul,unsigned int const,data::AvatarCostumeExcelConfig>(v31);
    costume_config = (std::tuple_element<1,const std::pair<unsigned int const,data::AvatarCostumeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AvatarCostumeExcelConfig>(v31);
    if ( *(char *)(((unsigned __int64)&costume_config->is_default >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&costume_config->is_default, v2 + 96, &costume_config->is_default);
    if ( costume_config->is_default )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v6 = (((_BYTE)costume_config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&costume_config->character_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)costume_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&costume_config->character_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&costume_config->character_id);
      }
      character_id = costume_config->character_id;
      v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(v6) = v8 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = character_id;
      v9 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
             &this->avatar_default_costume_map,
             (unsigned int *)(v2 + 48),
             costume_id,
             (unsigned int *)&this->avatar_default_costume_map,
             v5);
      if ( !v9.second )
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
          4u,
          "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
          "rewriteAvatarDefaultCostume",
          173);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 128),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v10, (const char (*)[41])byte_1AABCE40);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, costume_id);
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" avatar id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    }
    v14 = ((_BYTE)costume_config + 25) & 7;
    v15 = (*(_BYTE *)(((unsigned __int64)&costume_config->is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&costume_config->is_default_unlock >> 3) + 0x7FFF8000));
    if ( (_BYTE)v15 )
      __asan_report_load1(&costume_config->is_default_unlock, v14, v15);
    if ( costume_config->is_default_unlock )
      std::set<unsigned int>::insert(&this->avatar_default_unlock_costume_set, costume_id);
    v16 = ((_BYTE)costume_config + 52) & 7;
    v17 = (*(_BYTE *)(((unsigned __int64)&costume_config->is_domestic_wear_by_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&costume_config->is_domestic_wear_by_default >> 3) + 0x7FFF8000));
    if ( (_BYTE)v17 )
      __asan_report_load1(&costume_config->is_domestic_wear_by_default, v16, v17);
    if ( costume_config->is_domestic_wear_by_default )
    {
      p_character_id = &costume_config->character_id;
      v19 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->avatar_default_wear_costume_map,
              &costume_config->character_id,
              costume_id,
              (const unsigned int *)&this->avatar_default_wear_costume_map,
              v5);
      if ( !v19.second )
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
          4u,
          "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
          "rewriteAvatarDefaultCostume",
          185);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v20, (const char (*)[69])byte_1AABCEA0);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &costume_config->character_id);
        v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])", costume_id: ");
        p_character_id = costume_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, costume_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(char *)(((unsigned __int64)&costume_config->is_default >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&costume_config->is_default, p_character_id, &costume_config->is_default);
      if ( costume_config->is_default )
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
          4u,
          "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
          "rewriteAvatarDefaultCostume",
          191);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(v24, (const char (*)[86])byte_1AABCF60);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &costume_config->character_id);
        v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])", costume_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, costume_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AvatarCostumeExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 200: range 0000000012E77D26-0000000012E77F8A
__int64 __fastcall AvatarFashionExcelConfigMgr::getAvatarIdByCostumeId(
        const AvatarFashionExcelConfigMgr *const this,
        uint32_t costume_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  const data::AvatarCostumeExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 costume_id:199 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::getAvatarIdByCostumeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = costume_id;
  config_ptr = data::AvatarFashionExcelConfigMgrBase::findAvatarCostumeExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->character_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->character_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->character_id);
    }
    result = config_ptr->character_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/AvatarFashionExcelConfig.cpp",
      "getAvatarIdByCostumeId",
      204);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           v5,
           (const char (*)[50])"findAvatarCostumeExcelConfig failed, costume_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 211: range 0000000012E77F8C-0000000012E78187
__int64 __fastcall AvatarFashionExcelConfigMgr::getAvatarDefaultCostumeId(
        const AvatarFashionExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_avatar_default_costume_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:210 64 8 8 iter:212 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::getAvatarDefaultCostumeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_default_costume_map = &this->avatar_default_costume_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_avatar_default_costume_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->avatar_default_costume_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 221: range 0000000012E78188-0000000012E7819B
const std::set<unsigned int> *__cdecl AvatarFashionExcelConfigMgr::getDefaultUnlockCostumeSet(
        const AvatarFashionExcelConfigMgr *const this)
{
  return &this->avatar_default_unlock_costume_set;
};

// Line 226: range 0000000012E7819C-0000000012E78397
__int64 __fastcall AvatarFashionExcelConfigMgr::getAvatarDefaultWearCostumeId(
        const AvatarFashionExcelConfigMgr *const this,
        __int64 avatar_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_avatar_default_wear_costume_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 avatar_id:225 64 8 8 iter:227 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = AvatarFashionExcelConfigMgr::getAvatarDefaultWearCostumeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = avatar_id;
  p_avatar_default_wear_costume_map = &this->avatar_default_wear_costume_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, avatar_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_avatar_default_wear_costume_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->avatar_default_wear_costume_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v11 == (char *)v2 )
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

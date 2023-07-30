// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RoutineExcelConfig.cpp

// Line 18: range 000000000CAD26FE-000000000CAD290A
int32_t __cdecl RoutineExcelConfigMgr::rewriteConfig(RoutineExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = RoutineExcelConfigMgr::rewriteRoutineTypeConfig(this, txt_config_mgr);
  ret = RoutineExcelConfigMgr::rewriteRoutineDetailConfig(this, txt_config_mgr) | reta;
  if ( ret )
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
      "./src/txt_data_manual/RoutineExcelConfig.cpp",
      "rewriteConfig",
      25);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v9 == (char *)v2 )
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

// Line 31: range 000000000CAD290C-000000000CAD2B18
int32_t __cdecl RoutineExcelConfigMgr::checkConfig(
        RoutineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = RoutineExcelConfigMgr::checkRoutineTypeConfig(this, txt_config_mgr);
  ret = RoutineExcelConfigMgr::checkRoutineDetailConfig(this, txt_config_mgr) | reta;
  if ( ret )
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
      "./src/txt_data_manual/RoutineExcelConfig.cpp",
      "checkConfig",
      38);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v9 == (char *)v2 )
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

// Line 44: range 000000000CAD2B1A-000000000CAD2B2C
int32_t __cdecl RoutineExcelConfigMgr::rewriteRoutineTypeConfig(
        RoutineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 49: range 000000000CAD2B2E-000000000CAD3487
int32_t __cdecl RoutineExcelConfigMgr::checkRoutineTypeConfig(
        const RoutineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  RefreshPolicyExcelConfigMgr *p_refresh_policy_config_mgr; // rcx
  uint32_t *p_refresh_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,std::vector<unsigned int>> *p_backup_routine_map; // rcx
  __int64 v16; // rsi
  std::map<unsigned int,std::vector<unsigned int>> *v17; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::pointer v18; // rax
  std::vector<unsigned int>::size_type v19; // rcx
  char v20; // dl
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::RoutineTypeExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_const_iterator<std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig>,false,false>::reference v28; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig> >::type *routine_type; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig> >::type *type_config; // [rsp+38h] [rbp-1B8h]
  char v31[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 9 <unknown> 64 8 14 __for_begin:51 96 8 12 __for_end:51 128 8 7 iter:65 160 8 9 <unknown>"
                        " 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::checkRoutineTypeConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->routine_type_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<data::GeneralRoutineType,data::RoutineTypeExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<data::GeneralRoutineType,data::RoutineTypeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<data::GeneralRoutineType,data::RoutineTypeExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<data::GeneralRoutineType,data::RoutineTypeExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::GeneralRoutineType const,data::RoutineTypeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig>,false> *)(v2 + 96)) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<data::GeneralRoutineType const,data::RoutineTypeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig>,false,false> *const)(v2 + 64));
    routine_type = std::get<0ul,data::GeneralRoutineType const,data::RoutineTypeExcelConfig>(v28);
    type_config = (std::tuple_element<1,const std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig> >::type *)std::get<1ul,data::GeneralRoutineType const,data::RoutineTypeExcelConfig>(v28);
    p_refresh_policy_config_mgr = &txt_config_mgr->refresh_policy_config_mgr;
    p_refresh_id = &type_config->refresh_id;
    if ( *(_BYTE *)(((unsigned __int64)p_refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_refresh_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_refresh_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_refresh_id);
    }
    if ( data::RefreshPolicyExcelConfigMgrBase::findRefreshPolicyExcelConfig(
           p_refresh_policy_config_mgr,
           type_config->refresh_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&type_config->refresh_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)type_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&type_config->refresh_num >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&type_config->refresh_num);
      }
      if ( type_config->refresh_num )
      {
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        p_backup_routine_map = &this->backup_routine_map;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)routine_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(routine_type);
        }
        v16 = *(unsigned int *)routine_type;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48, v16);
        *(_DWORD *)(v2 + 48) = v16;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v16);
        *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                            p_backup_routine_map,
                                                                                            (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        v17 = &this->backup_routine_map;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v2 + 48);
        *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 160) = std::map<unsigned int,std::vector<unsigned int>>::end(v17);
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 128),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 160)) )
        {
          goto LABEL_34;
        }
        v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 128));
        v19 = std::vector<unsigned int>::size(&v18->second);
        if ( *(_BYTE *)(((unsigned __int64)&type_config->refresh_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)type_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&type_config->refresh_num >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&type_config->refresh_num);
        }
        if ( v19 < type_config->refresh_num )
LABEL_34:
          v20 = 1;
        else
          v20 = 0;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v20 )
        {
          ret = -1;
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
            4u,
            "./src/txt_data_manual/RoutineExcelConfig.cpp",
            "checkRoutineTypeConfig",
            69);
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])"routineType:");
          v23 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
                  v22,
                  routine_type);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v23, (const char (*)[40])byte_1A117CC0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/RoutineExcelConfig.cpp",
          "checkRoutineTypeConfig",
          62);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])"routineType:");
        v14 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
                v13,
                routine_type);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v14, (const char (*)[23])byte_1A117C80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/RoutineExcelConfig.cpp",
        "checkRoutineTypeConfig",
        56);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"routineType:");
      v9 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
             v8,
             routine_type);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])byte_1A117C00);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &type_config->refresh_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<data::GeneralRoutineType const,data::RoutineTypeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::GeneralRoutineType,data::RoutineTypeExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 77: range 000000000CAD3488-000000000CAD3B72
int32_t __cdecl RoutineExcelConfigMgr::rewriteRoutineDetailConfig(
        RoutineExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::vector<unsigned int>> *p_backup_routine_map; // rcx
  __int64 routine_type; // rsi
  std::vector<unsigned int> *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-158h]
  uint32_t snow_mountain_tag; // [rsp+1Ch] [rbp-154h]
  data::RoutineDetailExcelConfigMap *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-148h]
  const std::vector<unsigned int>::value_type *routine_id; // [rsp+30h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,data::RoutineDetailExcelConfig> >::type *routine_config; // [rsp+38h] [rbp-138h]
  char v23[304]; // [rsp+40h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 9 <unknown> 64 8 14 __for_begin:79 96 8 12 __for_end:79 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RoutineExcelConfigMgr::rewriteRoutineDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  snow_mountain_tag = ConstValueExcelConfigMgr::getSnowMountainRoutineSpecialTag(&txt_config_mgr->const_value_config_mgr);
  __for_range = &this->routine_detail_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false> *)(v3 + 96)) )
    {
      v12 = 1;
      goto LABEL_33;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false> *const)(v3 + 64));
    routine_id = std::get<0ul,unsigned int const,data::RoutineDetailExcelConfig>(__in);
    routine_config = std::get<1ul,unsigned int const,data::RoutineDetailExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&routine_config->is_backup >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&routine_config->is_backup, v3 + 96, &routine_config->is_backup);
    if ( !routine_config->is_backup )
      break;
    p_backup_routine_map = &this->backup_routine_map;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_config->routine_type);
    }
    routine_type = (unsigned int)routine_config->routine_type;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, routine_type);
    *(_DWORD *)(v3 + 48) = routine_type;
    v8 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
           p_backup_routine_map,
           (std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    std::vector<unsigned int>::push_back(v8, routine_id);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&routine_config->tag >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->tag >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_config->tag);
    }
    if ( routine_config->tag )
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RoutineExcelConfig.cpp",
        "rewriteRoutineDetailConfig",
        87);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])"routine_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, routine_id);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v11, (const char (*)[46])byte_1A117E20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v12 = 0;
      goto LABEL_33;
    }
LABEL_31:
    common::tools::MiscUtils::removeEmptyElement<data::RoutineCondContent,data::RoutineCondType data::RoutineCondContent::*>(
      &routine_config->cond_vec,
      (data::RoutineCondType *)8);
    common::tools::MiscUtils::removeEmptyElement<data::RoutineActionContent,data::RoutineActionype data::RoutineActionContent::*>(
      &routine_config->action_vec,
      (data::RoutineActionype *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false> *const)(v3 + 64));
  }
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config->routine_type);
  }
  if ( routine_config->routine_type == ROUTINE_SNOW_MOUNTAIN )
    ret = RoutineExcelConfigMgr::rewriteSnowMountainRoutines(this, routine_config, snow_mountain_tag);
  if ( !ret )
    goto LABEL_31;
  *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/RoutineExcelConfig.cpp",
    "rewriteRoutineDetailConfig",
    106);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])"routine_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, routine_id);
  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" rewrite fails");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v12 = 0;
LABEL_33:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 000000000CAD3B74-000000000CAD3C10
int32_t __cdecl RoutineExcelConfigMgr::rewriteSnowMountainRoutines(
        RoutineExcelConfigMgr *const this,
        const data::RoutineDetailExcelConfig *routine_config,
        uint32_t tag)
{
  if ( *(_BYTE *)(((unsigned __int64)&routine_config->tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->tag >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config->tag);
  }
  if ( tag == routine_config->tag )
    std::vector<unsigned int>::push_back(&this->snow_mountain_specail_tag_vec, &routine_config->routine_id);
  else
    std::vector<unsigned int>::push_back(&this->snow_mountain_normal_tag_vec, &routine_config->routine_id);
  return 0;
};

// Line 131: range 000000000CAD3C12-000000000CAD4B89
int32_t __cdecl RoutineExcelConfigMgr::checkRoutineDetailConfig(
        RoutineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 group_id; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int v24; // r14d
  uint32_t *p_group_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  unsigned int *v27; // rdx
  char v28; // cl
  __int64 reward_id; // rsi
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const data::RoutineCondContent *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-298h]
  data::ItemLimitType limit_type; // [rsp+1Ch] [rbp-294h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-290h]
  data::RoutineDetailExcelConfigMap *__for_range; // [rsp+28h] [rbp-288h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::reference v45; // [rsp+30h] [rbp-280h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoutineDetailExcelConfig> >::type *routine_id; // [rsp+38h] [rbp-278h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoutineDetailExcelConfig> >::type *routine_config; // [rsp+40h] [rbp-270h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+48h] [rbp-268h]
  const std::vector<data::RoutineCondContent> *__for_range_0; // [rsp+50h] [rbp-260h]
  char v50[592]; // [rsp+60h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 15 __for_begin:135 64 8 13 __for_end:135 96 8 15 __for_begin:174 128 8 13 __for_end:174 "
                        "160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 4"
                        "80 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::checkRoutineDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  ret = 0;
  __for_range = &this->routine_detail_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoutineDetailExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false> *)(v2 + 64)) )
  {
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false> *const)(v2 + 32));
    routine_id = std::get<0ul,unsigned int const,data::RoutineDetailExcelConfig>(v45);
    routine_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoutineDetailExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoutineDetailExcelConfig>(v45);
    if ( *(_BYTE *)(((unsigned __int64)&routine_config->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&routine_config->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&routine_config->group_id);
    }
    group_id = routine_config->group_id;
    group_info_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, group_id);
    if ( group_info_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&group_info_config_ptr->is_dynamic_load, group_id, &group_info_config_ptr->is_dynamic_load);
      if ( !group_info_config_ptr->is_dynamic_load )
      {
        ret = -1;
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
          "./src/txt_data_manual/RoutineExcelConfig.cpp",
          "checkRoutineDetailConfig",
          148);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"group_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &routine_config->group_id);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v11, (const char (*)[33])byte_1A118020);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)group_info_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&group_info_config_ptr->business_info);
        }
        if ( group_info_config_ptr->business_info.type == 6 )
        {
          v15 = std::map<unsigned int,unsigned int>::operator[](&this->group_to_routine_map, &routine_config->group_id);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          if ( *v16 )
          {
            ret = -1;
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
              4u,
              "./src/txt_data_manual/RoutineExcelConfig.cpp",
              "checkRoutineDetailConfig",
              160);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v17,
                    (const char (*)[12])"routine_id:");
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, routine_id);
            v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])",");
            v21 = std::map<unsigned int,unsigned int>::operator[](
                    &this->group_to_routine_map,
                    &routine_config->group_id);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
            v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v22,
                    (const char (*)[19])byte_1A118100);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &routine_config->group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(routine_id);
            }
            v24 = *routine_id;
            p_group_id = &routine_config->group_id;
            v26 = std::map<unsigned int,unsigned int>::operator[](
                    &this->group_to_routine_map,
                    &routine_config->group_id);
            v27 = v26;
            v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
            if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
            {
              LOBYTE(p_group_id) = v28 != 0;
              __asan_report_store4(v26, p_group_id);
            }
            *v27 = v24;
            if ( *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)routine_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&routine_config->routine_type);
            }
            limit_type = RoutineExcelConfigMgr::getLimitTypeFromRoutineType(this, routine_config->routine_type);
            if ( *(_BYTE *)(((unsigned __int64)&routine_config->reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)routine_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->reward_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&routine_config->reward_id);
            }
            reward_id = routine_config->reward_id;
            if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                    txt_config_mgr,
                                    reward_id,
                                    limit_type) != 1 )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 416, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 416),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/RoutineExcelConfig.cpp",
                "checkRoutineDetailConfig",
                169);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v30,
                      (const char (*)[12])"routine_id:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, routine_id);
              v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v32,
                      (const char (*)[20])byte_1A118140);
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      &routine_config->reward_id);
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])byte_1A117C40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
            }
            else
            {
              __for_range_0 = &routine_config->cond_vec;
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 96, reward_id);
              *(std::vector<data::RoutineCondContent>::const_iterator *)(v2 + 96) = std::vector<data::RoutineCondContent>::begin(__for_range_0);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 128, reward_id);
              *(std::vector<data::RoutineCondContent>::const_iterator *)(v2 + 128) = std::vector<data::RoutineCondContent>::end(__for_range_0);
              while ( __gnu_cxx::operator!=<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>(
                        (const __gnu_cxx::__normal_iterator<const data::RoutineCondContent*,std::vector<data::RoutineCondContent> > *)(v2 + 96),
                        (const __gnu_cxx::__normal_iterator<const data::RoutineCondContent*,std::vector<data::RoutineCondContent> > *)(v2 + 128)) )
              {
                v35 = __gnu_cxx::__normal_iterator<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>::operator*((const __gnu_cxx::__normal_iterator<const data::RoutineCondContent*,std::vector<data::RoutineCondContent> > *const)(v2 + 96));
                if ( RoutineExcelConfigMgr::checkRoutineCond(this, txt_config_mgr, v35) )
                {
                  ret = -1;
                  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 480, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 480),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/RoutineExcelConfig.cpp",
                    "checkRoutineDetailConfig",
                    179);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 480),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v36,
                          (const char (*)[12])"routine_id:");
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, routine_id);
                  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v38,
                    (const char (*)[23])byte_1A118180);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                  *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
                }
                __gnu_cxx::__normal_iterator<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>::operator++((__gnu_cxx::__normal_iterator<const data::RoutineCondContent*,std::vector<data::RoutineCondContent> > *const)(v2 + 96));
              }
              *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            }
          }
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/RoutineExcelConfig.cpp",
            "checkRoutineDetailConfig",
            154);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])"group_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &routine_config->group_id);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v14, (const char (*)[31])byte_1A1180C0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/RoutineExcelConfig.cpp",
        "checkRoutineDetailConfig",
        142);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])"group_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &routine_config->group_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoutineDetailExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 191: range 000000000CAD4B8A-000000000CAD4E3E
int32_t __cdecl RoutineExcelConfigMgr::checkRoutineCond(
        const RoutineExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::RoutineCondContent *cond)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  data::RoutineCondType type; // eax
  int32_t result; // eax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RoutineExcelConfigMgr::checkRoutineCond;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type )
  {
    if ( type != ROUTINE_COND_QUEST_FINISH )
      goto LABEL_16;
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&cond->param1);
    }
    if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, cond->param1) )
    {
LABEL_16:
      result = 0;
    }
    else
    {
      if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/RoutineExcelConfig.cpp",
        "checkRoutineCond",
        200);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 32),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"QuestId:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &cond->param1);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
  if ( v13 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 212: range 000000000CAD4E40-000000000CAD505F
const data::RoutineTypeExcelConfig *__fastcall RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
        const RoutineExcelConfigMgr *const this,
        uint32_t routine_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const data::RoutineTypeExcelConfig *result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 routine_type:211 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::findRoutineTypeExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = routine_type;
  if ( !data::isValidGeneralRoutineType(*(_DWORD *)(v2 + 48)) )
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
      3u,
      "./src/txt_data_manual/RoutineExcelConfig.cpp",
      "findRoutineTypeExcelConfig",
      215);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[14])"routine_type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  else
  {
    result = data::RoutineExcelConfigMgrBase::findRoutineTypeExcelConfig(this, *(unsigned int *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 222: range 000000000CAD5060-000000000CAD525B
__int64 __fastcall RoutineExcelConfigMgr::findRoutineIdByGroup(
        const RoutineExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_group_to_routine_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:221 64 8 8 iter:223 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::findRoutineIdByGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_routine_map = &this->group_to_routine_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_group_to_routine_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_to_routine_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 232: range 000000000CAD525C-000000000CAD5450
__int64 __fastcall RoutineExcelConfigMgr::getLimitTypeFromRoutineType(
        const RoutineExcelConfigMgr *const this,
        uint32_t routine_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 routine_type:231 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RoutineExcelConfigMgr::getLimitTypeFromRoutineType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = routine_type;
  if ( *(_DWORD *)(v2 + 48) == 1 )
  {
    result = 88LL;
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
      "./src/txt_data_manual/RoutineExcelConfig.cpp",
      "getLimitTypeFromRoutineType",
      241);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[40])"Not support ItemLimitType routine_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

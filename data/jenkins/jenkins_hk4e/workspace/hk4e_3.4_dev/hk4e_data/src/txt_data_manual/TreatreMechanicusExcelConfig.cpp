// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TreatreMechanicusExcelConfig.cpp

// Line 18: range 000000000CB223B0-000000000CB22657
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v14[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = TreatreMechanicusExcelConfigMgr::rewriteBuildingConfig(this, txt_config_mgr);
  retb = TreatreMechanicusExcelConfigMgr::rewriteChanicusConfig(this, txt_config_mgr) | reta;
  retc = TreatreMechanicusExcelConfigMgr::rewriteSequenceConfig(this, txt_config_mgr) | retb;
  retd = TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig(this, txt_config_mgr) | retc;
  rete = TreatreMechanicusExcelConfigMgr::rewriteDifficultConfig(this, txt_config_mgr) | retd;
  retf = TreatreMechanicusExcelConfigMgr::rewriteCardConfig(this, txt_config_mgr) | rete;
  ret = TreatreMechanicusExcelConfigMgr::rewriteWatcherConfig(this, txt_config_mgr) | retf;
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
      "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
      "rewriteConfig",
      29);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 35: range 000000000CB22658-000000000CB228E0
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = TreatreMechanicusExcelConfigMgr::checkBuildingConfig(this, txt_config_mgr);
  retb = TreatreMechanicusExcelConfigMgr::checkMechanicusConfig(this, txt_config_mgr) | reta;
  retc = TreatreMechanicusExcelConfigMgr::checkSequenceConfig(this, txt_config_mgr) | retb;
  retd = TreatreMechanicusExcelConfigMgr::checkGearLevelupConfig(this, txt_config_mgr) | retc;
  rete = TreatreMechanicusExcelConfigMgr::checkDifficultConfig(this, txt_config_mgr) | retd;
  ret = TreatreMechanicusExcelConfigMgr::checkWatcherConfig(this, txt_config_mgr) | rete;
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
      "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
      "checkConfig",
      45);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])"rewriteConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 51: range 000000000CB228E2-000000000CB23275
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkBuildingConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int v22; // r14d
  uint32_t *p_gadget_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  unsigned int *v25; // rdx
  char v26; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::MechanicBuildingExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::reference v31; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicBuildingExcelConfig> >::type *id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicBuildingExcelConfig> >::type *building_config; // [rsp+38h] [rbp-1B8h]
  char v34[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 8 14 __for_begin:54 80 8 12 __for_end:54 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <un"
                        "known> 304 48 21 gadget_to_gear_map:52";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkBuildingConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
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
  v4[536862731] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 304));
  ret = 0;
  __for_range = &this->mechanic_building_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false> *)(v2 + 80)) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::MechanicBuildingExcelConfig>(v31);
    building_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicBuildingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicBuildingExcelConfig>(v31);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&building_config->gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)building_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&building_config->gadget_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&building_config->gadget_id);
      }
      if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, building_config->gadget_id) )
      {
        v12 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v2 + 304),
                &building_config->gadget_id);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        if ( *v13 )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
            "checkBuildingConfig",
            71);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])byte_1A127160);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
          v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1A1271A0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &building_config->gadget_id);
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])byte_1A1271E0);
          v20 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v2 + 304),
                  &building_config->gadget_id);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, v20);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])byte_1A11D660);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
          *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          v22 = *id;
          p_gadget_id = &building_config->gadget_id;
          v24 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v2 + 304),
                  &building_config->gadget_id);
          v25 = v24;
          v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
          if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
          {
            LOBYTE(p_gadget_id) = v26 != 0;
            __asan_report_store4(v24, p_gadget_id);
          }
          *v25 = v22;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkBuildingConfig",
          65);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 176),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])byte_1A127160);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])byte_1A1271A0);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &building_config->gadget_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1A11E460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
        *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkBuildingConfig",
        59);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])byte_1A127120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
      *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 304));
  result = ret;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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

// Line 80: range 000000000CB23276-000000000CB239F7
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteBuildingConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned __int64 v6; // rax
  std::string *p_key; // rsi
  std::map<std::string,float>::mapped_type *v8; // rax
  float *v9; // rdx
  char v10; // cl
  char *v11; // rsi
  char *v12; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  std::set<unsigned int> *v17; // rdx
  unsigned __int64 v18; // rax
  int32_t result; // eax
  float value; // [rsp+Ch] [rbp-1B4h]
  data::MechanicBuildingExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-198h]
  const std::set<unsigned int>::value_type *id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicBuildingExcelConfig> >::type *config; // [rsp+38h] [rbp-188h]
  std::vector<data::SGVConfig> *__for_range_0; // [rsp+48h] [rbp-178h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-170h]
  const data::SGVConfig *param; // [rsp+58h] [rbp-168h]
  char v28[352]; // [rsp+60h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 13 dungeon_id:90 48 8 14 __for_begin:81 80 8 12 __for_end:81 112 8 14 __for_begin:85 144 "
                        "8 12 __for_end:85 176 8 14 __for_begin:90 208 8 12 __for_end:90 240 48 19 global_value_map:84";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteBuildingConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  __for_range = &this->mechanic_building_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MechanicBuildingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false> *)(v2 + 80)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::MechanicBuildingExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::MechanicBuildingExcelConfig>(__in);
    v6 = ((v2 + 240) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<std::string,float>::map((std::map<std::string,float> *const)(v2 + 240));
    __for_range_0 = &config->open_conds;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v5);
    *(std::vector<data::SGVConfig>::iterator *)(v2 + 112) = std::vector<data::SGVConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v5);
    *(std::vector<data::SGVConfig>::iterator *)(v2 + 144) = std::vector<data::SGVConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::SGVConfig *,std::vector<data::SGVConfig>>(
              (const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *)(v2 + 144)) )
    {
      param = __gnu_cxx::__normal_iterator<data::SGVConfig *,std::vector<data::SGVConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&param->value);
      }
      value = param->value;
      p_key = &param->key;
      v8 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v2 + 240), &param->key);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(p_key) = v10 != 0;
        __asan_report_store4(v8, p_key);
      }
      *v9 = value;
      __gnu_cxx::__normal_iterator<data::SGVConfig *,std::vector<data::SGVConfig>>::operator++((__gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    v11 = (char *)(v2 + 240);
    std::any::operator=<std::map<std::string,float> &>(
      &config->global_value_map,
      (std::map<std::string,float> *)(v2 + 240));
    __for_range_1 = &config->default_dungeon_list;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, v11);
    *(std::vector<unsigned int>::iterator *)(v2 + 176) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, v11);
    *(std::vector<unsigned int>::iterator *)(v2 + 208) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v12 = (char *)(v2 + 208);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 176),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 208)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 176));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v2 + 32, v12);
      }
      *(_DWORD *)(v2 + 32) = v15;
      v17 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->dungeon_default_gears_map,
              (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 32));
      std::set<unsigned int>::insert(v17, id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 176));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    std::map<std::string,float>::~map((std::map<std::string,float> *const)(v2 + 240));
    v18 = ((v2 + 240) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_WORD *)(v18 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicBuildingExcelConfig>,false,false> *const)(v2 + 48));
  }
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 99: range 000000000CB239F8-000000000CB23C05
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteChanicusConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  int32_t result; // eax
  data::MechanicusExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicusExcelConfig> >::type *mechanicus_config; // [rsp+28h] [rbp-98h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:100 64 8 13 __for_end:100";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>::__node_type *)TreatreMechanicusExcelConfigMgr::rewriteChanicusConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->mechanicus_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::MechanicusExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::MechanicusExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::MechanicusExcelConfig>(__in);
    mechanicus_config = std::get<1ul,unsigned int const,data::MechanicusExcelConfig>(__in);
    M_current = std::vector<unsigned int>::end(&mechanicus_config->sequence_list)._M_current;
    v6._M_current = std::vector<unsigned int>::begin(&mechanicus_config->sequence_list)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v6,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 109: range 000000000CB23C06-000000000CB25216
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkMechanicusConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t open_level; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t gear_level_limite; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t gear_money_limite; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  const unsigned int *M_current; // r15
  const unsigned int *v27; // r14
  std::vector<unsigned int>::const_iterator v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  TreatreMechanicusExcelConfigMgr *v44; // rcx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  const unsigned int *__last2; // [rsp+8h] [rbp-3C8h]
  int32_t ret; // [rsp+24h] [rbp-3ACh]
  const data::MechanicusSequenceExcelConfig *last_sequence_config_ptr; // [rsp+28h] [rbp-3A8h]
  data::MechanicusExcelConfigMap *__for_range; // [rsp+30h] [rbp-3A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::reference v54; // [rsp+38h] [rbp-398h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusExcelConfig> >::type *mechanicus_config; // [rsp+48h] [rbp-388h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-380h]
  data::MechanicusSequenceExcelConfig *sequence_config_ptr; // [rsp+58h] [rbp-378h]
  char v58[880]; // [rsp+60h] [rbp-370h] BYREF

  v2 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 4 15 sequence_id:115 64 8 15 __for_begin:111 96 8 13 __for_end:111 128 8 15 __for_begin:11"
                        "5 160 8 13 __for_end:115 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unkn"
                        "own> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unkno"
                        "wn> 768 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkMechanicusConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -202116109;
  ret = 0;
  __for_range = &this->mechanicus_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MechanicusExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusExcelConfig>,false> *)(v2 + 96)) )
      break;
    v54 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::MechanicusExcelConfig>(v54);
    mechanicus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusExcelConfig>(v54);
    last_sequence_config_ptr = 0LL;
    __for_range_0 = &mechanicus_config->sequence_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      sequence_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                              this,
                              *(unsigned int *)(v2 + 48));
      if ( sequence_config_ptr )
      {
        if ( last_sequence_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->open_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->open_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&sequence_config_ptr->open_level);
          }
          open_level = sequence_config_ptr->open_level;
          if ( *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->open_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->open_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&last_sequence_config_ptr->open_level);
          }
          if ( open_level < last_sequence_config_ptr->open_level )
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
              "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
              "checkMechanicusConfig",
              130);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 256),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v15,
                    (const char (*)[13])"sequence_id:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v17, (const char (*)[46])byte_1A1274E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
            *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          }
          if ( *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->gear_level_limite >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->gear_level_limite >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&sequence_config_ptr->gear_level_limite);
          }
          gear_level_limite = sequence_config_ptr->gear_level_limite;
          if ( *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->gear_level_limite >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->gear_level_limite >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&last_sequence_config_ptr->gear_level_limite);
          }
          if ( gear_level_limite < last_sequence_config_ptr->gear_level_limite )
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
              "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
              "checkMechanicusConfig",
              135);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v19,
                    (const char (*)[13])"sequence_id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v21, (const char (*)[54])byte_1A127540);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          }
          if ( *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->gear_money_limite >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)sequence_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sequence_config_ptr->gear_money_limite >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&sequence_config_ptr->gear_money_limite);
          }
          gear_money_limite = sequence_config_ptr->gear_money_limite;
          if ( *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->gear_money_limite >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)last_sequence_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_sequence_config_ptr->gear_money_limite >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4(&last_sequence_config_ptr->gear_money_limite);
          }
          if ( gear_money_limite < last_sequence_config_ptr->gear_money_limite )
          {
            ret = -1;
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
              4u,
              "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
              "checkMechanicusConfig",
              140);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v23,
                    (const char (*)[13])"sequence_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v25, (const char (*)[51])byte_1A1275A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          }
          __last2 = std::vector<unsigned int>::end(&last_sequence_config_ptr->open_gear_list)._M_current;
          M_current = std::vector<unsigned int>::begin(&last_sequence_config_ptr->open_gear_list)._M_current;
          v27 = std::vector<unsigned int>::end(&sequence_config_ptr->open_gear_list)._M_current;
          v28._M_current = std::vector<unsigned int>::begin(&sequence_config_ptr->open_gear_list)._M_current;
          if ( !std::includes<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                  v28,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v27,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last2) )
          {
            ret = -1;
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
              4u,
              "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
              "checkMechanicusConfig",
              147);
            v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v29,
                    (const char (*)[13])"sequence_id:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v31, (const char (*)[57])byte_1A127600);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
            *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        last_sequence_config_ptr = sequence_config_ptr;
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkMechanicusConfig",
          121);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])"sequence_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config->ticket_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mechanicus_config->ticket_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&mechanicus_config->ticket_item_id);
    }
    if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
           p_material_config_mgr,
           mechanicus_config->ticket_item_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config->ticket_cost_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mechanicus_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config->ticket_cost_count >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&mechanicus_config->ticket_cost_count);
      }
      if ( mechanicus_config->ticket_cost_count )
      {
        if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config->match_player_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&mechanicus_config->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&mechanicus_config->match_player_limit);
        }
        if ( mechanicus_config->match_player_limit > 1 && mechanicus_config->match_player_limit <= 4 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config->teach_difficult_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)mechanicus_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config->teach_difficult_level >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&mechanicus_config->teach_difficult_level);
          }
          if ( mechanicus_config->teach_difficult_level )
          {
            if ( mechanicus_config->teach_difficult_level > 0x3E7 )
            {
              v44 = this;
              if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config->teach_difficult_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)mechanicus_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config->teach_difficult_level >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_load4(&mechanicus_config->teach_difficult_level);
              }
              if ( !data::TreatreMechanicusExcelConfigMgrBase::findMechanicusDifficultyExcelConfig(
                      v44,
                      mechanicus_config->teach_difficult_level) )
              {
                ret = -1;
                *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 768, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 768),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
                  "checkMechanicusConfig",
                  181);
                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 768),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v46 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v45,
                        (const char (*)[19])byte_1A127720);
                v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v46,
                        &mechanicus_config->teach_difficult_level);
                common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v47, (const char (*)[10])byte_1A11E460);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
                *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
            {
              ret = -1;
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 704, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 704),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
                "checkMechanicusConfig",
                175);
              v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 704),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v41 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v40,
                      (const char (*)[19])byte_1A127720);
              v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      &mechanicus_config->teach_difficult_level);
              v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])byte_1A127760);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                &TreatreMechanicusExcelConfigMgr::teach_difficutl_level_min);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
        }
        else
        {
          ret = -1;
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
            4u,
            "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
            "checkMechanicusConfig",
            167);
          v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v38 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v37, (const char (*)[20])byte_1A1276E0);
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  &mechanicus_config->match_player_limit);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])byte_1A117C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkMechanicusConfig",
          161);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v36, (const char (*)[23])byte_1A1276A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkMechanicusConfig",
        155);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v33, (const char (*)[10])byte_1A127660);
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v34,
              &mechanicus_config->ticket_item_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusExcelConfig>,false,false> *const)(v2 + 64));
  }
  if ( v58 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 190: range 000000000CB25218-000000000CB25425
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteSequenceConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v6; // rax
  int32_t result; // eax
  data::MechanicusSequenceExcelConfigMap *__for_range; // [rsp+10h] [rbp-B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicusSequenceExcelConfig> >::type *sequence_config; // [rsp+28h] [rbp-98h]
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:191 64 8 13 __for_end:191";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>::__node_type *)TreatreMechanicusExcelConfigMgr::rewriteSequenceConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->mechanicus_sequence_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::MechanicusSequenceExcelConfig>(__in);
    sequence_config = std::get<1ul,unsigned int const,data::MechanicusSequenceExcelConfig>(__in);
    M_current = std::vector<unsigned int>::end(&sequence_config->open_gear_list)._M_current;
    v6._M_current = std::vector<unsigned int>::begin(&sequence_config->open_gear_list)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v6,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 199: range 000000000CB25426-000000000CB25DAF
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkSequenceConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  TreatreMechanicusExcelConfigMgr *v5; // rcx
  uint32_t *p_mechanicus_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  uint32_t mechanicus_id; // esi
  uint32_t v11; // edx
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  char *v17; // rsi
  unsigned int *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::MechanicusSequenceExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::reference v30; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusSequenceExcelConfig> >::type *sequence_id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusSequenceExcelConfig> >::type *sequence_config; // [rsp+38h] [rbp-1B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1A8h]
  char v34[416]; // [rsp+50h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 11 gear_id:218 64 8 15 __for_begin:201 96 8 13 __for_end:201 128 8 15 __for_begin:218 160"
                        " 8 13 __for_end:218 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkSequenceConfig;
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
  __for_range = &this->mechanicus_sequence_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MechanicusSequenceExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false> *)(v2 + 96)) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false> *const)(v2 + 64));
    sequence_id = std::get<0ul,unsigned int const,data::MechanicusSequenceExcelConfig>(v30);
    sequence_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusSequenceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusSequenceExcelConfig>(v30);
    v5 = this;
    p_mechanicus_id = &sequence_config->mechanicus_id;
    if ( *(_BYTE *)(((unsigned __int64)p_mechanicus_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_mechanicus_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_mechanicus_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_mechanicus_id);
    }
    if ( data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(v5, sequence_config->mechanicus_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&sequence_config->mechanicus_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sequence_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sequence_config->mechanicus_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&sequence_config->mechanicus_id);
      }
      mechanicus_id = sequence_config->mechanicus_id;
      if ( *(_BYTE *)(((unsigned __int64)sequence_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sequence_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sequence_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(sequence_id);
      }
      v11 = mechanicus_id;
      v12 = *sequence_id;
      if ( !TreatreMechanicusExcelConfigMgr::isSequenceIdBelongMechanicus(this, v12, v11) )
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkSequenceConfig",
          214);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])"sequence_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, sequence_id);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])byte_1A127900);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &sequence_config->mechanicus_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        __for_range_0 = &sequence_config->open_gear_list;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v12);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v12);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v17 = (char *)(v2 + 160);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v18 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
          v19 = (int *)v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          v20 = *v19;
          v21 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v21 != 0 && v21 <= 3 )
          {
            LOBYTE(v17) = v21 != 0;
            __asan_report_store4(v2 + 48, v17);
          }
          *(_DWORD *)(v2 + 48) = v20;
          if ( !data::TreatreMechanicusExcelConfigMgrBase::findMechanicusGearLevelUpExcelConfig(
                  this,
                  *(unsigned int *)(v2 + 48)) )
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
              "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
              "checkSequenceConfig",
              223);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v22,
                    (const char (*)[13])"sequence_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, sequence_id);
            v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v24,
                    (const char (*)[18])byte_1A127940);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1A117C40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
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
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkSequenceConfig",
        208);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"sequence_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, sequence_id);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v9, (const char (*)[29])byte_1A1278C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusSequenceExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v34 == (char *)v2 )
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

// Line 231: range 000000000CB25DB0-000000000CB264EF
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  unsigned __int64 v6; // rax
  std::string *p_key; // rsi
  std::map<std::string,float>::mapped_type *v8; // rax
  float *v9; // rdx
  char v10; // cl
  std::vector<data::MechanicusGearLevelUpExcelConfig> *v11; // rdx
  unsigned __int64 v12; // rax
  data::MechanicusGearLevelUpExcelConfig *M_current; // r14
  std::vector<data::MechanicusGearLevelUpExcelConfig>::iterator v14; // rax
  TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig::<lambda(const auto:29&, const auto:30&)> v15; // dl
  int32_t result; // eax
  float value; // [rsp+Ch] [rbp-1E4h]
  data::MechanicusGearLevelUpExcelConfigMap *__for_range; // [rsp+28h] [rbp-1C8h]
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>> *__for_range_1; // [rsp+30h] [rbp-1C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false>::reference v20; // [rsp+38h] [rbp-1B8h]
  std::vector<data::MechanicusGearLevelUpExcelConfig> *levelup_config_vec; // [rsp+48h] [rbp-1A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false,false>::reference __in; // [rsp+50h] [rbp-1A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig> >::type *levelup_config; // [rsp+60h] [rbp-190h]
  std::vector<data::SGVConfig> *__for_range_0; // [rsp+70h] [rbp-180h]
  const data::SGVConfig *param; // [rsp+78h] [rbp-178h]
  char v26[368]; // [rsp+80h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 8 func:248 48 8 15 __for_begin:232 80 8 13 __for_end:232 112 8 15 __for_begin:236 144 8 1"
                        "3 __for_end:236 176 8 15 __for_begin:249 208 8 13 __for_end:249 240 48 20 global_value_map:235";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  __for_range = &this->mechanicus_gear_level_up_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusGearLevelUpExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MechanicusGearLevelUpExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusGearLevelUpExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MechanicusGearLevelUpExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false> *)(v2 + 80)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false,false> *const)(v2 + 48));
    std::get<0ul,unsigned int const,data::MechanicusGearLevelUpExcelConfig>(__in);
    levelup_config = std::get<1ul,unsigned int const,data::MechanicusGearLevelUpExcelConfig>(__in);
    v6 = ((v2 + 240) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::map<std::string,float>::map((std::map<std::string,float> *const)(v2 + 240));
    __for_range_0 = &levelup_config->global_value_param;
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 112, v5);
    *(std::vector<data::SGVConfig>::iterator *)(v2 + 112) = std::vector<data::SGVConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, v5);
    *(std::vector<data::SGVConfig>::iterator *)(v2 + 144) = std::vector<data::SGVConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::SGVConfig *,std::vector<data::SGVConfig>>(
              (const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *)(v2 + 112),
              (const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *)(v2 + 144)) )
    {
      param = __gnu_cxx::__normal_iterator<data::SGVConfig *,std::vector<data::SGVConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *const)(v2 + 112));
      if ( !(unsigned __int8)std::string::empty() )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->value);
        }
        value = param->value;
        p_key = &param->key;
        v8 = std::map<std::string,float>::operator[]((std::map<std::string,float> *const)(v2 + 240), &param->key);
        v9 = v8;
        v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
        {
          LOBYTE(p_key) = v10 != 0;
          __asan_report_store4(v8, p_key);
        }
        *v9 = value;
      }
      __gnu_cxx::__normal_iterator<data::SGVConfig *,std::vector<data::SGVConfig>>::operator++((__gnu_cxx::__normal_iterator<data::SGVConfig*,std::vector<data::SGVConfig> > *const)(v2 + 112));
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    std::any::operator=<std::map<std::string,float> &>(
      &levelup_config->global_value_map,
      (std::map<std::string,float> *)(v2 + 240));
    v11 = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::operator[](
            &this->gear_levelup_config_map,
            &levelup_config->gear_id);
    std::vector<data::MechanicusGearLevelUpExcelConfig>::push_back(v11, levelup_config);
    std::map<std::string,float>::~map((std::map<std::string,float> *const)(v2 + 240));
    v12 = ((v2 + 240) >> 3) + 2147450880;
    *(_DWORD *)v12 = -117901064;
    *(_WORD *)(v12 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusGearLevelUpExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
  __for_range_1 = &this->gear_levelup_config_map;
  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 176, v5);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::iterator *)(v2 + 176) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 208, v5);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::iterator *)(v2 + 208) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::end(__for_range_1);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v2 + 176),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v2 + 208)) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)(v2 + 176));
    std::get<0ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v20);
    levelup_config_vec = std::get<1ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v20);
    M_current = std::vector<data::MechanicusGearLevelUpExcelConfig>::end(levelup_config_vec)._M_current;
    v14._M_current = std::vector<data::MechanicusGearLevelUpExcelConfig>::begin(levelup_config_vec)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::MechanicusGearLevelUpExcelConfig__std::vector_data::MechanicusGearLevelUpExcelConfig____TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig_TxtConfigMgr__::_lambda_const_auto_29__const_auto_30_____(
      v14,
      (__gnu_cxx::__normal_iterator<data::MechanicusGearLevelUpExcelConfig*,std::vector<data::MechanicusGearLevelUpExcelConfig> >)M_current,
      v15);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)(v2 + 176));
  }
  result = 0;
  if ( v26 == (char *)v2 )
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

// Line 248: range 000000000CDE2C34-000000000CDE2CC3
bool __cdecl TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig::_lambda_const_auto_29___const_auto_30___::operator()_data::MechanicusGearLevelUpExcelConfig_data::MechanicusGearLevelUpExcelConfig_(
        const TreatreMechanicusExcelConfigMgr::rewriteGearLevelupConfig::<lambda(const auto:29&, const auto:30&)> *const __closure,
        const data::MechanicusGearLevelUpExcelConfig *lhs,
        const data::MechanicusGearLevelUpExcelConfig *rhs)
{
  uint32_t gear_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->gear_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->gear_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->gear_level);
  }
  gear_level = lhs->gear_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->gear_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->gear_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->gear_level);
  }
  return gear_level < rhs->gear_level;
};

// Line 257: range 000000000CB264F0-000000000CB26E15
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkGearLevelupConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  TreatreMechanicusExcelConfigMgr *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-1B8h]
  uint32_t last_level; // [rsp+1Ch] [rbp-1B4h]
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>> *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false>::reference v24; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *gear_id; // [rsp+30h] [rbp-1A0h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *__for_range_0; // [rsp+40h] [rbp-190h]
  const data::MechanicusGearLevelUpExcelConfig *levelup_config; // [rsp+48h] [rbp-188h]
  char v28[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:259 64 8 13 __for_end:259 96 8 15 __for_begin:262 128 8 13 __for_end:262 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkGearLevelupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->gear_levelup_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v2 + 64)) )
      break;
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)(v2 + 32));
    gear_id = std::get<0ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v24);
    last_level = 0;
    __for_range_0 = std::get<1ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v24);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::MechanicusGearLevelUpExcelConfig>::const_iterator *)(v2 + 96) = std::vector<data::MechanicusGearLevelUpExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::MechanicusGearLevelUpExcelConfig>::const_iterator *)(v2 + 128) = std::vector<data::MechanicusGearLevelUpExcelConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::MechanicusGearLevelUpExcelConfig const*,std::vector<data::MechanicusGearLevelUpExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::MechanicusGearLevelUpExcelConfig*,std::vector<data::MechanicusGearLevelUpExcelConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::MechanicusGearLevelUpExcelConfig*,std::vector<data::MechanicusGearLevelUpExcelConfig> > *)(v2 + 128)) )
    {
      levelup_config = __gnu_cxx::__normal_iterator<data::MechanicusGearLevelUpExcelConfig const*,std::vector<data::MechanicusGearLevelUpExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MechanicusGearLevelUpExcelConfig*,std::vector<data::MechanicusGearLevelUpExcelConfig> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&levelup_config->gear_level);
      }
      if ( levelup_config->gear_level != last_level + 1 )
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkGearLevelupConfig",
          267);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"gear_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, gear_id);
        v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])byte_1A127B60);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &levelup_config->gear_level);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1A127BA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        break;
      }
      ++last_level;
      if ( *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level_up_money >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)levelup_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level_up_money >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&levelup_config->gear_level_up_money);
      }
      if ( !levelup_config->gear_level_up_money )
      {
        if ( *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&levelup_config->gear_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&levelup_config->gear_level);
        }
        if ( levelup_config->gear_level > 1 )
        {
          ret = -1;
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
            "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
            "checkGearLevelupConfig",
            276);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])"gear_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, gear_id);
          v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1A127B60);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &levelup_config->gear_level);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v15, (const char (*)[26])byte_1A127BE0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          break;
        }
      }
      __gnu_cxx::__normal_iterator<data::MechanicusGearLevelUpExcelConfig const*,std::vector<data::MechanicusGearLevelUpExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MechanicusGearLevelUpExcelConfig*,std::vector<data::MechanicusGearLevelUpExcelConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    v16 = this;
    if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gear_id);
    }
    if ( !data::TreatreMechanicusExcelConfigMgrBase::findMechanicBuildingExcelConfig(v16, *gear_id) )
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
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkGearLevelupConfig",
        283);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])byte_1A127160);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, gear_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 291: range 000000000CB26E16-000000000CB27696
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteDifficultConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int v24; // r14d
  char *v25; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  unsigned int *v27; // rdx
  char v28; // cl
  uint32_t coin_rate; // r14d
  char *v30; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v31; // rax
  uint32_t *v32; // rdx
  char v33; // cl
  uint32_t build_gear_limit; // r14d
  char *v35; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v36; // rax
  uint32_t *v37; // rdx
  char v38; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-15Ch]
  data::MechanicusDifficultyExcelConfigMap *__for_range; // [rsp+18h] [rbp-158h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-150h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *level; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *difficult_config; // [rsp+30h] [rbp-140h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-138h]
  char v46[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 14 dungeon_id:295 64 8 15 __for_begin:293 96 8 13 __for_end:293 128 8 15 __for_begin:295 "
                        "160 8 13 __for_end:295 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteDifficultConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->mechanicus_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false> *const)(v2 + 64));
    level = std::get<0ul,unsigned int const,data::MechanicusDifficultyExcelConfig>(__in);
    difficult_config = std::get<1ul,unsigned int const,data::MechanicusDifficultyExcelConfig>(__in);
    __for_range_0 = &difficult_config->dungeon_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 48, v6);
      }
      *(_DWORD *)(v2 + 48) = v9;
      v11 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->dungeon_difficult_level_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      if ( !*v12 )
        goto LABEL_29;
      v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->dungeon_difficult_level_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(level);
      }
      if ( v15 == *level )
LABEL_29:
        v16 = 0;
      else
        v16 = 1;
      if ( v16 )
      {
        ret = -1;
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "rewriteDifficultConfig",
          300);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])byte_1A127D00);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, level);
        v20 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v19, (const char (*)[4])off_1A127D40);
        v21 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->dungeon_difficult_level_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
        v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])byte_1A127D80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(level);
      }
      v24 = *level;
      v25 = (char *)(v2 + 48);
      v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->dungeon_difficult_level_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v27 = v26;
      v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
      if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
      {
        LOBYTE(v25) = v28 != 0;
        __asan_report_store4(v26, v25);
      }
      *v27 = v24;
      if ( *(_BYTE *)(((unsigned __int64)&difficult_config->coin_rate >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&difficult_config->coin_rate >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&difficult_config->coin_rate);
      }
      coin_rate = difficult_config->coin_rate;
      v30 = (char *)(v2 + 48);
      v31 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->dungeon_to_coin_rate,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v32 = v31;
      v33 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
      if ( v33 != 0 && (char)(((unsigned __int8)v31 & 7) + 3) >= v33 )
      {
        LOBYTE(v30) = v33 != 0;
        __asan_report_store4(v31, v30);
      }
      *v32 = coin_rate;
      if ( *(_BYTE *)(((unsigned __int64)&difficult_config->build_gear_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)difficult_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficult_config->build_gear_limit >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&difficult_config->build_gear_limit);
      }
      build_gear_limit = difficult_config->build_gear_limit;
      v35 = (char *)(v2 + 48);
      v36 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->dungeon_gear_limit_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v37 = v36;
      v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
      if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
      {
        LOBYTE(v35) = v38 != 0;
        __asan_report_store4(v36, v35);
      }
      *v37 = build_gear_limit;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 311: range 000000000CB27698-000000000CB2795C
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteCardConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char *v5; // rsi
  std::unordered_map<int,std::set<unsigned int>> *p_type_to_cards_map; // rcx
  data::MechanicusCardType card_type; // edi
  char v8; // al
  std::set<unsigned int> *v9; // rdx
  int32_t result; // eax
  data::MechanicusCardExcelConfigMap *__for_range; // [rsp+10h] [rbp-C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *id; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *card_config; // [rsp+28h] [rbp-A8h]
  char v16[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 15 __for_begin:312 96 8 13 __for_end:312";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteCardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  __for_range = &this->mechanicus_card_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false> *)(v2 + 96)) )
      break;
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::MechanicusCardExcelConfig>(v13);
    card_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusCardExcelConfig>(v13);
    p_type_to_cards_map = &this->type_to_cards_map;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->card_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_config->card_type);
    }
    card_type = card_config->card_type;
    v8 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      card_type = v2 + 48;
      LOBYTE(v5) = v8 != 0;
      __asan_report_store4(v2 + 48, v5);
    }
    *(_DWORD *)(v2 + 48) = card_type;
    v9 = std::unordered_map<int,std::set<unsigned int>>::operator[](
           p_type_to_cards_map,
           (std::unordered_map<int,std::set<unsigned int>>::key_type *)(v2 + 48));
    std::set<unsigned int>::insert(v9, id);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = 0;
  if ( v16 == (char *)v2 )
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

// Line 321: range 000000000CB2795E-000000000CB27D52
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkWatcherConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::MechanicusWatcherExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusWatcherExcelConfig> >::type *watcher_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusWatcherExcelConfig> >::type *watcher_config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:323 64 8 13 __for_end:323 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkWatcherConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->mechanicus_watcher_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false> *const)(v2 + 32));
    watcher_id = std::get<0ul,unsigned int const,data::MechanicusWatcherExcelConfig>(v12);
    watcher_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusWatcherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusWatcherExcelConfig>(v12);
    if ( *(char *)(((unsigned __int64)&watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config->is_disuse, v2 + 64, &watcher_config->is_disuse);
    if ( !watcher_config->is_disuse )
    {
      p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(watcher_id);
      }
      if ( !WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, *watcher_id) )
      {
        ret = -1;
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "checkWatcherConfig",
          332);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])"watcher_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, watcher_id);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])byte_1A127EE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 340: range 000000000CB27D54-000000000CB28163
int32_t __cdecl TreatreMechanicusExcelConfigMgr::rewriteWatcherConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::MechanicusWatcherExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusWatcherExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::MechanicusWatcherExcelConfig> >::type *watcher_config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:342 64 8 13 __for_end:342 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::rewriteWatcherConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->mechanicus_watcher_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusWatcherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::MechanicusWatcherExcelConfig>(__in);
    watcher_config = std::get<1ul,unsigned int const,data::MechanicusWatcherExcelConfig>(__in);
    if ( *(char *)(((unsigned __int64)&watcher_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config->is_disuse, v2 + 64, &watcher_config->is_disuse);
    if ( !watcher_config->is_disuse )
    {
      p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
      v6 = (data::WatcherConfig *)watcher_config;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        p_watcher_config_mgr = (WatcherExcelConfigMgr *)id;
        __asan_report_load4(id);
      }
      if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *id, v6) )
      {
        ret = -1;
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
          "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
          "rewriteWatcherConfig",
          351);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               v7,
               (const char (*)[29])"addWatcherConfig failed, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
        std::set<unsigned int>::insert(&this->in_battle_watcher_set, id);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusWatcherExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 361: range 000000000CB28164-000000000CB28CFB
int32_t __cdecl TreatreMechanicusExcelConfigMgr::checkDifficultConfig(
        TreatreMechanicusExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v20; // rax
  __int64 v21; // rsi
  std::vector<unsigned int>::reference v22; // rax
  _DWORD *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const unsigned int *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t v28; // ecx
  char v29; // al
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-228h]
  uint32_t idx; // [rsp+1Ch] [rbp-224h]
  data::MechanicusDifficultyExcelConfigMap *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::reference v35; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *level; // [rsp+30h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *difficult_config; // [rsp+38h] [rbp-208h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-200h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+48h] [rbp-1F8h]
  char v40[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 14 dungeon_id:376 64 8 15 __for_begin:364 96 8 13 __for_end:364 128 8 15 __for_begin:376 "
                        "160 8 13 __for_end:376 192 24 30 normal_difficult_level_vec:363 256 32 9 <unknown> 320 32 9 <unk"
                        "nown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::checkDifficultConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
  __for_range = &this->mechanicus_difficulty_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MechanicusDifficultyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false> *)(v2 + 96)) )
  {
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false> *const)(v2 + 64));
    level = std::get<0ul,unsigned int const,data::MechanicusDifficultyExcelConfig>(v35);
    difficult_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusDifficultyExcelConfig>(v35);
    v5 = (std::tuple_element<0,std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig> >::type *)(((unsigned __int8)level & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    if ( *level <= 0x3E7 )
    {
      v5 = level;
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 192), level);
    }
    if ( std::vector<unsigned int>::empty(&difficult_config->dungeon_list) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkDifficultConfig",
        373);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])byte_1A127D00);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, level);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v8, (const char (*)[30])byte_1A128120);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      __for_range_0 = &difficult_config->dungeon_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v9 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v11 = (int *)v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        v12 = *v11;
        v13 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v13 != 0 && v13 <= 3 )
        {
          LOBYTE(v9) = v13 != 0;
          __asan_report_store4(v2 + 48, v9);
        }
        *(_DWORD *)(v2 + 48) = v12;
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                               &txt_config_mgr->dungeon_config_mgr,
                               *(unsigned int *)(v2 + 48));
        if ( !dungeon_config_ptr )
          goto LABEL_32;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type != DUNGEON_THEATRE_MECHANICUS )
        {
LABEL_32:
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
            "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
            "checkDifficultConfig",
            381);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])byte_1A128160);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, level);
          v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])byte_1A1281A0);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v18, (const char (*)[25])byte_1A1281E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MechanicusDifficultyExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 192))._M_current;
  v20._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v20,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  for ( idx = 0; idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 192)); ++idx )
  {
    v21 = idx;
    v22 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 192), idx);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    if ( *v23 != idx + 1 )
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "checkDifficultConfig",
        394);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v24, (const char (*)[16])byte_1A128220);
      v26 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 192), idx);
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, v26);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_1A128260);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      break;
    }
    v28 = idx + 1;
    v29 = *(_BYTE *)(((unsigned __int64)&this->max_normal_difficult_level >> 3) + 0x7FFF8000);
    if ( v29 != 0 && v29 <= 3 )
    {
      LOBYTE(v21) = v29 != 0;
      __asan_report_store4(&this->max_normal_difficult_level, v21);
    }
    this->max_normal_difficult_level = v28;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
  result = ret;
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 405: range 000000000CB28CFC-000000000CB2909E
_BOOL8 __fastcall TreatreMechanicusExcelConfigMgr::isSequenceIdBelongMechanicus(
        const TreatreMechanicusExcelConfigMgr *const this,
        uint32_t sequence_id,
        uint32_t mechanicus_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL8 result; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v11; // rcx
  const std::vector<unsigned int> *p_sequence_list; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  char v15; // al
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+18h] [rbp-F8h]
  char v18[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 sequence_id:404 48 4 17 mechanicus_id:404 64 8 8 iter:413 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TreatreMechanicusExcelConfigMgr::isSequenceIdBelongMechanicus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = sequence_id;
  *(_DWORD *)(v3 + 48) = mechanicus_id;
  v6 = *(unsigned int *)(v3 + 48);
  mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(this, v6);
  if ( mechanicus_config_ptr )
  {
    M_current = std::vector<unsigned int>::end(&mechanicus_config_ptr->sequence_list)._M_current;
    v11 = std::vector<unsigned int>::begin(&mechanicus_config_ptr->sequence_list)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::lower_bound<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v11,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v3 + 32));
    p_sequence_list = &mechanicus_config_ptr->sequence_list;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, M_current);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(p_sequence_list);
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
    {
      goto LABEL_16;
    }
    v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    if ( *v14 == *(_DWORD *)(v3 + 32) )
      v15 = 0;
    else
LABEL_16:
      v15 = 1;
    result = v15 == 0;
  }
  else
  {
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
      "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
      "isSequenceIdBelongMechanicus",
      409);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           v7,
           (const char (*)[34])"findMechanicusExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 423: range 000000000CB290A0-000000000CB29450
std::vector<data::MechanicusGearLevelUpExcelConfig>::const_reference __fastcall TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
        const TreatreMechanicusExcelConfigMgr *const this,
        __int64 gear_id,
        uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>> *p_gear_levelup_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>> *v7; // rdx
  bool v8; // al
  std::vector<data::MechanicusGearLevelUpExcelConfig>::const_reference result; // rax
  std::vector<data::MechanicusGearLevelUpExcelConfig>::size_type v10; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<data::MechanicusGearLevelUpExcelConfig> *levelup_config_vec; // [rsp+18h] [rbp-F8h]
  char v19[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 11 gear_id:422 48 4 9 level:422 64 8 8 iter:424 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TreatreMechanicusExcelConfigMgr::findGearLevelupConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = gear_id;
  *(_DWORD *)(v3 + 48) = level;
  p_gear_levelup_config_map = &this->gear_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, gear_id);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::find(p_gear_levelup_config_map, (const std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->gear_levelup_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    levelup_config_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)(v3 + 64))->second;
    if ( !*(_DWORD *)(v3 + 48)
      || (v10 = *(unsigned int *)(v3 + 48),
          v10 > std::vector<data::MechanicusGearLevelUpExcelConfig>::size(levelup_config_vec)) )
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
        "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
        "findGearLevelupConfig",
        432);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v12,
              (const char (*)[23])"findGearLevelupConfig ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])",");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      result = 0LL;
    }
    else
    {
      result = std::vector<data::MechanicusGearLevelUpExcelConfig>::operator[](
                 levelup_config_vec,
                 (unsigned int)(*(_DWORD *)(v3 + 48) - 1));
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 440: range 000000000CB29452-000000000CB2964D
__int64 __fastcall TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
        const TreatreMechanicusExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_difficult_level_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:439 64 8 8 iter:441 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_difficult_level_map = &this->dungeon_difficult_level_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_difficult_level_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_difficult_level_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
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

// Line 451: range 000000000CB2964E-000000000CB29C78
int32_t __cdecl TreatreMechanicusExcelConfigMgr::randomPickCardsByType(
        const TreatreMechanicusExcelConfigMgr *const this,
        uint32_t pick_num,
        data::MechanicusCardType card_type,
        const std::set<unsigned int> *gear_set,
        const std::set<unsigned int> *exclude_set,
        std::set<unsigned int> *result_set)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::unordered_map<int,std::set<unsigned int>> *p_type_to_cards_map; // rcx
  std::unordered_map<int,std::set<unsigned int>> *v10; // rdx
  char *v11; // rsi
  bool v12; // al
  int32_t v13; // r14d
  unsigned __int64 v14; // rax
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  const TreatreMechanicusExcelConfigMgr *v20; // rdx
  __int64 v21; // rax
  int32_t result; // eax
  std::set<unsigned int> *origin_set; // [rsp+38h] [rbp-148h]
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+48h] [rbp-138h]
  char v31[304]; // [rsp+50h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 4 9 <unknown> 48 4 11 card_id:459 64 8 8 iter:452 96 8 9 <unknown> 128 8 15 __for_begin:459"
                        " 160 8 13 __for_end:459 192 24 14 origin_vec:458";
  *(_QWORD *)(v6 + 16) = TreatreMechanicusExcelConfigMgr::randomPickCardsByType;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  p_type_to_cards_map = &this->type_to_cards_map;
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v6 + 32, (unsigned int)card_type);
  *(_DWORD *)(v6 + 32) = card_type;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 64, (unsigned int)card_type);
  *(std::unordered_map<int,std::set<unsigned int>>::const_iterator *)(v6 + 64) = std::unordered_map<int,std::set<unsigned int>>::find(
                                                                                   p_type_to_cards_map,
                                                                                   (const std::unordered_map<int,std::set<unsigned int>>::key_type *)(v6 + 32));
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = 0;
  v10 = &this->type_to_cards_map;
  if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 96, v6 + 32);
  *(std::unordered_map<int,std::set<unsigned int>>::const_iterator *)(v6 + 96) = std::unordered_map<int,std::set<unsigned int>>::end(v10);
  v11 = (char *)(v6 + 96);
  v12 = std::__detail::operator==<std::pair<int const,std::set<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<int const,std::set<unsigned int> >,false> *)(v6 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<int const,std::set<unsigned int> >,false> *)(v6 + 96));
  *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    v13 = -1;
  }
  else
  {
    origin_set = &std::__detail::_Node_const_iterator<std::pair<int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<int const,std::set<unsigned int> >,false,false> *const)(v6 + 64))->second;
    v14 = ((v6 + 192) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 192));
    *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v6 + 128, v11);
    *(std::set<unsigned int>::iterator *)(v6 + 128) = std::set<unsigned int>::begin(origin_set);
    *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v6 + 160, v11);
    *(std::set<unsigned int>::iterator *)(v6 + 160) = std::set<unsigned int>::end(origin_set);
    while ( 1 )
    {
      v15 = (char *)(v6 + 160);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v6 + 128),
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v6 + 160)) )
        break;
      *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v6 + 128));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v6 + 48, v15);
      }
      *(_DWORD *)(v6 + 48) = v18;
      if ( !std::set<unsigned int>::count(exclude_set, (const std::set<unsigned int>::key_type *)(v6 + 48)) )
      {
        v20 = this;
        v21 = *(unsigned __int8 *)(((v6 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v21 != 0 && (char)v21 <= 3 )
          __asan_report_load4(v6 + 48);
        card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(
                            v20,
                            *(unsigned int *)(v6 + 48));
        if ( card_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->gear_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->gear_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr->gear_id);
          }
          if ( !card_config_ptr->gear_id || std::set<unsigned int>::count(gear_set, &card_config_ptr->gear_id) )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v6 + 192),
              (const std::vector<unsigned int>::value_type *)(v6 + 48));
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v6 + 128));
    }
    *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = -8;
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v6 + 192),
      result_set,
      pick_num);
    v13 = 0;
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 192));
  }
  result = v13;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 483: range 000000000CB29C7A-000000000CB2A15B
// local variable allocation has failed, the output may be wrong!
void __cdecl TreatreMechanicusExcelConfigMgr::randomPickCardsBelowCost(
        const TreatreMechanicusExcelConfigMgr *const this,
        uint32_t pick_num,
        uint32_t cost_limit,
        const std::set<unsigned int> *gear_set,
        const std::set<unsigned int> *exclude_set,
        std::set<unsigned int> *result_set)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  const TreatreMechanicusExcelConfigMgr *v9; // rcx
  data::MechanicusCardExcelConfigMap *__for_range; // [rsp+38h] [rbp-E8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::reference v16; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *card_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *card_config; // [rsp+50h] [rbp-D0h]
  const data::MechanicusCardExcelConfig *card_config_ptr; // [rsp+58h] [rbp-C8h]
  char v20[192]; // [rsp+60h] [rbp-C0h] BYREF

  v6 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 8 15 __for_begin:485 64 8 13 __for_end:485 96 24 22 candidate_card_vec:484";
  *(_QWORD *)(v6 + 16) = TreatreMechanicusExcelConfigMgr::randomPickCardsBelowCost;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -218103808;
  v8[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 96));
  __for_range = &this->mechanicus_card_excel_config_map;
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 32, *(_QWORD *)&pick_num);
  *(std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::const_iterator *)(v6 + 32) = std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 64, *(_QWORD *)&pick_num);
  *(std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::const_iterator *)(v6 + 64) = std::unordered_map<unsigned int,data::MechanicusCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false> *)(v6 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false> *)(v6 + 64)) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false> *const)(v6 + 32));
    card_id = std::get<0ul,unsigned int const,data::MechanicusCardExcelConfig>(v16);
    card_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusCardExcelConfig>(v16);
    if ( !std::set<unsigned int>::count(exclude_set, card_id) )
    {
      v9 = this;
      if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(card_id);
      }
      card_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardExcelConfig(v9, *card_id);
      if ( card_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->gear_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->gear_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->gear_id);
        }
        if ( !card_config_ptr->gear_id || std::set<unsigned int>::count(gear_set, &card_config_ptr->gear_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_config_ptr->card_type);
          }
          if ( card_config_ptr->card_type != MECHANICUS_CARD_CURSE )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_config_ptr->card_type);
            }
            if ( card_config_ptr->card_type != MECHANICUS_CARD_CHALLENGE )
            {
              if ( *(_BYTE *)(((unsigned __int64)&card_config->cost_points >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)card_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->cost_points >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(&card_config->cost_points);
              }
              if ( cost_limit >= card_config->cost_points )
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v6 + 96), card_id);
            }
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardExcelConfig>,false,false> *const)(v6 + 32));
  }
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
  common::tools::RandomUtils::randomSelect<unsigned int>(
    (const std::vector<unsigned int> *)(v6 + 96),
    result_set,
    pick_num);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 96));
  if ( v20 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 519: range 000000000CB2A15C-000000000CB2A851
const data::MechanicusCardCurseExcelConfig *__cdecl TreatreMechanicusExcelConfigMgr::randomCurseConfig(
        const TreatreMechanicusExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_weight; // rax
  uint32_t weight; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig> >::type *v7; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  common::milog::MiLogStream *v11; // rax
  const data::MechanicusCardCurseExcelConfig *MechanicusCardCurseExcelConfig; // r14
  common::milog::MiLogStream *v13; // rax
  const TreatreMechanicusExcelConfigMgr *v14; // rdx
  const data::MechanicusCardCurseExcelConfig *result; // rax
  data::MechanicusCardCurseExcelConfigMap *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false,false>::reference v17; // [rsp+18h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig> >::type *id; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig> >::type *curse_config; // [rsp+28h] [rbp-178h]
  char v20[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 13 config_id:526 48 8 15 __for_begin:521 80 8 13 __for_end:521 112 32 9 <unknown> 176 32 "
                        "9 <unknown> 240 48 21 config_weight_map:520";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::randomCurseConfig;
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
  v4[536862729] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
  __for_range = &this->mechanicus_card_curse_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, v1);
  *(std::unordered_map<unsigned int,data::MechanicusCardCurseExcelConfig>::const_iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MechanicusCardCurseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, v1);
  *(std::unordered_map<unsigned int,data::MechanicusCardCurseExcelConfig>::const_iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MechanicusCardCurseExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false> *)(v2 + 80)) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false,false> *const)(v2 + 48));
    id = std::get<0ul,unsigned int const,data::MechanicusCardCurseExcelConfig>(v17);
    curse_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MechanicusCardCurseExcelConfig>(v17);
    p_weight = &curse_config->weight;
    if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_weight);
    }
    weight = curse_config->weight;
    v7 = id;
    v8 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v2 + 240), id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7);
    }
    *v9 = weight;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MechanicusCardCurseExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
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
    1u,
    "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
    "randomCurseConfig",
    525);
  v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 112),
          (const char (*)[39])"[MECHANICUS] random curse weight map: ");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
    v11,
    (const std::map<unsigned int,unsigned int> *)(v2 + 240));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 112));
  *(_DWORD *)(((v2 + 112) >> 3) + 0x7FFF8000) = -117901064;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v2 + 240);
  *(_DWORD *)(v2 + 32) = 0;
  if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
         (const std::map<unsigned int,unsigned int> *)(v2 + 240),
         (unsigned int *)(v2 + 32),
         0) )
  {
    MechanicusCardCurseExcelConfig = 0LL;
  }
  else
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
      1u,
      "./src/txt_data_manual/TreatreMechanicusExcelConfig.cpp",
      "randomCurseConfig",
      531);
    v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 176),
            (const char (*)[31])"[MECHANICUS] random curse id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v14 = this;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 32);
    MechanicusCardCurseExcelConfig = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusCardCurseExcelConfig(
                                       v14,
                                       *(unsigned int *)(v2 + 32));
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 240));
  result = MechanicusCardCurseExcelConfig;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 536: range 000000000CB2A852-000000000CB2AA4D
__int64 __fastcall TreatreMechanicusExcelConfigMgr::queryCoinRateByDungeonId(
        const TreatreMechanicusExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_to_coin_rate; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:535 64 8 8 iter:537 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::queryCoinRateByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_to_coin_rate = &this->dungeon_to_coin_rate;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_to_coin_rate,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_to_coin_rate;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
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

// Line 546: range 000000000CB2AA4E-000000000CB2ACD9
std::set<unsigned int> *__fastcall TreatreMechanicusExcelConfigMgr::getDefaultGearsByDungeonId(
        std::set<unsigned int> *retstr,
        const TreatreMechanicusExcelConfigMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_dungeon_default_gears_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v9; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 dungeon_id:545 64 8 8 iter:547 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TreatreMechanicusExcelConfigMgr::getDefaultGearsByDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  p_dungeon_default_gears_map = &this->dungeon_default_gears_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_dungeon_default_gears_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->dungeon_default_gears_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::set<unsigned int>::set(retstr, &v9->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 48LL);
    }
    *(_QWORD *)retstr->_M_t._M_impl.gap0 = 0LL;
    *(_QWORD *)&retstr->_M_t._M_impl._M_header._M_color = 0LL;
    retstr->_M_t._M_impl._M_header._M_parent = 0LL;
    retstr->_M_t._M_impl._M_header._M_left = 0LL;
    retstr->_M_t._M_impl._M_header._M_right = 0LL;
    retstr->_M_t._M_impl._M_node_count = 0LL;
    std::set<unsigned int>::set(retstr);
  }
  if ( v12 == (char *)v3 )
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
  return retstr;
};

// Line 556: range 000000000CB2ACDA-000000000CB2AED5
__int64 __fastcall TreatreMechanicusExcelConfigMgr::queryGearLimitByDungeonId(
        const TreatreMechanicusExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_gear_limit_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:555 64 8 8 iter:557 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TreatreMechanicusExcelConfigMgr::queryGearLimitByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_gear_limit_map = &this->dungeon_gear_limit_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_gear_limit_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_gear_limit_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
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

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBartenderExcelConfig.cpp

// Line 19: range 0000000012AB5D6E-0000000012AB6012
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityBartenderExcelConfigMgr::checkBartenderBasicExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderAffixExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderFormulaExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderOrderExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderTaskExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderTaskOrderExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::checkBartenderLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "checkConfig",
      28);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v6,
      (const char (*)[31])"[BARTENDER] checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
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
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 35: range 0000000012AB6014-0000000012AB62B8
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityBartenderExcelConfigMgr::rewriteBartenderBasicExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderAffixExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderFormulaExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderOrderExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderTaskExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderTaskOrderExcelConfig(this, txt_config_mgr)
    || ActivityBartenderExcelConfigMgr::rewriteBartenderLevelExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "rewriteConfig",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      v6,
      (const char (*)[33])"[BARTENDER] rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
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
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 52: range 0000000012AB62BA-0000000012AB7445
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderBasicExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  __int64 v16; // rsi
  uint32_t min_material_count; // ecx
  char v18; // al
  uint32_t max_material_count; // ecx
  char v20; // dl
  int32_t result; // eax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // ecx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t ret; // [rsp+1Ch] [rbp-2A4h]
  data::BartenderBasicExcelConfigMap *__for_range; // [rsp+20h] [rbp-2A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::reference v29; // [rsp+28h] [rbp-298h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderBasicExcelConfig> >::type *id; // [rsp+30h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderBasicExcelConfig> >::type *config; // [rsp+38h] [rbp-288h]
  char v32[640]; // [rsp+40h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 8 14 __for_begin:54 64 8 12 __for_end:54 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <un"
                        "known> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::rewriteBartenderBasicExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  ret = 0;
  __for_range = &this->bartender_basic_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false> *)(v2 + 64)) )
  {
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BartenderBasicExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderBasicExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderBasicExcelConfig>(v29);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->min_material_count);
      }
      if ( config->min_material_count )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->max_material_count);
        }
        if ( config->max_material_count )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->min_material_count);
          }
          if ( !this->min_material_count )
            goto LABEL_37;
          if ( *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4(&config->min_material_count);
          }
          if ( config->min_material_count == this->min_material_count )
          {
LABEL_37:
            if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->max_material_count);
            }
            if ( !this->max_material_count )
              goto LABEL_46;
            if ( *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->max_material_count);
            }
            if ( config->max_material_count == this->max_material_count )
            {
LABEL_46:
              v16 = (((_BYTE)config + 12) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->min_material_count >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->min_material_count);
              }
              min_material_count = config->min_material_count;
              v18 = *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000);
              if ( v18 != 0 && v18 <= 3 )
              {
                LOBYTE(v16) = v18 != 0;
                __asan_report_store4(&this->min_material_count, v16);
              }
              this->min_material_count = min_material_count;
              if ( *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->max_material_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->max_material_count);
              }
              max_material_count = config->max_material_count;
              v20 = *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000);
              if ( v20 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v20 )
              {
                LOBYTE(v16) = v20 != 0;
                __asan_report_store4(&this->max_material_count, v16);
              }
              this->max_material_count = max_material_count;
            }
            else
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
                4u,
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "rewriteBartenderBasicExcelConfig",
                82);
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                      v14,
                      (const char (*)[53])"[BARTENDER] different max_material_count config, id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
              *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
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
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "rewriteBartenderBasicExcelConfig",
              76);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    v12,
                    (const char (*)[53])"[BARTENDER] different min_material_count config, id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderBasicExcelConfig",
            70);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v10,
                  (const char (*)[44])"[BARTENDER] max_material_count is zero, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
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
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteBartenderBasicExcelConfig",
          64);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               v8,
               (const char (*)[44])"[BARTENDER] min_material_count is zero, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderBasicExcelConfig",
        58);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             v6,
             (const char (*)[51])"[BARTENDER] findNewActivityExcelConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( ret )
  {
    result = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->max_material_count);
    }
    if ( !this->max_material_count )
      goto LABEL_64;
    if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->min_material_count);
    }
    if ( this->min_material_count )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->max_material_count);
      }
      v23 = this->max_material_count;
      if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->min_material_count);
      }
      if ( v23 >= this->min_material_count )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->max_material_count);
        }
        if ( this->max_material_count <= 9 )
        {
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderBasicExcelConfig",
            106);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            v25,
            (const char (*)[44])"[BARTENDER] max_material_count is too large");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteBartenderBasicExcelConfig",
          100);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
          v24,
          (const char (*)[59])"[BARTENDER] min_material_count < max_material_count config");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = -1;
      }
    }
    else
    {
LABEL_64:
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderBasicExcelConfig",
        95);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        v22,
        (const char (*)[58])"[BARTENDER] min_material_count or max_material_count is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      result = -1;
    }
  }
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 113: range 0000000012AB7446-0000000012AB7973
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderBasicExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  uint32_t *p_scene_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  data::BartenderBasicExcelConfigMap *__for_range; // [rsp+18h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderBasicExcelConfig> >::type *config; // [rsp+30h] [rbp-120h]
  const data::SceneExcelConfig *scene_config_ptr; // [rsp+38h] [rbp-118h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:114 64 8 13 __for_end:114 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBartenderExcelConfigMgr::checkBartenderBasicExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->bartender_basic_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BartenderBasicExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::BartenderBasicExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderBasicExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderBasicExcelConfig>(v15);
    p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
    p_scene_id = &config->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_scene_id);
    }
    scene_config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, config->scene_id);
    if ( !scene_config_ptr )
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "checkBartenderBasicExcelConfig",
        119);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             v8,
             (const char (*)[51])"[BARTENDER] findSceneExcelConfig failed, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scene_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scene_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&scene_config_ptr->type);
    }
    if ( scene_config_ptr->type != SCENE_ROOM )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderBasicExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
    "checkBartenderBasicExcelConfig",
    124);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v11,
          (const char (*)[47])"[BARTENDER] scene is not room scene, scene_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->scene_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v10 = 0;
LABEL_24:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 132: range 0000000012AB7974-0000000012AB8899
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderAffixExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DisplayItemExcelConfigMgr *p_display_item_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t material_count; // ecx
  uint32_t max_material_count; // esi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  uint32_t v16; // esi
  __int64 v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  const unsigned int *p_material_count; // rcx
  const unsigned int *p_material_id; // rdx
  __int64 v30; // rsi
  const unsigned int *v31; // rcx
  std::pair<unsigned int,unsigned int> *v32; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-2B4h]
  data::BartenderAffixExcelConfigMap *__for_range; // [rsp+20h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false,false>::reference v40; // [rsp+28h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderAffixExcelConfig> >::type *id; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderAffixExcelConfig> >::type *config; // [rsp+38h] [rbp-298h]
  char v43[656]; // [rsp+40h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 9 <unknown> 64 8 15 __for_begin:135 96 8 13 __for_end:135 128 8 9 <unknown> 160 8 9 <unk"
                        "nown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unkn"
                        "own> 512 56 22 affix_material_set:134";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::rewriteBartenderAffixExcelConfig;
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
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  ret = 0;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 512));
  __for_range = &this->bartender_affix_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderAffixExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BartenderAffixExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderAffixExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::BartenderAffixExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false> *)(v2 + 96)) )
  {
    v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::BartenderAffixExcelConfig>(v40);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderAffixExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderAffixExcelConfig>(v40);
    p_display_item_config_mgr = &txt_config_mgr->display_item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->material_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->material_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->material_id);
    }
    if ( !DisplayItemExcelConfigMgr::isBartenderMaterial(p_display_item_config_mgr, config->material_id) )
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderAffixExcelConfig",
        139);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             v6,
             (const char (*)[41])"[BARTENDER] item type invalid, affix_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->order_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->order_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->order_type);
      }
      if ( config->order_type == GreaterOrEqual )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->material_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->material_count >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->material_count);
        }
        material_count = config->material_count;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->max_material_count);
        }
        max_material_count = this->max_material_count;
        if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->min_material_count);
        }
        if ( material_count <= max_material_count - this->min_material_count )
        {
          v23 = std::unordered_set<unsigned int>::insert(
                  (std::unordered_set<unsigned int> *const)(v2 + 512),
                  &config->material_id);
          if ( !v23.second )
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
              4u,
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "rewriteBartenderAffixExcelConfig",
              163);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    v24,
                    (const char (*)[51])"[BARTENDER] duplicate affix material_id, affix_id:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
            v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v26,
                    (const char (*)[15])", material_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->material_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            p_material_count = &config->material_count;
            p_material_id = &config->material_id;
            v30 = *(unsigned __int8 *)(((v2 + 160) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v30 )
              __asan_report_store8(v2 + 160, v30);
            *(std::pair<unsigned int,unsigned int> *)(v2 + 160) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                    p_material_id,
                                                                    p_material_count);
            v33 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
                    &this->affix_to_material_count_map,
                    id,
                    (std::pair<unsigned int,unsigned int> *)(v2 + 160),
                    v31,
                    v32);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( !v33.second )
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
                4u,
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "rewriteBartenderAffixExcelConfig",
                169);
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v35 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      v34,
                      (const char (*)[42])"[BARTENDER] duplicate affix_id, affix_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
        }
        else
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
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderAffixExcelConfig",
            149);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  v12,
                  (const char (*)[63])"[BARTENDER] affix material min_count >= delta_count, affix_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
          v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v14,
                  (const char (*)[15])", delta_count:");
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->max_material_count);
          }
          v16 = this->max_material_count;
          if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->min_material_count);
          }
          v17 = v16 - this->min_material_count;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v2 + 48, v17);
          *(_DWORD *)(v2 + 48) = v17;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteBartenderAffixExcelConfig",
          157);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v18,
                (const char (*)[40])"[BARTENDER] invalid OrderingType, type:");
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config->order_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->order_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->order_type);
        }
        v20 = (__int64)data::enumValToStr(config->order_type);
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          v20 = __asan_report_store8(v2 + 128, (((_BYTE)config + 12) & 7u) + 3);
        *(_QWORD *)(v2 + 128) = v20;
        v21 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v2 + 128));
        v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])", affix_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderAffixExcelConfig>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 512));
  result = ret;
  if ( v43 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 178: range 0000000012AB889A-0000000012AB88AC
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderAffixExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 184: range 0000000012AB88AE-0000000012ABA2D0
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderFormulaExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  std::set<unsigned int> *v10; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // r14d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int v20; // eax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v21; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v22; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  __int64 v27; // rsi
  uint32_t v28; // ecx
  char v29; // al
  uint32_t min_material_count; // ecx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  unsigned __int64 v35; // rax
  std::vector<unsigned int> *v36; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>,bool> v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::mapped_type *v42; // rax
  int v43; // r14d
  unsigned __int64 v44; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v46; // rax
  std::set<unsigned int>::size_type v47; // r14
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  int v52; // r14d
  unsigned __int64 v53; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v55; // rax
  uint32_t max_material_count; // ecx
  common::milog::MiLogStream *v57; // rax
  int v58; // r14d
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rdx
  int v63; // eax
  int32_t ret; // [rsp+2Ch] [rbp-4B4h]
  data::BartenderFormulaExcelConfigMap *__for_range; // [rsp+30h] [rbp-4B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false,false>::reference v68; // [rsp+38h] [rbp-4A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderFormulaExcelConfig> >::type *id; // [rsp+40h] [rbp-4A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderFormulaExcelConfig> >::type *config; // [rsp+48h] [rbp-498h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-490h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v72; // [rsp+58h] [rbp-488h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+68h] [rbp-478h]
  char v74[1136]; // [rsp+70h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 48 1 9 <unknown> 64 1 9 <unknown> 80 4 26 current_material_count:223 96 8 15 __for_begin:186 "
                        "128 8 13 __for_end:186 160 8 15 __for_begin:224 192 8 13 __for_end:224 224 24 21 formula_affix_v"
                        "ec:250 288 24 13 affix_vec:274 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9"
                        " <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 "
                        "<unknown> 928 48 22 drink_material_map:208 1008 48 13 affix_set:267";
  *(_QWORD *)(v3 + 16) = ActivityBartenderExcelConfigMgr::rewriteBartenderFormulaExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862753] = -202116109;
  ret = 0;
  __for_range = &this->bartender_formula_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderFormulaExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BartenderFormulaExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderFormulaExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::BartenderFormulaExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false> *)(v3 + 128)) )
  {
    v68 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::BartenderFormulaExcelConfig>(v68);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderFormulaExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderFormulaExcelConfig>(v68);
    if ( *(char *)(((unsigned __int64)&config->is_default_unlock >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_default_unlock, v3 + 128, &config->is_default_unlock);
    if ( config->is_default_unlock
      && (v6 = std::set<unsigned int>::insert(&this->default_unlock_formula_set, id), !v6.second) )
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderFormulaExcelConfig",
        193);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             v7,
             (const char (*)[34])"[BARTENDER] duplicate formula_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
      v9 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->unlock_quest >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_quest >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->unlock_quest);
      }
      if ( config->unlock_quest
        && (v10 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->quest_to_unlock_formual_map,
                    &config->unlock_quest),
            v11 = std::set<unsigned int>::insert(v10, id),
            !v11.second) )
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
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteBartenderFormulaExcelConfig",
          203);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                v12,
                (const char (*)[34])"[BARTENDER] duplicate formula_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v9 = 0;
      }
      else
      {
        v14 = ((v3 + 928) >> 3) + 2147450880;
        *(_DWORD *)v14 = 0;
        *(_WORD *)(v14 + 4) = 0;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
        if ( ActivityBartenderExcelConfigMgr::internalAddBartenderMaterial(
               this,
               txt_config_mgr,
               &config->base_material,
               (std::map<unsigned int,unsigned int> *)(v3 + 928)) )
        {
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderFormulaExcelConfig",
            211);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  v15,
                  (const char (*)[61])"[BARTENDER] internalAddBartenderMaterial failed, formula_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v17 = 0;
        }
        else if ( ActivityBartenderExcelConfigMgr::internalAddBartenderMaterial(
                    this,
                    txt_config_mgr,
                    &config->extra_material,
                    (std::map<unsigned int,unsigned int> *)(v3 + 928)) )
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
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderFormulaExcelConfig",
            217);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  v18,
                  (const char (*)[61])"[BARTENDER] internalAddBartenderMaterial failed, formula_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v17 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v20 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v20 != 0 && (char)v20 <= 3 )
            __asan_report_store4(v3 + 80, txt_config_mgr);
          *(_DWORD *)(v3 + 80) = 0;
          __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 928);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, txt_config_mgr);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, txt_config_mgr);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 192) = std::map<unsigned int,unsigned int>::end(__for_range_0);
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 192)) )
          {
            v72 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 160));
            std::get<0ul,unsigned int const,unsigned int>(v72);
            v21 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v72);
            count = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            v22 = *count;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            *(_DWORD *)(v3 + 80) += v22;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 160));
          }
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 80);
          if ( *(_DWORD *)(v3 + 80) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->min_material_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->min_material_count);
            }
            min_material_count = this->min_material_count;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( min_material_count > *(_DWORD *)(v3 + 80) )
              goto LABEL_67;
            if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->max_material_count);
            }
            if ( this->max_material_count >= *(_DWORD *)(v3 + 80) )
            {
              v35 = ((v3 + 224) >> 3) + 2147450880;
              *(_WORD *)v35 = 0;
              *(_BYTE *)(v35 + 2) = 0;
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
              std::vector<unsigned int>::vector(
                (std::vector<unsigned int> *const)(v3 + 224),
                1uLL,
                id,
                (const std::vector<unsigned int>::allocator_type *)(v3 + 48));
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
              v37 = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::emplace<std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&>(
                      &this->bartender_material_to_formula_affix_map,
                      (std::map<unsigned int,unsigned int> *)(v3 + 928),
                      (std::vector<unsigned int> *)(v3 + 224),
                      (std::map<unsigned int,unsigned int> *)&this->bartender_material_to_formula_affix_map,
                      v36);
              if ( !v37.second )
              {
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 736, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 736),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                  "rewriteBartenderFormulaExcelConfig",
                  254);
                v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 736),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v39 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                        v38,
                        (const char (*)[61])"[BARTENDER] duplicate drink_material_map, formula_affix_vec:");
                v40 = common::milog::MiLogStream::operator<<<unsigned int>(
                        v39,
                        (const std::vector<unsigned int> *)(v3 + 224));
                v41 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v40,
                        (const char (*)[29])", another formula_affix_vec:");
                v42 = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::operator[](
                        &this->bartender_material_to_formula_affix_map,
                        (const std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::key_type *)(v3 + 928));
                common::milog::MiLogStream::operator<<<unsigned int>(v41, v42);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
                v43 = 0;
              }
              else if ( std::vector<unsigned int>::empty(&config->available_affix_list) )
              {
                v43 = 0;
              }
              else
              {
                v44 = ((v3 + 1008) >> 3) + 2147450880;
                *(_DWORD *)v44 = 0;
                *(_WORD *)(v44 + 4) = 0;
                M_current = std::vector<unsigned int>::end(&config->available_affix_list)._M_current;
                v46._M_current = std::vector<unsigned int>::begin(&config->available_affix_list)._M_current;
                std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
                  (std::set<unsigned int> *const)(v3 + 1008),
                  v46,
                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
                v47 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 1008));
                if ( v47 == std::vector<unsigned int>::size(&config->available_affix_list) )
                {
                  v53 = ((v3 + 288) >> 3) + 2147450880;
                  *(_WORD *)v53 = 0;
                  *(_BYTE *)(v53 + 2) = 0;
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 64));
                  M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 1008))._M_node;
                  v55._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 1008))._M_node;
                  std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
                    (std::vector<unsigned int> *const)(v3 + 288),
                    v55,
                    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
                    (const std::vector<unsigned int>::allocator_type *)(v3 + 64));
                  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 64));
                  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                  if ( *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_material_count >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4(&this->max_material_count);
                  }
                  max_material_count = this->max_material_count;
                  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 80);
                  if ( ActivityBartenderExcelConfigMgr::rewriteFormulaOrderMapByDFS(
                         this,
                         max_material_count - *(_DWORD *)(v3 + 80),
                         (const std::vector<unsigned int> *)(v3 + 288),
                         0,
                         (std::map<unsigned int,unsigned int> *)(v3 + 928),
                         (std::vector<unsigned int> *)(v3 + 224)) )
                  {
                    *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 864, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 864),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                      "rewriteBartenderFormulaExcelConfig",
                      279);
                    v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 864),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v57,
                      (const char (*)[23])"[BARTENDER] dfs failed");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                    *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v58 = 0;
                  }
                  else
                  {
                    v58 = 1;
                  }
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
                  if ( v58 == 1 )
                    v52 = 2;
                  else
                    v52 = 1;
                }
                else
                {
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 800, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 800),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                    "rewriteBartenderFormulaExcelConfig",
                    270);
                  v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 800),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v49 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          v48,
                          (const char (*)[44])"[BARTENDER] duplicate available_affix_list:");
                  v50 = common::milog::MiLogStream::operator<<<unsigned int>(v49, &config->available_affix_list);
                  v51 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v50,
                          (const char (*)[13])",formula_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                  *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                  v52 = 0;
                }
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1008));
                if ( v52 )
                {
                  if ( v52 == 2 )
                    v43 = 2;
                  else
                    v43 = 1;
                }
                else
                {
                  v43 = 0;
                }
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
              if ( v43 )
              {
                if ( v43 == 2 )
                  v17 = 2;
                else
                  v17 = 1;
              }
              else
              {
                v17 = 0;
              }
            }
            else
            {
LABEL_67:
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 672, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 672),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "rewriteBartenderFormulaExcelConfig",
                245);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      v31,
                      (const char (*)[49])"[BARTENDER] base formula material count invalid:");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v3 + 80));
              v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v33,
                      (const char (*)[14])", formula_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
              v17 = 0;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->default_fail_formula_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->default_fail_formula_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->default_fail_formula_id);
            }
            if ( this->default_fail_formula_id )
            {
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 608, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 608),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "rewriteBartenderFormulaExcelConfig",
                233);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      v23,
                      (const char (*)[47])"[BARTENDER] duplicate default_fail_formula_id:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      &this->default_fail_formula_id);
              v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v25,
                      (const char (*)[18])", cur_formula_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v17 = 1;
            }
            else
            {
              v27 = ((unsigned __int8)id & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(id);
              }
              v28 = *id;
              v29 = *(_BYTE *)(((unsigned __int64)&this->default_fail_formula_id >> 3) + 0x7FFF8000);
              if ( v29 != 0 && v29 <= 3 )
              {
                LOBYTE(v27) = v29 != 0;
                __asan_report_store4(&this->default_fail_formula_id, v27);
              }
              this->default_fail_formula_id = v28;
              v17 = 0;
            }
          }
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
        if ( v17 )
        {
          if ( v17 == 2 )
            v9 = 2;
          else
            v9 = 1;
        }
        else
        {
          v9 = 0;
        }
      }
    }
    v59 = ((v3 + 928) >> 3) + 2147450880;
    *(_DWORD *)v59 = -117901064;
    *(_WORD *)(v59 + 4) = -1800;
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    v60 = ((v3 + 224) >> 3) + 2147450880;
    *(_WORD *)v60 = -1800;
    *(_BYTE *)(v60 + 2) = -8;
    v61 = ((v3 + 1008) >> 3) + 2147450880;
    *(_DWORD *)v61 = -117901064;
    *(_WORD *)(v61 + 4) = -1800;
    v62 = ((v3 + 288) >> 3) + 2147450880;
    *(_WORD *)v62 = -1800;
    *(_BYTE *)(v62 + 2) = -8;
    if ( v9 && v9 != 2 )
    {
      v63 = 0;
      goto LABEL_112;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderFormulaExcelConfig>,false,false> *const)(v3 + 96));
  }
  v63 = 1;
LABEL_112:
  if ( v63 == 1 )
    v2 = ret;
  if ( v74 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v74);
  }
  return v2;
};

// Line 288: range 0000000012ABA2D2-0000000012ABB12E
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteFormulaOrderMapByDFS(
        ActivityBartenderExcelConfigMgr *const this,
        uint32_t left_count,
        const std::vector<unsigned int> *affix_vec,
        uint32_t index,
        std::map<unsigned int,unsigned int> *drink_material_map,
        std::vector<unsigned int> *formula_affix_vec)
{
  int32_t v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  __int64 v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_affix_to_material_count_map; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v21; // rdx
  char *v22; // rsi
  bool v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v26; // rdx
  std::pair<unsigned int,unsigned int> *p_second; // rax
  unsigned int first; // ecx
  char v29; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v30; // rdx
  unsigned int *v31; // rax
  unsigned __int64 v32; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // r15
  std::map<unsigned int,unsigned int>::iterator v34; // rax
  unsigned __int64 v35; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v37; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  std::vector<unsigned int> *v39; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::mapped_type *v45; // rax
  int v46; // r15d
  common::milog::MiLogStream *v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  uint32_t cnt; // [rsp+38h] [rbp-298h]
  char v57[656]; // [rsp+40h] [rbp-290h] BYREF

  v7 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(608LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "12 32 1 9 <unknown> 48 4 12 affix_id:300 64 4 21 affix_material_id:312 80 8 17 material_iter:306"
                        " 112 8 9 <unknown> 144 24 25 cur_formula_affix_vec:317 208 32 9 <unknown> 272 32 9 <unknown> 336"
                        " 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 48 26 cur_drink_material_map:316";
  *(_QWORD *)(v7 + 16) = ActivityBartenderExcelConfigMgr::rewriteFormulaOrderMapByDFS;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556927;
  v9[536862722] = 61956;
  v9[536862722] = -234881024;
  v9[536862723] = 62194;
  v9[536862723] = -234881024;
  v9[536862724] = 62194;
  v9[536862725] = -218959360;
  v9[536862726] = 62194;
  v9[536862727] = -219021312;
  v9[536862728] = 62194;
  v9[536862729] = -219021312;
  v9[536862730] = 62194;
  v9[536862731] = -219021312;
  v9[536862732] = 62194;
  v9[536862733] = -219021312;
  v9[536862734] = 62194;
  v9[536862735] = -219021312;
  v9[536862736] = 62194;
  v9[536862738] = -202116109;
  if ( !left_count || index >= std::vector<unsigned int>::size(affix_vec) )
  {
    v6 = 0;
  }
  else if ( std::vector<unsigned int>::empty(formula_affix_vec) )
  {
    if ( *(char *)(((v7 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v7 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v7 - 17) & 7) >= *(_BYTE *)(((v7 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v7 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v7 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "rewriteFormulaOrderMapByDFS",
      296);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v7 + 208),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v11,
      (const char (*)[43])"[BARTENDER] formula_affix_vec empty, error");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 208));
    v6 = -1;
  }
  else
  {
    v12 = index;
    v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                affix_vec,
                                                                                                index);
    v14 = (int *)v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    v16 = *(_BYTE *)(((v7 + 48) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v12) = v16 != 0;
      __asan_report_store4(v7 + 48, v12);
    }
    *(_DWORD *)(v7 + 48) = v15;
    v17 = *(unsigned int *)(v7 + 48);
    if ( data::ActivityBartenderExcelConfigMgrBase::findBartenderAffixExcelConfig(this, v17) )
    {
      p_affix_to_material_count_map = &this->affix_to_material_count_map;
      if ( *(_BYTE *)(((v7 + 80) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 80, v17);
      *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v7 + 80) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_affix_to_material_count_map, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v7 + 48));
      v21 = &this->affix_to_material_count_map;
      if ( *(_BYTE *)(((v7 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 112, v7 + 48);
      *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v7 + 112) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v21);
      v22 = (char *)(v7 + 112);
      v23 = std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v7 + 80),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v7 + 112));
      *(_BYTE *)(((v7 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v23 )
      {
        *(_DWORD *)(((v7 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v7 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v7 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 + 111) & 7) >= *(_BYTE *)(((v7 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v7 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v7 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteFormulaOrderMapByDFS",
          309);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v7 + 336),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                v24,
                (const char (*)[67])"[BARTENDER] affix is not in affix_to_material_count_map, affix_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v7 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 336));
        v6 = -1;
      }
      else
      {
        *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) = 4;
        v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v7 + 80));
        p_second = &v26->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        first = v26->second.first;
        v29 = *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000);
        if ( v29 != 0 && v29 <= 3 )
        {
          LOBYTE(v22) = v29 != 0;
          __asan_report_store4(v7 + 64, v22);
        }
        *(_DWORD *)(v7 + 64) = first;
        v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v7 + 80));
        v31 = &v30->second.second;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        for ( cnt = v30->second.second; cnt <= left_count; ++cnt )
        {
          v32 = ((v7 + 528) >> 3) + 2147450880;
          *(_DWORD *)v32 = 0;
          *(_WORD *)(v32 + 4) = 0;
          M_node = std::map<unsigned int,unsigned int>::end(drink_material_map)._M_node;
          v34._M_node = std::map<unsigned int,unsigned int>::begin(drink_material_map)._M_node;
          std::map<unsigned int,unsigned int>::map<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>>(
            (std::map<unsigned int,unsigned int> *const)(v7 + 528),
            v34,
            (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >)M_node);
          v35 = ((v7 + 144) >> 3) + 2147450880;
          *(_WORD *)v35 = 0;
          *(_BYTE *)(v35 + 2) = 0;
          *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v7 + 32));
          M_current = std::vector<unsigned int>::end(formula_affix_vec)._M_current;
          v37._M_current = std::vector<unsigned int>::begin(formula_affix_vec)._M_current;
          std::vector<unsigned int>::vector<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
            (std::vector<unsigned int> *const)(v7 + 144),
            v37,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            (const std::vector<unsigned int>::allocator_type *)(v7 + 32));
          std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v7 + 32));
          *(_BYTE *)(((v7 + 32) >> 3) + 0x7FFF8000) = -8;
          v38 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v7 + 528),
                  (const std::map<unsigned int,unsigned int>::key_type *)(v7 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v38);
          }
          *v38 += cnt;
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v7 + 144),
            (const std::vector<unsigned int>::value_type *)(v7 + 48));
          v40 = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::emplace<std::map<unsigned int,unsigned int>&,std::vector<unsigned int>&>(
                  &this->bartender_material_to_formula_affix_map,
                  (std::map<unsigned int,unsigned int> *)(v7 + 528),
                  (std::vector<unsigned int> *)(v7 + 144),
                  (std::map<unsigned int,unsigned int> *)&this->bartender_material_to_formula_affix_map,
                  v39);
          if ( !v40.second )
          {
            *(_DWORD *)(((v7 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v7 + 400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v7 + 431) >> 3) + 0x7FFF8000) != 0
              && (char)((v7 - 81) & 7) >= *(_BYTE *)(((v7 + 431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v7 + 400, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v7 + 400),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "rewriteFormulaOrderMapByDFS",
              322);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v7 + 400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v41,
                    (const char (*)[61])"[BARTENDER] duplicate drink_material_map, formula_affix_vec:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int>(
                    v42,
                    (const std::vector<unsigned int> *)(v7 + 144));
            v44 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v43,
                    (const char (*)[29])", another formula_affix_vec:");
            v45 = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::operator[](
                    &this->bartender_material_to_formula_affix_map,
                    (const std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::key_type *)(v7 + 528));
            common::milog::MiLogStream::operator<<<unsigned int>(v44, v45);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 400));
            *(_DWORD *)(((v7 + 400) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            v46 = 0;
          }
          else if ( std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::size(&this->bartender_material_to_formula_affix_map) <= 0xF4240 )
          {
            if ( ActivityBartenderExcelConfigMgr::rewriteFormulaOrderMapByDFS(
                   this,
                   left_count - cnt,
                   affix_vec,
                   index + 1,
                   (std::map<unsigned int,unsigned int> *)(v7 + 528),
                   (std::vector<unsigned int> *)(v7 + 144)) )
            {
              v6 = -1;
              v46 = 0;
            }
            else
            {
              v46 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v7 + 464) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v7 + 464) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v7 + 495) >> 3) + 0x7FFF8000) != 0
              && (char)((v7 - 17) & 7) >= *(_BYTE *)(((v7 + 495) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v7 + 464, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v7 + 464),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "rewriteFormulaOrderMapByDFS",
              328);
            v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v7 + 464),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              v47,
              (const char (*)[44])"[BARTENDER] max_material_count is too large");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 464));
            *(_DWORD *)(((v7 + 464) >> 3) + 0x7FFF8000) = -117901064;
            v6 = -1;
            v46 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v7 + 144));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v7 + 528));
          v48 = ((v7 + 528) >> 3) + 2147450880;
          *(_DWORD *)v48 = -117901064;
          *(_WORD *)(v48 + 4) = -1800;
          v49 = ((v7 + 144) >> 3) + 2147450880;
          *(_WORD *)v49 = -1800;
          *(_BYTE *)(v49 + 2) = -8;
          if ( v46 != 1 )
            goto LABEL_54;
        }
        v6 = ActivityBartenderExcelConfigMgr::rewriteFormulaOrderMapByDFS(
               this,
               left_count,
               affix_vec,
               index + 1,
               drink_material_map,
               formula_affix_vec);
      }
    }
    else
    {
      if ( *(char *)(((v7 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v7 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v7 + 47) & 7) >= *(_BYTE *)(((v7 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v7 + 272, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v7 + 272),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteFormulaOrderMapByDFS",
        303);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v7 + 272),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              v18,
              (const char (*)[68])"[BARTENDER] formula findBartenderAffixExcelConfig failed, affix_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v7 + 272));
      v6 = -1;
    }
  }
LABEL_54:
  if ( v57 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v9 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v9 + 2147450880 - (((_DWORD)v9 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8048) = -168430091;
  }
  return v6;
};

// Line 340: range 0000000012ABB130-0000000012ABB8E7
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderFormulaExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  const char *v7; // rsi
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // eax
  int32_t result; // eax
  std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > > *__for_range; // [rsp+10h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true>::reference v17; // [rsp+18h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > >::type *formula_affix_vec; // [rsp+28h] [rbp-1B8h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_0; // [rsp+30h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v20; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *quest_id; // [rsp+40h] [rbp-1A0h]
  char v22[400]; // [rsp+50h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:346 64 8 13 __for_end:346 96 8 15 __for_begin:354 128 8 13 __for_end:354 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityBartenderExcelConfigMgr::checkBartenderFormulaExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  if ( std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::size(&this->bartender_material_to_formula_affix_map) <= 0xF4240 )
  {
    __for_range = &this->bartender_material_to_formula_affix_map;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 32, txt_config_mgr);
    *(std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::iterator *)(v3 + 32) = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::iterator *)(v3 + 64) = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::end(__for_range);
    while ( 1 )
    {
      v7 = (const char *)(v3 + 64);
      if ( !std::__detail::operator!=<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)(v3 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)(v3 + 64)) )
      {
        v9 = 1;
        goto LABEL_20;
      }
      v17 = std::__detail::_Node_iterator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true> *const)(v3 + 32));
      std::get<0ul,std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>(v17);
      formula_affix_vec = (std::tuple_element<1,const std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > >::type *)std::get<1ul,std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>(v17);
      if ( std::vector<unsigned int>::empty(formula_affix_vec) )
        break;
      std::__detail::_Node_iterator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true> *const)(v3 + 32));
    }
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
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "checkBartenderFormulaExcelConfig",
      350);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v7 = "[BARTENDER] formula_affix_vec empty";
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v8,
      (const char (*)[36])"[BARTENDER] formula_affix_vec empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v9 = 0;
LABEL_20:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v9 == 1 )
    {
      __for_range_0 = &this->quest_to_unlock_formual_map;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v7);
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, v7);
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_0);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 128)) )
        {
          v13 = 1;
          goto LABEL_35;
        }
        v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 96));
        quest_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v20);
        std::get<1ul,unsigned int const,std::set<unsigned int>>(v20);
        p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(quest_id);
        }
        if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *quest_id) )
          break;
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 96));
      }
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "checkBartenderFormulaExcelConfig",
        358);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              v11,
              (const char (*)[51])"[BARTENDER] findQuestExcelConfig failed, quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, quest_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v13 = 0;
LABEL_35:
      if ( v13 == 1 )
        v2 = 0;
    }
  }
  else
  {
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
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "checkBartenderFormulaExcelConfig",
      343);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v6,
      (const char (*)[44])"[BARTENDER] max_material_count is too large");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v2 = -1;
  }
  result = v2;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 366: range 0000000012ABB8E8-0000000012ABBE55
int32_t __cdecl ActivityBartenderExcelConfigMgr::internalAddBartenderMaterial(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<data::BartenderMaterial> *material_vec,
        std::map<unsigned int,unsigned int> *drink_material_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  DisplayItemExcelConfigMgr *p_display_item_config_mgr; // rcx
  const unsigned int *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-114h]
  const data::BartenderMaterial *bartender_material; // [rsp+38h] [rbp-108h]
  char v19[256]; // [rsp+40h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 15 __for_begin:368 64 8 13 __for_end:368 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityBartenderExcelConfigMgr::internalAddBartenderMaterial;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, txt_config_mgr);
  *(std::vector<data::BartenderMaterial>::const_iterator *)(v4 + 32) = std::vector<data::BartenderMaterial>::begin(material_vec);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::vector<data::BartenderMaterial>::const_iterator *)(v4 + 64) = std::vector<data::BartenderMaterial>::end(material_vec);
  while ( __gnu_cxx::operator!=<data::BartenderMaterial const*,std::vector<data::BartenderMaterial>>(
            (const __gnu_cxx::__normal_iterator<const data::BartenderMaterial*,std::vector<data::BartenderMaterial> > *)(v4 + 32),
            (const __gnu_cxx::__normal_iterator<const data::BartenderMaterial*,std::vector<data::BartenderMaterial> > *)(v4 + 64)) )
  {
    bartender_material = __gnu_cxx::__normal_iterator<data::BartenderMaterial const*,std::vector<data::BartenderMaterial>>::operator*((const __gnu_cxx::__normal_iterator<const data::BartenderMaterial*,std::vector<data::BartenderMaterial> > *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&bartender_material->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&bartender_material->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&bartender_material->id);
    }
    if ( bartender_material->id )
    {
      p_display_item_config_mgr = &txt_config_mgr->display_item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&bartender_material->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&bartender_material->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&bartender_material->id);
      }
      if ( !DisplayItemExcelConfigMgr::isBartenderMaterial(p_display_item_config_mgr, bartender_material->id) )
      {
        *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 96, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "internalAddBartenderMaterial",
          376);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v4 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v9,
                (const char (*)[40])"[BARTENDER] item type invalid, item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &bartender_material->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
        *(_DWORD *)(((v4 + 96) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v11 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                drink_material_map,
                &bartender_material->id,
                &bartender_material->count,
                &bartender_material->id,
                v8);
        if ( !v11.second )
        {
          *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 160, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 160),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "internalAddBartenderMaterial",
            382);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 160),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v12,
                  (const char (*)[31])"[BARTENDER] duplicate item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &bartender_material->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
          *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    __gnu_cxx::__normal_iterator<data::BartenderMaterial const*,std::vector<data::BartenderMaterial>>::operator++((__gnu_cxx::__normal_iterator<const data::BartenderMaterial*,std::vector<data::BartenderMaterial> > *const)(v4 + 32));
  }
  result = ret;
  if ( v19 == (char *)v4 )
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

// Line 391: range 0000000012ABBE56-0000000012ABD298
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderOrderExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  ActivityBartenderExcelConfigMgr *v6; // rcx
  __int64 formula_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  unsigned __int64 v12; // rax
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  ActivityBartenderExcelConfigMgr *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  unsigned __int64 v34; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v36; // r14
  std::vector<unsigned int> *v37; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>,bool> v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  std::unordered_set<unsigned int> *v41; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  int32_t ret; // [rsp+2Ch] [rbp-3C4h]
  data::BartenderOrderExcelConfigMap *__for_range; // [rsp+30h] [rbp-3C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false,false>::reference v50; // [rsp+38h] [rbp-3B8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderOrderExcelConfig> >::type *id; // [rsp+40h] [rbp-3B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderOrderExcelConfig> >::type *config; // [rsp+48h] [rbp-3A8h]
  data::BartenderFormulaExcelConfig *fomula_config_ptr; // [rsp+50h] [rbp-3A0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-398h]
  char v55[912]; // [rsp+60h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 1 9 <unknown> 64 4 7 aid:409 80 8 15 __for_begin:393 112 8 13 __for_end:393 144 8 15 __for"
                        "_begin:409 176 8 13 __for_end:409 208 8 9 <unknown> 240 8 9 <unknown> 272 24 21 formula_affix_ve"
                        "c:434 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9 <unkn"
                        "own> 656 32 9 <unknown> 720 32 9 <unknown> 784 48 13 affix_set:408";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::rewriteBartenderOrderExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = 61956;
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
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -218959360;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862733] = -219021312;
  v4[536862734] = 62194;
  v4[536862735] = -219021312;
  v4[536862736] = 62194;
  v4[536862737] = -219021312;
  v4[536862738] = 62194;
  v4[536862739] = -219021312;
  v4[536862740] = 62194;
  v4[536862741] = -219021312;
  v4[536862742] = 62194;
  v4[536862743] = -219021312;
  v4[536862744] = 62194;
  v4[536862746] = -202116109;
  ret = 0;
  __for_range = &this->bartender_order_excel_config_map;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderOrderExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::BartenderOrderExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderOrderExcelConfig>::iterator *)(v2 + 112) = std::unordered_map<unsigned int,data::BartenderOrderExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false> *)(v2 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false> *)(v2 + 112)) )
  {
    v50 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false,false> *const)(v2 + 80));
    id = std::get<0ul,unsigned int const,data::BartenderOrderExcelConfig>(v50);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderOrderExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderOrderExcelConfig>(v50);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)&config->formula_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->formula_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->formula_id);
      }
      formula_id = config->formula_id;
      fomula_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderFormulaExcelConfig(v6, formula_id);
      if ( fomula_config_ptr )
      {
        v12 = ((v2 + 784) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_WORD *)(v12 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 784));
        __for_range_0 = &config->affix_id;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 144, formula_id);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 144) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 176, formula_id);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 176) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v13 = (char *)(v2 + 176);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 144),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 176)) )
            break;
          *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
          v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
          v15 = (int *)v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          v16 = *v15;
          v17 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
          if ( v17 != 0 && v17 <= 3 )
          {
            LOBYTE(v13) = v17 != 0;
            __asan_report_store4(v2 + 64, v13);
          }
          *(_DWORD *)(v2 + 64) = v16;
          if ( *(_DWORD *)(v2 + 64) )
          {
            v18 = this;
            if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 64);
            if ( data::ActivityBartenderExcelConfigMgrBase::findBartenderAffixExcelConfig(
                   v18,
                   *(unsigned int *)(v2 + 64)) )
            {
              if ( !common::tools::MiscUtils::isContains<unsigned int>(
                      &fomula_config_ptr->available_affix_list,
                      (const unsigned int *)(v2 + 64)) )
              {
                *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 528) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 559) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 528, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 528),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                  "rewriteBartenderOrderExcelConfig",
                  423);
                v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 528),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v24 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                        v23,
                        (const char (*)[59])"[BARTENDER] affix is invalid for formula failed, affix_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v2 + 64));
                v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v25,
                        (const char (*)[14])", formula_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->formula_id);
                v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v27,
                        (const char (*)[12])", order_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 528));
                *(_DWORD *)(((v2 + 528) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
              else
              {
                v29 = std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v2 + 784),
                        (const std::set<unsigned int>::value_type *)(v2 + 64));
                if ( !v29.second )
                {
                  *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 592) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 623) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 592, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 592),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                    "rewriteBartenderOrderExcelConfig",
                    429);
                  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 592),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v31 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          v30,
                          (const char (*)[39])"[BARTENDER] duplicate order, affix_id:");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v2 + 64));
                  v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v32,
                          (const char (*)[12])", order_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 592));
                  *(_DWORD *)(((v2 + 592) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 464) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 495) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 464, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 464),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "rewriteBartenderOrderExcelConfig",
                417);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 464),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v20 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      v19,
                      (const char (*)[60])"[BARTENDER] findBartenderAffixExcelConfig failed, affix_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 64));
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v21,
                      (const char (*)[12])", order_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 464));
              *(_DWORD *)(((v2 + 464) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 144));
        }
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
        v34 = ((v2 + 272) >> 3) + 2147450880;
        *(_WORD *)v34 = 0;
        *(_BYTE *)(v34 + 2) = 0;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 48));
        std::vector<unsigned int>::vector(
          (std::vector<unsigned int> *const)(v2 + 272),
          1uLL,
          &config->formula_id,
          (const std::vector<unsigned int>::allocator_type *)(v2 + 48));
        std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 48));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 784))._M_node;
        v36 = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 784))._M_node;
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 208, 1LL);
        *(std::vector<unsigned int>::iterator *)(v2 + 208) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 272));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 240),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 208));
        if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v2 + 240);
        std::vector<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>,void>(
          (std::vector<unsigned int> *const)(v2 + 272),
          *(std::vector<unsigned int>::const_iterator *)(v2 + 240),
          (std::_Rb_tree_const_iterator<unsigned int>)v36,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
        v38 = std::unordered_map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int>&>(
                &this->order_to_formula_affix_map,
                id,
                (std::vector<unsigned int> *)(v2 + 272),
                (const unsigned int *)&this->order_to_formula_affix_map,
                v37);
        if ( !v38.second )
        {
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "rewriteBartenderOrderExcelConfig",
            438);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  v39,
                  (const char (*)[32])"[BARTENDER] duplicate order id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 656));
          *(_DWORD *)(((v2 + 656) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          v41 = std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int>>,std::equal_to<std::vector<unsigned int>>,std::allocator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>>>::operator[](
                  &this->formula_affix_to_order_map,
                  (const std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int> >,std::equal_to<std::vector<unsigned int> >,std::allocator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> > > >::key_type *)(v2 + 272));
          v42 = std::unordered_set<unsigned int>::insert(v41, id);
          if ( !v42.second )
          {
            *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 720) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 751) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 720, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 720),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "rewriteBartenderOrderExcelConfig",
              444);
            v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 720),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v44 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v43,
                    (const char (*)[32])"[BARTENDER] duplicate order id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 720));
            *(_DWORD *)(((v2 + 720) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 272));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 784));
      }
      else
      {
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 81) & 7) >= *(_BYTE *)(((v2 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "rewriteBartenderOrderExcelConfig",
          404);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 400),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
               v8,
               (const char (*)[64])"[BARTENDER] findBartenderFormulaExcelConfig failed, formula_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->formula_id);
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", order_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 400));
        *(_DWORD *)(((v2 + 400) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderOrderExcelConfig",
        397);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        v5,
        (const char (*)[36])"[BARTENDER] order_id cannot be zero");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v45 = ((v2 + 784) >> 3) + 2147450880;
    *(_DWORD *)v45 = -117901064;
    *(_WORD *)(v45 + 4) = -1800;
    v46 = ((v2 + 272) >> 3) + 2147450880;
    *(_WORD *)v46 = -1800;
    *(_BYTE *)(v46 + 2) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderOrderExcelConfig>,false,false> *const)(v2 + 80));
  }
  if ( v55 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return ret;
};

// Line 453: range 0000000012ABD29A-0000000012ABD2AC
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderOrderExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 458: range 0000000012ABD2AE-0000000012ABD623
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderTaskExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::set<unsigned int> *v5; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::BartenderTaskExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:460 64 8 13 __for_end:460 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::rewriteBartenderTaskExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->bartender_task_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BartenderTaskExcelConfig>(v12);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderTaskExcelConfig>(v12);
    v5 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->parent_quest_to_task_map,
           &config->parent_quest_id);
    v6 = std::set<unsigned int>::insert(v5, id);
    if ( !v6.second )
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "rewriteBartenderTaskExcelConfig",
        464);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v7,
             (const char (*)[31])"[BARTENDER] duplicate task_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 473: range 0000000012ABD624-0000000012ABD9E2
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderTaskExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *parent_quest_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *task_set; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:475 64 8 13 __for_end:475 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::checkBartenderTaskExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->parent_quest_to_task_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
    parent_quest_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v13);
    task_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v13);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)parent_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(parent_quest_id);
    }
    if ( !data::QuestExcelConfigMgrBase::findMainQuestExcelConfig(p_quest_config_mgr, *parent_quest_id) )
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "checkBartenderTaskExcelConfig",
        479);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             v6,
             (const char (*)[54])"[BARTENDER] findMainQuestExcelConfig parent_quest_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, parent_quest_id);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", task_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v9, task_set);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 32));
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

// Line 488: range 0000000012ABD9E4-0000000012ABD9F6
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderTaskOrderExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 493: range 0000000012ABD9F8-0000000012ABDF5A
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderTaskOrderExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  data::BartenderTaskOrderExcelConfigMap *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig> >::type *id; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig> >::type *config; // [rsp+38h] [rbp-108h]
  char v18[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:495 64 8 13 __for_end:495 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::checkBartenderTaskOrderExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->bartender_task_order_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderTaskOrderExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BartenderTaskOrderExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderTaskOrderExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BartenderTaskOrderExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BartenderTaskOrderExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderTaskOrderExcelConfig>(v15);
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *id) )
    {
      if ( ActivityBartenderExcelConfigMgr::checkOrderFormualAffixDuplicate(this, &config->order_id) )
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
          4u,
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "checkBartenderTaskOrderExcelConfig",
          506);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               v8,
               (const char (*)[66])"[BARTENDER] checkOrderFormualAffixDuplicate failed, order_id_vec:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, &config->order_id);
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "checkBartenderTaskOrderExcelConfig",
        499);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             v6,
             (const char (*)[43])"[BARTENDER] findQuestExcelConfig quest_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderTaskOrderExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 515: range 0000000012ABDF5C-0000000012ABDF6E
int32_t __cdecl ActivityBartenderExcelConfigMgr::rewriteBartenderLevelExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 520: range 0000000012ABDF70-0000000012ABE642
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkBartenderLevelExcelConfig(
        ActivityBartenderExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-164h]
  data::BartenderLevelExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *id; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *config; // [rsp+38h] [rbp-148h]
  char v18[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:522 64 8 13 __for_end:522 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityBartenderExcelConfigMgr::checkBartenderLevelExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->bartender_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::BartenderLevelExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderLevelExcelConfig>(v15);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( *id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->level_duration >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->level_duration >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&config->level_duration);
      }
      if ( config->level_duration )
      {
        if ( ActivityBartenderExcelConfigMgr::checkOrderFormualAffixDuplicate(this, &config->order_list) )
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
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "checkBartenderLevelExcelConfig",
            538);
          v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 224),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                 v8,
                 (const char (*)[66])"[BARTENDER] checkOrderFormualAffixDuplicate failed, order_id_vec:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, &config->order_list);
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
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
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "checkBartenderLevelExcelConfig",
          532);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               v6,
               (const char (*)[41])"[BARTENDER] level_duration 0 , level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
        "checkBartenderLevelExcelConfig",
        526);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v5,
        (const char (*)[26])"[BARTENDER] level_id is 0");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 547: range 0000000012ABE644-0000000012ABF8CA
int32_t __cdecl ActivityBartenderExcelConfigMgr::checkOrderFormualAffixDuplicate(
        const ActivityBartenderExcelConfigMgr *const this,
        const std::vector<unsigned int> *order_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_order_to_formula_affix_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v19; // rdx
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int> *p_second; // rdx
  std::vector<unsigned int> *v24; // rsi
  bool v25; // al
  char v26; // r15
  std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > >::pointer v27; // rax
  std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > >::pointer v28; // rax
  char v29; // dl
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  __int64 v37; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v38; // rax
  std::set<data::BartenderCupType> *v39; // rax
  std::pair<std::_Rb_tree_const_iterator<data::BartenderCupType>,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // r14
  __int64 v48; // rax
  int v49; // edx
  int32_t result; // eax
  const data::BartenderOrderExcelConfig *order_config_ptr; // [rsp+28h] [rbp-398h]
  char v52[912]; // [rsp+30h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 4 12 order_id:555 48 4 9 <unknown> 64 8 15 __for_begin:555 96 8 13 __for_end:555 128 8 8 i"
                        "ter:568 160 8 9 <unknown> 192 8 12 cup_iter:574 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unk"
                        "nown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unkn"
                        "own> 640 32 9 <unknown> 704 48 13 order_set:553 784 48 31 order_formula_affix_cup_map:554";
  *(_QWORD *)(v3 + 16) = ActivityBartenderExcelConfigMgr::checkOrderFormualAffixDuplicate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
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
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -219021312;
  v5[536862744] = 62194;
  v5[536862746] = -202116109;
  if ( std::vector<unsigned int>::empty(order_vec) )
  {
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
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "checkOrderFormualAffixDuplicate",
      550);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 320),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      v6,
      (const char (*)[36])"[BARTENDER] order_vec empty, failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
    v2 = -1;
  }
  else
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 704));
    std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::map((std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>> *const)(v3 + 784));
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, order_vec);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(order_vec);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, order_vec);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(order_vec);
    while ( 1 )
    {
      v7 = (char *)(v3 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
        break;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 32, v7);
      }
      *(_DWORD *)(v3 + 32) = v10;
      order_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderOrderExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 32));
      if ( order_config_ptr )
      {
        v15 = std::set<unsigned int>::insert(
                (std::set<unsigned int> *const)(v3 + 704),
                (const std::set<unsigned int>::value_type *)(v3 + 32));
        if ( !v15.second )
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
            "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
            "checkOrderFormualAffixDuplicate",
            565);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  v16,
                  (const char (*)[42])"[BARTENDER] duplicate order_id, order_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
          *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          p_order_to_formula_affix_map = &this->order_to_formula_affix_map;
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 128, v3 + 32);
          *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(p_order_to_formula_affix_map, (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          v19 = &this->order_to_formula_affix_map;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, v3 + 32);
          *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v19);
          v20 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160));
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( v20 )
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
              "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
              "checkOrderFormualAffixDuplicate",
              571);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                    v21,
                    (const char (*)[71])"[BARTENDER] order_to_formula_affix_map find order_id failed, order_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
          }
          else
          {
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128))->second;
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 192, v3 + 160);
            v24 = p_second;
            *(std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::iterator *)(v3 + 192) = std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::find((std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>> *const)(v3 + 784), p_second);
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 224, v24);
            *(std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::iterator *)(v3 + 224) = std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::end((std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>> *const)(v3 + 784));
            v25 = std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > >::_Self *)(v3 + 192),
                    (const std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > >::_Self *)(v3 + 224));
            *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
            if ( !v25 )
              goto LABEL_55;
            v26 = 0;
            v27 = std::_Rb_tree_iterator<std::pair<std::vector<unsigned int> const,std::set<data::BartenderCupType>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > > *const)(v3 + 192));
            if ( common::tools::MiscUtils::isContains<std::set<data::BartenderCupType>,data::BartenderCupType>(
                   &v27->second,
                   &order_config_ptr->cup_type) )
            {
              goto LABEL_43;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 48, &order_config_ptr->cup_type);
            *(_DWORD *)(v3 + 48) = 0;
            v26 = 1;
            v28 = std::_Rb_tree_iterator<std::pair<std::vector<unsigned int> const,std::set<data::BartenderCupType>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::vector<unsigned int>,std::set<data::BartenderCupType> > > *const)(v3 + 192));
            if ( common::tools::MiscUtils::isContains<std::set<data::BartenderCupType>,data::BartenderCupType>(
                   &v28->second,
                   (const data::BartenderCupType *)(v3 + 48)) )
            {
LABEL_43:
              v29 = 1;
            }
            else
            {
              v29 = 0;
            }
            if ( v26 )
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            if ( v29 )
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
                "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                "checkOrderFormualAffixDuplicate",
                579);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      v30,
                      (const char (*)[56])"[BARTENDER] duplicate formula+affix+cup_type, order_id:");
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v3 + 32));
              v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v32,
                      (const char (*)[21])", formula_affix_vec:");
              v34 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
              v35 = common::milog::MiLogStream::operator<<<unsigned int>(v33, &v34->second);
              v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v35,
                      (const char (*)[12])", cup_type:");
              *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&order_config_ptr->cup_type);
              }
              v37 = (__int64)data::enumValToStr(order_config_ptr->cup_type, (__int64)", cup_type:");
              if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
                v37 = __asan_report_store8(v3 + 256, ", cup_type:");
              *(_QWORD *)(v3 + 256) = v37;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v36, (const char *const *)(v3 + 256));
              *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
              *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v14 = 0;
            }
            else
            {
LABEL_55:
              v38 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
              v39 = std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::operator[](
                      (std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>> *const)(v3 + 784),
                      &v38->second);
              v40 = std::set<data::BartenderCupType>::insert(v39, &order_config_ptr->cup_type);
              if ( !v40.second )
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
                  "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
                  "checkOrderFormualAffixDuplicate",
                  585);
                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 640),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v42 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        v41,
                        (const char (*)[56])"[BARTENDER] duplicate formula+affix+cup_type, order_id:");
                v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v42,
                        (const unsigned int *)(v3 + 32));
                v44 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v43,
                        (const char (*)[21])", formula_affix_vec:");
                v45 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128));
                v46 = common::milog::MiLogStream::operator<<<unsigned int>(v44, &v45->second);
                v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v46,
                        (const char (*)[12])", cup_type:");
                *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&order_config_ptr->cup_type);
                }
                v48 = (__int64)data::enumValToStr(order_config_ptr->cup_type, (__int64)", cup_type:");
                if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                  v48 = __asan_report_store8(v3 + 288, ", cup_type:");
                *(_QWORD *)(v3 + 288) = v48;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v47,
                  (const char *const *)(v3 + 288));
                *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v14 = 0;
              }
              else
              {
                v14 = 1;
              }
            }
          }
        }
      }
      else
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
          "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
          "checkOrderFormualAffixDuplicate",
          560);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                v12,
                (const char (*)[53])"[BARTENDER] findBartenderOrderExcelConfig, order_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
        v49 = 0;
        goto LABEL_68;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    }
    v49 = 1;
LABEL_68:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v49 == 1 )
      v2 = 0;
    std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>>::~map((std::map<std::vector<unsigned int>,std::set<data::BartenderCupType>> *const)(v3 + 784));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 704));
  }
  result = v2;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
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
  return result;
};

// Line 593: range 0000000012ABF8CC-0000000012ABF98A
bool __cdecl ActivityBartenderExcelConfigMgr::isOrderCupTypeMeet(
        const ActivityBartenderExcelConfigMgr *const this,
        uint32_t order_id,
        uint32_t cup_type)
{
  const data::BartenderOrderExcelConfig *order_config_ptr; // [rsp+18h] [rbp-8h]

  order_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderOrderExcelConfig(this, order_id);
  if ( !order_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order_config_ptr->cup_type);
  }
  if ( order_config_ptr->cup_type == BARTENDER_CUP_NONE )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&order_config_ptr->cup_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&order_config_ptr->cup_type);
  }
  return cup_type == order_config_ptr->cup_type;
};

// Line 607: range 0000000012ABF98C-0000000012ABFDDB
uint32_t __cdecl ActivityBartenderExcelConfigMgr::chooseMeetOrderFromOrderVec(
        const ActivityBartenderExcelConfigMgr *const this,
        const std::vector<unsigned int> *order_vec,
        const std::vector<unsigned int> *formula_affix_vec,
        uint32_t cup_type)
{
  uint32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int> >,std::equal_to<std::vector<unsigned int> >,std::allocator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> > > > *p_formula_affix_to_order_map; // rdx
  std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int> >,std::equal_to<std::vector<unsigned int> >,std::allocator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> > > > *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  char *v12; // rsi
  unsigned int *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  std::__detail::_Node_const_iterator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> >,false,true>::pointer v17; // rax
  char v18; // al
  int v19; // eax
  uint32_t result; // eax
  char v24[240]; // [rsp+30h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 12 order_id:617 64 8 8 iter:612 96 8 9 <unknown> 128 8 15 __for_begin:617 160 8 13 __for_end:617";
  *(_QWORD *)(v5 + 16) = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromOrderVec;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -202116352;
  if ( std::vector<unsigned int>::empty(order_vec) )
  {
    v4 = 0;
  }
  else
  {
    p_formula_affix_to_order_map = &this->formula_affix_to_order_map;
    if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 64, order_vec);
    *(std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int> >,std::equal_to<std::vector<unsigned int> >,std::allocator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> > > >::const_iterator *)(v5 + 64) = std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int>>,std::equal_to<std::vector<unsigned int>>,std::allocator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>>>::find(p_formula_affix_to_order_map, formula_affix_vec);
    v9 = &this->formula_affix_to_order_map;
    if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 96, formula_affix_vec);
    *(std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int> >,std::equal_to<std::vector<unsigned int> >,std::allocator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> > > >::const_iterator *)(v5 + 96) = std::unordered_map<std::vector<unsigned int>,std::unordered_set<unsigned int>,boost::hash<std::vector<unsigned int>>,std::equal_to<std::vector<unsigned int>>,std::allocator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>>>::end(v9);
    v10 = (char *)(v5 + 96);
    v11 = std::__detail::operator==<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> >,true> *)(v5 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> >,true> *)(v5 + 96));
    *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      v4 = 0;
    }
    else
    {
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 128, v10);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 128) = std::vector<unsigned int>::begin(order_vec);
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 160, v10);
      *(std::vector<unsigned int>::const_iterator *)(v5 + 160) = std::vector<unsigned int>::end(order_vec);
      while ( 1 )
      {
        v12 = (char *)(v5 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v5 + 160)) )
        {
          v19 = 1;
          goto LABEL_34;
        }
        *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
        v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 128));
        v14 = (int *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v15 = *v14;
        v16 = *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000);
        if ( v16 != 0 && v16 <= 3 )
        {
          LOBYTE(v12) = v16 != 0;
          __asan_report_store4(v5 + 48, v12);
        }
        *(_DWORD *)(v5 + 48) = v15;
        v17 = std::__detail::_Node_const_iterator<std::pair<std::vector<unsigned int> const,std::unordered_set<unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::vector<unsigned int>,std::unordered_set<unsigned int> >,false,true> *const)(v5 + 64));
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                &v17->second,
                (const unsigned int *)(v5 + 48)) )
          goto LABEL_27;
        if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v5 + 48);
        if ( ActivityBartenderExcelConfigMgr::isOrderCupTypeMeet(this, *(_DWORD *)(v5 + 48), cup_type) )
          v18 = 1;
        else
LABEL_27:
          v18 = 0;
        if ( v18 )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 128));
      }
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v5 + 48);
      v4 = *(_DWORD *)(v5 + 48);
      v19 = 0;
LABEL_34:
      if ( v19 == 1 )
        v4 = 0;
    }
  }
  result = v4;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 629: range 0000000012ABFDDC-0000000012AC001E
uint32_t __fastcall ActivityBartenderExcelConfigMgr::chooseMeetOrderFromTask(
        const ActivityBartenderExcelConfigMgr *const this,
        uint32_t quest_id,
        const std::vector<unsigned int> *formula_affix_vec,
        uint32_t cup_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  uint32_t result; // eax
  const data::BartenderTaskOrderExcelConfig *config_ptr; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 quest_id:628 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromTask;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = quest_id;
  config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderTaskOrderExcelConfig(
                 this,
                 *(unsigned int *)(v4 + 48));
  if ( config_ptr )
  {
    result = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromOrderVec(
               this,
               &config_ptr->order_id,
               formula_affix_vec,
               cup_type);
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "chooseMeetOrderFromTask",
      633);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[57])"[Bartender] findBartenderTaskOrderExcelConfig, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 640: range 0000000012AC0020-0000000012AC0262
uint32_t __fastcall ActivityBartenderExcelConfigMgr::chooseMeetOrderFromLevel(
        const ActivityBartenderExcelConfigMgr *const this,
        uint32_t level_id,
        const std::vector<unsigned int> *formula_affix_vec,
        uint32_t cup_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  uint32_t result; // eax
  const data::BartenderLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 level_id:639 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = level_id;
  level_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderLevelExcelConfig(
                       this,
                       *(unsigned int *)(v4 + 48));
  if ( level_config_ptr )
  {
    result = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromOrderVec(
               this,
               &level_config_ptr->order_list,
               formula_affix_vec,
               cup_type);
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityBartenderExcelConfig.cpp",
      "chooseMeetOrderFromLevel",
      644);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[60])"[Bartender] findBartenderLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0;
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

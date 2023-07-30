// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GadgetExcelConfig.cpp

// Line 20: range 000000001444EFBE-000000001444F1A1
int32_t __cdecl GadgetExcelConfigMgr::checkConfig(GadgetExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GadgetExcelConfigMgr::checkInteractConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GadgetExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v5, (const char (*)[26])"checkInteractConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 30: range 000000001444F1A2-000000001444F385
int32_t __cdecl GadgetExcelConfigMgr::rewriteConfig(GadgetExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GadgetExcelConfigMgr::rewriteInteractExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GadgetExcelConfig.cpp",
      "rewriteConfig",
      33);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v7 == (char *)v2 )
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

// Line 40: range 000000001444F386-000000001444FC0D
int32_t __cdecl GadgetExcelConfigMgr::checkInteractConfig(
        const GadgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  data::InteractActionType action_type; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::GadgetInteractExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GadgetInteractExcelConfig> >::type *interact_id; // [rsp+30h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GadgetInteractExcelConfig> >::type *interact_config; // [rsp+38h] [rbp-198h]
  const std::vector<data::GadgetInteractActionConfig> *__for_range_0; // [rsp+40h] [rbp-190h]
  const data::GadgetInteractActionConfig *action_config; // [rsp+48h] [rbp-188h]
  char v20[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 14 __for_begin:42 64 8 12 __for_end:42 96 8 14 __for_begin:63 128 8 12 __for_end:63 160 3"
                        "2 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GadgetExcelConfigMgr::checkInteractConfig;
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
  __for_range = &this->gadget_interact_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false> *const)(v2 + 32));
    interact_id = std::get<0ul,unsigned int const,data::GadgetInteractExcelConfig>(v15);
    interact_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GadgetInteractExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GadgetInteractExcelConfig>(v15);
    if ( GadgetExcelConfigMgr::checkInteractConditions(this, txt_config_mgr, &interact_config->cond_list) )
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
        "./src/txt_data_manual/GadgetExcelConfig.cpp",
        "checkInteractConfig",
        47);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v5, (const char (*)[10])byte_1AD78A00);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, interact_id);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])byte_1AD78A40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    else if ( GadgetExcelConfigMgr::checkInteractCosts(this, txt_config_mgr, interact_config) )
    {
      ret = -1;
    }
    else if ( GadgetExcelConfigMgr::checkInteractForbidConfig(this, txt_config_mgr, interact_config) )
    {
      ret = -1;
    }
    else
    {
      __for_range_0 = &interact_config->action_list;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, txt_config_mgr);
      *(std::vector<data::GadgetInteractActionConfig>::const_iterator *)(v2 + 96) = std::vector<data::GadgetInteractActionConfig>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, txt_config_mgr);
      *(std::vector<data::GadgetInteractActionConfig>::const_iterator *)(v2 + 128) = std::vector<data::GadgetInteractActionConfig>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *)(v2 + 96),
                (const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *)(v2 + 128)) )
      {
        action_config = __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&action_config->action_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&action_config->action_type);
        }
        action_type = action_config->action_type;
        if ( action_type == INTERACT_ACTION_STATE )
        {
          if ( !std::vector<unsigned int>::size(&action_config->param) )
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
              "./src/txt_data_manual/GadgetExcelConfig.cpp",
              "checkInteractConfig",
              70);
            v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 224),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v9, (const char (*)[26])byte_1AD78A80);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else if ( action_type == INTERACT_ACTION_CONSUME_REGIONAL_PLAY_VAR
               && std::vector<unsigned int>::size(&action_config->param) <= 1 )
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
            "./src/txt_data_manual/GadgetExcelConfig.cpp",
            "checkInteractConfig",
            77);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v10, (const char (*)[40])byte_1AD78AC0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, interact_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        __gnu_cxx::__normal_iterator<data::GadgetInteractActionConfig const*,std::vector<data::GadgetInteractActionConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GadgetInteractActionConfig*,std::vector<data::GadgetInteractActionConfig> > *const)(v2 + 96));
      }
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
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

// Line 90: range 000000001444FC0E-000000001445084A
int32_t __cdecl GadgetExcelConfigMgr::checkInteractCosts(
        const GadgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::GadgetInteractExcelConfig *interact_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *p_id; // rdi
  uint32_t id; // edx
  common::milog::MiLogStream *p_interact_id; // rdi
  uint32_t v10; // edx
  ItemExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // r14
  const char *v13; // rsi
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // rdi
  uint32_t v16; // edx
  int32_t result; // eax
  int32_t ret; // [rsp+20h] [rbp-210h]
  data::ItemType item_type; // [rsp+24h] [rbp-20Ch]
  std::vector<data::IdCountConfig> *__for_range; // [rsp+30h] [rbp-200h]
  const data::IdCountConfig *id_count_config; // [rsp+38h] [rbp-1F8h]
  char v24[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 8 14 __for_begin:94 80 8 12 __for_end:94 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <un"
                        "known> 304 32 9 <unknown> 368 48 19 cost_item_id_set:93";
  *(_QWORD *)(v3 + 16) = GadgetExcelConfigMgr::checkInteractCosts;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862733] = -202116109;
  ret = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 368));
  __for_range = &interact_config->cost_items;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 48) = std::vector<data::IdCountConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 80) = std::vector<data::IdCountConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 80)) )
  {
    id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&id_count_config->id);
    }
    if ( id_count_config->id )
    {
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
      {
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 112, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GadgetExcelConfig.cpp",
          "checkInteractCosts",
          102);
        p_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 112),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_id = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        id = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_id = (common::milog::MiLogStream *)&interact_config->interact_id;
          __asan_report_load4(&interact_config->interact_id);
        }
        common::milog::MiLogStream::operator()(p_id, &byte_1AD78C00, interact_config->interact_id, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( !id_count_config->count )
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GadgetExcelConfig.cpp",
          "checkInteractCosts",
          108);
        p_interact_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 176),
                          (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_interact_id = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        v10 = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_interact_id = (common::milog::MiLogStream *)&interact_config->interact_id;
          __asan_report_load4(&interact_config->interact_id);
        }
        common::milog::MiLogStream::operator()(p_interact_id, &byte_1AD78C60, interact_config->interact_id, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      v11 = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      item_type = ItemExcelConfigMgr::getItemType(v11, id_count_config->id);
      if ( item_type != ITEM_MATERIAL )
      {
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GadgetExcelConfig.cpp",
          "checkInteractCosts",
          115);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = data::enumValToStr(item_type, (__int64)"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config->id);
        }
        v14 = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&interact_config->interact_id);
        }
        common::milog::MiLogStream::operator()(v12, &byte_1AD78CC0, interact_config->interact_id, v14, v13);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
        *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             (std::set<unsigned int> *)(v3 + 368),
             &id_count_config->id) )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GadgetExcelConfig.cpp",
          "checkInteractCosts",
          121);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (common::milog::MiLogStream *)&id_count_config->id;
          __asan_report_load4(&id_count_config->id);
        }
        v16 = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&interact_config->interact_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v15 = (common::milog::MiLogStream *)&interact_config->interact_id;
          __asan_report_load4(&interact_config->interact_id);
        }
        common::milog::MiLogStream::operator()(v15, &byte_1AD78D20, interact_config->interact_id, v16);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 368), &id_count_config->id);
      }
    }
    __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 368));
  result = ret;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 139: range 000000001445084C-0000000014450BE9
int32_t __cdecl GadgetExcelConfigMgr::checkGadgetConfig(
        GadgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  int32_t result; // eax
  data::GadgetExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetExcelConfig>,false,false>::reference v11; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GadgetExcelConfig> >::type *gadget_config; // [rsp+28h] [rbp-D8h]
  char v13[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:140 64 8 13 __for_end:140 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GadgetExcelConfigMgr::checkGadgetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->gadget_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GadgetExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GadgetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GadgetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GadgetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GadgetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetExcelConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_19;
    }
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::GadgetExcelConfig>(v11);
    gadget_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GadgetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GadgetExcelConfig>(v11);
    if ( *(_BYTE *)(((unsigned __int64)&gadget_config->chain_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_config - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config->chain_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&gadget_config->chain_id);
    }
    if ( gadget_config->chain_id
      && !data::GadgetExcelConfigMgrBase::findGadgetChainExcelConfig(this, gadget_config->chain_id) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/GadgetExcelConfig.cpp",
    "checkGadgetConfig",
    146);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v6, (const char (*)[30])byte_1AD78E20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &gadget_config->chain_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v8 = 0;
LABEL_19:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v13 == (char *)v3 )
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

// Line 155: range 0000000014450BEA-0000000014450E06
int32_t __cdecl GadgetExcelConfigMgr::rewriteInteractExcelConfig(
        GadgetExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::GadgetInteractExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::GadgetInteractExcelConfig> >::type *interact_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:156 64 8 13 __for_end:156";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>::__node_type *)GadgetExcelConfigMgr::rewriteInteractExcelConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->gadget_interact_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GadgetInteractExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::GadgetInteractExcelConfig>(__in);
    interact_config = std::get<1ul,unsigned int const,data::GadgetInteractExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &interact_config->cost_items,
      (unsigned int *)8);
    common::tools::MiscUtils::removeEmptyElement<data::GadgetInteractCond,data::InteractCondType data::GadgetInteractCond::*>(
      &interact_config->cond_list,
      (data::InteractCondType *)8);
    common::tools::MiscUtils::removeEmptyElement<data::GadgetInteractActionConfig,data::InteractActionType data::GadgetInteractActionConfig::*>(
      &interact_config->action_list,
      (data::InteractActionType *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetInteractExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 168: range 0000000014450E08-0000000014450E9A
std::set<unsigned int> *__cdecl GadgetExcelConfigMgr::getGadgetChainIdSet(
        std::set<unsigned int> *retstr,
        const GadgetExcelConfigMgr *const this)
{
  data::GadgetChainExcelConfigMap *p_gadget_chain_excel_config_map; // rsi

  p_gadget_chain_excel_config_map = &this->gadget_chain_excel_config_map;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_gadget_chain_excel_config_map = (data::GadgetChainExcelConfigMap *)48;
    __asan_report_store_n(retstr, 48LL);
  }
  common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::GadgetChainExcelConfig>>(
    retstr,
    p_gadget_chain_excel_config_map);
  return retstr;
};

// Line 173: range 0000000014450E9C-00000000144527BF
int32_t __cdecl GadgetExcelConfigMgr::checkInteractConditions(
        const GadgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::vector<data::GadgetInteractCond> *cond_list)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  int cond_type; // eax
  common::milog::MiLogStream *v8; // rax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const std::string *v22; // rax
  MaterialExcelConfigMgr *v23; // rcx
  int v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  const std::string *v33; // rax
  OfferingExcelConfigMgr *p_offering_config_mgr; // rcx
  int v35; // eax
  __int64 v36; // rsi
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  const std::string *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  const std::string *v43; // rax
  int v44; // eax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int32_t ret; // [rsp+2Ch] [rbp-454h]
  const data::GadgetInteractCond *cond; // [rsp+38h] [rbp-448h]
  char v54[1072]; // [rsp+50h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 4 22 widget_material_id:187 48 4 15 material_id:211 64 4 26 regional_play_val_type:229 80 "
                        "4 17 val_threshold:230 96 4 15 offering_id:247 112 4 24 offering_level_limit:262 128 8 15 __for_"
                        "begin:175 160 8 13 __for_end:175 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32"
                        " 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 "
                        "9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GadgetExcelConfigMgr::checkInteractConditions;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::vector<data::GadgetInteractCond>::const_iterator *)(v3 + 128) = std::vector<data::GadgetInteractCond>::begin(cond_list);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::vector<data::GadgetInteractCond>::const_iterator *)(v3 + 160) = std::vector<data::GadgetInteractCond>::end(cond_list);
  while ( 1 )
  {
    v6 = (char *)(v3 + 160);
    if ( !__gnu_cxx::operator!=<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>(
            (const __gnu_cxx::__normal_iterator<const data::GadgetInteractCond*,std::vector<data::GadgetInteractCond> > *)(v3 + 128),
            (const __gnu_cxx::__normal_iterator<const data::GadgetInteractCond*,std::vector<data::GadgetInteractCond> > *)(v3 + 160)) )
      break;
    cond = __gnu_cxx::__normal_iterator<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::GadgetInteractCond*,std::vector<data::GadgetInteractCond> > *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->cond_type);
    }
    cond_type = cond->cond_type;
    if ( cond_type == 4 )
    {
      if ( std::vector<std::string>::size(&cond->param) > 1 )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 96, v6);
        *(_DWORD *)(v3 + 96) = 0;
        v30 = std::vector<std::string>::operator[](&cond->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v30, (unsigned int *)(v3 + 96), 1) )
        {
          *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GadgetExcelConfig.cpp",
            "checkInteractConditions",
            250);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v32 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v31,
                  (const char (*)[27])" parse offering_id failed:");
          v33 = std::vector<std::string>::operator[](&cond->param, 0LL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, v33);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
          *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          p_offering_config_mgr = &txt_config_mgr->offering_config_mgr;
          v35 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v35 != 0 && (char)v35 <= 3 )
            __asan_report_load4(v3 + 96);
          v36 = *(unsigned int *)(v3 + 96);
          if ( !OfferingExcelConfigMgr::isOfferingIdValid(p_offering_config_mgr, v36) )
          {
            *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GadgetExcelConfig.cpp",
              "checkInteractConditions",
              257);
            v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v37,
                    (const char (*)[14])" offering id:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v39, (const char (*)[15])"does not exist");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
            *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 112, v36);
            *(_DWORD *)(v3 + 112) = 0;
            v40 = std::vector<std::string>::operator[](&cond->param, 1uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v40, (unsigned int *)(v3 + 112), 1) )
            {
              *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GadgetExcelConfig.cpp",
                "checkInteractConditions",
                265);
              v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 832),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v42 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      v41,
                      (const char (*)[36])" parse offering_level_limit failed:");
              v43 = std::vector<std::string>::operator[](&cond->param, 1uLL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, v43);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
              *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v44 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v44 != 0 && (char)v44 <= 3 )
                __asan_report_load4(v3 + 112);
              if ( !*(_DWORD *)(v3 + 112) )
              {
                *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 896, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 896),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GadgetExcelConfig.cpp",
                  "checkInteractConditions",
                  271);
                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 896),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v45,
                  (const char (*)[45])"offering_level_limit must be larger than 0: ");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
                *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
        }
      }
      else
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
          "./src/txt_data_manual/GadgetExcelConfig.cpp",
          "checkInteractConditions",
          243);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
          v29,
          (const char (*)[69])" cond param not enough, param1: offering id, param2: offering level.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
        *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    }
    else
    {
      if ( cond_type > 4 )
        goto LABEL_90;
      switch ( cond_type )
      {
        case 3:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64, v6);
          *(_DWORD *)(v3 + 64) = 0;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 80, v6);
          *(_DWORD *)(v3 + 80) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,float &>(
                 &cond->param,
                 (unsigned int *)(v3 + 64),
                 (float *)(v3 + 80),
                 (float *)&cond->param) )
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
              "./src/txt_data_manual/GadgetExcelConfig.cpp",
              "checkInteractConditions",
              233);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v28,
              (const char (*)[52])"parse regional_play_val_type and val_threshold fail");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          break;
        case 1:
          if ( std::vector<std::string>::empty(&cond->param) )
          {
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
              "./src/txt_data_manual/GadgetExcelConfig.cpp",
              "checkInteractConditions",
              183);
            v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 192),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v8,
              (const char (*)[19])" cond param empty.");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
            *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 32, v6);
            *(_DWORD *)(v3 + 32) = 0;
            v9 = std::vector<std::string>::operator[](&cond->param, 0LL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v3 + 32), 1) )
            {
              *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 256, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GadgetExcelConfig.cpp",
                "checkInteractConditions",
                190);
              v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 256),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      v10,
                      (const char (*)[34])" parse widget_material_id failed:");
              v12 = std::vector<std::string>::operator[](&cond->param, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
              *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              p_material_config_mgr = &txt_config_mgr->material_config_mgr;
              v14 = *(unsigned __int8 *)(((v3 + 32) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v14 != 0 && (char)v14 <= 3 )
                __asan_report_load4(v3 + 32);
              if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                      p_material_config_mgr,
                      *(unsigned int *)(v3 + 32)) )
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
                  "./src/txt_data_manual/GadgetExcelConfig.cpp",
                  "checkInteractConditions",
                  197);
                v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 320),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v15,
                        (const char (*)[21])" widget_material_id:");
                v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v16,
                        (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v17,
                  (const char (*)[27])" not found in item config.");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
                *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          break;
        case 2:
          if ( std::vector<std::string>::empty(&cond->param) )
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
              "./src/txt_data_manual/GadgetExcelConfig.cpp",
              "checkInteractConditions",
              207);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v18,
              (const char (*)[19])" cond param empty.");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          else
          {
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 48, v6);
            *(_DWORD *)(v3 + 48) = 0;
            v19 = std::vector<std::string>::operator[](&cond->param, 0LL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v3 + 48), 1) )
            {
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GadgetExcelConfig.cpp",
                "checkInteractConditions",
                214);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      v20,
                      (const char (*)[27])" parse material_id failed:");
              v22 = std::vector<std::string>::operator[](&cond->param, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            else
            {
              v23 = &txt_config_mgr->material_config_mgr;
              v24 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v24 != 0 && (char)v24 <= 3 )
                __asan_report_load4(v3 + 48);
              if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v23, *(unsigned int *)(v3 + 48)) )
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
                  "./src/txt_data_manual/GadgetExcelConfig.cpp",
                  "checkInteractConditions",
                  221);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v25,
                        (const char (*)[14])" material_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v27,
                  (const char (*)[27])" not found in item config.");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
                *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          break;
        default:
LABEL_90:
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GadgetExcelConfig.cpp",
            "checkInteractConditions",
            279);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v46, (const char (*)[12])" cond type:");
          v48 = common::milog::MiLogStream::operator<<<data::InteractCondType,(data::InteractCondType*)0>(
                  v47,
                  &cond->cond_type);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v48, (const char (*)[16])" not supported.");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          break;
      }
    }
    __gnu_cxx::__normal_iterator<data::GadgetInteractCond const*,std::vector<data::GadgetInteractCond>>::operator++((__gnu_cxx::__normal_iterator<const data::GadgetInteractCond*,std::vector<data::GadgetInteractCond> > *const)(v3 + 128));
  }
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 290: range 00000000144527C0-0000000014452A37
int32_t __cdecl GadgetExcelConfigMgr::checkInteractForbidConfig(
        const GadgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::GadgetInteractExcelConfig *interact_config)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GadgetExcelConfigMgr::checkInteractForbidConfig;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  v6 = ((_BYTE)interact_config + 108) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&interact_config->is_mp_mode_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&interact_config->is_mp_mode_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&interact_config->is_mp_mode_interact, v6, v7);
  if ( interact_config->is_mp_mode_interact )
    goto LABEL_13;
  if ( *(char *)(((unsigned __int64)&interact_config->is_guest_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&interact_config->is_guest_interact, v6, &interact_config->is_guest_interact);
  if ( interact_config->is_guest_interact )
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
      "./src/txt_data_manual/GadgetExcelConfig.cpp",
      "checkInteractForbidConfig",
      293);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v8, (const char (*)[58])byte_1AD79580);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &interact_config->interact_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = -1;
  }
  else
  {
LABEL_13:
    result = 0;
  }
  if ( v12 == (char *)v3 )
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

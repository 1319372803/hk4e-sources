// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGachaExcelConfig.cpp

// Line 20: range 0000000012C32D82-0000000012C32FAA
int32_t __cdecl ActivityGachaExcelConfigMgr::rewriteConfig(
        ActivityGachaExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityGachaExcelConfigMgr::rewriteGachaTargetConfig(this, txt_config_mgr)
    || ActivityGachaExcelConfigMgr::rewriteGachaStageConfig(this, txt_config_mgr)
    || ActivityGachaExcelConfigMgr::rewriteGachaRobotConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
      "rewriteConfig",
      25);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 32: range 0000000012C32FAC-0000000012C33C9C
int32_t __cdecl ActivityGachaExcelConfigMgr::rewriteGachaTargetConfig(
        ActivityGachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::ActivityGachaTargetExcelConfig *v5; // r8
  data::ActivityGachaTargetType *p_type; // rax
  int type; // eax
  uint32_t *p_target_id; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const char *v19; // rsi
  common::milog::MiLogStream *v20; // rcx
  data::ActivityGachaTargetType v21; // edi
  char v22; // al
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  std::set<unsigned int> *v28; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-24Ch]
  data::ActivityGachaTargetExcelConfigMap *__for_range; // [rsp+18h] [rbp-248h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::reference v38; // [rsp+20h] [rbp-240h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig> >::type *config; // [rsp+30h] [rbp-230h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-228h]
  char v41[544]; // [rsp+40h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 4 9 <unknown> 48 4 11 group_id:69 64 8 14 __for_begin:34 96 8 12 __for_end:34 128 8 14 __f"
                        "or_begin:69 160 8 12 __for_end:69 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 3"
                        "2 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::rewriteGachaTargetConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->activity_gacha_target_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96)) )
  {
    v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64));
    std::get<0ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v38);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v38);
    p_type = &config->type;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    type = config->type;
    if ( type == 3 )
    {
      p_target_id = &config->target_id;
      v15 = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::emplace<unsigned int const&,data::ActivityGachaTargetExcelConfig const&>(
              &this->monster_config_map,
              &config->target_id,
              config,
              (const unsigned int *)&this->monster_config_map,
              v5);
      if ( !v15.second )
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "rewriteGachaTargetConfig",
          60);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v16, (const char (*)[32])byte_1AA5AB80);
        p_target_id = &config->target_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &config->target_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      if ( type > 3 )
        goto LABEL_29;
      if ( type == 1 )
      {
        p_target_id = &config->target_id;
        v9 = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::emplace<unsigned int const&,data::ActivityGachaTargetExcelConfig const&>(
               &this->gather_config_map,
               &config->target_id,
               config,
               (const unsigned int *)&this->gather_config_map,
               v5);
        if ( !v9.second )
        {
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
            "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
            "rewriteGachaTargetConfig",
            42);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 192),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v10, (const char (*)[32])byte_1AA5AB80);
          p_target_id = &config->target_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &config->target_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        if ( type != 2 )
        {
LABEL_29:
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
            "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
            "rewriteGachaTargetConfig",
            66);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = byte_1AA5ABC0;
          v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v18, (const char (*)[22])byte_1AA5ABC0);
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&config->type);
          }
          v21 = config->type;
          v22 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
          if ( v22 != 0 && v22 <= 3 )
          {
            v21 = v2 + 32;
            LOBYTE(v19) = v22 != 0;
            __asan_report_store4(v2 + 32, v19);
          }
          *(_DWORD *)(v2 + 32) = v21;
          p_target_id = (uint32_t *)(v2 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          goto LABEL_36;
        }
        p_target_id = &config->target_id;
        v12 = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::emplace<unsigned int const&,data::ActivityGachaTargetExcelConfig const&>(
                &this->elem_config_map,
                &config->target_id,
                config,
                (const unsigned int *)&this->elem_config_map,
                v5);
        if ( !v12.second )
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
            "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
            "rewriteGachaTargetConfig",
            51);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v13, (const char (*)[32])byte_1AA5AB80);
          p_target_id = &config->target_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->target_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
LABEL_36:
    __for_range_0 = &config->group_id_list;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, p_target_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, p_target_id);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v23 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v25 = (int *)v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      v26 = *v25;
      v27 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v23) = v27 != 0;
        __asan_report_store4(v2 + 48, v23);
      }
      *(_DWORD *)(v2 + 48) = v26;
      v28 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->group_id_2_target_map,
              (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
      v29 = std::set<unsigned int>::insert(v28, &config->target_id);
      if ( !v29.second )
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "rewriteGachaTargetConfig",
          73);
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v31 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v30, (const char (*)[28])byte_1AA5AC00);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v2 + 48));
        v33 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v32, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &config->target_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64));
  }
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
  }
  return result;
};

// Line 82: range 0000000012C33C9E-0000000012C340CD
int32_t __cdecl ActivityGachaExcelConfigMgr::rewriteGachaStageConfig(
        ActivityGachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  __int64 v9; // rsi
  uint32_t v10; // ecx
  char v11; // al
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::ActivityGachaStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v18[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 14 __for_begin:84 64 8 12 __for_end:84 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::rewriteGachaStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 64)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v15);
    if ( !std::vector<unsigned int>::empty(&config->stage_group_id_list) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->need_full_monster_die_stage_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->need_full_monster_die_stage_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->need_full_monster_die_stage_id);
      }
      if ( this->need_full_monster_die_stage_id )
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "rewriteGachaStageConfig",
          90);
        v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
               v5,
               (const char (*)[54])"[GACHA] need_full_monster_die_stage_id need single : ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v6,
               &this->need_full_monster_die_stage_id);
        v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])",id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        ret = -1;
        break;
      }
      v9 = ((unsigned __int8)id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v10 = *id;
      v11 = *(_BYTE *)(((unsigned __int64)&this->need_full_monster_die_stage_id >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v9) = v11 != 0;
        __asan_report_store4(&this->need_full_monster_die_stage_id, v9);
      }
      this->need_full_monster_die_stage_id = v10;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v18 == (char *)v2 )
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

// Line 101: range 0000000012C340CE-0000000012C34584
int32_t __cdecl ActivityGachaExcelConfigMgr::rewriteGachaRobotConfig(
        ActivityGachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  __int64 v6; // rax
  int32_t result; // eax
  data::ActivityGachaRobotExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *id; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *config; // [rsp+38h] [rbp-F8h]
  char v12[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:103 64 8 13 __for_end:103 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::rewriteGachaRobotConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  __for_range = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 64)) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v9);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->type);
    }
    if ( config->type == ROBOT_TYPE_NORMAL )
    {
      std::vector<unsigned int>::push_back(&this->normal_robot_vec, id);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->type);
      }
      if ( config->type == ROBOT_TYPE_HIDDEN )
      {
        std::vector<unsigned int>::push_back(&this->hidden_robot_vec, id);
      }
      else
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "rewriteGachaRobotConfig",
          115);
        v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               (common::milog::MiLogStream *const)(v2 + 128),
               (const char (*)[21])"unknow config.type: ");
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->type);
        }
        v6 = (__int64)data::enumValToStr(config->type, (__int64)"unknow config.type: ");
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          v6 = __asan_report_store8(v2 + 96, "unknow config.type: ");
        *(_QWORD *)(v2 + 96) = v6;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)(v2 + 96));
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 122: range 0000000012C34586-0000000012C347CB
int32_t __cdecl ActivityGachaExcelConfigMgr::checkConfig(
        ActivityGachaExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityGachaExcelConfigMgr::checkGachaRobotConfig(this, txt_config_mgr)
    || ActivityGachaExcelConfigMgr::checkGachaTargetConfig(this, txt_config_mgr)
    || ActivityGachaExcelConfigMgr::checkGachaStageConfig(this, txt_config_mgr)
    || ActivityGachaExcelConfigMgr::checkGachaBaseConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
      "checkConfig",
      128);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"checkConfig failed");
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

// Line 135: range 0000000012C347CC-0000000012C34D51
int32_t __cdecl ActivityGachaExcelConfigMgr::checkGachaRobotConfig(
        const ActivityGachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  uint32_t *p_furniture_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-12Ch]
  data::ActivityGachaRobotExcelConfigMap *__for_range; // [rsp+18h] [rbp-128h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::reference v16; // [rsp+20h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *id; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *config; // [rsp+30h] [rbp-110h]
  char v19[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:137 64 8 13 __for_end:137 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::checkGachaRobotConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->activity_gacha_robot_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaRobotExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false> *)(v2 + 64)) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v16);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaRobotExcelConfig>(v16);
    p_home_config_mgr = &txt_config_mgr->home_config_mgr;
    p_furniture_id = &config->furniture_id;
    if ( *(_BYTE *)(((unsigned __int64)p_furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_furniture_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_furniture_id);
    }
    if ( !data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(p_home_config_mgr, config->furniture_id) )
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
        "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
        "checkGachaRobotConfig",
        143);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             v7,
             (const char (*)[30])"[GACHA] invalid furniture_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->furniture_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])", id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaRobotExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( std::vector<unsigned int>::size(&this->normal_robot_vec) <= 1
    || std::vector<unsigned int>::size(&this->hidden_robot_vec) <= 1 )
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
      "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
      "checkGachaRobotConfig",
      150);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 160),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      v12,
      (const char (*)[59])"[GACHA] normal_robot_vec size or hidden_robot_vec size < 2");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    ret = -1;
  }
  result = ret;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 157: range 0000000012C34D52-0000000012C3593C
int32_t __cdecl ActivityGachaExcelConfigMgr::checkGachaTargetConfig(
        const ActivityGachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // edx
  char *v10; // rsi
  char v11; // r14
  char v12; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int32_t result; // eax
  char v19; // [rsp+Dh] [rbp-2C3h]
  char v20; // [rsp+Eh] [rbp-2C2h]
  char v21; // [rsp+Fh] [rbp-2C1h]
  int32_t ret; // [rsp+28h] [rbp-2A8h]
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *__for_range; // [rsp+30h] [rbp-2A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::reference v25; // [rsp+38h] [rbp-298h]
  uint32_t *id; // [rsp+40h] [rbp-290h]
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *__for_range_0; // [rsp+50h] [rbp-280h]
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *__for_range_1; // [rsp+58h] [rbp-278h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::reference v29; // [rsp+60h] [rbp-270h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig> >::type *id_1; // [rsp+68h] [rbp-268h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::reference v31; // [rsp+80h] [rbp-250h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig> >::type *id_0; // [rsp+88h] [rbp-248h]
  const char *str_ptr; // [rsp+98h] [rbp-238h]
  char v34[560]; // [rsp+A0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 9 <unknown> 64 8 15 __for_begin:160 96 8 13 __for_end:160 128 8 15 __for_begin:169 160 8"
                        " 13 __for_end:169 192 8 15 __for_begin:181 224 8 13 __for_end:181 256 32 9 <unknown> 320 32 9 <u"
                        "nknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGachaExcelConfigMgr::checkGachaTargetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  ret = 0;
  __for_range = &this->gather_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v25);
    std::get<1ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v25);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *id, ITEM_LIMIT_GATHER) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
    "checkGachaTargetConfig",
    164);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 256),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         v7,
         (const char (*)[25])"[GACHA] invalid item_id:");
  v6 = (char *)id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    __for_range_0 = &this->elem_config_map;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 160);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 128),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 160)) )
        break;
      v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 128));
      id_0 = std::get<0ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v31);
      std::get<1ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v31);
      if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id_0);
      }
      str_ptr = data::enumValToStr((data::ElementType)*id_0);
      v11 = 0;
      v12 = 0;
      v21 = 0;
      v20 = 0;
      if ( !str_ptr )
        goto LABEL_29;
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      v11 = 1;
      v12 = 1;
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 320),
        str_ptr,
        (const std::allocator<char> *)(v3 + 48));
      v21 = 1;
      v20 = 1;
      if ( !(unsigned __int8)std::string::empty() )
        v19 = 0;
      else
LABEL_29:
        v19 = 1;
      if ( v20 )
        std::string::~string((void *)(v3 + 320));
      if ( v21 )
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      if ( v12 )
        std::allocator<char>::~allocator(v3 + 48);
      if ( v11 )
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v19 )
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "checkGachaTargetConfig",
          176);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v13,
                (const char (*)[25])"[GACHA] invalid elem_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &this->monster_config_map;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v10);
    *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v10);
    *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(__for_range_1);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 192),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v3 + 224)) )
    {
      v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 192));
      id_1 = std::get<0ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v29);
      std::get<1ul,unsigned int const,data::ActivityGachaTargetExcelConfig>(v29);
      p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id_1);
      }
      if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, *id_1) )
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "checkGachaTargetConfig",
          186);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v16,
                (const char (*)[28])"[GACHA] invalid monster_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v3 + 192));
    }
    v2 = ret;
  }
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 194: range 0000000012C3593E-0000000012C3661B
int32_t __cdecl ActivityGachaExcelConfigMgr::checkGachaStageConfig(
        const ActivityGachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const ActivityGachaExcelConfigMgr *v5; // rcx
  uint32_t *p_next_stage_id; // rax
  __int64 next_stage_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::vector<unsigned int>::size_type v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::vector<unsigned int>::size_type v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::vector<unsigned int>::size_type v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::vector<unsigned int>::size_type v25; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-29Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-298h]
  data::ActivityGachaStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-290h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::reference v33; // [rsp+28h] [rbp-288h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *id; // [rsp+30h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *config; // [rsp+38h] [rbp-278h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-268h]
  const unsigned int *group_id; // [rsp+50h] [rbp-260h]
  char v38[592]; // [rsp+60h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 4 15 target_size:213 64 8 15 __for_begin:197 96 8 13 __for_end:197 128 8 9 <unknown> 160 8"
                        " 9 <unknown> 192 8 9 <unknown> 224 8 15 __for_begin:220 256 8 13 __for_end:220 288 32 9 <unknown"
                        "> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::checkGachaStageConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  ret = 0;
  __for_range = &this->activity_gacha_stage_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false> *)(v2 + 96)) )
  {
    v33 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v33);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaStageExcelConfig>(v33);
    v5 = this;
    p_next_stage_id = &config->next_stage_id;
    if ( *(_BYTE *)(((unsigned __int64)p_next_stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_next_stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_next_stage_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_next_stage_id);
    }
    next_stage_id = config->next_stage_id;
    if ( !data::ActivityGachaExcelConfigMgrBase::findActivityGachaStageExcelConfig(v5, next_stage_id) )
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
        "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
        "checkGachaStageConfig",
        203);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v8,
             (const char (*)[31])"[GACHA] invalid next_stage_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->next_stage_id);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])", id:");
      next_stage_id = (__int64)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v12 = std::vector<unsigned int>::size(&config->group_id_list);
    if ( v12 != std::vector<unsigned int>::size(&config->group_num_list) )
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
        "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
        "checkGachaStageConfig",
        209);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v13,
              (const char (*)[31])"[GACHA] group_id_list.size(): ");
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      v15 = std::vector<unsigned int>::size(&config->group_id_list);
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        v15 = __asan_report_store8(v2 + 128, "[GACHA] group_id_list.size(): ");
      *(_QWORD *)(v2 + 128) = v15;
      v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v14,
              (const unsigned __int64 *)(v2 + 128));
      v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v16,
              (const char (*)[27])" != group_num_list.size():");
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      v18 = std::vector<unsigned int>::size(&config->group_num_list);
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        v18 = __asan_report_store8(v2 + 160, " != group_num_list.size():");
      *(_QWORD *)(v2 + 160) = v18;
      next_stage_id = v2 + 160;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v17,
        (const unsigned __int64 *)(v2 + 160));
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(char *)(((unsigned __int64)&config->is_tech >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_tech, next_stage_id, &config->is_tech);
    if ( config->is_tech )
      v19 = (unsigned int)std::vector<unsigned int>::size(&config->group_id_list);
    else
      v19 = 0LL;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v19);
    *(_DWORD *)(v2 + 48) = v19;
    v20 = *(unsigned int *)(v2 + 48);
    if ( v20 != std::vector<unsigned int>::size(&config->task_content_list) )
    {
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
        "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
        "checkGachaStageConfig",
        216);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v21,
              (const char (*)[22])"[GACHA] target_size: ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
      v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v23,
              (const char (*)[30])" != task_content_list.size():");
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      v25 = std::vector<unsigned int>::size(&config->task_content_list);
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        v25 = __asan_report_store8(v2 + 192, " != task_content_list.size():");
      *(_QWORD *)(v2 + 192) = v25;
      v19 = v2 + 192;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v24,
        (const unsigned __int64 *)(v2 + 192));
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->stage_group_id_list;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v19);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v19);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256)) )
    {
      v26 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
      group_id = v26;
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, *group_id) )
      {
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
          "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
          "checkGachaStageConfig",
          225);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v27, (const char (*)[26])byte_1AA5B440);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 224));
    }
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaStageExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
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

// Line 235: range 0000000012C3661C-0000000012C36A11
int32_t __cdecl ActivityGachaExcelConfigMgr::checkGachaBaseConfig(
        const ActivityGachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t robot_guar_rate; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  data::ActivityGachaBaseExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:237 64 8 13 __for_end:237 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::checkGachaBaseConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->activity_gacha_base_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaBaseExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ActivityGachaBaseExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGachaBaseExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&config->robot_guar_rate >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->robot_guar_rate >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->robot_guar_rate);
    }
    robot_guar_rate = config->robot_guar_rate;
    if ( *(_BYTE *)(((unsigned __int64)&config->robot_hidden_guar_rate >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->robot_hidden_guar_rate >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->robot_hidden_guar_rate);
    }
    if ( robot_guar_rate + config->robot_hidden_guar_rate > 0x64 )
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
        "./src/txt_data_manual/ActivityGachaExcelConfig.cpp",
        "checkGachaBaseConfig",
        241);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v6,
             (const char (*)[26])"[GACHA] robot_guar_rate: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->robot_guar_rate);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v8,
             (const char (*)[26])", robot_hidden_guar_rate:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->robot_hidden_guar_rate);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" sum > 100");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaBaseExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
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

// Line 249: range 0000000012C36A12-0000000012C36BD3
const data::ActivityGachaTargetExcelConfig *__fastcall ActivityGachaExcelConfigMgr::findConfigByGatherId(
        const ActivityGachaExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_gather_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityGachaTargetExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:248 64 8 8 iter:250 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::findConfigByGatherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_gather_config_map = &this->gather_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_gather_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gather_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// Line 262: range 0000000012C36BD4-0000000012C36D95
const data::ActivityGachaTargetExcelConfig *__fastcall ActivityGachaExcelConfigMgr::findConfigByElemId(
        const ActivityGachaExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_elem_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityGachaTargetExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:261 64 8 8 iter:263 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::findConfigByElemId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_elem_config_map = &this->elem_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_elem_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->elem_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// Line 275: range 0000000012C36D96-0000000012C36F57
const data::ActivityGachaTargetExcelConfig *__fastcall ActivityGachaExcelConfigMgr::findConfigByMonsterId(
        const ActivityGachaExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_monster_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v6; // rdx
  bool v7; // al
  const data::ActivityGachaTargetExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:274 64 8 8 iter:276 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::findConfigByMonsterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_monster_config_map = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_monster_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// Line 288: range 0000000012C36F58-0000000012C372F8
const data::ActivityGachaTargetExcelConfig *__fastcall ActivityGachaExcelConfigMgr::findConfigById(
        const ActivityGachaExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_gather_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v6; // rdx
  bool v7; // al
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_elem_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v9; // rdx
  bool v10; // al
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *p_monster_config_map; // rdx
  std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig> *v12; // rdx
  bool v13; // al
  const data::ActivityGachaTargetExcelConfig *result; // rax
  char v15[224]; // [rsp+10h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 6 id:287 64 8 8 iter:289 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::findConfigById;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_gather_config_map = &this->gather_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_gather_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gather_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    goto LABEL_20;
  p_elem_config_map = &this->elem_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v2 + 96);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_elem_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  v9 = &this->elem_config_map;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v9);
  v10 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
    goto LABEL_20;
  p_monster_config_map = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v2 + 128);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::find(p_monster_config_map, (const std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::key_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  v12 = &this->monster_config_map;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v2 + 48);
  *(std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::const_iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ActivityGachaTargetExcelConfig>::end(v12);
  v13 = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false> *)(v2 + 160));
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v13 )
LABEL_20:
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ActivityGachaTargetExcelConfig>,false,false> *const)(v2 + 64))->second;
  else
    result = 0LL;
  if ( v15 == (char *)v2 )
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

// Line 308: range 0000000012C372FA-0000000012C374BB
const std::set<unsigned int> *__fastcall ActivityGachaExcelConfigMgr::findTargetSetByGroupId(
        const ActivityGachaExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_group_id_2_target_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:307 64 8 8 iter:309 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGachaExcelConfigMgr::findTargetSetByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_2_target_map = &this->group_id_2_target_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_group_id_2_target_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->group_id_2_target_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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
